Creating summary for Sema42_Ip_GetResetGateIndex/18:
  Descriptor for parameter 0 u32InstanceD.5844
    (locally) unused
    not a candidate for splitting


Creating summary for Sema42_Ip_GetResetGateBusMaster/17:
  Descriptor for parameter 0 u32InstanceD.5841
    (locally) unused
    not a candidate for splitting


Creating summary for Sema42_Ip_IsResetGateStateIdle/16:
  Descriptor for parameter 0 u32InstanceD.5836
    (locally) unused
    not a candidate for splitting


Creating summary for Sema42_Ip_GetGateLocker/15:
  Descriptor for parameter 0 u32InstanceD.5832
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1 u8GateIndexD.5833
    (locally) unused
    not a candidate for splitting


Creating summary for Sema42_Ip_ResetGate/14:
  Descriptor for parameter 0 u32InstanceD.5828
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1 u8GateIndexD.5829
    (locally) unused
    not a candidate for splitting


Creating summary for Sema42_Ip_UnlockGate/13:
  Descriptor for parameter 0 u32InstanceD.5822
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1 u8GateIndexD.5823
    (locally) unused
    not a candidate for splitting


Creating summary for Sema42_Ip_LockGate/12:
  Descriptor for parameter 0 u32InstanceD.5815
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1 u8GateIndexD.5816
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 2 u8DomainIdD.5817
    not a candidate for splitting


Creating summary for Sema42_Ip_Init/11:
  Descriptor for parameter 0 u32InstanceD.5812
    (locally) unused
    not a candidate for splitting


Creating summary for Sema42_Ip_GetResetGateIndex_Privileged/10:
  Descriptor for parameter 0 u32InstanceD.5807
    (locally) unused
    not a candidate for splitting


Creating summary for Sema42_Ip_GetResetGateBusMaster_Privileged/9:
  Descriptor for parameter 0 u32InstanceD.5802
    (locally) unused
    not a candidate for splitting


Creating summary for Sema42_Ip_IsResetGateStateIdle_Privileged/8:
  Descriptor for parameter 0 u32InstanceD.5797
    (locally) unused
    not a candidate for splitting


Creating summary for Sema42_Ip_GetGateLocker_Privileged/7:
  Descriptor for parameter 0 u32InstanceD.5791
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1 u8GateIndexD.5792
    not a candidate for splitting


Creating summary for Sema42_Ip_ResetGate_Privileged/6:
  Descriptor for parameter 0 u32InstanceD.5786
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1 u8GateIndexD.5787
    not a candidate for splitting


Creating summary for Sema42_Ip_UnlockGate_Privileged/5:
  Descriptor for parameter 0 u32InstanceD.5780
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1 u8GateIndexD.5781
    not a candidate for splitting


Creating summary for Sema42_Ip_LockGate_Privileged/4:
  Descriptor for parameter 0 u32InstanceD.5773
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1 u8GateIndexD.5774
    not a candidate for splitting
  Descriptor for parameter 2 u8DomainIdD.5775
    not a candidate for splitting


Creating summary for Sema42_Ip_Init_Privileged/3:
  Descriptor for parameter 0 u32InstanceD.5769
    (locally) unused
    not a candidate for splitting



========== IPA-SRA IPA stage ==========

Summary for node Sema42_Ip_GetResetGateIndex/18:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting

  Summary for edge Sema42_Ip_GetResetGateIndex/18->Sema42_Ip_GetResetGateIndex_Privileged/10:
    return value used only to compute caller return value
    Parameter 0:
      Scalar param sources: 0

Summary for node Sema42_Ip_GetResetGateBusMaster/17:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting

  Summary for edge Sema42_Ip_GetResetGateBusMaster/17->Sema42_Ip_GetResetGateBusMaster_Privileged/9:
    return value used only to compute caller return value
    Parameter 0:
      Scalar param sources: 0

Summary for node Sema42_Ip_IsResetGateStateIdle/16:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting


Summary for node Sema42_Ip_GetGateLocker/15:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1:
    (locally) unused
    not a candidate for splitting

  Summary for edge Sema42_Ip_GetGateLocker/15->Sema42_Ip_GetGateLocker_Privileged/7:
    return value used only to compute caller return value
    Parameter 0:
      Scalar param sources: 0
    Parameter 1:
      Scalar param sources: 1

