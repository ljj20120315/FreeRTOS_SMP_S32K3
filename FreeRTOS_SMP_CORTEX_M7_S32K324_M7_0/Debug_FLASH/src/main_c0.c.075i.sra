Creating summary for MultiCore_Enable.part.0/12:


Creating summary for main_c0/3:


Creating summary for MultiCore_Enable/2:
  Descriptor for parameter 0 coreD.7316
    not a candidate for splitting



========== IPA-SRA IPA stage ==========

Summary for node MultiCore_Enable.part.0/12:
  No parameter information. 


Summary for node main_c0/3:
  Returns value
  No parameter information. 

  Summary for edge main_c0/3->Sema42_Ip_Init/11:
    return value ignored
  Summary for edge main_c0/3->Siul2_Port_Ip_Init/9:
    return value ignored
  Summary for edge main_c0/3->Clock_Ip_Init/7:
    return value ignored
  Summary for edge main_c0/3->OsIf_Init/6:
    return value ignored
  Summary for edge main_c0/3->Xrdc_Ip_Init/4:
    return value ignored
  Summary for edge main_c0/3->MultiCore_Enable.part.0/12:
    return value ignored

Summary for node MultiCore_Enable/2:
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge MultiCore_Enable/2->MultiCore_Enable.part.0/12:
    return value ignored


Function MultiCore_Enable/2 disqualified because it cannot be made local.
Function main_c0/3 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

MultiCore_Enable.part.0/12 (MultiCore_Enable.part.0) @072d9b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local split_part optimize_size
  Called by: main_c0/3 (118111600 (estimated locally),1.00 per call) MultiCore_Enable/2 (118111600 (estimated locally),0.34 per call) 
  Calls: 
Sema42_Ip_Init/11 (Sema42_Ip_Init) @072d9540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main_c0/3 (118111600 (estimated locally),1.00 per call) 
  Calls: 
g_pin_mux_InitConfigArr0/10 (g_pin_mux_InitConfigArr0) @072d2af8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main_c0/3 (addr) 
  Availability: not_available
  Varpool flags: read-only
Siul2_Port_Ip_Init/9 (Siul2_Port_Ip_Init) @072d9460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main_c0/3 (118111600 (estimated locally),1.00 per call) 
  Calls: 
Mcu_aClockConfigPB/8 (Mcu_aClockConfigPB) @072d2a68
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main_c0/3 (addr) 
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_Init/7 (Clock_Ip_Init) @072d9380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main_c0/3 (118111600 (estimated locally),1.00 per call) 
  Calls: 
OsIf_Init/6 (OsIf_Init) @072d92a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main_c0/3 (118111600 (estimated locally),1.00 per call) 
  Calls: 
Xrdc_Config_BOARD_INITPERIPHERALS/5 (Xrdc_Config_BOARD_INITPERIPHERALS) @072d2990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main_c0/3 (addr) 
  Availability: not_available
  Varpool flags: read-only
Xrdc_Ip_Init/4 (Xrdc_Ip_Init) @072d91c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main_c0/3 (118111600 (estimated locally),1.00 per call) 
  Calls: 
main_c0/3 (main_c0) @072d0d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Xrdc_Config_BOARD_INITPERIPHERALS/5 (addr) Mcu_aClockConfigPB/8 (addr) g_pin_mux_InitConfigArr0/10 (addr) exit_code0/1 (read) exit_code0/1 (read) 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: Sema42_Ip_Init/11 (118111600 (estimated locally),1.00 per call) Siul2_Port_Ip_Init/9 (118111600 (estimated locally),1.00 per call) Clock_Ip_Init/7 (118111600 (estimated locally),1.00 per call) OsIf_Init/6 (118111600 (estimated locally),1.00 per call) Xrdc_Ip_Init/4 (118111600 (estimated locally),1.00 per call) MultiCore_Enable.part.0/12 (118111600 (estimated locally),1.00 per call) 
MultiCore_Enable/2 (MultiCore_Enable) @072d0a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:347387056 (estimated locally) body optimize_size
  Called by: 
  Calls: MultiCore_Enable.part.0/12 (118111600 (estimated locally),0.34 per call) 
exit_code0/1 (exit_code0) @072d2120
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: main_c0/3 (read) main_c0/3 (read) 
  Availability: available
  Varpool flags: initialized
MultiCore_Enable.part.0 ()
{
  uint8_t core;
  long unsigned int _1;
  long unsigned int _2;

  <bb 6> [local count: 118111600]:
  # DEBUG D#2 s=> core
  # DEBUG core => D#2

  <bb 2> [local count: 118111600]:
<L0>:
  # DEBUG BEGIN_STMT
  MEM[(struct MC_ME_Type *)1076740096B].PRTN0_CORE1_ADDR ={v} 4198400;
  # DEBUG BEGIN_STMT
  MEM[(struct MC_ME_Type *)1076740096B].PRTN0_CORE1_PCONF ={v} 1;
  # DEBUG BEGIN_STMT
  MEM[(struct MC_ME_Type *)1076740096B].PRTN0_CORE1_PUPD ={v} 1;
  # DEBUG BEGIN_STMT
  MEM[(struct MC_ME_Type *)1076740096B].CTL_KEY ={v} 23280;
  # DEBUG BEGIN_STMT
  MEM[(struct MC_ME_Type *)1076740096B].CTL_KEY ={v} 42255;
  # DEBUG BEGIN_STMT

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN0_CORE1_STAT;
  _2 = _1 & 1;
  if (_2 == 0)
    goto <bb 4>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 4> [local count: 955630225]:
  goto <bb 3>; [100.00%]

  <bb 5> [local count: 118111600]:
  return;

}


main_c0 ()
{
  int exit_code0.0_1;
  int _8;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG core => 1
  # DEBUG INLINE_ENTRY MultiCore_Enable
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 1
  MultiCore_Enable.part.0 ();
  # DEBUG core => NULL
  # DEBUG BEGIN_STMT
  Xrdc_Ip_Init (&Xrdc_Config_BOARD_INITPERIPHERALS);
  # DEBUG BEGIN_STMT
  OsIf_Init (0B);
  # DEBUG BEGIN_STMT
  Clock_Ip_Init (&Mcu_aClockConfigPB[0]);
  # DEBUG BEGIN_STMT
  Siul2_Port_Ip_Init (6, &g_pin_mux_InitConfigArr0);
  # DEBUG BEGIN_STMT
  Sema42_Ip_Init (0);

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  exit_code0.0_1 ={v} exit_code0;
  if (exit_code0.0_1 != 0)
    goto <bb 4>; [11.00%]
  else
    goto <bb 5>; [89.00%]

  <bb 5> [local count: 955630225]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _8 ={v} exit_code0;
  return _8;

}


MultiCore_Enable (uint8_t core)
{
  <bb 2> [local count: 347387056]:
  # DEBUG BEGIN_STMT
  if (core_3(D) == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 118111600]:
<L0>:
  # DEBUG D#1 => core_3(D)
  MultiCore_Enable.part.0 ();

  <bb 4> [local count: 347387056]:
  return;

}


