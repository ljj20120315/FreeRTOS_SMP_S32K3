Creating summary for main_c1/2:



========== IPA-SRA IPA stage ==========

Summary for node main_c1/2:
  Returns value
  No parameter information. 



Function main_c1/2 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

main_c1/2 (main_c1) @06cd0460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: exit_code1/1 (read) exit_code1/1 (read) 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
exit_code1/1 (exit_code1) @06ccc510
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: main_c1/2 (read) main_c1/2 (read) 
  Availability: available
  Varpool flags: initialized
main_c1 ()
{
  int exit_code1.0_1;
  int _3;

  <bb 2> [local count: 118111600]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  exit_code1.0_1 ={v} exit_code1;
  if (exit_code1.0_1 != 0)
    goto <bb 4>; [11.00%]
  else
    goto <bb 5>; [89.00%]

  <bb 5> [local count: 955630225]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _3 ={v} exit_code1;
  return _3;

}


