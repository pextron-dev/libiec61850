/*
 * Iec68150.c
 *
 *  Created on: 11 de jun de 2026
 *      Author: Eng-DPE
 */

#include "config.h"
#include "goose_receiver.h"
#include "goose_subscriber.h"
#include "hal_thread.h"
#include "iec61850_server.h"
#include "mms_value.h"
#include "static_model.h"
#include <math.h>
#include <signal.h>
#include <stack_config.h>
#include <stdio.h>
#include "sv_publisher.h"
#include "sv_subscriber.h"

#define PI 3.14159265f
#define DG_TO_RAD(ang) ((ang * PI) / 180)
#define RAND_OFFSET(range) (-range + ((float)rand() / (float)RAND_MAX) * 2 * range)

const char* DS_SWITCH_OPER[4] = {"CILO1$ST$EnaOpn$stVal", "CILO1$ST$EnaCls$stVal", "XCBR1$ST$Loc$stVal", "XCBR1$ST$Pos$stVal"};

float g_src_pshA_V_mag = 0;
float g_src_pshA_V_ang = 0;
float g_src_PhsA_Pf = 0;
float g_src_PhsA_W = 0;
float g_src_PhsA_VAr = 0;
float g_src_PhsA_VA = 0;

float g_src_pshB_mag = 0;
float g_src_pshB_ang = 0;
float g_src_PhsB_Pf = 0;
float g_src_PhsB_W = 0;
float g_src_PhsB_VAr = 0;
float g_src_PhsB_VA = 0;

float g_src_pshC_mag = 0;
float g_src_pshC_ang = 0;
float g_src_PhsC_Pf = 0;
float g_src_PhsC_W = 0;
float g_src_PhsC_VAr = 0;
float g_src_PhsC_VA = 0;

float g_src_VN_mag = 0;
float g_src_VN_ang = 0;

float g_load_pshA_V_mag = 0;
float g_load_pshA_V_ang = 0;
float g_load_pshB_mag = 0;
float g_load_pshB_ang = 0;
float g_load_pshC_mag = 0;
float g_load_pshC_ang = 0;
float g_load_VN_mag = 0;
float g_load_VN_ang = 0;

float g_VAB_mag = 0;
float g_VAB_ang = 0;
float g_VBC_mag = 0;
float g_VBC_ang = 0;
float g_VCA_mag = 0;
float g_VCA_ang = 0;

float g_Hz_mag = 60;

float g_IA_mag = 0;
float g_IA_ang = 0;

float g_IB_mag = 0;
float g_IB_ang = 0;

float g_IC_mag = 0;
float g_IC_ang = 0;

float g_IN_mag = 0;
float g_IN_ang = 0;

float g_TotVA = 0;
float g_TotVAr = 0;
float g_TotW = 0;
float g_TotPF = 0;

/* import IEC 61850 device model created from SCL-File */
extern IedModel iedModel;

IedServer g_iedServer = NULL;
GooseSubscriber g_subscriber = NULL;
uint64_t g_lastTimestamp;
GooseReceiver g_gooseReceiver = NULL;

SVPublisher g_svPublisher = NULL;
SVPublisher_ASDU g_asdu1 = NULL;
static float g_float1;
static float g_float2;
static float g_ts1;

static int running = 0;

void
sigint_handler(int signalId)
{
    running = 0;
}

static MmsValue*
unwrapMmsValue(MmsValue* value)
{
    while (value != NULL && MmsValue_getType(value) == MMS_STRUCTURE)
    {
        int size = MmsValue_getArraySize(value);

        if (size <= 0)
            return NULL;

        value = MmsValue_getElement(value, 0);
    }

    return value;
}

