
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_ReportClockErrors/11:
  Jump functions of caller  Clock_Ip_TimeoutExpired/10:
  Jump functions of caller  Clock_Ip_StartTimeout/9:
  Jump functions of caller  Clock_Ip_SetPllPlldvOdiv2Output/3:
  Jump functions of caller  Clock_Ip_SetPllPll0divDeDivOutput/2:
  Jump functions of caller  Clock_Ip_SetCgmXDeDivStatWithoutPhase/1:
    callsite  Clock_Ip_SetCgmXDeDivStatWithoutPhase/1 -> Clock_Ip_ReportClockErrors/11 : 
       no arg info
    callsite  Clock_Ip_SetCgmXDeDivStatWithoutPhase/1 -> Clock_Ip_TimeoutExpired/10 : 
       no arg info
    callsite  Clock_Ip_SetCgmXDeDivStatWithoutPhase/1 -> Clock_Ip_StartTimeout/9 : 
       no arg info
  Jump functions of caller  Clock_Ip_Callback_DividerEmpty/0:

 Propagating constants:

Not considering Clock_Ip_SetPllPlldvOdiv2Output/3 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetPllPll0divDeDivOutput/2 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetCgmXDeDivStatWithoutPhase/1 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Callback_DividerEmpty/0 for cloning; -fipa-cp-clone disabled.

overall_size: 117
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_SetPllPlldvOdiv2Output/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetPllPll0divDeDivOutput/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetCgmXDeDivStatWithoutPhase/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_Callback_DividerEmpty/0:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Clock_Ip_ReportClockErrors/11 (Clock_Ip_ReportClockErrors) @06e61b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_SetCgmXDeDivStatWithoutPhase/1 (37904965 (estimated locally),0.33 per call) 
  Calls: 
Clock_Ip_TimeoutExpired/10 (Clock_Ip_TimeoutExpired) @06e61a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_SetCgmXDeDivStatWithoutPhase/1 (1073741824 (estimated locally),9.35 per call) 
  Calls: 
