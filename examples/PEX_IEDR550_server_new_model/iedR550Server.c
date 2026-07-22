/*
 * Iec68150.c
 *
 *  Created on: 11 de jun de 2026
 *      Author: Eng-DPE
 */

#include "config.h"
#include "goose_subscriber.h"
#include "hal_thread.h"
#include "iec61850_server.h"
#include "mms_value.h"
#include "static_model.h"
#include <math.h>
#include <signal.h>
#include <stack_config.h>
#include <stdio.h>

#define PI 2.14159265f
#define DG_TO_RAD(ang) ((ang * PI) / 180)
#define RAND_OFFSET(range) (-range + ((float)rand() / (float)RAND_MAX) * 2 * range)

float g_src_VA_mag = 0;
float g_src_VA_ang = 0;
float g_src_PhA_Pf = 0;
float g_src_PhA_W = 0;
float g_src_PhA_VAR = 0;
float g_src_PhA_VA = 0;

float g_src_VB_mag = 0;
float g_src_VB_ang = 0;
float g_src_PhB_Pf = 0;
float g_src_PhB_W = 0;
float g_src_PhB_VAR = 0;
float g_src_PhB_VA = 0;

float g_src_VC_mag = 0;
float g_src_VC_ang = 0;
float g_src_PhC_Pf = 0;
float g_src_PhC_W = 0;
float g_src_PhC_VAR = 0;
float g_src_PhC_VA = 0;

float g_src_VN_mag = 0;
float g_src_VN_ang = 0;

float g_load_VA_mag = 0;
float g_load_VA_ang = 0;
float g_load_VB_mag = 0;
float g_load_VB_ang = 0;
float g_load_VC_mag = 0;
float g_load_VC_ang = 0;
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

float g_ID_mag = 0;
float g_ID_ang = 0;

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

static int running = 0;

void
sigint_handler(int signalId)
{
    running = 0;
}

