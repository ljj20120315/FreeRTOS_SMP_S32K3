Creating summary for main/1:



========== IPA-SRA IPA stage ==========

Summary for node main/1:
  Returns value
  No parameter information. 

  Summary for edge main/1->main_c1/4:
    return value ignored
  Summary for edge main/1->main_c0/3:
    return value ignored
  Summary for edge main/1->Sys_GetCoreID/2:


Function main/1 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

main_c1/4 (main_c1) @06c7ea80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/1 (59055800 (estimated locally),0.50 per call) 
  Calls: 
main_c0/3 (main_c0) @06c7e9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/1 (59055800 (estimated locally),0.50 per call) 
  Calls: 
Sys_GetCoreID/2 (Sys_GetCoreID) @06c7e8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/1 (118111600 (estimated locally),1.00 per call) 
  Calls: 
main/1 (main) @06c7e460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: exit_code/0 (read) exit_code/0 (read) 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: main_c1/4 (59055800 (estimated locally),0.50 per call) main_c0/3 (59055800 (estimated locally),0.50 per call) Sys_GetCoreID/2 (118111600 (estimated locally),1.00 per call) 
exit_code/0 (exit_code) @06c7d630
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: main/1 (read) main/1 (read) 
  Availability: available
  Varpool flags: initialized
main ()
{
  unsigned char _1;
  int exit_code.0_2;
  int _8;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  main_c0 ();
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  main_c1 ();

  <bb 6> [local count: 118111600]:

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  exit_code.0_2 ={v} exit_code;
  if (exit_code.0_2 != 0)
    goto <bb 7>; [11.00%]
  else
    goto <bb 9>; [89.00%]

  <bb 9> [local count: 955630225]:
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _8 ={v} exit_code;
  return _8;

}


