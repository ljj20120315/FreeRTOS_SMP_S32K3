Creating summary for Clock_Ip_DistributePll.part.0/62:


Creating summary for Clock_Ip_GetConfiguredFrequencyValue/25:
  Descriptor for parameter 0 ClockNameD.6733
    not a candidate for splitting


Creating summary for Clock_Ip_TimeoutExpired/24:
  Descriptor for parameter 0 StartTimeInOutD.6728
    unused with 1 call_uses
    by_ref with 1 pass throughs
  Descriptor for parameter 1 ElapsedTimeInOutD.6729
    not a candidate
  Descriptor for parameter 2 TimeoutTicksD.6730
    not a candidate
----------------------------------------
  Descriptor for parameter 0 StartTimeInOutD.6728
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref
  Descriptor for parameter 1 ElapsedTimeInOutD.6729
    not a candidate for splitting
  Descriptor for parameter 2 TimeoutTicksD.6730
    not a candidate for splitting


Creating summary for Clock_Ip_StartTimeout/23:
  Descriptor for parameter 0 StartTimeOutD.6722
    not a candidate for splitting
  Descriptor for parameter 1 ElapsedTimeOutD.6723
    not a candidate for splitting
  Descriptor for parameter 2 TimeoutTicksOutD.6724
    not a candidate for splitting
  Descriptor for parameter 3 TimeoutUsD.6725
    (locally) unused
    not a candidate for splitting


Creating summary for Clock_Ip_ReportClockErrors/22:
  Descriptor for parameter 0 ErrorD.6718
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1 ClockNameD.6719
    (locally) unused
    not a candidate for splitting


Creating summary for Clock_Ip_EnableSircInStandby/21:


Creating summary for Clock_Ip_DisableSircInStandby/20:


Creating summary for Clock_Ip_EnableFircInStandby/19:


Creating summary for Clock_Ip_DisableFircInStandby/18:


Creating summary for Clock_Ip_EnableModuleClock/17:
  Descriptor for parameter 0 ClockNameD.6702
    not a candidate for splitting


Creating summary for Clock_Ip_DisableModuleClock/16:
  Descriptor for parameter 0 ClockNameD.6698
    not a candidate for splitting


Creating summary for Clock_Ip_InstallNotificationsCallback/15:
  Descriptor for parameter 0 CallbackD.6695
    not a candidate for splitting


Creating summary for Clock_Ip_ClearClockMonitorStatus/14:
  Descriptor for parameter 0 ClockNameD.6691
    not a candidate for splitting


Creating summary for Clock_Ip_GetClockMonitorStatus/13:
  Descriptor for parameter 0 ClockNameD.6687
    not a candidate for splitting


Creating summary for Clock_Ip_DisableClockMonitor/12:
  Descriptor for parameter 0 ClockNameD.6683
    not a candidate for splitting


Creating summary for Clock_Ip_DistributePll/11:


Creating summary for Clock_Ip_GetPllStatus/10:


Creating summary for Clock_Ip_InitClock/9:
  Descriptor for parameter 0 ConfigD.6609
    not a candidate for splitting


Creating summary for Clock_Ip_Init/8:
  Descriptor for parameter 0 ConfigD.6604
    unused with 1 call_uses
    by_ref with 1 pass throughs
----------------------------------------
  Descriptor for parameter 0 ConfigD.6604
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref


Creating summary for Clock_Ip_ResetClockConfiguration/7:
  Descriptor for parameter 0 ConfigD.6587
    not a candidate for splitting


Creating summary for Clock_Ip_CallEmptyCallbacks/6:


Creating summary for Clock_Ip_UpdateDriverContext/5:
  Descriptor for parameter 0 ConfigD.6580
    unused with 0 call_uses
    by_ref with 0 pass throughs
----------------------------------------
  Descriptor for parameter 0 ConfigD.6580
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref


Creating summary for Clock_Ip_NotificatonsEmptyCallback/4:
  Descriptor for parameter 0 NotificationD.6576
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1 ClockNameD.6577
    (locally) unused
    not a candidate for splitting



========== IPA-SRA IPA stage ==========

Summary for node Clock_Ip_UpdateDriverContext.constprop/63:
  Descriptor for parameter 0:
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref

  Summary for edge Clock_Ip_UpdateDriverContext.constprop/63->Clock_Ip_ClockInitializeObjects/52:
    return value ignored
  Summary for edge Clock_Ip_UpdateDriverContext.constprop/63->Clock_Ip_CallEmptyCallbacks/6:
    return value ignored

Summary for node Clock_Ip_DistributePll.part.0/62:
  No parameter information. 

  Summary for edge Clock_Ip_DistributePll.part.0/62->Clock_Ip_SpecificPeripheralClockInitialization/51:
    return value ignored

Summary for node Clock_Ip_GetConfiguredFrequencyValue/25:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node Clock_Ip_TimeoutExpired/24:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting

  Summary for edge Clock_Ip_TimeoutExpired/24->OsIf_GetElapsed/61:
    Parameter 0:
      Scalar param sources: 0
      Pointer pass through from the param given above, safe_to_import_accesses: 1
    Parameter 1:

Summary for node Clock_Ip_StartTimeout/23:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting
  Descriptor for parameter 3:
    (locally) unused
    not a candidate for splitting

  Summary for edge Clock_Ip_StartTimeout/23->OsIf_MicrosToTicks/60:
    Parameter 0:
      Scalar param sources: 3
    Parameter 1:
  Summary for edge Clock_Ip_StartTimeout/23->OsIf_GetCounter/59:

Summary for node Clock_Ip_ReportClockErrors/22:
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1:
    (locally) unused
    not a candidate for splitting


Summary for node Clock_Ip_EnableSircInStandby/21:
  No parameter information. 

  Summary for edge Clock_Ip_EnableSircInStandby/21->EnableSircInStandbyMode/58:
    return value ignored
  Summary for edge Clock_Ip_EnableSircInStandby/21->Clock_Ip_ClockInitializeObjects/52:
    return value ignored

Summary for node Clock_Ip_DisableSircInStandby/20:
  No parameter information. 

  Summary for edge Clock_Ip_DisableSircInStandby/20->DisableSircInStandbyMode/57:
    return value ignored
  Summary for edge Clock_Ip_DisableSircInStandby/20->Clock_Ip_ClockInitializeObjects/52:
    return value ignored

Summary for node Clock_Ip_EnableFircInStandby/19:
  No parameter information. 

  Summary for edge Clock_Ip_EnableFircInStandby/19->EnableFircInStandbyMode/56:
    return value ignored
  Summary for edge Clock_Ip_EnableFircInStandby/19->Clock_Ip_ClockInitializeObjects/52:
    return value ignored

Summary for node Clock_Ip_DisableFircInStandby/18:
  No parameter information. 

  Summary for edge Clock_Ip_DisableFircInStandby/18->DisableFircInStandbyMode/55:
    return value ignored
  Summary for edge Clock_Ip_DisableFircInStandby/18->Clock_Ip_ClockInitializeObjects/52:
    return value ignored

Summary for node Clock_Ip_EnableModuleClock/17:
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node Clock_Ip_DisableModuleClock/16:
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node Clock_Ip_InstallNotificationsCallback/15:
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node Clock_Ip_ClearClockMonitorStatus/14:
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node Clock_Ip_GetClockMonitorStatus/13:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node Clock_Ip_DisableClockMonitor/12:
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node Clock_Ip_DistributePll/11:
  No parameter information. 

  Summary for edge Clock_Ip_DistributePll/11->Clock_Ip_DistributePll.part.0/62:
    return value ignored

Summary for node Clock_Ip_GetPllStatus/10:
  Returns value
  No parameter information. 


Summary for node Clock_Ip_InitClock/9:
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge Clock_Ip_InitClock/9->Clock_Ip_SpecificPeripheralClockInitialization/51:
    return value ignored
  Summary for edge Clock_Ip_InitClock/9->Clock_Ip_SetFlashWaitStates/45:
    return value ignored
  Summary for edge Clock_Ip_InitClock/9->Clock_Ip_SetRamWaitStates/44:
    return value ignored
  Summary for edge Clock_Ip_InitClock/9->Clock_Ip_UpdateDriverContext.constprop/63:
    return value ignored
  Summary for edge Clock_Ip_InitClock/9->Clock_Ip_ResetClockConfiguration/7:
    return value ignored
  Summary for edge Clock_Ip_InitClock/9->Clock_Ip_SpecificPlatformInitClock/26:
    return value ignored

Summary for node Clock_Ip_Init/8:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref

  Summary for edge Clock_Ip_Init/8->Clock_Ip_DistributePll/11:
    return value ignored
  Summary for edge Clock_Ip_Init/8->Clock_Ip_GetPllStatus/10:
  Summary for edge Clock_Ip_Init/8->Clock_Ip_InitClock/9:
    return value ignored
    Parameter 0:
      Scalar param sources: 0
      Pointer pass through from the param given above, safe_to_import_accesses: 1

Summary for node Clock_Ip_ResetClockConfiguration/7:
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node Clock_Ip_CallEmptyCallbacks/6:
  No parameter information. 


Summary for node Clock_Ip_NotificatonsEmptyCallback/4:
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1:
    (locally) unused
    not a candidate for splitting



Function Clock_Ip_NotificatonsEmptyCallback/4 disqualified because it cannot be made local.
Function Clock_Ip_DistributePll/11 disqualified because it cannot be made local.
Function Clock_Ip_GetPllStatus/10 disqualified because it cannot be made local.
Function Clock_Ip_InitClock/9 disqualified because it cannot be made local.
Function Clock_Ip_Init/8 disqualified because it cannot be made local.
Function Clock_Ip_DisableClockMonitor/12 disqualified because it cannot be made local.
Function Clock_Ip_GetClockMonitorStatus/13 disqualified because it cannot be made local.
Function Clock_Ip_ClearClockMonitorStatus/14 disqualified because it cannot be made local.
Function Clock_Ip_InstallNotificationsCallback/15 disqualified because it cannot be made local.
Function Clock_Ip_DisableModuleClock/16 disqualified because it cannot be made local.
Function Clock_Ip_EnableModuleClock/17 disqualified because it cannot be made local.
Function Clock_Ip_DisableFircInStandby/18 disqualified because it cannot be made local.
Function Clock_Ip_EnableFircInStandby/19 disqualified because it cannot be made local.
Function Clock_Ip_DisableSircInStandby/20 disqualified because it cannot be made local.
Function Clock_Ip_EnableSircInStandby/21 disqualified because it cannot be made local.
Function Clock_Ip_ReportClockErrors/22 disqualified because it cannot be made local.
Function Clock_Ip_StartTimeout/23 disqualified because it cannot be made local.
Function Clock_Ip_TimeoutExpired/24 disqualified because it cannot be made local.
Function Clock_Ip_GetConfiguredFrequencyValue/25 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Clock_Ip_UpdateDriverContext.constprop.0/63 (Clock_Ip_UpdateDriverContext.constprop) @07174540
  Type: function definition analyzed
  Visibility:
  References: Clock_Ip_bObjectsAreInitialized/1 (read) Clock_Ip_bObjectsAreInitialized/1 (write) 
  Referring: 
  Clone of Clock_Ip_UpdateDriverContext/5
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Clock_Ip_InitClock/9 (118111600 (estimated locally),1.00 per call) 
  Calls: Clock_Ip_ClockInitializeObjects/52 (354334800 (estimated locally),0.33 per call) Clock_Ip_CallEmptyCallbacks/6 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_DistributePll.part.0/62 (Clock_Ip_DistributePll.part.0) @06f6a8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Clock_Ip_aeSourceTypeClockName/46 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8SelectorCallbackIndex/47 (read) Clock_Ip_axSelectorCallbacks/48 (read) Clock_Ip_pxConfig/2 (read) Clock_Ip_bClockTreeIsConsumingPll/0 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8GateCallbackIndex/49 (read) Clock_Ip_axGateCallbacks/50 (read) Clock_Ip_pxConfig/2 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8CmuCallbackIndex/28 (read) Clock_Ip_axCmuCallbacks/29 (read) Clock_Ip_pxConfig/2 (read) 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local split_part optimize_size
  Called by: Clock_Ip_DistributePll/11 (118111600 (estimated locally),0.70 per call) 
  Calls: Clock_Ip_SpecificPeripheralClockInitialization/51 (59055800 (estimated locally),0.50 per call) 
   Indirect call(324914280 (estimated locally),2.75 per call)  Num speculative call targets: 0
   Indirect call(477815112 (estimated locally),4.05 per call)  Num speculative call targets: 0
   Indirect call(236223196 (estimated locally),2.00 per call)  Num speculative call targets: 0
