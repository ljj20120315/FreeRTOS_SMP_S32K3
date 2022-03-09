
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Sema42_Ip_GetResetGateIndex/18:
    callsite  Sema42_Ip_GetResetGateIndex/18 -> Sema42_Ip_GetResetGateIndex_Privileged/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Sema42_Ip_GetResetGateBusMaster/17:
    callsite  Sema42_Ip_GetResetGateBusMaster/17 -> Sema42_Ip_GetResetGateBusMaster_Privileged/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Sema42_Ip_IsResetGateStateIdle/16:
  Jump functions of caller  Sema42_Ip_GetGateLocker/15:
    callsite  Sema42_Ip_GetGateLocker/15 -> Sema42_Ip_GetGateLocker_Privileged/7 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Sema42_Ip_ResetGate/14:
    callsite  Sema42_Ip_ResetGate/14 -> Sema42_Ip_ResetGate_Privileged/6 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Sema42_Ip_UnlockGate/13:
    callsite  Sema42_Ip_UnlockGate/13 -> Sema42_Ip_UnlockGate_Privileged/5 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Sema42_Ip_LockGate/12:
    callsite  Sema42_Ip_LockGate/12 -> Sema42_Ip_LockGate_Privileged/4 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Sema42_Ip_Init/11:
  Jump functions of caller  Sema42_Ip_GetResetGateIndex_Privileged/10:
  Jump functions of caller  Sema42_Ip_GetResetGateBusMaster_Privileged/9:
  Jump functions of caller  Sema42_Ip_IsResetGateStateIdle_Privileged/8:
  Jump functions of caller  Sema42_Ip_GetGateLocker_Privileged/7:
  Jump functions of caller  Sema42_Ip_ResetGate_Privileged/6:
  Jump functions of caller  Sema42_Ip_UnlockGate_Privileged/5:
  Jump functions of caller  Sema42_Ip_LockGate_Privileged/4:
  Jump functions of caller  Sema42_Ip_Init_Privileged/3:
    callsite  Sema42_Ip_Init_Privileged/3 -> Sema42_Ip_Init/11 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering Sema42_Ip_GetResetGateIndex/18 for cloning; -fipa-cp-clone disabled.
Not considering Sema42_Ip_GetResetGateBusMaster/17 for cloning; -fipa-cp-clone disabled.
Not considering Sema42_Ip_IsResetGateStateIdle/16 for cloning; -fipa-cp-clone disabled.
Not considering Sema42_Ip_GetGateLocker/15 for cloning; -fipa-cp-clone disabled.
Not considering Sema42_Ip_ResetGate/14 for cloning; -fipa-cp-clone disabled.
Not considering Sema42_Ip_UnlockGate/13 for cloning; -fipa-cp-clone disabled.
Not considering Sema42_Ip_LockGate/12 for cloning; -fipa-cp-clone disabled.
Not considering Sema42_Ip_Init/11 for cloning; -fipa-cp-clone disabled.
Not considering Sema42_Ip_GetResetGateIndex_Privileged/10 for cloning; -fipa-cp-clone disabled.
Not considering Sema42_Ip_GetResetGateBusMaster_Privileged/9 for cloning; -fipa-cp-clone disabled.
Not considering Sema42_Ip_IsResetGateStateIdle_Privileged/8 for cloning; -fipa-cp-clone disabled.
Not considering Sema42_Ip_GetGateLocker_Privileged/7 for cloning; -fipa-cp-clone disabled.
Not considering Sema42_Ip_ResetGate_Privileged/6 for cloning; -fipa-cp-clone disabled.
Not considering Sema42_Ip_UnlockGate_Privileged/5 for cloning; -fipa-cp-clone disabled.
Not considering Sema42_Ip_LockGate_Privileged/4 for cloning; -fipa-cp-clone disabled.
Not considering Sema42_Ip_Init_Privileged/3 for cloning; -fipa-cp-clone disabled.

overall_size: 134
 - context independent values, size: 8, time_benefit: 1.000000
 - context independent values, size: 7, time_benefit: 1.000000
 - context independent values, size: 7, time_benefit: 1.000000
 - context independent values, size: 6, time_benefit: 1.000000
 - context independent values, size: 12, time_benefit: 1.000000
 - context independent values, size: 6, time_benefit: 1.000000
 - context independent values, size: 8, time_benefit: 1.000000
 - context independent values, size: 15, time_benefit: 1.000000
 - context independent values, size: 4, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Sema42_Ip_GetResetGateIndex/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Sema42_Ip_GetResetGateBusMaster/17:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Sema42_Ip_IsResetGateStateIdle/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Sema42_Ip_GetGateLocker/15:
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
  Node: Sema42_Ip_ResetGate/14:
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
  Node: Sema42_Ip_UnlockGate/13:
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
  Node: Sema42_Ip_LockGate/12:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Sema42_Ip_Init/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Sema42_Ip_GetResetGateIndex_Privileged/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Sema42_Ip_GetResetGateBusMaster_Privileged/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Sema42_Ip_IsResetGateStateIdle_Privileged/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Sema42_Ip_GetGateLocker_Privileged/7:
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
  Node: Sema42_Ip_ResetGate_Privileged/6:
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
  Node: Sema42_Ip_UnlockGate_Privileged/5:
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
  Node: Sema42_Ip_LockGate_Privileged/4:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Sema42_Ip_Init_Privileged/3:
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

