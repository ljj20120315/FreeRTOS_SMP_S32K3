Creating summary for Clock_Ip_SetSircStdby.part.0/10:


Creating summary for Clock_Ip_SetFircStdby.part.0/9:


Creating summary for Clock_Ip_DisableSircStdby/7:
  Descriptor for parameter 0 NameD.6583
    (locally) unused
    not a candidate for splitting


Creating summary for Clock_Ip_EnableSircStdby/6:
  Descriptor for parameter 0 ConfigD.6580
    unused with 0 call_uses
    by_ref with 0 pass throughs
----------------------------------------
  Descriptor for parameter 0 ConfigD.6580
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref


Creating summary for Clock_Ip_SetSircStdby/5:
  Descriptor for parameter 0 ConfigD.6577
    by_ref with 0 pass throughs
        * Access to offset: 32, size: 16, type: const uint16, alias_ptr_type: short unsigned int *, nonarg: 1, reverse: 0
----------------------------------------
  Descriptor for parameter 0 ConfigD.6577
    param_size_limit: 4, size_reached: 2, by_ref
    * Access to unit offset: 4, unit size: 2, type: const uint16, alias_ptr_type: short unsigned int *, certain


Creating summary for Clock_Ip_DisableFircStdby/4:
  Descriptor for parameter 0 NameD.6574
    (locally) unused
    not a candidate for splitting


Creating summary for Clock_Ip_EnableFircStdby/3:
  Descriptor for parameter 0 ConfigD.6571
    unused with 0 call_uses
    by_ref with 0 pass throughs
----------------------------------------
  Descriptor for parameter 0 ConfigD.6571
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref


Creating summary for Clock_Ip_SetFircStdby/2:
  Descriptor for parameter 0 ConfigD.6568
    by_ref with 0 pass throughs
        * Access to offset: 32, size: 16, type: const uint16, alias_ptr_type: short unsigned int *, nonarg: 1, reverse: 0
----------------------------------------
  Descriptor for parameter 0 ConfigD.6568
    param_size_limit: 4, size_reached: 2, by_ref
    * Access to unit offset: 4, unit size: 2, type: const uint16, alias_ptr_type: short unsigned int *, certain


Creating summary for Clock_Ip_InternalOscillatorEmpty_Disable/1:
  Descriptor for parameter 0 NameD.6565
    (locally) unused
    not a candidate for splitting


Creating summary for Clock_Ip_InternalOscillatorEmpty/0:
  Descriptor for parameter 0 ConfigD.6562
    unused with 0 call_uses
    by_ref with 0 pass throughs
----------------------------------------
  Descriptor for parameter 0 ConfigD.6562
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref



========== IPA-SRA IPA stage ==========

Summary for node Clock_Ip_SetSircStdby.part.0/10:
  No parameter information. 


Summary for node Clock_Ip_SetFircStdby.part.0/9:
  No parameter information. 


Summary for node Clock_Ip_DisableSircStdby/7:
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting


Summary for node Clock_Ip_EnableSircStdby/6:
  Descriptor for parameter 0:
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref


Summary for node Clock_Ip_SetSircStdby/5:
  Descriptor for parameter 0:
    param_size_limit: 4, size_reached: 2, by_ref
    * Access to unit offset: 4, unit size: 2, type: const uint16, alias_ptr_type: short unsigned int *, certain

  Summary for edge Clock_Ip_SetSircStdby/5->Clock_Ip_SetSircStdby.part.0/10:
    return value ignored

Summary for node Clock_Ip_DisableFircStdby/4:
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting


Summary for node Clock_Ip_EnableFircStdby/3:
  Descriptor for parameter 0:
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref


Summary for node Clock_Ip_SetFircStdby/2:
  Descriptor for parameter 0:
    param_size_limit: 4, size_reached: 2, by_ref
    * Access to unit offset: 4, unit size: 2, type: const uint16, alias_ptr_type: short unsigned int *, certain

  Summary for edge Clock_Ip_SetFircStdby/2->Clock_Ip_SetFircStdby.part.0/9:
    return value ignored

Summary for node Clock_Ip_InternalOscillatorEmpty_Disable/1:
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting


Summary for node Clock_Ip_InternalOscillatorEmpty/0:
  Descriptor for parameter 0:
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref



Function Clock_Ip_InternalOscillatorEmpty/0 disqualified because it cannot be made local.
Function Clock_Ip_InternalOscillatorEmpty_Disable/1 disqualified because it cannot be made local.
Function Clock_Ip_SetFircStdby/2 disqualified because it cannot be made local.
Function Clock_Ip_EnableFircStdby/3 disqualified because it cannot be made local.
Function Clock_Ip_DisableFircStdby/4 disqualified because it cannot be made local.
Function Clock_Ip_SetSircStdby/5 disqualified because it cannot be made local.
Function Clock_Ip_EnableSircStdby/6 disqualified because it cannot be made local.
Function Clock_Ip_DisableSircStdby/7 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


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
Clock_Ip_SetSircStdby.part.0 ()
{
  const struct Clock_Ip_IrcoscConfigType * Config;
  long unsigned int _1;
  long unsigned int _2;

  <bb 4> [local count: 1073741824]:
  # DEBUG D#4 s=> Config
  # DEBUG Config => D#4

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SIRC_Type *)1076658176B].MISCELLANEOUS_IN;
  _2 = _1 | 256;
  MEM[(struct SIRC_Type *)1076658176B].MISCELLANEOUS_IN ={v} _2;

  <bb 3> [local count: 1073741824]:
  return;

}


Clock_Ip_SetFircStdby.part.0 ()
{
  const struct Clock_Ip_IrcoscConfigType * Config;
  long unsigned int _1;
  long unsigned int _2;

  <bb 4> [local count: 1073741824]:
  # DEBUG D#2 s=> Config
  # DEBUG Config => D#2

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct FIRC_Type *)1076690944B].STDBY_ENABLE;
  _2 = _1 | 1;
  MEM[(struct FIRC_Type *)1076690944B].STDBY_ENABLE ={v} _2;

  <bb 3> [local count: 1073741824]:
  return;

}


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


Clock_Ip_InternalOscillatorEmpty_Disable (Clock_Ip_NameType Name)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


Clock_Ip_InternalOscillatorEmpty (const struct Clock_Ip_IrcoscConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


