Creating summary for NVIC_SetPriority/3:
  Descriptor for parameter 0 IRQnD.9012
    not a candidate for splitting
  Descriptor for parameter 1 priorityD.9013
    not a candidate for splitting


Creating summary for NVIC_DisableIRQ/2:
  Descriptor for parameter 0 IRQnD.9009
    not a candidate for splitting


Creating summary for NVIC_EnableIRQ/1:
  Descriptor for parameter 0 IRQnD.9006
    not a candidate for splitting


Creating summary for NVIC_SetPriorityGrouping/0:
  Descriptor for parameter 0 PriorityGroupD.9003
    not a candidate for splitting



========== IPA-SRA IPA stage ==========

Summary for node NVIC_SetPriority/3:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting


Summary for node NVIC_DisableIRQ/2:
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node NVIC_EnableIRQ/1:
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node NVIC_SetPriorityGrouping/0:
  Descriptor for parameter 0:
    not a candidate for splitting



Function NVIC_SetPriorityGrouping/0 disqualified because it cannot be made local.
Function NVIC_EnableIRQ/1 disqualified because it cannot be made local.
Function NVIC_DisableIRQ/2 disqualified because it cannot be made local.
Function NVIC_SetPriority/3 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

NVIC_SetPriority/3 (NVIC_SetPriority) @07d2da80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NVIC_DisableIRQ/2 (NVIC_DisableIRQ) @07d2d7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NVIC_EnableIRQ/1 (NVIC_EnableIRQ) @07d2d540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NVIC_SetPriorityGrouping/0 (NVIC_SetPriorityGrouping) @07d2d2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NVIC_SetPriority (uint8 IRQn, uint8 priority)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG shift => 4
  # DEBUG BEGIN_STMT
  _1 = (long unsigned int) priority_5(D);
  _2 = _1 << 4;
  _3 = (long unsigned int) IRQn_6(D);
  _4 = (unsigned char) _2;
  MEM[(struct S32_NVIC_Type *)3758153728B].IP[_3] ={v} _4;
  return;

}


NVIC_DisableIRQ (uint8 IRQn)
{
  long unsigned int _1;
  unsigned char _2;
  unsigned char _3;
  long unsigned int _4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = IRQn_6(D) & 31;
  _1 = (long unsigned int) _2;
  _3 = IRQn_6(D) >> 5;
  _4 = (long unsigned int) _3;
  _5 = 1 << _1;
  MEM[(struct S32_NVIC_Type *)3758153728B].ICER[_4] ={v} _5;
  return;

}


NVIC_EnableIRQ (uint8 IRQn)
{
  long unsigned int _1;
  unsigned char _2;
  unsigned char _3;
  long unsigned int _4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = IRQn_6(D) & 31;
  _1 = (long unsigned int) _2;
  _3 = IRQn_6(D) >> 5;
  _4 = (long unsigned int) _3;
  _5 = 1 << _1;
  MEM[(struct S32_NVIC_Type *)3758153728B].ISER[_4] ={v} _5;
  return;

}


NVIC_SetPriorityGrouping (uint32 PriorityGroup)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct S32_SCB_Type *)3758153728B].AIRCR;
  _2 = _1 & 4294965503;
  _3 = _2 | PriorityGroup_5(D);
  MEM[(struct S32_SCB_Type *)3758153728B].AIRCR ={v} _3;
  return;

}


