/*
 * static_model.c
 *
 * automatically generated from .\demoIED.icd
 */
#include "static_model.h"

static void initializeValues();

extern DataSet iedModelds_SYS_LLN0_DS_MEAS_SCADA;
extern DataSet iedModelds_SYS_LLN0_DS_SWITCH_OPER;


extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda0;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda1;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda2;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda3;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda4;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda5;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda6;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda7;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda8;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda9;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda10;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda11;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda12;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda13;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda14;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda15;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda16;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda17;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda18;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda19;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda20;

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda0 = {
  "SYS",
  false,
  "SRCMMXU1$MX$TotW$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda1
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda1 = {
  "SYS",
  false,
  "SRCMMXU1$MX$TotVAr$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda2
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda2 = {
  "SYS",
  false,
  "SRCMMXU1$MX$TotVA$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda3
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda3 = {
  "SYS",
  false,
  "SRCMMXU1$MX$TotPF$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda4
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda4 = {
  "SYS",
  false,
  "SRCMMXU1$MX$Hz$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda5
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda5 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PNV$phsA$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda6
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda6 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PNV$phsA$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda7
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda7 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PNV$phsB$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda8
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda8 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PNV$phsB$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda9
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda9 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PNV$phsC$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda10
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda10 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PNV$phsC$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda11
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda11 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PNV$neut$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda12
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda12 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PNV$neut$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda13
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda13 = {
  "SYS",
  false,
  "SRCMMXU1$MX$A$phsA$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda14
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda14 = {
  "SYS",
  false,
  "SRCMMXU1$MX$A$phsA$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda15
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda15 = {
  "SYS",
  false,
  "SRCMMXU1$MX$A$phsB$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda16
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda16 = {
  "SYS",
  false,
  "SRCMMXU1$MX$A$phsB$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda17
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda17 = {
  "SYS",
  false,
  "SRCMMXU1$MX$A$phsC$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda18
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda18 = {
  "SYS",
  false,
  "SRCMMXU1$MX$A$phsC$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda19
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda19 = {
  "SYS",
  false,
  "SRCMMXU1$MX$A$neut$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda20
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda20 = {
  "SYS",
  false,
  "SRCMMXU1$MX$A$neut$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_SYS_LLN0_DS_MEAS_SCADA = {
  "SYS",
  "LLN0$DS_MEAS_SCADA",
  21,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda0,
  &iedModelds_SYS_LLN0_DS_SWITCH_OPER
};

extern DataSetEntry iedModelds_SYS_LLN0_DS_SWITCH_OPER_fcda0;
extern DataSetEntry iedModelds_SYS_LLN0_DS_SWITCH_OPER_fcda1;
extern DataSetEntry iedModelds_SYS_LLN0_DS_SWITCH_OPER_fcda2;
extern DataSetEntry iedModelds_SYS_LLN0_DS_SWITCH_OPER_fcda3;

DataSetEntry iedModelds_SYS_LLN0_DS_SWITCH_OPER_fcda0 = {
  "SYS",
  false,
  "CILO1$ST$EnaOpn$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_SWITCH_OPER_fcda1
};

DataSetEntry iedModelds_SYS_LLN0_DS_SWITCH_OPER_fcda1 = {
  "SYS",
  false,
  "CILO1$ST$EnaCls$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_SWITCH_OPER_fcda2
};

DataSetEntry iedModelds_SYS_LLN0_DS_SWITCH_OPER_fcda2 = {
  "SYS",
  false,
  "XCBR1$ST$Loc$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_SWITCH_OPER_fcda3
};

DataSetEntry iedModelds_SYS_LLN0_DS_SWITCH_OPER_fcda3 = {
  "SYS",
  false,
  "XCBR1$ST$Pos$stVal", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_SYS_LLN0_DS_SWITCH_OPER = {
  "SYS",
  "LLN0$DS_SWITCH_OPER",
  4,
  &iedModelds_SYS_LLN0_DS_SWITCH_OPER_fcda0,
  NULL
};

LogicalDevice iedModel_SYS = {
    LogicalDeviceModelType,
    "SYS",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_SYS_LLN0,
    NULL
};

LogicalNode iedModel_SYS_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_SYS,
    (ModelNode*) &iedModel_SYS_CILO1,
    (ModelNode*) &iedModel_SYS_LLN0_NamPlt,
};

DataObject iedModel_SYS_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_SYS_LLN0,
    (ModelNode*) &iedModel_SYS_LLN0_Beh,
    (ModelNode*) &iedModel_SYS_LLN0_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_SYS_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_SYS_LLN0_NamPlt,
    (ModelNode*) &iedModel_SYS_LLN0_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_SYS_LLN0_NamPlt,
    (ModelNode*) &iedModel_SYS_LLN0_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_SYS_LLN0_NamPlt,
    (ModelNode*) &iedModel_SYS_LLN0_NamPlt_ldNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_SYS_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_SYS_LLN0,
    (ModelNode*) &iedModel_SYS_LLN0_Health,
    (ModelNode*) &iedModel_SYS_LLN0_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_LLN0_Beh,
    (ModelNode*) &iedModel_SYS_LLN0_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_LLN0_Beh,
    (ModelNode*) &iedModel_SYS_LLN0_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_LLN0_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_SYS_LLN0,
    (ModelNode*) &iedModel_SYS_LLN0_Mod,
    (ModelNode*) &iedModel_SYS_LLN0_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_LLN0_Health,
    (ModelNode*) &iedModel_SYS_LLN0_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_LLN0_Health,
    (ModelNode*) &iedModel_SYS_LLN0_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_LLN0_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_SYS_LLN0,
    NULL,
    (ModelNode*) &iedModel_SYS_LLN0_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_LLN0_Mod,
    (ModelNode*) &iedModel_SYS_LLN0_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_LLN0_Mod,
    (ModelNode*) &iedModel_SYS_LLN0_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_LLN0_Mod,
    (ModelNode*) &iedModel_SYS_LLN0_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_SYS_LLN0_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

LogicalNode iedModel_SYS_CILO1 = {
    LogicalNodeModelType,
    "CILO1",
    (ModelNode*) &iedModel_SYS,
    (ModelNode*) &iedModel_SYS_CSWI1,
    (ModelNode*) &iedModel_SYS_CILO1_Beh,
};

DataObject iedModel_SYS_CILO1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_SYS_CILO1,
    (ModelNode*) &iedModel_SYS_CILO1_EnaOpn,
    (ModelNode*) &iedModel_SYS_CILO1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_CILO1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_CILO1_Beh,
    (ModelNode*) &iedModel_SYS_CILO1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_CILO1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_CILO1_Beh,
    (ModelNode*) &iedModel_SYS_CILO1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_CILO1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_CILO1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_CILO1_EnaOpn = {
    DataObjectModelType,
    "EnaOpn",
    (ModelNode*) &iedModel_SYS_CILO1,
    (ModelNode*) &iedModel_SYS_CILO1_EnaCls,
    (ModelNode*) &iedModel_SYS_CILO1_EnaOpn_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_CILO1_EnaOpn_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_CILO1_EnaOpn,
    (ModelNode*) &iedModel_SYS_CILO1_EnaOpn_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_CILO1_EnaOpn_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_CILO1_EnaOpn,
    (ModelNode*) &iedModel_SYS_CILO1_EnaOpn_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_CILO1_EnaOpn_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_CILO1_EnaOpn,
    (ModelNode*) &iedModel_SYS_CILO1_EnaOpn_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_CILO1_EnaOpn_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_CILO1_EnaOpn,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_CILO1_EnaCls = {
    DataObjectModelType,
    "EnaCls",
    (ModelNode*) &iedModel_SYS_CILO1,
    NULL,
    (ModelNode*) &iedModel_SYS_CILO1_EnaCls_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_CILO1_EnaCls_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_CILO1_EnaCls,
    (ModelNode*) &iedModel_SYS_CILO1_EnaCls_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_CILO1_EnaCls_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_CILO1_EnaCls,
    (ModelNode*) &iedModel_SYS_CILO1_EnaCls_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_CILO1_EnaCls_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_CILO1_EnaCls,
    (ModelNode*) &iedModel_SYS_CILO1_EnaCls_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_CILO1_EnaCls_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_CILO1_EnaCls,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_SYS_CSWI1 = {
    LogicalNodeModelType,
    "CSWI1",
    (ModelNode*) &iedModel_SYS,
    (ModelNode*) &iedModel_SYS_LPHD1,
    (ModelNode*) &iedModel_SYS_CSWI1_Beh,
};

DataObject iedModel_SYS_CSWI1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_SYS_CSWI1,
    (ModelNode*) &iedModel_SYS_CSWI1_Pos,
    (ModelNode*) &iedModel_SYS_CSWI1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_CSWI1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_CSWI1_Beh,
    (ModelNode*) &iedModel_SYS_CSWI1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_CSWI1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_CSWI1_Beh,
    (ModelNode*) &iedModel_SYS_CSWI1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_CSWI1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_CSWI1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_CSWI1_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_SYS_CSWI1,
    NULL,
    (ModelNode*) &iedModel_SYS_CSWI1_Pos_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_CSWI1_Pos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_CSWI1_Pos,
    (ModelNode*) &iedModel_SYS_CSWI1_Pos_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_CODEDENUM,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_CSWI1_Pos_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_CSWI1_Pos,
    (ModelNode*) &iedModel_SYS_CSWI1_Pos_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_CSWI1_Pos_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_CSWI1_Pos,
    (ModelNode*) &iedModel_SYS_CSWI1_Pos_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_CSWI1_Pos_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_SYS_CSWI1_Pos,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

LogicalNode iedModel_SYS_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    (ModelNode*) &iedModel_SYS,
    (ModelNode*) &iedModel_SYS_SRCMMXU1,
    (ModelNode*) &iedModel_SYS_LPHD1_PhyNam,
};

DataObject iedModel_SYS_LPHD1_PhyNam = {
    DataObjectModelType,
    "PhyNam",
    (ModelNode*) &iedModel_SYS_LPHD1,
    (ModelNode*) &iedModel_SYS_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_SYS_LPHD1_PhyNam_vendor,
    0,
    -1
};

DataAttribute iedModel_SYS_LPHD1_PhyNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_SYS_LPHD1_PhyNam,
    (ModelNode*) &iedModel_SYS_LPHD1_PhyNam_hwRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_LPHD1_PhyNam_hwRev = {
    DataAttributeModelType,
    "hwRev",
    (ModelNode*) &iedModel_SYS_LPHD1_PhyNam,
    (ModelNode*) &iedModel_SYS_LPHD1_PhyNam_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_LPHD1_PhyNam_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_SYS_LPHD1_PhyNam,
    (ModelNode*) &iedModel_SYS_LPHD1_PhyNam_serNum,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_LPHD1_PhyNam_serNum = {
    DataAttributeModelType,
    "serNum",
    (ModelNode*) &iedModel_SYS_LPHD1_PhyNam,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_LPHD1_PhyHealth = {
    DataObjectModelType,
    "PhyHealth",
    (ModelNode*) &iedModel_SYS_LPHD1,
    (ModelNode*) &iedModel_SYS_LPHD1_Proxy,
    (ModelNode*) &iedModel_SYS_LPHD1_PhyHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_LPHD1_PhyHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_SYS_LPHD1_PhyHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LPHD1_PhyHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_SYS_LPHD1_PhyHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_LPHD1_PhyHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_LPHD1_PhyHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_LPHD1_Proxy = {
    DataObjectModelType,
    "Proxy",
    (ModelNode*) &iedModel_SYS_LPHD1,
    NULL,
    (ModelNode*) &iedModel_SYS_LPHD1_Proxy_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_LPHD1_Proxy_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_LPHD1_Proxy,
    (ModelNode*) &iedModel_SYS_LPHD1_Proxy_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_LPHD1_Proxy_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_LPHD1_Proxy,
    (ModelNode*) &iedModel_SYS_LPHD1_Proxy_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_LPHD1_Proxy_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_LPHD1_Proxy,
    (ModelNode*) &iedModel_SYS_LPHD1_Proxy_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_LPHD1_Proxy_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_LPHD1_Proxy,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_SYS_SRCMMXU1 = {
    LogicalNodeModelType,
    "SRCMMXU1",
    (ModelNode*) &iedModel_SYS,
    (ModelNode*) &iedModel_SYS_XCBR1,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_Beh,
};

DataObject iedModel_SYS_SRCMMXU1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_SYS_SRCMMXU1,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_ClcExp,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_Beh,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_Beh,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_ClcExp = {
    DataObjectModelType,
    "ClcExp",
    (ModelNode*) &iedModel_SYS_SRCMMXU1,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_ClcMth,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_ClcExp_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_ClcExp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_ClcExp,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_ClcExp_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_ClcExp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_ClcExp,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_ClcExp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_ClcExp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_ClcExp,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_ClcExp_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_ClcExp_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_ClcExp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_ClcMth = {
    DataObjectModelType,
    "ClcMth",
    (ModelNode*) &iedModel_SYS_SRCMMXU1,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotW,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_ClcMth_setVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_ClcMth_setVal = {
    DataAttributeModelType,
    "setVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_ClcMth,
    (ModelNode*) &iedModel_SE_SYS_SRCMMXU1_ClcMth_setVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SG,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_SE_SYS_SRCMMXU1_ClcMth_setVal = {
    DataAttributeModelType,
    "setVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_ClcMth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SE,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_TotW = {
    DataObjectModelType,
    "TotW",
    (ModelNode*) &iedModel_SYS_SRCMMXU1,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVAr,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotW_mag,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_TotW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotW,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotW_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotW_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_TotW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotW_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_TotW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotW,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotW_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_TotW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotW,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotW_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_TotW_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotW,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_TotVAr = {
    DataObjectModelType,
    "TotVAr",
    (ModelNode*) &iedModel_SYS_SRCMMXU1,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVAr_mag,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_TotVAr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVAr,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVAr_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVAr_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_TotVAr_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVAr_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_TotVAr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVAr,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVAr_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_TotVAr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVAr,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVAr_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_TotVAr_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVAr,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_TotVA = {
    DataObjectModelType,
    "TotVA",
    (ModelNode*) &iedModel_SYS_SRCMMXU1,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotPF,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVA_mag,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_TotVA_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVA_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVA_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_TotVA_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVA_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_TotVA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVA_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_TotVA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVA_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_TotVA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotVA,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_TotPF = {
    DataObjectModelType,
    "TotPF",
    (ModelNode*) &iedModel_SYS_SRCMMXU1,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_Hz,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotPF_mag,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_TotPF_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotPF,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotPF_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotPF_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_TotPF_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotPF_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_TotPF_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotPF,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotPF_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_TotPF_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotPF,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotPF_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_TotPF_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_TotPF,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_Hz = {
    DataObjectModelType,
    "Hz",
    (ModelNode*) &iedModel_SYS_SRCMMXU1,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_Hz_mag,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_Hz_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_Hz,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_Hz_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_Hz_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_Hz_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_Hz_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_Hz_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_Hz,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_Hz_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_Hz_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_Hz,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_Hz_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_Hz_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_Hz,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_PPV = {
    DataObjectModelType,
    "PPV",
    (ModelNode*) &iedModel_SYS_SRCMMXU1,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsAB,
    0,
    -1
};

DataObject iedModel_SYS_SRCMMXU1_PPV_phsAB = {
    DataObjectModelType,
    "phsAB",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsBC,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsAB_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_PPV_phsAB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsAB,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsAB_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsAB_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PPV_phsAB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsAB_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsAB_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsAB_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PPV_phsAB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsAB_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PPV_phsAB_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsAB_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsAB_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PPV_phsAB_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsAB_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PPV_phsAB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsAB,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsAB_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PPV_phsAB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsAB,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_PPV_phsBC = {
    DataObjectModelType,
    "phsBC",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsCA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsBC_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_PPV_phsBC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsBC,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsBC_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsBC_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PPV_phsBC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsBC_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsBC_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsBC_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PPV_phsBC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsBC_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PPV_phsBC_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsBC_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsBC_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PPV_phsBC_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsBC_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PPV_phsBC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsBC,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsBC_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PPV_phsBC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsBC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_PPV_phsCA = {
    DataObjectModelType,
    "phsCA",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsCA_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_PPV_phsCA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsCA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsCA_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsCA_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PPV_phsCA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsCA_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsCA_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsCA_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PPV_phsCA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsCA_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PPV_phsCA_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsCA_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsCA_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PPV_phsCA_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsCA_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PPV_phsCA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsCA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsCA_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PPV_phsCA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PPV_phsCA,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_PNV = {
    DataObjectModelType,
    "PNV",
    (ModelNode*) &iedModel_SYS_SRCMMXU1,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsA,
    0,
    -1
};

DataObject iedModel_SYS_SRCMMXU1_PNV_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsB,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsA_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsA_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsA_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsA_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsA_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsA_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_phsA_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsA_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_phsA_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsA_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsA_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsA,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_PNV_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsC,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsB_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsB,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsB_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsB_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsB_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsB_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsB_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_phsB_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsB_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_phsB_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsB_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsB,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsB_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsB,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_PNV_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_neut,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsC_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsC,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsC_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsC_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsC_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsC_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsC_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_phsC_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsC_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_phsC_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsC_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsC,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsC_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_phsC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_PNV_neut = {
    DataObjectModelType,
    "neut",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_net,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_neut_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_neut_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_neut,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_neut_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_neut_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_neut_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_neut_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_neut_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_neut_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_neut_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_neut_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_neut_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_neut_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_neut_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_neut_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_neut_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_neut_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_neut,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_neut_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_neut_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_neut,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_PNV_net = {
    DataObjectModelType,
    "net",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_res,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_net_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_net_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_net,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_net_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_net_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_net_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_net_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_net_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_net_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_net_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_net_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_net_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_net_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_net_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_net_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_net_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_net_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_net,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_net_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_net_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_net,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_PNV_res = {
    DataObjectModelType,
    "res",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_res_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_res_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_res,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_res_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_res_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_res_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_res_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_res_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_res_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_res_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_res_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_res_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_res_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_res_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_res_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_res_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_res_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_res,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_res_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PNV_res_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PNV_res,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_A = {
    DataObjectModelType,
    "A",
    (ModelNode*) &iedModel_SYS_SRCMMXU1,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsA,
    0,
    -1
};

DataObject iedModel_SYS_SRCMMXU1_A_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsB,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsA_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_A_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsA_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsA_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsA_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsA_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsA_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_phsA_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsA_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_phsA_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsA_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsA_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsA,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_A_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsC,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsB_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_A_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsB,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsB_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsB_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsB_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsB_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsB_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_phsB_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsB_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_phsB_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsB_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsB,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsB_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsB,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_A_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_neut,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsC_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_A_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsC,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsC_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsC_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsC_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsC_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsC_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_phsC_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsC_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_phsC_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsC_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsC,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsC_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_phsC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_A_neut = {
    DataObjectModelType,
    "neut",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_net,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_neut_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_A_neut_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_neut,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_neut_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_neut_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_neut_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_neut_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_neut_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_neut_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_neut_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_neut_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_neut_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_neut_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_neut_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_neut_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_neut_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_neut_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_neut,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_neut_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_neut_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_neut,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_A_net = {
    DataObjectModelType,
    "net",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_res,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_net_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_A_net_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_net,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_net_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_net_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_net_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_net_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_net_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_net_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_net_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_net_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_net_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_net_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_net_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_net_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_net_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_net_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_net,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_net_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_net_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_net,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_A_res = {
    DataObjectModelType,
    "res",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_res_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_A_res_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_res,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_res_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_res_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_res_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_res_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_res_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_res_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_res_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_res_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_res_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_res_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_res_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_res_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_res_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_res_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_res,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_res_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_A_res_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_A_res,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_W = {
    DataObjectModelType,
    "W",
    (ModelNode*) &iedModel_SYS_SRCMMXU1,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsA,
    0,
    -1
};

DataObject iedModel_SYS_SRCMMXU1_W_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsB,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsA_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_W_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsA_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsA_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsA_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsA_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsA_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_phsA_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsA_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_phsA_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsA_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsA_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsA,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_W_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsC,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsB_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_W_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsB,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsB_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsB_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsB_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsB_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsB_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_phsB_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsB_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_phsB_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsB_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsB,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsB_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsB,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_W_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_neut,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsC_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_W_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsC,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsC_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsC_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsC_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsC_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsC_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_phsC_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsC_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_phsC_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsC_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsC,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsC_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_phsC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_W_neut = {
    DataObjectModelType,
    "neut",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_net,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_neut_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_W_neut_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_neut,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_neut_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_neut_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_neut_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_neut_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_neut_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_neut_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_neut_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_neut_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_neut_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_neut_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_neut_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_neut_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_neut_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_neut_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_neut,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_neut_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_neut_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_neut,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_W_net = {
    DataObjectModelType,
    "net",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_res,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_net_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_W_net_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_net,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_net_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_net_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_net_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_net_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_net_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_net_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_net_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_net_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_net_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_net_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_net_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_net_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_net_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_net_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_net,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_net_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_net_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_net,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_W_res = {
    DataObjectModelType,
    "res",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_res_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_W_res_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_res,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_res_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_res_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_res_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_res_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_res_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_res_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_res_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_res_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_res_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_res_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_res_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_res_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_res_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_res_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_res,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_res_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_W_res_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_W_res,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_VAr = {
    DataObjectModelType,
    "VAr",
    (ModelNode*) &iedModel_SYS_SRCMMXU1,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsA,
    0,
    -1
};

DataObject iedModel_SYS_SRCMMXU1_VAr_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsB,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsA_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsA_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsA_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsA_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsA_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsA_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_phsA_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsA_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_phsA_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsA_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsA_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsA,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_VAr_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsC,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsB_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsB,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsB_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsB_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsB_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsB_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsB_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_phsB_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsB_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_phsB_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsB_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsB,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsB_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsB,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_VAr_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_neut,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsC_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsC,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsC_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsC_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsC_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsC_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsC_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_phsC_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsC_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_phsC_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsC_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsC,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsC_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_phsC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_VAr_neut = {
    DataObjectModelType,
    "neut",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_net,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_neut_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_neut_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_neut,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_neut_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_neut_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_neut_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_neut_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_neut_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_neut_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_neut_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_neut_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_neut_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_neut_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_neut_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_neut_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_neut_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_neut_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_neut,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_neut_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_neut_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_neut,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_VAr_net = {
    DataObjectModelType,
    "net",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_res,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_net_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_net_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_net,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_net_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_net_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_net_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_net_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_net_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_net_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_net_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_net_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_net_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_net_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_net_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_net_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_net_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_net_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_net,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_net_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_net_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_net,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_VAr_res = {
    DataObjectModelType,
    "res",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_res_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_res_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_res,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_res_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_res_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_res_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_res_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_res_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_res_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_res_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_res_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_res_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_res_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_res_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_res_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_res_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_res_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_res,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_res_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VAr_res_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VAr_res,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_VA = {
    DataObjectModelType,
    "VA",
    (ModelNode*) &iedModel_SYS_SRCMMXU1,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsA,
    0,
    -1
};

DataObject iedModel_SYS_SRCMMXU1_VA_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsB,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsA_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_VA_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsA_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsA_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsA_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsA_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsA_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_phsA_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsA_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_phsA_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsA_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsA_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsA,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_VA_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsC,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsB_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_VA_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsB,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsB_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsB_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsB_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsB_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsB_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_phsB_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsB_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_phsB_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsB_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsB,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsB_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsB,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_VA_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_neut,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsC_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_VA_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsC,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsC_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsC_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsC_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsC_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsC_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_phsC_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsC_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_phsC_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsC_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsC,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsC_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_phsC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_VA_neut = {
    DataObjectModelType,
    "neut",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_net,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_neut_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_VA_neut_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_neut,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_neut_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_neut_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_neut_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_neut_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_neut_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_neut_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_neut_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_neut_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_neut_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_neut_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_neut_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_neut_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_neut_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_neut_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_neut,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_neut_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_neut_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_neut,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_VA_net = {
    DataObjectModelType,
    "net",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_res,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_net_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_VA_net_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_net,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_net_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_net_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_net_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_net_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_net_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_net_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_net_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_net_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_net_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_net_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_net_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_net_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_net_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_net_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_net,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_net_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_net_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_net,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_VA_res = {
    DataObjectModelType,
    "res",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_res_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_VA_res_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_res,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_res_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_res_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_res_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_res_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_res_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_res_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_res_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_res_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_res_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_res_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_res_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_res_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_res_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_res_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_res,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_res_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_VA_res_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_VA_res,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_PF = {
    DataObjectModelType,
    "PF",
    (ModelNode*) &iedModel_SYS_SRCMMXU1,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsA,
    0,
    -1
};

DataObject iedModel_SYS_SRCMMXU1_PF_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsB,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsA_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_PF_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsA_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsA_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsA_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsA_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsA_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_phsA_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsA_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_phsA_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsA_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsA,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsA_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsA,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_PF_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsC,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsB_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_PF_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsB,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsB_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsB_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsB_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsB_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsB_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_phsB_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsB_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_phsB_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsB_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsB,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsB_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsB,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_PF_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_neut,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsC_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_PF_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsC,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsC_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsC_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsC_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsC_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsC_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_phsC_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsC_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_phsC_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsC_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsC,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsC_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_phsC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_PF_neut = {
    DataObjectModelType,
    "neut",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_net,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_neut_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_PF_neut_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_neut,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_neut_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_neut_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_neut_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_neut_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_neut_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_neut_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_neut_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_neut_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_neut_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_neut_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_neut_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_neut_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_neut_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_neut_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_neut,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_neut_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_neut_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_neut,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_PF_net = {
    DataObjectModelType,
    "net",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_res,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_net_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_PF_net_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_net,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_net_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_net_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_net_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_net_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_net_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_net_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_net_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_net_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_net_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_net_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_net_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_net_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_net_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_net_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_net,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_net_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_net_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_net,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_SRCMMXU1_PF_res = {
    DataObjectModelType,
    "res",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_res_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_SRCMMXU1_PF_res_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_res,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_res_q,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_res_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_res_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_res_cVal,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_res_cVal_ang,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_res_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_res_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_res_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_res_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_res_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_res_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_res_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_res_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_res_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_res,
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_res_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_SRCMMXU1_PF_res_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_SRCMMXU1_PF_res,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_SYS_XCBR1 = {
    LogicalNodeModelType,
    "XCBR1",
    (ModelNode*) &iedModel_SYS,
    NULL,
    (ModelNode*) &iedModel_SYS_XCBR1_Beh,
};

DataObject iedModel_SYS_XCBR1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_SYS_XCBR1,
    (ModelNode*) &iedModel_SYS_XCBR1_EEName,
    (ModelNode*) &iedModel_SYS_XCBR1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_XCBR1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_XCBR1_Beh,
    (ModelNode*) &iedModel_SYS_XCBR1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_XCBR1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_XCBR1_Beh,
    (ModelNode*) &iedModel_SYS_XCBR1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_XCBR1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_XCBR1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_XCBR1_EEName = {
    DataObjectModelType,
    "EEName",
    (ModelNode*) &iedModel_SYS_XCBR1,
    (ModelNode*) &iedModel_SYS_XCBR1_Loc,
    (ModelNode*) &iedModel_SYS_XCBR1_EEName_vendor,
    0,
    -1
};

DataAttribute iedModel_SYS_XCBR1_EEName_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_SYS_XCBR1_EEName,
    (ModelNode*) &iedModel_SYS_XCBR1_EEName_hwRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_XCBR1_EEName_hwRev = {
    DataAttributeModelType,
    "hwRev",
    (ModelNode*) &iedModel_SYS_XCBR1_EEName,
    (ModelNode*) &iedModel_SYS_XCBR1_EEName_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_XCBR1_EEName_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_SYS_XCBR1_EEName,
    (ModelNode*) &iedModel_SYS_XCBR1_EEName_serNum,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_XCBR1_EEName_serNum = {
    DataAttributeModelType,
    "serNum",
    (ModelNode*) &iedModel_SYS_XCBR1_EEName,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_XCBR1_Loc = {
    DataObjectModelType,
    "Loc",
    (ModelNode*) &iedModel_SYS_XCBR1,
    (ModelNode*) &iedModel_SYS_XCBR1_OpCnt,
    (ModelNode*) &iedModel_SYS_XCBR1_Loc_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_XCBR1_Loc_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_XCBR1_Loc,
    (ModelNode*) &iedModel_SYS_XCBR1_Loc_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_XCBR1_Loc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_XCBR1_Loc,
    (ModelNode*) &iedModel_SYS_XCBR1_Loc_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_XCBR1_Loc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_XCBR1_Loc,
    (ModelNode*) &iedModel_SYS_XCBR1_Loc_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_XCBR1_Loc_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_XCBR1_Loc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_XCBR1_OpCnt = {
    DataObjectModelType,
    "OpCnt",
    (ModelNode*) &iedModel_SYS_XCBR1,
    (ModelNode*) &iedModel_SYS_XCBR1_Pos,
    (ModelNode*) &iedModel_SYS_XCBR1_OpCnt_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_XCBR1_OpCnt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_XCBR1_OpCnt,
    (ModelNode*) &iedModel_SYS_XCBR1_OpCnt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_XCBR1_OpCnt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_XCBR1_OpCnt,
    (ModelNode*) &iedModel_SYS_XCBR1_OpCnt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_XCBR1_OpCnt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_XCBR1_OpCnt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_XCBR1_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_SYS_XCBR1,
    (ModelNode*) &iedModel_SYS_XCBR1_BlkOpn,
    (ModelNode*) &iedModel_SYS_XCBR1_Pos_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_XCBR1_Pos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_XCBR1_Pos,
    (ModelNode*) &iedModel_SYS_XCBR1_Pos_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_CODEDENUM,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_XCBR1_Pos_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_XCBR1_Pos,
    (ModelNode*) &iedModel_SYS_XCBR1_Pos_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_XCBR1_Pos_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_XCBR1_Pos,
    (ModelNode*) &iedModel_SYS_XCBR1_Pos_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_XCBR1_Pos_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_SYS_XCBR1_Pos,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataObject iedModel_SYS_XCBR1_BlkOpn = {
    DataObjectModelType,
    "BlkOpn",
    (ModelNode*) &iedModel_SYS_XCBR1,
    (ModelNode*) &iedModel_SYS_XCBR1_BlkCls,
    (ModelNode*) &iedModel_SYS_XCBR1_BlkOpn_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_XCBR1_BlkOpn_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_XCBR1_BlkOpn,
    (ModelNode*) &iedModel_SYS_XCBR1_BlkOpn_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_XCBR1_BlkOpn_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_XCBR1_BlkOpn,
    (ModelNode*) &iedModel_SYS_XCBR1_BlkOpn_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_XCBR1_BlkOpn_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_XCBR1_BlkOpn,
    (ModelNode*) &iedModel_SYS_XCBR1_BlkOpn_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_XCBR1_BlkOpn_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_SYS_XCBR1_BlkOpn,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataObject iedModel_SYS_XCBR1_BlkCls = {
    DataObjectModelType,
    "BlkCls",
    (ModelNode*) &iedModel_SYS_XCBR1,
    NULL,
    (ModelNode*) &iedModel_SYS_XCBR1_BlkCls_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_XCBR1_BlkCls_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_XCBR1_BlkCls,
    (ModelNode*) &iedModel_SYS_XCBR1_BlkCls_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_XCBR1_BlkCls_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_XCBR1_BlkCls,
    (ModelNode*) &iedModel_SYS_XCBR1_BlkCls_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_XCBR1_BlkCls_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_XCBR1_BlkCls,
    (ModelNode*) &iedModel_SYS_XCBR1_BlkCls_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_XCBR1_BlkCls_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_SYS_XCBR1_BlkCls,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

extern ReportControlBlock iedModel_SYS_LLN0_report0;
extern ReportControlBlock iedModel_SYS_LLN0_report1;

ReportControlBlock iedModel_SYS_LLN0_report0 = {&iedModel_SYS_LLN0, "brcbMeasScada01", "MeasScada", true, "DS_MEAS_SCADA", 1, 24, 255, 50, 100, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_SYS_LLN0_report1};
ReportControlBlock iedModel_SYS_LLN0_report1 = {&iedModel_SYS_LLN0, "brcbSwitchOper01", "SwitchOper", true, "DS_SWITCH_OPER", 1, 25, 255, 50, 500, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, NULL};

extern SVControlBlock iedModel_SYS_LLN0_smv0;

static PhyComAddress iedModel_SYS_LLN0_smv0_address = {
  4,
  0,
  0,
  {0x1, 0xc, 0xcd, 0x4, 0x0, 0x0}
};

SVControlBlock iedModel_SYS_LLN0_smv0 = {&iedModel_SYS_LLN0, "svcbMeasScada", "MeasScada", "DS_MEAS_SCADA", 23, 0, 1000, 1, &iedModel_SYS_LLN0_smv0_address, false, 0, NULL};

extern GSEControlBlock iedModel_SYS_LLN0_gse0;

static PhyComAddress iedModel_SYS_LLN0_gse0_address = {
  4,
  1,
  4097,
  {0x1, 0xc, 0xcd, 0x1, 0x1, 0x0}
};

GSEControlBlock iedModel_SYS_LLN0_gse0 = {&iedModel_SYS_LLN0, "gcbSwitchOper", "SwitchOper", "DS_SWITCH_OPER", 1, false, &iedModel_SYS_LLN0_gse0_address, 1, 500, NULL};

extern SettingGroupControlBlock iedModel_SYS_LLN0_sgcb;

SettingGroupControlBlock iedModel_SYS_LLN0_sgcb = {&iedModel_SYS_LLN0, 1, 1, 0, false, 0, 0, NULL};




IedModel iedModel = {
    "demoIED",
    &iedModel_SYS,
    &iedModelds_SYS_LLN0_DS_MEAS_SCADA,
    &iedModel_SYS_LLN0_report0,
    &iedModel_SYS_LLN0_gse0,
    &iedModel_SYS_LLN0_smv0,
    &iedModel_SYS_LLN0_sgcb,
    NULL,
    NULL,
    initializeValues
};

static void
initializeValues()
{

iedModel_SYS_LLN0_NamPlt_ldNs.mmsValue = MmsValue_newVisibleString("IEC 61850-7-4:2007");

iedModel_SYS_LLN0_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_LLN0_Health_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_LLN0_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_CILO1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_CSWI1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_CSWI1_Pos_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_LPHD1_PhyNam_vendor.mmsValue = MmsValue_newVisibleString("Pextron");

iedModel_SYS_LPHD1_PhyHealth_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_LPHD1_Proxy_stVal.mmsValue = MmsValue_newBoolean(false);

iedModel_SYS_SRCMMXU1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_SRCMMXU1_ClcMth_setVal.mmsValue = MmsValue_newIntegerFromInt32(4);

iedModel_SYS_XCBR1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_XCBR1_Pos_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_SYS_XCBR1_BlkOpn_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_SYS_XCBR1_BlkCls_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);
}
