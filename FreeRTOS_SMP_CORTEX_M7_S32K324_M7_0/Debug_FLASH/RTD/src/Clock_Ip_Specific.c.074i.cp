
IPA constant propagation start:
Determining dynamic type for call: _2 (&SircConfig);
  Starting walk at: _2 (&SircConfig);
  instance pointer: &SircConfig  Outer instance pointer: SircConfig offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _2 (&FircConfig);
  Starting walk at: _2 (&FircConfig);
  instance pointer: &FircConfig  Outer instance pointer: FircConfig offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_PRAMCSetRamIWS.part.0/25:
  Jump functions of caller  Clock_Ip_GetConfiguredFrequencyValue/24:
  Jump functions of caller  Clock_Ip_ReportClockErrors/20:
  Jump functions of caller  Clock_Ip_TimeoutExpired/19:
  Jump functions of caller  Clock_Ip_StartTimeout/18:
  Jump functions of caller  Clock_Ip_PRAMCSetRamIWS/17:
    callsite  Clock_Ip_PRAMCSetRamIWS/17 -> Clock_Ip_PRAMCSetRamIWS.part.0/25 : 
    callsite  Clock_Ip_PRAMCSetRamIWS/17 -> Clock_Ip_GetConfiguredFrequencyValue/24 : 
       no arg info
    callsite  Clock_Ip_PRAMCSetRamIWS/17 -> Clock_Ip_GetConfiguredFrequencyValue/24 : 
       no arg info
  Jump functions of caller  Clock_Ip_FLASH_SetFlashIWS/16:
    indirect simple callsite, calling param -1, offset 0, for stmt Clock_Ip_SetFlashWaitStatesCallback.8_1 ();
  Jump functions of caller  Clock_Ip_ClockPowerModeChangeNotification/15:
  Jump functions of caller  Clock_Ip_ClockInitializeObjects/14:
  Jump functions of caller  EnableSircInStandbyMode/13:
    indirect simple callsite, calling param -1, offset 0, for stmt _2 (&SircConfig);
       param 0: UNKNOWN
         Aggregate passed by reference:
           offset: 32, type: uint16, CONST: 1
         value: 0x0, mask: 0xfffffffc
         VR  [1, -1]
  Jump functions of caller  DisableSircInStandbyMode/12:
    indirect simple callsite, calling param -1, offset 0, for stmt _2 (2);
       param 0: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
  Jump functions of caller  EnableFircInStandbyMode/11:
    indirect simple callsite, calling param -1, offset 0, for stmt _2 (&FircConfig);
       param 0: UNKNOWN
         Aggregate passed by reference:
           offset: 32, type: uint16, CONST: 1
         value: 0x0, mask: 0xfffffffc
         VR  [1, -1]
  Jump functions of caller  DisableFircInStandbyMode/10:
    indirect simple callsite, calling param -1, offset 0, for stmt _2 (0);
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Clock_Ip_SpecificPlatformInitClock/9:
    callsite  Clock_Ip_SpecificPlatformInitClock/9 -> Clock_Ip_PowerClockIpModules/3 : 
  Jump functions of caller  Clock_Ip_SpecificPeripheralClockInitialization/8:
  Jump functions of caller  Clock_Ip_McMeEnterKey/7:
  Jump functions of caller  Clock_Ip_SetFlashWaitStates/6:
    callsite  Clock_Ip_SetFlashWaitStates/6 -> Clock_Ip_FLASH_SetFlashIWS/16 : 
  Jump functions of caller  Clock_Ip_SetRamWaitStates/5:
    callsite  Clock_Ip_SetRamWaitStates/5 -> Clock_Ip_PRAMCSetRamIWS/17 : 
  Jump functions of caller  Clock_Ip_CodeInRamSetFlashWaitStates/4:
  Jump functions of caller  Clock_Ip_PowerClockIpModules/3:
    callsite  Clock_Ip_PowerClockIpModules/3 -> Clock_Ip_ReportClockErrors/20 : 
       no arg info
    callsite  Clock_Ip_PowerClockIpModules/3 -> Clock_Ip_TimeoutExpired/19 : 
       no arg info
    callsite  Clock_Ip_PowerClockIpModules/3 -> Clock_Ip_StartTimeout/18 : 
       no arg info
    callsite  Clock_Ip_PowerClockIpModules/3 -> Clock_Ip_McMeEnterKey/7 : 
    callsite  Clock_Ip_PowerClockIpModules/3 -> Clock_Ip_ReportClockErrors/20 : 
       no arg info
    callsite  Clock_Ip_PowerClockIpModules/3 -> Clock_Ip_TimeoutExpired/19 : 
       no arg info
    callsite  Clock_Ip_PowerClockIpModules/3 -> Clock_Ip_StartTimeout/18 : 
       no arg info
    callsite  Clock_Ip_PowerClockIpModules/3 -> Clock_Ip_McMeEnterKey/7 : 
    callsite  Clock_Ip_PowerClockIpModules/3 -> Clock_Ip_ReportClockErrors/20 : 
       no arg info
    callsite  Clock_Ip_PowerClockIpModules/3 -> Clock_Ip_TimeoutExpired/19 : 
       no arg info
    callsite  Clock_Ip_PowerClockIpModules/3 -> Clock_Ip_StartTimeout/18 : 
       no arg info
    callsite  Clock_Ip_PowerClockIpModules/3 -> Clock_Ip_McMeEnterKey/7 : 
    callsite  Clock_Ip_PowerClockIpModules/3 -> Clock_Ip_ReportClockErrors/20 : 
       no arg info
    callsite  Clock_Ip_PowerClockIpModules/3 -> Clock_Ip_TimeoutExpired/19 : 
       no arg info
    callsite  Clock_Ip_PowerClockIpModules/3 -> Clock_Ip_StartTimeout/18 : 
       no arg info
    callsite  Clock_Ip_PowerClockIpModules/3 -> Clock_Ip_McMeEnterKey/7 : 

 Propagating constants:

