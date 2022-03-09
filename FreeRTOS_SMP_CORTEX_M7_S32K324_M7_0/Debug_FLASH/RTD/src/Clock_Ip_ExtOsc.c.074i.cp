
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_ReportClockErrors/17:
  Jump functions of caller  Clock_Ip_TimeoutExpired/16:
  Jump functions of caller  Clock_Ip_StartTimeout/14:
  Jump functions of caller  Clock_Ip_EnableSxoscOsconEocv/11:
    callsite  Clock_Ip_EnableSxoscOsconEocv/11 -> Clock_Ip_ExternalOscillatorEmpty/0 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_DisableSxoscOsconEocv/10:
    callsite  Clock_Ip_DisableSxoscOsconEocv/10 -> Clock_Ip_DisableClockIpExternalOscillatorEmpty/1 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_CompleteSxoscOsconEocv/9:
    callsite  Clock_Ip_CompleteSxoscOsconEocv/9 -> Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_SetSxoscOsconEocv/8:
  Jump functions of caller  Clock_Ip_ResetSxoscOsconEocv/7:
    callsite  Clock_Ip_ResetSxoscOsconEocv/7 -> Clock_Ip_ResetFxoscOsconBypEocvGmSel/2 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_EnableFxoscOsconBypEocvGmSel/6:
  Jump functions of caller  Clock_Ip_DisableFxoscOsconBypEocvGmSel/5:
  Jump functions of caller  Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4:
    callsite  Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4 -> Clock_Ip_ReportClockErrors/17 : 
       no arg info
    callsite  Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4 -> Clock_Ip_ReportClockErrors/17 : 
       no arg info
    callsite  Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4 -> Clock_Ip_TimeoutExpired/16 : 
       no arg info
    callsite  Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4 -> Clock_Ip_StartTimeout/14 : 
       no arg info
  Jump functions of caller  Clock_Ip_SetFxoscOsconBypEocvGmSel/3:
  Jump functions of caller  Clock_Ip_ResetFxoscOsconBypEocvGmSel/2:
  Jump functions of caller  Clock_Ip_DisableClockIpExternalOscillatorEmpty/1:
  Jump functions of caller  Clock_Ip_ExternalOscillatorEmpty/0:

 Propagating constants:

Not considering Clock_Ip_EnableSxoscOsconEocv/11 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_DisableSxoscOsconEocv/10 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_CompleteSxoscOsconEocv/9 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetSxoscOsconEocv/8 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ResetSxoscOsconEocv/7 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_EnableFxoscOsconBypEocvGmSel/6 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_DisableFxoscOsconBypEocvGmSel/5 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetFxoscOsconBypEocvGmSel/3 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ResetFxoscOsconBypEocvGmSel/2 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_DisableClockIpExternalOscillatorEmpty/1 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ExternalOscillatorEmpty/0 for cloning; -fipa-cp-clone disabled.

overall_size: 147
 - context independent values, size: 2, time_benefit: 1.000000
 - context independent values, size: 2, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_EnableSxoscOsconEocv/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_DisableSxoscOsconEocv/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_CompleteSxoscOsconEocv/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetSxoscOsconEocv/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ResetSxoscOsconEocv/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_EnableFxoscOsconBypEocvGmSel/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_DisableFxoscOsconBypEocvGmSel/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetFxoscOsconBypEocvGmSel/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ResetFxoscOsconBypEocvGmSel/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_DisableClockIpExternalOscillatorEmpty/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ExternalOscillatorEmpty/0:
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

Clock_Ip_ReportClockErrors/17 (Clock_Ip_ReportClockErrors) @06f86380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4 (114863530 (estimated locally),0.12 per call) Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4 (37904965 (estimated locally),0.04 per call) 
  Calls: 
Clock_Ip_TimeoutExpired/16 (Clock_Ip_TimeoutExpired) @06f862a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4 (1073741824 (estimated locally),1.17 per call) 
  Calls: 
Clock_Ip_apxXosc/15 (Clock_Ip_apxXosc) @06f8b360
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4 (read) Clock_Ip_EnableFxoscOsconBypEocvGmSel/6 (read) Clock_Ip_SetSxoscOsconEocv/8 (read) Clock_Ip_DisableFxoscOsconBypEocvGmSel/5 (read) Clock_Ip_ResetFxoscOsconBypEocvGmSel/2 (read) Clock_Ip_SetFxoscOsconBypEocvGmSel/3 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_StartTimeout/14 (Clock_Ip_StartTimeout) @06f861c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4 (114863530 (estimated locally),0.12 per call) 
  Calls: 
