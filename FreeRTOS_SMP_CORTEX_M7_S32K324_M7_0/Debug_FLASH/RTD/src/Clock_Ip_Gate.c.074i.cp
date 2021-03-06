
IPA constant propagation start:
Determining dynamic type for call: Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest (&Config);
  Starting walk at: Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest (&Config);
  instance pointer: &Config  Outer instance pointer: Config offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_ReportClockErrors/13:
  Jump functions of caller  Clock_Ip_TimeoutExpired/12:
  Jump functions of caller  Clock_Ip_StartTimeout/11:
  Jump functions of caller  Clock_Ip_McMeEnterKey/10:
  Jump functions of caller  Clock_Ip_ClockUpdateGateMcMePartitionCollectionClockRequest/3:
    callsite  Clock_Ip_ClockUpdateGateMcMePartitionCollectionClockRequest/3 -> Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  [1, -1]
  Jump functions of caller  Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2:
    callsite  Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 -> Clock_Ip_ReportClockErrors/13 : 
       no arg info
    callsite  Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 -> Clock_Ip_TimeoutExpired/12 : 
       no arg info
    callsite  Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 -> Clock_Ip_StartTimeout/11 : 
       no arg info
    callsite  Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 -> Clock_Ip_McMeEnterKey/10 : 
       no arg info
    callsite  Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 -> Clock_Ip_ReportClockErrors/13 : 
       no arg info
    callsite  Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 -> Clock_Ip_TimeoutExpired/12 : 
       no arg info
    callsite  Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 -> Clock_Ip_StartTimeout/11 : 
       no arg info
    callsite  Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 -> Clock_Ip_McMeEnterKey/10 : 
       no arg info
  Jump functions of caller  Clock_Ip_ClockUpdateGateEmpty/1:
  Jump functions of caller  Clock_Ip_ClockSetGateEmpty/0:

 Propagating constants:

Not considering Clock_Ip_ClockUpdateGateMcMePartitionCollectionClockRequest/3 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockUpdateGateEmpty/1 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockSetGateEmpty/0 for cloning; -fipa-cp-clone disabled.

overall_size: 126
 - context independent values, size: 3, time_benefit: 2.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_ClockUpdateGateMcMePartitionCollectionClockRequest/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockUpdateGateEmpty/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockSetGateEmpty/0:
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

Clock_Ip_ReportClockErrors/13 (Clock_Ip_ReportClockErrors) @062ba8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 (37904965 (estimated locally),0.05 per call) Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 (37904965 (estimated locally),0.05 per call) 
  Calls: 
Clock_Ip_TimeoutExpired/12 (Clock_Ip_TimeoutExpired) @062ba7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 (1073741824 (estimated locally),1.54 per call) Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 (1073741824 (estimated locally),1.54 per call) 
  Calls: 
Clock_Ip_StartTimeout/11 (Clock_Ip_StartTimeout) @062ba700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 (114863530 (estimated locally),0.16 per call) Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 (114863530 (estimated locally),0.16 per call) 
  Calls: 
Clock_Ip_McMeEnterKey/10 (Clock_Ip_McMeEnterKey) @062ba620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 (114863530 (estimated locally),0.16 per call) Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 (114863530 (estimated locally),0.16 per call) 
  Calls: 