Summary for node Sema42_Ip_ResetGate/14:
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1:
    (locally) unused
    not a candidate for splitting

  Summary for edge Sema42_Ip_ResetGate/14->Sema42_Ip_ResetGate_Privileged/6:
    return value ignored
    Parameter 0:
      Scalar param sources: 0
    Parameter 1:
      Scalar param sources: 1

Summary for node Sema42_Ip_UnlockGate/13:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1:
    (locally) unused
    not a candidate for splitting

  Summary for edge Sema42_Ip_UnlockGate/13->Sema42_Ip_UnlockGate_Privileged/5:
    Parameter 0:
      Scalar param sources: 0
    Parameter 1:
      Scalar param sources: 1

Summary for node Sema42_Ip_LockGate/12:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting

  Summary for edge Sema42_Ip_LockGate/12->Sema42_Ip_LockGate_Privileged/4:
    Parameter 0:
      Scalar param sources: 0
    Parameter 1:
      Scalar param sources: 1
    Parameter 2:

Summary for node Sema42_Ip_Init/11:
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting


Summary for node Sema42_Ip_GetResetGateIndex_Privileged/10:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting


Summary for node Sema42_Ip_GetResetGateBusMaster_Privileged/9:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting


Summary for node Sema42_Ip_IsResetGateStateIdle_Privileged/8:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting


Summary for node Sema42_Ip_GetGateLocker_Privileged/7:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting


Summary for node Sema42_Ip_ResetGate_Privileged/6:
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting


Summary for node Sema42_Ip_UnlockGate_Privileged/5:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting


Summary for node Sema42_Ip_LockGate_Privileged/4:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting


Summary for node Sema42_Ip_Init_Privileged/3:
  Not a candidate function


Function Sema42_Ip_Init/11 disqualified because it cannot be made local.
Function Sema42_Ip_LockGate_Privileged/4 disqualified because it cannot be made local.
Function Sema42_Ip_UnlockGate_Privileged/5 disqualified because it cannot be made local.
Function Sema42_Ip_ResetGate_Privileged/6 disqualified because it cannot be made local.
Function Sema42_Ip_GetGateLocker_Privileged/7 disqualified because it cannot be made local.
Function Sema42_Ip_IsResetGateStateIdle_Privileged/8 disqualified because it cannot be made local.
Function Sema42_Ip_GetResetGateBusMaster_Privileged/9 disqualified because it cannot be made local.
Function Sema42_Ip_GetResetGateIndex_Privileged/10 disqualified because it cannot be made local.
Function Sema42_Ip_LockGate/12 disqualified because it cannot be made local.
Function Sema42_Ip_UnlockGate/13 disqualified because it cannot be made local.
Function Sema42_Ip_ResetGate/14 disqualified because it cannot be made local.
Function Sema42_Ip_GetGateLocker/15 disqualified because it cannot be made local.
Function Sema42_Ip_IsResetGateStateIdle/16 disqualified because it cannot be made local.
Function Sema42_Ip_GetResetGateBusMaster/17 disqualified because it cannot be made local.
Function Sema42_Ip_GetResetGateIndex/18 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Sema42_Ip_GetResetGateIndex/18 (Sema42_Ip_GetResetGateIndex) @061bc2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sema42_Ip_GetResetGateIndex_Privileged/10 (1073741824 (estimated locally),1.00 per call) 
Sema42_Ip_GetResetGateBusMaster/17 (Sema42_Ip_GetResetGateBusMaster) @061bcee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sema42_Ip_GetResetGateBusMaster_Privileged/9 (1073741824 (estimated locally),1.00 per call) 
Sema42_Ip_IsResetGateStateIdle/16 (Sema42_Ip_IsResetGateStateIdle) @061bcc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Sema42_Ip_GetGateLocker/15 (Sema42_Ip_GetGateLocker) @061bc9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sema42_Ip_GetGateLocker_Privileged/7 (1073741824 (estimated locally),1.00 per call) 
Sema42_Ip_ResetGate/14 (Sema42_Ip_ResetGate) @061bc700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sema42_Ip_ResetGate_Privileged/6 (1073741824 (estimated locally),1.00 per call) 
Sema42_Ip_UnlockGate/13 (Sema42_Ip_UnlockGate) @061bc460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sema42_Ip_UnlockGate_Privileged/5 (1073741824 (estimated locally),1.00 per call) 
Sema42_Ip_LockGate/12 (Sema42_Ip_LockGate) @061bc1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sema42_Ip_LockGate_Privileged/4 (1073741824 (estimated locally),1.00 per call) 
Sema42_Ip_Init/11 (Sema42_Ip_Init) @061b5d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Sema42_Ip_Init_Privileged/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Sema42_Ip_GetResetGateIndex_Privileged/10 (Sema42_Ip_GetResetGateIndex_Privileged) @061b57e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: Sema42_Ip_GetResetGateIndex/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Sema42_Ip_GetResetGateBusMaster_Privileged/9 (Sema42_Ip_GetResetGateBusMaster_Privileged) @061b5ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Sema42_Ip_GetResetGateBusMaster/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Sema42_Ip_IsResetGateStateIdle_Privileged/8 (Sema42_Ip_IsResetGateStateIdle_Privileged) @061b5c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Sema42_Ip_GetGateLocker_Privileged/7 (Sema42_Ip_GetGateLocker_Privileged) @061b59a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: Sema42_Ip_GetGateLocker/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Sema42_Ip_ResetGate_Privileged/6 (Sema42_Ip_ResetGate_Privileged) @061b5700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Sema42_Ip_ResetGate/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Sema42_Ip_UnlockGate_Privileged/5 (Sema42_Ip_UnlockGate_Privileged) @061b50e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Sema42_Ip_UnlockGate/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Sema42_Ip_LockGate_Privileged/4 (Sema42_Ip_LockGate_Privileged) @06092c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Sema42_Ip_LockGate/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Sema42_Ip_Init_Privileged/3 (Sema42_Ip_Init_Privileged) @06092e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Sema42_Ip_Init/11 (1073741824 (estimated locally),1.00 per call) 
Sema42_Ip_GetResetGateIndex (const uint32 u32Instance)
{
  uint8 _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = Sema42_Ip_GetResetGateIndex_Privileged (u32Instance_2(D));
  return _4;

}