OsIf_GetElapsed/61 (OsIf_GetElapsed) @06fb0c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_TimeoutExpired/24 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OsIf_MicrosToTicks/60 (OsIf_MicrosToTicks) @06fb0a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_StartTimeout/23 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OsIf_GetCounter/59 (OsIf_GetCounter) @06fb09a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_StartTimeout/23 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EnableSircInStandbyMode/58 (EnableSircInStandbyMode) @06fb0700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_EnableSircInStandby/21 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
DisableSircInStandbyMode/57 (DisableSircInStandbyMode) @06fb0540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_DisableSircInStandby/20 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EnableFircInStandbyMode/56 (EnableFircInStandbyMode) @06fb0380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_EnableFircInStandby/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
DisableFircInStandbyMode/55 (DisableFircInStandbyMode) @06fb01c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_DisableFircInStandby/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_aeHwPllName/54 (Clock_Ip_aeHwPllName) @06fa3c60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_GetPllStatus/10 (read) 
  Availability: not_available
  Varpool flags: read-only
FunctionWasCalled.0/53 (FunctionWasCalled) @06fa3480
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Clock_Ip_CallEmptyCallbacks/6 (read) Clock_Ip_CallEmptyCallbacks/6 (write) 
  Availability: available
  Varpool flags: initialized
Clock_Ip_ClockInitializeObjects/52 (Clock_Ip_ClockInitializeObjects) @06f6ab60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_UpdateDriverContext.constprop.0/63 (354334800 (estimated locally),0.33 per call) Clock_Ip_EnableSircInStandby/21 (354334800 (estimated locally),0.33 per call) Clock_Ip_DisableSircInStandby/20 (354334800 (estimated locally),0.33 per call) Clock_Ip_EnableFircInStandby/19 (354334800 (estimated locally),0.33 per call) Clock_Ip_DisableFircInStandby/18 (354334800 (estimated locally),0.33 per call) 
  Calls: 
Clock_Ip_SpecificPeripheralClockInitialization/51 (Clock_Ip_SpecificPeripheralClockInitialization) @06f6a700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_DistributePll.part.0/62 (59055800 (estimated locally),0.50 per call) Clock_Ip_InitClock/9 (59055800 (estimated locally),0.50 per call) 
  Calls: 
Clock_Ip_axGateCallbacks/50 (Clock_Ip_axGateCallbacks) @06f9c870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_DisableModuleClock/16 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_DistributePll.part.0/62 (read) Clock_Ip_CallEmptyCallbacks/6 (read) Clock_Ip_CallEmptyCallbacks/6 (read) Clock_Ip_EnableModuleClock/17 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8GateCallbackIndex/49 (Clock_Ip_au8GateCallbackIndex) @06f9c828
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_DistributePll.part.0/62 (read) Clock_Ip_DisableModuleClock/16 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_EnableModuleClock/17 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axSelectorCallbacks/48 (Clock_Ip_axSelectorCallbacks) @06f9c798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_CallEmptyCallbacks/6 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_ResetClockConfiguration/7 (read) Clock_Ip_DistributePll.part.0/62 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8SelectorCallbackIndex/47 (Clock_Ip_au8SelectorCallbackIndex) @06f9c750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_InitClock/9 (read) Clock_Ip_ResetClockConfiguration/7 (read) Clock_Ip_DistributePll.part.0/62 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_aeSourceTypeClockName/46 (Clock_Ip_aeSourceTypeClockName) @06f9c708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_InitClock/9 (read) Clock_Ip_DistributePll.part.0/62 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_SetFlashWaitStates/45 (Clock_Ip_SetFlashWaitStates) @06f6a620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_InitClock/9 (118111600 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_SetRamWaitStates/44 (Clock_Ip_SetRamWaitStates) @06f6a540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_InitClock/9 (118111600 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_axFracDivCallbacks/43 (Clock_Ip_axFracDivCallbacks) @06f9c4c8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_CallEmptyCallbacks/6 (read) Clock_Ip_ResetClockConfiguration/7 (read) Clock_Ip_CallEmptyCallbacks/6 (read) Clock_Ip_InitClock/9 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8FractionalDividerCallbackIndex/42 (Clock_Ip_au8FractionalDividerCallbackIndex) @06f9c480
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ResetClockConfiguration/7 (read) Clock_Ip_InitClock/9 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axPllCallbacks/41 (Clock_Ip_axPllCallbacks) @06f9c318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_CallEmptyCallbacks/6 (read) Clock_Ip_CallEmptyCallbacks/6 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_ResetClockConfiguration/7 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_GetPllStatus/10 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8PllCallbackIndex/40 (Clock_Ip_au8PllCallbackIndex) @06f9c2d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ResetClockConfiguration/7 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_GetPllStatus/10 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axDividerCallbacks/39 (Clock_Ip_axDividerCallbacks) @06f9c1f8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_CallEmptyCallbacks/6 (read) Clock_Ip_InitClock/9 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8DividerCallbackIndex/38 (Clock_Ip_au8DividerCallbackIndex) @06f9c1b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_InitClock/9 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axDividerTriggerCallbacks/37 (Clock_Ip_axDividerTriggerCallbacks) @06f9c120
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_CallEmptyCallbacks/6 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8DividerTriggerCallbackIndex/36 (Clock_Ip_au8DividerTriggerCallbackIndex) @06f9c0d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axPcfsCallbacks/35 (Clock_Ip_axPcfsCallbacks) @06f9c048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_CallEmptyCallbacks/6 (read) Clock_Ip_InitClock/9 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8PcfsCallbackIndex/34 (Clock_Ip_au8PcfsCallbackIndex) @06f9c000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_InitClock/9 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axExtOscCallbacks/33 (Clock_Ip_axExtOscCallbacks) @06f77ee8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ResetClockConfiguration/7 (read) Clock_Ip_CallEmptyCallbacks/6 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8XoscCallbackIndex/32 (Clock_Ip_au8XoscCallbackIndex) @06f77ea0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ResetClockConfiguration/7 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axIntOscCallbacks/31 (Clock_Ip_axIntOscCallbacks) @06f77e10
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_CallEmptyCallbacks/6 (read) Clock_Ip_InitClock/9 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8IrcoscCallbackIndex/30 (Clock_Ip_au8IrcoscCallbackIndex) @06f77dc8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_InitClock/9 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axCmuCallbacks/29 (Clock_Ip_axCmuCallbacks) @06f77cf0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_CallEmptyCallbacks/6 (read) Clock_Ip_CallEmptyCallbacks/6 (read) Clock_Ip_GetClockMonitorStatus/13 (read) Clock_Ip_CallEmptyCallbacks/6 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_DistributePll.part.0/62 (read) Clock_Ip_DisableClockMonitor/12 (read) Clock_Ip_CallEmptyCallbacks/6 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_ClearClockMonitorStatus/14 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8CmuCallbackIndex/28 (Clock_Ip_au8CmuCallbackIndex) @06f77ca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_InitClock/9 (read) Clock_Ip_DistributePll.part.0/62 (read) Clock_Ip_DisableClockMonitor/12 (read) Clock_Ip_GetClockMonitorStatus/13 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_ClearClockMonitorStatus/14 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8ClockFeatures/27 (Clock_Ip_au8ClockFeatures) @06f77c60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_InitClock/9 (read) Clock_Ip_DisableModuleClock/16 (read) Clock_Ip_DistributePll.part.0/62 (read) Clock_Ip_DisableClockMonitor/12 (read) Clock_Ip_GetClockMonitorStatus/13 (read) Clock_Ip_ClearClockMonitorStatus/14 (read) Clock_Ip_ResetClockConfiguration/7 (read) Clock_Ip_ResetClockConfiguration/7 (read) Clock_Ip_ResetClockConfiguration/7 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_GetPllStatus/10 (read) Clock_Ip_ResetClockConfiguration/7 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_DistributePll.part.0/62 (read) Clock_Ip_DistributePll.part.0/62 (read) Clock_Ip_EnableModuleClock/17 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_SpecificPlatformInitClock/26 (Clock_Ip_SpecificPlatformInitClock) @06f6a380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_InitClock/9 (118111600 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_GetConfiguredFrequencyValue/25 (Clock_Ip_GetConfiguredFrequencyValue) @06f54620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_pxConfig/2 (read) 
  Referring: 
  Availability: available
  Function flags: count:164090757 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_TimeoutExpired/24 (Clock_Ip_TimeoutExpired) @06f540e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OsIf_GetElapsed/61 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_StartTimeout/23 (Clock_Ip_StartTimeout) @06f54d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OsIf_MicrosToTicks/60 (1073741824 (estimated locally),1.00 per call) OsIf_GetCounter/59 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ReportClockErrors/22 (Clock_Ip_ReportClockErrors) @06f54a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_pfkNotificationsCallback/3 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call)  Num speculative call targets: 0
Clock_Ip_EnableSircInStandby/21 (Clock_Ip_EnableSircInStandby) @06f547e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_bObjectsAreInitialized/1 (read) Clock_Ip_bObjectsAreInitialized/1 (write) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EnableSircInStandbyMode/58 (1073741824 (estimated locally),1.00 per call) Clock_Ip_ClockInitializeObjects/52 (354334800 (estimated locally),0.33 per call) 
Clock_Ip_DisableSircInStandby/20 (Clock_Ip_DisableSircInStandby) @06f54540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_bObjectsAreInitialized/1 (read) Clock_Ip_bObjectsAreInitialized/1 (write) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: DisableSircInStandbyMode/57 (1073741824 (estimated locally),1.00 per call) Clock_Ip_ClockInitializeObjects/52 (354334800 (estimated locally),0.33 per call) 
Clock_Ip_EnableFircInStandby/19 (Clock_Ip_EnableFircInStandby) @06f542a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_bObjectsAreInitialized/1 (read) Clock_Ip_bObjectsAreInitialized/1 (write) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EnableFircInStandbyMode/56 (1073741824 (estimated locally),1.00 per call) Clock_Ip_ClockInitializeObjects/52 (354334800 (estimated locally),0.33 per call) 
Clock_Ip_DisableFircInStandby/18 (Clock_Ip_DisableFircInStandby) @06f54000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_bObjectsAreInitialized/1 (read) Clock_Ip_bObjectsAreInitialized/1 (write) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: DisableFircInStandbyMode/55 (1073741824 (estimated locally),1.00 per call) Clock_Ip_ClockInitializeObjects/52 (354334800 (estimated locally),0.33 per call) 
Clock_Ip_EnableModuleClock/17 (Clock_Ip_EnableModuleClock) @06f4db60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8GateCallbackIndex/49 (read) Clock_Ip_axGateCallbacks/50 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call)  Num speculative call targets: 0
Clock_Ip_DisableModuleClock/16 (Clock_Ip_DisableModuleClock) @06f4d620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8GateCallbackIndex/49 (read) Clock_Ip_axGateCallbacks/50 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call)  Num speculative call targets: 0
Clock_Ip_InstallNotificationsCallback/15 (Clock_Ip_InstallNotificationsCallback) @06f4d0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_pfkNotificationsCallback/3 (write) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_ClearClockMonitorStatus/14 (Clock_Ip_ClearClockMonitorStatus) @06f4dd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8CmuCallbackIndex/28 (read) Clock_Ip_axCmuCallbacks/29 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call)  Num speculative call targets: 0
Clock_Ip_GetClockMonitorStatus/13 (Clock_Ip_GetClockMonitorStatus) @06f4da80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8CmuCallbackIndex/28 (read) Clock_Ip_axCmuCallbacks/29 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call)  Num speculative call targets: 0
Clock_Ip_DisableClockMonitor/12 (Clock_Ip_DisableClockMonitor) @06f4d7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8CmuCallbackIndex/28 (read) Clock_Ip_axCmuCallbacks/29 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call)  Num speculative call targets: 0
Clock_Ip_DistributePll/11 (Clock_Ip_DistributePll) @06f4d540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_pxConfig/2 (read) 
  Referring: 
  Availability: available
  Function flags: count:168730857 (estimated locally) body optimize_size
  Called by: Clock_Ip_Init/8 (116930483 (estimated locally),0.11 per call) 
  Calls: Clock_Ip_DistributePll.part.0/62 (118111600 (estimated locally),0.70 per call) 