Clock_Ip_apxMcMeTriggerPartitions/9 (Clock_Ip_apxMcMeTriggerPartitions) @062be708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 (read) Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_apxMcMeSetPartitions/8 (Clock_Ip_apxMcMeSetPartitions) @062be6c0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 (read) Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_apxMcMeGetPartitions/7 (Clock_Ip_apxMcMeGetPartitions) @062be678
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 (read) Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axGateInfo/6 (Clock_Ip_axGateInfo) @062be630
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 (read) Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 (read) Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8ClockFeatures/5 (Clock_Ip_au8ClockFeatures) @062be5e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axGateCallbacks/4 (Clock_Ip_axGateCallbacks) @062b5bd0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_ClockSetGateEmpty/0 (addr) Clock_Ip_ClockUpdateGateEmpty/1 (addr) Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 (addr) Clock_Ip_ClockUpdateGateMcMePartitionCollectionClockRequest/3 (addr) 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_ClockUpdateGateMcMePartitionCollectionClockRequest/3 (Clock_Ip_ClockUpdateGateMcMePartitionCollectionClockRequest) @062afe00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axGateCallbacks/4 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2 (Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest) @062af8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/5 (read) Clock_Ip_axGateInfo/6 (read) Clock_Ip_axGateInfo/6 (read) Clock_Ip_axGateInfo/6 (read) Clock_Ip_apxMcMeGetPartitions/7 (read) Clock_Ip_apxMcMeSetPartitions/8 (read) Clock_Ip_apxMcMeTriggerPartitions/9 (read) Clock_Ip_apxMcMeGetPartitions/7 (read) Clock_Ip_apxMcMeSetPartitions/8 (read) Clock_Ip_apxMcMeTriggerPartitions/9 (read) 
  Referring: Clock_Ip_axGateCallbacks/4 (addr) 
  Availability: available
  Function flags: count:696142611 (estimated locally) body optimize_size
  Called by: Clock_Ip_ClockUpdateGateMcMePartitionCollectionClockRequest/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: Clock_Ip_ReportClockErrors/13 (37904965 (estimated locally),0.05 per call) Clock_Ip_TimeoutExpired/12 (1073741824 (estimated locally),1.54 per call) Clock_Ip_StartTimeout/11 (114863530 (estimated locally),0.16 per call) Clock_Ip_McMeEnterKey/10 (114863530 (estimated locally),0.16 per call) Clock_Ip_ReportClockErrors/13 (37904965 (estimated locally),0.05 per call) Clock_Ip_TimeoutExpired/12 (1073741824 (estimated locally),1.54 per call) Clock_Ip_StartTimeout/11 (114863530 (estimated locally),0.16 per call) Clock_Ip_McMeEnterKey/10 (114863530 (estimated locally),0.16 per call) 
Clock_Ip_ClockUpdateGateEmpty/1 (Clock_Ip_ClockUpdateGateEmpty) @062afd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axGateCallbacks/4 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_ClockSetGateEmpty/0 (Clock_Ip_ClockSetGateEmpty) @062afa80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axGateCallbacks/4 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Clock_Ip_ClockSetGateEmpty (Clock_Ip_ClockSetGateEmpty, funcdef_no=0, decl_uid=6547, cgraph_uid=1, symbol_order=0)