Sema42_Ip_GetResetGateBusMaster (const uint32 u32Instance)
{
  uint8 _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = Sema42_Ip_GetResetGateBusMaster_Privileged (u32Instance_2(D));
  return _4;

}


Sema42_Ip_IsResetGateStateIdle (const uint32 u32Instance)
{
  uint8 gateStatus;
  boolean result;
  short unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  unsigned char _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u32Instance => u32Instance_3(D)
  # DEBUG INLINE_ENTRY Sema42_Ip_IsResetGateStateIdle_Privileged
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG base => 1078329344B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(const struct SEMA42_Type *)1078329344B].RSTGT.R;
  _5 = (unsigned int) _4;
  _6 = _5 >> 12;
  _7 = (unsigned char) _6;
  gateStatus_8 = _7 & 3;
  # DEBUG gateStatus => gateStatus_8
  # DEBUG BEGIN_STMT
  # DEBUG u32Instance => NULL
  # DEBUG gateStatus => NULL
  # DEBUG gateStatus => (uint32) gateStatus_8
  # DEBUG BEGIN_STMT
  if (gateStatus_8 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1

  <bb 4> [local count: 1073741824]:
  # result_1 = PHI <0(2), 1(3)>
  # DEBUG result => result_1
  # DEBUG BEGIN_STMT
  return result_1;

}


Sema42_Ip_GetGateLocker (const uint32 u32Instance, const uint8 u8GateIndex)
{
  uint8 _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _5 = Sema42_Ip_GetGateLocker_Privileged (u32Instance_2(D), u8GateIndex_3(D));
  return _5;

}


Sema42_Ip_ResetGate (const uint32 u32Instance, const uint8 u8GateIndex)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Sema42_Ip_ResetGate_Privileged (u32Instance_2(D), u8GateIndex_3(D));
  return;

}