Clock_Ip_GetPllStatus/10 (Clock_Ip_GetPllStatus) @06f4d2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_aeHwPllName/54 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8PllCallbackIndex/40 (read) Clock_Ip_axPllCallbacks/41 (read) 
  Referring: 
  Availability: available
  Function flags: count:114863530 (estimated locally) body optimize_size
  Called by: Clock_Ip_Init/8 (354334800 (estimated locally),0.33 per call) 
  Calls: 
   Indirect call(1014686026 (estimated locally),8.83 per call)  Num speculative call targets: 0
Clock_Ip_InitClock/9 (Clock_Ip_InitClock) @06f4d000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_pxConfig/2 (write) Clock_Ip_pxConfig/2 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8CmuCallbackIndex/28 (read) Clock_Ip_axCmuCallbacks/29 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8IrcoscCallbackIndex/30 (read) Clock_Ip_axIntOscCallbacks/31 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8XoscCallbackIndex/32 (read) Clock_Ip_axExtOscCallbacks/33 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8PcfsCallbackIndex/34 (read) Clock_Ip_axPcfsCallbacks/35 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8DividerTriggerCallbackIndex/36 (read) Clock_Ip_axDividerTriggerCallbacks/37 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8DividerCallbackIndex/38 (read) Clock_Ip_axDividerCallbacks/39 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8DividerTriggerCallbackIndex/36 (read) Clock_Ip_axDividerTriggerCallbacks/37 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8PllCallbackIndex/40 (read) Clock_Ip_axPllCallbacks/41 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8CmuCallbackIndex/28 (read) Clock_Ip_axCmuCallbacks/29 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8XoscCallbackIndex/32 (read) Clock_Ip_axExtOscCallbacks/33 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8PllCallbackIndex/40 (read) Clock_Ip_axPllCallbacks/41 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8FractionalDividerCallbackIndex/42 (read) Clock_Ip_axFracDivCallbacks/43 (read) Clock_Ip_pfkNotificationsCallback/3 (read) Clock_Ip_pfkNotificationsCallback/3 (read) Clock_Ip_pfkNotificationsCallback/3 (read) Clock_Ip_pfkNotificationsCallback/3 (read) Clock_Ip_bClockTreeIsConsumingPll/0 (write) Clock_Ip_aeSourceTypeClockName/46 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8SelectorCallbackIndex/47 (read) Clock_Ip_axSelectorCallbacks/48 (read) Clock_Ip_bClockTreeIsConsumingPll/0 (write) Clock_Ip_bClockTreeIsConsumingPll/0 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8GateCallbackIndex/49 (read) Clock_Ip_axGateCallbacks/50 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8CmuCallbackIndex/28 (read) Clock_Ip_axCmuCallbacks/29 (read) 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: Clock_Ip_Init/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: Clock_Ip_SpecificPeripheralClockInitialization/51 (59055800 (estimated locally),0.50 per call) Clock_Ip_SetFlashWaitStates/45 (118111600 (estimated locally),1.00 per call) Clock_Ip_SetRamWaitStates/44 (118111600 (estimated locally),1.00 per call) Clock_Ip_UpdateDriverContext.constprop.0/63 (118111600 (estimated locally),1.00 per call) Clock_Ip_ResetClockConfiguration/7 (118111600 (estimated locally),1.00 per call) Clock_Ip_SpecificPlatformInitClock/26 (118111600 (estimated locally),1.00 per call) 
   Indirect call(236223196 (estimated locally),2.00 per call)  Num speculative call targets: 0
   Indirect call(477815112 (estimated locally),4.05 per call)  Num speculative call targets: 0
   Indirect call(630715945 (estimated locally),5.34 per call)  Num speculative call targets: 0
   Indirect call(118111600 (estimated locally),1.00 per call)  Num speculative call targets: 0
   Indirect call(118111600 (estimated locally),1.00 per call)  Num speculative call targets: 0
   Indirect call(118111600 (estimated locally),1.00 per call)  Num speculative call targets: 0
   Indirect call(118111600 (estimated locally),1.00 per call)  Num speculative call targets: 0
   Indirect call(118111600 (estimated locally),1.00 per call)  Num speculative call targets: 0
   Indirect call(118111600 (estimated locally),1.00 per call)  Num speculative call targets: 0
   Indirect call(236258635 (estimated locally),2.00 per call)  Num speculative call targets: 0
   Indirect call(472446391 (estimated locally),4.00 per call)  Num speculative call targets: 0
   Indirect call(118111600 (estimated locally),1.00 per call)  Num speculative call targets: 0
   Indirect call(118111600 (estimated locally),1.00 per call)  Num speculative call targets: 0
   Indirect call(955630225 (estimated locally),8.09 per call)  Num speculative call targets: 0
   Indirect call(118111600 (estimated locally),1.00 per call)  Num speculative call targets: 0
   Indirect call(118111600 (estimated locally),1.00 per call)  Num speculative call targets: 0
   Indirect call(236258635 (estimated locally),2.00 per call)  Num speculative call targets: 0
   Indirect call(236258635 (estimated locally),2.00 per call)  Num speculative call targets: 0
   Indirect call(330712475 (estimated locally),2.80 per call)  Num speculative call targets: 0
Clock_Ip_Init/8 (Clock_Ip_Init) @06e9cb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_bClockTreeIsConsumingPll/0 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_DistributePll/11 (116930483 (estimated locally),0.11 per call) Clock_Ip_GetPllStatus/10 (354334800 (estimated locally),0.33 per call) Clock_Ip_InitClock/9 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ResetClockConfiguration/7 (Clock_Ip_ResetClockConfiguration) @06e9c620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8SelectorCallbackIndex/47 (read) Clock_Ip_axSelectorCallbacks/48 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8FractionalDividerCallbackIndex/42 (read) Clock_Ip_axFracDivCallbacks/43 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8PllCallbackIndex/40 (read) Clock_Ip_axPllCallbacks/41 (read) Clock_Ip_au8ClockFeatures/27 (read) Clock_Ip_au8XoscCallbackIndex/32 (read) Clock_Ip_axExtOscCallbacks/33 (read) 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: Clock_Ip_InitClock/9 (118111600 (estimated locally),1.00 per call) 
  Calls: 
   Indirect call(236258635 (estimated locally),2.00 per call)  Num speculative call targets: 0
   Indirect call(118111600 (estimated locally),1.00 per call)  Num speculative call targets: 0
   Indirect call(118111600 (estimated locally),1.00 per call)  Num speculative call targets: 0
   Indirect call(955630225 (estimated locally),8.09 per call)  Num speculative call targets: 0
Clock_Ip_CallEmptyCallbacks/6 (Clock_Ip_CallEmptyCallbacks) @06e9cd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: FunctionWasCalled.0/53 (read) FunctionWasCalled.0/53 (write) Clock_Ip_axCmuCallbacks/29 (read) Clock_Ip_axCmuCallbacks/29 (read) Clock_Ip_axCmuCallbacks/29 (read) Clock_Ip_axCmuCallbacks/29 (read) Clock_Ip_axDividerCallbacks/39 (read) Clock_Ip_axDividerTriggerCallbacks/37 (read) Clock_Ip_axExtOscCallbacks/33 (read) Clock_Ip_axFracDivCallbacks/43 (read) Clock_Ip_axFracDivCallbacks/43 (read) Clock_Ip_axGateCallbacks/50 (read) Clock_Ip_axGateCallbacks/50 (read) Clock_Ip_axIntOscCallbacks/31 (read) Clock_Ip_axPllCallbacks/41 (read) Clock_Ip_axPllCallbacks/41 (read) Clock_Ip_axSelectorCallbacks/48 (read) Clock_Ip_axPcfsCallbacks/35 (read) 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Clock_Ip_UpdateDriverContext.constprop.0/63 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
   Indirect call(536870913 (estimated locally),0.50 per call)  Num speculative call targets: 0
   Indirect call(536870913 (estimated locally),0.50 per call)  Num speculative call targets: 0
   Indirect call(536870913 (estimated locally),0.50 per call)  Num speculative call targets: 0
   Indirect call(536870913 (estimated locally),0.50 per call)  Num speculative call targets: 0
   Indirect call(536870913 (estimated locally),0.50 per call)  Num speculative call targets: 0
   Indirect call(536870913 (estimated locally),0.50 per call)  Num speculative call targets: 0
   Indirect call(536870913 (estimated locally),0.50 per call)  Num speculative call targets: 0
   Indirect call(536870913 (estimated locally),0.50 per call)  Num speculative call targets: 0
   Indirect call(536870913 (estimated locally),0.50 per call)  Num speculative call targets: 0
   Indirect call(536870913 (estimated locally),0.50 per call)  Num speculative call targets: 0
   Indirect call(536870913 (estimated locally),0.50 per call)  Num speculative call targets: 0
   Indirect call(536870913 (estimated locally),0.50 per call)  Num speculative call targets: 0
   Indirect call(536870913 (estimated locally),0.50 per call)  Num speculative call targets: 0
   Indirect call(536870913 (estimated locally),0.50 per call)  Num speculative call targets: 0
   Indirect call(536870913 (estimated locally),0.50 per call)  Num speculative call targets: 0
   Indirect call(536870913 (estimated locally),0.50 per call)  Num speculative call targets: 0
Clock_Ip_UpdateDriverContext/5 (Clock_Ip_UpdateDriverContext) @06e9ca80
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_NotificatonsEmptyCallback/4 (Clock_Ip_NotificatonsEmptyCallback) @06e9c7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_pfkNotificationsCallback/3 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_pfkNotificationsCallback/3 (Clock_Ip_pfkNotificationsCallback) @06e9a948
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Clock_Ip_NotificatonsEmptyCallback/4 (addr) 
  Referring: Clock_Ip_InstallNotificationsCallback/15 (write) Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_InitClock/9 (read) Clock_Ip_ReportClockErrors/22 (read) 
  Availability: available
  Varpool flags: initialized
Clock_Ip_pxConfig/2 (Clock_Ip_pxConfig) @06e9a438
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Clock_Ip_InitClock/9 (write) Clock_Ip_InitClock/9 (read) Clock_Ip_DistributePll.part.0/62 (read) Clock_Ip_DistributePll.part.0/62 (read) Clock_Ip_DistributePll.part.0/62 (read) Clock_Ip_DistributePll/11 (read) Clock_Ip_GetConfiguredFrequencyValue/25 (read) 
  Availability: available
  Varpool flags:
