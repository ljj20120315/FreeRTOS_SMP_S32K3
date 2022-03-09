
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Lpuart_Uart_Ip_IrqHandler/28:
  Jump functions of caller  LPUART_UART_IP_0_IRQHandler/27:
    callsite  LPUART_UART_IP_0_IRQHandler/27 -> Lpuart_Uart_Ip_IrqHandler/28 : 
       no arg info

 Propagating constants:


overall_size: 5

IPA lattices after all propagation:

Lattices:
  Node: LPUART_UART_IP_0_IRQHandler/27:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Lpuart_Uart_Ip_IrqHandler/28 (Lpuart_Uart_Ip_IrqHandler) @06d22d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: LPUART_UART_IP_0_IRQHandler/27 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
LPUART_UART_IP_0_IRQHandler/27 (LPUART_UART_IP_0_IRQHandler) @06d227e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lpuart_Uart_Ip_IrqHandler/28 (1073741824 (estimated locally),1.00 per call) 

;; Function LPUART_UART_IP_0_IRQHandler (LPUART_UART_IP_0_IRQHandler, funcdef_no=27, decl_uid=6049, cgraph_uid=28, symbol_order=27)

Modification phase of node LPUART_UART_IP_0_IRQHandler/27
LPUART_UART_IP_0_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Lpuart_Uart_Ip_IrqHandler (0);
  # DEBUG BEGIN_STMT
  return;

}


