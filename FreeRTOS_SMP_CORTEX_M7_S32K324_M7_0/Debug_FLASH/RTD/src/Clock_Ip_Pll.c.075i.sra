Creating summary for Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/6:
  Descriptor for parameter 0 ConfigD.6590
    by_ref with 0 pass throughs
        * Access to offset: 0, size: 32, type: const Clock_Ip_NameType, alias_ptr_type: <unnamed type> *, nonarg: 1, reverse: 0
        * Access to offset: 32, size: 16, type: const uint16, alias_ptr_type: short unsigned int *, nonarg: 1, reverse: 0
----------------------------------------
  Descriptor for parameter 0 ConfigD.6590
    not a candidate for splitting


Creating summary for Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/5:
  Descriptor for parameter 0 PllNameD.6578
    not a candidate for splitting


Creating summary for Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/4:
  Descriptor for parameter 0 ConfigD.6573
    by_ref with 0 pass throughs
        * Access to offset: 0, size: 32, type: const Clock_Ip_NameType, alias_ptr_type: <unnamed type> *, nonarg: 1, reverse: 0
        * Access to offset: 32, size: 16, type: const uint16, alias_ptr_type: short unsigned int *, nonarg: 1, reverse: 0
        * Access to offset: 104, size: 8, type: const uint8, alias_ptr_type: unsigned char *, nonarg: 1, reverse: 0
        * Access to offset: 112, size: 16, type: const uint16, alias_ptr_type: short unsigned int *, nonarg: 1, reverse: 0
        * Access to offset: 128, size: 8, type: const uint8, alias_ptr_type: unsigned char *, nonarg: 1, reverse: 0
        * Access to offset: 136, size: 8, type: const uint8, alias_ptr_type: unsigned char *, nonarg: 1, reverse: 0
        * Access to offset: 144, size: 8, type: const uint8, alias_ptr_type: unsigned char *, nonarg: 1, reverse: 0
        * Access to offset: 160, size: 16, type: const uint16, alias_ptr_type: short unsigned int *, nonarg: 1, reverse: 0
        * Access to offset: 176, size: 16, type: const uint16, alias_ptr_type: short unsigned int *, nonarg: 1, reverse: 0
        * Access to offset: 192, size: 8, type: const uint8, alias_ptr_type: unsigned char *, nonarg: 1, reverse: 0
----------------------------------------
  Descriptor for parameter 0 ConfigD.6573
    not a candidate for splitting


Creating summary for Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/3:
  Descriptor for parameter 0 ConfigD.6569
    by_ref with 0 pass throughs
        * Access to offset: 0, size: 32, type: const Clock_Ip_NameType, alias_ptr_type: <unnamed type> *, nonarg: 1, reverse: 0
----------------------------------------
  Descriptor for parameter 0 ConfigD.6569
    param_size_limit: 4, size_reached: 4, by_ref
    * Access to unit offset: 0, unit size: 4, type: const Clock_Ip_NameType, alias_ptr_type: <unnamed type> *, certain


Creating summary for Clock_Ip_CallbackPllEmptyDisable/2:
  Descriptor for parameter 0 PllNameD.6566
    (locally) unused
    not a candidate for splitting


Creating summary for Clock_Ip_CallbackPllEmptyComplete/1:
  Descriptor for parameter 0 PllNameD.6563
    (locally) unused
    not a candidate for splitting


Creating summary for Clock_Ip_CallbackPllEmpty/0:
  Descriptor for parameter 0 ConfigD.6560
    unused with 0 call_uses
    by_ref with 0 pass throughs
----------------------------------------
  Descriptor for parameter 0 ConfigD.6560
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref



========== IPA-SRA IPA stage ==========

Summary for node Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/6:
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/5:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/5->Clock_Ip_TimeoutExpired/11:
  Summary for edge Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/5->Clock_Ip_StartTimeout/10:
    return value ignored

Summary for node Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/4:
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/3:
  Descriptor for parameter 0:
    param_size_limit: 4, size_reached: 4, by_ref
    * Access to unit offset: 0, unit size: 4, type: const Clock_Ip_NameType, alias_ptr_type: <unnamed type> *, certain


Summary for node Clock_Ip_CallbackPllEmptyDisable/2:
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting


Summary for node Clock_Ip_CallbackPllEmptyComplete/1:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting


Summary for node Clock_Ip_CallbackPllEmpty/0:
  Descriptor for parameter 0:
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref



Function Clock_Ip_CallbackPllEmpty/0 disqualified because it cannot be made local.
Function Clock_Ip_CallbackPllEmptyComplete/1 disqualified because it cannot be made local.
Function Clock_Ip_CallbackPllEmptyDisable/2 disqualified because it cannot be made local.
Function Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/3 disqualified because it cannot be made local.
Function Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/4 disqualified because it cannot be made local.
Function Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/5 disqualified because it cannot be made local.
Function Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/6 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Clock_Ip_TimeoutExpired/11 (Clock_Ip_TimeoutExpired) @06e2e460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/5 (1073741824 (estimated locally),3.88 per call) 
  Calls: 