Sema42_Ip_UnlockGate (const uint32 u32Instance, const uint8 u8GateIndex)
{
  Sema42_Ip_StatusType stat;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Sema42_Ip_UnlockGate_Privileged (u32Instance_4(D), u8GateIndex_5(D));
  # DEBUG gateStatus => (uint32) _1
  # DEBUG BEGIN_STMT
  if (_1 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG stat => 0

  <bb 4> [local count: 1073741824]:
  # stat_2 = PHI <1(2), 0(3)>
  # DEBUG stat => stat_2
  # DEBUG BEGIN_STMT
  return stat_2;

}


Sema42_Ip_LockGate (const uint32 u32Instance, const uint8 u8GateIndex, uint8 u8DomainId)
{
  uint32 gateStatus;
  Sema42_Ip_StatusType stat;
  unsigned char _1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Sema42_Ip_LockGate_Privileged (u32Instance_6(D), u8GateIndex_7(D), u8DomainId_8(D));
  gateStatus_10 = (uint32) _1;
  # DEBUG gateStatus => gateStatus_10
  # DEBUG BEGIN_STMT
  if (gateStatus_10 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  _2 = (long unsigned int) u8DomainId_8(D);
  _3 = _2 + 1;
  if (_3 != gateStatus_10)
    goto <bb 6>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 4> [local count: 719407025]:
  if (gateStatus_10 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 359703512]:
  # DEBUG BEGIN_STMT
  # DEBUG stat => 0

  <bb 6> [local count: 1073741824]:
  # stat_4 = PHI <1(4), 0(5), 1(3)>
  # DEBUG stat => stat_4
  # DEBUG BEGIN_STMT
  return stat_4;

}


Sema42_Ip_Init (const uint32 u32Instance)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32Instance => u32Instance_2(D)
  # DEBUG INLINE_ENTRY Sema42_Ip_Init_Privileged
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG base => 1078329344B
  # DEBUG BEGIN_STMT
  # DEBUG base => 1078329344B
  # DEBUG INLINE_ENTRY Sema42_Ip_ResetAllGates
  # DEBUG BEGIN_STMT
  MEM[(struct SEMA42_Type *)1078329344B].RSTGT.W ={v} 57856;
  # DEBUG BEGIN_STMT
  MEM[(struct SEMA42_Type *)1078329344B].RSTGT.W ={v} 7488;
  # DEBUG base => NULL
  # DEBUG u32Instance => NULL
  return;

}


Sema42_Ip_GetResetGateIndex_Privileged (const uint32 u32Instance)
{
  uint8 ResetGate;
  short unsigned int _1;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG base => 1078329344B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(const struct SEMA42_Type *)1078329344B].RSTGT.R;
  ResetGate_4 = (uint8) _1;
  # DEBUG ResetGate => ResetGate_4
  # DEBUG BEGIN_STMT
  if (ResetGate_4 > 63)
    goto <bb 5>; [35.00%]
  else
    goto <bb 3>; [65.00%]

  <bb 3> [local count: 697932184]:
  # DEBUG BEGIN_STMT
  if (ResetGate_4 > 15)
    goto <bb 4>; [35.00%]
  else
    goto <bb 5>; [65.00%]

  <bb 4> [local count: 244276265]:
  # DEBUG BEGIN_STMT
  # DEBUG ResetGate => 255

  <bb 5> [local count: 1073741824]:
  # ResetGate_2 = PHI <64(2), ResetGate_4(3), 255(4)>
  # DEBUG ResetGate => ResetGate_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ResetGate_2;

}


Sema42_Ip_GetResetGateBusMaster_Privileged (const uint32 u32Instance)
{
  uint8 DomainNumber;
  short unsigned int _1;
  unsigned int _2;
  unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG base => 1078329344B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(const struct SEMA42_Type *)1078329344B].RSTGT.R;
  _2 = (unsigned int) _1;
  _3 = _2 >> 8;
  _4 = (unsigned char) _3;
  DomainNumber_7 = _4 & 15;
  # DEBUG DomainNumber => DomainNumber_7
  # DEBUG BEGIN_STMT
  if (DomainNumber_7 <= 2)
    goto <bb 4>; [65.00%]
  else
    goto <bb 3>; [35.00%]

  <bb 3> [local count: 375809640]:
  # DEBUG BEGIN_STMT
  # DEBUG DomainNumber => 255

  <bb 4> [local count: 1073741824]:
  # DomainNumber_5 = PHI <DomainNumber_7(2), 255(3)>
  # DEBUG DomainNumber => DomainNumber_5
  # DEBUG BEGIN_STMT
  return DomainNumber_5;

}


Sema42_Ip_IsResetGateStateIdle_Privileged (const uint32 u32Instance)
{
  uint8 gateStatus;
  short unsigned int _1;
  unsigned int _2;
  unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG base => 1078329344B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(const struct SEMA42_Type *)1078329344B].RSTGT.R;
  _2 = (unsigned int) _1;
  _3 = _2 >> 12;
  _4 = (unsigned char) _3;
  gateStatus_6 = _4 & 3;
  # DEBUG gateStatus => gateStatus_6
  # DEBUG BEGIN_STMT
  return gateStatus_6;

}


