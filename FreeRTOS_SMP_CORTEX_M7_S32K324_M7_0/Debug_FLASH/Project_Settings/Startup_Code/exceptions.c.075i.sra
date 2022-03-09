Creating summary for undefined_handler/9:


Creating summary for SysTick_Handler/8:


Creating summary for PendSV_Handler/7:


Creating summary for DebugMon_Handler/6:


Creating summary for SVC_Handler/5:


Creating summary for UsageFault_Handler/4:


Creating summary for BusFault_Handler/3:


Creating summary for MemManage_Handler/2:


Creating summary for HardFault_Handler/1:


Creating summary for NMI_Handler/0:



========== IPA-SRA IPA stage ==========

Summary for node undefined_handler/9:
  No parameter information. 


Summary for node SysTick_Handler/8:
  No parameter information. 


Summary for node PendSV_Handler/7:
  No parameter information. 


Summary for node DebugMon_Handler/6:
  No parameter information. 


Summary for node SVC_Handler/5:
  No parameter information. 


Summary for node UsageFault_Handler/4:
  No parameter information. 


Summary for node BusFault_Handler/3:
  No parameter information. 


Summary for node MemManage_Handler/2:
  No parameter information. 


Summary for node HardFault_Handler/1:
  No parameter information. 


Summary for node NMI_Handler/0:
  No parameter information. 



Function NMI_Handler/0 disqualified because it cannot be made local.
Function HardFault_Handler/1 disqualified because it cannot be made local.
Function MemManage_Handler/2 disqualified because it cannot be made local.
Function BusFault_Handler/3 disqualified because it cannot be made local.
Function UsageFault_Handler/4 disqualified because it cannot be made local.
Function SVC_Handler/5 disqualified because it cannot be made local.
Function DebugMon_Handler/6 disqualified because it cannot be made local.
Function PendSV_Handler/7 disqualified because it cannot be made local.
Function SysTick_Handler/8 disqualified because it cannot be made local.
Function undefined_handler/9 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

undefined_handler/9 (undefined_handler) @06c6f540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:10631108 (estimated locally) body executed_once optimize_size
  Called by: 
  Calls: 
SysTick_Handler/8 (SysTick_Handler) @06c6f2a0
  Type: function definition analyzed
  Visibility: externally_visible public weak
  References: 
  Referring: 
  Availability: overwritable
  Function flags: count:10631108 (estimated locally) body optimize_size
  Called by: 
  Calls: 
PendSV_Handler/7 (PendSV_Handler) @06c6f000
  Type: function definition analyzed
  Visibility: externally_visible public weak
  References: 
  Referring: 
  Availability: overwritable
  Function flags: count:10631108 (estimated locally) body optimize_size
  Called by: 
  Calls: 
DebugMon_Handler/6 (DebugMon_Handler) @06c6c9a0
  Type: function definition analyzed
  Visibility: externally_visible public weak
  References: 
  Referring: 
  Availability: overwritable
  Function flags: count:10631108 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SVC_Handler/5 (SVC_Handler) @06c6c460
  Type: function definition analyzed
  Visibility: externally_visible public weak
  References: 
  Referring: 
  Availability: overwritable
  Function flags: count:10631108 (estimated locally) body optimize_size
  Called by: 
  Calls: 
UsageFault_Handler/4 (UsageFault_Handler) @06c6ce00
  Type: function definition analyzed
  Visibility: externally_visible public weak
  References: 
  Referring: 
  Availability: overwritable
  Function flags: count:10631108 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BusFault_Handler/3 (BusFault_Handler) @06c6cb60
  Type: function definition analyzed
  Visibility: externally_visible public weak
  References: 
  Referring: 
  Availability: overwritable
  Function flags: count:10631108 (estimated locally) body optimize_size
  Called by: 
  Calls: 
MemManage_Handler/2 (MemManage_Handler) @06c6c8c0
  Type: function definition analyzed
  Visibility: externally_visible public weak
  References: 
  Referring: 
  Availability: overwritable
  Function flags: count:10631108 (estimated locally) body optimize_size
  Called by: 
  Calls: 
HardFault_Handler/1 (HardFault_Handler) @06c6c620
  Type: function definition analyzed
  Visibility: externally_visible public weak
  References: 
  Referring: 
  Availability: overwritable
  Function flags: count:10631108 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NMI_Handler/0 (NMI_Handler) @06c6c380
  Type: function definition analyzed
  Visibility: externally_visible public weak
  References: 
  Referring: 
  Availability: overwritable
  Function flags: count:10631108 (estimated locally) body optimize_size
  Called by: 
  Calls: 
undefined_handler ()
{
  <bb 2> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}


__attribute__((weak))
SysTick_Handler ()
{
  <bb 2> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}


__attribute__((weak))
PendSV_Handler ()
{
  <bb 2> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}


__attribute__((weak))
DebugMon_Handler ()
{
  <bb 2> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}


__attribute__((weak))
SVC_Handler ()
{
  <bb 2> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}


__attribute__((weak))
UsageFault_Handler ()
{
  <bb 2> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}


__attribute__((weak))
BusFault_Handler ()
{
  <bb 2> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}


__attribute__((weak))
MemManage_Handler ()
{
  <bb 2> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}


__attribute__((weak))
HardFault_Handler ()
{
  <bb 2> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}


__attribute__((weak))
NMI_Handler ()
{
  <bb 2> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}


