Creating summary for LPUART_UART_IP_0_IRQHandler/27:



========== IPA-SRA IPA stage ==========

Summary for node LPUART_UART_IP_0_IRQHandler/27:
  No parameter information. 

  Summary for edge LPUART_UART_IP_0_IRQHandler/27->Lpuart_Uart_Ip_IrqHandler/28:
    return value ignored


Function LPUART_UART_IP_0_IRQHandler/27 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


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
LPUART_UART_IP_0_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Lpuart_Uart_Ip_IrqHandler (0);
  # DEBUG BEGIN_STMT
  return;

}