Not considering Clock_Ip_ClockPowerModeChangeNotification/15 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SpecificPlatformInitClock/9 for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SpecificPeripheralClockInitialization/8 for cloning; -fipa-cp-clone disabled.

overall_size: 289
 - context independent values, size: 3, time_benefit: 2.000000
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_PRAMCSetRamIWS.part.0/25:
  Node: Clock_Ip_PRAMCSetRamIWS/17:
  Node: Clock_Ip_FLASH_SetFlashIWS/16:
  Node: Clock_Ip_ClockPowerModeChangeNotification/15:
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
  Node: Clock_Ip_ClockInitializeObjects/14:
  Node: EnableSircInStandbyMode/13:
  Node: DisableSircInStandbyMode/12:
  Node: EnableFircInStandbyMode/11:
  Node: DisableFircInStandbyMode/10:
  Node: Clock_Ip_SpecificPlatformInitClock/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SpecificPeripheralClockInitialization/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Clock_Ip_McMeEnterKey/7:
  Node: Clock_Ip_SetFlashWaitStates/6:
  Node: Clock_Ip_SetRamWaitStates/5:
  Node: Clock_Ip_CodeInRamSetFlashWaitStates/4:
  Node: Clock_Ip_PowerClockIpModules/3:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Clock_Ip_PRAMCSetRamIWS.part.0/25 (Clock_Ip_PRAMCSetRamIWS.part.0) @063bf0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local split_part optimize_size
  Called by: Clock_Ip_PRAMCSetRamIWS/17 (354334801 (estimated locally),0.33 per call) 
  Calls: 
Clock_Ip_GetConfiguredFrequencyValue/24 (Clock_Ip_GetConfiguredFrequencyValue) @063b3380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_PRAMCSetRamIWS/17 (1073741824 (estimated locally),1.00 per call) Clock_Ip_PRAMCSetRamIWS/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_pxConfig/23 (Clock_Ip_pxConfig) @063b0d38
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_CodeInRamSetFlashWaitStates/4 (read) 
  Availability: not_available
  Varpool flags:
Clock_Ip_axIntOscCallbacks/22 (Clock_Ip_axIntOscCallbacks) @063b01b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ClockInitializeObjects/14 (addr) Clock_Ip_ClockInitializeObjects/14 (addr) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8IrcoscCallbackIndex/21 (Clock_Ip_au8IrcoscCallbackIndex) @063b0168
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ClockInitializeObjects/14 (read) Clock_Ip_ClockInitializeObjects/14 (read) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_ReportClockErrors/20 (Clock_Ip_ReportClockErrors) @0632c9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_PowerClockIpModules/3 (37904965 (estimated locally),0.11 per call) Clock_Ip_PowerClockIpModules/3 (37904965 (estimated locally),0.11 per call) Clock_Ip_PowerClockIpModules/3 (37904965 (estimated locally),0.11 per call) Clock_Ip_PowerClockIpModules/3 (37904965 (estimated locally),0.11 per call) 
  Calls: 
