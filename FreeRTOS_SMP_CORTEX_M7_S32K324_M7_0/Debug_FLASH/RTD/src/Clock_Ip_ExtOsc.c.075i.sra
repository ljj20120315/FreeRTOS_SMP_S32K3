Creating summary for Clock_Ip_EnableSxoscOsconEocv/11:
  Descriptor for parameter 0 ConfigD.6628
    unused with 0 call_uses
    by_ref with 0 pass throughs
----------------------------------------
  Descriptor for parameter 0 ConfigD.6628
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref


Creating summary for Clock_Ip_DisableSxoscOsconEocv/10:
  Descriptor for parameter 0 XoscNameD.6625
    (locally) unused
    not a candidate for splitting


Creating summary for Clock_Ip_CompleteSxoscOsconEocv/9:
  Descriptor for parameter 0 ConfigD.6614
    not a candidate
----------------------------------------
  Descriptor for parameter 0 ConfigD.6614
    not a candidate for splitting


Creating summary for Clock_Ip_SetSxoscOsconEocv/8:
  Descriptor for parameter 0 ConfigD.6610
    by_ref with 0 pass throughs
        * Access to offset: 0, size: 32, type: const Clock_Ip_NameType, alias_ptr_type: <unnamed type> *, nonarg: 1, reverse: 0
        * Access to offset: 64, size: 16, type: const uint16, alias_ptr_type: short unsigned int *, nonarg: 1, reverse: 0
        * Access to offset: 80, size: 16, type: const uint16, alias_ptr_type: short unsigned int *, nonarg: 1, reverse: 0
----------------------------------------
  Descriptor for parameter 0 ConfigD.6610
    not a candidate for splitting


Creating summary for Clock_Ip_ResetSxoscOsconEocv/7:
  Descriptor for parameter 0 ConfigD.6606
    by_ref with 0 pass throughs
        * Access to offset: 0, size: 32, type: const Clock_Ip_NameType, alias_ptr_type: <unnamed type> *, nonarg: 1, reverse: 0
----------------------------------------
  Descriptor for parameter 0 ConfigD.6606
    param_size_limit: 4, size_reached: 4, by_ref
    * Access to unit offset: 0, unit size: 4, type: const Clock_Ip_NameType, alias_ptr_type: <unnamed type> *, certain


Creating summary for Clock_Ip_EnableFxoscOsconBypEocvGmSel/6:
  Descriptor for parameter 0 ConfigD.6602
    by_ref with 0 pass throughs
        * Access to offset: 0, size: 32, type: const Clock_Ip_NameType, alias_ptr_type: <unnamed type> *, nonarg: 1, reverse: 0
        * Access to offset: 64, size: 16, type: const uint16, alias_ptr_type: short unsigned int *, nonarg: 1, reverse: 0
----------------------------------------
  Descriptor for parameter 0 ConfigD.6602
    not a candidate for splitting


Creating summary for Clock_Ip_DisableFxoscOsconBypEocvGmSel/5:
  Descriptor for parameter 0 XoscNameD.6598
    not a candidate for splitting


Creating summary for Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4:
  Descriptor for parameter 0 ConfigD.6587
    not a candidate
----------------------------------------
  Descriptor for parameter 0 ConfigD.6587
    not a candidate for splitting


Creating summary for Clock_Ip_SetFxoscOsconBypEocvGmSel/3:
  Descriptor for parameter 0 ConfigD.6583
    by_ref with 0 pass throughs
        * Access to offset: 0, size: 32, type: const Clock_Ip_NameType, alias_ptr_type: <unnamed type> *, nonarg: 1, reverse: 0
        * Access to offset: 64, size: 16, type: const uint16, alias_ptr_type: short unsigned int *, nonarg: 1, reverse: 0
        * Access to offset: 80, size: 16, type: const uint16, alias_ptr_type: short unsigned int *, nonarg: 1, reverse: 0
        * Access to offset: 96, size: 8, type: const uint8, alias_ptr_type: unsigned char *, nonarg: 1, reverse: 0
        * Access to offset: 104, size: 8, type: const uint8, alias_ptr_type: unsigned char *, nonarg: 1, reverse: 0
        * Access to offset: 112, size: 8, type: const uint8, alias_ptr_type: unsigned char *, nonarg: 1, reverse: 0
----------------------------------------
  Descriptor for parameter 0 ConfigD.6583
    not a candidate for splitting


Creating summary for Clock_Ip_ResetFxoscOsconBypEocvGmSel/2:
  Descriptor for parameter 0 ConfigD.6579
    by_ref with 0 pass throughs
        * Access to offset: 0, size: 32, type: const Clock_Ip_NameType, alias_ptr_type: <unnamed type> *, nonarg: 1, reverse: 0