Modification phase of node Clock_Ip_ClockSetGateEmpty/0
Clock_Ip_ClockSetGateEmpty (const struct Clock_Ip_GateConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_ClockUpdateGateEmpty (Clock_Ip_ClockUpdateGateEmpty, funcdef_no=1, decl_uid=6550, cgraph_uid=2, symbol_order=1)

Modification phase of node Clock_Ip_ClockUpdateGateEmpty/1
Clock_Ip_ClockUpdateGateEmpty (Clock_Ip_NameType ClockName, boolean Gate)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest (Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest, funcdef_no=2, decl_uid=6552, cgraph_uid=3, symbol_order=2)

Modification phase of node Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest/2
Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest (const struct Clock_Ip_GateConfigType * Config)
{
  uint32 EnableRequest;
  uint32 Collection;
  uint32 Partition;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  boolean TimeoutOccurred;
  <unnamed type> _1;
  unsigned char _2;
  int _3;
  unsigned char _4;
  unsigned char _5;
  short unsigned int _6;
  const volatile struct Clock_Ip_McmePartitionGetType * _7;
  long unsigned int _8;
  long unsigned int _9;
  volatile struct Clock_Ip_McmePartitionSetType * _10;
  long unsigned int _11;
  long unsigned int _12;
  volatile struct Clock_Ip_McmePartitionTriggerType * _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int TimeoutTicks.0_18;
  long unsigned int _19;
  long unsigned int _20;
  <unnamed type> _21;
  const volatile struct Clock_Ip_McmePartitionGetType * _22;
  long unsigned int _23;
  long unsigned int _24;
  volatile struct Clock_Ip_McmePartitionSetType * _25;
  long unsigned int _26;
  long unsigned int _27;
  long unsigned int _29;
  volatile struct Clock_Ip_McmePartitionTriggerType * _30;
  long unsigned int _31;
  long unsigned int _33;
  long unsigned int _34;
  long unsigned int _35;
  long unsigned int TimeoutTicks.1_36;
  long unsigned int _37;
  long unsigned int _38;
  <unnamed type> _39;

  <bb 2> [local count: 696142611]:
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Config_44(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][6];
  _3 = (int) _2;
  # DEBUG D#1 => &Clock_Ip_axGateInfo[_3]
  # DEBUG GateInformation => D#1
  # DEBUG BEGIN_STMT
  _4 = MEM <const struct Clock_Ip_GateInfoType[105]> [(const struct Clock_Ip_GateInfoType *)&Clock_Ip_axGateInfo][_3].PartitionValue;
  Partition_45 = (uint32) _4;
  # DEBUG Partition => Partition_45
  # DEBUG BEGIN_STMT
  _5 = MEM <const struct Clock_Ip_GateInfoType[105]> [(const struct Clock_Ip_GateInfoType *)&Clock_Ip_axGateInfo][_3].ColectionValue;
  Collection_46 = (uint32) _5;
  # DEBUG Collection => Collection_46
  # DEBUG BEGIN_STMT
  EnableRequest_47 = MEM <const struct Clock_Ip_GateInfoType[105]> [(const struct Clock_Ip_GateInfoType *)&Clock_Ip_axGateInfo][_3].RequestValueMask;
  # DEBUG EnableRequest => EnableRequest_47
  # DEBUG BEGIN_STMT
  _6 = Config_44(D)->Enable;
  if (_6 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 3> [local count: 348071305]:
  # DEBUG BEGIN_STMT
  _7 = Clock_Ip_apxMcMeGetPartitions[Partition_45];
  _8 ={v} _7->PRTN_COFB_STAT[Collection_46];
  _9 = _8 & EnableRequest_47;
  if (_9 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 4> [local count: 114863530]:
  # DEBUG BEGIN_STMT
  _10 = Clock_Ip_apxMcMeSetPartitions[Partition_45];
  _11 ={v} _10->PRTN_COFB_CLKEN[Collection_46];
  _12 = _11 | EnableRequest_47;
  _10->PRTN_COFB_CLKEN[Collection_46] ={v} _12;
  # DEBUG BEGIN_STMT
  _13 = Clock_Ip_apxMcMeTriggerPartitions[Partition_45];
  _14 ={v} _13->PRTN_PCONF;
  _15 = _14 | 1;
  _13->PRTN_PCONF ={v} _15;
  # DEBUG BEGIN_STMT
  _16 ={v} _13->PRTN_PUPD;
  _17 = _16 | 1;
  _13->PRTN_PUPD ={v} _17;
  # DEBUG BEGIN_STMT
  Clock_Ip_McMeEnterKey ();
  # DEBUG BEGIN_STMT
  Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TimeoutTicks.0_18 = TimeoutTicks;
  TimeoutOccurred_62 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.0_18);
  # DEBUG TimeoutOccurred => TimeoutOccurred_62
  # DEBUG BEGIN_STMT
  _19 ={v} _7->PRTN_COFB_STAT[Collection_46];
  _20 = _19 & EnableRequest_47;
  if (_20 == 0)
    goto <bb 6>; [94.50%]
  else
    goto <bb 7>; [5.50%]

  <bb 6> [local count: 1014686026]:
  if (TimeoutOccurred_62 != 0)
    goto <bb 7>; [5.50%]
  else
    goto <bb 16>; [94.50%]

  <bb 16> [local count: 958878294]:
  goto <bb 5>; [100.00%]

  <bb 7> [local count: 114863531]:
  # TimeoutOccurred_32 = PHI <TimeoutOccurred_62(5), TimeoutOccurred_62(6)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_32 != 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 8> [local count: 37904965]:
  # DEBUG BEGIN_STMT
  _21 = Config_44(D)->Name;
  Clock_Ip_ReportClockErrors (1, _21);
  goto <bb 15>; [100.00%]

  <bb 9> [local count: 348071305]:
  # DEBUG BEGIN_STMT
  _22 = Clock_Ip_apxMcMeGetPartitions[Partition_45];
  _23 ={v} _22->PRTN_COFB_STAT[Collection_46];
  _24 = _23 & EnableRequest_47;
  if (_24 != 0)
    goto <bb 10>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 10> [local count: 114863530]:
  # DEBUG BEGIN_STMT
  _25 = Clock_Ip_apxMcMeSetPartitions[Partition_45];
  _26 ={v} _25->PRTN_COFB_CLKEN[Collection_46];
  _27 = ~EnableRequest_47;
  _29 = _26 & _27;
  _25->PRTN_COFB_CLKEN[Collection_46] ={v} _29;
  # DEBUG BEGIN_STMT
  _30 = Clock_Ip_apxMcMeTriggerPartitions[Partition_45];
  _31 ={v} _30->PRTN_PCONF;
  _33 = _31 | 1;
  _30->PRTN_PCONF ={v} _33;
  # DEBUG BEGIN_STMT
  _34 ={v} _30->PRTN_PUPD;
  _35 = _34 | 1;
  _30->PRTN_PUPD ={v} _35;
  # DEBUG BEGIN_STMT
  Clock_Ip_McMeEnterKey ();
  # DEBUG BEGIN_STMT
  Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 11> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TimeoutTicks.1_36 = TimeoutTicks;
  TimeoutOccurred_54 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.1_36);
  # DEBUG TimeoutOccurred => TimeoutOccurred_54
  # DEBUG BEGIN_STMT
  _37 ={v} _22->PRTN_COFB_STAT[Collection_46];
  _38 = _37 & EnableRequest_47;
  if (_38 != 0)
    goto <bb 12>; [94.50%]
  else
    goto <bb 13>; [5.50%]

  <bb 12> [local count: 1014686026]:
  if (TimeoutOccurred_54 != 0)
    goto <bb 13>; [5.50%]
  else
    goto <bb 17>; [94.50%]

  <bb 17> [local count: 958878294]:
  goto <bb 11>; [100.00%]

  <bb 13> [local count: 114863531]:
  # TimeoutOccurred_28 = PHI <TimeoutOccurred_54(11), TimeoutOccurred_54(12)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_28 != 0)
    goto <bb 14>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 14> [local count: 37904965]:
  # DEBUG BEGIN_STMT
  _39 = Config_44(D)->Name;
  Clock_Ip_ReportClockErrors (1, _39);

  <bb 15> [local count: 696142614]:
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return;

}



;; Function Clock_Ip_ClockUpdateGateMcMePartitionCollectionClockRequest (Clock_Ip_ClockUpdateGateMcMePartitionCollectionClockRequest, funcdef_no=3, decl_uid=6555, cgraph_uid=4, symbol_order=3)

Modification phase of node Clock_Ip_ClockUpdateGateMcMePartitionCollectionClockRequest/3
Clock_Ip_ClockUpdateGateMcMePartitionCollectionClockRequest (Clock_Ip_NameType ClockName, boolean Gate)
{
  struct Clock_Ip_GateConfigType Config;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Config.Name = ClockName_3(D);
  # DEBUG BEGIN_STMT
  if (Gate_5(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Config.Enable = 0;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Config.Enable = 1;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_ClockSetGateMcMePartitionCollectionClockRequest (&Config);
  Config ={v} {CLOBBER};
  return;

}