Clock_Ip_TimeoutExpired/19 (Clock_Ip_TimeoutExpired) @0632c8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_PowerClockIpModules/3 (1073741824 (estimated locally),3.08 per call) Clock_Ip_PowerClockIpModules/3 (1073741821 (estimated locally),3.08 per call) Clock_Ip_PowerClockIpModules/3 (1073741817 (estimated locally),3.08 per call) Clock_Ip_PowerClockIpModules/3 (1073741813 (estimated locally),3.08 per call) 
  Calls: 
Clock_Ip_StartTimeout/18 (Clock_Ip_StartTimeout) @0632c7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_PowerClockIpModules/3 (114863530 (estimated locally),0.33 per call) Clock_Ip_PowerClockIpModules/3 (114863530 (estimated locally),0.33 per call) Clock_Ip_PowerClockIpModules/3 (114863529 (estimated locally),0.33 per call) Clock_Ip_PowerClockIpModules/3 (114863529 (estimated locally),0.33 per call) 
  Calls: 
Clock_Ip_PRAMCSetRamIWS/17 (Clock_Ip_PRAMCSetRamIWS) @063287e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_SetRamWaitStates/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: Clock_Ip_PRAMCSetRamIWS.part.0/25 (354334801 (estimated locally),0.33 per call) Clock_Ip_GetConfiguredFrequencyValue/24 (1073741824 (estimated locally),1.00 per call) Clock_Ip_GetConfiguredFrequencyValue/24 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_FLASH_SetFlashIWS/16 (Clock_Ip_FLASH_SetFlashIWS) @063282a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_SetFlashWaitStatesCallback/2 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_SetFlashWaitStates/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call)  Num speculative call targets: 0
Clock_Ip_ClockPowerModeChangeNotification/15 (Clock_Ip_ClockPowerModeChangeNotification) @06328ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_ClockInitializeObjects/14 (Clock_Ip_ClockInitializeObjects) @06328c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_au8IrcoscCallbackIndex/21 (read) Clock_Ip_axIntOscCallbacks/22 (addr) Clock_Ip_pxSircStdbyClock/0 (write) Clock_Ip_au8IrcoscCallbackIndex/21 (read) Clock_Ip_axIntOscCallbacks/22 (addr) Clock_Ip_pxFircStdbyClock/1 (write) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
EnableSircInStandbyMode/13 (EnableSircInStandbyMode) @063289a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_pxSircStdbyClock/0 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call)  Num speculative call targets: 0
DisableSircInStandbyMode/12 (DisableSircInStandbyMode) @06328700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_pxSircStdbyClock/0 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call)  Num speculative call targets: 0
EnableFircInStandbyMode/11 (EnableFircInStandbyMode) @06328460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_pxFircStdbyClock/1 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call)  Num speculative call targets: 0
DisableFircInStandbyMode/10 (DisableFircInStandbyMode) @063281c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_pxFircStdbyClock/1 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call)  Num speculative call targets: 0
Clock_Ip_SpecificPlatformInitClock/9 (Clock_Ip_SpecificPlatformInitClock) @062c9d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_PowerClockIpModules/3 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_SpecificPeripheralClockInitialization/8 (Clock_Ip_SpecificPeripheralClockInitialization) @062c9700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_McMeEnterKey/7 (Clock_Ip_McMeEnterKey) @062c9ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_PowerClockIpModules/3 (114863530 (estimated locally),0.33 per call) Clock_Ip_PowerClockIpModules/3 (114863530 (estimated locally),0.33 per call) Clock_Ip_PowerClockIpModules/3 (114863529 (estimated locally),0.33 per call) Clock_Ip_PowerClockIpModules/3 (114863529 (estimated locally),0.33 per call) 
  Calls: 
