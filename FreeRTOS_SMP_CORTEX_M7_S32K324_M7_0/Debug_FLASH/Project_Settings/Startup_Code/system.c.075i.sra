Creating summary for sys_m7_cache_clean/9:


Creating summary for sys_m7_cache_disable/8:


Creating summary for sys_m7_cache_init/7:


Creating summary for SystemInit/6:


Creating summary for Sys_GetCoreID/5:


Creating summary for default_interrupt_routine/4:


Creating summary for startup_go_to_user_mode/3:



========== IPA-SRA IPA stage ==========

Summary for node sys_m7_cache_clean/9:
  No parameter information. 


Summary for node sys_m7_cache_disable/8:
  No parameter information. 

  Summary for edge sys_m7_cache_disable/8->sys_m7_cache_clean/9:
    return value ignored

Summary for node sys_m7_cache_init/7:
  No parameter information. 

  Summary for edge sys_m7_cache_init/7->sys_m7_cache_clean/9:
    return value ignored

Summary for node SystemInit/6:
  No parameter information. 

  Summary for edge SystemInit/6->sys_m7_cache_init/7:
    return value ignored
  Summary for edge SystemInit/6->sys_m7_cache_disable/8:
    return value ignored
  Summary for edge SystemInit/6->sys_m7_cache_clean/9:
    return value ignored

Summary for node Sys_GetCoreID/5:
  Returns value
  No parameter information. 


Summary for node default_interrupt_routine/4:
  No parameter information. 


Summary for node startup_go_to_user_mode/3:
  No parameter information. 



Function startup_go_to_user_mode/3 disqualified because it cannot be made local.
Function default_interrupt_routine/4 disqualified because it cannot be made local.
Function Sys_GetCoreID/5 disqualified because it cannot be made local.
Function SystemInit/6 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

__RAM_SHAREABLE_SIZE/19 (__RAM_SHAREABLE_SIZE) @06e72cf0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SystemInit/6 (addr) 
  Availability: not_available
  Varpool flags:
__RAM_SHAREABLE_START/18 (__RAM_SHAREABLE_START) @06e72ca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SystemInit/6 (addr) 
  Availability: not_available
  Varpool flags:
__RAM_NO_CACHEABLE_SIZE/17 (__RAM_NO_CACHEABLE_SIZE) @06e72c60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SystemInit/6 (addr) 
  Availability: not_available
  Varpool flags:
__RAM_NO_CACHEABLE_START/16 (__RAM_NO_CACHEABLE_START) @06e72c18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SystemInit/6 (addr) 
  Availability: not_available
  Varpool flags:
__RAM_CACHEABLE_SIZE/15 (__RAM_CACHEABLE_SIZE) @06e72bd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SystemInit/6 (addr) 
  Availability: not_available
  Varpool flags:
__INT_SRAM_START/14 (__INT_SRAM_START) @06e72b88
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SystemInit/6 (addr) 
  Availability: not_available
  Varpool flags:
__INT_DTCM_START/13 (__INT_DTCM_START) @06e72b40
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SystemInit/6 (addr) 
  Availability: not_available
  Varpool flags:
__ROM_DATA_START/12 (__ROM_DATA_START) @06e72af8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SystemInit/6 (addr) 
  Availability: not_available
  Varpool flags:
__ROM_CODE_START/11 (__ROM_CODE_START) @06e72ab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SystemInit/6 (addr) 
  Availability: not_available
  Varpool flags:
__INT_ITCM_START/10 (__INT_ITCM_START) @06e72a68
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SystemInit/6 (addr) 
  Availability: not_available
  Varpool flags:
sys_m7_cache_clean/9 (sys_m7_cache_clean) @06d1d620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:12992276 (estimated locally) body local optimize_size
  Called by: SystemInit/6 (7140382 (estimated locally),0.67 per call) sys_m7_cache_init/7 (12992276 (estimated locally),1.00 per call) sys_m7_cache_disable/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
sys_m7_cache_disable/8 (sys_m7_cache_disable) @06d1d0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SystemInit/6 (7140382 (estimated locally),0.67 per call) 
  Calls: sys_m7_cache_clean/9 (1073741824 (estimated locally),1.00 per call) 
sys_m7_cache_init/7 (sys_m7_cache_init) @06d1dd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:12992276 (estimated locally) body local optimize_size
  Called by: SystemInit/6 (10737416 (estimated locally),1.00 per call) 
  Calls: sys_m7_cache_clean/9 (12992276 (estimated locally),1.00 per call) 