Sema42_Ip_GetGateLocker_Privileged (const uint32 u32Instance, const uint8 u8GateIndex)
{
  uint8 DomainLocker;
  unsigned char _1;
  int _2;
  unsigned char _3;
  unsigned char _5;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG base => 1078329344B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = u8GateIndex_6(D) ^ 3;
  _2 = (int) _1;
  _3 ={v} MEM[(const struct SEMA42_Type *)1078329344B].GATE[_2];
  DomainLocker_8 = _3 & 15;
  # DEBUG DomainLocker => DomainLocker_8
  # DEBUG BEGIN_STMT
  _5 = _3 & 12;
  if (_5 != 0)
    goto <bb 5>; [35.00%]
  else
    goto <bb 3>; [65.00%]

  <bb 3> [local count: 697932184]:
  # DEBUG BEGIN_STMT
  if (DomainLocker_8 != 0)
    goto <bb 4>; [65.00%]
  else
    goto <bb 5>; [35.00%]

  <bb 4> [local count: 453655918]:
  # DEBUG BEGIN_STMT
  DomainLocker_9 = DomainLocker_8 + 255;
  # DEBUG DomainLocker => DomainLocker_9

  <bb 5> [local count: 1073741824]:
  # DomainLocker_4 = PHI <255(2), DomainLocker_9(4), 255(3)>
  # DEBUG DomainLocker => DomainLocker_4
  # DEBUG BEGIN_STMT
  return DomainLocker_4;

}


Sema42_Ip_ResetGate_Privileged (const uint32 u32Instance, const uint8 u8GateIndex)
{
  short unsigned int _1;
  short unsigned int _2;
  short unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG base => 1078329344B
  # DEBUG BEGIN_STMT
  _1 = (short unsigned int) u8GateIndex_4(D);
  _2 = _1 | 57856;
  MEM[(struct SEMA42_Type *)1078329344B].RSTGT.W ={v} _2;
  # DEBUG BEGIN_STMT
  _3 = _1 | 7424;
  MEM[(struct SEMA42_Type *)1078329344B].RSTGT.W ={v} _3;
  return;

}


Sema42_Ip_UnlockGate_Privileged (const uint32 u32Instance, const uint8 u8GateIndex)
{
  uint8 gateStatus;
  unsigned char _1;
  int _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG base => 1078329344B
  # DEBUG BEGIN_STMT
  _1 = u8GateIndex_4(D) ^ 3;
  _2 = (int) _1;
  MEM[(struct SEMA42_Type *)1078329344B].GATE[_2] ={v} 0;
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct SEMA42_Type *)1078329344B].GATE[_2];
  gateStatus_7 = _3 & 15;
  # DEBUG gateStatus => gateStatus_7
  # DEBUG BEGIN_STMT
  return gateStatus_7;

}


Sema42_Ip_LockGate_Privileged (const uint32 u32Instance, const uint8 u8GateIndex, uint8 u8DomainId)
{
  uint8 gateStatus;
  unsigned char _1;
  int _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  unsigned char _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG base => 1078329344B
  # DEBUG BEGIN_STMT
  _1 = u8GateIndex_9(D) ^ 3;
  _2 = (int) _1;
  _3 ={v} MEM[(struct SEMA42_Type *)1078329344B].GATE[_2];
  gateStatus_11 = _3 & 15;
  # DEBUG gateStatus => gateStatus_11
  # DEBUG BEGIN_STMT
  if (gateStatus_11 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 = u8DomainId_12(D) + 1;
  _5 = _4 & 15;
  MEM[(struct SEMA42_Type *)1078329344B].GATE[_2] ={v} _5;
  # DEBUG BEGIN_STMT
  _6 ={v} MEM[(struct SEMA42_Type *)1078329344B].GATE[_2];
  gateStatus_14 = _6 & 15;
  # DEBUG gateStatus => gateStatus_14

  <bb 4> [local count: 1073741824]:
  # gateStatus_7 = PHI <gateStatus_11(2), gateStatus_14(3)>
  # DEBUG gateStatus => gateStatus_7
  # DEBUG BEGIN_STMT
  return gateStatus_7;

}


Sema42_Ip_Init_Privileged (const uint32 u32Instance)
{
  <bb 2> [local count: 1073741824]:
  Sema42_Ip_Init (u32Instance_2(D)); [tail call]
  return;

}