Clock_Ip_au8ClockFeatures/13 (Clock_Ip_au8ClockFeatures) @06f8b2d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4 (read) Clock_Ip_EnableFxoscOsconBypEocvGmSel/6 (read) Clock_Ip_DisableFxoscOsconBypEocvGmSel/5 (read) Clock_Ip_SetFxoscOsconBypEocvGmSel/3 (read) Clock_Ip_ResetFxoscOsconBypEocvGmSel/2 (read) Clock_Ip_SetSxoscOsconEocv/8 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axExtOscCallbacks/12 (Clock_Ip_axExtOscCallbacks) @06e34af8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_ExternalOscillatorEmpty/0 (addr) Clock_Ip_ExternalOscillatorEmpty/0 (addr) Clock_Ip_ExternalOscillatorEmpty/0 (addr) Clock_Ip_DisableClockIpExternalOscillatorEmpty/1 (addr) Clock_Ip_ExternalOscillatorEmpty/0 (addr) Clock_Ip_ResetFxoscOsconBypEocvGmSel/2 (addr) Clock_Ip_SetFxoscOsconBypEocvGmSel/3 (addr) Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4 (addr) Clock_Ip_DisableFxoscOsconBypEocvGmSel/5 (addr) Clock_Ip_EnableFxoscOsconBypEocvGmSel/6 (addr) Clock_Ip_ResetSxoscOsconEocv/7 (addr) Clock_Ip_SetSxoscOsconEocv/8 (addr) Clock_Ip_CompleteSxoscOsconEocv/9 (addr) Clock_Ip_DisableSxoscOsconEocv/10 (addr) Clock_Ip_EnableSxoscOsconEocv/11 (addr) 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_EnableSxoscOsconEocv/11 (Clock_Ip_EnableSxoscOsconEocv) @06e38ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axExtOscCallbacks/12 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Clock_Ip_ExternalOscillatorEmpty/0 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_DisableSxoscOsconEocv/10 (Clock_Ip_DisableSxoscOsconEocv) @06e38c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axExtOscCallbacks/12 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Clock_Ip_DisableClockIpExternalOscillatorEmpty/1 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_CompleteSxoscOsconEocv/9 (Clock_Ip_CompleteSxoscOsconEocv) @06e389a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axExtOscCallbacks/12 (addr) 
  Availability: available
  Function flags: count:918908241 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4 (918908241 (estimated locally),1.00 per call) 
Clock_Ip_SetSxoscOsconEocv/8 (Clock_Ip_SetSxoscOsconEocv) @06e38700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/13 (read) Clock_Ip_apxXosc/15 (read) 
  Referring: Clock_Ip_axExtOscCallbacks/12 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_ResetSxoscOsconEocv/7 (Clock_Ip_ResetSxoscOsconEocv) @06e382a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axExtOscCallbacks/12 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Clock_Ip_ResetFxoscOsconBypEocvGmSel/2 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_EnableFxoscOsconBypEocvGmSel/6 (Clock_Ip_EnableFxoscOsconBypEocvGmSel) @06e38000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/13 (read) Clock_Ip_apxXosc/15 (read) 
  Referring: Clock_Ip_axExtOscCallbacks/12 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_DisableFxoscOsconBypEocvGmSel/5 (Clock_Ip_DisableFxoscOsconBypEocvGmSel) @06e327e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/13 (read) Clock_Ip_apxXosc/15 (read) 
  Referring: Clock_Ip_axExtOscCallbacks/12 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4 (Clock_Ip_CompleteFxoscOsconBypEocvGmSel) @06e322a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/13 (read) Clock_Ip_apxXosc/15 (read) 
  Referring: Clock_Ip_axExtOscCallbacks/12 (addr) 
  Availability: available
  Function flags: count:918908241 (estimated locally) body icf_merged optimize_size
  Called by: Clock_Ip_CompleteSxoscOsconEocv/9 (918908241 (estimated locally),1.00 per call) 
  Calls: Clock_Ip_ReportClockErrors/17 (114863530 (estimated locally),0.12 per call) Clock_Ip_ReportClockErrors/17 (37904965 (estimated locally),0.04 per call) Clock_Ip_TimeoutExpired/16 (1073741824 (estimated locally),1.17 per call) Clock_Ip_StartTimeout/14 (114863530 (estimated locally),0.12 per call) 
