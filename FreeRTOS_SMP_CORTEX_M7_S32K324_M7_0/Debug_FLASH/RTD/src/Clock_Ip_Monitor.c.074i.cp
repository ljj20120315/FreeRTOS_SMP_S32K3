
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_GetConfiguredFrequencyValue/24:
  Jump functions of caller  SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01/22:
  Jump functions of caller  Clock_Ip_TimeoutExpired/21:
  Jump functions of caller  Clock_Ip_StartTimeout/20:
  Jump functions of caller  SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01/19:
  Jump functions of caller  Clock_Ip_ReportClockErrors/16:
  Jump functions of caller  Clock_Ip_CMU_ClockFailInt/11:
    callsite  Clock_Ip_CMU_ClockFailInt/11 -> Clock_Ip_ReportClockErrors/16 : 
       no arg info
  Jump functions of caller  Clock_Ip_CMU_GetInterruptStatus/10:
  Jump functions of caller  Clock_Ip_EnableCmuFcFceRefCntLfrefHfref/9:
  Jump functions of caller  Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref/8:
  Jump functions of caller  Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref/7:
  Jump functions of caller  Clock_Ip_SetCmuFcFceRefCntLfrefHfref/6:
    callsite  Clock_Ip_SetCmuFcFceRefCntLfrefHfref/6 -> Clock_Ip_GetConfiguredFrequencyValue/24 : 
       no arg info
    callsite  Clock_Ip_SetCmuFcFceRefCntLfrefHfref/6 -> Clock_Ip_GetConfiguredFrequencyValue/24 : 
       no arg info
    callsite  Clock_Ip_SetCmuFcFceRefCntLfrefHfref/6 -> Clock_Ip_GetConfiguredFrequencyValue/24 : 
       no arg info
    callsite  Clock_Ip_SetCmuFcFceRefCntLfrefHfref/6 -> Clock_Ip_GetConfiguredFrequencyValue/24 : 
       no arg info
  Jump functions of caller  Clock_Ip_ResetCmuFcFceRefCntLfrefHfref/5:
    callsite  Clock_Ip_ResetCmuFcFceRefCntLfrefHfref/5 -> Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/4 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/4:
    callsite  Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/4 -> SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01/22 : 
       no arg info
    callsite  Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/4 -> Clock_Ip_ReportClockErrors/16 : 
       no arg info
    callsite  Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/4 -> Clock_Ip_TimeoutExpired/21 : 
       no arg info
    callsite  Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/4 -> Clock_Ip_StartTimeout/20 : 
       no arg info
    callsite  Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/4 -> SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01/19 : 
       no arg info
  Jump functions of caller  Clock_Ip_ClockMonitorEmpty_GetStatus/3:
  Jump functions of caller  Clock_Ip_ClockMonitorEmpty_ClearStatus/2:
    callsite  Clock_Ip_ClockMonitorEmpty_ClearStatus/2 -> Clock_Ip_ClockMonitorEmpty_Disable/1 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_ClockMonitorEmpty_Disable/1:
  Jump functions of caller  Clock_Ip_ClockMonitorEmpty/0:

 Propagating constants:

Not considering Clock_Ip_CMU_GetInterruptStatus/10 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_EnableCmuFcFceRefCntLfrefHfref/9 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref/8 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref/7 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetCmuFcFceRefCntLfrefHfref/6 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ResetCmuFcFceRefCntLfrefHfref/5 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/4 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockMonitorEmpty_GetStatus/3 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockMonitorEmpty_ClearStatus/2 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockMonitorEmpty_Disable/1 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockMonitorEmpty/0 for cloning; -fipa-cp-clone disabled.

overall_size: 238
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 2, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_CMU_ClockFailInt/11:
  Node: Clock_Ip_CMU_GetInterruptStatus/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_EnableCmuFcFceRefCntLfrefHfref/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetCmuFcFceRefCntLfrefHfref/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ResetCmuFcFceRefCntLfrefHfref/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockMonitorEmpty_GetStatus/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockMonitorEmpty_ClearStatus/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockMonitorEmpty_Disable/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockMonitorEmpty/0:
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

