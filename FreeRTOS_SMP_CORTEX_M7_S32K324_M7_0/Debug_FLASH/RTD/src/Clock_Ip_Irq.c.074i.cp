
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_CMU_ClockFailInt/1:
  Jump functions of caller  Mcu_Cmu_ClockFail_IRQHandler/0:
    callsite  Mcu_Cmu_ClockFail_IRQHandler/0 -> Clock_Ip_CMU_ClockFailInt/1 : 
       no arg info

 Propagating constants:


overall_size: 4

IPA lattices after all propagation:

Lattices:
  Node: Mcu_Cmu_ClockFail_IRQHandler/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Clock_Ip_CMU_ClockFailInt/1 (Clock_Ip_CMU_ClockFailInt) @06d4dc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Cmu_ClockFail_IRQHandler/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Mcu_Cmu_ClockFail_IRQHandler/0 (Mcu_Cmu_ClockFail_IRQHandler) @06d4d7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_CMU_ClockFailInt/1 (1073741824 (estimated locally),1.00 per call) 

;; Function Mcu_Cmu_ClockFail_IRQHandler (Mcu_Cmu_ClockFail_IRQHandler, funcdef_no=0, decl_uid=6547, cgraph_uid=1, symbol_order=0)

Modification phase of node Mcu_Cmu_ClockFail_IRQHandler/0
Mcu_Cmu_ClockFail_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_CMU_ClockFailInt ();
  # DEBUG BEGIN_STMT
  return;

}