Clock_Ip_StartTimeout/10 (Clock_Ip_StartTimeout) @06e2e380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/5 (114863530 (estimated locally),0.41 per call) 
  Calls: 
Clock_Ip_pxPll/9 (Clock_Ip_pxPll) @06e2b5a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/4 (read) Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/3 (read) Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/6 (read) Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/5 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8ClockFeatures/8 (Clock_Ip_au8ClockFeatures) @06e2b558
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/3 (read) Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/4 (read) Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/6 (read) Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/5 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axPllCallbacks/7 (Clock_Ip_axPllCallbacks) @06e2b1f8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_CallbackPllEmpty/0 (addr) Clock_Ip_CallbackPllEmpty/0 (addr) Clock_Ip_CallbackPllEmptyComplete/1 (addr) Clock_Ip_CallbackPllEmpty/0 (addr) Clock_Ip_CallbackPllEmptyDisable/2 (addr) Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/3 (addr) Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/4 (addr) Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/5 (addr) Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/6 (addr) Clock_Ip_CallbackPllEmptyDisable/2 (addr) 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/6 (Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize) @06e26380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/8 (read) Clock_Ip_pxPll/9 (read) 
  Referring: Clock_Ip_axPllCallbacks/7 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/5 (Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize) @06e26e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/8 (read) Clock_Ip_pxPll/9 (read) 
  Referring: Clock_Ip_axPllCallbacks/7 (addr) 
  Availability: available
  Function flags: count:276913041 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_TimeoutExpired/11 (1073741824 (estimated locally),3.88 per call) Clock_Ip_StartTimeout/10 (114863530 (estimated locally),0.41 per call) 
Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/4 (Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize) @06e26b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/8 (read) Clock_Ip_pxPll/9 (read) 
  Referring: Clock_Ip_axPllCallbacks/7 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/3 (Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize) @06e262a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/8 (read) Clock_Ip_pxPll/9 (read) 
  Referring: Clock_Ip_axPllCallbacks/7 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_CallbackPllEmptyDisable/2 (Clock_Ip_CallbackPllEmptyDisable) @06e26000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPllCallbacks/7 (addr) Clock_Ip_axPllCallbacks/7 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_CallbackPllEmptyComplete/1 (Clock_Ip_CallbackPllEmptyComplete) @06e1fb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPllCallbacks/7 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_CallbackPllEmpty/0 (Clock_Ip_CallbackPllEmpty) @06e1fd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPllCallbacks/7 (addr) Clock_Ip_axPllCallbacks/7 (addr) Clock_Ip_axPllCallbacks/7 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize (const struct Clock_Ip_PllConfigType * Config)
{
  uint32 Instance;
  <unnamed type> _1;
  unsigned char _2;
  short unsigned int _3;
  struct PLL_Type * _4;
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
  _4 = Clock_Ip_pxPll[Instance_10];
  _5 ={v} _4->PLLCR;
  _6 = _5 & 2147483647;
  _4->PLLCR ={v} _6;

  <bb 4> [local count: 1073741824]:
  return;

}


Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize (Clock_Ip_NameType PllName)
{
  uint32 Instance;
  uint32 PllLockStatus;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  boolean TimeoutOccurred;
  Clock_Ip_PllStatusReturnType PllStatus;
  unsigned char _1;
  struct PLL_Type * _2;
  long unsigned int _3;
  signed int _4;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int TimeoutTicks.0_8;

  <bb 2> [local count: 276913041]:
  # DEBUG BEGIN_STMT
  # DEBUG PllStatus => 2
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_au8ClockFeatures[PllName_13(D)][0];
  Instance_14 = (uint32) _1;
  # DEBUG Instance => Instance_14
  # DEBUG BEGIN_STMT
  _2 = Clock_Ip_pxPll[Instance_14];
  _3 ={v} _2->PLLCR;
  _4 = (signed int) _3;
  if (_4 >= 0)
    goto <bb 3>; [41.48%]
  else
    goto <bb 8>; [58.52%]

  <bb 3> [local count: 114863530]:
  # DEBUG BEGIN_STMT
  Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _6 ={v} _2->PLLSR;
  _7 = _6 >> 2;
  PllLockStatus_16 = _7 & 1;
  # DEBUG PllLockStatus => PllLockStatus_16
  # DEBUG BEGIN_STMT
  TimeoutTicks.0_8 = TimeoutTicks;
  TimeoutOccurred_18 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.0_8);
  # DEBUG TimeoutOccurred => TimeoutOccurred_18
  # DEBUG BEGIN_STMT
  if (PllLockStatus_16 == 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 5> [local count: 1014686025]:
  if (TimeoutOccurred_18 != 0)
    goto <bb 6>; [5.50%]
  else
    goto <bb 9>; [94.50%]

  <bb 9> [local count: 958878294]:
  goto <bb 4>; [100.00%]

  <bb 6> [local count: 114863531]:
  # TimeoutOccurred_5 = PHI <TimeoutOccurred_18(4), TimeoutOccurred_18(5)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_5 != 0)
    goto <bb 7>; [65.00%]
  else
    goto <bb 8>; [35.00%]

  <bb 7> [local count: 74661295]:
  # DEBUG BEGIN_STMT
  # DEBUG PllStatus => 1

  <bb 8> [local count: 276913042]:
  # PllStatus_9 = PHI <1(7), 0(2), 2(6)>
  # DEBUG PllStatus => PllStatus_9
  # DEBUG BEGIN_STMT
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return PllStatus_9;

}


Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize (const struct Clock_Ip_PllConfigType * Config)
{
  uint32 Value;
  uint32 Instance;
  <unnamed type> _1;
  unsigned char _2;
  short unsigned int _3;
  struct PLL_Type * _4;
  unsigned char _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  unsigned char _9;
  long unsigned int _10;
  long unsigned int _11;
  short unsigned int _12;
  long unsigned int _13;
  unsigned char _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;
  unsigned char _18;
  unsigned char _19;
  long unsigned int _20;
  long unsigned int _21;
  long unsigned int _22;
  long unsigned int _23;
  short unsigned int _24;
  long unsigned int _25;
  long unsigned int _26;
  short unsigned int _27;
  long unsigned int _28;
  long unsigned int _29;
  long unsigned int _30;
  long unsigned int _31;
  long unsigned int _32;
  long unsigned int iftmp.1_33;
  short unsigned int _47;
  short unsigned int _48;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_36(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  Instance_37 = (uint32) _2;
  # DEBUG Instance => Instance_37
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = Config_36(D)->Enable;
  if (_3 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 = Clock_Ip_pxPll[Instance_37];
  Value_38 ={v} _4->PLLDV;
  # DEBUG Value => Value_38
  # DEBUG BEGIN_STMT
  Value_39 = Value_38 & 4294938368;
  # DEBUG Value => Value_39
  # DEBUG BEGIN_STMT
  _5 = Config_36(D)->Predivider;
  _6 = (long unsigned int) _5;
  _7 = _6 << 12;
  _8 = _7 & 28672;
  _9 = Config_36(D)->MulFactorDiv;
  _10 = (long unsigned int) _9;
  _11 = _8 | _10;
  Value_40 = _11 | Value_39;
  # DEBUG Value => Value_40
  # DEBUG BEGIN_STMT
  _4->PLLDV ={v} Value_40;
  # DEBUG BEGIN_STMT
  Value_42 ={v} _4->PLLFD;
  # DEBUG Value => Value_42
  # DEBUG BEGIN_STMT
  Value_43 = Value_42 & 3221192704;
  # DEBUG Value => Value_43
  # DEBUG BEGIN_STMT
  _12 = Config_36(D)->NumeratorFracLoopDiv;
  _47 = _12 & 32767;
  _13 = (long unsigned int) _47;
  Value_44 = _13 | Value_43;
  # DEBUG Value => Value_44
  # DEBUG BEGIN_STMT
  _14 = Config_36(D)->SigmaDelta;
  _15 = (long unsigned int) _14;
  _16 = _15 << 30;
  _17 = _16 & 1073741824;
  Value_45 = _17 | Value_44;
  # DEBUG Value => Value_45
  # DEBUG BEGIN_STMT
  _4->PLLFD ={v} Value_45;
  # DEBUG BEGIN_STMT
  _18 = Config_36(D)->ModulationFrequency;
  if (_18 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 268435456]:

  <bb 5> [local count: 536870913]:
  # iftmp.1_33 = PHI <1073741824(3), 0(4)>
  _19 = Config_36(D)->ModulationType;
  _20 = (long unsigned int) _19;
  _21 = _20 << 29;
  _22 = _21 & 536870912;
  _23 = _22 | iftmp.1_33;
  _24 = Config_36(D)->IncrementStep;
  _48 = _24 & 2047;
  _25 = (long unsigned int) _48;
  _26 = _23 | _25;
  _27 = Config_36(D)->ModulationPeriod;
  _28 = (long unsigned int) _27;
  _29 = _28 << 16;
  _30 = _29 & 67043328;
  Value_49 = _26 | _30;
  # DEBUG Value => Value_49
  # DEBUG BEGIN_STMT
  _4->PLLFM ={v} Value_49;
  # DEBUG BEGIN_STMT
  _31 ={v} _4->PLLCR;
  _32 = _31 & 2147483647;
  _4->PLLCR ={v} _32;

  <bb 6> [local count: 1073741824]:
  return;

}


Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize (const struct Clock_Ip_PllConfigType * Config)
{
  uint32 Instance;
  <unnamed type> _1;
  unsigned char _2;
  struct PLL_Type * _3;
  long unsigned int _4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_7(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  Instance_8 = (uint32) _2;
  # DEBUG Instance => Instance_8
  # DEBUG BEGIN_STMT
  _3 = Clock_Ip_pxPll[Instance_8];
  _4 ={v} _3->PLLCR;
  _5 = _4 | 2147483648;
  _3->PLLCR ={v} _5;
  return;

}


Clock_Ip_CallbackPllEmptyDisable (Clock_Ip_NameType PllName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


Clock_Ip_CallbackPllEmptyComplete (Clock_Ip_NameType PllName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}


Clock_Ip_CallbackPllEmpty (const struct Clock_Ip_PllConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