Clock_Ip_StartTimeout/9 (Clock_Ip_StartTimeout) @06e619a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_SetCgmXDeDivStatWithoutPhase/1 (114863530 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_apxCgm/8 (Clock_Ip_apxCgm) @06fb35a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_SetCgmXDeDivStatWithoutPhase/1 (read) Clock_Ip_SetCgmXDeDivStatWithoutPhase/1 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axFeatureExtensions/7 (Clock_Ip_axFeatureExtensions) @06fb3558
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_SetCgmXDeDivStatWithoutPhase/1 (read) Clock_Ip_SetCgmXDeDivStatWithoutPhase/1 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_pxPll/6 (Clock_Ip_pxPll) @06e62ee8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_SetPllPll0divDeDivOutput/2 (read) Clock_Ip_SetPllPlldvOdiv2Output/3 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8ClockFeatures/5 (Clock_Ip_au8ClockFeatures) @06e62ea0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_SetPllPlldvOdiv2Output/3 (read) Clock_Ip_SetPllPll0divDeDivOutput/2 (read) Clock_Ip_SetPllPll0divDeDivOutput/2 (read) Clock_Ip_SetCgmXDeDivStatWithoutPhase/1 (read) Clock_Ip_SetCgmXDeDivStatWithoutPhase/1 (read) Clock_Ip_SetCgmXDeDivStatWithoutPhase/1 (read) Clock_Ip_SetCgmXDeDivStatWithoutPhase/1 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axDividerCallbacks/4 (Clock_Ip_axDividerCallbacks) @06e62ab0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_Callback_DividerEmpty/0 (addr) Clock_Ip_SetCgmXDeDivStatWithoutPhase/1 (addr) Clock_Ip_SetPllPll0divDeDivOutput/2 (addr) Clock_Ip_SetPllPlldvOdiv2Output/3 (addr) 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_SetPllPlldvOdiv2Output/3 (Clock_Ip_SetPllPlldvOdiv2Output) @06e610e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/5 (read) Clock_Ip_pxPll/6 (read) 
  Referring: Clock_Ip_axDividerCallbacks/4 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_SetPllPll0divDeDivOutput/2 (Clock_Ip_SetPllPll0divDeDivOutput) @06e55b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/5 (read) Clock_Ip_au8ClockFeatures/5 (read) Clock_Ip_pxPll/6 (read) 
  Referring: Clock_Ip_axDividerCallbacks/4 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_SetCgmXDeDivStatWithoutPhase/1 (Clock_Ip_SetCgmXDeDivStatWithoutPhase) @06e55d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/5 (read) Clock_Ip_au8ClockFeatures/5 (read) Clock_Ip_au8ClockFeatures/5 (read) Clock_Ip_au8ClockFeatures/5 (read) Clock_Ip_axFeatureExtensions/7 (read) Clock_Ip_axFeatureExtensions/7 (read) Clock_Ip_apxCgm/8 (read) Clock_Ip_apxCgm/8 (read) 
  Referring: Clock_Ip_axDividerCallbacks/4 (addr) 
  Availability: available
  Function flags: count:114863530 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_ReportClockErrors/11 (37904965 (estimated locally),0.33 per call) Clock_Ip_TimeoutExpired/10 (1073741824 (estimated locally),9.35 per call) Clock_Ip_StartTimeout/9 (114863530 (estimated locally),1.00 per call) 
Clock_Ip_Callback_DividerEmpty/0 (Clock_Ip_Callback_DividerEmpty) @06e55a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axDividerCallbacks/4 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Clock_Ip_Callback_DividerEmpty (Clock_Ip_Callback_DividerEmpty, funcdef_no=0, decl_uid=6547, cgraph_uid=1, symbol_order=0)

Modification phase of node Clock_Ip_Callback_DividerEmpty/0
Clock_Ip_Callback_DividerEmpty (const struct Clock_Ip_DividerConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_SetPllPll0divDeDivOutput (Clock_Ip_SetPllPll0divDeDivOutput, funcdef_no=2, decl_uid=6551, cgraph_uid=3, symbol_order=2)

Modification phase of node Clock_Ip_SetPllPll0divDeDivOutput/2
Clock_Ip_SetPllPll0divDeDivOutput (const struct Clock_Ip_DividerConfigType * Config)
{
  uint32 RegValue;
  uint32 DividerIndex;
  uint32 Instance;
  <unnamed type> _1;
  unsigned char _2;
  unsigned char _3;
  struct PLL_Type * _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _21;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_13(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  Instance_14 = (uint32) _2;
  # DEBUG Instance => Instance_14
  # DEBUG BEGIN_STMT
  _3 = Clock_Ip_au8ClockFeatures[_1][5];
  DividerIndex_15 = (uint32) _3;
  # DEBUG DividerIndex => DividerIndex_15
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = Clock_Ip_pxPll[Instance_14];
  _5 ={v} _4->PLLODIV[DividerIndex_15];
  _6 = _5 & 2147483647;
  _4->PLLODIV[DividerIndex_15] ={v} _6;
  # DEBUG BEGIN_STMT
  _7 = Config_13(D)->Value;
  if (_7 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  RegValue_17 ={v} _4->PLLODIV[DividerIndex_15];
  # DEBUG RegValue => RegValue_17
  # DEBUG BEGIN_STMT
  # DEBUG RegValue => RegValue_17 | 2147483648
  # DEBUG BEGIN_STMT
  _21 = RegValue_17 & 4293984255;
  RegValue_18 = _21 | 2147483648;
  # DEBUG RegValue => RegValue_18
  # DEBUG BEGIN_STMT
  _8 = _7 + 4294967295;
  _9 = _8 << 16;
  _10 = _9 & 983040;
  RegValue_19 = _10 | RegValue_18;
  # DEBUG RegValue => RegValue_19
  # DEBUG BEGIN_STMT
  _4->PLLODIV[DividerIndex_15] ={v} RegValue_19;

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Clock_Ip_SetPllPlldvOdiv2Output (Clock_Ip_SetPllPlldvOdiv2Output, funcdef_no=3, decl_uid=6553, cgraph_uid=4, symbol_order=3)

Modification phase of node Clock_Ip_SetPllPlldvOdiv2Output/3
Clock_Ip_SetPllPlldvOdiv2Output (const struct Clock_Ip_DividerConfigType * Config)
{
  uint32 RegValue;
  uint32 Instance;
  <unnamed type> _1;
  unsigned char _2;
  long unsigned int _3;
  struct PLL_Type * _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int iftmp.0_10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_8(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  Instance_9 = (uint32) _2;
  # DEBUG Instance => Instance_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = Config_8(D)->Value;
  iftmp.0_10 = MAX_EXPR <_3, 1>;
  # DEBUG DividerValue => iftmp.0_10
  # DEBUG BEGIN_STMT
  _4 = Clock_Ip_pxPll[Instance_9];
  RegValue_11 ={v} _4->PLLDV;
  # DEBUG RegValue => RegValue_11
  # DEBUG BEGIN_STMT
  RegValue_12 = RegValue_11 & 2181038079;
  # DEBUG RegValue => RegValue_12
  # DEBUG BEGIN_STMT
  _5 = iftmp.0_10 << 25;
  _6 = _5 & 2113929216;
  RegValue_13 = _6 | RegValue_12;
  # DEBUG RegValue => RegValue_13
  # DEBUG BEGIN_STMT
  _4->PLLDV ={v} RegValue_13;
  return;

}



;; Function Clock_Ip_SetCgmXDeDivStatWithoutPhase (Clock_Ip_SetCgmXDeDivStatWithoutPhase, funcdef_no=1, decl_uid=6549, cgraph_uid=2, symbol_order=1)

Modification phase of node Clock_Ip_SetCgmXDeDivStatWithoutPhase/1
Clock_Ip_SetCgmXDeDivStatWithoutPhase (const struct Clock_Ip_DividerConfigType * Config)
{
  uint32 DividerStatus;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  boolean TimeoutOccurred;
  uint32 RegValue;
  uint32 DividerShift;
  uint32 DividerMask;
  uint32 DividerIndex;
  uint32 SelectorIndex;
  uint32 Instance;
  <unnamed type> _1;
  unsigned char _2;
  volatile struct Clock_Ip_CgmMuxType * _3;
  unsigned char _4;
  unsigned char _6;
  unsigned char _7;
  int _8;
  long unsigned int _9;
  volatile struct Clock_Ip_CgmMuxType * _10;
  long unsigned int _11;
  long unsigned int _12;
  volatile struct Clock_Ip_CgmMuxType * _13;
  long unsigned int _14;
  long unsigned int TimeoutTicks.1_15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;
  long unsigned int _20;
  <unnamed type> _21;
  long unsigned int _32;
  long unsigned int _46;

  <bb 2> [local count: 114863530]:
  # DEBUG BEGIN_STMT
  _1 = Config_26(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  Instance_27 = (uint32) _2;
  # DEBUG Instance => Instance_27
  # DEBUG BEGIN_STMT
  _4 = Clock_Ip_au8ClockFeatures[_1][4];
  SelectorIndex_28 = (uint32) _4;
  # DEBUG SelectorIndex => SelectorIndex_28
  # DEBUG BEGIN_STMT
  _6 = Clock_Ip_au8ClockFeatures[_1][5];
  DividerIndex_29 = (uint32) _6;
  # DEBUG DividerIndex => DividerIndex_29
  # DEBUG BEGIN_STMT
  _7 = Clock_Ip_au8ClockFeatures[_1][2];
  _8 = (int) _7;
  DividerMask_30 = Clock_Ip_axFeatureExtensions[_8].DividerValueMask;
  # DEBUG DividerMask => DividerMask_30
  # DEBUG BEGIN_STMT
  DividerShift_31 = Clock_Ip_axFeatureExtensions[_8].DividerValueShift;
  # DEBUG DividerShift => DividerShift_31
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _9 = Config_26(D)->Value;
  if (_9 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 57431765]:
  # DEBUG BEGIN_STMT
  _10 = Clock_Ip_apxCgm[Instance_27][SelectorIndex_28];
  RegValue_33 ={v} _10->Divider[DividerIndex_29];
  # DEBUG RegValue => RegValue_33
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => ~DividerMask_30
  # DEBUG RegValue => D#1 & RegValue_33
  # DEBUG BEGIN_STMT
  _11 = _9 + 4294967295;
  _12 = _11 << DividerShift_31;
  _32 = _12 ^ RegValue_33;
  _46 = DividerMask_30 & _32;
  RegValue_34 = RegValue_33 ^ _46;
  # DEBUG RegValue => RegValue_34
  # DEBUG BEGIN_STMT
  _10->Divider[DividerIndex_29] ={v} RegValue_34;

  <bb 4> [local count: 114863530]:
  # DEBUG BEGIN_STMT
  Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _13 = Clock_Ip_apxCgm[Instance_27][SelectorIndex_28];
  _14 ={v} _13->MUX_DIV_UPD_STAT;
  DividerStatus_37 = _14 & 1;
  # DEBUG DividerStatus => DividerStatus_37
  # DEBUG BEGIN_STMT
  TimeoutTicks.1_15 = TimeoutTicks;
  TimeoutOccurred_39 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.1_15);
  # DEBUG TimeoutOccurred => TimeoutOccurred_39
  # DEBUG BEGIN_STMT
  if (DividerStatus_37 != 0)
    goto <bb 6>; [94.50%]
  else
    goto <bb 7>; [5.50%]

  <bb 6> [local count: 1014686026]:
  if (TimeoutOccurred_39 != 0)
    goto <bb 7>; [5.50%]
  else
    goto <bb 13>; [94.50%]

  <bb 13> [local count: 958878296]:
  goto <bb 5>; [100.00%]

  <bb 7> [local count: 114863531]:
  # _3 = PHI <_13(5), _13(6)>
  # TimeoutOccurred_5 = PHI <TimeoutOccurred_39(5), TimeoutOccurred_39(6)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_5 != 0)
    goto <bb 11>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 8> [local count: 76958566]:
  # DEBUG BEGIN_STMT
  _16 = Config_26(D)->Value;
  if (_16 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 38479283]:
  # DEBUG BEGIN_STMT
  _17 ={v} _3->Divider[DividerIndex_29];
  _18 = _17 | 2147483648;
  _3->Divider[DividerIndex_29] ={v} _18;
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 38479283]:
  # DEBUG BEGIN_STMT
  _19 ={v} _3->Divider[DividerIndex_29];
  _20 = _19 & 2147483647;
  _3->Divider[DividerIndex_29] ={v} _20;
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 37904965]:
  # DEBUG BEGIN_STMT
  _21 = Config_26(D)->Name;
  Clock_Ip_ReportClockErrors (1, _21);

  <bb 12> [local count: 114863531]:
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return;

}