Clock_Ip_SetFlashWaitStates/6 (Clock_Ip_SetFlashWaitStates) @062c9c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_FLASH_SetFlashIWS/16 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_SetRamWaitStates/5 (Clock_Ip_SetRamWaitStates) @062c98c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_PRAMCSetRamIWS/17 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_CodeInRamSetFlashWaitStates/4 (Clock_Ip_CodeInRamSetFlashWaitStates) @062c9620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_pxConfig/23 (read) 
  Referring: Clock_Ip_SetFlashWaitStatesCallback/2 (addr) 
  Availability: available
  Function flags: count:164090757 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_PowerClockIpModules/3 (Clock_Ip_PowerClockIpModules) @062c92a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:348071301 (estimated locally) body local optimize_size
  Called by: Clock_Ip_SpecificPlatformInitClock/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: Clock_Ip_ReportClockErrors/20 (37904965 (estimated locally),0.11 per call) Clock_Ip_TimeoutExpired/19 (1073741824 (estimated locally),3.08 per call) Clock_Ip_StartTimeout/18 (114863530 (estimated locally),0.33 per call) Clock_Ip_McMeEnterKey/7 (114863530 (estimated locally),0.33 per call) Clock_Ip_ReportClockErrors/20 (37904965 (estimated locally),0.11 per call) Clock_Ip_TimeoutExpired/19 (1073741821 (estimated locally),3.08 per call) Clock_Ip_StartTimeout/18 (114863530 (estimated locally),0.33 per call) Clock_Ip_McMeEnterKey/7 (114863530 (estimated locally),0.33 per call) Clock_Ip_ReportClockErrors/20 (37904965 (estimated locally),0.11 per call) Clock_Ip_TimeoutExpired/19 (1073741817 (estimated locally),3.08 per call) Clock_Ip_StartTimeout/18 (114863529 (estimated locally),0.33 per call) Clock_Ip_McMeEnterKey/7 (114863529 (estimated locally),0.33 per call) Clock_Ip_ReportClockErrors/20 (37904965 (estimated locally),0.11 per call) Clock_Ip_TimeoutExpired/19 (1073741813 (estimated locally),3.08 per call) Clock_Ip_StartTimeout/18 (114863529 (estimated locally),0.33 per call) Clock_Ip_McMeEnterKey/7 (114863529 (estimated locally),0.33 per call) 
Clock_Ip_SetFlashWaitStatesCallback/2 (Clock_Ip_SetFlashWaitStatesCallback) @06279bd0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Clock_Ip_CodeInRamSetFlashWaitStates/4 (addr) 
  Referring: Clock_Ip_FLASH_SetFlashIWS/16 (read) 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_pxFircStdbyClock/1 (Clock_Ip_pxFircStdbyClock) @06279b40
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: DisableFircInStandbyMode/10 (read) EnableFircInStandbyMode/11 (read) Clock_Ip_ClockInitializeObjects/14 (write) 
  Availability: available
  Varpool flags:
Clock_Ip_pxSircStdbyClock/0 (Clock_Ip_pxSircStdbyClock) @06279ab0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: DisableSircInStandbyMode/12 (read) EnableSircInStandbyMode/13 (read) Clock_Ip_ClockInitializeObjects/14 (write) 
  Availability: available
  Varpool flags:

;; Function Clock_Ip_CodeInRamSetFlashWaitStates (Clock_Ip_CodeInRamSetFlashWaitStates, funcdef_no=1, decl_uid=6549, cgraph_uid=2, symbol_order=4)