Clock_Ip_SetFxoscOsconBypEocvGmSel/3 (Clock_Ip_SetFxoscOsconBypEocvGmSel) @06e32e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/13 (read) Clock_Ip_apxXosc/15 (read) 
  Referring: Clock_Ip_axExtOscCallbacks/12 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_ResetFxoscOsconBypEocvGmSel/2 (Clock_Ip_ResetFxoscOsconBypEocvGmSel) @06e32700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/13 (read) Clock_Ip_apxXosc/15 (read) 
  Referring: Clock_Ip_axExtOscCallbacks/12 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Clock_Ip_ResetSxoscOsconEocv/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_DisableClockIpExternalOscillatorEmpty/1 (Clock_Ip_DisableClockIpExternalOscillatorEmpty) @06e32460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axExtOscCallbacks/12 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Clock_Ip_DisableSxoscOsconEocv/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_ExternalOscillatorEmpty/0 (Clock_Ip_ExternalOscillatorEmpty) @06e321c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axExtOscCallbacks/12 (addr) Clock_Ip_axExtOscCallbacks/12 (addr) Clock_Ip_axExtOscCallbacks/12 (addr) Clock_Ip_axExtOscCallbacks/12 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Clock_Ip_EnableSxoscOsconEocv/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: 

;; Function Clock_Ip_ExternalOscillatorEmpty (Clock_Ip_ExternalOscillatorEmpty, funcdef_no=0, decl_uid=6547, cgraph_uid=1, symbol_order=0)