Clock_Ip_GetConfiguredFrequencyValue/24 (Clock_Ip_GetConfiguredFrequencyValue) @06f719a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_SetCmuFcFceRefCntLfrefHfref/6 (143434726 (estimated locally),0.13 per call) Clock_Ip_SetCmuFcFceRefCntLfrefHfref/6 (177167400 (estimated locally),0.16 per call) Clock_Ip_SetCmuFcFceRefCntLfrefHfref/6 (177167400 (estimated locally),0.16 per call) Clock_Ip_SetCmuFcFceRefCntLfrefHfref/6 (177167400 (estimated locally),0.16 per call) 
  Calls: 
Hash.0/23 (Hash) @070afd38
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Clock_Ip_SetCmuFcFceRefCntLfrefHfref/6 (read) Clock_Ip_SetCmuFcFceRefCntLfrefHfref/6 (write) 
  Availability: available
  Varpool flags:
SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01/22 (SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01) @06f71700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/4 (348071307 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_TimeoutExpired/21 (Clock_Ip_TimeoutExpired) @06f71620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/4 (1073741824 (estimated locally),3.08 per call) 
  Calls: 
Clock_Ip_StartTimeout/20 (Clock_Ip_StartTimeout) @06f71540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/4 (114863530 (estimated locally),0.33 per call) 
  Calls: 
SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01/19 (SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01) @06f71460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/4 (348071305 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_axCmuInfo/18 (Clock_Ip_axCmuInfo) @06f63ea0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref/7 (read) Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/4 (read) Clock_Ip_EnableCmuFcFceRefCntLfrefHfref/9 (read) Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref/8 (read) Clock_Ip_SetCmuFcFceRefCntLfrefHfref/6 (read) Clock_Ip_SetCmuFcFceRefCntLfrefHfref/6 (read) Clock_Ip_SetCmuFcFceRefCntLfrefHfref/6 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8ClockFeatures/17 (Clock_Ip_au8ClockFeatures) @06f63e58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref/7 (read) Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/4 (read) Clock_Ip_EnableCmuFcFceRefCntLfrefHfref/9 (read) Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref/8 (read) Clock_Ip_SetCmuFcFceRefCntLfrefHfref/6 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_ReportClockErrors/16 (Clock_Ip_ReportClockErrors) @06f68a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_CMU_ClockFailInt/11 (198427488 (estimated locally),0.92 per call) Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/4 (37904965 (estimated locally),0.11 per call) 
  Calls: 
Clock_Ip_aeCmuNames/15 (Clock_Ip_aeCmuNames) @06f63c18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_CMU_ClockFailInt/11 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_pxConfig/14 (Clock_Ip_pxConfig) @06f63bd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_CMU_ClockFailInt/11 (read) 
  Availability: not_available
  Varpool flags:
Clock_Ip_apxCmu/13 (Clock_Ip_apxCmu) @06f638b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_CMU_GetInterruptStatus/10 (read) Clock_Ip_CMU_ClockFailInt/11 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axCmuCallbacks/12 (Clock_Ip_axCmuCallbacks) @06f635a0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_ClockMonitorEmpty/0 (addr) Clock_Ip_ClockMonitorEmpty/0 (addr) Clock_Ip_ClockMonitorEmpty_Disable/1 (addr) Clock_Ip_ClockMonitorEmpty_ClearStatus/2 (addr) Clock_Ip_ClockMonitorEmpty_GetStatus/3 (addr) Clock_Ip_ClockMonitorEmpty/0 (addr) Clock_Ip_ResetCmuFcFceRefCntLfrefHfref/5 (addr) Clock_Ip_SetCmuFcFceRefCntLfrefHfref/6 (addr) Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/4 (addr) Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref/7 (addr) Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref/8 (addr) Clock_Ip_EnableCmuFcFceRefCntLfrefHfref/9 (addr) 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_CMU_ClockFailInt/11 (Clock_Ip_CMU_ClockFailInt) @06f68c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_apxCmu/13 (read) Clock_Ip_pxConfig/14 (read) Clock_Ip_aeCmuNames/15 (read) 
  Referring: 
  Availability: available
  Function flags: count:214748366 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_ReportClockErrors/16 (198427488 (estimated locally),0.92 per call) 
Clock_Ip_CMU_GetInterruptStatus/10 (Clock_Ip_CMU_GetInterruptStatus) @06f689a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_apxCmu/13 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_EnableCmuFcFceRefCntLfrefHfref/9 (Clock_Ip_EnableCmuFcFceRefCntLfrefHfref) @06f68700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/17 (read) Clock_Ip_axCmuInfo/18 (read) 
  Referring: Clock_Ip_axCmuCallbacks/12 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref/8 (Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref) @06f68460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/17 (read) Clock_Ip_axCmuInfo/18 (read) 
  Referring: Clock_Ip_axCmuCallbacks/12 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref/7 (Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref) @06f681c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/17 (read) Clock_Ip_axCmuInfo/18 (read) 
  Referring: Clock_Ip_axCmuCallbacks/12 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_SetCmuFcFceRefCntLfrefHfref/6 (Clock_Ip_SetCmuFcFceRefCntLfrefHfref) @06e29e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/17 (read) Clock_Ip_axCmuInfo/18 (read) Hash.0/23 (read) Hash.0/23 (write) Clock_Ip_axCmuInfo/18 (read) Clock_Ip_axCmuInfo/18 (read) 
  Referring: Clock_Ip_axCmuCallbacks/12 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_GetConfiguredFrequencyValue/24 (143434726 (estimated locally),0.13 per call) Clock_Ip_GetConfiguredFrequencyValue/24 (177167400 (estimated locally),0.16 per call) Clock_Ip_GetConfiguredFrequencyValue/24 (177167400 (estimated locally),0.16 per call) Clock_Ip_GetConfiguredFrequencyValue/24 (177167400 (estimated locally),0.16 per call) 
Clock_Ip_ResetCmuFcFceRefCntLfrefHfref/5 (Clock_Ip_ResetCmuFcFceRefCntLfrefHfref) @06e298c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axCmuCallbacks/12 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/4 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/4 (Clock_Ip_DisableCmuFcFceRefCntLfrefHfref) @06e29380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/17 (read) Clock_Ip_axCmuInfo/18 (read) 
  Referring: Clock_Ip_axCmuCallbacks/12 (addr) 
  Availability: available
  Function flags: count:348071305 (estimated locally) body optimize_size
  Called by: Clock_Ip_ResetCmuFcFceRefCntLfrefHfref/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01/22 (348071307 (estimated locally),1.00 per call) Clock_Ip_ReportClockErrors/16 (37904965 (estimated locally),0.11 per call) Clock_Ip_TimeoutExpired/21 (1073741824 (estimated locally),3.08 per call) Clock_Ip_StartTimeout/20 (114863530 (estimated locally),0.33 per call) SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01/19 (348071305 (estimated locally),1.00 per call) 
Clock_Ip_ClockMonitorEmpty_GetStatus/3 (Clock_Ip_ClockMonitorEmpty_GetStatus) @06e29d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axCmuCallbacks/12 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_ClockMonitorEmpty_ClearStatus/2 (Clock_Ip_ClockMonitorEmpty_ClearStatus) @06e29a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axCmuCallbacks/12 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Clock_Ip_ClockMonitorEmpty_Disable/1 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ClockMonitorEmpty_Disable/1 (Clock_Ip_ClockMonitorEmpty_Disable) @06e297e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axCmuCallbacks/12 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Clock_Ip_ClockMonitorEmpty_ClearStatus/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_ClockMonitorEmpty/0 (Clock_Ip_ClockMonitorEmpty) @06e29540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axCmuCallbacks/12 (addr) Clock_Ip_axCmuCallbacks/12 (addr) Clock_Ip_axCmuCallbacks/12 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Clock_Ip_ClockMonitorEmpty (Clock_Ip_ClockMonitorEmpty, funcdef_no=0, decl_uid=6559, cgraph_uid=1, symbol_order=0)

Modification phase of node Clock_Ip_ClockMonitorEmpty/0
Clock_Ip_ClockMonitorEmpty (const struct Clock_Ip_CmuConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_ClockMonitorEmpty_Disable (Clock_Ip_ClockMonitorEmpty_Disable, funcdef_no=1, decl_uid=6561, cgraph_uid=2, symbol_order=1)

Modification phase of node Clock_Ip_ClockMonitorEmpty_Disable/1
Clock_Ip_ClockMonitorEmpty_Disable (Clock_Ip_NameType Name)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_ClockMonitorEmpty_GetStatus (Clock_Ip_ClockMonitorEmpty_GetStatus, funcdef_no=3, decl_uid=6565, cgraph_uid=4, symbol_order=3)

Modification phase of node Clock_Ip_ClockMonitorEmpty_GetStatus/3
Clock_Ip_ClockMonitorEmpty_GetStatus (Clock_Ip_NameType Name)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 3;

}



;; Function Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref (Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref, funcdef_no=7, decl_uid=6573, cgraph_uid=8, symbol_order=7)

Modification phase of node Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref/7
Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref (Clock_Ip_NameType Name)
{
  uint32 CmuIsrValue;
  struct Clock_Ip_ClockMonitorType * const CmuFc;
  unsigned char _1;
  int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_au8ClockFeatures[Name_5(D)][8];
  _2 = (int) _1;
  # DEBUG D#1 => &Clock_Ip_axCmuInfo[_2]
  # DEBUG CmuInformation => D#1
  # DEBUG BEGIN_STMT
  CmuFc_6 = MEM <const struct Clock_Ip_CmuInfoType[6]> [(const struct Clock_Ip_CmuInfoType *)&Clock_Ip_axCmuInfo][_2].CmuInstance;
  # DEBUG CmuFc => CmuFc_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 ={v} CmuFc_6->SR;
  CmuIsrValue_7 = _3 & 3;
  # DEBUG CmuIsrValue => CmuIsrValue_7
  # DEBUG BEGIN_STMT
  CmuFc_6->SR ={v} CmuIsrValue_7;
  return;

}



;; Function Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref (Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref, funcdef_no=8, decl_uid=6575, cgraph_uid=9, symbol_order=8)

Modification phase of node Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref/8
Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref (Clock_Ip_NameType Name)
{
  uint32 CmuIsrValue;
  Clock_Ip_CmuStatusType Status;
  const struct Clock_Ip_ClockMonitorType * CmuFc;
  unsigned char _1;
  int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_au8ClockFeatures[Name_11(D)][8];
  _2 = (int) _1;
  # DEBUG D#2 => &Clock_Ip_axCmuInfo[_2]
  # DEBUG CmuInformation => D#2
  # DEBUG BEGIN_STMT
  CmuFc_12 = MEM <const struct Clock_Ip_CmuInfoType[6]> [(const struct Clock_Ip_CmuInfoType *)&Clock_Ip_axCmuInfo][_2].CmuInstance;
  # DEBUG CmuFc => CmuFc_12
  # DEBUG BEGIN_STMT
  # DEBUG Status => 3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 ={v} CmuFc_12->SR;
  CmuIsrValue_13 = _3 & 3;
  # DEBUG CmuIsrValue => CmuIsrValue_13
  # DEBUG BEGIN_STMT
  _4 = CmuFc_12->IER;
  # DEBUG CmuIerValue => _4 & 3
  # DEBUG BEGIN_STMT
  CmuIsrValue_14 = _4 & CmuIsrValue_13;
  # DEBUG CmuIsrValue => CmuIsrValue_14
  # DEBUG BEGIN_STMT
  _5 = CmuFc_12->GCR;
  _6 = _5 & 1;
  if (_6 != 0)
    goto <bb 3>; [65.00%]
  else
    goto <bb 6>; [35.00%]

  <bb 3> [local count: 697932185]:
  # DEBUG BEGIN_STMT
  _7 = CmuIsrValue_14 & 2;
  if (_7 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 348966092]:
  # DEBUG BEGIN_STMT
  _8 = CmuIsrValue_14 & 1;
  if (_8 != 0)
    goto <bb 6>; [35.00%]
  else
    goto <bb 5>; [65.00%]

  <bb 5> [local count: 226827959]:
  # DEBUG BEGIN_STMT
  # DEBUG Status => 0

  <bb 6> [local count: 1073741824]:
  # Status_9 = PHI <3(2), 1(3), 2(4), 0(5)>
  # DEBUG Status => Status_9
  # DEBUG BEGIN_STMT
  return Status_9;

}



;; Function Clock_Ip_EnableCmuFcFceRefCntLfrefHfref (Clock_Ip_EnableCmuFcFceRefCntLfrefHfref, funcdef_no=9, decl_uid=6577, cgraph_uid=10, symbol_order=9)

Modification phase of node Clock_Ip_EnableCmuFcFceRefCntLfrefHfref/9
Clock_Ip_EnableCmuFcFceRefCntLfrefHfref (const struct Clock_Ip_CmuConfigType * Config)
{
  struct Clock_Ip_ClockMonitorType * const CmuFc;
  <unnamed type> _1;
  unsigned char _2;
  int _3;
  unsigned char _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_11(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][8];
  _3 = (int) _2;
  # DEBUG D#3 => &Clock_Ip_axCmuInfo[_3]
  # DEBUG CmuInformation => D#3
  # DEBUG BEGIN_STMT
  CmuFc_12 = MEM <const struct Clock_Ip_CmuInfoType[6]> [(const struct Clock_Ip_CmuInfoType *)&Clock_Ip_axCmuInfo][_3].CmuInstance;
  # DEBUG CmuFc => CmuFc_12
  # DEBUG BEGIN_STMT
  _4 = Config_11(D)->Enable;
  if (_4 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _5 = CmuFc_12->GCR;
  _6 = _5 | 1;
  CmuFc_12->GCR = _6;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _7 = CmuFc_12->GCR;
  _8 = _7 & 4294967294;
  CmuFc_12->GCR = _8;

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function Clock_Ip_DisableCmuFcFceRefCntLfrefHfref (Clock_Ip_DisableCmuFcFceRefCntLfrefHfref, funcdef_no=4, decl_uid=6571, cgraph_uid=5, symbol_order=4)

Modification phase of node Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/4
Clock_Ip_DisableCmuFcFceRefCntLfrefHfref (Clock_Ip_NameType Name)
{
  uint32 FrequencyCheckStatus;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  boolean TimeoutOccurred;
  struct Clock_Ip_ClockMonitorType * const CmuFc;
  unsigned char _1;
  int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int TimeoutTicks.1_6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;

  <bb 2> [local count: 348071305]:
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_au8ClockFeatures[Name_20(D)][8];
  _2 = (int) _1;
  # DEBUG D#4 => &Clock_Ip_axCmuInfo[_2]
  # DEBUG CmuInformation => D#4
  # DEBUG BEGIN_STMT
  CmuFc_22 = MEM <const struct Clock_Ip_CmuInfoType[6]> [(const struct Clock_Ip_CmuInfoType *)&Clock_Ip_axCmuInfo][_2].CmuInstance;
  # DEBUG CmuFc => CmuFc_22
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01 ();
  # DEBUG BEGIN_STMT
  _3 = CmuFc_22->GCR;
  _4 = _3 & 1;
  if (_4 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 3> [local count: 114863530]:
  # DEBUG BEGIN_STMT
  Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _5 ={v} CmuFc_22->SR;
  FrequencyCheckStatus_27 = _5 & 16;
  # DEBUG FrequencyCheckStatus => FrequencyCheckStatus_27
  # DEBUG BEGIN_STMT
  TimeoutTicks.1_6 = TimeoutTicks;
  TimeoutOccurred_29 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.1_6);
  # DEBUG TimeoutOccurred => TimeoutOccurred_29
  # DEBUG BEGIN_STMT
  if (FrequencyCheckStatus_27 == 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 5> [local count: 1014686026]:
  if (TimeoutOccurred_29 != 0)
    goto <bb 6>; [5.50%]
  else
    goto <bb 11>; [94.50%]

  <bb 11> [local count: 958878294]:
  goto <bb 4>; [100.00%]

  <bb 6> [local count: 114863531]:
  # TimeoutOccurred_21 = PHI <TimeoutOccurred_29(4), TimeoutOccurred_29(5)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_21 != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 37904965]:
  # DEBUG BEGIN_STMT
  Clock_Ip_ReportClockErrors (1, Name_20(D));
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 76958566]:
  # DEBUG BEGIN_STMT
  _7 = CmuFc_22->GCR;
  _8 = _7 & 4294967294;
  CmuFc_22->GCR = _8;
  # DEBUG BEGIN_STMT
  _9 = CmuFc_22->IER;
  _10 = _9 & 4294967280;
  CmuFc_22->IER = _10;
  # DEBUG BEGIN_STMT
  _11 ={v} CmuFc_22->SR;
  _12 = _11 | 3;
  CmuFc_22->SR ={v} _12;
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 233207775]:
  # DEBUG BEGIN_STMT
  _13 = CmuFc_22->IER;
  _14 = _13 & 4294967280;
  CmuFc_22->IER = _14;
  # DEBUG BEGIN_STMT
  _15 ={v} CmuFc_22->SR;
  _16 = _15 | 3;
  CmuFc_22->SR ={v} _16;

  <bb 10> [local count: 348071307]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01 ();
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return;

}



;; Function Clock_Ip_ResetCmuFcFceRefCntLfrefHfref (Clock_Ip_ResetCmuFcFceRefCntLfrefHfref, funcdef_no=5, decl_uid=6567, cgraph_uid=6, symbol_order=5)

Modification phase of node Clock_Ip_ResetCmuFcFceRefCntLfrefHfref/5
Clock_Ip_ResetCmuFcFceRefCntLfrefHfref (const struct Clock_Ip_CmuConfigType * Config)
{
  <unnamed type> _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_3(D)->Name;
  Clock_Ip_DisableCmuFcFceRefCntLfrefHfref (_1);
  return;

}



;; Function Clock_Ip_SetCmuFcFceRefCntLfrefHfref (Clock_Ip_SetCmuFcFceRefCntLfrefHfref, funcdef_no=6, decl_uid=6569, cgraph_uid=7, symbol_order=6)

Modification phase of node Clock_Ip_SetCmuFcFceRefCntLfrefHfref/6
Clock_Ip_SetCmuFcFceRefCntLfrefHfref (const struct Clock_Ip_CmuConfigType * Config)
{
  uint32 DividerResult;
  uint32 DivideBy;
  uint32 Cmp2;
  uint32 Cmp1;
  uint32 LfRef;
  uint32 HfRef;
  uint32 RefCount;
  uint32 BusClk;
  uint32 MonitoredClk;
  uint32 ReferenceClk;
  static uint32 Hash[6];
  struct Clock_Ip_ClockMonitorType * const CmuFc;
  <unnamed type> _1;
  unsigned char _2;
  int _3;
  long unsigned int _4;
  unsigned char _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  <unnamed type> _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  <unnamed type> _17;
  long unsigned int _18;
  long unsigned int _19;
  long unsigned int _20;
  long unsigned int _21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;
  long unsigned int _25;
  long unsigned int _26;
  long unsigned int _27;
  long unsigned int _28;
  long unsigned int _29;
  long unsigned int _30;
  long unsigned int _31;
  long unsigned int _32;
  long unsigned int _33;
  long unsigned int _42;
  long unsigned int _43;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_40(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][8];
  _3 = (int) _2;
  # DEBUG D#5 => &Clock_Ip_axCmuInfo[_3]
  # DEBUG CmuInformation => D#5
  # DEBUG BEGIN_STMT
  CmuFc_41 = MEM <const struct Clock_Ip_CmuInfoType[6]> [(const struct Clock_Ip_CmuInfoType *)&Clock_Ip_axCmuInfo][_3].CmuInstance;
  # DEBUG CmuFc => CmuFc_41
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ReferenceClk => 0
  # DEBUG BEGIN_STMT
  # DEBUG MonitoredClk => 0
  # DEBUG BEGIN_STMT
  # DEBUG BusClk => 0
  # DEBUG BEGIN_STMT
  # DEBUG RefCount => 0
  # DEBUG BEGIN_STMT
  # DEBUG HfRef => 0
  # DEBUG BEGIN_STMT
  # DEBUG LfRef => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = Hash[_3];
  _5 = Config_40(D)->Enable;
  _6 = (long unsigned int) _5;
  _7 = Config_40(D)->Interrupt;
  _8 = _6 ^ _7;
  _9 = Config_40(D)->MonitoredClockFrequency;
  _10 = _8 ^ _9;
  _11 = _1 ^ _10;
  if (_4 != _11)
    goto <bb 3>; [66.00%]
  else
    goto <bb 13>; [34.00%]

  <bb 3> [local count: 708669601]:
  # DEBUG BEGIN_STMT
  Hash[_3] = _11;
  # DEBUG BEGIN_STMT
  _12 = MEM <const struct Clock_Ip_CmuInfoType[6]> [(const struct Clock_Ip_CmuInfoType *)&Clock_Ip_axCmuInfo][_3].Reference;
  switch (_12) <default: <L16> [25.00%], case 0: <L1> [25.00%], case 2: <L3> [25.00%], case 4: <L2> [25.00%]>

  <bb 4> [local count: 177167400]:
<L1>:
  # DEBUG BEGIN_STMT
  _13 = Clock_Ip_GetConfiguredFrequencyValue (0);
  ReferenceClk_50 = _13 / 1000;
  # DEBUG ReferenceClk => ReferenceClk_50
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 177167400]:
<L2>:
  # DEBUG BEGIN_STMT
  _14 = Clock_Ip_GetConfiguredFrequencyValue (4);
  ReferenceClk_46 = _14 / 1000;
  # DEBUG ReferenceClk => ReferenceClk_46
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 177167400]:
<L3>:
  # DEBUG BEGIN_STMT
  _15 = Clock_Ip_GetConfiguredFrequencyValue (2);
  ReferenceClk_48 = _15 / 1000;
  # DEBUG ReferenceClk => ReferenceClk_48
  # DEBUG BEGIN_STMT

  <bb 7> [local count: 708669601]:
  # ReferenceClk_34 = PHI <ReferenceClk_50(4), ReferenceClk_46(5), ReferenceClk_48(6), 0(3)>
<L16>:
  # DEBUG ReferenceClk => ReferenceClk_34
  # DEBUG BEGIN_STMT
  _16 = Config_40(D)->MonitoredClockFrequency;
  MonitoredClk_51 = _16 / 1000;
  # DEBUG MonitoredClk => MonitoredClk_51
  # DEBUG BEGIN_STMT
  _17 = MEM <const struct Clock_Ip_CmuInfoType[6]> [(const struct Clock_Ip_CmuInfoType *)&Clock_Ip_axCmuInfo][_3].Bus;
  if (_17 == 15)
    goto <bb 8>; [20.24%]
  else
    goto <bb 9>; [79.76%]

  <bb 8> [local count: 143434726]:
<L6>:
  # DEBUG BEGIN_STMT
  _18 = Clock_Ip_GetConfiguredFrequencyValue (15);
  BusClk_53 = _18 / 1000;
  # DEBUG BusClk => BusClk_53
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 708669601]:
  # BusClk_35 = PHI <BusClk_53(8), 0(7)>
  # DEBUG BusClk => BusClk_35
  # DEBUG BEGIN_STMT
  if (ReferenceClk_34 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 10> [local count: 354334800]:
  if (BusClk_35 != 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 11> [local count: 177167400]:
  if (_16 > 999)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 88583700]:
  # DEBUG BEGIN_STMT
  _19 = ReferenceClk_34 * 3;
  _20 = _19 / BusClk_35;
  Cmp1_54 = _20 + 1;
  # DEBUG Cmp1 => Cmp1_54
  # DEBUG BEGIN_STMT
  _21 = ReferenceClk_34 * 5;
  _22 = _21 / MonitoredClk_51;
  Cmp2_55 = _22 + 9;
  # DEBUG Cmp2 => Cmp2_55
  # DEBUG BEGIN_STMT
  RefCount_56 = MAX_EXPR <Cmp1_54, Cmp2_55>;
  # DEBUG RefCount => RefCount_56
  # DEBUG BEGIN_STMT
  _23 = MonitoredClk_51 * RefCount_56;
  HfRef_57 = _23 * 1011;
  # DEBUG HfRef => HfRef_57
  # DEBUG BEGIN_STMT
  DivideBy_58 = ReferenceClk_34 * 967;
  # DEBUG DivideBy => DivideBy_58
  # DEBUG BEGIN_STMT
  DividerResult_59 = HfRef_57 / DivideBy_58;
  # DEBUG DividerResult => DividerResult_59
  # DEBUG BEGIN_STMT
  _42 = HfRef_57 % DivideBy_58;
  # DEBUG ModuloValue => _42
  # DEBUG BEGIN_STMT
  _24 = DividerResult_59 * 10;
  _25 = _42 * 10;
  _26 = _25 / DivideBy_58;
  _27 = _24 + _26;
  HfRef_60 = _27 + 4;
  # DEBUG HfRef => HfRef_60
  # DEBUG BEGIN_STMT
  LfRef_61 = _23 * 989;
  # DEBUG LfRef => LfRef_61
  # DEBUG BEGIN_STMT
  DivideBy_62 = ReferenceClk_34 * 1033;
  # DEBUG DivideBy => DivideBy_62
  # DEBUG BEGIN_STMT
  DividerResult_63 = LfRef_61 / DivideBy_62;
  # DEBUG DividerResult => DividerResult_63
  # DEBUG BEGIN_STMT
  _43 = LfRef_61 % DivideBy_62;
  # DEBUG ModuloValue => _43
  # DEBUG BEGIN_STMT
  _28 = DividerResult_63 * 10;
  _29 = _43 * 10;
  _30 = _29 / DivideBy_62;
  _31 = _28 + _30;
  LfRef_64 = _31 + 4294967293;
  # DEBUG LfRef => LfRef_64
  # DEBUG BEGIN_STMT
  _32 = RefCount_56 * 10;
  CmuFc_41->RCCR = _32;
  # DEBUG BEGIN_STMT
  CmuFc_41->HTCR = HfRef_60;
  # DEBUG BEGIN_STMT
  CmuFc_41->LTCR = LfRef_64;

  <bb 13> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _33 = Config_40(D)->Interrupt;
  CmuFc_41->IER = _33;
  return;

}



;; Function Clock_Ip_ClockMonitorEmpty_ClearStatus (Clock_Ip_ClockMonitorEmpty_ClearStatus, funcdef_no=13, decl_uid=6563, cgraph_uid=3, symbol_order=2)

Modification phase of node Clock_Ip_ClockMonitorEmpty_ClearStatus/2
Clock_Ip_ClockMonitorEmpty_ClearStatus (Clock_Ip_NameType Name)
{
  <bb 2> [local count: 1073741824]:
  Clock_Ip_ClockMonitorEmpty_Disable (Name_1(D)); [tail call]
  return;

}



;; Function Clock_Ip_CMU_GetInterruptStatus (Clock_Ip_CMU_GetInterruptStatus, funcdef_no=10, decl_uid=6530, cgraph_uid=11, symbol_order=10)

Modification phase of node Clock_Ip_CMU_GetInterruptStatus/10
Clock_Ip_CMU_GetInterruptStatus (uint8 IndexCmu)
{
  uint32 CmuIsrValue;
  int _1;
  struct Clock_Ip_ClockMonitorType * _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) IndexCmu_4(D);
  _2 = Clock_Ip_apxCmu[_1];
  _3 ={v} _2->SR;
  CmuIsrValue_6 = _3 & 3;
  # DEBUG CmuIsrValue => CmuIsrValue_6
  # DEBUG BEGIN_STMT
  return CmuIsrValue_6;

}



