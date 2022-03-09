Creating summary for Clock_Ip_CallbackFracDivEmptyComplete/1:
  Descriptor for parameter 0 DfsNameD.6553
    (locally) unused
    not a candidate for splitting


Creating summary for Clock_Ip_CallbackFracDivEmpty/0:
  Descriptor for parameter 0 ConfigD.6550
    unused with 0 call_uses
    by_ref with 0 pass throughs
----------------------------------------
  Descriptor for parameter 0 ConfigD.6550
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref



========== IPA-SRA IPA stage ==========

Summary for node Clock_Ip_CallbackFracDivEmptyComplete/1:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting


Summary for node Clock_Ip_CallbackFracDivEmpty/0:
  Descriptor for parameter 0:
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref



Function Clock_Ip_CallbackFracDivEmpty/0 disqualified because it cannot be made local.
Function Clock_Ip_CallbackFracDivEmptyComplete/1 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Clock_Ip_axFracDivCallbacks/2 (Clock_Ip_axFracDivCallbacks) @06258f78
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_CallbackFracDivEmpty/0 (addr) Clock_Ip_CallbackFracDivEmpty/0 (addr) Clock_Ip_CallbackFracDivEmptyComplete/1 (addr) 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_CallbackFracDivEmptyComplete/1 (Clock_Ip_CallbackFracDivEmptyComplete) @06259b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axFracDivCallbacks/2 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_CallbackFracDivEmpty/0 (Clock_Ip_CallbackFracDivEmpty) @062598c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axFracDivCallbacks/2 (addr) Clock_Ip_axFracDivCallbacks/2 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_CallbackFracDivEmptyComplete (Clock_Ip_NameType DfsName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}


Clock_Ip_CallbackFracDivEmpty (const struct Clock_Ip_FracDivConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


