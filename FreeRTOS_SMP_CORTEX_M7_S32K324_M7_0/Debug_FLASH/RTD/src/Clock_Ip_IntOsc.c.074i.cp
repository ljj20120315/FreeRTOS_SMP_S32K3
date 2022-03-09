
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_SetSircStdby.part.0/10:
  Jump functions of caller  Clock_Ip_SetFircStdby.part.0/9:
  Jump functions of caller  Clock_Ip_DisableSircStdby/7:
  Jump functions of caller  Clock_Ip_EnableSircStdby/6:
  Jump functions of caller  Clock_Ip_SetSircStdby/5:
    callsite  Clock_Ip_SetSircStdby/5 -> Clock_Ip_SetSircStdby.part.0/10 : 
  Jump functions of caller  Clock_Ip_DisableFircStdby/4:
  Jump functions of caller  Clock_Ip_EnableFircStdby/3:
  Jump functions of caller  Clock_Ip_SetFircStdby/2:
    callsite  Clock_Ip_SetFircStdby/2 -> Clock_Ip_SetFircStdby.part.0/9 : 
  Jump functions of caller  Clock_Ip_InternalOscillatorEmpty_Disable/1:
  Jump functions of caller  Clock_Ip_InternalOscillatorEmpty/0:

 Propagating constants:

Not considering Clock_Ip_DisableSircStdby/7 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_EnableSircStdby/6 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetSircStdby/5 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_DisableFircStdby/4 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_EnableFircStdby/3 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetFircStdby/2 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_InternalOscillatorEmpty_Disable/1 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_InternalOscillatorEmpty/0 for cloning; -fipa-cp-clone disabled.

overall_size: 62
 - context independent values, size: 6, time_benefit: 1.000000
 - context independent values, size: 6, time_benefit: 1.000000
 - context independent values, size: 6, time_benefit: 1.000000
 - context independent values, size: 6, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_SetSircStdby.part.0/10:
  Node: Clock_Ip_SetFircStdby.part.0/9:
  Node: Clock_Ip_DisableSircStdby/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_EnableSircStdby/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetSircStdby/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_DisableFircStdby/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_EnableFircStdby/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetFircStdby/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_InternalOscillatorEmpty_Disable/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_InternalOscillatorEmpty/0:
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

Clock_Ip_SetSircStdby.part.0/10 (Clock_Ip_SetSircStdby.part.0) @06f6d380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local split_part optimize_size
  Called by: Clock_Ip_SetSircStdby/5 (536870912 (estimated locally),0.50 per call) 
  Calls: 
Clock_Ip_SetFircStdby.part.0/9 (Clock_Ip_SetFircStdby.part.0) @06f6d9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local split_part optimize_size
  Called by: Clock_Ip_SetFircStdby/2 (536870912 (estimated locally),0.50 per call) 
  Calls: 
Clock_Ip_axIntOscCallbacks/8 (Clock_Ip_axIntOscCallbacks) @06e9a240
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_InternalOscillatorEmpty/0 (addr) Clock_Ip_InternalOscillatorEmpty/0 (addr) Clock_Ip_InternalOscillatorEmpty_Disable/1 (addr) Clock_Ip_SetFircStdby/2 (addr) Clock_Ip_EnableFircStdby/3 (addr) Clock_Ip_DisableFircStdby/4 (addr) Clock_Ip_SetSircStdby/5 (addr) Clock_Ip_EnableSircStdby/6 (addr) Clock_Ip_DisableSircStdby/7 (addr) 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_DisableSircStdby/7 (Clock_Ip_DisableSircStdby) @06e98ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/8 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_EnableSircStdby/6 (Clock_Ip_EnableSircStdby) @06e98c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/8 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_SetSircStdby/5 (Clock_Ip_SetSircStdby) @06e989a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/8 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_SetSircStdby.part.0/10 (536870912 (estimated locally),0.50 per call) 
Clock_Ip_DisableFircStdby/4 (Clock_Ip_DisableFircStdby) @06e98700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/8 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_EnableFircStdby/3 (Clock_Ip_EnableFircStdby) @06e98460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/8 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_SetFircStdby/2 (Clock_Ip_SetFircStdby) @06e981c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/8 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_SetFircStdby.part.0/9 (536870912 (estimated locally),0.50 per call) 
Clock_Ip_InternalOscillatorEmpty_Disable/1 (Clock_Ip_InternalOscillatorEmpty_Disable) @06e48ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/8 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_InternalOscillatorEmpty/0 (Clock_Ip_InternalOscillatorEmpty) @06e48e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axIntOscCallbacks/8 (addr) Clock_Ip_axIntOscCallbacks/8 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Clock_Ip_InternalOscillatorEmpty (Clock_Ip_InternalOscillatorEmpty, funcdef_no=0, decl_uid=6547, cgraph_uid=1, symbol_order=0)