Clock_Ip_bObjectsAreInitialized/1 (Clock_Ip_bObjectsAreInitialized) @06e9a3f0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Clock_Ip_EnableFircInStandby/19 (read) Clock_Ip_EnableFircInStandby/19 (write) Clock_Ip_DisableSircInStandby/20 (read) Clock_Ip_DisableSircInStandby/20 (write) Clock_Ip_UpdateDriverContext.constprop.0/63 (read) Clock_Ip_UpdateDriverContext.constprop.0/63 (write) Clock_Ip_DisableFircInStandby/18 (read) Clock_Ip_DisableFircInStandby/18 (write) Clock_Ip_EnableSircInStandby/21 (read) Clock_Ip_EnableSircInStandby/21 (write) 
  Availability: available
  Varpool flags:
Clock_Ip_bClockTreeIsConsumingPll/0 (Clock_Ip_bClockTreeIsConsumingPll) @06e9a360
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Clock_Ip_InitClock/9 (read) Clock_Ip_DistributePll.part.0/62 (read) Clock_Ip_InitClock/9 (write) Clock_Ip_InitClock/9 (write) Clock_Ip_Init/8 (read) 
  Availability: available
  Varpool flags:
Clock_Ip_DistributePll.part.0 ()
{
  uint32 Index;
  uint32 CallbackIndex;
  const struct Clock_Ip_ClockConfigType * Clock_Ip_pxConfig.13_1;
  <unnamed type> _3;
  <unnamed type> _4;
  <unnamed type> _5;
  unsigned char _6;
  int _7;
  unsigned char _8;
  void (*<T68a>) (const struct Clock_Ip_SelectorConfigType *) _10;
  const struct Clock_Ip_SelectorConfigType * _11;
  unsigned char _13;
  long unsigned int _14;
  _Bool Clock_Ip_bClockTreeIsConsumingPll.14_15;
  const struct Clock_Ip_ClockConfigType * Clock_Ip_pxConfig.17_16;
  <unnamed type> _18;
  unsigned char _19;
  int _20;
  unsigned char _21;
  void (*<T696>) (const struct Clock_Ip_GateConfigType *) _23;
  const struct Clock_Ip_GateConfigType * _24;
  unsigned char _26;
  long unsigned int _27;
  const struct Clock_Ip_ClockConfigType * Clock_Ip_pxConfig.17_28;
  const struct Clock_IP_SpecificPeriphConfigType * _29;
  const struct Clock_Ip_ClockConfigType * Clock_Ip_pxConfig.21_30;
  <unnamed type> _32;
  unsigned char _33;
  int _34;
  unsigned char _35;
  void (*<T6a6>) (const struct Clock_Ip_CmuConfigType *) _37;
  const struct Clock_Ip_CmuConfigType * _38;
  unsigned char _40;
  long unsigned int _41;

  <bb 14> [local count: 118111600]:
  goto <bb 5>; [100.00%]

  <bb 2> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  _3 = Clock_Ip_pxConfig.13_1->Selectors[Index_2].Value;
  _4 = Clock_Ip_aeSourceTypeClockName[_3];
  if (_4 == 3)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 324914280]:
  # DEBUG BEGIN_STMT
  _5 = Clock_Ip_pxConfig.13_1->Selectors[Index_2].Name;
  _6 = Clock_Ip_au8ClockFeatures[_5][1];
  _7 = (int) _6;
  _8 = Clock_Ip_au8SelectorCallbackIndex[_7];
  CallbackIndex_9 = (uint32) _8;
  # DEBUG CallbackIndex => CallbackIndex_9
  # DEBUG BEGIN_STMT
  _10 = Clock_Ip_axSelectorCallbacks[CallbackIndex_9].Set;
  _11 = &Clock_Ip_pxConfig.13_1->Selectors[Index_2];
  _10 (_11);

  <bb 4> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  Index_12 = Index_2 + 1;
  # DEBUG Index => Index_12

  <bb 5> [local count: 1073741824]:
  # Index_2 = PHI <Index_12(4), 0(14)>
  # DEBUG Index => Index_2
  # DEBUG BEGIN_STMT
  Clock_Ip_pxConfig.13_1 = Clock_Ip_pxConfig;
  _13 = Clock_Ip_pxConfig.13_1->SelectorsCount;
  _14 = (long unsigned int) _13;
  if (Index_2 < _14)
    goto <bb 2>; [89.00%]
  else
    goto <bb 6>; [11.00%]

  <bb 6> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  Clock_Ip_bClockTreeIsConsumingPll.14_15 = Clock_Ip_bClockTreeIsConsumingPll;
  if (Clock_Ip_bClockTreeIsConsumingPll.14_15 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 7> [local count: 59055800]:
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 477815112]:
  # DEBUG BEGIN_STMT
  _18 = Clock_Ip_pxConfig.17_16->Gates[Index_17].Name;
  _19 = Clock_Ip_au8ClockFeatures[_18][1];
  _20 = (int) _19;
  _21 = Clock_Ip_au8GateCallbackIndex[_20];
  CallbackIndex_22 = (uint32) _21;
  # DEBUG CallbackIndex => CallbackIndex_22
  # DEBUG BEGIN_STMT
  _23 = Clock_Ip_axGateCallbacks[CallbackIndex_22].Set;
  _24 = &Clock_Ip_pxConfig.17_16->Gates[Index_17];
  _23 (_24);
  # DEBUG BEGIN_STMT
  Index_25 = Index_17 + 1;
  # DEBUG Index => Index_25

  <bb 9> [local count: 536870913]:
  # Index_17 = PHI <0(7), Index_25(8)>
  # DEBUG Index => Index_17
  # DEBUG BEGIN_STMT
  Clock_Ip_pxConfig.17_16 = Clock_Ip_pxConfig;
  _26 = Clock_Ip_pxConfig.17_16->GatesCount;
  _27 = (long unsigned int) _26;
  if (Index_17 < _27)
    goto <bb 8>; [89.00%]
  else
    goto <bb 10>; [11.00%]

  <bb 10> [local count: 59055800]:
  # Clock_Ip_pxConfig.17_28 = PHI <Clock_Ip_pxConfig.17_16(9)>
  # DEBUG BEGIN_STMT
  _29 = &Clock_Ip_pxConfig.17_28->SpecificPeriphalConfiguration;
  Clock_Ip_SpecificPeripheralClockInitialization (_29);
  # DEBUG BEGIN_STMT
  # DEBUG Index => 0
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 236223196]:
  # DEBUG BEGIN_STMT
  _32 = Clock_Ip_pxConfig.21_30->Cmus[Index_31].Name;
  _33 = Clock_Ip_au8ClockFeatures[_32][1];
  _34 = (int) _33;
  _35 = Clock_Ip_au8CmuCallbackIndex[_34];
  CallbackIndex_36 = (uint32) _35;
  # DEBUG CallbackIndex => CallbackIndex_36
  # DEBUG BEGIN_STMT
  _37 = Clock_Ip_axCmuCallbacks[CallbackIndex_36].Enable;
  _38 = &Clock_Ip_pxConfig.21_30->Cmus[Index_31];
  _37 (_38);
  # DEBUG BEGIN_STMT
  Index_39 = Index_31 + 1;
  # DEBUG Index => Index_39

  <bb 12> [local count: 295278996]:
  # Index_31 = PHI <0(10), Index_39(11)>
  # DEBUG Index => Index_31
  # DEBUG BEGIN_STMT
  Clock_Ip_pxConfig.21_30 = Clock_Ip_pxConfig;
  _40 = Clock_Ip_pxConfig.21_30->CmusCount;
  _41 = (long unsigned int) _40;
  if (Index_31 < _41)
    goto <bb 11>; [80.00%]
  else
    goto <bb 13>; [20.00%]

  <bb 13> [local count: 118111600]:
  return;

}


Clock_Ip_GetConfiguredFrequencyValue (Clock_Ip_NameType ClockName)
{
  uint32 Index;
  uint32 ReturnValue;
  const struct Clock_Ip_ClockConfigType * Clock_Ip_pxConfig.27_1;
  <unnamed type> _2;
  unsigned char _4;
  long unsigned int _5;

  <bb 2> [local count: 164090757]:
  # DEBUG BEGIN_STMT
  # DEBUG ReturnValue => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Clock_Ip_pxConfig.27_1 = Clock_Ip_pxConfig;
  if (Clock_Ip_pxConfig.27_1 != 0B)
    goto <bb 8>; [70.00%]
  else
    goto <bb 7>; [30.00%]

  <bb 8> [local count: 114863530]:
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 1014686026]:
  # DEBUG BEGIN_STMT
  _2 = Clock_Ip_pxConfig.27_1->ConfiguredFrequencies[Index_7].Name;
  if (_2 == ClockName_9(D))
    goto <bb 4>; [5.50%]
  else
    goto <bb 5>; [94.50%]

  <bb 4> [local count: 55807731]:
  # Index_3 = PHI <Index_7(3)>
  # DEBUG BEGIN_STMT
  ReturnValue_11 = Clock_Ip_pxConfig.27_1->ConfiguredFrequencies[Index_3].ConfiguredFrequencyValue;
  # DEBUG ReturnValue => ReturnValue_11
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 958878295]:
  # DEBUG BEGIN_STMT
  Index_10 = Index_7 + 1;
  # DEBUG Index => Index_10

  <bb 6> [local count: 1073741824]:
  # Index_7 = PHI <Index_10(5), 0(8)>
  # DEBUG Index => Index_7
  # DEBUG BEGIN_STMT
  _4 = Clock_Ip_pxConfig.27_1->ConfigureFrequenciesCount;
  _5 = (long unsigned int) _4;
  if (_5 > Index_7)
    goto <bb 3>; [94.50%]
  else
    goto <bb 7>; [5.50%]

  <bb 7> [local count: 164090758]:
  # ReturnValue_6 = PHI <0(2), ReturnValue_11(4), 0(6)>
  # DEBUG ReturnValue => ReturnValue_6
  # DEBUG BEGIN_STMT
  return ReturnValue_6;

}


Clock_Ip_TimeoutExpired (uint32 * StartTimeInOut, uint32 * ElapsedTimeInOut, uint32 TimeoutTicks)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _6;
  boolean _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _6 = OsIf_GetElapsed (StartTimeInOut_4(D), 0);
  _1 = *ElapsedTimeInOut_7(D);
  _2 = _1 + _6;
  *ElapsedTimeInOut_7(D) = _2;
  # DEBUG BEGIN_STMT
  _10 = _2 >= TimeoutTicks_9(D);
  return _10;

}


Clock_Ip_StartTimeout (uint32 * StartTimeOut, uint32 * ElapsedTimeOut, uint32 * TimeoutTicksOut, uint32 TimeoutUs)
{
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = OsIf_GetCounter (0);
  *StartTimeOut_5(D) = _1;
  # DEBUG BEGIN_STMT
  *ElapsedTimeOut_7(D) = 0;
  # DEBUG BEGIN_STMT
  _2 = OsIf_MicrosToTicks (TimeoutUs_9(D), 0);
  *TimeoutTicksOut_11(D) = _2;
  return;

}


Clock_Ip_ReportClockErrors (Clock_Ip_NotificationType Error, Clock_Ip_NameType ClockName)
{
  void (*<T534>) (Clock_Ip_NotificationType, Clock_Ip_NameType) Clock_Ip_pfkNotificationsCallback.26_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_pfkNotificationsCallback.26_1 = Clock_Ip_pfkNotificationsCallback;
  Clock_Ip_pfkNotificationsCallback.26_1 (Error_3(D), ClockName_4(D));
  return;

}