Modification phase of node Clock_Ip_CodeInRamSetFlashWaitStates/4
Clock_Ip_CodeInRamSetFlashWaitStates ()
{
  uint8 Index;
  uint32 ConfiguredCoreClock;
  uint32 RwscSetting;
  const struct Clock_Ip_ClockConfigType * Clock_Ip_pxConfig.9_1;
  int _2;
  <unnamed type> _3;
  int _4;
  unsigned char _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _13;

  <bb 2> [local count: 164090757]:
  # DEBUG BEGIN_STMT
  # DEBUG RwscSetting => 0
  # DEBUG BEGIN_STMT
  # DEBUG ConfiguredCoreClock => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Clock_Ip_pxConfig.9_1 = Clock_Ip_pxConfig;
  if (Clock_Ip_pxConfig.9_1 != 0B)
    goto <bb 16>; [70.00%]
  else
    goto <bb 8>; [30.00%]

  <bb 16> [local count: 114863530]:
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 1014686026]:
  # DEBUG BEGIN_STMT
  _2 = (int) Index_16;
  _3 = Clock_Ip_pxConfig.9_1->ConfiguredFrequencies[_2].Name;
  if (_3 == 13)
    goto <bb 4>; [5.50%]
  else
    goto <bb 5>; [94.50%]

  <bb 4> [local count: 55807731]:
  # _4 = PHI <_2(3)>
  # DEBUG BEGIN_STMT
  ConfiguredCoreClock_19 = Clock_Ip_pxConfig.9_1->ConfiguredFrequencies[_4].ConfiguredFrequencyValue;
  # DEBUG ConfiguredCoreClock => ConfiguredCoreClock_19
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 958878295]:
  # DEBUG BEGIN_STMT
  Index_18 = Index_16 + 1;
  # DEBUG Index => Index_18

  <bb 6> [local count: 1073741824]:
  # Index_16 = PHI <Index_18(5), 0(16)>
  # DEBUG Index => Index_16
  # DEBUG BEGIN_STMT
  _5 = Clock_Ip_pxConfig.9_1->ConfigureFrequenciesCount;
  if (_5 > Index_16)
    goto <bb 3>; [94.50%]
  else
    goto <bb 7>; [5.50%]

  <bb 7> [local count: 114863531]:
  # ConfiguredCoreClock_15 = PHI <0(6), ConfiguredCoreClock_19(4)>
  # DEBUG ConfiguredCoreClock => ConfiguredCoreClock_15
  # DEBUG BEGIN_STMT
  if (ConfiguredCoreClock_15 <= 167000000)
    goto <bb 8>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 8> [local count: 106658992]:
  # ConfiguredCoreClock_12 = PHI <ConfiguredCoreClock_15(7), 0(2)>
  # DEBUG ConfiguredCoreClock => NULL
  # DEBUG BEGIN_STMT
  if (ConfiguredCoreClock_12 <= 66000000)
    goto <bb 15>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 9> [local count: 53329496]:
  # DEBUG BEGIN_STMT
  if (ConfiguredCoreClock_12 <= 100000000)
    goto <bb 15>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 26664748]:
  # DEBUG BEGIN_STMT
  if (ConfiguredCoreClock_12 <= 133000000)
    goto <bb 15>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 13332374]:
  # DEBUG BEGIN_STMT
  # DEBUG RwscSetting => 4
  goto <bb 15>; [100.00%]

  <bb 12> [local count: 57431766]:
  # DEBUG BEGIN_STMT
  if (ConfiguredCoreClock_15 <= 200000000)
    goto <bb 15>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 13> [local count: 28715883]:
  # DEBUG BEGIN_STMT
  if (ConfiguredCoreClock_15 <= 233000000)
    goto <bb 15>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 14> [local count: 14357941]:
  # DEBUG BEGIN_STMT

  <bb 15> [local count: 164090758]:
  # RwscSetting_14 = PHI <2(9), 5(12), 6(13), 7(14), 3(10), 1(8), 4(11)>
  # DEBUG RwscSetting => RwscSetting_14
  # DEBUG BEGIN_STMT
  _6 ={v} MEM[(struct FLASH_Type *)1076805632B].CTL;
  _7 = _6 & 4294934527;
  MEM[(struct FLASH_Type *)1076805632B].CTL ={v} _7;
  # DEBUG BEGIN_STMT
  _8 ={v} MEM[(struct FLASH_Type *)1076805632B].CTL;
  _9 = _8 & 4294959359;
  MEM[(struct FLASH_Type *)1076805632B].CTL ={v} _9;
  # DEBUG BEGIN_STMT
  _10 ={v} MEM[(struct FLASH_Type *)1076805632B].CTL;
  _11 = RwscSetting_14 << 8;
  _13 = _10 | _11;
  MEM[(struct FLASH_Type *)1076805632B].CTL ={v} _13;
  return;

}



;; Function Clock_Ip_McMeEnterKey (Clock_Ip_McMeEnterKey, funcdef_no=4, decl_uid=6363, cgraph_uid=5, symbol_order=7)

Modification phase of node Clock_Ip_McMeEnterKey/7
Clock_Ip_McMeEnterKey ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  MEM[(struct MC_ME_Type *)1076740096B].CTL_KEY ={v} 23280;
  # DEBUG BEGIN_STMT
  MEM[(struct MC_ME_Type *)1076740096B].CTL_KEY ={v} 42255;
  return;

}



