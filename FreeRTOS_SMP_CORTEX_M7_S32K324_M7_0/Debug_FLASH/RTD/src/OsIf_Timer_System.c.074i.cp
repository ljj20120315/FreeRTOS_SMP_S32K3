
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OsIf_Timer_System_Internal_GetElapsed/12:
  Jump functions of caller  OsIf_Timer_System_Internal_GetCounter/11:
  Jump functions of caller  OsIf_Timer_System_Internal_Init/10:
  Jump functions of caller  OsIf_Timer_System_MicrosToTicks/8:
  Jump functions of caller  OsIf_Timer_System_SetTimerFrequency/7:
  Jump functions of caller  OsIf_Timer_System_GetElapsed/6:
    callsite  OsIf_Timer_System_GetElapsed/6 -> OsIf_Timer_System_Internal_GetElapsed/12 : 
       no arg info
  Jump functions of caller  OsIf_Timer_System_GetCounter/5:
    callsite  OsIf_Timer_System_GetCounter/5 -> OsIf_Timer_System_Internal_GetCounter/11 : 
       no arg info
  Jump functions of caller  OsIf_Timer_System_Init/4:
    callsite  OsIf_Timer_System_Init/4 -> OsIf_Timer_System_Internal_Init/10 : 
       no arg info

 Propagating constants:

Not considering OsIf_Timer_System_MicrosToTicks/8 for cloning; -fipa-cp-clone disabled.
Not considering OsIf_Timer_System_SetTimerFrequency/7 for cloning; -fipa-cp-clone disabled.
Not considering OsIf_Timer_System_GetElapsed/6 for cloning; -fipa-cp-clone disabled.

overall_size: 97

IPA lattices after all propagation:

Lattices:
  Node: OsIf_Timer_System_MicrosToTicks/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: OsIf_Timer_System_SetTimerFrequency/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: OsIf_Timer_System_GetElapsed/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: OsIf_Timer_System_GetCounter/5:
  Node: OsIf_Timer_System_Init/4:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OsIf_Timer_System_Internal_GetElapsed/12 (OsIf_Timer_System_Internal_GetElapsed) @0609b620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OsIf_Timer_System_GetElapsed/6 (11368907 (estimated locally),0.27 per call) 
  Calls: 
OsIf_Timer_System_Internal_GetCounter/11 (OsIf_Timer_System_Internal_GetCounter) @0609b460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OsIf_Timer_System_GetCounter/5 (11368907 (estimated locally),0.27 per call) 
  Calls: 
OsIf_Timer_System_Internal_Init/10 (OsIf_Timer_System_Internal_Init) @0609b1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OsIf_Timer_System_Init/4 (35064607 (estimated locally),0.77 per call) 
  Calls: 
OsIf_apxPredefinedConfig/9 (OsIf_apxPredefinedConfig) @0608ff78
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OsIf_Timer_System_Init/4 (read) 
  Availability: not_available
  Varpool flags: read-only
OsIf_Timer_System_MicrosToTicks/8 (OsIf_Timer_System_MicrosToTicks) @06096460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OsIf_abMdlInit/1 (read) OsIf_apxInternalCfg/2 (read) OsIf_au32InternalFrequencies/3 (read) 
  Referring: 
  Availability: available
  Function flags: count:42524432 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OsIf_Timer_System_SetTimerFrequency/7 (OsIf_Timer_System_SetTimerFrequency) @06096e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OsIf_abMdlInit/1 (read) OsIf_apxInternalCfg/2 (read) OsIf_au32InternalFrequencies/3 (write) 
  Referring: 
  Availability: available
  Function flags: count:42524432 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OsIf_Timer_System_GetElapsed/6 (OsIf_Timer_System_GetElapsed) @06096b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OsIf_abMdlInit/1 (read) OsIf_apxInternalCfg/2 (read) 
  Referring: 
  Availability: available
  Function flags: count:42524432 (estimated locally) body optimize_size
  Called by: 
  Calls: OsIf_Timer_System_Internal_GetElapsed/12 (11368907 (estimated locally),0.27 per call) 
OsIf_Timer_System_GetCounter/5 (OsIf_Timer_System_GetCounter) @060968c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OsIf_abMdlInit/1 (read) OsIf_apxInternalCfg/2 (read) 
  Referring: 
  Availability: available
  Function flags: count:42524432 (estimated locally) body optimize_size
  Called by: 
  Calls: OsIf_Timer_System_Internal_GetCounter/11 (11368907 (estimated locally),0.27 per call) 
OsIf_Timer_System_Init/4 (OsIf_Timer_System_Init) @06096620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OsIf_apxPredefinedConfig/9 (read) OsIf_abMdlInit/1 (write) OsIf_apxInternalCfg/2 (write) OsIf_au32InternalFrequencies/3 (write) 
  Referring: 
  Availability: available
  Function flags: count:45695715 (estimated locally) body optimize_size
  Called by: 
  Calls: OsIf_Timer_System_Internal_Init/10 (35064607 (estimated locally),0.77 per call) 