;; Function Clock_Ip_CMU_ClockFailInt (Clock_Ip_CMU_ClockFailInt, funcdef_no=11, decl_uid=6532, cgraph_uid=12, symbol_order=11)

Modification phase of node Clock_Ip_CMU_ClockFailInt/11
Clock_Ip_CMU_ClockFailInt ()
{
  uint32 IndexCmu;
  uint32 CmuIsrValue;
  struct Clock_Ip_ClockMonitorType * _1;
  long unsigned int _2;
  const struct Clock_Ip_ClockConfigType * Clock_Ip_pxConfig.0_3;
  long unsigned int _4;
  <unnamed type> _5;

  <bb 2> [local count: 214748366]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG IndexCmu => 0
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 858993457]:
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_apxCmu[IndexCmu_6];
  _2 ={v} _1->SR;
  CmuIsrValue_10 = _2 & 3;
  # DEBUG CmuIsrValue => CmuIsrValue_10
  # DEBUG BEGIN_STMT
  _1->SR ={v} CmuIsrValue_10;
  # DEBUG BEGIN_STMT
  Clock_Ip_pxConfig.0_3 = Clock_Ip_pxConfig;
  if (Clock_Ip_pxConfig.0_3 != 0B)
    goto <bb 4>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 4> [local count: 601295423]:
  # DEBUG BEGIN_STMT
  _4 = _1->IER;
  # DEBUG CmuIerValue => _4 & 3
  # DEBUG BEGIN_STMT
  CmuIsrValue_12 = _4 & CmuIsrValue_10;
  # DEBUG CmuIsrValue => CmuIsrValue_12
  # DEBUG BEGIN_STMT
  if (CmuIsrValue_12 != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 198427488]:
  # DEBUG BEGIN_STMT
  _5 = Clock_Ip_aeCmuNames[IndexCmu_6];
  Clock_Ip_ReportClockErrors (0, _5);

  <bb 6> [local count: 858993458]:
  # DEBUG BEGIN_STMT
  IndexCmu_14 = IndexCmu_6 + 1;
  # DEBUG IndexCmu => IndexCmu_14

  <bb 7> [local count: 1073741824]:
  # IndexCmu_6 = PHI <0(2), IndexCmu_14(6)>
  # DEBUG IndexCmu => IndexCmu_6
  # DEBUG BEGIN_STMT
  if (IndexCmu_6 != 4)
    goto <bb 3>; [80.00%]
  else
    goto <bb 8>; [20.00%]

  <bb 8> [local count: 214748368]:
  return;

}