Clock_Ip_EnableSircInStandby ()
{
  _Bool Clock_Ip_bObjectsAreInitialized.25_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_bObjectsAreInitialized.25_1 = Clock_Ip_bObjectsAreInitialized;
  if (Clock_Ip_bObjectsAreInitialized.25_1 != 0)
    goto <bb 4>; [67.00%]
  else
    goto <bb 3>; [33.00%]

  <bb 3> [local count: 354334800]:
  # DEBUG BEGIN_STMT
  Clock_Ip_ClockInitializeObjects ();
  # DEBUG BEGIN_STMT
  Clock_Ip_bObjectsAreInitialized = 1;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  EnableSircInStandbyMode ();
  return;

}


Clock_Ip_DisableSircInStandby ()
{
  _Bool Clock_Ip_bObjectsAreInitialized.24_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_bObjectsAreInitialized.24_1 = Clock_Ip_bObjectsAreInitialized;
  if (Clock_Ip_bObjectsAreInitialized.24_1 != 0)
    goto <bb 4>; [67.00%]
  else
    goto <bb 3>; [33.00%]

  <bb 3> [local count: 354334800]:
  # DEBUG BEGIN_STMT
  Clock_Ip_ClockInitializeObjects ();
  # DEBUG BEGIN_STMT
  Clock_Ip_bObjectsAreInitialized = 1;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  DisableSircInStandbyMode ();
  return;

}


Clock_Ip_EnableFircInStandby ()
{
  _Bool Clock_Ip_bObjectsAreInitialized.23_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_bObjectsAreInitialized.23_1 = Clock_Ip_bObjectsAreInitialized;
  if (Clock_Ip_bObjectsAreInitialized.23_1 != 0)
    goto <bb 4>; [67.00%]
  else
    goto <bb 3>; [33.00%]

  <bb 3> [local count: 354334800]:
  # DEBUG BEGIN_STMT
  Clock_Ip_ClockInitializeObjects ();
  # DEBUG BEGIN_STMT
  Clock_Ip_bObjectsAreInitialized = 1;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  EnableFircInStandbyMode ();
  return;

}


Clock_Ip_DisableFircInStandby ()
{
  _Bool Clock_Ip_bObjectsAreInitialized.22_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_bObjectsAreInitialized.22_1 = Clock_Ip_bObjectsAreInitialized;
  if (Clock_Ip_bObjectsAreInitialized.22_1 != 0)
    goto <bb 4>; [67.00%]
  else
    goto <bb 3>; [33.00%]

  <bb 3> [local count: 354334800]:
  # DEBUG BEGIN_STMT
  Clock_Ip_ClockInitializeObjects ();
  # DEBUG BEGIN_STMT
  Clock_Ip_bObjectsAreInitialized = 1;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  DisableFircInStandbyMode ();
  return;

}


Clock_Ip_EnableModuleClock (Clock_Ip_NameType ClockName)
{
  uint32 CallbackIndex;
  unsigned char _1;
  int _2;
  unsigned char _3;
  void (*<T69b>) (Clock_Ip_NameType, boolean) _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_au8ClockFeatures[ClockName_6(D)][1];
  _2 = (int) _1;
  _3 = Clock_Ip_au8GateCallbackIndex[_2];
  CallbackIndex_7 = (uint32) _3;
  # DEBUG CallbackIndex => CallbackIndex_7
  # DEBUG BEGIN_STMT
  _4 = Clock_Ip_axGateCallbacks[CallbackIndex_7].Update;
  _4 (ClockName_6(D), 0);
  return;

}


Clock_Ip_DisableModuleClock (Clock_Ip_NameType ClockName)
{
  uint32 CallbackIndex;
  unsigned char _1;
  int _2;
  unsigned char _3;
  void (*<T69b>) (Clock_Ip_NameType, boolean) _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_au8ClockFeatures[ClockName_6(D)][1];
  _2 = (int) _1;
  _3 = Clock_Ip_au8GateCallbackIndex[_2];
  CallbackIndex_7 = (uint32) _3;
  # DEBUG CallbackIndex => CallbackIndex_7
  # DEBUG BEGIN_STMT
  _4 = Clock_Ip_axGateCallbacks[CallbackIndex_7].Update;
  _4 (ClockName_6(D), 1);
  return;

}


Clock_Ip_InstallNotificationsCallback (void (*Clock_Ip_NotificationsCallbackType) (Clock_Ip_NotificationType, Clock_Ip_NameType) Callback)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Clock_Ip_pfkNotificationsCallback = Callback_2(D);
  return;

}


Clock_Ip_ClearClockMonitorStatus (Clock_Ip_NameType ClockName)
{
  uint32 CallbackIndex;
  unsigned char _1;
  int _2;
  unsigned char _3;
  void (*<T635>) (Clock_Ip_NameType) _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_au8ClockFeatures[ClockName_6(D)][1];
  _2 = (int) _1;
  _3 = Clock_Ip_au8CmuCallbackIndex[_2];
  CallbackIndex_7 = (uint32) _3;
  # DEBUG CallbackIndex => CallbackIndex_7
  # DEBUG BEGIN_STMT
  _4 = Clock_Ip_axCmuCallbacks[CallbackIndex_7].Clear;
  _4 (ClockName_6(D));
  return;

}


Clock_Ip_GetClockMonitorStatus (Clock_Ip_NameType ClockName)
{
  uint32 CallbackIndex;
  unsigned char _1;
  int _2;
  unsigned char _3;
  Clock_Ip_CmuStatusType (*<T6ac>) (Clock_Ip_NameType) _4;
  Clock_Ip_CmuStatusType _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_au8ClockFeatures[ClockName_6(D)][1];
  _2 = (int) _1;
  _3 = Clock_Ip_au8CmuCallbackIndex[_2];
  CallbackIndex_7 = (uint32) _3;
  # DEBUG CallbackIndex => CallbackIndex_7
  # DEBUG BEGIN_STMT
  _4 = Clock_Ip_axCmuCallbacks[CallbackIndex_7].GetStatus;
  _9 = _4 (ClockName_6(D));
  return _9;

}


Clock_Ip_DisableClockMonitor (Clock_Ip_NameType ClockName)
{
  uint32 CallbackIndex;
  unsigned char _1;
  int _2;
  unsigned char _3;
  void (*<T635>) (Clock_Ip_NameType) _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_au8ClockFeatures[ClockName_6(D)][1];
  _2 = (int) _1;
  _3 = Clock_Ip_au8CmuCallbackIndex[_2];
  CallbackIndex_7 = (uint32) _3;
  # DEBUG CallbackIndex => CallbackIndex_7
  # DEBUG BEGIN_STMT
  _4 = Clock_Ip_axCmuCallbacks[CallbackIndex_7].Disable;
  _4 (ClockName_6(D));
  return;

}


Clock_Ip_DistributePll ()
{
  uint32 Index;
  const struct Clock_Ip_ClockConfigType * Clock_Ip_pxConfig.9_1;

  <bb 2> [local count: 168730857]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Clock_Ip_pxConfig.9_1 = Clock_Ip_pxConfig;
  if (Clock_Ip_pxConfig.9_1 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 4>; [30.00%]

  <bb 3> [local count: 118111600]:
  # Index_4 = PHI <0(2)>
  Clock_Ip_DistributePll.part.0 ();

  <bb 4> [local count: 168730857]:
  return;

}


Clock_Ip_GetPllStatus ()
{
  uint32 CallbackIndex;
  uint32 Index;
  Clock_Ip_PllStatusReturnType PllStatus;
  Clock_Ip_PllStatusType RetValue;
  <unnamed type> _1;
  unsigned char _2;
  int _3;
  unsigned char _4;
  Clock_Ip_PllStatusReturnType (*<T67d>) (Clock_Ip_NameType) _5;

  <bb 2> [local count: 114863530]:
  # DEBUG BEGIN_STMT
  # DEBUG RetValue => 2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Index => 0
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 1014686026]:
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_aeHwPllName[0];
  _2 = Clock_Ip_au8ClockFeatures[_1][1];
  _3 = (int) _2;
  _4 = Clock_Ip_au8PllCallbackIndex[_3];
  CallbackIndex_13 = (uint32) _4;
  # DEBUG CallbackIndex => CallbackIndex_13
  # DEBUG BEGIN_STMT
  _5 = Clock_Ip_axPllCallbacks[CallbackIndex_13].Complete;
  PllStatus_15 = _5 (_1);
  # DEBUG PllStatus => PllStatus_15
  # DEBUG BEGIN_STMT
  if (PllStatus_15 == 1)
    goto <bb 8>; [5.50%]
  else
    goto <bb 4>; [94.50%]

  <bb 4> [local count: 958878296]:
  # DEBUG BEGIN_STMT
  if (PllStatus_15 == 2)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 326018624]:
  # DEBUG BEGIN_STMT
  # DEBUG RetValue => 0

  <bb 6> [local count: 958878296]:
  # RetValue_6 = PHI <RetValue_7(4), 0(5)>
  # Index_16 = PHI <1(4), 1(5)>

  <bb 7> [local count: 1073741824]:
  # RetValue_7 = PHI <RetValue_6(6), 2(2)>
  # Index_9 = PHI <Index_16(6), 0(2)>
  # DEBUG Index => Index_9
  # DEBUG RetValue => RetValue_7
  # DEBUG BEGIN_STMT
  if (Index_9 == 0)
    goto <bb 3>; [94.50%]
  else
    goto <bb 8>; [5.50%]

  <bb 8> [local count: 114863531]:
  # RetValue_8 = PHI <1(3), RetValue_7(7)>
  # DEBUG RetValue => RetValue_8
  # DEBUG BEGIN_STMT
  return RetValue_8;

}