;; Function Clock_Ip_SpecificPeripheralClockInitialization (Clock_Ip_SpecificPeripheralClockInitialization, funcdef_no=5, decl_uid=6524, cgraph_uid=6, symbol_order=8)

Modification phase of node Clock_Ip_SpecificPeripheralClockInitialization/8
Clock_Ip_SpecificPeripheralClockInitialization (const struct Clock_IP_SpecificPeriphConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_SpecificPlatformInitClock (Clock_Ip_SpecificPlatformInitClock, funcdef_no=6, decl_uid=6526, cgraph_uid=7, symbol_order=9)

Modification phase of node Clock_Ip_SpecificPlatformInitClock/9
Clock_Ip_SpecificPlatformInitClock (const struct Clock_Ip_ClockConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Clock_Ip_PowerClockIpModules ();
  return;

}



;; Function DisableFircInStandbyMode (DisableFircInStandbyMode, funcdef_no=7, decl_uid=6355, cgraph_uid=8, symbol_order=10)

Modification phase of node DisableFircInStandbyMode/10
DisableFircInStandbyMode ()
{
  const struct Clock_Ip_IntOscCallbackType * Clock_Ip_pxFircStdbyClock.4_1;
  void (*<T635>) (Clock_Ip_NameType) _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_pxFircStdbyClock.4_1 = Clock_Ip_pxFircStdbyClock;
  _2 = Clock_Ip_pxFircStdbyClock.4_1->Disable;
  _2 (0);
  return;

}



;; Function EnableFircInStandbyMode (EnableFircInStandbyMode, funcdef_no=8, decl_uid=6357, cgraph_uid=9, symbol_order=11)

Modification phase of node EnableFircInStandbyMode/11
EnableFircInStandbyMode ()
{
  struct Clock_Ip_IrcoscConfigType FircConfig;
  const struct Clock_Ip_IntOscCallbackType * Clock_Ip_pxFircStdbyClock.5_1;
  void (*<T632>) (const struct Clock_Ip_IrcoscConfigType *) _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  FircConfig.Enable = 1;
  # DEBUG BEGIN_STMT
  Clock_Ip_pxFircStdbyClock.5_1 = Clock_Ip_pxFircStdbyClock;
  _2 = Clock_Ip_pxFircStdbyClock.5_1->Enable;
  _2 (&FircConfig);
  FircConfig ={v} {CLOBBER};
  return;

}



;; Function DisableSircInStandbyMode (DisableSircInStandbyMode, funcdef_no=9, decl_uid=6359, cgraph_uid=10, symbol_order=12)

Modification phase of node DisableSircInStandbyMode/12
DisableSircInStandbyMode ()
{
  const struct Clock_Ip_IntOscCallbackType * Clock_Ip_pxSircStdbyClock.6_1;
  void (*<T635>) (Clock_Ip_NameType) _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_pxSircStdbyClock.6_1 = Clock_Ip_pxSircStdbyClock;
  _2 = Clock_Ip_pxSircStdbyClock.6_1->Disable;
  _2 (2);
  return;

}



;; Function EnableSircInStandbyMode (EnableSircInStandbyMode, funcdef_no=10, decl_uid=6361, cgraph_uid=11, symbol_order=13)

Modification phase of node EnableSircInStandbyMode/13
EnableSircInStandbyMode ()
{
  struct Clock_Ip_IrcoscConfigType SircConfig;
  const struct Clock_Ip_IntOscCallbackType * Clock_Ip_pxSircStdbyClock.7_1;
  void (*<T632>) (const struct Clock_Ip_IrcoscConfigType *) _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SircConfig.Enable = 1;
  # DEBUG BEGIN_STMT
  Clock_Ip_pxSircStdbyClock.7_1 = Clock_Ip_pxSircStdbyClock;
  _2 = Clock_Ip_pxSircStdbyClock.7_1->Enable;
  _2 (&SircConfig);
  SircConfig ={v} {CLOBBER};
  return;

}



;; Function Clock_Ip_ClockInitializeObjects (Clock_Ip_ClockInitializeObjects, funcdef_no=11, decl_uid=6516, cgraph_uid=12, symbol_order=14)

Modification phase of node Clock_Ip_ClockInitializeObjects/14
Clock_Ip_ClockInitializeObjects ()
{
  unsigned char _1;
  int _2;
  const struct Clock_Ip_IntOscCallbackType * _3;
  unsigned char _4;
  int _5;
  const struct Clock_Ip_IntOscCallbackType * _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_au8IrcoscCallbackIndex[2];
  _2 = (int) _1;
  _3 = &Clock_Ip_axIntOscCallbacks[_2];
  Clock_Ip_pxSircStdbyClock = _3;
  # DEBUG BEGIN_STMT
  _4 = Clock_Ip_au8IrcoscCallbackIndex[1];
  _5 = (int) _4;
  _6 = &Clock_Ip_axIntOscCallbacks[_5];
  Clock_Ip_pxFircStdbyClock = _6;
  return;

}



;; Function Clock_Ip_ClockPowerModeChangeNotification (Clock_Ip_ClockPowerModeChangeNotification, funcdef_no=12, decl_uid=6519, cgraph_uid=13, symbol_order=15)

Modification phase of node Clock_Ip_ClockPowerModeChangeNotification/15
Clock_Ip_ClockPowerModeChangeNotification (Clock_Ip_PowerModesType PowerMode, Clock_Ip_PowerNotificationType Notification)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_FLASH_SetFlashIWS (Clock_Ip_FLASH_SetFlashIWS, funcdef_no=13, decl_uid=6583, cgraph_uid=14, symbol_order=16)

Modification phase of node Clock_Ip_FLASH_SetFlashIWS/16
Clock_Ip_FLASH_SetFlashIWS ()
{
  void (*<T725>) (void) Clock_Ip_SetFlashWaitStatesCallback.8_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_SetFlashWaitStatesCallback.8_1 = Clock_Ip_SetFlashWaitStatesCallback;
  Clock_Ip_SetFlashWaitStatesCallback.8_1 ();
  return;

}



;; Function Clock_Ip_SetFlashWaitStates (Clock_Ip_SetFlashWaitStates, funcdef_no=3, decl_uid=6536, cgraph_uid=4, symbol_order=6)

Modification phase of node Clock_Ip_SetFlashWaitStates/6
Clock_Ip_SetFlashWaitStates ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_FLASH_SetFlashIWS ();
  return;

}