SystemInit/6 (SystemInit) @06d1da80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: rbar/0 (write) rasr/1 (write) __INT_ITCM_START/10 (addr) rbar/0 (write) rasr/1 (write) __ROM_CODE_START/11 (addr) rbar/0 (write) rasr/1 (write) __ROM_DATA_START/12 (addr) rbar/0 (write) rasr/1 (write) __INT_DTCM_START/13 (addr) rbar/0 (write) rasr/1 (write) __INT_SRAM_START/14 (addr) rbar/0 (write) __RAM_CACHEABLE_SIZE/15 (addr) rasr/1 (write) __RAM_NO_CACHEABLE_START/16 (addr) rbar/0 (write) __RAM_NO_CACHEABLE_SIZE/17 (addr) rasr/1 (write) __RAM_SHAREABLE_START/18 (addr) rbar/0 (write) __RAM_SHAREABLE_SIZE/19 (addr) rasr/1 (write) rbar/0 (write) rasr/1 (write) rbar/0 (write) rasr/1 (write) rbar/0 (write) rasr/1 (write) rbar/0 (write) rasr/1 (write) rbar/0 (write) rasr/1 (write) rbar/0 (write) rasr/1 (write) rasr/1 (read) rbar/0 (read) rasr/1 (read) 
  Referring: 
  Availability: available
  Function flags: count:10737416 (estimated locally) body optimize_size
  Called by: 
  Calls: sys_m7_cache_init/7 (10737416 (estimated locally),1.00 per call) sys_m7_cache_disable/8 (7140382 (estimated locally),0.67 per call) sys_m7_cache_clean/9 (7140382 (estimated locally),0.67 per call) 
Sys_GetCoreID/5 (Sys_GetCoreID) @06d1d7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
default_interrupt_routine/4 (default_interrupt_routine) @06d1d540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:10631108 (estimated locally) body executed_once optimize_size
  Called by: 
  Calls: 
startup_go_to_user_mode/3 (startup_go_to_user_mode) @06d1d2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
RESET_CATCH_CORE/2 (RESET_CATCH_CORE) @06d1a438
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags:
rasr/1 (rasr) @06d1a318
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (read) SystemInit/6 (read) 
  Availability: available
  Varpool flags: initialized
rbar/0 (rbar) @06d1a288
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (write) SystemInit/6 (read) 
  Availability: available
  Varpool flags: initialized
sys_m7_cache_clean ()
{
  uint32 ways;
  uint32 sets;
  uint32 ccsidr;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;

  <bb 2> [local count: 12992276]:
  # DEBUG BEGIN_STMT
  # DEBUG ccsidr => 0
  # DEBUG BEGIN_STMT
  # DEBUG sets => 0
  # DEBUG BEGIN_STMT
  # DEBUG ways => 0
  # DEBUG BEGIN_STMT
  MEM[(struct S32_SCB_Type *)3758153728B].CSSELR ={v} 0;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb");
  # DEBUG BEGIN_STMT
  ccsidr_16 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CCSIDR;
  # DEBUG ccsidr => ccsidr_16
  # DEBUG BEGIN_STMT
  _1 = ccsidr_16 >> 13;
  sets_17 = _1 & 32767;
  # DEBUG sets => sets_17

  <bb 3> [local count: 118111600]:
  # sets_9 = PHI <sets_17(2), sets_22(7)>
  # DEBUG sets => sets_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = ccsidr_16 >> 3;
  ways_18 = _2 & 1023;
  # DEBUG ways => ways_18

  <bb 4> [local count: 1073741824]:
  # ways_10 = PHI <ways_18(3), ways_21(8)>
  # DEBUG ways => ways_10
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = sets_9 << 5;
  _4 = _3 & 16352;
  _5 = ways_10 << 30;
  _6 = _4 | _5;
  MEM[(struct S32_SCB_Type *)3758153728B].DCCISW ={v} _6;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb");
  # DEBUG BEGIN_STMT
  ways_21 = ways_10 + 4294967295;
  # DEBUG ways => ways_21
  if (ways_10 != 0)
    goto <bb 8>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 8> [local count: 955630225]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  sets_22 = sets_9 + 4294967295;
  # DEBUG sets => sets_22
  if (sets_9 != 0)
    goto <bb 7>; [89.00%]
  else
    goto <bb 6>; [11.00%]

  <bb 7> [local count: 105119324]:
  goto <bb 3>; [100.00%]

  <bb 6> [local count: 12992276]:
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CSSELR;
  _8 = _7 | 1;
  MEM[(struct S32_SCB_Type *)3758153728B].CSSELR ={v} _8;
  # DEBUG BEGIN_STMT
  MEM[(struct S32_SCB_Type *)3758153728B].ICIALLU ={v} 0;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb");
  return;

}