Clock_Ip_InitClock (const struct Clock_Ip_ClockConfigType * Config)
{
  uint32 Index;
  uint32 CallbackIndex;
  const struct Clock_Ip_ClockConfigType * Clock_Ip_pxConfig.1_1;
  <unnamed type> _2;
  unsigned char _3;
  int _4;
  unsigned char _5;
  void (*<T6a6>) (const struct Clock_Ip_CmuConfigType *) _6;
  const struct Clock_Ip_CmuConfigType * _7;
  unsigned char _8;
  long unsigned int _9;
  <unnamed type> _10;
  unsigned char _11;
  int _12;
  unsigned char _13;
  void (*<T632>) (const struct Clock_Ip_IrcoscConfigType *) _14;
  const struct Clock_Ip_IrcoscConfigType * _15;
  unsigned char _16;
  long unsigned int _17;
  <unnamed type> _18;
  unsigned char _19;
  int _20;
  unsigned char _21;
  void (*<T641>) (const struct Clock_Ip_XoscConfigType *) _22;
  const struct Clock_Ip_XoscConfigType * _23;
  unsigned char _24;
  long unsigned int _25;
  <unnamed type> _26;
  unsigned char _27;
  int _28;
  unsigned char _29;
  void (*<T6b8>) (const struct Clock_Ip_PcfsConfigType *) _30;
  const struct Clock_Ip_PcfsConfigType * _31;
  unsigned char _32;
  long unsigned int _33;
  <unnamed type> _34;
  unsigned char _35;
  int _36;
  unsigned char _37;
  void (*<T65a>) (const struct Clock_Ip_DividerTriggerConfigType *) _38;
  const struct Clock_Ip_DividerTriggerConfigType * _39;
  unsigned char _40;
  long unsigned int _41;
  <unnamed type> _42;
  unsigned char _43;
  int _44;
  unsigned char _45;
  void (*<T64f>) (const struct Clock_Ip_DividerConfigType *) _46;
  const struct Clock_Ip_DividerConfigType * _47;
  unsigned char _48;
  long unsigned int _49;
  <unnamed type> _50;
  unsigned char _51;
  int _52;
  unsigned char _53;
  void (*<T65a>) (const struct Clock_Ip_DividerTriggerConfigType *) _54;
  const struct Clock_Ip_DividerTriggerConfigType * _55;
  unsigned char _56;
  long unsigned int _57;
  <unnamed type> _58;
  unsigned char _59;
  int _60;
  unsigned char _61;
  void (*<T677>) (const struct Clock_Ip_PllConfigType *) _62;
  const struct Clock_Ip_PllConfigType * _63;
  unsigned char _64;
  long unsigned int _65;
  <unnamed type> _66;
  unsigned char _67;
  int _68;
  unsigned char _69;
  void (*<T6a6>) (const struct Clock_Ip_CmuConfigType *) _70;
  const struct Clock_Ip_CmuConfigType * _71;
  unsigned char _72;
  long unsigned int _73;
  <unnamed type> _74;
  unsigned char _75;
  int _76;
  unsigned char _77;
  void (*<T641>) (const struct Clock_Ip_XoscConfigType *) _78;
  const struct Clock_Ip_XoscConfigType * _79;
  unsigned char _80;
  long unsigned int _81;
  <unnamed type> _82;
  unsigned char _83;
  int _84;
  unsigned char _85;
  void (*<T677>) (const struct Clock_Ip_PllConfigType *) _86;
  const struct Clock_Ip_PllConfigType * _87;
  unsigned char _88;
  long unsigned int _89;
  <unnamed type> _90;
  unsigned char _91;
  int _92;
  unsigned char _93;
  void (*<T666>) (const struct Clock_Ip_FracDivConfigType *) _94;
  const struct Clock_Ip_FracDivConfigType * _95;
  unsigned char _96;
  long unsigned int _97;
  void (*<T534>) (Clock_Ip_NotificationType, Clock_Ip_NameType) Clock_Ip_pfkNotificationsCallback.2_98;
  void (*<T534>) (Clock_Ip_NotificationType, Clock_Ip_NameType) Clock_Ip_pfkNotificationsCallback.3_99;
  void (*<T534>) (Clock_Ip_NotificationType, Clock_Ip_NameType) Clock_Ip_pfkNotificationsCallback.4_100;
  void (*<T534>) (Clock_Ip_NotificationType, Clock_Ip_NameType) Clock_Ip_pfkNotificationsCallback.5_101;
  <unnamed type> _102;
  <unnamed type> _103;
  <unnamed type> _104;
  unsigned char _105;
  int _106;
  unsigned char _107;
  void (*<T68a>) (const struct Clock_Ip_SelectorConfigType *) _108;
  const struct Clock_Ip_SelectorConfigType * _109;
  unsigned char _110;
  long unsigned int _111;
  _Bool Clock_Ip_bClockTreeIsConsumingPll.6_112;
  <unnamed type> _113;
  unsigned char _114;
  int _115;
  unsigned char _116;
  void (*<T696>) (const struct Clock_Ip_GateConfigType *) _117;
  const struct Clock_Ip_GateConfigType * _118;
  unsigned char _119;
  long unsigned int _120;
  const struct Clock_IP_SpecificPeriphConfigType * _121;
  <unnamed type> _122;
  unsigned char _123;
  int _124;
  unsigned char _125;
  void (*<T6a6>) (const struct Clock_Ip_CmuConfigType *) _126;
  const struct Clock_Ip_CmuConfigType * _127;
  unsigned char _128;
  long unsigned int _129;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Clock_Ip_pxConfig = Config_164(D);
  # DEBUG BEGIN_STMT
  Clock_Ip_SpecificPlatformInitClock (Config_164(D));
  # DEBUG BEGIN_STMT
  Clock_Ip_pxConfig.1_1 = Clock_Ip_pxConfig;
  if (Clock_Ip_pxConfig.1_1 != 0B)
    goto <bb 52>; [70.00%]
  else
    goto <bb 5>; [30.00%]

  <bb 52> [local count: 82678120]:
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 330712475]:
  # DEBUG BEGIN_STMT
  _2 = Config_164(D)->Cmus[Index_130].Name;
  _3 = Clock_Ip_au8ClockFeatures[_2][1];
  _4 = (int) _3;
  _5 = Clock_Ip_au8CmuCallbackIndex[_4];
  CallbackIndex_167 = (uint32) _5;
  # DEBUG CallbackIndex => CallbackIndex_167
  # DEBUG BEGIN_STMT
  _6 = Clock_Ip_axCmuCallbacks[CallbackIndex_167].Reset;
  _7 = &Config_164(D)->Cmus[Index_130];
  _6 (_7);
  # DEBUG BEGIN_STMT
  Index_169 = Index_130 + 1;
  # DEBUG Index => Index_169

  <bb 4> [local count: 413390596]:
  # Index_130 = PHI <Index_169(3), 0(52)>
  # DEBUG Index => Index_130
  # DEBUG BEGIN_STMT
  _8 = Config_164(D)->CmusCount;
  _9 = (long unsigned int) _8;
  if (_9 > Index_130)
    goto <bb 3>; [80.00%]
  else
    goto <bb 5>; [20.00%]

  <bb 5> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  Clock_Ip_ResetClockConfiguration (Config_164(D));
  # DEBUG BEGIN_STMT
  # DEBUG Index => 0
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 236258635]:
  # DEBUG BEGIN_STMT
  _10 = Config_164(D)->Ircoscs[Index_131].Name;
  _11 = Clock_Ip_au8ClockFeatures[_10][1];
  _12 = (int) _11;
  _13 = Clock_Ip_au8IrcoscCallbackIndex[_12];
  CallbackIndex_220 = (uint32) _13;
  # DEBUG CallbackIndex => CallbackIndex_220
  # DEBUG BEGIN_STMT
  _14 = Clock_Ip_axIntOscCallbacks[CallbackIndex_220].Set;
  _15 = &Config_164(D)->Ircoscs[Index_131];
  _14 (_15);
  # DEBUG BEGIN_STMT
  Index_222 = Index_131 + 1;
  # DEBUG Index => Index_222

  <bb 7> [local count: 354370235]:
  # Index_131 = PHI <0(5), Index_222(6)>
  # DEBUG Index => Index_131
  # DEBUG BEGIN_STMT
  _16 = Config_164(D)->IrcoscsCount;
  _17 = (long unsigned int) _16;
  if (_17 > Index_131)
    goto <bb 6>; [66.67%]
  else
    goto <bb 51>; [33.33%]

  <bb 51> [local count: 118111600]:
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 236258635]:
  # DEBUG BEGIN_STMT
  _18 = Config_164(D)->Xoscs[Index_132].Name;
  _19 = Clock_Ip_au8ClockFeatures[_18][1];
  _20 = (int) _19;
  _21 = Clock_Ip_au8XoscCallbackIndex[_20];
  CallbackIndex_217 = (uint32) _21;
  # DEBUG CallbackIndex => CallbackIndex_217
  # DEBUG BEGIN_STMT
  _22 = Clock_Ip_axExtOscCallbacks[CallbackIndex_217].Set;
  _23 = &Config_164(D)->Xoscs[Index_132];
  _22 (_23);
  # DEBUG BEGIN_STMT
  Index_219 = Index_132 + 1;
  # DEBUG Index => Index_219

  <bb 9> [local count: 354370235]:
  # Index_132 = PHI <Index_219(8), 0(51)>
  # DEBUG Index => Index_132
  # DEBUG BEGIN_STMT
  _24 = Config_164(D)->XoscsCount;
  _25 = (long unsigned int) _24;
  if (_25 > Index_132)
    goto <bb 8>; [66.67%]
  else
    goto <bb 10>; [33.33%]

  <bb 10> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  Clock_Ip_UpdateDriverContext (Config_164(D));
  # DEBUG BEGIN_STMT
  # DEBUG Index => 0
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _26 = Config_164(D)->Pcfs[Index_133].Name;
  _27 = Clock_Ip_au8ClockFeatures[_26][1];
  _28 = (int) _27;
  _29 = Clock_Ip_au8PcfsCallbackIndex[_28];
  CallbackIndex_214 = (uint32) _29;
  # DEBUG CallbackIndex => CallbackIndex_214
  # DEBUG BEGIN_STMT
  _30 = Clock_Ip_axPcfsCallbacks[CallbackIndex_214].Set;
  _31 = &Config_164(D)->Pcfs[Index_133];
  _30 (_31);
  # DEBUG BEGIN_STMT
  Index_216 = Index_133 + 1;
  # DEBUG Index => Index_216

  <bb 12> [local count: 236223200]:
  # Index_133 = PHI <0(10), Index_216(11)>
  # DEBUG Index => Index_133
  # DEBUG BEGIN_STMT
  _32 = Config_164(D)->PcfsCount;
  _33 = (long unsigned int) _32;
  if (_33 > Index_133)
    goto <bb 11>; [50.00%]
  else
    goto <bb 50>; [50.00%]

  <bb 50> [local count: 118111600]:
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _34 = Config_164(D)->DividerTriggers[Index_134].Name;
  _35 = Clock_Ip_au8ClockFeatures[_34][1];
  _36 = (int) _35;
  _37 = Clock_Ip_au8DividerTriggerCallbackIndex[_36];
  CallbackIndex_211 = (uint32) _37;
  # DEBUG CallbackIndex => CallbackIndex_211
  # DEBUG BEGIN_STMT
  _38 = Clock_Ip_axDividerTriggerCallbacks[CallbackIndex_211].Configure;
  _39 = &Config_164(D)->DividerTriggers[Index_134];
  _38 (_39);
  # DEBUG BEGIN_STMT
  Index_213 = Index_134 + 1;
  # DEBUG Index => Index_213

  <bb 14> [local count: 236223200]:
  # Index_134 = PHI <Index_213(13), 0(50)>
  # DEBUG Index => Index_134
  # DEBUG BEGIN_STMT
  _40 = Config_164(D)->DividerTriggersCount;
  _41 = (long unsigned int) _40;
  if (_41 > Index_134)
    goto <bb 13>; [50.00%]
  else
    goto <bb 49>; [50.00%]

  <bb 49> [local count: 118111600]:
  goto <bb 16>; [100.00%]

  <bb 15> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  _42 = Config_164(D)->Dividers[Index_135].Name;
  _43 = Clock_Ip_au8ClockFeatures[_42][1];
  _44 = (int) _43;
  _45 = Clock_Ip_au8DividerCallbackIndex[_44];
  CallbackIndex_208 = (uint32) _45;
  # DEBUG CallbackIndex => CallbackIndex_208
  # DEBUG BEGIN_STMT
  _46 = Clock_Ip_axDividerCallbacks[CallbackIndex_208].Set;
  _47 = &Config_164(D)->Dividers[Index_135];
  _46 (_47);
  # DEBUG BEGIN_STMT
  Index_210 = Index_135 + 1;
  # DEBUG Index => Index_210

  <bb 16> [local count: 1073741824]:
  # Index_135 = PHI <Index_210(15), 0(49)>
  # DEBUG Index => Index_135
  # DEBUG BEGIN_STMT
  _48 = Config_164(D)->DividersCount;
  _49 = (long unsigned int) _48;
  if (_49 > Index_135)
    goto <bb 15>; [89.00%]
  else
    goto <bb 48>; [11.00%]

  <bb 48> [local count: 118111600]:
  goto <bb 18>; [100.00%]

  <bb 17> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _50 = Config_164(D)->DividerTriggers[Index_136].Name;
  _51 = Clock_Ip_au8ClockFeatures[_50][1];
  _52 = (int) _51;
  _53 = Clock_Ip_au8DividerTriggerCallbackIndex[_52];
  CallbackIndex_205 = (uint32) _53;
  # DEBUG CallbackIndex => CallbackIndex_205
  # DEBUG BEGIN_STMT
  _54 = Clock_Ip_axDividerTriggerCallbacks[CallbackIndex_205].TriggerUpdate;
  _55 = &Config_164(D)->DividerTriggers[Index_136];
  _54 (_55);
  # DEBUG BEGIN_STMT
  Index_207 = Index_136 + 1;
  # DEBUG Index => Index_207

  <bb 18> [local count: 236223200]:
  # Index_136 = PHI <Index_207(17), 0(48)>
  # DEBUG Index => Index_136
  # DEBUG BEGIN_STMT
  _56 = Config_164(D)->DividerTriggersCount;
  _57 = (long unsigned int) _56;
  if (_57 > Index_136)
    goto <bb 17>; [50.00%]
  else
    goto <bb 47>; [50.00%]

  <bb 47> [local count: 118111600]:
  goto <bb 20>; [100.00%]

  <bb 19> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _58 = Config_164(D)->Plls[Index_137].Name;
  _59 = Clock_Ip_au8ClockFeatures[_58][1];
  _60 = (int) _59;
  _61 = Clock_Ip_au8PllCallbackIndex[_60];
  CallbackIndex_202 = (uint32) _61;
  # DEBUG CallbackIndex => CallbackIndex_202
  # DEBUG BEGIN_STMT
  _62 = Clock_Ip_axPllCallbacks[CallbackIndex_202].Set;
  _63 = &Config_164(D)->Plls[Index_137];
  _62 (_63);
  # DEBUG BEGIN_STMT
  Index_204 = Index_137 + 1;
  # DEBUG Index => Index_204

  <bb 20> [local count: 236223200]:
  # Index_137 = PHI <Index_204(19), 0(47)>
  # DEBUG Index => Index_137
  # DEBUG BEGIN_STMT
  _64 = Config_164(D)->PllsCount;
  _65 = (long unsigned int) _64;
  if (_65 > Index_137)
    goto <bb 19>; [50.00%]
  else
    goto <bb 46>; [50.00%]

  <bb 46> [local count: 118111600]:
  goto <bb 22>; [100.00%]

  <bb 21> [local count: 472446391]:
  # DEBUG BEGIN_STMT
  _66 = Config_164(D)->Cmus[Index_138].Name;
  _67 = Clock_Ip_au8ClockFeatures[_66][1];
  _68 = (int) _67;
  _69 = Clock_Ip_au8CmuCallbackIndex[_68];
  CallbackIndex_199 = (uint32) _69;
  # DEBUG CallbackIndex => CallbackIndex_199
  # DEBUG BEGIN_STMT
  _70 = Clock_Ip_axCmuCallbacks[CallbackIndex_199].Set;
  _71 = &Config_164(D)->Cmus[Index_138];
  _70 (_71);
  # DEBUG BEGIN_STMT
  Index_201 = Index_138 + 1;
  # DEBUG Index => Index_201

  <bb 22> [local count: 590557992]:
  # Index_138 = PHI <Index_201(21), 0(46)>
  # DEBUG Index => Index_138
  # DEBUG BEGIN_STMT
  _72 = Config_164(D)->CmusCount;
  _73 = (long unsigned int) _72;
  if (_73 > Index_138)
    goto <bb 21>; [80.00%]
  else
    goto <bb 45>; [20.00%]

  <bb 45> [local count: 118111600]:
  goto <bb 24>; [100.00%]

  <bb 23> [local count: 236258635]:
  # DEBUG BEGIN_STMT
  _74 = Config_164(D)->Xoscs[Index_139].Name;
  _75 = Clock_Ip_au8ClockFeatures[_74][1];
  _76 = (int) _75;
  _77 = Clock_Ip_au8XoscCallbackIndex[_76];
  CallbackIndex_196 = (uint32) _77;
  # DEBUG CallbackIndex => CallbackIndex_196
  # DEBUG BEGIN_STMT
  _78 = Clock_Ip_axExtOscCallbacks[CallbackIndex_196].Complete;
  _79 = &Config_164(D)->Xoscs[Index_139];
  _78 (_79);
  # DEBUG BEGIN_STMT
  Index_198 = Index_139 + 1;
  # DEBUG Index => Index_198

  <bb 24> [local count: 354370235]:
  # Index_139 = PHI <Index_198(23), 0(45)>
  # DEBUG Index => Index_139
  # DEBUG BEGIN_STMT
  _80 = Config_164(D)->XoscsCount;
  _81 = (long unsigned int) _80;
  if (_81 > Index_139)
    goto <bb 23>; [66.67%]
  else
    goto <bb 44>; [33.33%]

  <bb 44> [local count: 118111600]:
  goto <bb 26>; [100.00%]

  <bb 25> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _82 = Config_164(D)->Plls[Index_140].Name;
  _83 = Clock_Ip_au8ClockFeatures[_82][1];
  _84 = (int) _83;
  _85 = Clock_Ip_au8PllCallbackIndex[_84];
  CallbackIndex_193 = (uint32) _85;
  # DEBUG CallbackIndex => CallbackIndex_193
  # DEBUG BEGIN_STMT
  _86 = Clock_Ip_axPllCallbacks[CallbackIndex_193].Enable;
  _87 = &Config_164(D)->Plls[Index_140];
  _86 (_87);
  # DEBUG BEGIN_STMT
  Index_195 = Index_140 + 1;
  # DEBUG Index => Index_195

  <bb 26> [local count: 236223200]:
  # Index_140 = PHI <Index_195(25), 0(44)>
  # DEBUG Index => Index_140
  # DEBUG BEGIN_STMT
  _88 = Config_164(D)->PllsCount;
  _89 = (long unsigned int) _88;
  if (_89 > Index_140)
    goto <bb 25>; [50.00%]
  else
    goto <bb 43>; [50.00%]

  <bb 43> [local count: 118111600]:
  goto <bb 28>; [100.00%]

  <bb 27> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _90 = Config_164(D)->FracDivs[Index_141].Name;
  _91 = Clock_Ip_au8ClockFeatures[_90][1];
  _92 = (int) _91;
  _93 = Clock_Ip_au8FractionalDividerCallbackIndex[_92];
  CallbackIndex_190 = (uint32) _93;
  # DEBUG CallbackIndex => CallbackIndex_190
  # DEBUG BEGIN_STMT
  _94 = Clock_Ip_axFracDivCallbacks[CallbackIndex_190].Set;
  _95 = &Config_164(D)->FracDivs[Index_141];
  _94 (_95);
  # DEBUG BEGIN_STMT
  Index_192 = Index_141 + 1;
  # DEBUG Index => Index_192

  <bb 28> [local count: 236223200]:
  # Index_141 = PHI <Index_192(27), 0(43)>
  # DEBUG Index => Index_141
  # DEBUG BEGIN_STMT
  _96 = Config_164(D)->FracDivsCount;
  _97 = (long unsigned int) _96;
  if (_97 > Index_141)
    goto <bb 27>; [50.00%]
  else
    goto <bb 29>; [50.00%]

  <bb 29> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  Clock_Ip_pfkNotificationsCallback.2_98 = Clock_Ip_pfkNotificationsCallback;
  Clock_Ip_pfkNotificationsCallback.2_98 (4, 145);
  # DEBUG BEGIN_STMT
  Clock_Ip_SetRamWaitStates ();
  # DEBUG BEGIN_STMT
  Clock_Ip_pfkNotificationsCallback.3_99 = Clock_Ip_pfkNotificationsCallback;
  Clock_Ip_pfkNotificationsCallback.3_99 (5, 145);
  # DEBUG BEGIN_STMT
  Clock_Ip_pfkNotificationsCallback.4_100 = Clock_Ip_pfkNotificationsCallback;
  Clock_Ip_pfkNotificationsCallback.4_100 (6, 145);
  # DEBUG BEGIN_STMT
  Clock_Ip_SetFlashWaitStates ();
  # DEBUG BEGIN_STMT
  Clock_Ip_pfkNotificationsCallback.5_101 = Clock_Ip_pfkNotificationsCallback;
  Clock_Ip_pfkNotificationsCallback.5_101 (7, 145);
  # DEBUG BEGIN_STMT
  Clock_Ip_bClockTreeIsConsumingPll = 0;
  # DEBUG BEGIN_STMT
  # DEBUG Index => 0
  goto <bb 34>; [100.00%]

  <bb 30> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  _102 = Config_164(D)->Selectors[Index_142].Value;
  _103 = Clock_Ip_aeSourceTypeClockName[_102];
  if (_103 != 3)
    goto <bb 31>; [66.00%]
  else
    goto <bb 32>; [34.00%]

  <bb 31> [local count: 630715945]:
  # DEBUG BEGIN_STMT
  _104 = Config_164(D)->Selectors[Index_142].Name;
  _105 = Clock_Ip_au8ClockFeatures[_104][1];
  _106 = (int) _105;
  _107 = Clock_Ip_au8SelectorCallbackIndex[_106];
  CallbackIndex_187 = (uint32) _107;
  # DEBUG CallbackIndex => CallbackIndex_187
  # DEBUG BEGIN_STMT
  _108 = Clock_Ip_axSelectorCallbacks[CallbackIndex_187].Set;
  _109 = &Config_164(D)->Selectors[Index_142];
  _108 (_109);
  goto <bb 33>; [100.00%]

  <bb 32> [local count: 324914280]:
  # DEBUG BEGIN_STMT
  Clock_Ip_bClockTreeIsConsumingPll = 1;

  <bb 33> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  Index_189 = Index_142 + 1;
  # DEBUG Index => Index_189

  <bb 34> [local count: 1073741824]:
  # Index_142 = PHI <0(29), Index_189(33)>
  # DEBUG Index => Index_142
  # DEBUG BEGIN_STMT
  _110 = Config_164(D)->SelectorsCount;
  _111 = (long unsigned int) _110;
  if (_111 > Index_142)
    goto <bb 30>; [89.00%]
  else
    goto <bb 35>; [11.00%]

  <bb 35> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  Clock_Ip_bClockTreeIsConsumingPll.6_112 = Clock_Ip_bClockTreeIsConsumingPll;
  if (Clock_Ip_bClockTreeIsConsumingPll.6_112 != 0)
    goto <bb 41>; [50.00%]
  else
    goto <bb 42>; [50.00%]

  <bb 42> [local count: 59055800]:
  goto <bb 37>; [100.00%]

  <bb 36> [local count: 477815112]:
  # DEBUG BEGIN_STMT
  _113 = Config_164(D)->Gates[Index_143].Name;
  _114 = Clock_Ip_au8ClockFeatures[_113][1];
  _115 = (int) _114;
  _116 = Clock_Ip_au8GateCallbackIndex[_115];
  CallbackIndex_183 = (uint32) _116;
  # DEBUG CallbackIndex => CallbackIndex_183
  # DEBUG BEGIN_STMT
  _117 = Clock_Ip_axGateCallbacks[CallbackIndex_183].Set;
  _118 = &Config_164(D)->Gates[Index_143];
  _117 (_118);
  # DEBUG BEGIN_STMT
  Index_185 = Index_143 + 1;
  # DEBUG Index => Index_185

  <bb 37> [local count: 536870913]:
  # Index_143 = PHI <Index_185(36), 0(42)>
  # DEBUG Index => Index_143
  # DEBUG BEGIN_STMT
  _119 = Config_164(D)->GatesCount;
  _120 = (long unsigned int) _119;
  if (_120 > Index_143)
    goto <bb 36>; [89.00%]
  else
    goto <bb 38>; [11.00%]

  <bb 38> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  _121 = &Config_164(D)->SpecificPeriphalConfiguration;
  Clock_Ip_SpecificPeripheralClockInitialization (_121);
  # DEBUG BEGIN_STMT
  # DEBUG Index => 0
  goto <bb 40>; [100.00%]

  <bb 39> [local count: 236223196]:
  # DEBUG BEGIN_STMT
  _122 = Config_164(D)->Cmus[Index_144].Name;
  _123 = Clock_Ip_au8ClockFeatures[_122][1];
  _124 = (int) _123;
  _125 = Clock_Ip_au8CmuCallbackIndex[_124];
  CallbackIndex_180 = (uint32) _125;
  # DEBUG CallbackIndex => CallbackIndex_180
  # DEBUG BEGIN_STMT
  _126 = Clock_Ip_axCmuCallbacks[CallbackIndex_180].Enable;
  _127 = &Config_164(D)->Cmus[Index_144];
  _126 (_127);
  # DEBUG BEGIN_STMT
  Index_182 = Index_144 + 1;
  # DEBUG Index => Index_182

  <bb 40> [local count: 295278996]:
  # Index_144 = PHI <0(38), Index_182(39)>
  # DEBUG Index => Index_144
  # DEBUG BEGIN_STMT
  _128 = Config_164(D)->CmusCount;
  _129 = (long unsigned int) _128;
  if (_129 > Index_144)
    goto <bb 39>; [80.00%]
  else
    goto <bb 41>; [20.00%]

  <bb 41> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  return;

}