OsIf_au32InternalFrequencies/3 (OsIf_au32InternalFrequencies) @0608f6c0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: OsIf_Timer_System_Init/4 (write) OsIf_Timer_System_SetTimerFrequency/7 (write) OsIf_Timer_System_MicrosToTicks/8 (read) 
  Availability: available
  Varpool flags:
OsIf_apxInternalCfg/2 (OsIf_apxInternalCfg) @0608f630
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: OsIf_Timer_System_GetCounter/5 (read) OsIf_Timer_System_GetElapsed/6 (read) OsIf_Timer_System_SetTimerFrequency/7 (read) OsIf_Timer_System_Init/4 (write) OsIf_Timer_System_MicrosToTicks/8 (read) 
  Availability: available
  Varpool flags:
OsIf_abMdlInit/1 (OsIf_abMdlInit) @0608f5a0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: OsIf_Timer_System_GetElapsed/6 (read) OsIf_Timer_System_SetTimerFrequency/7 (read) OsIf_Timer_System_Init/4 (write) OsIf_Timer_System_GetCounter/5 (read) OsIf_Timer_System_MicrosToTicks/8 (read) 
  Availability: available
  Varpool flags:

;; Function OsIf_Timer_System_Init (OsIf_Timer_System_Init, funcdef_no=1, decl_uid=5726, cgraph_uid=2, symbol_order=4)

Modification phase of node OsIf_Timer_System_Init/4
OsIf_Timer_System_Init ()
{
  volatile boolean x;
  const struct OsIf_ConfigType * _1;
  long unsigned int _2;
  _Bool x.0_9;

  <bb 2> [local count: 45695715]:
  # DEBUG BEGIN_STMT
  # DEBUG CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = OsIf_apxPredefinedConfig[0];
  if (_1 == 0B)
    goto <bb 3>; [46.53%]
  else
    goto <bb 5>; [53.47%]

  <bb 3> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  x ={v} 0;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_9 ={v} x;
  if (x.0_9 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 10631108]:

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 7> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 35064607]:
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  OsIf_abMdlInit[0] = 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OsIf_apxInternalCfg[0] = _1;
  # DEBUG BEGIN_STMT
  _2 = _1->counterFrequency;
  OsIf_au32InternalFrequencies[0] = _2;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OsIf_Timer_System_Internal_Init ();
  return;

}



;; Function OsIf_Timer_System_GetCounter (OsIf_Timer_System_GetCounter, funcdef_no=2, decl_uid=5728, cgraph_uid=3, symbol_order=5)

Modification phase of node OsIf_Timer_System_GetCounter/5
OsIf_Timer_System_GetCounter ()
{
  volatile boolean x;
  volatile boolean x;
  uint32 Counter;
  _Bool _1;
  const struct OsIf_ConfigType * _2;
  _Bool x.0_8;
  _Bool x.0_9;

  <bb 2> [local count: 42524432]:
  # DEBUG BEGIN_STMT
  # DEBUG Counter => 0
  # DEBUG BEGIN_STMT
  # DEBUG CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = OsIf_abMdlInit[0];
  if (_1 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  x ={v} 0;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_8 ={v} x;
  if (x.0_8 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 10631108]:

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _2 = OsIf_apxInternalCfg[0];
  if (_2 == 0B)
    goto <bb 6>; [46.53%]
  else
    goto <bb 8>; [53.47%]

  <bb 6> [local count: 9893309]:
  # DEBUG BEGIN_STMT
  x ={v} 0;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_9 ={v} x;
  if (x.0_9 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 4946655]:

  <bb 7> [local count: 499612072]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 499612072]:
  goto <bb 7>; [100.00%]

  <bb 8> [local count: 11368907]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Counter_7 = OsIf_Timer_System_Internal_GetCounter ();
  # DEBUG Counter => Counter_7

  <bb 9> [local count: 26946669]:
  # Counter_3 = PHI <0(3), 0(6), Counter_7(8)>
  # DEBUG x => NULL
  # DEBUG x => NULL
  # DEBUG Counter => Counter_3
  # DEBUG BEGIN_STMT
  return Counter_3;

}



;; Function OsIf_Timer_System_GetElapsed (OsIf_Timer_System_GetElapsed, funcdef_no=3, decl_uid=5730, cgraph_uid=4, symbol_order=6)

Modification phase of node OsIf_Timer_System_GetElapsed/6
OsIf_Timer_System_GetElapsed (uint32 * const CurrentRef)
{
  volatile boolean x;
  volatile boolean x;
  uint32 Elapsed;
  _Bool _1;
  const struct OsIf_ConfigType * _2;
  _Bool x.0_9;
  _Bool x.0_10;

  <bb 2> [local count: 42524432]:
  # DEBUG BEGIN_STMT
  # DEBUG Elapsed => 0
  # DEBUG BEGIN_STMT
  # DEBUG CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = OsIf_abMdlInit[0];
  if (_1 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  x ={v} 0;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_9 ={v} x;
  if (x.0_9 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 10631108]:

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _2 = OsIf_apxInternalCfg[0];
  if (_2 == 0B)
    goto <bb 6>; [46.53%]
  else
    goto <bb 8>; [53.47%]

  <bb 6> [local count: 9893309]:
  # DEBUG BEGIN_STMT
  x ={v} 0;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_10 ={v} x;
  if (x.0_10 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 4946655]:

  <bb 7> [local count: 499612072]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 499612072]:
  goto <bb 7>; [100.00%]

  <bb 8> [local count: 11368907]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Elapsed_8 = OsIf_Timer_System_Internal_GetElapsed (CurrentRef_6(D));
  # DEBUG Elapsed => Elapsed_8

  <bb 9> [local count: 26946669]:
  # Elapsed_3 = PHI <0(3), 0(6), Elapsed_8(8)>
  # DEBUG x => NULL
  # DEBUG x => NULL
  # DEBUG Elapsed => Elapsed_3
  # DEBUG BEGIN_STMT
  return Elapsed_3;

}