----------------------------------------
  Descriptor for parameter 0 ConfigD.6579
    param_size_limit: 4, size_reached: 4, by_ref
    * Access to unit offset: 0, unit size: 4, type: const Clock_Ip_NameType, alias_ptr_type: <unnamed type> *, certain


Creating summary for Clock_Ip_DisableClockIpExternalOscillatorEmpty/1:
  Descriptor for parameter 0 XoscNameD.6576
    (locally) unused
    not a candidate for splitting


Creating summary for Clock_Ip_ExternalOscillatorEmpty/0:
  Descriptor for parameter 0 ConfigD.6573
    unused with 0 call_uses
    by_ref with 0 pass throughs
----------------------------------------
  Descriptor for parameter 0 ConfigD.6573
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref



========== IPA-SRA IPA stage ==========

Summary for node Clock_Ip_EnableSxoscOsconEocv/11:
  Not a candidate function

Summary for node Clock_Ip_DisableSxoscOsconEocv/10:
  Not a candidate function

Summary for node Clock_Ip_CompleteSxoscOsconEocv/9:
  Not a candidate function

Summary for node Clock_Ip_SetSxoscOsconEocv/8:
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node Clock_Ip_ResetSxoscOsconEocv/7:
  Not a candidate function

Summary for node Clock_Ip_EnableFxoscOsconBypEocvGmSel/6:
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node Clock_Ip_DisableFxoscOsconBypEocvGmSel/5:
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4:
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4->Clock_Ip_ReportClockErrors/17:
    return value ignored
  Summary for edge Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4->Clock_Ip_ReportClockErrors/17:
    return value ignored
    Parameter 0:
    Parameter 1:
      Scalar param sources: 0
  Summary for edge Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4->Clock_Ip_TimeoutExpired/16:
  Summary for edge Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4->Clock_Ip_StartTimeout/14:
    return value ignored

Summary for node Clock_Ip_SetFxoscOsconBypEocvGmSel/3:
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node Clock_Ip_ResetFxoscOsconBypEocvGmSel/2:
  Descriptor for parameter 0:
    param_size_limit: 4, size_reached: 4, by_ref
    * Access to unit offset: 0, unit size: 4, type: const Clock_Ip_NameType, alias_ptr_type: <unnamed type> *, certain


Summary for node Clock_Ip_DisableClockIpExternalOscillatorEmpty/1:
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting


Summary for node Clock_Ip_ExternalOscillatorEmpty/0:
  Descriptor for parameter 0:
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref



Function Clock_Ip_ExternalOscillatorEmpty/0 disqualified because it cannot be made local.
Function Clock_Ip_DisableClockIpExternalOscillatorEmpty/1 disqualified because it cannot be made local.
Function Clock_Ip_ResetFxoscOsconBypEocvGmSel/2 disqualified because it cannot be made local.
Function Clock_Ip_SetFxoscOsconBypEocvGmSel/3 disqualified because it cannot be made local.
Function Clock_Ip_CompleteFxoscOsconBypEocvGmSel/4 disqualified because it cannot be made local.
Function Clock_Ip_DisableFxoscOsconBypEocvGmSel/5 disqualified because it cannot be made local.
Function Clock_Ip_EnableFxoscOsconBypEocvGmSel/6 disqualified because it cannot be made local.
Function Clock_Ip_SetSxoscOsconEocv/8 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


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
Clock_Ip_EnableSxoscOsconEocv (const struct Clock_Ip_XoscConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  Clock_Ip_ExternalOscillatorEmpty (Config_1(D)); [tail call]
  return;

}


Clock_Ip_DisableSxoscOsconEocv (Clock_Ip_NameType XoscName)
{
  <bb 2> [local count: 1073741824]:
  Clock_Ip_DisableClockIpExternalOscillatorEmpty (XoscName_1(D)); [tail call]
  return;

}


Clock_Ip_CompleteSxoscOsconEocv (const struct Clock_Ip_XoscConfigType * Config)
{
  <bb 2> [local count: 918908241]:
  Clock_Ip_CompleteFxoscOsconBypEocvGmSel (Config_2(D)); [tail call]
  return;

}


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


Clock_Ip_ResetSxoscOsconEocv (const struct Clock_Ip_XoscConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  Clock_Ip_ResetFxoscOsconBypEocvGmSel (Config_2(D)); [tail call]
  return;

}


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


Clock_Ip_DisableClockIpExternalOscillatorEmpty (Clock_Ip_NameType XoscName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


Clock_Ip_ExternalOscillatorEmpty (const struct Clock_Ip_XoscConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