Clock_Ip_Init (const struct Clock_Ip_ClockConfigType * Config)
{
  Clock_Ip_PllStatusType PllStatus;
  Clock_Ip_StatusType ClockStatus;
  _Bool Clock_Ip_bClockTreeIsConsumingPll.0_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ClockStatus => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Clock_Ip_InitClock (Config_5(D));
  # DEBUG BEGIN_STMT
  Clock_Ip_bClockTreeIsConsumingPll.0_1 = Clock_Ip_bClockTreeIsConsumingPll;
  if (Clock_Ip_bClockTreeIsConsumingPll.0_1 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 3> [local count: 354334800]:
  # DEBUG BEGIN_STMT
  PllStatus_8 = Clock_Ip_GetPllStatus ();
  # DEBUG PllStatus => PllStatus_8
  # DEBUG BEGIN_STMT
  if (PllStatus_8 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 116930483]:
  # DEBUG BEGIN_STMT
  Clock_Ip_DistributePll ();
  # DEBUG BEGIN_STMT
  # DEBUG ClockStatus => 0

  <bb 5> [local count: 1073741824]:
  # ClockStatus_2 = PHI <0(4), 0(2), 1(3)>
  # DEBUG ClockStatus => ClockStatus_2
  # DEBUG BEGIN_STMT
  return ClockStatus_2;

}


Clock_Ip_ResetClockConfiguration (const struct Clock_Ip_ClockConfigType * Config)
{
  uint32 Index;
  uint32 CallbackIndex;
  unsigned char _1;
  long unsigned int _2;
  <unnamed type> _3;
  unsigned char _4;
  int _5;
  unsigned char _6;
  void (*<T68a>) (const struct Clock_Ip_SelectorConfigType *) _7;
  const struct Clock_Ip_SelectorConfigType * _8;
  unsigned char _9;
  long unsigned int _10;
  <unnamed type> _11;
  unsigned char _12;
  int _13;
  unsigned char _14;
  void (*<T666>) (const struct Clock_Ip_FracDivConfigType *) _15;
  const struct Clock_Ip_FracDivConfigType * _16;
  unsigned char _17;
  long unsigned int _18;
  <unnamed type> _19;
  unsigned char _20;
  int _21;
  unsigned char _22;
  void (*<T677>) (const struct Clock_Ip_PllConfigType *) _23;
  const struct Clock_Ip_PllConfigType * _24;
  unsigned char _25;
  long unsigned int _26;
  <unnamed type> _27;
  unsigned char _28;
  int _29;
  unsigned char _30;
  void (*<T641>) (const struct Clock_Ip_XoscConfigType *) _31;
  const struct Clock_Ip_XoscConfigType * _32;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Config_42(D)->SelectorsCount;
  Index_43 = (uint32) _1;
  # DEBUG Index => Index_43
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  _2 = Index_33 + 4294967295;
  _3 = Config_42(D)->Selectors[_2].Name;
  _4 = Clock_Ip_au8ClockFeatures[_3][1];
  _5 = (int) _4;
  _6 = Clock_Ip_au8SelectorCallbackIndex[_5];
  CallbackIndex_53 = (uint32) _6;
  # DEBUG CallbackIndex => CallbackIndex_53
  # DEBUG BEGIN_STMT
  _7 = Clock_Ip_axSelectorCallbacks[CallbackIndex_53].Reset;
  _8 = &Config_42(D)->Selectors[_2];
  _7 (_8);
  # DEBUG BEGIN_STMT
  # DEBUG Index => _2

  <bb 4> [local count: 1073741824]:
  # Index_33 = PHI <Index_43(2), _2(3)>
  # DEBUG Index => Index_33
  # DEBUG BEGIN_STMT
  if (Index_33 != 0)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _9 = Config_42(D)->FracDivsCount;
  Index_44 = (uint32) _9;
  # DEBUG Index => Index_44
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _10 = Index_34 + 4294967295;
  _11 = Config_42(D)->FracDivs[_10].Name;
  _12 = Clock_Ip_au8ClockFeatures[_11][1];
  _13 = (int) _12;
  _14 = Clock_Ip_au8FractionalDividerCallbackIndex[_13];
  CallbackIndex_51 = (uint32) _14;
  # DEBUG CallbackIndex => CallbackIndex_51
  # DEBUG BEGIN_STMT
  _15 = Clock_Ip_axFracDivCallbacks[CallbackIndex_51].Reset;
  _16 = &Config_42(D)->FracDivs[_10];
  _15 (_16);
  # DEBUG BEGIN_STMT
  # DEBUG Index => _10

  <bb 7> [local count: 236223200]:
  # Index_34 = PHI <Index_44(5), _10(6)>
  # DEBUG Index => Index_34
  # DEBUG BEGIN_STMT
  if (Index_34 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _17 = Config_42(D)->PllsCount;
  Index_45 = (uint32) _17;
  # DEBUG Index => Index_45
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _18 = Index_35 + 4294967295;
  _19 = Config_42(D)->Plls[_18].Name;
  _20 = Clock_Ip_au8ClockFeatures[_19][1];
  _21 = (int) _20;
  _22 = Clock_Ip_au8PllCallbackIndex[_21];
  CallbackIndex_49 = (uint32) _22;
  # DEBUG CallbackIndex => CallbackIndex_49
  # DEBUG BEGIN_STMT
  _23 = Clock_Ip_axPllCallbacks[CallbackIndex_49].Reset;
  _24 = &Config_42(D)->Plls[_18];
  _23 (_24);
  # DEBUG BEGIN_STMT
  # DEBUG Index => _18

  <bb 10> [local count: 236223200]:
  # Index_35 = PHI <Index_45(8), _18(9)>
  # DEBUG Index => Index_35
  # DEBUG BEGIN_STMT
  if (Index_35 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _25 = Config_42(D)->XoscsCount;
  Index_46 = (uint32) _25;
  # DEBUG Index => Index_46
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 236258635]:
  # DEBUG BEGIN_STMT
  _26 = Index_36 + 4294967295;
  _27 = Config_42(D)->Xoscs[_26].Name;
  _28 = Clock_Ip_au8ClockFeatures[_27][1];
  _29 = (int) _28;
  _30 = Clock_Ip_au8XoscCallbackIndex[_29];
  CallbackIndex_47 = (uint32) _30;
  # DEBUG CallbackIndex => CallbackIndex_47
  # DEBUG BEGIN_STMT
  _31 = Clock_Ip_axExtOscCallbacks[CallbackIndex_47].Reset;
  _32 = &Config_42(D)->Xoscs[_26];
  _31 (_32);
  # DEBUG BEGIN_STMT
  # DEBUG Index => _26

  <bb 13> [local count: 354370235]:
  # Index_36 = PHI <Index_46(11), _26(12)>
  # DEBUG Index => Index_36
  # DEBUG BEGIN_STMT
  if (Index_36 != 0)
    goto <bb 12>; [66.67%]
  else
    goto <bb 14>; [33.33%]

  <bb 14> [local count: 118111600]:
  return;

}


Clock_Ip_CallEmptyCallbacks ()
{
  static boolean FunctionWasCalled = 0;
  _Bool FunctionWasCalled.8_1;
  void (*<T6a6>) (const struct Clock_Ip_CmuConfigType *) _2;
  void (*<T635>) (Clock_Ip_NameType) _3;
  void (*<T635>) (Clock_Ip_NameType) _4;
  Clock_Ip_CmuStatusType (*<T6ac>) (Clock_Ip_NameType) _5;
  void (*<T64f>) (const struct Clock_Ip_DividerConfigType *) _6;
  void (*<T65a>) (const struct Clock_Ip_DividerTriggerConfigType *) _7;
  void (*<T641>) (const struct Clock_Ip_XoscConfigType *) _8;
  void (*<T666>) (const struct Clock_Ip_FracDivConfigType *) _9;
  Clock_Ip_DfsStatusType (*<T66c>) (Clock_Ip_NameType) _10;
  void (*<T696>) (const struct Clock_Ip_GateConfigType *) _11;
  void (*<T69b>) (Clock_Ip_NameType, boolean) _12;
  void (*<T632>) (const struct Clock_Ip_IrcoscConfigType *) _13;
  void (*<T677>) (const struct Clock_Ip_PllConfigType *) _14;
  Clock_Ip_PllStatusReturnType (*<T67d>) (Clock_Ip_NameType) _15;
  void (*<T68a>) (const struct Clock_Ip_SelectorConfigType *) _16;
  void (*<T6b8>) (const struct Clock_Ip_PcfsConfigType *) _17;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  FunctionWasCalled.8_1 = FunctionWasCalled;
  if (FunctionWasCalled.8_1 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  FunctionWasCalled = 1;
  # DEBUG BEGIN_STMT
  _2 = Clock_Ip_axCmuCallbacks[0].Set;
  _2 (0B);
  # DEBUG BEGIN_STMT
  _3 = Clock_Ip_axCmuCallbacks[0].Disable;
  _3 (145);
  # DEBUG BEGIN_STMT
  _4 = Clock_Ip_axCmuCallbacks[0].Clear;
  _4 (145);
  # DEBUG BEGIN_STMT
  _5 = Clock_Ip_axCmuCallbacks[0].GetStatus;
  _5 (145);
  # DEBUG BEGIN_STMT
  _6 = Clock_Ip_axDividerCallbacks[0].Set;
  _6 (0B);
  # DEBUG BEGIN_STMT
  _7 = Clock_Ip_axDividerTriggerCallbacks[0].Configure;
  _7 (0B);
  # DEBUG BEGIN_STMT
  _8 = Clock_Ip_axExtOscCallbacks[0].Reset;
  _8 (0B);
  # DEBUG BEGIN_STMT
  _9 = Clock_Ip_axFracDivCallbacks[0].Set;
  _9 (0B);
  # DEBUG BEGIN_STMT
  _10 = Clock_Ip_axFracDivCallbacks[0].Complete;
  _10 (145);
  # DEBUG BEGIN_STMT
  _11 = Clock_Ip_axGateCallbacks[0].Set;
  _11 (0B);
  # DEBUG BEGIN_STMT
  _12 = Clock_Ip_axGateCallbacks[0].Update;
  _12 (145, 0);
  # DEBUG BEGIN_STMT
  _13 = Clock_Ip_axIntOscCallbacks[0].Set;
  _13 (0B);
  # DEBUG BEGIN_STMT
  _14 = Clock_Ip_axPllCallbacks[0].Set;
  _14 (0B);
  # DEBUG BEGIN_STMT
  _15 = Clock_Ip_axPllCallbacks[0].Complete;
  _15 (145);
  # DEBUG BEGIN_STMT
  _16 = Clock_Ip_axSelectorCallbacks[0].Set;
  _16 (0B);
  # DEBUG BEGIN_STMT
  _17 = Clock_Ip_axPcfsCallbacks[0].Set;
  _17 (0B);

  <bb 4> [local count: 1073741824]:
  return;

}


Clock_Ip_NotificatonsEmptyCallback (Clock_Ip_NotificationType Notification, Clock_Ip_NameType ClockName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}


