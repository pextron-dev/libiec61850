/*
 * client_example.c
 *
 * Unbuffered report IED550 example.
 */

#include "goose_receiver.h"
#include "goose_subscriber.h"
#include "iec61850_client.h"
#include <stdio.h>
#include <stdlib.h>

#include "config.h"
#include "hal_thread.h"
#include "string.h"

const char* DS_MEAS_SCADA_FIRST_15_ENTRIES[15] = {
    "LOADMMXU1$MX$PPV$phsAB$cVal$mag$f", "LOADMMXU1$MX$PPV$phsAB$cVal$ang$f", "LOADMMXU1$MX$PPV$phsBC$cVal$mag$f",
    "LOADMMXU1$MX$PPV$phsBC$cVal$ang$f", "LOADMMXU1$MX$PPV$phsCA$cVal$mag$f", "LOADMMXU1$MX$PPV$phsCA$cVal$ang$f",
    "LOADMMXU1$MX$PNV$phsA$cVal$mag$f",  "LOADMMXU1$MX$PNV$phsA$cVal$ang$f",  "LOADMMXU1$MX$PNV$phsB$cVal$mag$f",
    "LOADMMXU1$MX$PNV$phsB$cVal$ang$f",  "LOADMMXU1$MX$PNV$phsC$cVal$mag$f",  "LOADMMXU1$MX$PNV$phsC$cVal$ang$f",
    "LOADMMXU1$MX$PNV$neut$cVal$mag$f",  "LOADMMXU1$MX$PNV$neut$cVal$ang$f",  "LOADMMXU1$MX$Hz$mag$f"};

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

    char buffer[1024];

    MmsValue_printToBuffer(values, buffer, 1024);

    printf("  allData: %s\n", buffer);
}

