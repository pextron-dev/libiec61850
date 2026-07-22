/*
 * Iec68150.c
 *
 *  Created on: 11 de jun de 2026
 *      Author: Eng-DPE
 */

#include <stdio.h>

#include <stack_config.h>
#include "hal_thread.h"
#include "static_model.h"
#include <signal.h>
#include "goose_subscriber.h"
#include "iec61850_server.h"
#include "mms_value.h"
#include "mms_value_internal.h"
#include <math.h>

float g_float_IA_mod = 0;
float g_float_IB_mod = 0;
float g_float_IC_mod = 0;
float g_float_ID_mod = 0;
float g_float_IN_mod = 0;
float g_float_VA_mod = 0;
float g_float_VB_mod = 0;
float g_float_VC_mod = 0;
float g_float_Va_mod = 0;
float g_float_Vb_mod = 0;
float g_float_Vc_mod = 0;
float g_float_Hz_mod = 60;
float g_float_TotVA  = 0;
float g_float_TotVAr = 0;
float g_float_TotW   = 0;
float g_float_TotPF  = 1;

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


// typedef struct {
//     float strVal;
//     int opDlTmms;
//     int rsDlTmms;
//     int rstTms;
// } PTOC1Settings;
//
//
// static PTOC1Settings ptoc1Settings[] = {
//         {1.0f, 500, 500, 500},
//         {2.0f, 1500, 2500, 750},
//         {3.0f, 500, 1500, 750},
//         {3.5f, 1250, 1750, 500},
//         {3.75f, 1250, 1750, 750}
// };

// void sigint_handler(int WaveFormId)
//{
//     running = 0;
// }

// static void
// loadActiveSgValues (int actSG)
//{
//     IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_S640_PTOC1_StrVal_setMag_f, ptoc1Settings[actSG -
//     1].strVal); IedServer_updateInt32AttributeValue(g_iedServer, IEDMODEL_S640_PTOC1_OpDlTmms_setVal,
//     ptoc1Settings[actSG - 1].opDlTmms); IedServer_updateInt32AttributeValue(g_iedServer,
//     IEDMODEL_S640_PTOC1_RsDlTmms_setVal, ptoc1Settings[actSG - 1].rsDlTmms);
//     IedServer_updateInt32AttributeValue(g_iedServer, IEDMODEL_S640_PTOC1_RstTms_setVal, ptoc1Settings[actSG -
//     1].rstTms);
// }

// static void
// loadEditSgValues (int editSG)
//{
//     IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_SE_S640_PTOC1_StrVal_setMag_f, ptoc1Settings[editSG -
//     1].strVal); IedServer_updateInt32AttributeValue(g_iedServer, IEDMODEL_SE_S640_PTOC1_OpDlTmms_setVal,
//     ptoc1Settings[editSG - 1].opDlTmms); IedServer_updateInt32AttributeValue(g_iedServer,
//     IEDMODEL_SE_S640_PTOC1_RsDlTmms_setVal, ptoc1Settings[editSG - 1].rsDlTmms);
//     IedServer_updateInt32AttributeValue(g_iedServer, IEDMODEL_SE_S640_PTOC1_RstTms_setVal, ptoc1Settings[editSG -
//     1].rstTms);
// }

static bool
activeSgChangedHandler(void* parameter, SettingGroupControlBlock* sgcb, uint8_t newActSg, ClientConnection connection)
{
    /*
     * Handler: Active Setting Group Changed
     * Trigger: Client writes to 'ActSG'.
     * Purpose: Immediately switches the active protection profile.
     * Action:  Must update the internal system state variables (flags/thresholds)
     * to reflect the parameters of the newly selected group.
     */

    //    printf("Switch to setting group %i\n", (int) newActSg);

    //    loadActiveSgValues(newActSg);

    // Altera o set ativo, mas nï¿½o retem em Flash???
    return false;
}

static bool
editSgChangedHandler(void* parameter, SettingGroupControlBlock* sgcb, uint8_t newEditSg, ClientConnection connection)
{
    /*
     * Handler: Edit Setting Group Changed
     * Trigger: Client writes to 'EditSG'.
     * Purpose: Selects a group for reading or modification without affecting the active logic.
     * Action:  Must load the stored parameters of the target group into the
     * MMS variables (edit buffer) for client access.
     */

    (void)parameter;
    (void)sgcb;
    (void)newEditSg;
    (void)connection;

    return true;
}

static void
editSgConfirmedHandler(void* parameter, SettingGroupControlBlock* sgcb, uint8_t editSg)
{
    (void)parameter;
    (void)sgcb;
    (void)editSg;
}

//-----------------

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

void
controlHandler(void* parameter, MmsValue* value, bool test)
{
    printf("received control command %i %i: ", value->type, value->value.boolean);

    MmsValue* timeStamp = MmsValue_newUtcTimeByMsTime(Hal_getTimeInMs());

    //if (parameter == IEDMODEL_S640_CSWI1_Pos && !DLOG.BITS.LOCAL)
    //{
    //    // APENAS QUANDO DEFINIDO ReportControlBlock
    //    MmsValue* ctlVal = MmsValue_newBitString(2);
    //    IedServer_updateAttributeValue(g_iedServer, IEDMODEL_S640_XCBR1_Pos_t, timeStamp);
    //    if (value->value.boolean)
    //    {
    //        MmsValue_setBitStringBit(ctlVal, 0, true);
    //        MmsValue_setBitStringBit(ctlVal, 1, false);
    //        IedServer_updateAttributeValue(g_iedServer, IEDMODEL_S640_CSWI1_Pos_stVal, ctlVal);
    //        DLOG.BITS.IEC_CLOSE = 1;
    //        DLOG.BITS.IEC_TRIP = 0;
    //    }
    //    else
    //    {
    //        MmsValue_setBitStringBit(ctlVal, 0, false);
    //        MmsValue_setBitStringBit(ctlVal, 1, true);
    //        IedServer_updateAttributeValue(g_iedServer, IEDMODEL_S640_CSWI1_Pos_stVal, ctlVal);
    //        DLOG.BITS.IEC_TRIP = 1;
    //        DLOG.BITS.IEC_CLOSE = 0;
    //    }
    //}

    MmsValue_delete(timeStamp);
}

