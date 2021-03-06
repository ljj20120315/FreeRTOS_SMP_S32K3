Creating summary for OsIf_MicrosToTicks/9:
  Descriptor for parameter 0 MicrosD.5783
    not a candidate for splitting
  Descriptor for parameter 1 SelectedCounterD.5784
    not a candidate for splitting


Creating summary for OsIf_SetTimerFrequency/8:
  Descriptor for parameter 0 FreqD.5775
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1 SelectedCounterD.5776
    not a candidate for splitting


Creating summary for OsIf_GetElapsed/7:
  Descriptor for parameter 0 CurrentRefD.5766
    unused with 1 call_uses
    by_ref with 1 pass throughs
  Descriptor for parameter 1 SelectedCounterD.5767
    not a candidate
----------------------------------------
  Descriptor for parameter 0 CurrentRefD.5766
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref
  Descriptor for parameter 1 SelectedCounterD.5767
    not a candidate for splitting


Creating summary for OsIf_GetCounter/6:
  Descriptor for parameter 0 SelectedCounterD.5758
    not a candidate for splitting


Creating summary for OsIf_Init/5:
  Descriptor for parameter 0 ConfigD.5755
    not a candidate for splitting



========== IPA-SRA IPA stage ==========

Summary for node OsIf_MicrosToTicks/9:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting

  Summary for edge OsIf_MicrosToTicks/9->OsIf_Timer_System_MicrosToTicks/14:
    return value used only to compute caller return value

Summary for node OsIf_SetTimerFrequency/8:
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting

  Summary for edge OsIf_SetTimerFrequency/8->OsIf_Timer_System_SetTimerFrequency/13:
    return value ignored
    Parameter 0:
      Scalar param sources: 0

Summary for node OsIf_GetElapsed/7:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref
  Descriptor for parameter 1:
    not a candidate for splitting

  Summary for edge OsIf_GetElapsed/7->OsIf_Timer_System_GetElapsed/12:
    return value used only to compute caller return value
    Parameter 0:
      Scalar param sources: 0
      Pointer pass through from the param given above, safe_to_import_accesses: 0

Summary for node OsIf_GetCounter/6:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge OsIf_GetCounter/6->OsIf_Timer_System_GetCounter/11:
    return value used only to compute caller return value

Summary for node OsIf_Init/5:
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge OsIf_Init/5->OsIf_Timer_System_Init/10:
    return value ignored


Function OsIf_Init/5 disqualified because it cannot be made local.
Function OsIf_GetCounter/6 disqualified because it cannot be made local.
Function OsIf_GetElapsed/7 disqualified because it cannot be made local.
Function OsIf_SetTimerFrequency/8 disqualified because it cannot be made local.
Function OsIf_MicrosToTicks/9 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OsIf_Timer_System_MicrosToTicks/14 (OsIf_Timer_System_MicrosToTicks) @06cad0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OsIf_MicrosToTicks/9 (357913942 (estimated locally),0.33 per call) 
  Calls: 
OsIf_Timer_System_SetTimerFrequency/13 (OsIf_Timer_System_SetTimerFrequency) @06c15ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OsIf_SetTimerFrequency/8 (217325344 (estimated locally),0.20 per call) 
  Calls: 
OsIf_Timer_System_GetElapsed/12 (OsIf_Timer_System_GetElapsed) @06c15c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OsIf_GetElapsed/7 (357913942 (estimated locally),0.33 per call) 
  Calls: 
OsIf_Timer_System_GetCounter/11 (OsIf_Timer_System_GetCounter) @06c159a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OsIf_GetCounter/6 (217325344 (estimated locally),0.20 per call) 
  Calls: 
OsIf_Timer_System_Init/10 (OsIf_Timer_System_Init) @06c15700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OsIf_Init/5 (15119426 (estimated locally),0.59 per call) 
  Calls: 
OsIf_MicrosToTicks/9 (OsIf_MicrosToTicks) @06c151c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741817 (estimated locally) body optimize_size
  Called by: 
  Calls: OsIf_Timer_System_MicrosToTicks/14 (357913942 (estimated locally),0.33 per call) 