Modification phase of node Clock_Ip_InternalOscillatorEmpty/0
Clock_Ip_InternalOscillatorEmpty (const struct Clock_Ip_IrcoscConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_InternalOscillatorEmpty_Disable (Clock_Ip_InternalOscillatorEmpty_Disable, funcdef_no=1, decl_uid=6549, cgraph_uid=2, symbol_order=1)

Modification phase of node Clock_Ip_InternalOscillatorEmpty_Disable/1
Clock_Ip_InternalOscillatorEmpty_Disable (Clock_Ip_NameType Name)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_EnableFircStdby (Clock_Ip_EnableFircStdby, funcdef_no=3, decl_uid=6553, cgraph_uid=4, symbol_order=3)

Modification phase of node Clock_Ip_EnableFircStdby/3
Clock_Ip_EnableFircStdby (const struct Clock_Ip_IrcoscConfigType * Config)
{
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct FIRC_Type *)1076690944B].STDBY_ENABLE;
  _2 = _1 | 1;
  MEM[(struct FIRC_Type *)1076690944B].STDBY_ENABLE ={v} _2;
  return;

}



;; Function Clock_Ip_DisableFircStdby (Clock_Ip_DisableFircStdby, funcdef_no=4, decl_uid=6555, cgraph_uid=5, symbol_order=4)

Modification phase of node Clock_Ip_DisableFircStdby/4
Clock_Ip_DisableFircStdby (Clock_Ip_NameType Name)
{
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct FIRC_Type *)1076690944B].STDBY_ENABLE;
  _2 = _1 & 4294967294;
  MEM[(struct FIRC_Type *)1076690944B].STDBY_ENABLE ={v} _2;
  return;

}



;; Function Clock_Ip_EnableSircStdby (Clock_Ip_EnableSircStdby, funcdef_no=6, decl_uid=6559, cgraph_uid=7, symbol_order=6)

Modification phase of node Clock_Ip_EnableSircStdby/6
Clock_Ip_EnableSircStdby (const struct Clock_Ip_IrcoscConfigType * Config)
{
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SIRC_Type *)1076658176B].MISCELLANEOUS_IN;
  _2 = _1 | 256;
  MEM[(struct SIRC_Type *)1076658176B].MISCELLANEOUS_IN ={v} _2;
  return;

}



;; Function Clock_Ip_DisableSircStdby (Clock_Ip_DisableSircStdby, funcdef_no=7, decl_uid=6561, cgraph_uid=8, symbol_order=7)

Modification phase of node Clock_Ip_DisableSircStdby/7
Clock_Ip_DisableSircStdby (Clock_Ip_NameType Name)
{
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SIRC_Type *)1076658176B].MISCELLANEOUS_IN;
  _2 = _1 & 4294967039;
  MEM[(struct SIRC_Type *)1076658176B].MISCELLANEOUS_IN ={v} _2;
  return;

}



;; Function Clock_Ip_SetFircStdby (Clock_Ip_SetFircStdby, funcdef_no=2, decl_uid=6551, cgraph_uid=3, symbol_order=2)

Modification phase of node Clock_Ip_SetFircStdby/2
Clock_Ip_SetFircStdby (const struct Clock_Ip_IrcoscConfigType * Config)
{
  short unsigned int _1;
  long unsigned int _3;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_7(D)->Enable;
  if (_1 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870912]:
  # DEBUG D#1 => Config_7(D)
  Clock_Ip_SetFircStdby.part.0 ();
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct FIRC_Type *)1076690944B].STDBY_ENABLE;
  _5 = _3 & 4294967294;
  MEM[(struct FIRC_Type *)1076690944B].STDBY_ENABLE ={v} _5;

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function Clock_Ip_SetSircStdby (Clock_Ip_SetSircStdby, funcdef_no=5, decl_uid=6557, cgraph_uid=6, symbol_order=5)

Modification phase of node Clock_Ip_SetSircStdby/5
Clock_Ip_SetSircStdby (const struct Clock_Ip_IrcoscConfigType * Config)
{
  short unsigned int _1;
  long unsigned int _3;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_7(D)->Enable;
  if (_1 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870912]:
  # DEBUG D#3 => Config_7(D)
  Clock_Ip_SetSircStdby.part.0 ();
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct SIRC_Type *)1076658176B].MISCELLANEOUS_IN;
  _5 = _3 & 4294967039;
  MEM[(struct SIRC_Type *)1076658176B].MISCELLANEOUS_IN ={v} _5;

  <bb 5> [local count: 1073741824]:
  return;

}


