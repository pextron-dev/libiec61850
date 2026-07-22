/*
 * client_example.c
 *
 * Unbuffered report IED550 example.
 */

#include "iec61850_client.h"

#include <stdio.h>
#include <stdlib.h>

#include "config.h"
#include "hal_thread.h"

const char* MMUX1_DATASET_ENTRIES[16] = {
  "MMXU1$MX$TotPF$mag",
  "MMXU1$MX$TotVA$mag",
  "MMXU1$MX$TotVAr$mag",
  "MMXU1$MX$TotW$mag",
  "MMXU1$MX$Hz$mag",
  "MMXU1$MX$PhV$phsA$cVal",
  "MMXU1$MX$PhV$phsB$cVal",
  "MMXU1$MX$PhV$phsC$cVal",
  "MMXU1$MX$A$phsA$cVal",
  "MMXU1$MX$A$phsB$cVal",
  "MMXU1$MX$A$phsC$cVal",
  "MMXU1$MX$A$neut$cVal",
  "MMXU1$MX$A$res$cVal",
  "MMXU2$MX$PhV$phsA$cVal",
  "MMXU2$MX$PhV$phsB$cVal",
  "MMXU2$MX$PhV$phsC$cVal"
};

const char* MMUX2_DATASET_ENTRIES[3] = {
  "MMXU2$MX$PhV$phsA$cVal",
  "MMXU2$MX$PhV$phsB$cVal",
  "MMXU2$MX$PhV$phsC$cVal"
};

const char* XCBR1_DATASET_ENTRIES[1] = {
  "XCBR1$ST$Pos$stVal"
};

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
reportCallbackFunction(void* parameter, ClientReport report)
{
    char buffer_rx[2048] = "";
    const char** DATASET_ENTRIES = NULL;
    int ret = 0;
    int offset = 0;
    MmsValue* dataSetValues = ClientReport_getDataSetValues(report);
    const char* dataSetName = ClientReport_getDataSetName(report);
    uint16_t n_data_values = MmsValue_getArraySize(dataSetValues);

    printf("received report for %s\n", ClientReport_getRcbReference(report));

    if (strcmp(dataSetName, "S640/LLN0$MMXU1_DataSet") == 0)
        DATASET_ENTRIES = MMUX1_DATASET_ENTRIES;
    else if (strcmp(dataSetName, "S640/LLN0$MMXU2_DataSet") == 0)
        DATASET_ENTRIES = MMUX2_DATASET_ENTRIES;

    for (int i = 0; i < n_data_values; i++)
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

int
main(int argc, char** argv)
{

    char* hostname = NULL;
    int tcpPort = 102;
    const char* localIp = NULL;
    int localTcpPort = -1;

    if (argc > 1)
        hostname = argv[1];
    else
        hostname = IED_SERVER_IP;

    if (argc > 2)
        tcpPort = atoi(argv[2]);

    if (argc > 3)
        localIp = argv[3];

    if (argc > 4)
        localTcpPort = atoi(argv[4]);

    IedClientError error;

    IedConnection con = IedConnection_create();

    /* Optional bind to local IP address/interface */
    if (localIp)
    {
        IedConnection_setLocalAddress(con, localIp, localTcpPort);
        printf("Bound to Local Address: %s:%i\n", localIp, localTcpPort);
    }

    IedConnection_connect(con, &error, hostname, tcpPort);
    printf("Connecting to %s:%i\n", hostname, tcpPort);

    if (error == IED_ERROR_OK)
    {
        printf("Connected\n");

        /* read an analog measurement value from server */
        MmsValue* value = IedConnection_readObject(con, &error, "S640/MMXU1.A.phsA.cVal.mag.f", IEC61850_FC_MX);

        if (value != NULL)
        {
            if (MmsValue_getType(value) == MMS_FLOAT)
            {
                float fval = MmsValue_toFloat(value);
                printf("read float value: %f\n", fval);
            }
            else if (MmsValue_getType(value) == MMS_DATA_ACCESS_ERROR)
            {
                printf("Failed to read value (error code: %i)\n", MmsValue_getDataAccessError(value));
            }

            MmsValue_delete(value);
        }

        /* read data set */
        ClientDataSet clientDataSet = IedConnection_readDataSetValues(con, &error, "S640/LLN0.MMXU1_DataSet", NULL);

        if (clientDataSet == NULL)
        {
            printf("failed to read dataset\n");
        }

        /* Read RCB values */
        ClientReportControlBlock rcb_1 = IedConnection_getRCBValues(con, &error, "S640/LLN0.RP.ucrbMMXU1", NULL);

        if (rcb_1)
        {
            bool rptEna_1 = ClientReportControlBlock_getRptEna(rcb_1);

            printf("RptEna_1 = %i\n", rptEna_1);

            /* Install handler for reports */
            IedConnection_installReportHandler(con, "S640/LLN0.RP.ucrbMMXU1", ClientReportControlBlock_getRptId(rcb_1),
                                               reportCallbackFunction, NULL);

            /* Set trigger options and enable report */
            ClientReportControlBlock_setTrgOps(rcb_1, TRG_OPT_DATA_UPDATE | TRG_OPT_INTEGRITY | TRG_OPT_GI);
            ClientReportControlBlock_setRptEna(rcb_1, true);
            ClientReportControlBlock_setIntgPd(rcb_1, 1000);
            IedConnection_setRCBValues(con, &error, rcb_1,
                                       RCB_ELEMENT_RPT_ENA | RCB_ELEMENT_TRG_OPS | RCB_ELEMENT_INTG_PD, true);

            if (error != IED_ERROR_OK)
                printf("report 1 activation failed (code: %i)\n", error);

            Thread_sleep(1000);

            /* trigger GI report */
            ClientReportControlBlock_setGI(rcb_1, true);
            IedConnection_setRCBValues(con, &error, rcb_1, RCB_ELEMENT_GI, true);

            if (error != IED_ERROR_OK)
                printf("Error triggering a GI report (code: %i)\n", error);

            Thread_sleep(10000);

            /* disable reporting */
            ClientReportControlBlock_setRptEna(rcb_1, false);
            IedConnection_setRCBValues(con, &error, rcb_1, RCB_ELEMENT_RPT_ENA, true);

            if (error != IED_ERROR_OK)
                printf("disable reporting failed (code: %i)\n", error);

            ClientDataSet_destroy(clientDataSet);

            ClientReportControlBlock_destroy(rcb_1);
        }

    close_connection:

        IedConnection_close(con);
    }
    else
    {
        printf("Failed to connect to %s:%i\n", hostname, tcpPort);
        Thread_sleep(60000);
    }

    IedConnection_destroy(con);

    return 0;
}
