Creating summary for Siul2_Port_Ip_PinInit.part.0/24:
  Descriptor for parameter 0 configD.6559
    not a candidate
----------------------------------------
  Descriptor for parameter 0 configD.6559
    not a candidate for splitting


Creating summary for Siul2_Port_Ip_GetPinConfiguration/13:
  Descriptor for parameter 0 baseD.6470
    not a candidate for splitting
  Descriptor for parameter 1 configD.6471
    not a candidate for splitting
  Descriptor for parameter 2 pinD.6472
    not a candidate for splitting


Creating summary for Siul2_Port_Ip_RevertPinConfiguration/12:
  Descriptor for parameter 0 baseD.6457
    not a candidate for splitting
  Descriptor for parameter 1 pinD.6458
    not a candidate for splitting


Creating summary for Siul2_Port_Ip_SetPinDirection/11:
  Descriptor for parameter 0 baseD.6446
    not a candidate for splitting
  Descriptor for parameter 1 pinD.6447
    not a candidate for splitting
  Descriptor for parameter 2 directionD.6448
    not a candidate for splitting


Creating summary for Siul2_Port_Ip_SetInputBuffer/10:
  Descriptor for parameter 0 baseD.6436
    not a candidate for splitting
  Descriptor for parameter 1 pinD.6437
    not a candidate for splitting
  Descriptor for parameter 2 enableD.6438
    not a candidate for splitting
  Descriptor for parameter 3 inputMuxRegD.6439
    not a candidate for splitting
  Descriptor for parameter 4 inputMuxD.6440
    not a candidate for splitting


Creating summary for Siul2_Port_Ip_SetOutputBuffer/9:
  Descriptor for parameter 0 baseD.6430
    not a candidate for splitting
  Descriptor for parameter 1 pinD.6431
    not a candidate for splitting
  Descriptor for parameter 2 enableD.6432
    not a candidate for splitting
  Descriptor for parameter 3 muxD.6433
    not a candidate for splitting


Creating summary for Siul2_Port_Ip_SetPullSel/8:
  Descriptor for parameter 0 baseD.6417
    not a candidate for splitting
  Descriptor for parameter 1 pinD.6418
    not a candidate for splitting
  Descriptor for parameter 2 pullConfigD.6419
    not a candidate for splitting


Creating summary for Siul2_Port_Ip_Init/7:
  Descriptor for parameter 0 pinCountD.6409
    not a candidate for splitting
  Descriptor for parameter 1 configD.6410
    not a candidate for splitting


Creating summary for Siul2_Port_Ip_GetMSCRConfiguration/6:
  Descriptor for parameter 0 configD.6401
    not a candidate for splitting
  Descriptor for parameter 1 baseD.6402
    not a candidate for splitting
  Descriptor for parameter 2 pinD.6403
    not a candidate for splitting


Creating summary for Siul2_Port_Ip_WriteIMCRConfiguration/5:
  Descriptor for parameter 0 configD.6392
    not a candidate
----------------------------------------
  Descriptor for parameter 0 configD.6392
    not a candidate for splitting


Creating summary for Siul2_Port_Ip_PinInit/4:
  Descriptor for parameter 0 configD.6387
    not a candidate for splitting



========== IPA-SRA IPA stage ==========

Summary for node Siul2_Port_Ip_PinInit.part.0/24:
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge Siul2_Port_Ip_PinInit.part.0/24->Siul2_Port_Ip_WriteIMCRConfiguration/5:
    return value ignored
    Parameter 0:
      Scalar param sources: 0
      Pointer pass through from the param given above, safe_to_import_accesses: 0

Summary for node Siul2_Port_Ip_GetPinConfiguration/13:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting

  Summary for edge Siul2_Port_Ip_GetPinConfiguration/13->Siul2_Port_Ip_GetMSCRConfiguration/6:
    return value ignored
    Parameter 0:
    Parameter 1:
      Scalar param sources: 0
      Pointer pass through from the param given above, safe_to_import_accesses: 0
    Parameter 2:
      Scalar param sources: 2

Summary for node Siul2_Port_Ip_RevertPinConfiguration/12:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting

  Summary for edge Siul2_Port_Ip_RevertPinConfiguration/12->Siul2_Port_Ip_PinInit/4:
    return value ignored

Summary for node Siul2_Port_Ip_SetPinDirection/11:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting

  Summary for edge Siul2_Port_Ip_SetPinDirection/11->SchM_Exit_Port_PORT_EXCLUSIVE_AREA_04/21:
    return value ignored
  Summary for edge Siul2_Port_Ip_SetPinDirection/11->SchM_Enter_Port_PORT_EXCLUSIVE_AREA_04/20:
    return value ignored

Summary for node Siul2_Port_Ip_SetInputBuffer/10:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting
  Descriptor for parameter 3:
    not a candidate for splitting
  Descriptor for parameter 4:
    not a candidate for splitting

  Summary for edge Siul2_Port_Ip_SetInputBuffer/10->SchM_Exit_Port_PORT_EXCLUSIVE_AREA_03/19:
    return value ignored
  Summary for edge Siul2_Port_Ip_SetInputBuffer/10->SchM_Enter_Port_PORT_EXCLUSIVE_AREA_03/18:
    return value ignored

Summary for node Siul2_Port_Ip_SetOutputBuffer/9:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting
  Descriptor for parameter 3:
    not a candidate for splitting

  Summary for edge Siul2_Port_Ip_SetOutputBuffer/9->SchM_Exit_Port_PORT_EXCLUSIVE_AREA_02/17:
    return value ignored
  Summary for edge Siul2_Port_Ip_SetOutputBuffer/9->SchM_Enter_Port_PORT_EXCLUSIVE_AREA_02/16:
    return value ignored

