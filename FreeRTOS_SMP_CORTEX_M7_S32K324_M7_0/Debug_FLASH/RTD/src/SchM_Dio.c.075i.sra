Creating summary for SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01/8:


Creating summary for SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/7:


Creating summary for SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00/6:


Creating summary for SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/5:


Creating summary for Dio_schm_read_msr/4:



========== IPA-SRA IPA stage ==========

Summary for node SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01/8:
  No parameter information. 

  Summary for edge SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01/8->Sys_GetCoreID/9:

Summary for node SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/7:
  No parameter information. 

  Summary for edge SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/7->Sys_GetCoreID/9:

Summary for node SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00/6:
  No parameter information. 

  Summary for edge SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00/6->Sys_GetCoreID/9:

Summary for node SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/5:
  No parameter information. 

  Summary for edge SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/5->Sys_GetCoreID/9:

Summary for node Dio_schm_read_msr/4:
  Returns value
  No parameter information. 



Function Dio_schm_read_msr/4 disqualified because it cannot be made local.
Function SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/5 disqualified because it cannot be made local.
Function SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00/6 disqualified because it cannot be made local.
Function SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/7 disqualified because it cannot be made local.
Function SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01/8 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Sys_GetCoreID/9 (Sys_GetCoreID) @0607eee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01/8 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/7 (1073741824 (estimated locally),1.00 per call) SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00/6 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01/8 (SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01) @0607e9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_DIO_EXCLUSIVE_AREA_01/3 (read) reentry_guard_DIO_EXCLUSIVE_AREA_01/3 (write) msr_DIO_EXCLUSIVE_AREA_01/2 (read) reentry_guard_DIO_EXCLUSIVE_AREA_01/3 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sys_GetCoreID/9 (1073741824 (estimated locally),1.00 per call) 
SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/7 (SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01) @0607e700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_DIO_EXCLUSIVE_AREA_01/3 (read) msr_DIO_EXCLUSIVE_AREA_01/2 (write) msr_DIO_EXCLUSIVE_AREA_01/2 (read) reentry_guard_DIO_EXCLUSIVE_AREA_01/3 (read) reentry_guard_DIO_EXCLUSIVE_AREA_01/3 (write) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sys_GetCoreID/9 (1073741824 (estimated locally),1.00 per call) 
SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00/6 (SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00) @0607e460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_DIO_EXCLUSIVE_AREA_00/1 (read) reentry_guard_DIO_EXCLUSIVE_AREA_00/1 (write) msr_DIO_EXCLUSIVE_AREA_00/0 (read) reentry_guard_DIO_EXCLUSIVE_AREA_00/1 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sys_GetCoreID/9 (1073741824 (estimated locally),1.00 per call) 
SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/5 (SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00) @0607e1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_DIO_EXCLUSIVE_AREA_00/1 (read) msr_DIO_EXCLUSIVE_AREA_00/0 (write) msr_DIO_EXCLUSIVE_AREA_00/0 (read) reentry_guard_DIO_EXCLUSIVE_AREA_00/1 (read) reentry_guard_DIO_EXCLUSIVE_AREA_00/1 (write) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sys_GetCoreID/9 (1073741824 (estimated locally),1.00 per call) 
Dio_schm_read_msr/4 (Dio_schm_read_msr) @06075e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
reentry_guard_DIO_EXCLUSIVE_AREA_01/3 (reentry_guard_DIO_EXCLUSIVE_AREA_01) @0607b9d8
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/7 (read) SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/7 (read) SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/7 (write) SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01/8 (read) SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01/8 (write) SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01/8 (read) 
  Availability: available
  Varpool flags:
msr_DIO_EXCLUSIVE_AREA_01/2 (msr_DIO_EXCLUSIVE_AREA_01) @0607b948
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/7 (read) SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/7 (write) SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01/8 (read) 
  Availability: available
  Varpool flags:
reentry_guard_DIO_EXCLUSIVE_AREA_00/1 (reentry_guard_DIO_EXCLUSIVE_AREA_00) @0607b8b8
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/5 (read) SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/5 (read) SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/5 (write) SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00/6 (read) SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00/6 (write) SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00/6 (read) 
  Availability: available
  Varpool flags:
msr_DIO_EXCLUSIVE_AREA_00/0 (msr_DIO_EXCLUSIVE_AREA_00) @0607b828
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/5 (read) SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/5 (write) SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00/6 (read) 
  Availability: available
  Varpool flags:
SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01 ()
{
  uint32 u32CoreId;
  unsigned char _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  u32CoreId_10 = (uint32) _1;
  # DEBUG u32CoreId => u32CoreId_10
  # DEBUG BEGIN_STMT
  _2 ={v} reentry_guard_DIO_EXCLUSIVE_AREA_01[u32CoreId_10];
  _3 = _2 + 4294967295;
  reentry_guard_DIO_EXCLUSIVE_AREA_01[u32CoreId_10] ={v} _3;
  # DEBUG BEGIN_STMT
  _4 ={v} msr_DIO_EXCLUSIVE_AREA_01[u32CoreId_10];
  _5 = _4 & 1;
  if (_5 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  _6 ={v} reentry_guard_DIO_EXCLUSIVE_AREA_01[u32CoreId_10];
  if (_6 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsie i");

  <bb 5> [local count: 1073741824]:
  return;

}


SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01 ()
{
  register uint32 reg_tmp;
  uint32 u32CoreId;
  unsigned char _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  u32CoreId_10 = (uint32) _1;
  # DEBUG u32CoreId => u32CoreId_10
  # DEBUG BEGIN_STMT
  _2 ={v} reentry_guard_DIO_EXCLUSIVE_AREA_01[u32CoreId_10];
  if (_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Dio_schm_read_msr
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" mrs %0, primask " : "=r" reg_tmp_14);
  # DEBUG reg_tmp => reg_tmp_14
  # DEBUG BEGIN_STMT
  # DEBUG reg_tmp => NULL
  msr_DIO_EXCLUSIVE_AREA_01[u32CoreId_10] ={v} reg_tmp_14;
  # DEBUG BEGIN_STMT
  _3 ={v} msr_DIO_EXCLUSIVE_AREA_01[u32CoreId_10];
  _4 = _3 & 1;
  if (_4 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i");

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _5 ={v} reentry_guard_DIO_EXCLUSIVE_AREA_01[u32CoreId_10];
  _6 = _5 + 1;
  reentry_guard_DIO_EXCLUSIVE_AREA_01[u32CoreId_10] ={v} _6;
  return;

}


SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00 ()
{
  uint32 u32CoreId;
  unsigned char _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  u32CoreId_10 = (uint32) _1;
  # DEBUG u32CoreId => u32CoreId_10
  # DEBUG BEGIN_STMT
  _2 ={v} reentry_guard_DIO_EXCLUSIVE_AREA_00[u32CoreId_10];
  _3 = _2 + 4294967295;
  reentry_guard_DIO_EXCLUSIVE_AREA_00[u32CoreId_10] ={v} _3;
  # DEBUG BEGIN_STMT
  _4 ={v} msr_DIO_EXCLUSIVE_AREA_00[u32CoreId_10];
  _5 = _4 & 1;
  if (_5 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  _6 ={v} reentry_guard_DIO_EXCLUSIVE_AREA_00[u32CoreId_10];
  if (_6 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsie i");

  <bb 5> [local count: 1073741824]:
  return;

}


SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00 ()
{
  register uint32 reg_tmp;
  uint32 u32CoreId;
  unsigned char _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  u32CoreId_10 = (uint32) _1;
  # DEBUG u32CoreId => u32CoreId_10
  # DEBUG BEGIN_STMT
  _2 ={v} reentry_guard_DIO_EXCLUSIVE_AREA_00[u32CoreId_10];
  if (_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Dio_schm_read_msr
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" mrs %0, primask " : "=r" reg_tmp_14);
  # DEBUG reg_tmp => reg_tmp_14
  # DEBUG BEGIN_STMT
  # DEBUG reg_tmp => NULL
  msr_DIO_EXCLUSIVE_AREA_00[u32CoreId_10] ={v} reg_tmp_14;
  # DEBUG BEGIN_STMT
  _3 ={v} msr_DIO_EXCLUSIVE_AREA_00[u32CoreId_10];
  _4 = _3 & 1;
  if (_4 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i");

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _5 ={v} reentry_guard_DIO_EXCLUSIVE_AREA_00[u32CoreId_10];
  _6 = _5 + 1;
  reentry_guard_DIO_EXCLUSIVE_AREA_00[u32CoreId_10] ={v} _6;
  return;

}


Dio_schm_read_msr ()
{
  register uint32 reg_tmp;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" mrs %0, primask " : "=r" reg_tmp_1);
  # DEBUG reg_tmp => reg_tmp_1
  # DEBUG BEGIN_STMT
  return reg_tmp_1;

}