void
printDsElements(MmsValue* dataSetValues, const char* dataSetName, uint16_t nDataValues)
{
    char buffer_rx[2048] = "";
    const char** DATASET_ENTRIES = NULL;
    int ret = 0;
    int offset = 0;

    if (strcmp(dataSetName, "IEDR550SYS/LLN0$DS_SWITCH_OPER") == 0)
        DATASET_ENTRIES = DS_SWITCH_OPER;
    else
        return;

    for (int i = 0; i < nDataValues; i++)
    {

        MmsValue* element = MmsValue_getElement(dataSetValues, i);
        MmsValue* finalValue = unwrapMmsValue(element);

        switch (MmsValue_getType(finalValue))
        {
        case MMS_BOOLEAN: {
            bool value = MmsValue_getBoolean(finalValue);

            ret = snprintf(buffer_rx + offset, (sizeof(buffer_rx) - offset), "%s: %d\n", DATASET_ENTRIES[i],
                           value ? 1 : 0);
            break;
        }

        case MMS_BIT_STRING: {
            uint32_t value = MmsValue_getBitStringAsInteger(finalValue);

            ret = snprintf(buffer_rx + offset, (sizeof(buffer_rx) - offset), "%s: %u\n", DATASET_ENTRIES[i], value);
            break;
        }

        case MMS_INTEGER: {
            int32_t value = MmsValue_toInt32(finalValue);

            ret = snprintf(buffer_rx + offset, (sizeof(buffer_rx) - offset), "%s: %di\n", DATASET_ENTRIES[i], value);
            break;
        }

        case MMS_FLOAT: {
            float value = MmsValue_toFloat(finalValue);
            ret = snprintf(buffer_rx + offset, (sizeof(buffer_rx) - offset), "%s: %0.2f\n", DATASET_ENTRIES[i], value);
        };
        break;

        default:
            break;
        }

        if (ret > 0 && ret < (sizeof(buffer_rx) - offset))
        {
            offset += ret; // Update offset for the next write
        }
    }

    printf("%s", buffer_rx);
    memset(buffer_rx, 0, sizeof(buffer_rx));
    offset = 0;
}

static void
gooseListener(GooseSubscriber subscriber, void* parameter)
{
    printf("GOOSE event:\n");
    printf("  stNum: %u sqNum: %u\n", GooseSubscriber_getStNum(subscriber), GooseSubscriber_getSqNum(subscriber));
    printf("  timeToLive: %u\n", GooseSubscriber_getTimeAllowedToLive(subscriber));

    uint64_t timestamp = GooseSubscriber_getTimestamp(subscriber);

    printf("  timestamp: %u.%u\n", (uint32_t)(timestamp / 1000), (uint32_t)(timestamp % 1000));
    printf("  message is %s\n", GooseSubscriber_isValid(subscriber) ? "valid" : "INVALID");

    MmsValue* values = GooseSubscriber_getDataSetValues(subscriber);
    char* dataSetName = GooseSubscriber_getDataSet(subscriber);

    uint16_t nDataValues = MmsValue_getArraySize(values);

    char buffer[1024];

    MmsValue_printToBuffer(values, buffer, 1024);

    printf("\n\nDataset Values:\n\n");
    printDsElements(values, dataSetName, nDataValues);


    printf("  allData: %s\n", buffer);
}

int
checkHandler(void* parameter, MmsValue* ctlVal, bool test, bool interlockCheck, ClientConnection connection)
{
    (void)parameter;
    (void)ctlVal;
    (void)test;
    (void)interlockCheck;
    (void)connection;

    return 0;
}

static void
goCbEventHandler(MmsGooseControlBlock goCb, int event, void* parameter)
{
    printf("Access to GoCB: %s\n", MmsGooseControlBlock_getName(goCb));
    printf("         GoEna: %i\n", MmsGooseControlBlock_getGoEna(goCb));
}

static bool
Iec61850_InitGoose()
{
    g_gooseReceiver = GooseReceiver_create();
    GooseReceiver_setInterfaceId(g_gooseReceiver, IED_ETHERNET_INTERFACE_ID);
    GooseSubscriber subscriber = GooseSubscriber_create("IEDR550SYS/LLN0$GO$gcbSwitchOper", NULL);
    uint8_t dstMac[6] = {0x01, 0x0c, 0xcd, 0x01, 0x01, 0x00};
    GooseSubscriber_setDstMac(subscriber, dstMac);
    GooseSubscriber_setAppId(subscriber, 0x1001);
    GooseSubscriber_setListener(subscriber, gooseListener, NULL);
    GooseReceiver_addSubscriber(g_gooseReceiver, subscriber);
    GooseReceiver_start(g_gooseReceiver);
    IedServer_enableGoosePublishing(g_iedServer);
    return true;
}

 static bool
 Iec61850_InitSv()
{
     g_svPublisher = SVPublisher_create(NULL, IED_ETHERNET_INTERFACE_ID);

     g_asdu1 = SVPublisher_addASDU(g_svPublisher, "svpub1", NULL, 1);

     g_float2 = SVPublisher_ASDU_addFLOAT(g_asdu1);
     g_float1 = SVPublisher_ASDU_addFLOAT(g_asdu1);
     g_ts1 = SVPublisher_ASDU_addTimestamp(g_asdu1);

     SVPublisher_setupComplete(g_svPublisher);

     return true;
 }