void
printDsElements(MmsValue* dataSetValues, const char* dataSetName, uint16_t nDataValues)
{
    char buffer_rx[2048] = "";
    const char** DATASET_ENTRIES = NULL;
    int ret = 0;
    int offset = 0;

    if (strcmp(dataSetName, "IEDR550SYS/LLN0$DS_MEAS_SCADA") == 0)
        DATASET_ENTRIES = DS_MEAS_SCADA_FIRST_15_ENTRIES;
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

void
reportCallbackFunction(void* parameter, ClientReport report)
{
    char buffer_rx[2048] = "";
    const char** DATASET_ENTRIES = NULL;
    int ret = 0;
    int offset = 0;
    MmsValue* dataSetValues = ClientReport_getDataSetValues(report);
    const char* dataSetName = ClientReport_getDataSetName(report);
    uint16_t nDataValues = MmsValue_getArraySize(dataSetValues);

    printf("received report for %s\n", ClientReport_getRcbReference(report));
    printDsElements(dataSetValues, dataSetName, 15);
}

int
main(int argc, char** argv)
{

    //char* hostname = IED_SERVER_IP;
    //int tcpPort = IED_SERVER_PORT;
    // 
     char* hostname = "192.168.2.64";
     int tcpPort = 102;

    IedClientError error;

    IedConnection con = IedConnection_create();
    IedConnection_connect(con, &error, hostname, tcpPort);

    printf("Connecting to IED R550 on %s:%i\n", hostname, tcpPort);

    if (error == IED_ERROR_OK)
    {
        printf("Connected.\n");

        /* read an analog measurement value from server */
        printf("Reading source side V_AB: \n");
        MmsValue* value =
            IedConnection_readObject(con, &error, "IEDR550SYS/SRCMMXU1.PPV.phsAB.cVal.mag.f", IEC61850_FC_MX);

        if (value != NULL)
        {
            if (MmsValue_getType(value) == MMS_FLOAT)
            {
                float fval = MmsValue_toFloat(value);
                printf("Read float value: %f\n", fval);
            }
            else if (MmsValue_getType(value) == MMS_DATA_ACCESS_ERROR)
            {
                printf("Failed to read value (error code: %i)\n", MmsValue_getDataAccessError(value));
            }

            MmsValue_delete(value);
        }

        /* read data set */
        printf("Reading DS_MEAS_SCADA dataset...\n");
        ClientDataSet clientDataSet =
            IedConnection_readDataSetValues(con, &error, "IEDR550SYS/LLN0.DS_MEAS_SCADA", NULL);
        if (clientDataSet == NULL)
        {
            printf("Failed to read dataset\n");
        }
        else
        {
            MmsValue* dataSetValues = ClientDataSet_getValues(clientDataSet);
            char* dataSetName = ClientDataSet_getReference(clientDataSet);

            printDsElements(dataSetValues, dataSetName, 15);
        }

        /* Read RCB values */
        printf("Reading brcbMeasScada configuration...\n");
        ClientReportControlBlock rcb_1 =
            IedConnection_getRCBValues(con, &error, "IEDR550SYS/LLN0.RP.urcbMeasScada01", NULL);

        if (rcb_1)
        {
            bool rptEna_1 = ClientReportControlBlock_getRptEna(rcb_1);

            printf("Report enabled = %i\n", rptEna_1);

            /* Install handler for reports */
            IedConnection_installReportHandler(con, "IEDR550SYS/LLN0.RP.urcbMeasScada01",
                                               ClientReportControlBlock_getRptId(rcb_1), reportCallbackFunction, NULL);

            /* trigger GI report */
            printf("Triggering a GI report...\n");
            ClientReportControlBlock_setGI(rcb_1, true);
            IedConnection_setRCBValues(con, &error, rcb_1, RCB_ELEMENT_GI, true);


            /* Set trigger options and enable report */
            printf("Enabling report brcbMeasScada...\n");
            ClientReportControlBlock_setTrgOps(rcb_1, TRG_OPT_INTEGRITY | TRG_OPT_GI);
            ClientReportControlBlock_setRptEna(rcb_1, true);
            ClientReportControlBlock_setIntgPd(rcb_1, 1000);
            IedConnection_setRCBValues(con, &error, rcb_1,
                                       RCB_ELEMENT_RPT_ENA | RCB_ELEMENT_TRG_OPS | RCB_ELEMENT_INTG_PD, true);

            if (error != IED_ERROR_OK)
                printf("Failed to active report brcbMeasScada (code: %i)\n", error);

            Thread_sleep(1000);

            if (error != IED_ERROR_OK)
                printf("Error triggering a GI report (code: %i)\n", error);

            Thread_sleep(10000);

            /* disable reporting */
            printf("Disabling report brcbMeasScada...\n");
            ClientReportControlBlock_setRptEna(rcb_1, false);
            IedConnection_setRCBValues(con, &error, rcb_1, RCB_ELEMENT_RPT_ENA, true);

            if (error != IED_ERROR_OK)
                printf("Disable reporting failed (code: %i)\n", error);

            ClientReportControlBlock_destroy(rcb_1);
        }
        
        ClientDataSet_destroy(clientDataSet);

        /* GOOSE Testing */
        GooseReceiver receiver = GooseReceiver_create();

        GooseReceiver_setInterfaceId(receiver, IED_ETHERNET_INTERFACE_ID);

        GooseSubscriber subscriber = GooseSubscriber_create("IEDR550SYS/LLN0$GO$gcbSwitchOper", NULL);

        uint8_t dstMac[6] = {0x01, 0x0c, 0xcd, 0x01, 0x00, 0x01};
        GooseSubscriber_setAppId(subscriber, 0x1001);

        GooseSubscriber_setListener(subscriber, gooseListener, NULL);

        GooseReceiver_addSubscriber(receiver, subscriber);

        GooseReceiver_start(receiver);

        Thread_sleep(30000);

        /*Read GoCB Values*/
        ClientGooseControlBlock goCB = IedConnection_getGoCBValues(con, &error, "IEDR550SYS/LLN0.gcbSwitchOper", NULL);

        bool GoEna = ClientGooseControlBlock_getGoEna(goCB);
        printf("GoEna Value: %d\n", GoEna);

        const char* id = ClientGooseControlBlock_getGoID(goCB);
        printf("GoID Value: %s\n", id);

        const char* datset = ClientGooseControlBlock_getDatSet(goCB);
        printf("GoDatset Value: %s\n", datset);


        if (GoEna)
        {
            ClientGooseControlBlock_setGoEna(goCB, false); 
            IedConnection_setGoCBValues(con, &error, goCB, GOCB_ELEMENT_GO_ENA, true);
        }

        /*Read GoCB Values*/
        goCB = IedConnection_getGoCBValues(con, &error, "IEDR550SYS/LLN0.gcbSwitchOper", NULL);

        Thread_sleep(5000);

        GoEna = ClientGooseControlBlock_getGoEna(goCB);
        printf("GoEna Value: %d\n", GoEna);

        if (!GoEna)
        {
            ClientGooseControlBlock_setGoEna(goCB, true);
            IedConnection_setGoCBValues(con, &error, goCB, GOCB_ELEMENT_GO_ENA, true);
        }

        GoEna = ClientGooseControlBlock_getGoEna(goCB);
        printf("GoEna Value: %d\n", GoEna);

        GooseReceiver_stop(receiver);
        GooseReceiver_destroy(receiver);

    close_connection:

        IedConnection_close(con);
    }
    else
    {
        printf("Failed to connect to %s:%i\n", hostname, tcpPort);
    }

    IedConnection_destroy(con);

    return 0;
}