;; Function OsIf_Timer_System_SetTimerFrequency (OsIf_Timer_System_SetTimerFrequency, funcdef_no=4, decl_uid=5732, cgraph_uid=5, symbol_order=7)

Modification phase of node OsIf_Timer_System_SetTimerFrequency/7
OsIf_Timer_System_SetTimerFrequency (uint32 Freq)
{
  volatile boolean x;
  volatile boolean x;
  _Bool _1;
  const struct OsIf_ConfigType * _2;
  _Bool x.0_7;
  _Bool x.0_8;

  <bb 2> [local count: 42524432]:
  # DEBUG BEGIN_STMT
  # DEBUG CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = OsIf_abMdlInit[0];
  if (_1 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  x ={v} 0;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_7 ={v} x;
  if (x.0_7 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 10631108]:

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _2 = OsIf_apxInternalCfg[0];
  if (_2 == 0B)
    goto <bb 6>; [30.00%]
  else
    goto <bb 8>; [70.00%]

  <bb 6> [local count: 6378665]:
  # DEBUG BEGIN_STMT
  x ={v} 0;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_8 ={v} x;
  if (x.0_8 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 3189332]:

  <bb 7> [local count: 322122544]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 322122544]:
  goto <bb 7>; [100.00%]

  <bb 8> [local count: 14883551]:
  # DEBUG BEGIN_STMT
  OsIf_au32InternalFrequencies[0] = Freq_5(D);

  <bb 9> [local count: 28703992]:
  # DEBUG x => NULL
  # DEBUG x => NULL
  return;

}



;; Function OsIf_Timer_System_MicrosToTicks (OsIf_Timer_System_MicrosToTicks, funcdef_no=5, decl_uid=5734, cgraph_uid=6, symbol_order=8)

Modification phase of node OsIf_Timer_System_MicrosToTicks/8
OsIf_Timer_System_MicrosToTicks (uint32 Micros)
{
  volatile boolean x;
  volatile boolean x;
  volatile boolean x;
  uint32 ticks;
  uint64 interim;
  _Bool _1;
  const struct OsIf_ConfigType * _2;
  long long unsigned int _3;
  long unsigned int _4;
  long long unsigned int _5;
  _Bool _6;
  _Bool x.0_14;
  _Bool x.0_15;
  _Bool x.0_16;

  <bb 2> [local count: 42524432]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ticks => 0
  # DEBUG BEGIN_STMT
  # DEBUG CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = OsIf_abMdlInit[0];
  if (_1 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  x ={v} 0;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_14 ={v} x;
  if (x.0_14 != 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 12> [local count: 10631108]:

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 15> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _2 = OsIf_apxInternalCfg[0];
  if (_2 == 0B)
    goto <bb 6>; [30.00%]
  else
    goto <bb 8>; [70.00%]

  <bb 6> [local count: 6378665]:
  # DEBUG BEGIN_STMT
  x ={v} 0;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_15 ={v} x;
  if (x.0_15 != 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 13> [local count: 3189332]:

  <bb 7> [local count: 322122544]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 16> [local count: 322122544]:
  goto <bb 7>; [100.00%]

  <bb 8> [local count: 14883551]:
  # DEBUG BEGIN_STMT
  _3 = (long long unsigned int) Micros_10(D);
  _4 = OsIf_au32InternalFrequencies[0];
  _5 = (long long unsigned int) _4;
  interim_11 = _3 * _5;
  # DEBUG interim => interim_11
  # DEBUG BEGIN_STMT
  interim_12 = interim_11 / 1000000;
  # DEBUG interim => interim_12
  # DEBUG BEGIN_STMT
  _6 = interim_11 <= 4294967295999999;
  x ={v} _6;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_16 ={v} x;
  if (x.0_16 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 14> [local count: 7441776]:

  <bb 9> [local count: 751619281]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 17> [local count: 751619281]:
  goto <bb 9>; [100.00%]

  <bb 10> [local count: 7441776]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  ticks_13 = (uint32) interim_12;
  # DEBUG ticks => ticks_13

  <bb 11> [local count: 21262216]:
  # ticks_7 = PHI <0(3), 0(6), ticks_13(10)>
  # DEBUG x => NULL
  # DEBUG x => NULL
  # DEBUG ticks => ticks_7
  # DEBUG BEGIN_STMT
  return ticks_7;

}