Modification phase of node Clock_Ip_ExternalOscillatorEmpty/0
Clock_Ip_ExternalOscillatorEmpty (const struct Clock_Ip_XoscConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_DisableClockIpExternalOscillatorEmpty (Clock_Ip_DisableClockIpExternalOscillatorEmpty, funcdef_no=1, decl_uid=6549, cgraph_uid=2, symbol_order=1)

Modification phase of node Clock_Ip_DisableClockIpExternalOscillatorEmpty/1
Clock_Ip_DisableClockIpExternalOscillatorEmpty (Clock_Ip_NameType XoscName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_ResetFxoscOsconBypEocvGmSel (Clock_Ip_ResetFxoscOsconBypEocvGmSel, funcdef_no=2, decl_uid=6551, cgraph_uid=3, symbol_order=2)

Modification phase of node Clock_Ip_ResetFxoscOsconBypEocvGmSel/2
Clock_Ip_ResetFxoscOsconBypEocvGmSel (const struct Clock_Ip_XoscConfigType * Config)
{
  uint32 Instance;
  <unnamed type> _1;
  unsigned char _2;
  volatile struct Clock_Ip_ExtOSCType * _3;
  long unsigned int _4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_7(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  Instance_8 = (uint32) _2;
  # DEBUG Instance => Instance_8
  # DEBUG BEGIN_STMT
  _3 = Clock_Ip_apxXosc[Instance_8];
  _4 ={v} _3->CTRL;
  _5 = _4 & 4294967294;
  _3->CTRL ={v} _5;
  return;

}



;; Function Clock_Ip_SetFxoscOsconBypEocvGmSel (Clock_Ip_SetFxoscOsconBypEocvGmSel, funcdef_no=3, decl_uid=6553, cgraph_uid=4, symbol_order=3)

Modification phase of node Clock_Ip_SetFxoscOsconBypEocvGmSel/3
Clock_Ip_SetFxoscOsconBypEocvGmSel (const struct Clock_Ip_XoscConfigType * Config)
{
  uint32 Instance;
  <unnamed type> _1;
  unsigned char _2;
  short unsigned int _3;
  unsigned char _4;
  long unsigned int _5;
  long unsigned int _6;
  short unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  unsigned char _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  unsigned char _17;
  long unsigned int _18;
  long unsigned int _19;
  long unsigned int _20;
  long unsigned int _21;
  volatile struct Clock_Ip_ExtOSCType * _22;
  long unsigned int _23;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_26(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  Instance_27 = (uint32) _2;
  # DEBUG Instance => Instance_27
  # DEBUG BEGIN_STMT
  _3 = Config_26(D)->Enable;
  if (_3 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 = Config_26(D)->BypassOption;
  _5 = (long unsigned int) _4;
  _6 = _5 << 31;
  _7 = Config_26(D)->StartupDelay;
  _8 = (long unsigned int) _7;
  _9 = _8 << 16;
  _10 = _9 & 16711680;
  _11 = _6 | _10;
  _12 = Config_26(D)->TransConductance;
  _13 = (long unsigned int) _12;
  _14 = _13 << 4;
  _15 = _14 & 255;
  _16 = _11 | _15;
  _17 = Config_26(D)->CompEn;
  _18 = (long unsigned int) _17;
  _19 = _18 << 24;
  _20 = _19 & 16777216;
  _21 = _16 | _20;
  _22 = Clock_Ip_apxXosc[Instance_27];
  _23 = _21 | 1;
  _22->CTRL ={v} _23;

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Clock_Ip_DisableFxoscOsconBypEocvGmSel (Clock_Ip_DisableFxoscOsconBypEocvGmSel, funcdef_no=5, decl_uid=6557, cgraph_uid=6, symbol_order=5)

Modification phase of node Clock_Ip_DisableFxoscOsconBypEocvGmSel/5
Clock_Ip_DisableFxoscOsconBypEocvGmSel (Clock_Ip_NameType XoscName)
{
  uint32 Instance;
  unsigned char _1;
  volatile struct Clock_Ip_ExtOSCType * _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_au8ClockFeatures[XoscName_6(D)][0];
  Instance_7 = (uint32) _1;
  # DEBUG Instance => Instance_7
  # DEBUG BEGIN_STMT
  _2 = Clock_Ip_apxXosc[Instance_7];
  _3 ={v} _2->CTRL;
  _4 = _3 & 4294967294;
  _2->CTRL ={v} _4;
  return;

}



;; Function Clock_Ip_EnableFxoscOsconBypEocvGmSel (Clock_Ip_EnableFxoscOsconBypEocvGmSel, funcdef_no=6, decl_uid=6559, cgraph_uid=7, symbol_order=6)

Modification phase of node Clock_Ip_EnableFxoscOsconBypEocvGmSel/6
Clock_Ip_EnableFxoscOsconBypEocvGmSel (const struct Clock_Ip_XoscConfigType * Config)
{
  uint32 Instance;
  <unnamed type> _1;
  unsigned char _2;
  short unsigned int _3;
  volatile struct Clock_Ip_ExtOSCType * _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_9(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  Instance_10 = (uint32) _2;
  # DEBUG Instance => Instance_10
  # DEBUG BEGIN_STMT
  _3 = Config_9(D)->Enable;
  if (_3 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072224]:
  # DEBUG BEGIN_STMT
  _4 = Clock_Ip_apxXosc[Instance_10];
  _5 ={v} _4->CTRL;
  _6 = _5 | 1;
  _4->CTRL ={v} _6;

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Clock_Ip_ResetSxoscOsconEocv (Clock_Ip_ResetSxoscOsconEocv, funcdef_no=17, decl_uid=6564, cgraph_uid=8, symbol_order=7)

Modification phase of node Clock_Ip_ResetSxoscOsconEocv/7
Clock_Ip_ResetSxoscOsconEocv (const struct Clock_Ip_XoscConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  Clock_Ip_ResetFxoscOsconBypEocvGmSel (Config_2(D)); [tail call]
  return;

}



;; Function Clock_Ip_SetSxoscOsconEocv (Clock_Ip_SetSxoscOsconEocv, funcdef_no=8, decl_uid=6566, cgraph_uid=9, symbol_order=8)

Modification phase of node Clock_Ip_SetSxoscOsconEocv/8
Clock_Ip_SetSxoscOsconEocv (const struct Clock_Ip_XoscConfigType * Config)
{
  uint32 Instance;
  <unnamed type> _1;
  unsigned char _2;
  short unsigned int _3;
  short unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  volatile struct Clock_Ip_ExtOSCType * _8;
  long unsigned int _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_12(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  Instance_13 = (uint32) _2;
  # DEBUG Instance => Instance_13
  # DEBUG BEGIN_STMT
  _3 = Config_12(D)->Enable;
  if (_3 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 = Config_12(D)->StartupDelay;
  _5 = (long unsigned int) _4;
  _6 = _5 << 16;
  _7 = _6 & 16711680;
  _8 = Clock_Ip_apxXosc[Instance_13];
  _9 = _7 | 1;
  _8->CTRL ={v} _9;

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Clock_Ip_CompleteFxoscOsconBypEocvGmSel (Clock_Ip_CompleteFxoscOsconBypEocvGmSel, funcdef_no=4, decl_uid=6555, cgraph_uid=5, symbol_order=4)

Modification phase of node Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4
Clock_Ip_CompleteFxoscOsconBypEocvGmSel (const struct Clock_Ip_XoscConfigType * Config)
{
  uint32 Instance;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  boolean TimeoutOccurred;
  <unnamed type> _1;
  unsigned char _2;
  short unsigned int _3;
  unsigned char _4;
  unsigned char _5;
  volatile struct Clock_Ip_ExtOSCType * _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int TimeoutTicks.1_9;
  <unnamed type> _10;

  <bb 2> [local count: 918908241]:
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Config_15(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  Instance_16 = (uint32) _2;
  # DEBUG Instance => Instance_16
  # DEBUG BEGIN_STMT
  _3 = Config_15(D)->Enable;
  if (_3 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 3> [local count: 459454120]:
  # DEBUG BEGIN_STMT
  _4 = Config_15(D)->CompEn;
  if (_4 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 4> [local count: 229727060]:
  # DEBUG BEGIN_STMT
  _5 = Config_15(D)->BypassOption;
  if (_5 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 5> [local count: 114863530]:
  # DEBUG BEGIN_STMT
  Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _6 = Clock_Ip_apxXosc[Instance_16];
  _7 ={v} _6->STAT;
  _8 = _7 >> 31;
  # DEBUG FxoscStatus => _8
  # DEBUG BEGIN_STMT
  TimeoutTicks.1_9 = TimeoutTicks;
  TimeoutOccurred_20 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.1_9);
  # DEBUG TimeoutOccurred => TimeoutOccurred_20
  # DEBUG BEGIN_STMT
  if (_8 == 0)
    goto <bb 7>; [94.50%]
  else
    goto <bb 8>; [5.50%]

  <bb 7> [local count: 1014686026]:
  if (TimeoutOccurred_20 != 0)
    goto <bb 8>; [5.50%]
  else
    goto <bb 12>; [94.50%]

  <bb 12> [local count: 958878296]:
  goto <bb 6>; [100.00%]

  <bb 8> [local count: 114863531]:
  # TimeoutOccurred_11 = PHI <TimeoutOccurred_20(6), TimeoutOccurred_20(7)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_11 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 11>; [67.00%]

  <bb 9> [local count: 37904965]:
  # DEBUG BEGIN_STMT
  _10 = Config_15(D)->Name;
  Clock_Ip_ReportClockErrors (1, _10);
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 114863530]:
  # DEBUG BEGIN_STMT
  Clock_Ip_ReportClockErrors (2, _1);

  <bb 11> [local count: 918908243]:
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return;

}



;; Function Clock_Ip_CompleteSxoscOsconEocv (Clock_Ip_CompleteSxoscOsconEocv, funcdef_no=19, decl_uid=6568, cgraph_uid=10, symbol_order=9)

Modification phase of node Clock_Ip_CompleteSxoscOsconEocv/9
Clock_Ip_CompleteSxoscOsconEocv (const struct Clock_Ip_XoscConfigType * Config)
{
  <bb 2> [local count: 918908241]:
  Clock_Ip_CompleteFxoscOsconBypEocvGmSel (Config_2(D)); [tail call]
  return;

}



;; Function Clock_Ip_EnableSxoscOsconEocv (Clock_Ip_EnableSxoscOsconEocv, funcdef_no=13, decl_uid=6572, cgraph_uid=12, symbol_order=11)

Modification phase of node Clock_Ip_EnableSxoscOsconEocv/11
Clock_Ip_EnableSxoscOsconEocv (const struct Clock_Ip_XoscConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  Clock_Ip_ExternalOscillatorEmpty (Config_1(D)); [tail call]
  return;

}



;; Function Clock_Ip_DisableSxoscOsconEocv (Clock_Ip_DisableSxoscOsconEocv, funcdef_no=15, decl_uid=6570, cgraph_uid=11, symbol_order=10)

Modification phase of node Clock_Ip_DisableSxoscOsconEocv/10
Clock_Ip_DisableSxoscOsconEocv (Clock_Ip_NameType XoscName)
{
  <bb 2> [local count: 1073741824]:
  Clock_Ip_DisableClockIpExternalOscillatorEmpty (XoscName_1(D)); [tail call]
  return;

}