bool
Iec61850_InitServer(void)
{
    g_iedServer = IedServer_create(&iedModel);
    g_lastTimestamp = Hal_getTimeInMs();

    /* MMS Server Config */

    IedServer_startThreadless(g_iedServer, IED_SERVER_PORT);

    /* GOOSE Config */
    IedServer_setGooseInterfaceId(g_iedServer, IED_ETHERNET_INTERFACE_ID);
    IedServer_setGoCBHandler(g_iedServer, goCbEventHandler, NULL);

    if (IedServer_isRunning(g_iedServer))
    {
        Iec61850_InitGoose();
        Iec61850_InitSv();
        return true;
    }
    else
    {
        return false;
    }
}

void
Iec61850_DeinitServer(void)
{
    /* stop MMS server - close TCP server socket and all client sockets */
    IedServer_stopThreadless(g_iedServer);
    IedServer_stopGoosePublishing(g_iedServer);
    IedServer_destroy(g_iedServer);
    g_iedServer = NULL;
}

static void
update_samples(void)
{
    g_Hz_mag = 60 + RAND_OFFSET(0.3);

    g_IA_mag = 300 + RAND_OFFSET(1);
    g_IA_ang = 30;
    g_IB_mag = 300 + RAND_OFFSET(2);
    g_IB_ang = 150;
    g_IC_mag = 300 + RAND_OFFSET(0.5);
    g_IC_ang = 270;

    g_src_pshA_V_mag = 127.0f + RAND_OFFSET(2);
    g_src_pshA_V_ang = 0;
    g_src_pshB_mag = 127.0f + RAND_OFFSET(2);
    g_src_pshB_ang = 120;
    g_src_pshC_mag = 127.0f + RAND_OFFSET(2);
    g_src_pshC_ang = -120;

    float real_VA = g_src_pshA_V_mag * cosf(DG_TO_RAD(g_load_pshA_V_ang));
    float img_VA = g_src_pshA_V_mag * sinf(DG_TO_RAD(g_load_pshA_V_ang));

    float real_VB = g_src_pshB_mag * cosf(DG_TO_RAD(g_load_pshB_ang));
    float img_VB = g_src_pshB_mag * sinf(DG_TO_RAD(g_load_pshB_ang));

    float real_VC = g_src_pshC_mag * cosf(DG_TO_RAD(g_load_pshC_ang));
    float img_VC = g_src_pshC_mag * sinf(DG_TO_RAD(g_load_pshC_ang));

    float real_IA = g_IA_mag * cosf(DG_TO_RAD(g_IA_ang));
    float img_IA = g_IA_mag * sinf(DG_TO_RAD(g_IA_ang));

    float real_IB = g_IB_mag * cosf(DG_TO_RAD(g_IB_ang));
    float img_IB = g_IB_mag * sinf(DG_TO_RAD(g_IB_ang));

    float real_IC = g_IC_mag * cosf(DG_TO_RAD(g_IC_ang));
    float img_IC = g_IC_mag * sinf(DG_TO_RAD(g_IC_ang));

    float real_VN = real_VA + real_VB + real_VC;
    float img_VN = img_VA + img_VB + img_VC;

    float real_IN = real_IA + real_IB + real_IC;
    float img_IN = img_IA + img_IB + img_IC;

    g_src_VN_mag = sqrt(pow((real_VA + real_VB + real_VC), 2) + pow((img_VA + img_VB + img_VC), 2));
    g_src_VN_ang = atan2f((img_VA + img_VB + img_VC), (real_VA + real_VB + real_VC));

    g_IN_mag = sqrt(pow((real_IA + real_IB + real_IC), 2) + pow((img_IA + img_IB + img_IC), 2));
    g_IN_ang = atan2f((img_IA + img_IB + img_IC), (real_IA + real_IB + real_IC));

    g_src_PhsA_Pf = cosf(DG_TO_RAD(g_src_pshA_V_ang - g_IA_ang));
    g_src_PhsB_Pf = cosf(DG_TO_RAD(g_src_pshB_ang - g_IB_ang));
    g_src_PhsC_Pf = cosf(DG_TO_RAD(g_src_pshB_ang - g_IC_ang));

    g_src_PhsA_W = g_src_pshA_V_mag * g_IA_mag * g_src_PhsA_Pf;
    g_src_PhsA_VAr = g_src_pshA_V_mag * g_IA_mag * sinf(DG_TO_RAD(g_src_pshA_V_ang - g_IA_ang));
    g_src_PhsA_VA = sqrt(pow(g_src_PhsA_W, 2) + pow(g_src_PhsA_VAr, 2));

    g_src_PhsB_W = g_src_pshB_mag * g_IB_mag * g_src_PhsB_Pf;
    g_src_PhsB_VAr = g_src_pshB_mag * g_IB_mag * sinf(DG_TO_RAD(g_src_pshB_ang - g_IB_ang));
    g_src_PhsB_VA = sqrt(pow(g_src_PhsB_W, 2) + pow(g_src_PhsB_VAr, 2));

    g_src_PhsC_W = g_src_pshC_mag * g_IC_mag * g_src_PhsC_Pf;
    g_src_PhsC_VAr = g_src_pshC_mag * g_IC_mag * sinf(DG_TO_RAD(g_src_pshC_ang - g_IC_ang));
    g_src_PhsC_VA = sqrt(pow(g_src_PhsC_W, 2) + pow(g_src_PhsC_VAr, 2));

    g_VAB_mag = sqrt(pow(real_VA - real_VB, 2) + pow(img_VA - img_VB, 2));
    g_VAB_ang = atan2f((img_VA - img_VB), (real_VA - real_VB));

    g_VBC_mag = sqrt(pow(real_VB - real_VC, 2) + pow(img_VB - img_VC, 2));
    g_VBC_ang = atan2f((img_VB - img_VC), (real_VB - real_VC));

    g_VCA_mag = sqrt(pow(real_VC - real_VA, 2) + pow(img_VC - img_VA, 2));
    g_VCA_ang = atan2f((img_VC - img_VA), (real_VC - real_VA));

    g_TotW = g_src_PhsA_W + g_src_PhsB_W + g_src_PhsC_W;
    g_TotVAr = g_src_PhsA_VAr + g_src_PhsB_VAr + g_src_PhsC_VAr;
    g_TotVA = sqrt(pow(g_TotW, 2) + pow(g_TotVAr, 2));

    g_TotPF = cos(atan2f(g_TotW, g_TotVAr));

    g_load_pshA_V_mag = g_src_pshA_V_mag;
    g_load_pshA_V_ang = g_src_pshA_V_ang;
    g_load_pshB_mag = g_src_pshB_mag;
    g_load_pshB_ang = g_src_pshB_ang;
    g_load_pshC_mag = g_src_pshC_mag;
    g_load_pshC_ang = g_src_pshC_ang;
    g_load_VN_ang = g_src_VN_mag;
    g_load_VN_ang = g_src_VN_ang;
}