;; Function Sema42_Ip_Init_Privileged (Sema42_Ip_Init_Privileged, funcdef_no=19, decl_uid=5745, cgraph_uid=3, symbol_order=3)

Modification phase of node Sema42_Ip_Init_Privileged/3
Sema42_Ip_Init_Privileged (const uint32 u32Instance)
{
  <bb 2> [local count: 1073741824]:
  Sema42_Ip_Init (u32Instance_2(D)); [tail call]
  return;

}



;; Function Sema42_Ip_LockGate_Privileged (Sema42_Ip_LockGate_Privileged, funcdef_no=3, decl_uid=5749, cgraph_uid=4, symbol_order=4)

Modification phase of node Sema42_Ip_LockGate_Privileged/4
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



;; Function Sema42_Ip_UnlockGate_Privileged (Sema42_Ip_UnlockGate_Privileged, funcdef_no=4, decl_uid=5752, cgraph_uid=5, symbol_order=5)

Modification phase of node Sema42_Ip_UnlockGate_Privileged/5
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



;; Function Sema42_Ip_ResetGate_Privileged (Sema42_Ip_ResetGate_Privileged, funcdef_no=5, decl_uid=5755, cgraph_uid=6, symbol_order=6)

Modification phase of node Sema42_Ip_ResetGate_Privileged/6
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



;; Function Sema42_Ip_GetGateLocker_Privileged (Sema42_Ip_GetGateLocker_Privileged, funcdef_no=6, decl_uid=5758, cgraph_uid=7, symbol_order=7)

Modification phase of node Sema42_Ip_GetGateLocker_Privileged/7
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



;; Function Sema42_Ip_IsResetGateStateIdle_Privileged (Sema42_Ip_IsResetGateStateIdle_Privileged, funcdef_no=7, decl_uid=5760, cgraph_uid=8, symbol_order=8)

Modification phase of node Sema42_Ip_IsResetGateStateIdle_Privileged/8
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



;; Function Sema42_Ip_GetResetGateBusMaster_Privileged (Sema42_Ip_GetResetGateBusMaster_Privileged, funcdef_no=8, decl_uid=5762, cgraph_uid=9, symbol_order=9)

Modification phase of node Sema42_Ip_GetResetGateBusMaster_Privileged/9
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



;; Function Sema42_Ip_GetResetGateIndex_Privileged (Sema42_Ip_GetResetGateIndex_Privileged, funcdef_no=9, decl_uid=5764, cgraph_uid=10, symbol_order=10)

Modification phase of node Sema42_Ip_GetResetGateIndex_Privileged/10
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



;; Function Sema42_Ip_Init (Sema42_Ip_Init, funcdef_no=10, decl_uid=5722, cgraph_uid=11, symbol_order=11)

Modification phase of node Sema42_Ip_Init/11
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



;; Function Sema42_Ip_LockGate (Sema42_Ip_LockGate, funcdef_no=11, decl_uid=5726, cgraph_uid=12, symbol_order=12)

Modification phase of node Sema42_Ip_LockGate/12
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



;; Function Sema42_Ip_UnlockGate (Sema42_Ip_UnlockGate, funcdef_no=12, decl_uid=5729, cgraph_uid=13, symbol_order=13)

Modification phase of node Sema42_Ip_UnlockGate/13
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



;; Function Sema42_Ip_ResetGate (Sema42_Ip_ResetGate, funcdef_no=13, decl_uid=5732, cgraph_uid=14, symbol_order=14)

Modification phase of node Sema42_Ip_ResetGate/14
Sema42_Ip_ResetGate (const uint32 u32Instance, const uint8 u8GateIndex)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Sema42_Ip_ResetGate_Privileged (u32Instance_2(D), u8GateIndex_3(D));
  return;

}



;; Function Sema42_Ip_GetGateLocker (Sema42_Ip_GetGateLocker, funcdef_no=14, decl_uid=5735, cgraph_uid=15, symbol_order=15)

Modification phase of node Sema42_Ip_GetGateLocker/15
Sema42_Ip_GetGateLocker (const uint32 u32Instance, const uint8 u8GateIndex)
{
  uint8 _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _5 = Sema42_Ip_GetGateLocker_Privileged (u32Instance_2(D), u8GateIndex_3(D));
  return _5;

}



;; Function Sema42_Ip_IsResetGateStateIdle (Sema42_Ip_IsResetGateStateIdle, funcdef_no=15, decl_uid=5737, cgraph_uid=16, symbol_order=16)

Modification phase of node Sema42_Ip_IsResetGateStateIdle/16
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



;; Function Sema42_Ip_GetResetGateBusMaster (Sema42_Ip_GetResetGateBusMaster, funcdef_no=16, decl_uid=5739, cgraph_uid=17, symbol_order=17)

Modification phase of node Sema42_Ip_GetResetGateBusMaster/17
Sema42_Ip_GetResetGateBusMaster (const uint32 u32Instance)
{
  uint8 _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = Sema42_Ip_GetResetGateBusMaster_Privileged (u32Instance_2(D));
  return _4;

}



;; Function Sema42_Ip_GetResetGateIndex (Sema42_Ip_GetResetGateIndex, funcdef_no=17, decl_uid=5741, cgraph_uid=18, symbol_order=18)

Modification phase of node Sema42_Ip_GetResetGateIndex/18
Sema42_Ip_GetResetGateIndex (const uint32 u32Instance)
{
  uint8 _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = Sema42_Ip_GetResetGateIndex_Privileged (u32Instance_2(D));
  return _4;

}