bool Iec61850_InitServer(void)
{
    MmsValue* dataSetValues = MmsValue_createEmptyArray(10);
    g_iedServer = IedServer_create(&iedModel);
    g_lastTimestamp = Hal_getTimeInMs();

    /* MMS Server Config */

    /* TODO: Refine Control Model implementation (SBO) according to IEC 61850-7-2, Clause 20.
     *
     * 1. PerformCheckHandler (Operative Checks):
     * - Must validate "Interlocking" (CILO) and "Local/Remote" state (LLN0).
     * - Returns 'CONTROL_ACCEPTED' or specific error (e.g., 'Blocked-By-Interlocking').
     *
     * 2. ControlHandler (Operate Service):
     * - Executed ONLY if PerformCheckHandler returns success.
     * - Responsible for physical hardware actuation (GPIO/Relays). */

    /* Install handler for operate command (Execution) */
    //IedServer_setControlHandler(g_iedServer, IEDMODEL_S640_CSWI1_Pos, (ControlHandler)controlHandler,
    //                            IEDMODEL_S640_CSWI1_Pos);

    ///* Install handler for operative checks (Validation) */
    //IedServer_setPerformCheckHandler(g_iedServer, IEDMODEL_S640_CSWI1_Pos, (ControlPerformCheckHandler)checkHandler,
    //                                 IEDMODEL_S640_CSWI1_Pos);

    //  Settings Control
    //SettingGroupControlBlock* sgcb = LogicalDevice_getSettingGroupControlBlock(&iedModel_S640);
    //    loadActiveSgValues(sgcb->actSG);
    //IedServer_changeActiveSettingGroup(g_iedServer, sgcb, sgcb->actSG);
    //IedServer_getActiveSettingGroup(g_iedServer, sgcb);
    //IedServer_setActiveSettingGroupChangedHandler(g_iedServer, sgcb, activeSgChangedHandler, NULL);
    //IedServer_setEditSettingGroupChangedHandler(g_iedServer, sgcb, editSgChangedHandler, NULL);
    //IedServer_setEditSettingGroupConfirmationHandler(g_iedServer, sgcb, editSgConfirmedHandler, NULL);

    /* GOOSE Config */
    IedServer_setGooseInterfaceId(g_iedServer, CONFIG_ETHERNET_INTERFACE_ID);

    /* Start GOOSE subscriber */
    int i;
    for (i = 0; i < 10; i++)
    {
        MmsValue* dataSetEntry = MmsValue_newBoolean(false);
        MmsValue_setElement(dataSetValues, i, dataSetEntry);
    }

    //    GooseReceiver receiver = GooseReceiver_create();
    g_subscriber =
        GooseSubscriber_create("", dataSetValues); // O GooseControlBlock passa a ser comparado em goose_subscriber.c

    IedServer_startThreadless(g_iedServer, 8102);

    if (IedServer_isRunning(g_iedServer))
    {
        IedServer_enableGoosePublishing(g_iedServer);
        return true;
    }
    else
    {
        return false;
    }
}

void Iec61850_DeinitServer(void)
{
    /* stop MMS server - close TCP server socket and all client sockets */
    IedServer_stopThreadless(g_iedServer);
    IedServer_destroy(g_iedServer);
    g_iedServer = NULL;
}

void Iec61850_Process(void)
{
    static float t = 0.f;

    float an1 = sinf(t);
    float an2 = sinf(t + 1.f);
    float an3 = sinf(t + 2.f);
    float an4 = sinf(t + 3.f);

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

        IedServer_updateTimestampAttributeValue(g_iedServer, IEDMODEL_GenericIO_GGIO1_AnIn1_t, &iecTimestamp);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_GenericIO_GGIO1_AnIn1_mag_f, an1);

        IedServer_updateTimestampAttributeValue(g_iedServer, IEDMODEL_GenericIO_GGIO1_AnIn2_t, &iecTimestamp);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_GenericIO_GGIO1_AnIn2_mag_f, an2);

        IedServer_updateTimestampAttributeValue(g_iedServer, IEDMODEL_GenericIO_GGIO1_AnIn3_t, &iecTimestamp);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_GenericIO_GGIO1_AnIn3_mag_f, an3);

        IedServer_updateTimestampAttributeValue(g_iedServer, IEDMODEL_GenericIO_GGIO1_AnIn4_t, &iecTimestamp);
        IedServer_updateFloatAttributeValue(g_iedServer, IEDMODEL_GenericIO_GGIO1_AnIn4_mag_f, an4);

        IedServer_unlockDataModel(g_iedServer);

        g_lastTimestamp = timestamp;
    }
}

int main()
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