OsIf_SetTimerFrequency/8 (OsIf_SetTimerFrequency) @06c0fee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OsIf_Timer_System_SetTimerFrequency/13 (217325344 (estimated locally),0.20 per call) 
OsIf_GetElapsed/7 (OsIf_GetElapsed) @06c0f7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741817 (estimated locally) body optimize_size
  Called by: 
  Calls: OsIf_Timer_System_GetElapsed/12 (357913942 (estimated locally),0.33 per call) 
OsIf_GetCounter/6 (OsIf_GetCounter) @06c0f2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OsIf_Timer_System_GetCounter/11 (217325344 (estimated locally),0.20 per call) 
OsIf_Init/5 (OsIf_Init) @06c0fe00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:25750534 (estimated locally) body optimize_size
  Called by: 
  Calls: OsIf_Timer_System_Init/10 (15119426 (estimated locally),0.59 per call) 
OsIf_MicrosToTicks (uint32 Micros, OsIf_CounterType SelectedCounter)
{
  uint32 Value;

  <bb 2> [local count: 1073741817]:
  # DEBUG BEGIN_STMT
  # DEBUG Value => 0
  # DEBUG BEGIN_STMT
  switch (SelectedCounter_3(D)) <default: <L5> [33.33%], case 0: <L6> [33.33%], case 1: <L1> [33.33%]>

  <bb 3> [local count: 357913942]:
<L6>:
  # DEBUG BEGIN_STMT
  # DEBUG Micros => Micros_5(D)
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG Micros => NULL
  # DEBUG Value => Micros_5(D)
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 357913942]:
<L1>:
  # DEBUG BEGIN_STMT
  Value_7 = OsIf_Timer_System_MicrosToTicks (Micros_5(D));
  # DEBUG Value => Value_7
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073741824]:
  # Value_1 = PHI <Micros_5(D)(3), Value_7(4), 0(2)>
<L5>:
  # DEBUG Value => Value_1
  # DEBUG BEGIN_STMT
  return Value_1;

}


OsIf_SetTimerFrequency (uint32 Freq, OsIf_CounterType SelectedCounter)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  if (SelectedCounter_2(D) == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325344]:
<L1>:
  # DEBUG BEGIN_STMT
  OsIf_Timer_System_SetTimerFrequency (Freq_4(D));
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
<L4>:
  # DEBUG Freq => NULL
  return;

}


OsIf_GetElapsed (uint32 * const CurrentRef, OsIf_CounterType SelectedCounter)
{
  uint32 Value;

  <bb 2> [local count: 1073741817]:
  # DEBUG BEGIN_STMT
  # DEBUG Value => 0
  # DEBUG BEGIN_STMT
  switch (SelectedCounter_3(D)) <default: <L5> [33.33%], case 0: <L6> [33.33%], case 1: <L1> [33.33%]>

  <bb 3> [local count: 357913942]:
<L6>:
  # DEBUG BEGIN_STMT
  # DEBUG CurrentRef => CurrentRef_5(D)
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG CurrentRef => NULL
  # DEBUG Value => 1
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 357913942]:
<L1>:
  # DEBUG BEGIN_STMT
  Value_7 = OsIf_Timer_System_GetElapsed (CurrentRef_5(D));
  # DEBUG Value => Value_7
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073741824]:
  # Value_1 = PHI <1(3), Value_7(4), 0(2)>
<L5>:
  # DEBUG Value => Value_1
  # DEBUG BEGIN_STMT
  return Value_1;

}


OsIf_GetCounter (OsIf_CounterType SelectedCounter)
{
  uint32 Value;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Value => 0
  # DEBUG BEGIN_STMT
  if (SelectedCounter_3(D) == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325344]:
<L1>:
  # DEBUG BEGIN_STMT
  Value_6 = OsIf_Timer_System_GetCounter ();
  # DEBUG Value => Value_6
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  # Value_1 = PHI <0(2), Value_6(3)>
<L5>:
  # DEBUG Value => Value_1
  # DEBUG BEGIN_STMT
  return Value_1;

}


OsIf_Init (const void * Config)
{
  volatile boolean x;
  _Bool x.0_5;

  <bb 2> [local count: 25750534]:
  # DEBUG BEGIN_STMT
  if (Config_2(D) != 0B)
    goto <bb 3>; [82.57%]
  else
    goto <bb 5>; [17.43%]

  <bb 3> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  x ={v} 0;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_5 ={v} x;
  if (x.0_5 != 0)
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

  <bb 5> [local count: 15119426]:
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  OsIf_Timer_System_Init ();
  return;

}


