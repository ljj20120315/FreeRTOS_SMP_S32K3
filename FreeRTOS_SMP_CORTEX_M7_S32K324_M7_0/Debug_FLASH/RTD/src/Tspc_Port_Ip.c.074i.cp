
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_10/6:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_10/5:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_09/4:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_09/3:
  Jump functions of caller  Tspc_Port_Ip_ConfigureObeGroup/2:
    callsite  Tspc_Port_Ip_ConfigureObeGroup/2 -> SchM_Exit_Port_PORT_EXCLUSIVE_AREA_10/6 : 
       no arg info
    callsite  Tspc_Port_Ip_ConfigureObeGroup/2 -> SchM_Enter_Port_PORT_EXCLUSIVE_AREA_10/5 : 
       no arg info
  Jump functions of caller  Tspc_Port_Ip_EnableObeGroup/1:
    callsite  Tspc_Port_Ip_EnableObeGroup/1 -> SchM_Exit_Port_PORT_EXCLUSIVE_AREA_09/4 : 
       no arg info
    callsite  Tspc_Port_Ip_EnableObeGroup/1 -> SchM_Enter_Port_PORT_EXCLUSIVE_AREA_09/3 : 
       no arg info

 Propagating constants:

Not considering Tspc_Port_Ip_ConfigureObeGroup/2 for cloning; -fipa-cp-clone disabled.
Not considering Tspc_Port_Ip_EnableObeGroup/1 for cloning; -fipa-cp-clone disabled.

overall_size: 76

IPA lattices after all propagation:

Lattices:
  Node: Tspc_Port_Ip_ConfigureObeGroup/2:
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
  Node: Tspc_Port_Ip_EnableObeGroup/1:
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

SchM_Exit_Port_PORT_EXCLUSIVE_AREA_10/6 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_10) @060e97e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Tspc_Port_Ip_ConfigureObeGroup/2 (1108457 (estimated locally),0.05 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_10/5 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_10) @060e9700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Tspc_Port_Ip_ConfigureObeGroup/2 (1108457 (estimated locally),0.05 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_09/4 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_09) @060e9460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Tspc_Port_Ip_EnableObeGroup/1 (10631108 (estimated locally),0.50 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_09/3 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_09) @060e9380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Tspc_Port_Ip_EnableObeGroup/1 (10631108 (estimated locally),0.50 per call) 
  Calls: 
Tspc_Port_Ip_ConfigureObeGroup/2 (Tspc_Port_Ip_ConfigureObeGroup) @060be700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_10/6 (1108457 (estimated locally),0.05 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_10/5 (1108457 (estimated locally),0.05 per call) 
Tspc_Port_Ip_EnableObeGroup/1 (Tspc_Port_Ip_EnableObeGroup) @060beb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_09/4 (10631108 (estimated locally),0.50 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_09/3 (10631108 (estimated locally),0.50 per call) 

;; Function Tspc_Port_Ip_EnableObeGroup (Tspc_Port_Ip_EnableObeGroup, funcdef_no=1, decl_uid=6308, cgraph_uid=2, symbol_order=1)

Modification phase of node Tspc_Port_Ip_EnableObeGroup/1
Tspc_Port_Ip_EnableObeGroup (uint8 group)
{
  volatile boolean x;
  unsigned char _1;
  _Bool _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  _Bool x.0_14;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  # DEBUG tspcBase => 1076641792B
  # DEBUG BEGIN_STMT
  _1 = group_8(D) + 255;
  _2 = _1 <= 1;
  x ={v} _2;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_14 ={v} x;
  if (x.0_14 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_09 ();
  # DEBUG BEGIN_STMT
  if (group_8(D) == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 3614577]:
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct TSPC_Type *)1076641792B].GRP_EN;
  _4 = _3 | 1;
  MEM[(struct TSPC_Type *)1076641792B].GRP_EN ={v} _4;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 7016531]:
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct TSPC_Type *)1076641792B].GRP_EN;
  _6 = _5 | 2;
  MEM[(struct TSPC_Type *)1076641792B].GRP_EN ={v} _6;

  <bb 7> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_09 ();
  return;

}



;; Function Tspc_Port_Ip_ConfigureObeGroup (Tspc_Port_Ip_ConfigureObeGroup, funcdef_no=2, decl_uid=6311, cgraph_uid=3, symbol_order=2)