void
gooseListener(GooseSubscriber subscriber, void* parameter)
{
    (void)subscriber;
    (void)parameter;
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

bool
Iec61850_InitServer(void)
{
    g_iedServer = IedServer_create(&iedModel);
    g_lastTimestamp = Hal_getTimeInMs();

    /* MMS Server Config */

    IedServer_startThreadless(g_iedServer, IED_SERVER_PORT);

    if (IedServer_isRunning(g_iedServer))
    {
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

    g_src_VA_mag = 127.0f + RAND_OFFSET(2);
    g_src_VA_ang = 0;
    g_src_VB_mag = 127.0f + RAND_OFFSET(2);
    g_src_VB_ang = 120;
    g_src_VC_mag = 127.0f + RAND_OFFSET(2);
    g_src_VC_ang = -120;


    float real_VA = g_src_VA_mag * cosf(DG_TO_RAD(g_load_VA_ang));
    float img_VA = g_src_VA_mag * sinf(DG_TO_RAD(g_load_VA_ang));

    float real_VB = g_src_VB_mag * cosf(DG_TO_RAD(g_load_VB_ang));
    float img_VB = g_src_VB_mag * sinf(DG_TO_RAD(g_load_VB_ang));

    float real_VC = g_src_VC_mag * cosf(DG_TO_RAD(g_load_VC_ang));
    float img_VC = g_src_VC_mag * sinf(DG_TO_RAD(g_load_VC_ang));

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
    
    g_src_PhA_Pf = cosf(DG_TO_RAD(g_src_VA_ang - g_IA_ang));
    g_src_PhB_Pf = cosf(DG_TO_RAD(g_src_VB_ang - g_IB_ang));
    g_src_PhC_Pf = cosf(DG_TO_RAD(g_src_VB_ang - g_IC_ang));

    g_src_PhA_W = g_src_VA_mag * g_IA_mag * g_src_PhA_Pf;
    g_src_PhA_VAR = g_src_VA_mag * g_IA_mag * sinf(DG_TO_RAD(g_src_VA_ang - g_IA_ang));
    g_src_PhA_VA = sqrt(pow(g_src_PhA_W, 2) + pow(g_src_PhA_VAR, 2));

    g_src_PhB_W = g_src_VB_mag * g_IB_mag * g_src_PhB_Pf;
    g_src_PhB_VAR = g_src_VB_mag * g_IB_mag * sinf(DG_TO_RAD(g_src_VB_ang - g_IB_ang));
    g_src_PhB_VA = sqrt(pow(g_src_PhB_W, 2) + pow(g_src_PhB_VAR, 2));

    g_src_PhC_W = g_src_VC_mag * g_IC_mag * g_src_PhC_Pf;
    g_src_PhC_VAR = g_src_VC_mag * g_IC_mag * sinf(DG_TO_RAD(g_src_VC_ang - g_IC_ang));
    g_src_PhC_VA = sqrt(pow(g_src_PhC_W, 2) + pow(g_src_PhC_VAR, 2));

    g_VAB_mag = sqrt(pow(real_VA - real_VB, 2) + pow(img_VA - img_VB, 2));
    g_VAB_ang = atan2f((img_VA - img_VB), (real_VA - real_VB));

    g_VBC_mag = sqrt(pow(real_VB - real_VC, 2) + pow(img_VB - img_VC, 2));
    g_VBC_ang = atan2f((img_VB - img_VC), (real_VB - real_VC));

    g_VCA_mag = sqrt(pow(real_VC - real_VA, 2) + pow(img_VC - img_VA, 2));
    g_VCA_ang = atan2f((img_VC - img_VA), (real_VC - real_VA));

    g_TotW = g_src_PhA_W + g_src_PhB_W + g_src_PhC_W;
    g_TotVAr = g_src_PhA_VAR + g_src_PhB_VAR + g_src_PhC_VAR;
    g_TotVA = sqrt(pow(g_TotW, 2) + pow(g_TotVAr, 2));

    g_TotPF = atan2f(g_TotW, g_TotVAr);

    g_load_VA_mag = g_src_VA_mag;
    g_load_VA_ang = g_src_VA_ang;
    g_load_VB_mag = g_src_VB_mag;
    g_load_VB_ang = g_src_VB_ang;
    g_load_VC_mag = g_src_VC_mag;
    g_load_VC_ang = g_src_VC_ang;
    g_load_VN_ang = g_src_VN_mag;
    g_load_VN_ang = g_src_VN_ang;
}

void
Iec61850_Process(void)
{
    update_samples();

    uint64_t timestamp = Hal_getTimeInMs();
    Timestamp iecTimestamp;

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
        IedServer_lockDataModel(g_iedServer);

        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_PNV_phsA_cVal_mag_f, g_src_VA_mag);
        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_PNV_phsA_cVal_ang_f, g_src_VA_ang);
        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_PNV_phsB_cVal_mag_f, g_src_VB_mag);
        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_PNV_phsB_cVal_ang_f, g_src_VB_ang);
        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_PNV_phsC_cVal_mag_f, g_src_VC_mag);
        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_PNV_phsC_cVal_ang_f, g_src_VC_ang);

        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_PNV_phsA_cVal_mag_f, g_load_VA_mag);
        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_PNV_phsA_cVal_ang_f, g_load_VA_ang);
        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_PNV_phsB_cVal_mag_f, g_load_VB_mag);
        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_PNV_phsB_cVal_ang_f, g_load_VB_ang);
        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_PNV_phsC_cVal_mag_f, g_load_VC_mag);
        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_PNV_phsC_cVal_ang_f, g_load_VC_ang);

        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_PPV_phsAB_cVal_mag_f, g_VAB_mag);
        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_PPV_phsAB_cVal_ang_f, g_VAB_ang);
        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_PPV_phsBC_cVal_mag_f, g_VBC_mag);
        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_PPV_phsBC_cVal_ang_f, g_VBC_ang);
        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_PPV_phsCA_cVal_mag_f, g_VCA_mag);
        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_PPV_phsCA_cVal_ang_f, g_VCA_ang);

        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_Hz_mag_f, g_Hz_mag);

        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_A_phsA_cVal_mag_f, g_IA_mag);
        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_A_phsA_cVal_ang_f, g_IA_ang);
        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_A_phsB_cVal_mag_f, g_IB_mag);
        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_A_phsB_cVal_ang_f, g_IB_ang);
        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_A_phsC_cVal_mag_f, g_IC_mag);
        //IedServer_updateFloatAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_A_phsC_cVal_ang_f, g_IC_ang);

        //IedServer_updateTimestampAttributeValue(g_iedServer, R550_SYS_SRCMMXU1_PNV_phsC_cVal_mag_f, &iecTimestamp);

        IedServer_unlockDataModel(g_iedServer);

        g_lastTimestamp = timestamp;
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