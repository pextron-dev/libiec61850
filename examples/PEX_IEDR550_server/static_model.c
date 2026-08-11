/*
 * static_model.c
 *
 * automatically generated from .\IEDR550.icd
 */
#include "static_model.h"

static void initializeValues();

extern DataSet iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA;
extern DataSet iedModelds_SYS_LLN0_DS_MEAS_SCADA;
extern DataSet iedModelds_SYS_LLN0_DS_SWITCH_OPER;


extern DataSetEntry iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda0;
extern DataSetEntry iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda1;
extern DataSetEntry iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda2;
extern DataSetEntry iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda3;
extern DataSetEntry iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda4;
extern DataSetEntry iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda5;
extern DataSetEntry iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda6;
extern DataSetEntry iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda7;
extern DataSetEntry iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda8;

DataSetEntry iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda0 = {
  "PSPLY",
  false,
  "PSPLYGGIO1$ST$Alm1$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda1
};

DataSetEntry iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda1 = {
  "PSPLY",
  false,
  "PSPLYGGIO1$ST$Alm2$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda2
};

DataSetEntry iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda2 = {
  "PSPLY",
  false,
  "PSPLYGGIO1$ST$Alm3$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda3
};

DataSetEntry iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda3 = {
  "PSPLY",
  false,
  "PSPLYGGIO1$ST$Ind1$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda4
};

DataSetEntry iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda4 = {
  "PSPLY",
  false,
  "PSPLYGGIO1$ST$Ind2$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda5
};

DataSetEntry iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda5 = {
  "PSPLY",
  false,
  "PSPLYGGIO1$ST$Ind3$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda6
};

DataSetEntry iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda6 = {
  "PSPLY",
  false,
  "PSPLYGGIO1$MX$AnIn1$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda7
};

DataSetEntry iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda7 = {
  "PSPLY",
  false,
  "PSPLYGGIO1$MX$AnIn2$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda8
};