sys_m7_cache_disable ()
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  sys_m7_cache_clean ();
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CCR;
  _2 = _1 & 4294836223;
  MEM[(struct S32_SCB_Type *)3758153728B].CCR ={v} _2;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CCR;
  _4 = _3 & 4294901759;
  MEM[(struct S32_SCB_Type *)3758153728B].CCR ={v} _4;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  return;

}


sys_m7_cache_init ()
{
  uint32 ways;
  uint32 sets;
  uint32 ccsidr;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;

  <bb 2> [local count: 12992276]:
  # DEBUG BEGIN_STMT
  # DEBUG ccsidr => 0
  # DEBUG BEGIN_STMT
  # DEBUG sets => 0
  # DEBUG BEGIN_STMT
  # DEBUG ways => 0
  # DEBUG BEGIN_STMT
  MEM[(struct S32_SCB_Type *)3758153728B].CSSELR ={v} 0;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb");
  # DEBUG BEGIN_STMT
  ccsidr_18 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CCSIDR;
  # DEBUG ccsidr => ccsidr_18
  # DEBUG BEGIN_STMT
  _1 = ccsidr_18 >> 13;
  sets_19 = _1 & 32767;
  # DEBUG sets => sets_19

  <bb 3> [local count: 118111600]:
  # sets_11 = PHI <sets_19(2), sets_24(7)>
  # DEBUG sets => sets_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = ccsidr_18 >> 3;
  ways_20 = _2 & 1023;
  # DEBUG ways => ways_20

  <bb 4> [local count: 1073741824]:
  # ways_12 = PHI <ways_20(3), ways_23(8)>
  # DEBUG ways => ways_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = sets_11 << 5;
  _4 = _3 & 16352;
  _5 = ways_12 << 30;
  _6 = _4 | _5;
  MEM[(struct S32_SCB_Type *)3758153728B].DCISW ={v} _6;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb");
  # DEBUG BEGIN_STMT
  ways_23 = ways_12 + 4294967295;
  # DEBUG ways => ways_23
  if (ways_12 != 0)
    goto <bb 8>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 8> [local count: 955630225]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  sets_24 = sets_11 + 4294967295;
  # DEBUG sets => sets_24
  if (sets_11 != 0)
    goto <bb 7>; [89.00%]
  else
    goto <bb 6>; [11.00%]

  <bb 7> [local count: 105119324]:
  goto <bb 3>; [100.00%]

  <bb 6> [local count: 12992276]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb");
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CCR;
  _8 = _7 | 65536;
  MEM[(struct S32_SCB_Type *)3758153728B].CCR ={v} _8;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT
  MEM[(struct S32_SCB_Type *)3758153728B].ICIALLU ={v} 0;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT
  _9 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CCR;
  _10 = _9 | 131072;
  MEM[(struct S32_SCB_Type *)3758153728B].CCR ={v} _10;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT
  sys_m7_cache_clean ();
  return;

}


SystemInit ()
{
  uint8 index;
  uint8 regionNum;
  uint32 coreMask;
  uint32 i;
  short unsigned int _1;
  short unsigned int _2;
  short unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int __INT_ITCM_START.0_6;
  long unsigned int __ROM_CODE_START.1_7;
  long unsigned int __ROM_DATA_START.2_8;
  long unsigned int __INT_DTCM_START.3_9;
  long unsigned int __INT_SRAM_START.4_10;
  long unsigned int __RAM_CACHEABLE_SIZE.5_11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int __RAM_NO_CACHEABLE_START.6_15;
  long unsigned int __RAM_NO_CACHEABLE_SIZE.7_16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;
  long unsigned int __RAM_SHAREABLE_START.8_20;
  long unsigned int __RAM_SHAREABLE_SIZE.9_21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;
  long unsigned int _25;
  long unsigned int _26;
  long unsigned int _27;
  long unsigned int _28;
  int _29;
  long unsigned int _30;
  long unsigned int _31;
  long unsigned int _32;
  long unsigned int _34;
  long unsigned int _36;
  long unsigned int _37;
  long unsigned int _38;
  long unsigned int _95;
  unsigned char _96;
  unsigned char _97;

  <bb 2> [local count: 10737416]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG coreMask => 0
  # DEBUG BEGIN_STMT
  # DEBUG regionNum => 0
  # DEBUG BEGIN_STMT
  # DEBUG index => 0
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Sys_GetCoreID
  # DEBUG BEGIN_STMT
  _95 ={v} MEM[(struct MSCM_Type *)1076232192B].CPXNUM;
  _96 = (unsigned char) _95;
  _97 = _96 & 3;
  # DEBUG coreId => _97
  # DEBUG BEGIN_STMT
  switch (_97) <default: <L2> [33.33%], case 0: <L15> [33.33%], case 1: <L1> [33.33%]>

  <bb 3> [local count: 3579139]:
<L1>:
  # DEBUG BEGIN_STMT
  # DEBUG coreMask => 2
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 3579139]:
<L2>:
  # DEBUG BEGIN_STMT
  # DEBUG coreMask => 0
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 10737416]:
  # coreMask_40 = PHI <1(2), 2(3), 0(4)>
