
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  main_c1/2:

 Propagating constants:


overall_size: 7

IPA lattices after all propagation:

Lattices:
  Node: main_c1/2:

IPA decision stage:


IPA constant propagation end

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

;; Function main_c1 (main_c1, funcdef_no=1, decl_uid=6442, cgraph_uid=2, symbol_order=2)

Modification phase of node main_c1/2
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