Summary for node Siul2_Port_Ip_SetPullSel/8:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting

  Summary for edge Siul2_Port_Ip_SetPullSel/8->SchM_Exit_Port_PORT_EXCLUSIVE_AREA_01/15:
    return value ignored
  Summary for edge Siul2_Port_Ip_SetPullSel/8->SchM_Enter_Port_PORT_EXCLUSIVE_AREA_01/14:
    return value ignored

Summary for node Siul2_Port_Ip_Init/7:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting

  Summary for edge Siul2_Port_Ip_Init/7->Siul2_Port_Ip_PinInit/4:
    return value ignored
    Parameter 0:
      Scalar param sources: 1

Summary for node Siul2_Port_Ip_GetMSCRConfiguration/6:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting


Summary for node Siul2_Port_Ip_WriteIMCRConfiguration/5:
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node Siul2_Port_Ip_PinInit/4:
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge Siul2_Port_Ip_PinInit/4->Siul2_Port_Ip_PinInit.part.0/24:
    return value ignored
    Parameter 0:
      Scalar param sources: 0
      Pointer pass through from the param given above, safe_to_import_accesses: 0


Function Siul2_Port_Ip_Init/7 disqualified because it cannot be made local.
Function Siul2_Port_Ip_SetPullSel/8 disqualified because it cannot be made local.
Function Siul2_Port_Ip_SetOutputBuffer/9 disqualified because it cannot be made local.
Function Siul2_Port_Ip_SetInputBuffer/10 disqualified because it cannot be made local.
Function Siul2_Port_Ip_SetPinDirection/11 disqualified because it cannot be made local.
Function Siul2_Port_Ip_RevertPinConfiguration/12 disqualified because it cannot be made local.
Function Siul2_Port_Ip_GetPinConfiguration/13 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Siul2_Port_Ip_PinInit.part.0/24 (Siul2_Port_Ip_PinInit.part.0) @062f48c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:21262216 (estimated locally) body local split_part optimize_size
  Called by: Siul2_Port_Ip_PinInit/4 (10631108 (estimated locally),0.50 per call) 
  Calls: Siul2_Port_Ip_WriteIMCRConfiguration/5 (10631108 (estimated locally),0.50 per call) 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_04/21 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_04) @062e3000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Siul2_Port_Ip_SetPinDirection/11 (5315554 (estimated locally),0.25 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_04/20 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_04) @06273ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Siul2_Port_Ip_SetPinDirection/11 (5315554 (estimated locally),0.25 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_03/19 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_03) @06273d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Siul2_Port_Ip_SetInputBuffer/10 (10631108 (estimated locally),0.50 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_03/18 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_03) @06273c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Siul2_Port_Ip_SetInputBuffer/10 (10631108 (estimated locally),0.50 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_02/17 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_02) @06273a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Siul2_Port_Ip_SetOutputBuffer/9 (5315554 (estimated locally),0.25 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_02/16 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_02) @062739a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Siul2_Port_Ip_SetOutputBuffer/9 (5315554 (estimated locally),0.25 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_01/15 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_01) @062737e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Siul2_Port_Ip_SetPullSel/8 (4651110 (estimated locally),0.22 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_01/14 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_01) @06273700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Siul2_Port_Ip_SetPullSel/8 (5315554 (estimated locally),0.25 per call) 
  Calls: 