<L15>:
  # DEBUG coreMask => coreMask_40
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 1063004409]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MSCM_Type *)1076232192B].IRSPRC[i_39];
  _2 = (short unsigned int) coreMask_40;
  _3 = _1 | _2;
  MEM[(struct MSCM_Type *)1076232192B].IRSPRC[i_39] ={v} _3;
  # DEBUG BEGIN_STMT
  i_94 = i_39 + 1;
  # DEBUG i => i_94

  <bb 7> [local count: 1073741824]:
  # i_39 = PHI <0(5), i_94(6)>
  # DEBUG i => i_39
  # DEBUG BEGIN_STMT
  if (i_39 != 240)
    goto <bb 6>; [99.00%]
  else
    goto <bb 8>; [1.00%]

  <bb 8> [local count: 10737416]:
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CPACR;
  _5 = _4 | 15728640;
  MEM[(struct S32_SCB_Type *)3758153728B].CPACR ={v} _5;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT
  rbar[0] ={v} 0;
  # DEBUG BEGIN_STMT
  rasr[0] ={v} 268697663;
  # DEBUG BEGIN_STMT
  __INT_ITCM_START.0_6 = (long unsigned int) &__INT_ITCM_START;
  rbar[1] ={v} __INT_ITCM_START.0_6;
  # DEBUG BEGIN_STMT
  rasr[1] ={v} 17039391;
  # DEBUG BEGIN_STMT
  __ROM_CODE_START.1_7 = (long unsigned int) &__ROM_CODE_START;
  rbar[2] ={v} __ROM_CODE_START.1_7;
  # DEBUG BEGIN_STMT
  rasr[2] ={v} 101384235;
  # DEBUG BEGIN_STMT
  __ROM_DATA_START.2_8 = (long unsigned int) &__ROM_DATA_START;
  rbar[3] ={v} __ROM_DATA_START.2_8;
  # DEBUG BEGIN_STMT
  rasr[3] ={v} 369426467;
  # DEBUG BEGIN_STMT
  __INT_DTCM_START.3_9 = (long unsigned int) &__INT_DTCM_START;
  rbar[4] ={v} __INT_DTCM_START.3_9;
  # DEBUG BEGIN_STMT
  rasr[4] ={v} 17039393;
  # DEBUG BEGIN_STMT
  __INT_SRAM_START.4_10 = (long unsigned int) &__INT_SRAM_START;
  rbar[5] ={v} __INT_SRAM_START.4_10;
  # DEBUG BEGIN_STMT
  __RAM_CACHEABLE_SIZE.5_11 = (long unsigned int) &__RAM_CACHEABLE_SIZE;
  _12 = __RAM_CACHEABLE_SIZE.5_11 + 4294967295;
  _13 = _12 << 1;
  _14 = _13 | 51052545;
  rasr[5] ={v} _14;
  # DEBUG BEGIN_STMT
  __RAM_NO_CACHEABLE_START.6_15 = (long unsigned int) &__RAM_NO_CACHEABLE_START;
  rbar[6] ={v} __RAM_NO_CACHEABLE_START.6_15;
  # DEBUG BEGIN_STMT
  __RAM_NO_CACHEABLE_SIZE.7_16 = (long unsigned int) &__RAM_NO_CACHEABLE_SIZE;
  _17 = __RAM_NO_CACHEABLE_SIZE.7_16 + 4294967295;
  _18 = _17 << 1;
  _19 = _18 | 319553537;
  rasr[6] ={v} _19;
  # DEBUG BEGIN_STMT
  __RAM_SHAREABLE_START.8_20 = (long unsigned int) &__RAM_SHAREABLE_START;
  rbar[7] ={v} __RAM_SHAREABLE_START.8_20;
  # DEBUG BEGIN_STMT
  __RAM_SHAREABLE_SIZE.9_21 = (long unsigned int) &__RAM_SHAREABLE_SIZE;
  _22 = __RAM_SHAREABLE_SIZE.9_21 + 4294967295;
  _23 = _22 << 1;
  _24 = _23 | 319553537;
  rasr[7] ={v} _24;
  # DEBUG BEGIN_STMT
  rbar[8] ={v} 1073741824;
  # DEBUG BEGIN_STMT
  rasr[8] ={v} 319094825;
  # DEBUG BEGIN_STMT
  rbar[9] ={v} 1075838976;
  # DEBUG BEGIN_STMT
  rasr[9] ={v} 319094825;
  # DEBUG BEGIN_STMT
  rbar[10] ={v} 1077936128;
  # DEBUG BEGIN_STMT
  rasr[10] ={v} 319094825;
  # DEBUG BEGIN_STMT
  rbar[11] ={v} 1728053248;
  # DEBUG BEGIN_STMT
  rasr[11] ={v} 319094803;
  # DEBUG BEGIN_STMT
  rbar[12] ={v} 1744830464;
  # DEBUG BEGIN_STMT
  rasr[12] ={v} 51052597;
  # DEBUG BEGIN_STMT
  rbar[13] ={v} 3758096384;
  # DEBUG BEGIN_STMT
  rasr[13] ={v} 319029287;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT
  _25 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CCR;
  _26 = _25 & 131072;
  if (_26 != 0)
    goto <bb 10>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 9> [local count: 7194069]:
  _27 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CCR;
  _28 = _27 & 65536;
  if (_28 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 7140382]:
  # DEBUG BEGIN_STMT
  sys_m7_cache_clean ();
  # DEBUG BEGIN_STMT
  sys_m7_cache_disable ();

  <bb 11> [local count: 10737416]:
  # regionNum_45 = PHI <0(10), 0(9)>
  # index_33 = PHI <0(10), 0(9)>
  goto <bb 15>; [100.00%]

  <bb 12> [local count: 161061240]:
  # DEBUG BEGIN_STMT
  _29 = (int) index_43;
  _30 ={v} rasr[_29];
  _31 = _30 & 1;
  if (_31 != 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 13> [local count: 80530620]:
  # DEBUG BEGIN_STMT
  _32 = (long unsigned int) regionNum_42;
  MEM[(struct S32_MPU_Type *)3758153728B].RNR ={v} _32;
  # DEBUG BEGIN_STMT
  _34 ={v} rbar[_29];
  MEM[(struct S32_MPU_Type *)3758153728B].RBAR ={v} _34;
  # DEBUG BEGIN_STMT
  _36 ={v} rasr[_29];
  MEM[(struct S32_MPU_Type *)3758153728B].RASR ={v} _36;
  # DEBUG BEGIN_STMT
  regionNum_91 = regionNum_42 + 1;
  # DEBUG regionNum => regionNum_91

  <bb 14> [local count: 161061240]:
  # regionNum_41 = PHI <regionNum_42(12), regionNum_91(13)>
  # DEBUG regionNum => regionNum_41
  # DEBUG BEGIN_STMT
  index_92 = index_43 + 1;
  # DEBUG index => index_92

  <bb 15> [local count: 171798656]:
  # regionNum_42 = PHI <regionNum_45(11), regionNum_41(14)>
  # index_43 = PHI <index_33(11), index_92(14)>
  # DEBUG index => index_43
  # DEBUG regionNum => regionNum_42
  # DEBUG BEGIN_STMT
  if (index_43 != 15)
    goto <bb 12>; [93.75%]
  else
    goto <bb 16>; [6.25%]

  <bb 16> [local count: 10737416]:
  # DEBUG BEGIN_STMT
  _37 ={v} MEM[(struct S32_MPU_Type *)3758153728B].CTRL;
  _38 = _37 | 1;
  MEM[(struct S32_MPU_Type *)3758153728B].CTRL ={v} _38;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT
  sys_m7_cache_init ();
  return;

}


Sys_GetCoreID ()
{
  long unsigned int _1;
  unsigned char _2;
  uint8 _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MSCM_Type *)1076232192B].CPXNUM;
  _2 = (unsigned char) _1;
  _4 = _2 & 3;
  return _4;

}


default_interrupt_routine ()
{
  <bb 2> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}


startup_go_to_user_mode ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