DataSetEntry iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda8 = {
  "PSPLY",
  false,
  "PSPLYGGIO1$MX$AnIn3$mag$f", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA = {
  "PSPLY",
  "LLN0$DS_PSPLY_MEAS_SCADA",
  9,
  &iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA_fcda0,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA
};

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
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda21;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda22;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda23;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda24;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda25;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda26;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda27;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda28;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda29;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda30;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda31;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda32;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda33;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda34;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda35;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda36;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda37;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda38;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda39;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda40;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda41;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda42;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda43;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda44;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda45;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda46;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda47;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda48;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda49;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda50;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda51;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda52;
extern DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda53;

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda0 = {
  "SYS",
  false,
  "LOADMMXU1$MX$PPV$phsAB$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda1
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda1 = {
  "SYS",
  false,
  "LOADMMXU1$MX$PPV$phsAB$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda2
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda2 = {
  "SYS",
  false,
  "LOADMMXU1$MX$PPV$phsBC$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda3
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda3 = {
  "SYS",
  false,
  "LOADMMXU1$MX$PPV$phsBC$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda4
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda4 = {
  "SYS",
  false,
  "LOADMMXU1$MX$PPV$phsCA$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda5
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda5 = {
  "SYS",
  false,
  "LOADMMXU1$MX$PPV$phsCA$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda6
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda6 = {
  "SYS",
  false,
  "LOADMMXU1$MX$PNV$phsA$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda7
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda7 = {
  "SYS",
  false,
  "LOADMMXU1$MX$PNV$phsA$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda8
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda8 = {
  "SYS",
  false,
  "LOADMMXU1$MX$PNV$phsB$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda9
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda9 = {
  "SYS",
  false,
  "LOADMMXU1$MX$PNV$phsB$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda10
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda10 = {
  "SYS",
  false,
  "LOADMMXU1$MX$PNV$phsC$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda11
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda11 = {
  "SYS",
  false,
  "LOADMMXU1$MX$PNV$phsC$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda12
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda12 = {
  "SYS",
  false,
  "LOADMMXU1$MX$PNV$neut$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda13
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda13 = {
  "SYS",
  false,
  "LOADMMXU1$MX$PNV$neut$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda14
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda14 = {
  "SYS",
  false,
  "LOADMMXU1$MX$Hz$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda15
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda15 = {
  "SYS",
  false,
  "SRCMMXU1$MX$TotW$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda16
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda16 = {
  "SYS",
  false,
  "SRCMMXU1$MX$TotVAr$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda17
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda17 = {
  "SYS",
  false,
  "SRCMMXU1$MX$TotVA$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda18
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda18 = {
  "SYS",
  false,
  "SRCMMXU1$MX$TotPF$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda19
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda19 = {
  "SYS",
  false,
  "SRCMMXU1$MX$Hz$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda20
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda20 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PPV$phsAB$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda21
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda21 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PPV$phsAB$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda22
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda22 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PPV$phsBC$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda23
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda23 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PPV$phsBC$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda24
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda24 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PPV$phsCA$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda25
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda25 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PPV$phsCA$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda26
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda26 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PNV$phsA$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda27
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda27 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PNV$phsA$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda28
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda28 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PNV$phsB$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda29
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda29 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PNV$phsB$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda30
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda30 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PNV$phsC$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda31
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda31 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PNV$phsC$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda32
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda32 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PNV$neut$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda33
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda33 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PNV$neut$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda34
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda34 = {
  "SYS",
  false,
  "SRCMMXU1$MX$A$phsA$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda35
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda35 = {
  "SYS",
  false,
  "SRCMMXU1$MX$A$phsA$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda36
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda36 = {
  "SYS",
  false,
  "SRCMMXU1$MX$A$phsB$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda37
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda37 = {
  "SYS",
  false,
  "SRCMMXU1$MX$A$phsB$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda38
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda38 = {
  "SYS",
  false,
  "SRCMMXU1$MX$A$phsC$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda39
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda39 = {
  "SYS",
  false,
  "SRCMMXU1$MX$A$phsC$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda40
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda40 = {
  "SYS",
  false,
  "SRCMMXU1$MX$A$neut$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda41
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda41 = {
  "SYS",
  false,
  "SRCMMXU1$MX$A$neut$cVal$ang$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda42
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda42 = {
  "SYS",
  false,
  "SRCMMXU1$MX$W$phsA$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda43
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda43 = {
  "SYS",
  false,
  "SRCMMXU1$MX$W$phsB$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda44
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda44 = {
  "SYS",
  false,
  "SRCMMXU1$MX$W$phsC$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda45
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda45 = {
  "SYS",
  false,
  "SRCMMXU1$MX$VAr$phsA$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda46
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda46 = {
  "SYS",
  false,
  "SRCMMXU1$MX$VAr$phsB$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda47
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda47 = {
  "SYS",
  false,
  "SRCMMXU1$MX$VAr$phsC$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda48
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda48 = {
  "SYS",
  false,
  "SRCMMXU1$MX$VA$phsA$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda49
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda49 = {
  "SYS",
  false,
  "SRCMMXU1$MX$VA$phsB$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda50
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda50 = {
  "SYS",
  false,
  "SRCMMXU1$MX$VA$phsC$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda51
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda51 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PF$phsA$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda52
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda52 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PF$phsB$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda53
};

DataSetEntry iedModelds_SYS_LLN0_DS_MEAS_SCADA_fcda53 = {
  "SYS",
  false,
  "SRCMMXU1$MX$PF$phsC$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_SYS_LLN0_DS_MEAS_SCADA = {
  "SYS",
  "LLN0$DS_MEAS_SCADA",
  54,
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

LogicalDevice iedModel_PSPLY = {
    LogicalDeviceModelType,
    "PSPLY",
    (ModelNode*) &iedModel,
    (ModelNode*) &iedModel_SYS,
    (ModelNode*) &iedModel_PSPLY_LLN0,
    NULL
};

LogicalNode iedModel_PSPLY_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_PSPLY,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1,
    (ModelNode*) &iedModel_PSPLY_LLN0_NamPlt,
};

DataObject iedModel_PSPLY_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_PSPLY_LLN0,
    (ModelNode*) &iedModel_PSPLY_LLN0_Beh,
    (ModelNode*) &iedModel_PSPLY_LLN0_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_PSPLY_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_PSPLY_LLN0_NamPlt,
    (ModelNode*) &iedModel_PSPLY_LLN0_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PSPLY_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_PSPLY_LLN0_NamPlt,
    (ModelNode*) &iedModel_PSPLY_LLN0_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PSPLY_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_PSPLY_LLN0_NamPlt,
    (ModelNode*) &iedModel_PSPLY_LLN0_NamPlt_ldNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PSPLY_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_PSPLY_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PSPLY_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_PSPLY_LLN0,
    (ModelNode*) &iedModel_PSPLY_LLN0_Health,
    (ModelNode*) &iedModel_PSPLY_LLN0_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_PSPLY_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PSPLY_LLN0_Beh,
    (ModelNode*) &iedModel_PSPLY_LLN0_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_PSPLY_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PSPLY_LLN0_Beh,
    (ModelNode*) &iedModel_PSPLY_LLN0_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PSPLY_LLN0_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PSPLY_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_PSPLY_LLN0,
    (ModelNode*) &iedModel_PSPLY_LLN0_Mod,
    (ModelNode*) &iedModel_PSPLY_LLN0_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_PSPLY_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PSPLY_LLN0_Health,
    (ModelNode*) &iedModel_PSPLY_LLN0_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_PSPLY_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PSPLY_LLN0_Health,
    (ModelNode*) &iedModel_PSPLY_LLN0_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PSPLY_LLN0_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PSPLY_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_PSPLY_LLN0,
    NULL,
    (ModelNode*) &iedModel_PSPLY_LLN0_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_PSPLY_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PSPLY_LLN0_Mod,
    (ModelNode*) &iedModel_PSPLY_LLN0_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PSPLY_LLN0_Mod,
    (ModelNode*) &iedModel_PSPLY_LLN0_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PSPLY_LLN0_Mod,
    (ModelNode*) &iedModel_PSPLY_LLN0_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PSPLY_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_PSPLY_LLN0_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

LogicalNode iedModel_PSPLY_PSPLYGGIO1 = {
    LogicalNodeModelType,
    "PSPLYGGIO1",
    (ModelNode*) &iedModel_PSPLY,
    (ModelNode*) &iedModel_PSPLY_LPHD1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Beh,
};

DataObject iedModel_PSPLY_PSPLYGGIO1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Beh,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Beh,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PSPLY_PSPLYGGIO1_Alm1 = {
    DataObjectModelType,
    "Alm1",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm2,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm1_stVal,
    0,
    -1
};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Alm1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm1_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Alm1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm1_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Alm1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Alm1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PSPLY_PSPLYGGIO1_Alm2 = {
    DataObjectModelType,
    "Alm2",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm3,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm2_stVal,
    0,
    -1
};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Alm2_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm2,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm2_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Alm2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm2,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm2_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Alm2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm2,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Alm2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PSPLY_PSPLYGGIO1_Alm3 = {
    DataObjectModelType,
    "Alm3",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm3_stVal,
    0,
    -1
};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Alm3_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm3,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm3_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Alm3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm3,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm3_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Alm3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm3,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm3_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Alm3_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Alm3,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PSPLY_PSPLYGGIO1_AnIn1 = {
    DataObjectModelType,
    "AnIn1",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn2,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn1_mag,
    0,
    -1
};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_AnIn1_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn1_q,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn1_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_AnIn1_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn1_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_AnIn1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn1_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_AnIn1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_AnIn1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PSPLY_PSPLYGGIO1_AnIn2 = {
    DataObjectModelType,
    "AnIn2",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn3,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn2_mag,
    0,
    -1
};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_AnIn2_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn2,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn2_q,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn2_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_AnIn2_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn2_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_AnIn2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn2,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn2_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_AnIn2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn2,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_AnIn2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PSPLY_PSPLYGGIO1_AnIn3 = {
    DataObjectModelType,
    "AnIn3",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn3_mag,
    0,
    -1
};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_AnIn3_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn3,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn3_q,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn3_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_AnIn3_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn3_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_AnIn3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn3,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn3_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_AnIn3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn3,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn3_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_AnIn3_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_AnIn3,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PSPLY_PSPLYGGIO1_Ind1 = {
    DataObjectModelType,
    "Ind1",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind2,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind1_stVal,
    0,
    -1
};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Ind1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind1_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Ind1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind1_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Ind1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Ind1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PSPLY_PSPLYGGIO1_Ind2 = {
    DataObjectModelType,
    "Ind2",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind3,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind2_stVal,
    0,
    -1
};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Ind2_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind2,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind2_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Ind2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind2,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind2_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Ind2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind2,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Ind2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PSPLY_PSPLYGGIO1_Ind3 = {
    DataObjectModelType,
    "Ind3",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1,
    NULL,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind3_stVal,
    0,
    -1
};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Ind3_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind3,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind3_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Ind3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind3,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind3_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Ind3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind3,
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind3_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PSPLY_PSPLYGGIO1_Ind3_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PSPLY_PSPLYGGIO1_Ind3,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_PSPLY_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    (ModelNode*) &iedModel_PSPLY,
    NULL,
    (ModelNode*) &iedModel_PSPLY_LPHD1_PhyNam,
};

DataObject iedModel_PSPLY_LPHD1_PhyNam = {
    DataObjectModelType,
    "PhyNam",
    (ModelNode*) &iedModel_PSPLY_LPHD1,
    (ModelNode*) &iedModel_PSPLY_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_PSPLY_LPHD1_PhyNam_vendor,
    0,
    -1
};

DataAttribute iedModel_PSPLY_LPHD1_PhyNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_PSPLY_LPHD1_PhyNam,
    (ModelNode*) &iedModel_PSPLY_LPHD1_PhyNam_hwRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PSPLY_LPHD1_PhyNam_hwRev = {
    DataAttributeModelType,
    "hwRev",
    (ModelNode*) &iedModel_PSPLY_LPHD1_PhyNam,
    (ModelNode*) &iedModel_PSPLY_LPHD1_PhyNam_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PSPLY_LPHD1_PhyNam_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_PSPLY_LPHD1_PhyNam,
    (ModelNode*) &iedModel_PSPLY_LPHD1_PhyNam_serNum,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PSPLY_LPHD1_PhyNam_serNum = {
    DataAttributeModelType,
    "serNum",
    (ModelNode*) &iedModel_PSPLY_LPHD1_PhyNam,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PSPLY_LPHD1_PhyHealth = {
    DataObjectModelType,
    "PhyHealth",
    (ModelNode*) &iedModel_PSPLY_LPHD1,
    (ModelNode*) &iedModel_PSPLY_LPHD1_Proxy,
    (ModelNode*) &iedModel_PSPLY_LPHD1_PhyHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_PSPLY_LPHD1_PhyHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PSPLY_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_PSPLY_LPHD1_PhyHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_PSPLY_LPHD1_PhyHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PSPLY_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_PSPLY_LPHD1_PhyHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_LPHD1_PhyHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PSPLY_LPHD1_PhyHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PSPLY_LPHD1_Proxy = {
    DataObjectModelType,
    "Proxy",
    (ModelNode*) &iedModel_PSPLY_LPHD1,
    NULL,
    (ModelNode*) &iedModel_PSPLY_LPHD1_Proxy_stVal,
    0,
    -1
};

DataAttribute iedModel_PSPLY_LPHD1_Proxy_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PSPLY_LPHD1_Proxy,
    (ModelNode*) &iedModel_PSPLY_LPHD1_Proxy_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_LPHD1_Proxy_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PSPLY_LPHD1_Proxy,
    (ModelNode*) &iedModel_PSPLY_LPHD1_Proxy_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PSPLY_LPHD1_Proxy_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PSPLY_LPHD1_Proxy,
    (ModelNode*) &iedModel_PSPLY_LPHD1_Proxy_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PSPLY_LPHD1_Proxy_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PSPLY_LPHD1_Proxy,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};


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
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
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

LogicalNode iedModel_SYS_PROTGGIO1 = {
    LogicalNodeModelType,
    "PROTGGIO1",
    (ModelNode*) &iedModel_SYS,
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Beh,
};

DataObject iedModel_SYS_PROTGGIO1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Beh,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Beh,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind1 = {
    DataObjectModelType,
    "Ind1",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind2,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind1_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind1_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind1_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind2 = {
    DataObjectModelType,
    "Ind2",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind3,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind2_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind2_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind2,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind2_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind2,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind2_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind2,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind3 = {
    DataObjectModelType,
    "Ind3",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind4,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind3_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind3_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind3,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind3_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind3,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind3_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind3,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind3_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind3_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind3,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind4 = {
    DataObjectModelType,
    "Ind4",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind5,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind4_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind4_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind4,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind4_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind4_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind4,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind4_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind4_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind4,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind4_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind4_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind4,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind5 = {
    DataObjectModelType,
    "Ind5",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind6,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind5_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind5_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind5,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind5_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind5_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind5,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind5_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind5_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind5,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind5_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind5_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind5,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind6 = {
    DataObjectModelType,
    "Ind6",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind7,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind6_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind6_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind6,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind6_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind6_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind6,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind6_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind6_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind6,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind6_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind6_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind6,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind7 = {
    DataObjectModelType,
    "Ind7",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind8,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind7_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind7_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind7,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind7_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind7_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind7,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind7_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind7_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind7,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind7_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind7_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind7,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind8 = {
    DataObjectModelType,
    "Ind8",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind9,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind8_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind8_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind8,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind8_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind8_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind8,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind8_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind8_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind8,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind8_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind8_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind8,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind9 = {
    DataObjectModelType,
    "Ind9",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind10,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind9_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind9_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind9,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind9_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind9_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind9,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind9_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind9_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind9,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind9_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind9_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind9,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind10 = {
    DataObjectModelType,
    "Ind10",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind11,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind10_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind10_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind10,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind10_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind10_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind10,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind10_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind10_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind10,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind10_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind10_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind10,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind11 = {
    DataObjectModelType,
    "Ind11",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind12,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind11_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind11_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind11,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind11_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind11_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind11,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind11_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind11_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind11,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind11_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind11_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind11,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind12 = {
    DataObjectModelType,
    "Ind12",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind13,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind12_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind12_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind12,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind12_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind12_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind12,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind12_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind12_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind12,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind12_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind12_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind12,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind13 = {
    DataObjectModelType,
    "Ind13",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind14,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind13_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind13_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind13,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind13_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind13_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind13,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind13_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind13_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind13,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind13_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind13_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind13,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind14 = {
    DataObjectModelType,
    "Ind14",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind15,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind14_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind14_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind14,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind14_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind14_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind14,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind14_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind14_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind14,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind14_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind14_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind14,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind15 = {
    DataObjectModelType,
    "Ind15",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind16,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind15_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind15_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind15,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind15_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind15_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind15,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind15_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind15_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind15,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind15_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind15_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind15,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind16 = {
    DataObjectModelType,
    "Ind16",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind17,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind16_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind16_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind16,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind16_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind16_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind16,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind16_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind16_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind16,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind16_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind16_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind16,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind17 = {
    DataObjectModelType,
    "Ind17",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind18,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind17_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind17_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind17,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind17_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind17_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind17,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind17_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind17_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind17,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind17_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind17_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind17,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind18 = {
    DataObjectModelType,
    "Ind18",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind19,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind18_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind18_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind18,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind18_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind18_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind18,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind18_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind18_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind18,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind18_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind18_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind18,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind19 = {
    DataObjectModelType,
    "Ind19",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind20,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind19_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind19_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind19,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind19_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind19_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind19,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind19_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind19_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind19,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind19_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind19_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind19,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind20 = {
    DataObjectModelType,
    "Ind20",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind21,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind20_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind20_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind20,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind20_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind20_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind20,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind20_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind20_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind20,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind20_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind20_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind20,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind21 = {
    DataObjectModelType,
    "Ind21",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind22,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind21_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind21_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind21,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind21_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind21_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind21,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind21_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind21_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind21,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind21_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind21_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind21,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind22 = {
    DataObjectModelType,
    "Ind22",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind23,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind22_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind22_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind22,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind22_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind22_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind22,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind22_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind22_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind22,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind22_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind22_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind22,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind23 = {
    DataObjectModelType,
    "Ind23",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind24,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind23_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind23_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind23,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind23_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind23_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind23,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind23_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind23_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind23,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind23_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind23_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind23,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind24 = {
    DataObjectModelType,
    "Ind24",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind25,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind24_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind24_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind24,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind24_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind24_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind24,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind24_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind24_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind24,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind24_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind24_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind24,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind25 = {
    DataObjectModelType,
    "Ind25",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind26,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind25_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind25_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind25,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind25_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind25_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind25,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind25_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind25_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind25,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind25_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind25_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind25,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind26 = {
    DataObjectModelType,
    "Ind26",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind27,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind26_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind26_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind26,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind26_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind26_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind26,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind26_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind26_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind26,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind26_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind26_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind26,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind27 = {
    DataObjectModelType,
    "Ind27",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind28,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind27_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind27_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind27,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind27_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind27_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind27,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind27_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind27_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind27,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind27_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind27_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind27,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind28 = {
    DataObjectModelType,
    "Ind28",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind29,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind28_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind28_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind28,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind28_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind28_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind28,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind28_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind28_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind28,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind28_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind28_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind28,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind29 = {
    DataObjectModelType,
    "Ind29",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind30,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind29_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind29_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind29,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind29_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind29_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind29,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind29_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind29_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind29,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind29_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind29_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind29,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind30 = {
    DataObjectModelType,
    "Ind30",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind31,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind30_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind30_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind30,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind30_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind30_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind30,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind30_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind30_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind30,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind30_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind30_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind30,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind31 = {
    DataObjectModelType,
    "Ind31",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind32,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind31_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind31_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind31,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind31_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind31_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind31,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind31_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind31_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind31,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind31_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind31_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind31,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind32 = {
    DataObjectModelType,
    "Ind32",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind33,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind32_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind32_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind32,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind32_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind32_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind32,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind32_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind32_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind32,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind32_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind32_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind32,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind33 = {
    DataObjectModelType,
    "Ind33",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind34,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind33_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind33_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind33,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind33_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind33_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind33,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind33_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind33_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind33,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind33_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind33_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind33,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind34 = {
    DataObjectModelType,
    "Ind34",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind35,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind34_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind34_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind34,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind34_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind34_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind34,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind34_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind34_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind34,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind34_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind34_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind34,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind35 = {
    DataObjectModelType,
    "Ind35",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind36,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind35_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind35_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind35,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind35_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind35_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind35,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind35_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind35_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind35,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind35_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind35_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind35,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind36 = {
    DataObjectModelType,
    "Ind36",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind37,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind36_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind36_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind36,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind36_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind36_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind36,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind36_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind36_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind36,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind36_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind36_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind36,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind37 = {
    DataObjectModelType,
    "Ind37",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind38,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind37_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind37_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind37,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind37_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind37_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind37,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind37_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind37_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind37,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind37_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind37_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind37,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind38 = {
    DataObjectModelType,
    "Ind38",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind39,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind38_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind38_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind38,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind38_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind38_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind38,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind38_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind38_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind38,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind38_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind38_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind38,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind39 = {
    DataObjectModelType,
    "Ind39",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind40,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind39_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind39_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind39,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind39_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind39_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind39,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind39_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind39_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind39,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind39_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind39_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind39,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind40 = {
    DataObjectModelType,
    "Ind40",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind41,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind40_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind40_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind40,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind40_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind40_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind40,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind40_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind40_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind40,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind40_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind40_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind40,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind41 = {
    DataObjectModelType,
    "Ind41",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind42,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind41_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind41_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind41,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind41_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind41_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind41,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind41_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind41_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind41,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind41_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind41_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind41,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind42 = {
    DataObjectModelType,
    "Ind42",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind43,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind42_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind42_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind42,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind42_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind42_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind42,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind42_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind42_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind42,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind42_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind42_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind42,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind43 = {
    DataObjectModelType,
    "Ind43",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind44,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind43_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind43_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind43,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind43_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind43_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind43,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind43_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind43_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind43,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind43_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind43_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind43,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind44 = {
    DataObjectModelType,
    "Ind44",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind45,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind44_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind44_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind44,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind44_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind44_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind44,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind44_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind44_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind44,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind44_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind44_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind44,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind45 = {
    DataObjectModelType,
    "Ind45",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind46,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind45_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind45_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind45,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind45_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind45_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind45,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind45_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind45_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind45,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind45_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind45_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind45,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind46 = {
    DataObjectModelType,
    "Ind46",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind47,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind46_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind46_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind46,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind46_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind46_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind46,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind46_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind46_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind46,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind46_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind46_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind46,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind47 = {
    DataObjectModelType,
    "Ind47",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind48,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind47_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind47_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind47,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind47_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind47_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind47,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind47_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind47_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind47,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind47_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind47_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind47,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind48 = {
    DataObjectModelType,
    "Ind48",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind49,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind48_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind48_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind48,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind48_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind48_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind48,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind48_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind48_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind48,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind48_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind48_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind48,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind49 = {
    DataObjectModelType,
    "Ind49",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind50,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind49_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind49_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind49,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind49_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind49_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind49,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind49_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind49_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind49,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind49_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind49_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind49,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_PROTGGIO1_Ind50 = {
    DataObjectModelType,
    "Ind50",
    (ModelNode*) &iedModel_SYS_PROTGGIO1,
    NULL,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind50_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_PROTGGIO1_Ind50_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind50,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind50_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind50_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind50,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind50_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind50_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind50,
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind50_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_PROTGGIO1_Ind50_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_PROTGGIO1_Ind50,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_SYS_R550GGIO1 = {
    LogicalNodeModelType,
    "R550GGIO1",
    (ModelNode*) &iedModel_SYS,
    (ModelNode*) &iedModel_SYS_LPHD1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Beh,
};

DataObject iedModel_SYS_R550GGIO1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Beh,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Beh,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Alm1 = {
    DataObjectModelType,
    "Alm1",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm2,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm1_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Alm1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm1_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Alm1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm1_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Alm1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Alm1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Alm2 = {
    DataObjectModelType,
    "Alm2",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm3,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm2_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Alm2_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm2,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm2_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Alm2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm2,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm2_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Alm2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm2,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Alm2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Alm3 = {
    DataObjectModelType,
    "Alm3",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm4,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm3_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Alm3_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm3,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm3_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Alm3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm3,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm3_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Alm3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm3,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm3_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Alm3_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm3,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Alm4 = {
    DataObjectModelType,
    "Alm4",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm5,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm4_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Alm4_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm4,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm4_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Alm4_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm4,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm4_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Alm4_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm4,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm4_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Alm4_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm4,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Alm5 = {
    DataObjectModelType,
    "Alm5",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm5_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Alm5_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm5,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm5_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Alm5_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm5,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm5_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Alm5_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm5,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm5_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Alm5_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Alm5,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Wrn1 = {
    DataObjectModelType,
    "Wrn1",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn2,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn1_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Wrn1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn1_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Wrn1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn1_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Wrn1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Wrn1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Wrn2 = {
    DataObjectModelType,
    "Wrn2",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn3,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn2_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Wrn2_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn2,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn2_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Wrn2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn2,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn2_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Wrn2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn2,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Wrn2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Wrn3 = {
    DataObjectModelType,
    "Wrn3",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn4,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn3_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Wrn3_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn3,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn3_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Wrn3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn3,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn3_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Wrn3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn3,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn3_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Wrn3_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn3,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Wrn4 = {
    DataObjectModelType,
    "Wrn4",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn5,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn4_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Wrn4_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn4,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn4_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Wrn4_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn4,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn4_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Wrn4_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn4,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn4_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Wrn4_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn4,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Wrn5 = {
    DataObjectModelType,
    "Wrn5",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn5_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Wrn5_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn5,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn5_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Wrn5_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn5,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn5_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Wrn5_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn5,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn5_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Wrn5_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Wrn5,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Ind1 = {
    DataObjectModelType,
    "Ind1",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind2,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind1_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Ind1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind1_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind1_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Ind2 = {
    DataObjectModelType,
    "Ind2",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind3,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind2_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Ind2_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind2,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind2_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind2,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind2_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind2,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Ind3 = {
    DataObjectModelType,
    "Ind3",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind4,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind3_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Ind3_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind3,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind3_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind3,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind3_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind3,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind3_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind3_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind3,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Ind4 = {
    DataObjectModelType,
    "Ind4",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind5,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind4_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Ind4_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind4,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind4_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind4_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind4,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind4_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind4_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind4,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind4_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind4_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind4,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Ind5 = {
    DataObjectModelType,
    "Ind5",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind6,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind5_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Ind5_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind5,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind5_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind5_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind5,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind5_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind5_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind5,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind5_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind5_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind5,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Ind6 = {
    DataObjectModelType,
    "Ind6",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind7,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind6_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Ind6_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind6,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind6_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind6_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind6,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind6_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind6_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind6,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind6_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind6_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind6,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Ind7 = {
    DataObjectModelType,
    "Ind7",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind8,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind7_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Ind7_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind7,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind7_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind7_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind7,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind7_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind7_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind7,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind7_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind7_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind7,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Ind8 = {
    DataObjectModelType,
    "Ind8",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind9,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind8_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Ind8_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind8,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind8_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind8_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind8,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind8_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind8_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind8,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind8_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind8_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind8,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Ind9 = {
    DataObjectModelType,
    "Ind9",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind10,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind9_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Ind9_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind9,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind9_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind9_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind9,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind9_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind9_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind9,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind9_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind9_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind9,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Ind10 = {
    DataObjectModelType,
    "Ind10",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind11,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind10_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Ind10_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind10,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind10_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind10_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind10,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind10_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind10_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind10,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind10_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind10_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind10,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Ind11 = {
    DataObjectModelType,
    "Ind11",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind12,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind11_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Ind11_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind11,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind11_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind11_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind11,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind11_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind11_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind11,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind11_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind11_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind11,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Ind12 = {
    DataObjectModelType,
    "Ind12",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind13,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind12_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Ind12_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind12,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind12_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind12_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind12,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind12_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind12_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind12,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind12_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind12_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind12,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Ind13 = {
    DataObjectModelType,
    "Ind13",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind14,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind13_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Ind13_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind13,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind13_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind13_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind13,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind13_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind13_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind13,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind13_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind13_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind13,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Ind14 = {
    DataObjectModelType,
    "Ind14",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind15,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind14_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Ind14_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind14,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind14_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind14_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind14,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind14_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind14_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind14,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind14_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind14_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind14,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Ind15 = {
    DataObjectModelType,
    "Ind15",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind16,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind15_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Ind15_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind15,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind15_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind15_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind15,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind15_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind15_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind15,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind15_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind15_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind15,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Ind16 = {
    DataObjectModelType,
    "Ind16",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind17,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind16_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Ind16_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind16,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind16_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind16_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind16,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind16_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind16_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind16,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind16_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind16_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind16,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Ind17 = {
    DataObjectModelType,
    "Ind17",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind18,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind17_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Ind17_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind17,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind17_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind17_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind17,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind17_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind17_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind17,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind17_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind17_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind17,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Ind18 = {
    DataObjectModelType,
    "Ind18",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind19,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind18_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Ind18_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind18,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind18_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind18_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind18,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind18_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind18_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind18,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind18_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind18_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind18,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_R550GGIO1_Ind19 = {
    DataObjectModelType,
    "Ind19",
    (ModelNode*) &iedModel_SYS_R550GGIO1,
    NULL,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind19_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_R550GGIO1_Ind19_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind19,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind19_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind19_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind19,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind19_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind19_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind19,
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind19_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_R550GGIO1_Ind19_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_R550GGIO1_Ind19,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_SYS_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    (ModelNode*) &iedModel_SYS,
    (ModelNode*) &iedModel_SYS_LOADMMXU1,
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

LogicalNode iedModel_SYS_LOADMMXU1 = {
    LogicalNodeModelType,
    "LOADMMXU1",
    (ModelNode*) &iedModel_SYS,
    (ModelNode*) &iedModel_SYS_SRCMMXU1,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_Beh,
};

DataObject iedModel_SYS_LOADMMXU1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_SYS_LOADMMXU1,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_ClcExp,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_LOADMMXU1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_Beh,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_Beh,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_LOADMMXU1_ClcExp = {
    DataObjectModelType,
    "ClcExp",
    (ModelNode*) &iedModel_SYS_LOADMMXU1,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_ClcMth,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_ClcExp_stVal,
    0,
    -1
};

DataAttribute iedModel_SYS_LOADMMXU1_ClcExp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_ClcExp,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_ClcExp_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_ClcExp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_ClcExp,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_ClcExp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_ClcExp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_ClcExp,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_ClcExp_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_ClcExp_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_ClcExp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_SYS_LOADMMXU1_ClcMth = {
    DataObjectModelType,
    "ClcMth",
    (ModelNode*) &iedModel_SYS_LOADMMXU1,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_ClcMth_setVal,
    0,
    -1
};

DataAttribute iedModel_SYS_LOADMMXU1_ClcMth_setVal = {
    DataAttributeModelType,
    "setVal",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_ClcMth,
    (ModelNode*) &iedModel_SE_SYS_LOADMMXU1_ClcMth_setVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SG,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_SE_SYS_LOADMMXU1_ClcMth_setVal = {
    DataAttributeModelType,
    "setVal",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_ClcMth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SE,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_SYS_LOADMMXU1_PPV = {
    DataObjectModelType,
    "PPV",
    (ModelNode*) &iedModel_SYS_LOADMMXU1,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsAB,
    0,
    -1
};

DataObject iedModel_SYS_LOADMMXU1_PPV_phsAB = {
    DataObjectModelType,
    "phsAB",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsBC,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsAB_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_LOADMMXU1_PPV_phsAB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsAB,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsAB_q,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsAB_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PPV_phsAB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsAB_cVal,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsAB_cVal_ang,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsAB_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PPV_phsAB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsAB_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PPV_phsAB_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsAB_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsAB_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PPV_phsAB_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsAB_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PPV_phsAB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsAB,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsAB_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PPV_phsAB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsAB,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_LOADMMXU1_PPV_phsBC = {
    DataObjectModelType,
    "phsBC",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsCA,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsBC_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_LOADMMXU1_PPV_phsBC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsBC,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsBC_q,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsBC_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PPV_phsBC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsBC_cVal,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsBC_cVal_ang,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsBC_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PPV_phsBC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsBC_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PPV_phsBC_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsBC_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsBC_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PPV_phsBC_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsBC_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PPV_phsBC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsBC,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsBC_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PPV_phsBC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsBC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_LOADMMXU1_PPV_phsCA = {
    DataObjectModelType,
    "phsCA",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV,
    NULL,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsCA_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_LOADMMXU1_PPV_phsCA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsCA,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsCA_q,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsCA_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PPV_phsCA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsCA_cVal,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsCA_cVal_ang,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsCA_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PPV_phsCA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsCA_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PPV_phsCA_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsCA_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsCA_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PPV_phsCA_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsCA_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PPV_phsCA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsCA,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsCA_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PPV_phsCA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PPV_phsCA,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_LOADMMXU1_PNV = {
    DataObjectModelType,
    "PNV",
    (ModelNode*) &iedModel_SYS_LOADMMXU1,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_Hz,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsA,
    0,
    -1
};

DataObject iedModel_SYS_LOADMMXU1_PNV_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsB,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsA_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsA,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsA_q,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsA_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsA_cVal,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsA_cVal_ang,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsA_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_phsA_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsA_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_phsA_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsA_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsA,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsA_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsA,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_LOADMMXU1_PNV_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsC,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsB_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsB,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsB_q,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsB_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsB_cVal,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsB_cVal_ang,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsB_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_phsB_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsB_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_phsB_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsB_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsB,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsB_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsB,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_LOADMMXU1_PNV_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_neut,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsC_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsC,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsC_q,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsC_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsC_cVal,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsC_cVal_ang,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsC_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_phsC_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsC_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_phsC_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsC_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsC,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsC_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_phsC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_LOADMMXU1_PNV_neut = {
    DataObjectModelType,
    "neut",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_net,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_neut_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_neut_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_neut,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_neut_q,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_neut_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_neut_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_neut_cVal,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_neut_cVal_ang,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_neut_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_neut_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_neut_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_neut_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_neut_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_neut_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_neut_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_neut_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_neut_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_neut,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_neut_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_neut_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_neut,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_LOADMMXU1_PNV_net = {
    DataObjectModelType,
    "net",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_res,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_net_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_net_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_net,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_net_q,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_net_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_net_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_net_cVal,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_net_cVal_ang,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_net_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_net_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_net_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_net_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_net_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_net_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_net_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_net_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_net_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_net,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_net_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_net_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_net,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_LOADMMXU1_PNV_res = {
    DataObjectModelType,
    "res",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV,
    NULL,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_res_cVal,
    0,
    -1
};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_res_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_res,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_res_q,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_res_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_res_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_res_cVal,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_res_cVal_ang,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_res_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_res_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_res_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_res_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_res_cVal,
    NULL,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_res_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_res_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_res_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_res_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_res,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_res_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_PNV_res_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_PNV_res,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_SYS_LOADMMXU1_Hz = {
    DataObjectModelType,
    "Hz",
    (ModelNode*) &iedModel_SYS_LOADMMXU1,
    NULL,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_Hz_mag,
    0,
    -1
};

DataAttribute iedModel_SYS_LOADMMXU1_Hz_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_Hz,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_Hz_q,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_Hz_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_Hz_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_Hz_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_Hz_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_Hz,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_Hz_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_Hz_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_Hz,
    (ModelNode*) &iedModel_SYS_LOADMMXU1_Hz_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_SYS_LOADMMXU1_Hz_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_SYS_LOADMMXU1_Hz,
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

extern ReportControlBlock iedModel_PSPLY_LLN0_report0;
extern ReportControlBlock iedModel_PSPLY_LLN0_report1;
extern ReportControlBlock iedModel_PSPLY_LLN0_report2;
extern ReportControlBlock iedModel_SYS_LLN0_report0;
extern ReportControlBlock iedModel_SYS_LLN0_report1;
extern ReportControlBlock iedModel_SYS_LLN0_report2;
extern ReportControlBlock iedModel_SYS_LLN0_report3;
extern ReportControlBlock iedModel_SYS_LLN0_report4;
extern ReportControlBlock iedModel_SYS_LLN0_report5;

ReportControlBlock iedModel_PSPLY_LLN0_report0 = {&iedModel_PSPLY_LLN0, "brcbPsplyMeasScada01", "PsplyMeasScada", true, "DS_PSPLY_MEAS_SCADA", 1, 24, 255, 0, 100, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PSPLY_LLN0_report1};
ReportControlBlock iedModel_PSPLY_LLN0_report1 = {&iedModel_PSPLY_LLN0, "brcbPsplyMeasScada02", "PsplyMeasScada", true, "DS_PSPLY_MEAS_SCADA", 1, 24, 255, 0, 100, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PSPLY_LLN0_report2};
ReportControlBlock iedModel_PSPLY_LLN0_report2 = {&iedModel_PSPLY_LLN0, "brcbPsplyMeasScada03", "PsplyMeasScada", true, "DS_PSPLY_MEAS_SCADA", 1, 24, 255, 0, 100, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_SYS_LLN0_report0};
ReportControlBlock iedModel_SYS_LLN0_report0 = {&iedModel_SYS_LLN0, "brcbMeasScada01", "MeasScada", true, "DS_MEAS_SCADA", 1, 24, 255, 50, 100, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_SYS_LLN0_report1};
ReportControlBlock iedModel_SYS_LLN0_report1 = {&iedModel_SYS_LLN0, "brcbMeasScada02", "MeasScada", true, "DS_MEAS_SCADA", 1, 24, 255, 50, 100, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_SYS_LLN0_report2};
ReportControlBlock iedModel_SYS_LLN0_report2 = {&iedModel_SYS_LLN0, "brcbMeasScada03", "MeasScada", true, "DS_MEAS_SCADA", 1, 24, 255, 50, 100, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_SYS_LLN0_report3};
ReportControlBlock iedModel_SYS_LLN0_report3 = {&iedModel_SYS_LLN0, "brcbSwitchOper01", "SwitchOper", true, "DS_SWITCH_OPER", 1, 25, 255, 50, 500, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_SYS_LLN0_report4};
ReportControlBlock iedModel_SYS_LLN0_report4 = {&iedModel_SYS_LLN0, "brcbSwitchOper02", "SwitchOper", true, "DS_SWITCH_OPER", 1, 25, 255, 50, 500, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_SYS_LLN0_report5};
ReportControlBlock iedModel_SYS_LLN0_report5 = {&iedModel_SYS_LLN0, "brcbSwitchOper03", "SwitchOper", true, "DS_SWITCH_OPER", 1, 25, 255, 50, 500, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, NULL};


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
    "IEDR550",
    &iedModel_PSPLY,
    &iedModelds_PSPLY_LLN0_DS_PSPLY_MEAS_SCADA,
    &iedModel_PSPLY_LLN0_report0,
    &iedModel_SYS_LLN0_gse0,
    NULL,
    &iedModel_SYS_LLN0_sgcb,
    NULL,
    NULL,
    initializeValues
};

static void
initializeValues()
{

iedModel_PSPLY_LLN0_NamPlt_ldNs.mmsValue = MmsValue_newVisibleString("IEC 61850-7-4:2007");

iedModel_PSPLY_LLN0_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_PSPLY_LLN0_Health_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_PSPLY_LLN0_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_PSPLY_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_PSPLY_PSPLYGGIO1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_PSPLY_LPHD1_PhyNam_vendor.mmsValue = MmsValue_newVisibleString("Ampera");

iedModel_PSPLY_LPHD1_PhyHealth_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_PSPLY_LPHD1_Proxy_stVal.mmsValue = MmsValue_newBoolean(true);

iedModel_SYS_LLN0_NamPlt_ldNs.mmsValue = MmsValue_newVisibleString("IEC 61850-7-4:2007");

iedModel_SYS_LLN0_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_LLN0_Health_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_LLN0_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_CILO1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_CSWI1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_CSWI1_Pos_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_PROTGGIO1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_R550GGIO1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_LPHD1_PhyNam_vendor.mmsValue = MmsValue_newVisibleString("Pextron");

iedModel_SYS_LPHD1_PhyHealth_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_LPHD1_Proxy_stVal.mmsValue = MmsValue_newBoolean(false);

iedModel_SYS_LOADMMXU1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_LOADMMXU1_ClcMth_setVal.mmsValue = MmsValue_newIntegerFromInt32(4);

iedModel_SYS_SRCMMXU1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_SRCMMXU1_ClcMth_setVal.mmsValue = MmsValue_newIntegerFromInt32(4);

iedModel_SYS_XCBR1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_SYS_XCBR1_Pos_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_SYS_XCBR1_BlkOpn_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_SYS_XCBR1_BlkCls_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);
}