Siul2_Port_Ip_GetPinConfiguration/13 (Siul2_Port_Ip_GetPinConfiguration) @06267b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pPort_Setting/2 (read) u32MaxPinConfigured/3 (read) 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: Siul2_Port_Ip_GetMSCRConfiguration/6 (2582621 (estimated locally),0.12 per call) 
Siul2_Port_Ip_RevertPinConfiguration/12 (Siul2_Port_Ip_RevertPinConfiguration) @06267e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pPort_Setting/2 (read) u32MaxPinConfigured/3 (read) 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: Siul2_Port_Ip_PinInit/4 (2582621 (estimated locally),0.12 per call) 
Siul2_Port_Ip_SetPinDirection/11 (Siul2_Port_Ip_SetPinDirection) @06267a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_04/21 (5315554 (estimated locally),0.25 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_04/20 (5315554 (estimated locally),0.25 per call) 
Siul2_Port_Ip_SetInputBuffer/10 (Siul2_Port_Ip_SetInputBuffer) @06267540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_03/19 (10631108 (estimated locally),0.50 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_03/18 (10631108 (estimated locally),0.50 per call) 
Siul2_Port_Ip_SetOutputBuffer/9 (Siul2_Port_Ip_SetOutputBuffer) @062670e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_02/17 (5315554 (estimated locally),0.25 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_02/16 (5315554 (estimated locally),0.25 per call) 
Siul2_Port_Ip_SetPullSel/8 (Siul2_Port_Ip_SetPullSel) @062b6460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_01/15 (4651110 (estimated locally),0.22 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_01/14 (5315554 (estimated locally),0.25 per call) 
Siul2_Port_Ip_Init/7 (Siul2_Port_Ip_Init) @062b6c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pPort_Setting/2 (write) u32MaxPinConfigured/3 (write) 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: Siul2_Port_Ip_PinInit/4 (955630225 (estimated locally),8.09 per call) 
Siul2_Port_Ip_GetMSCRConfiguration/6 (Siul2_Port_Ip_GetMSCRConfiguration) @062b69a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Siul2_Port_Ip_GetPinConfiguration/13 (2582621 (estimated locally),0.12 per call) 
  Calls: 
Siul2_Port_Ip_WriteIMCRConfiguration/5 (Siul2_Port_Ip_WriteIMCRConfiguration) @062b6700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:350860932 (estimated locally) body local optimize_size
  Called by: Siul2_Port_Ip_PinInit.part.0/24 (10631108 (estimated locally),0.50 per call) 
  Calls: 
Siul2_Port_Ip_PinInit/4 (Siul2_Port_Ip_PinInit) @062b6380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:21262216 (estimated locally) body local optimize_size
  Called by: Siul2_Port_Ip_RevertPinConfiguration/12 (2582621 (estimated locally),0.12 per call) Siul2_Port_Ip_Init/7 (955630225 (estimated locally),8.09 per call) 
  Calls: Siul2_Port_Ip_PinInit.part.0/24 (10631108 (estimated locally),0.50 per call) 
u32MaxPinConfigured/3 (u32MaxPinConfigured) @05fd25e8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Siul2_Port_Ip_Init/7 (write) Siul2_Port_Ip_RevertPinConfiguration/12 (read) Siul2_Port_Ip_GetPinConfiguration/13 (read) 
  Availability: available
  Varpool flags:
pPort_Setting/2 (pPort_Setting) @05fd2558
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Siul2_Port_Ip_Init/7 (write) Siul2_Port_Ip_RevertPinConfiguration/12 (read) Siul2_Port_Ip_GetPinConfiguration/13 (read) 
  Availability: available
  Varpool flags:
Port_au32Siul2BaseAddr/1 (Port_au32Siul2BaseAddr) @05fd24c8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Siul2_Port_Ip_PinInit.part.0 (const struct Siul2_Port_Ip_PinSettingsConfig * config)
{
  uint32 pinsValues;
  uint8 siulInstance;
  volatile boolean x;
  volatile boolean x;
  long unsigned int _2;
  _Bool _3;
  _Bool x.0_4;
  <unnamed type> _5;
  long unsigned int _6;
  long unsigned int _7;
  <unnamed type> _9;
  long unsigned int _10;
  long unsigned int _11;
  <unnamed type> _14;
  long unsigned int _15;
  long unsigned int _16;
  <unnamed type> _18;
  long unsigned int _19;
  long unsigned int _20;
  <unnamed type> _22;
  long unsigned int _23;
  long unsigned int _24;
  <unnamed type> _26;
  long unsigned int _27;
  long unsigned int _28;
  <unnamed type> _30;
  long unsigned int _31;
  long unsigned int _32;
  <unnamed type> _34;
  long unsigned int _35;
  long unsigned int _36;
  <unnamed type> _38;
  long unsigned int _39;
  long unsigned int _40;
  <unnamed type> _42;
  long unsigned int _43;
  unsigned char _45;
  short unsigned int _46;
  short unsigned int _47;
  long unsigned int _48;
  long unsigned int _49;
  volatile uint8 * _50;
  struct SIUL2_Type * _51;
  long unsigned int _52;

  <bb 13> [local count: 21262216]:

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = config_1(D)->pinPortIdx;
  _3 = _2 <= 219;
  x ={v} _3;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_4 ={v} x;
  if (x.0_4 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 10631108]:

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 6> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  # DEBUG siulInstance => 0
  # DEBUG BEGIN_STMT
  _5 = config_1(D)->pullConfig;
  if (_5 != 2)
    goto <bb 7>; [66.00%]
  else
    goto <bb 8>; [34.00%]

  <bb 7> [local count: 7016531]:
  # DEBUG BEGIN_STMT
  # DEBUG pinsValues => 8192
  # DEBUG BEGIN_STMT
  _6 = _5 << 11;
  _7 = _6 & 2048;
  pinsValues_8 = _7 | 8192;
  # DEBUG pinsValues => pinsValues_8

  <bb 8> [local count: 10631108]:
  # pinsValues_12 = PHI <0(6), pinsValues_8(7)>
  # DEBUG pinsValues => pinsValues_12
  # DEBUG BEGIN_STMT
  _9 = config_1(D)->outputBuffer;
  _10 = _9 << 21;
  _11 = _10 & 2097152;
  pinsValues_13 = _11 | pinsValues_12;
  # DEBUG pinsValues => pinsValues_13
  # DEBUG BEGIN_STMT
  _14 = config_1(D)->invert;
  _15 = _14 << 17;
  _16 = _15 & 131072;
  pinsValues_17 = pinsValues_13 | _16;
  # DEBUG pinsValues => pinsValues_17
  # DEBUG BEGIN_STMT
  _18 = config_1(D)->pullKeep;
  _19 = _18 << 16;
  _20 = _19 & 65536;
  pinsValues_21 = pinsValues_17 | _20;
  # DEBUG pinsValues => pinsValues_21
  # DEBUG BEGIN_STMT
  _22 = config_1(D)->driveStrength;
  _23 = _22 << 8;
  _24 = _23 & 256;
  pinsValues_25 = pinsValues_21 | _24;
  # DEBUG pinsValues => pinsValues_25
  # DEBUG BEGIN_STMT
  _26 = config_1(D)->inputFilter;
  _27 = _26 << 6;
  _28 = _27 & 64;
  pinsValues_29 = pinsValues_25 | _28;
  # DEBUG pinsValues => pinsValues_29
  # DEBUG BEGIN_STMT
  _30 = config_1(D)->inputBuffer;
  _31 = _30 << 19;
  _32 = _31 & 524288;
  pinsValues_33 = pinsValues_29 | _32;
  # DEBUG pinsValues => pinsValues_33
  # DEBUG BEGIN_STMT
  _34 = config_1(D)->slewRateCtrlSel;
  _35 = _34 << 14;
  _36 = _35 & 16384;
  pinsValues_37 = pinsValues_33 | _36;
  # DEBUG pinsValues => pinsValues_37
  # DEBUG BEGIN_STMT
  _38 = config_1(D)->safeMode;
  _39 = _38 << 5;
  _40 = _39 & 32;
  pinsValues_41 = pinsValues_37 | _40;
  # DEBUG pinsValues => pinsValues_41
  # DEBUG BEGIN_STMT
  _42 = config_1(D)->mux;
  _43 = _42 & 7;
  pinsValues_44 = pinsValues_41 | _43;
  # DEBUG pinsValues => pinsValues_44
  # DEBUG BEGIN_STMT
  if (_42 == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 9> [local count: 5315554]:
  if (_9 == 1)
    goto <bb 10>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 10> [local count: 1807288]:
  # DEBUG BEGIN_STMT
  _45 = config_1(D)->initValue;
  if (_45 != 2)
    goto <bb 11>; [66.00%]
  else
    goto <bb 12>; [34.00%]

  <bb 11> [local count: 1192810]:
  # DEBUG BEGIN_STMT
  _46 = (short unsigned int) _2;
  _47 = _46 ^ 3;
  _48 = (long unsigned int) _47;
  _49 = _48 + 1076433664;
  _50 = (volatile uint8 *) _49;
  *_50 ={v} _45;

  <bb 12> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  _51 = config_1(D)->base;
  _52 = config_1(D)->pinPortIdx;
  _51->MSCR[_52] ={v} pinsValues_44;
  # DEBUG BEGIN_STMT
  Siul2_Port_Ip_WriteIMCRConfiguration (config_1(D));
  return;

}


Siul2_Port_Ip_GetPinConfiguration (const struct Siul2_Port_Ip_PortType * const base, struct Siul2_Port_Ip_PinSettingsConfig * config, uint16 pin)
{
  volatile boolean x;
  volatile boolean x;
  uint8 inputMuxIterator;
  uint16 u16PinIdx;
  uint32 u32MscrId;
  uint32 portNumber;
  uint32 MaxPinConfigured;
  const struct Siul2_Port_Ip_PinSettingsConfig * ConfigPtr;
  _Bool _1;
  _Bool _2;
  long unsigned int base.6_3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  const struct Siul2_Port_Ip_PinSettingsConfig * _7;
  unsigned int _8;
  const struct Siul2_Port_Ip_PinSettingsConfig * _9;
  long unsigned int _10;
  long unsigned int _11;
  struct SIUL2_Type * _12;
  unsigned char _13;
  int _14;
  long unsigned int _15;
  <unnamed type> _16;
  long unsigned int _17;
  _Bool x.0_38;
  _Bool x.0_39;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  ConfigPtr_23 = pPort_Setting;
  # DEBUG ConfigPtr => ConfigPtr_23
  # DEBUG BEGIN_STMT
  MaxPinConfigured_24 = u32MaxPinConfigured;
  # DEBUG MaxPinConfigured => MaxPinConfigured_24
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = base_25(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_39 ={v} x;
  if (x.0_39 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 16> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 18> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = pin_26(D) <= 15;
  x ={v} _2;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_38 ={v} x;
  if (x.0_38 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 15> [local count: 5315554]:

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 17> [local count: 536870913]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 5315554]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  # DEBUG u32MscrBase => 1076429376
  # DEBUG BEGIN_STMT
  base.6_3 = (long unsigned int) base_25(D);
  _4 = base.6_3 + 3218537920;
  portNumber_27 = _4 >> 6;
  # DEBUG portNumber => portNumber_27
  # DEBUG BEGIN_STMT
  _5 = portNumber_27 << 4;
  _6 = (long unsigned int) pin_26(D);
  u32MscrId_28 = _5 + _6;
  # DEBUG u32MscrId => u32MscrId_28
  # DEBUG BEGIN_STMT
  # DEBUG u16PinIdx => 0
  goto <bb 13>; [100.00%]

  <bb 7> [local count: 46956753]:
  # DEBUG BEGIN_STMT
  _8 = _17 * 116;
  _9 = ConfigPtr_23 + _8;
  _10 = _9->pinPortIdx;
  if (_10 == u32MscrId_28)
    goto <bb 8>; [5.50%]
  else
    goto <bb 12>; [94.50%]

  <bb 8> [local count: 2582621]:
  # _7 = PHI <_9(7)>
  # _11 = PHI <_10(7)>
  # DEBUG BEGIN_STMT
  _12 = _7->base;
  config_30(D)->base = _12;
  # DEBUG BEGIN_STMT
  config_30(D)->pinPortIdx = _11;
  # DEBUG BEGIN_STMT
  _13 = _7->initValue;
  config_30(D)->initValue = _13;
  # DEBUG BEGIN_STMT
  # DEBUG inputMuxIterator => 0
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 20663295]:
  # DEBUG BEGIN_STMT
  _14 = (int) inputMuxIterator_19;
  _15 = _7->inputMuxReg[_14];
  config_30(D)->inputMuxReg[_14] = _15;
  # DEBUG BEGIN_STMT
  _16 = _7->inputMux[_14];
  config_30(D)->inputMux[_14] = _16;
  # DEBUG BEGIN_STMT
  inputMuxIterator_37 = inputMuxIterator_19 + 1;
  # DEBUG inputMuxIterator => inputMuxIterator_37

  <bb 10> [local count: 23245916]:
  # inputMuxIterator_19 = PHI <0(8), inputMuxIterator_37(9)>
  # DEBUG inputMuxIterator => inputMuxIterator_19
  # DEBUG BEGIN_STMT
  if (inputMuxIterator_19 != 8)
    goto <bb 9>; [88.89%]
  else
    goto <bb 11>; [11.11%]

  <bb 11> [local count: 2582621]:
  # DEBUG BEGIN_STMT
  Siul2_Port_Ip_GetMSCRConfiguration (config_30(D), base_25(D), pin_26(D));
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 12> [local count: 44374131]:
  # DEBUG BEGIN_STMT
  u16PinIdx_29 = u16PinIdx_18 + 1;
  # DEBUG u16PinIdx => u16PinIdx_29

  <bb 13> [local count: 49689685]:
  # u16PinIdx_18 = PHI <0(6), u16PinIdx_29(12)>
  # DEBUG u16PinIdx => u16PinIdx_18
  # DEBUG BEGIN_STMT
  _17 = (long unsigned int) u16PinIdx_18;
  if (_17 < MaxPinConfigured_24)
    goto <bb 7>; [94.50%]
  else
    goto <bb 14>; [5.50%]

  <bb 14> [local count: 5315554]:
  return;

}


Siul2_Port_Ip_RevertPinConfiguration (const struct Siul2_Port_Ip_PortType * const base, uint16 pin)
{
  volatile boolean x;
  volatile boolean x;
  uint32 u32MscrId;
  uint32 portNumber;
  uint32 MaxPinConfigured;
  const struct Siul2_Port_Ip_PinSettingsConfig * ConfigPtr;
  uint32 u32RegVal;
  uint16 u16PinIdx;
  _Bool _1;
  _Bool _2;
  long unsigned int base.4_3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  const struct Siul2_Port_Ip_PinSettingsConfig * _7;
  unsigned int _8;
  const struct Siul2_Port_Ip_PinSettingsConfig * _9;
  long unsigned int _10;
  int _11;
  long unsigned int _12;
  _Bool x.0_26;
  _Bool x.0_27;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u32RegVal => 4294967295
  # DEBUG BEGIN_STMT
  ConfigPtr_17 = pPort_Setting;
  # DEBUG ConfigPtr => ConfigPtr_17
  # DEBUG BEGIN_STMT
  MaxPinConfigured_18 = u32MaxPinConfigured;
  # DEBUG MaxPinConfigured => MaxPinConfigured_18
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = base_19(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_27 ={v} x;
  if (x.0_27 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 13> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 15> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = pin_20(D) <= 15;
  x ={v} _2;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_26 ={v} x;
  if (x.0_26 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 12> [local count: 5315554]:

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 14> [local count: 536870913]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 5315554]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  base.4_3 = (long unsigned int) base_19(D);
  _4 = base.4_3 + 3218537920;
  portNumber_21 = _4 >> 6;
  # DEBUG portNumber => portNumber_21
  # DEBUG BEGIN_STMT
  _5 = portNumber_21 << 4;
  _6 = (long unsigned int) pin_20(D);
  u32MscrId_22 = _5 + _6;
  # DEBUG u32MscrId => u32MscrId_22
  # DEBUG BEGIN_STMT
  # DEBUG u16PinIdx => 0
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 46956753]:
  # DEBUG BEGIN_STMT
  _8 = _12 * 116;
  _9 = ConfigPtr_17 + _8;
  _10 = _9->pinPortIdx;
  if (_10 == u32MscrId_22)
    goto <bb 8>; [5.50%]
  else
    goto <bb 9>; [94.50%]

  <bb 8> [local count: 2582621]:
  # _7 = PHI <_9(7)>
  # DEBUG BEGIN_STMT
  Siul2_Port_Ip_PinInit (_7);
  # DEBUG BEGIN_STMT
  _11 = (int) pin_20(D);
  u32RegVal_25 ={v} base_19(D)->MSCR[_11];
  # DEBUG u32RegVal => u32RegVal_25
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 9> [local count: 44374131]:
  # DEBUG BEGIN_STMT
  u16PinIdx_23 = u16PinIdx_13 + 1;
  # DEBUG u16PinIdx => u16PinIdx_23

  <bb 10> [local count: 49689685]:
  # u16PinIdx_13 = PHI <0(6), u16PinIdx_23(9)>
  # DEBUG u16PinIdx => u16PinIdx_13
  # DEBUG BEGIN_STMT
  _12 = (long unsigned int) u16PinIdx_13;
  if (_12 < MaxPinConfigured_18)
    goto <bb 7>; [94.50%]
  else
    goto <bb 11>; [5.50%]

  <bb 11> [local count: 5315554]:
  # u32RegVal_14 = PHI <u32RegVal_25(8), 4294967295(10)>
  # DEBUG u32RegVal => u32RegVal_14
  # DEBUG BEGIN_STMT
  return u32RegVal_14;

}


Siul2_Port_Ip_SetPinDirection (struct Siul2_Port_Ip_PortType * const base, uint16 pin, Siul2_Port_Ip_PortDirectionType direction)
{
  volatile boolean x;
  volatile boolean x;
  _Bool _1;
  _Bool _2;
  int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  int _13;
  long unsigned int _14;
  long unsigned int _15;
  int _16;
  long unsigned int _17;
  long unsigned int _18;
  _Bool x.0_32;
  _Bool x.0_33;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _1 = base_20(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_33 ={v} x;
  if (x.0_33 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 13> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 15> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = pin_22(D) <= 15;
  x ={v} _2;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_32 ={v} x;
  if (x.0_32 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 12> [local count: 5315554]:

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 14> [local count: 536870913]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 5315554]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_04 ();
  # DEBUG BEGIN_STMT
  switch (direction_24(D)) <default: <L6> [20.00%], case 0: <L0> [20.00%], case 1: <L1> [20.00%], case 2: <L2> [20.00%], case 3: <L3> [20.00%]>

  <bb 7> [local count: 1063111]:
<L0>:
  # DEBUG BEGIN_STMT
  _3 = (int) pin_22(D);
  _4 ={v} base_20(D)->MSCR[_3];
  _5 = _4 & 4292870143;
  base_20(D)->MSCR[_3] ={v} _5;
  # DEBUG BEGIN_STMT
  _6 ={v} base_20(D)->MSCR[_3];
  _7 = _6 | 524288;
  base_20(D)->MSCR[_3] ={v} _7;
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 1063111]:
<L1>:
  # DEBUG BEGIN_STMT
  _8 = (int) pin_22(D);
  _9 ={v} base_20(D)->MSCR[_8];
  _10 = _9 & 4294443007;
  base_20(D)->MSCR[_8] ={v} _10;
  # DEBUG BEGIN_STMT
  _11 ={v} base_20(D)->MSCR[_8];
  _12 = _11 | 2097152;
  base_20(D)->MSCR[_8] ={v} _12;
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 9> [local count: 1063111]:
<L2>:
  # DEBUG BEGIN_STMT
  _13 = (int) pin_22(D);
  _14 ={v} base_20(D)->MSCR[_13];
  _15 = _14 | 2621440;
  base_20(D)->MSCR[_13] ={v} _15;
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 1063111]:
<L3>:
  # DEBUG BEGIN_STMT
  _16 = (int) pin_22(D);
  _17 ={v} base_20(D)->MSCR[_16];
  _18 = _17 & 4292345855;
  base_20(D)->MSCR[_16] ={v} _18;
  # DEBUG BEGIN_STMT

  <bb 11> [local count: 5315554]:
<L6>:
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_04 ();
  return;

}


Siul2_Port_Ip_SetInputBuffer (struct Siul2_Port_Ip_PortType * const base, uint16 pin, boolean enable, uint32 inputMuxReg, Siul2_Port_Ip_PortInputMux inputMux)
{
  volatile boolean x;
  uint32 imcrVal;
  struct SIUL2_Type * siul2Base;
  _Bool _1;
  int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int iftmp.3_10;
  _Bool x.0_27;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  # DEBUG siul2Base => 4294967295B
  # DEBUG BEGIN_STMT
  # DEBUG imcrRegIdx => inputMuxReg_13(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = pin_14(D) <= 15;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_27 ={v} x;
  if (x.0_27 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 14> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 15> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_03 ();
  # DEBUG BEGIN_STMT
  if (base_17(D) != 0B)
    goto <bb 5>; [70.00%]
  else
    goto <bb 8>; [30.00%]

  <bb 5> [local count: 7441776]:
  # DEBUG BEGIN_STMT
  _2 = (int) pin_14(D);
  _3 ={v} base_17(D)->MSCR[_2];
  _4 = _3 & 4294443007;
  base_17(D)->MSCR[_2] ={v} _4;
  # DEBUG BEGIN_STMT
  _5 ={v} base_17(D)->MSCR[_2];
  if (enable_19(D) != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 3720888]:

  <bb 7> [local count: 7441776]:
  # iftmp.3_10 = PHI <524288(5), 0(6)>
  _6 = _5 | iftmp.3_10;
  base_17(D)->MSCR[_2] ={v} _6;

  <bb 8> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  if (inputMux_21(D) != 16)
    goto <bb 9>; [66.00%]
  else
    goto <bb 13>; [34.00%]

  <bb 9> [local count: 7016531]:
  # DEBUG BEGIN_STMT
  if (inputMuxReg_13(D) <= 511)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 3508266]:
  # DEBUG BEGIN_STMT
  # DEBUG siul2Base => 1076428800B

  <bb 11> [local count: 7016531]:
  # siul2Base_9 = PHI <4294967295B(9), 1076428800B(10)>
  # DEBUG siul2Base => siul2Base_9
  # DEBUG BEGIN_STMT
  if (inputMuxReg_13(D) <= 378)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 3508266]:
  # DEBUG BEGIN_STMT
  _7 = inputMuxReg_13(D);
  imcrVal_22 ={v} siul2Base_9->IMCR[_7];
  # DEBUG imcrVal => imcrVal_22
  # DEBUG BEGIN_STMT
  imcrVal_23 = imcrVal_22 & 4294967280;
  # DEBUG imcrVal => imcrVal_23
  # DEBUG BEGIN_STMT
  _8 = inputMux_21(D) & 15;
  imcrVal_24 = _8 | imcrVal_23;
  # DEBUG imcrVal => imcrVal_24
  # DEBUG BEGIN_STMT
  siul2Base_9->IMCR[_7] ={v} imcrVal_24;

  <bb 13> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_03 ();
  return;

}


Siul2_Port_Ip_SetOutputBuffer (struct Siul2_Port_Ip_PortType * const base, uint16 pin, boolean enable, Siul2_Port_Ip_PortMux mux)
{
  volatile boolean x;
  volatile boolean x;
  _Bool _1;
  _Bool _2;
  int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int iftmp.2_13;
  _Bool x.0_25;
  _Bool x.0_26;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _1 = base_14(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_26 ={v} x;
  if (x.0_26 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = pin_16(D) <= 15;
  x ={v} _2;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_25 ={v} x;
  if (x.0_25 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 9> [local count: 5315554]:

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 11> [local count: 536870913]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 5315554]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_02 ();
  # DEBUG BEGIN_STMT
  _3 = (int) pin_16(D);
  _4 ={v} base_14(D)->MSCR[_3];
  _5 = _4 & 4292870143;
  base_14(D)->MSCR[_3] ={v} _5;
  # DEBUG BEGIN_STMT
  _6 ={v} base_14(D)->MSCR[_3];
  if (enable_19(D) != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 2657777]:

  <bb 8> [local count: 5315554]:
  # iftmp.2_13 = PHI <2097152(6), 0(7)>
  _7 = _6 | iftmp.2_13;
  base_14(D)->MSCR[_3] ={v} _7;
  # DEBUG BEGIN_STMT
  _8 ={v} base_14(D)->MSCR[_3];
  _9 = _8 & 4294967288;
  base_14(D)->MSCR[_3] ={v} _9;
  # DEBUG BEGIN_STMT
  _10 ={v} base_14(D)->MSCR[_3];
  _11 = mux_22(D) & 7;
  _12 = _10 | _11;
  base_14(D)->MSCR[_3] ={v} _12;
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_02 ();
  return;

}


Siul2_Port_Ip_SetPullSel (struct Siul2_Port_Ip_PortType * const base, uint16 pin, Siul2_Port_Ip_PortPullConfig pullConfig)
{
  volatile boolean x;
  volatile boolean x;
  volatile boolean x;
  uint32 regVal;
  _Bool _1;
  _Bool _2;
  int _3;
  long unsigned int _4;
  long unsigned int _5;
  int _6;
  int _7;
  long unsigned int _21;
  _Bool x.0_23;
  _Bool x.0_24;
  _Bool x.0_25;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = base_9(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_24 ={v} x;
  if (x.0_24 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 15> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 18> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = pin_11(D) <= 15;
  x ={v} _2;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_23 ={v} x;
  if (x.0_23 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 14> [local count: 5315554]:

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 17> [local count: 536870913]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 5315554]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  # DEBUG pueVal => 8192
  # DEBUG BEGIN_STMT
  # DEBUG pusVal => 2048
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_01 ();
  # DEBUG BEGIN_STMT
  switch (pullConfig_13(D)) <default: <L3> [25.00%], case 0: <L1> [25.00%], case 1: <L2> [25.00%], case 2: <L0> [25.00%]>

  <bb 7> [local count: 1328889]:
<L0>:
  # DEBUG BEGIN_STMT
  _3 = (int) pin_11(D);
  _4 ={v} base_9(D)->MSCR[_3];
  _5 = _4 & 4294959103;
  base_9(D)->MSCR[_3] ={v} _5;
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 8> [local count: 1328889]:
<L1>:
  # DEBUG BEGIN_STMT
  _6 = (int) pin_11(D);
  regVal_18 ={v} base_9(D)->MSCR[_6];
  # DEBUG regVal => regVal_18
  # DEBUG BEGIN_STMT
  # DEBUG regVal => regVal_18 | 8192
  # DEBUG BEGIN_STMT
  _21 = regVal_18 & 4294965247;
  regVal_19 = _21 | 8192;
  # DEBUG regVal => regVal_19
  # DEBUG BEGIN_STMT
  base_9(D)->MSCR[_6] ={v} regVal_19;
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 9> [local count: 1328889]:
<L2>:
  # DEBUG BEGIN_STMT
  _7 = (int) pin_11(D);
  regVal_15 ={v} base_9(D)->MSCR[_7];
  # DEBUG regVal => regVal_15
  # DEBUG BEGIN_STMT
  # DEBUG regVal => regVal_15 | 8192
  # DEBUG BEGIN_STMT
  regVal_16 = regVal_15 | 10240;
  # DEBUG regVal => regVal_16
  # DEBUG BEGIN_STMT
  base_9(D)->MSCR[_7] ={v} regVal_16;
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 1328889]:
<L3>:
  # DEBUG BEGIN_STMT
  x ={v} 0;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_25 ={v} x;
  if (x.0_25 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 13> [local count: 664444]:

  <bb 11> [local count: 67108864]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 16> [local count: 67108864]:
  goto <bb 11>; [100.00%]

  <bb 12> [local count: 4651110]:
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_01 ();
  return;

}


Siul2_Port_Ip_Init (uint32 pinCount, const struct Siul2_Port_Ip_PinSettingsConfig * config)
{
  uint32 i;
  long unsigned int _1;
  const struct Siul2_Port_Ip_PinSettingsConfig * _2;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pPort_Setting = config_6(D);
  # DEBUG BEGIN_STMT
  u32MaxPinConfigured = pinCount_8(D);
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  _1 = i_3 * 116;
  _2 = config_6(D) + _1;
  Siul2_Port_Ip_PinInit (_2);
  # DEBUG BEGIN_STMT
  i_11 = i_3 + 1;
  # DEBUG i => i_11

  <bb 4> [local count: 1073741824]:
  # i_3 = PHI <0(2), i_11(3)>
  # DEBUG i => i_3
  # DEBUG BEGIN_STMT
  if (i_3 < pinCount_8(D))
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  return 0;

}


Siul2_Port_Ip_GetMSCRConfiguration (struct Siul2_Port_Ip_PinSettingsConfig * config, const struct Siul2_Port_Ip_PortType * const base, uint16 pin)
{
  Siul2_Port_Ip_PortPullConfig pullValue;
  uint32 u32TempVal;
  uint32 u32RegVal;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32RegVal => 4294967295
  # DEBUG BEGIN_STMT
  # DEBUG u32TempVal => 4294967295
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) pin_13(D);
  u32RegVal_16 ={v} base_15(D)->MSCR[_1];
  # DEBUG u32RegVal => u32RegVal_16
  # DEBUG BEGIN_STMT
  u32TempVal_17 = u32RegVal_16 & 7;
  # DEBUG u32TempVal => u32TempVal_17
  # DEBUG BEGIN_STMT
  config_18(D)->mux = u32TempVal_17;
  # DEBUG BEGIN_STMT
  _2 = u32RegVal_16 >> 5;
  u32TempVal_20 = _2 & 1;
  # DEBUG u32TempVal => u32TempVal_20
  # DEBUG BEGIN_STMT
  config_18(D)->safeMode = u32TempVal_20;
  # DEBUG BEGIN_STMT
  _3 = u32RegVal_16 & 8192;
  if (_3 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 = u32RegVal_16 >> 11;
  u32TempVal_22 = _4 & 1;
  # DEBUG u32TempVal => u32TempVal_22
  # DEBUG BEGIN_STMT
  # DEBUG pullValue => u32TempVal_22

  <bb 4> [local count: 1073741824]:
  # pullValue_12 = PHI <2(2), u32TempVal_22(3)>
  # DEBUG pullValue => pullValue_12
  # DEBUG BEGIN_STMT
  config_18(D)->pullConfig = pullValue_12;
  # DEBUG BEGIN_STMT
  _5 = u32RegVal_16 >> 14;
  u32TempVal_24 = _5 & 1;
  # DEBUG u32TempVal => u32TempVal_24
  # DEBUG BEGIN_STMT
  config_18(D)->slewRateCtrlSel = u32TempVal_24;
  # DEBUG BEGIN_STMT
  _6 = u32RegVal_16 >> 8;
  u32TempVal_26 = _6 & 1;
  # DEBUG u32TempVal => u32TempVal_26
  # DEBUG BEGIN_STMT
  config_18(D)->driveStrength = u32TempVal_26;
  # DEBUG BEGIN_STMT
  _7 = u32RegVal_16 >> 6;
  u32TempVal_28 = _7 & 1;
  # DEBUG u32TempVal => u32TempVal_28
  # DEBUG BEGIN_STMT
  config_18(D)->inputFilter = u32TempVal_28;
  # DEBUG BEGIN_STMT
  _8 = u32RegVal_16 >> 17;
  u32TempVal_30 = _8 & 1;
  # DEBUG u32TempVal => u32TempVal_30
  # DEBUG BEGIN_STMT
  config_18(D)->invert = u32TempVal_30;
  # DEBUG BEGIN_STMT
  _9 = u32RegVal_16 >> 16;
  u32TempVal_32 = _9 & 1;
  # DEBUG u32TempVal => u32TempVal_32
  # DEBUG BEGIN_STMT
  config_18(D)->pullKeep = u32TempVal_32;
  # DEBUG BEGIN_STMT
  _10 = u32RegVal_16 >> 19;
  u32TempVal_34 = _10 & 1;
  # DEBUG u32TempVal => u32TempVal_34
  # DEBUG BEGIN_STMT
  config_18(D)->inputBuffer = u32TempVal_34;
  # DEBUG BEGIN_STMT
  _11 = u32RegVal_16 >> 21;
  u32TempVal_36 = _11 & 1;
  # DEBUG u32TempVal => u32TempVal_36
  # DEBUG BEGIN_STMT
  config_18(D)->outputBuffer = u32TempVal_36;
  return;

}


Siul2_Port_Ip_WriteIMCRConfiguration (const struct Siul2_Port_Ip_PinSettingsConfig * config)
{
  uint32 imcrRegIdx;
  uint8 inputMuxIterator;
  <unnamed type> _1;
  int _2;
  <unnamed type> _3;
  long unsigned int _4;
  long unsigned int _5;

  <bb 2> [local count: 350860932]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG imcrBase => 1076428800B
  # DEBUG BEGIN_STMT
  _1 = config_11(D)->inputBuffer;
  if (_1 == 1)
    goto <bb 9>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 9> [local count: 119292718]:
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 954449104]:
  # DEBUG BEGIN_STMT
  _2 = (int) inputMuxIterator_6;
  _3 = config_11(D)->inputMux[_2];
  if (_3 != 16)
    goto <bb 4>; [66.00%]
  else
    goto <bb 6>; [34.00%]

  <bb 4> [local count: 629936405]:
  # DEBUG BEGIN_STMT
  imcrRegIdx_12 = config_11(D)->inputMuxReg[_2];
  # DEBUG imcrRegIdx => imcrRegIdx_12
  # DEBUG BEGIN_STMT
  # DEBUG imcrBase => 1076428800B
  # DEBUG BEGIN_STMT
  if (imcrRegIdx_12 <= 378)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 314968202]:
  # DEBUG BEGIN_STMT
  _4 = imcrRegIdx_12;
  _5 = _3 & 15;
  MEM[(struct SIUL2_Type *)1076428800B].IMCR[_4] ={v} _5;

  <bb 6> [local count: 954449104]:
  # DEBUG imcrBase => 1076428800B
  # DEBUG BEGIN_STMT
  inputMuxIterator_14 = inputMuxIterator_6 + 1;
  # DEBUG inputMuxIterator => inputMuxIterator_14

  <bb 7> [local count: 1073741824]:
  # inputMuxIterator_6 = PHI <inputMuxIterator_14(6), 0(9)>
  # DEBUG imcrBase => 1076428800B
  # DEBUG inputMuxIterator => inputMuxIterator_6
  # DEBUG BEGIN_STMT
  if (inputMuxIterator_6 != 8)
    goto <bb 3>; [88.89%]
  else
    goto <bb 8>; [11.11%]

  <bb 8> [local count: 350860934]:
  return;

}


Siul2_Port_Ip_PinInit (const struct Siul2_Port_Ip_PinSettingsConfig * config)
{
  volatile boolean x;
  _Bool _1;
  _Bool x.0_5;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  # DEBUG pinsValues => 0
  # DEBUG BEGIN_STMT
  # DEBUG siulInstance => 0
  # DEBUG BEGIN_STMT
  _1 = config_3(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_5 ={v} x;
  if (x.0_5 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 10631108]:
  Siul2_Port_Ip_PinInit.part.0 (config_3(D));
  return;

}