Modification phase of node Tspc_Port_Ip_ConfigureObeGroup/2
Tspc_Port_Ip_ConfigureObeGroup (uint32 cfgCount, const struct Tspc_Port_Ip_ObeGroupConfig * config)
{
  volatile boolean x;
  volatile boolean x;
  uint8 groupConfig;
  uint32 i;
  _Bool _1;
  long unsigned int _2;
  const struct Tspc_Port_Ip_ObeGroupConfig * _3;
  unsigned char _4;
  _Bool _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  const struct Tspc_Port_Ip_ObeGroupConfig * _11;
  unsigned char _12;
  long unsigned int _13;
  unsigned int _14;
  unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;
  unsigned int _20;
  unsigned int _21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;
  long unsigned int _25;
  long unsigned int _27;
  _Bool x.0_46;
  _Bool x.0_47;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _1 = config_34(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_46 ={v} x;
  if (x.0_46 != 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 19> [local count: 10631108]:
  goto <bb 3>; [100.00%]

  <bb 18> [local count: 10631108]:
  goto <bb 7>; [100.00%]

  <bb 21> [local count: 1073741824]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 21>; [100.00%]

  <bb 4> [local count: 19045302]:
  # DEBUG BEGIN_STMT
  _2 = i_28 * 8;
  _3 = config_34(D) + _2;
  _4 = _3->obeGroupSelect;
  _5 = _4 <= 2;
  x ={v} _5;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_47 ={v} x;
  if (x.0_47 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 17> [local count: 9522651]:

  <bb 5> [local count: 961787701]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 20> [local count: 961787701]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 9522651]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  groupConfig_44 = _4 | groupConfig_30;
  # DEBUG groupConfig => groupConfig_44
  # DEBUG BEGIN_STMT
  i_45 = i_28 + 1;
  # DEBUG i => i_45

  <bb 7> [local count: 20153759]:
  # i_28 = PHI <i_45(6), 0(18)>
  # groupConfig_30 = PHI <groupConfig_44(6), 0(18)>
  # DEBUG x => NULL
  # DEBUG tspcBase => NULL
  # DEBUG groupConfig => groupConfig_30
  # DEBUG i => i_28
  # DEBUG BEGIN_STMT
  if (i_28 < cfgCount_36(D))
    goto <bb 4>; [94.50%]
  else
    goto <bb 8>; [5.50%]

  <bb 8> [local count: 1108457]:
  # groupConfig_26 = PHI <groupConfig_30(7)>
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_10 ();
  # DEBUG BEGIN_STMT
  _6 ={v} MEM[(struct TSPC_Type *)1076641792B].GRP_EN;
  _7 = (long unsigned int) groupConfig_26;
  _8 = ~_7;
  _9 = _6 & _8;
  MEM[(struct TSPC_Type *)1076641792B].GRP_EN ={v} _9;
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 15>; [100.00%]

  <bb 9> [local count: 8968423]:
  # DEBUG BEGIN_STMT
  _10 = i_29 * 8;
  _11 = config_34(D) + _10;
  _12 = _11->obeGroupSelect;
  if (_12 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 10> [local count: 4484211]:
  # DEBUG BEGIN_STMT
  _13 = _11->obeGroupIndex;
  if (_13 != 65535)
    goto <bb 11>; [66.00%]
  else
    goto <bb 14>; [34.00%]

  <bb 11> [local count: 2959580]:
  # DEBUG BEGIN_STMT
  if (_13 > 31)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 1479790]:
  # DEBUG BEGIN_STMT
  _14 = (unsigned int) _12;
  _15 = _14 + 4294967295;
  _16 ={v} MEM[(struct TSPC_Type *)1076641792B].GROUP[_15].GRP_OBE2;
  _17 = _13 + 4294967264;
  _18 = 1 << _17;
  _19 = _16 | _18;
  MEM[(struct TSPC_Type *)1076641792B].GROUP[_15].GRP_OBE2 ={v} _19;
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 1479790]:
  # DEBUG BEGIN_STMT
  _20 = (unsigned int) _12;
  _21 = _20 + 4294967295;
  _22 ={v} MEM[(struct TSPC_Type *)1076641792B].GROUP[_21].GRP_OBE1;
  _23 = 1 << _13;
  _24 = _22 | _23;
  MEM[(struct TSPC_Type *)1076641792B].GROUP[_21].GRP_OBE1 ={v} _24;

  <bb 14> [local count: 8968423]:
  # DEBUG BEGIN_STMT
  i_43 = i_29 + 1;
  # DEBUG i => i_43

  <bb 15> [local count: 10076880]:
  # i_29 = PHI <0(8), i_43(14)>
  # DEBUG i => i_29
  # DEBUG BEGIN_STMT
  if (i_29 < cfgCount_36(D))
    goto <bb 9>; [89.00%]
  else
    goto <bb 16>; [11.00%]

  <bb 16> [local count: 1108457]:
  # DEBUG BEGIN_STMT
  _25 ={v} MEM[(struct TSPC_Type *)1076641792B].GRP_EN;
  _27 = _7 | _25;
  MEM[(struct TSPC_Type *)1076641792B].GRP_EN ={v} _27;
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_10 ();
  return;

}