;; Function Clock_Ip_PRAMCSetRamIWS (Clock_Ip_PRAMCSetRamIWS, funcdef_no=14, decl_uid=6554, cgraph_uid=15, symbol_order=17)

Modification phase of node Clock_Ip_PRAMCSetRamIWS/17
Clock_Ip_PRAMCSetRamIWS ()
{
  uint32 ConfiguredAipsPlatClock;
  uint32 ConfiguredCoreClock;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ConfiguredCoreClock => 0
  # DEBUG BEGIN_STMT
  # DEBUG ConfiguredAipsPlatClock => 0
  # DEBUG BEGIN_STMT
  ConfiguredCoreClock_9 = Clock_Ip_GetConfiguredFrequencyValue (13);
  # DEBUG ConfiguredCoreClock => ConfiguredCoreClock_9
  # DEBUG BEGIN_STMT
  ConfiguredAipsPlatClock_11 = Clock_Ip_GetConfiguredFrequencyValue (14);
  # DEBUG ConfiguredAipsPlatClock => ConfiguredAipsPlatClock_11
  # DEBUG BEGIN_STMT
  if (ConfiguredCoreClock_9 > 80000000)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  if (ConfiguredCoreClock_9 == ConfiguredAipsPlatClock_11)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 719407025]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PRAMC_Type *)1076248576B].PRCR1;
  _2 = _1 | 1;
  MEM[(struct PRAMC_Type *)1076248576B].PRCR1 ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct PRAMC_Type *)1078345728B].PRCR1;
  _4 = _3 | 1;
  MEM[(struct PRAMC_Type *)1078345728B].PRCR1 ={v} _4;
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 354334801]:
  Clock_Ip_PRAMCSetRamIWS.part.0 ();

  <bb 6> [local count: 1073741824]:
  return;

}



;; Function Clock_Ip_SetRamWaitStates (Clock_Ip_SetRamWaitStates, funcdef_no=2, decl_uid=6534, cgraph_uid=3, symbol_order=5)

Modification phase of node Clock_Ip_SetRamWaitStates/5
Clock_Ip_SetRamWaitStates ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_PRAMCSetRamIWS ();
  return;

}