void
Iec61850_Process(void)
{
    update_samples();

    uint64_t timestamp = Hal_getTimeInMs();
    Timestamp iecTimestamp;
    static uint64_t timerTick_100msMult = 0;

    Timestamp_clearFlags(&iecTimestamp);
    Timestamp_setTimeInMilliseconds(&iecTimestamp, timestamp);
    Timestamp_setLeapSecondKnown(&iecTimestamp, true);

    if (g_iedServer == NULL)
    {
        return;
    }

    if (IedServer_isRunning(g_iedServer))
    {
        IedServer_processIncomingData(g_iedServer);
        IedServer_performPeriodicTasks(g_iedServer);
    }

    if (timestamp - g_lastTimestamp >= 100)
    {
        timerTick_100msMult += 100;

        IedServer_lockDataModel(g_iedServer);

        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_PPV_phsAB_cVal_mag_f, g_VAB_mag);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_PPV_phsAB_cVal_ang_f, g_VAB_ang);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_PPV_phsBC_cVal_mag_f, g_VBC_mag);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_PPV_phsBC_cVal_ang_f, g_VBC_ang);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_PPV_phsCA_cVal_mag_f, g_VCA_mag);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_PPV_phsCA_cVal_ang_f, g_VCA_ang);

        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_Hz_mag_f, g_Hz_mag);

        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_PNV_phsA_cVal_mag_f, g_src_pshA_V_mag);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_PNV_phsA_cVal_ang_f, g_src_pshA_V_ang);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_A_phsA_cVal_mag_f, g_IA_mag);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_A_phsA_cVal_ang_f, g_IA_ang);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_PF_phsA_cVal_mag_f, g_src_PhsA_Pf);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_W_phsA_cVal_mag_f, g_src_PhsA_W);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_VAr_phsA_cVal_mag_f, g_src_PhsA_VAr);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_VA_phsA_cVal_mag_f, g_src_PhsA_VA);

        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_PNV_phsB_cVal_mag_f, g_src_pshB_mag);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_PNV_phsB_cVal_ang_f, g_src_pshB_ang);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_A_phsB_cVal_mag_f, g_IB_mag);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_A_phsB_cVal_ang_f, g_IB_ang);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_PF_phsB_cVal_mag_f, g_src_PhsB_Pf);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_W_phsB_cVal_mag_f, g_src_PhsB_W);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_VAr_phsB_cVal_mag_f, g_src_PhsB_VAr);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_VA_phsB_cVal_mag_f, g_src_PhsB_VA);

        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_PNV_phsC_cVal_mag_f, g_src_pshC_mag);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_PNV_phsC_cVal_ang_f, g_src_pshC_ang);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_A_phsC_cVal_mag_f, g_IC_mag);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_A_phsC_cVal_ang_f, g_IC_ang);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_PF_phsC_cVal_mag_f, g_src_PhsC_Pf);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_W_phsC_cVal_mag_f, g_src_PhsC_W);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_VAr_phsC_cVal_mag_f, g_src_PhsC_VAr);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_VA_phsC_cVal_mag_f, g_src_PhsC_VA);

        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_PNV_neut_cVal_mag_f, g_src_VN_mag);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_PNV_neut_cVal_ang_f, g_src_VN_ang);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_A_neut_cVal_mag_f, g_IN_mag);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_A_neut_cVal_ang_f, g_IN_ang);

        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_TotW_mag_f, g_TotW);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_TotVAr_mag_f, g_TotVAr);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_TotVA_mag_f, g_TotVA);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SYS_SRCMMXU1_TotPF_mag_f, g_TotPF);

        IedServer_unlockDataModel(g_iedServer);

        g_lastTimestamp = timestamp;

        if (g_svPublisher)
        {
            Timestamp ts;
            Timestamp_clearFlags(&ts);
            Timestamp_setTimeInMilliseconds(&ts, Hal_getTimeInMs());

            static float fVal1 = 1234.5678f;
            static float fVal2 = 0.12345f;

            SVPublisher_ASDU_setFLOAT(g_asdu1, g_float1, fVal1++);
            SVPublisher_ASDU_setFLOAT(g_asdu1, g_float2, fVal2++);
            SVPublisher_ASDU_setTimestamp(g_asdu1, g_ts1, ts);

            SVPublisher_ASDU_increaseSmpCnt(g_asdu1);

            SVPublisher_publish(g_svPublisher);
        }
    }
}

int
main()
{
    printf("Starting Server");
    Iec61850_InitServer();

    running = 1;

    signal(SIGINT, sigint_handler);

    ("Server Started");
    while (running)
    {
        Iec61850_Process();

        Thread_sleep(5);
    }

    Iec61850_DeinitServer();
    ("Server Closed");
}