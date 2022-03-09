Creating summary for Det_Start/16:


Creating summary for Det_ReportTransientFault/15:
  Descriptor for parameter 0 ModuleIdD.5781
    not a candidate for splitting
  Descriptor for parameter 1 InstanceIdD.5782
    not a candidate for splitting
  Descriptor for parameter 2 ApiIdD.5783
    not a candidate for splitting
  Descriptor for parameter 3 FaultIdD.5784
    not a candidate for splitting


Creating summary for Det_ReportRuntimeError/14:
  Descriptor for parameter 0 ModuleIdD.5774
    not a candidate for splitting
  Descriptor for parameter 1 InstanceIdD.5775
    not a candidate for splitting
  Descriptor for parameter 2 ApiIdD.5776
    not a candidate for splitting
  Descriptor for parameter 3 ErrorIdD.5777
    not a candidate for splitting


Creating summary for Det_ReportError/13:
  Descriptor for parameter 0 ModuleIdD.5767
    not a candidate for splitting
  Descriptor for parameter 1 InstanceIdD.5768
    not a candidate for splitting
  Descriptor for parameter 2 ApiIdD.5769
    not a candidate for splitting
  Descriptor for parameter 3 ErrorIdD.5770
    not a candidate for splitting


Creating summary for Det_Init/12:



========== IPA-SRA IPA stage ==========

Summary for node Det_Start/16:
  Not a candidate function

Summary for node Det_ReportTransientFault/15:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting
  Descriptor for parameter 3:
    not a candidate for splitting

  Summary for edge Det_ReportTransientFault/15->Sys_GetCoreID/17:

Summary for node Det_ReportRuntimeError/14:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting
  Descriptor for parameter 3:
    not a candidate for splitting

  Summary for edge Det_ReportRuntimeError/14->Sys_GetCoreID/17:

Summary for node Det_ReportError/13:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting
  Descriptor for parameter 3:
    not a candidate for splitting

  Summary for edge Det_ReportError/13->Sys_GetCoreID/17:

Summary for node Det_Init/12:
  No parameter information. 



Function Det_Init/12 disqualified because it cannot be made local.
Function Det_ReportError/13 disqualified because it cannot be made local.
Function Det_ReportRuntimeError/14 disqualified because it cannot be made local.
Function Det_ReportTransientFault/15 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Sys_GetCoreID/17 (Sys_GetCoreID) @06cec2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Det_ReportTransientFault/15 (1073741824 (estimated locally),1.00 per call) Det_ReportRuntimeError/14 (1073741824 (estimated locally),1.00 per call) Det_ReportError/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Det_Start/16 (Det_Start) @06b507e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Det_Init/12 (1073741824 (estimated locally),1.00 per call) 
Det_ReportTransientFault/15 (Det_ReportTransientFault) @06b50ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Det_TransientModuleId/9 (write) Det_TransientInstanceId/6 (write) Det_TransientApiId/7 (write) Det_TransientFaultId/8 (write) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sys_GetCoreID/17 (1073741824 (estimated locally),1.00 per call) 
Det_ReportRuntimeError/14 (Det_ReportRuntimeError) @06b50c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Det_RuntimeModuleId/11 (write) Det_RuntimeInstanceId/3 (write) Det_RuntimeApiId/4 (write) Det_RuntimeErrorId/5 (write) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sys_GetCoreID/17 (1073741824 (estimated locally),1.00 per call) 
Det_ReportError/13 (Det_ReportError) @06b509a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Det_ModuleId/10 (write) Det_InstanceId/0 (write) Det_ApiId/1 (write) Det_ErrorId/2 (write) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sys_GetCoreID/17 (1073741824 (estimated locally),1.00 per call) 
Det_Init/12 (Det_Init) @06b50700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Det_Start/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Det_RuntimeModuleId/11 (Det_RuntimeModuleId) @06b4cf78
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportRuntimeError/14 (write) 
  Availability: available
  Varpool flags:
Det_ModuleId/10 (Det_ModuleId) @06b4cf30
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportError/13 (write) 
  Availability: available
  Varpool flags:
Det_TransientModuleId/9 (Det_TransientModuleId) @06b4cee8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportTransientFault/15 (write) 
  Availability: available
  Varpool flags:
Det_TransientFaultId/8 (Det_TransientFaultId) @06b4cea0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportTransientFault/15 (write) 
  Availability: available
  Varpool flags:
Det_TransientApiId/7 (Det_TransientApiId) @06b4ce58
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportTransientFault/15 (write) 
  Availability: available
  Varpool flags:
Det_TransientInstanceId/6 (Det_TransientInstanceId) @06b4ce10
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportTransientFault/15 (write) 
  Availability: available
  Varpool flags:
Det_RuntimeErrorId/5 (Det_RuntimeErrorId) @06b4cdc8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportRuntimeError/14 (write) 
  Availability: available
  Varpool flags:
Det_RuntimeApiId/4 (Det_RuntimeApiId) @06b4cd80
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportRuntimeError/14 (write) 
  Availability: available
  Varpool flags:
Det_RuntimeInstanceId/3 (Det_RuntimeInstanceId) @06b4cd38
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportRuntimeError/14 (write) 
  Availability: available
  Varpool flags:
Det_ErrorId/2 (Det_ErrorId) @06b4ccf0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportError/13 (write) 
  Availability: available
  Varpool flags:
Det_ApiId/1 (Det_ApiId) @06b4cca8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportError/13 (write) 
  Availability: available
  Varpool flags:
Det_InstanceId/0 (Det_InstanceId) @06b4cc60
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Det_ReportError/13 (write) 
  Availability: available
  Varpool flags:
Det_Start ()
{
  <bb 2> [local count: 1073741824]:
  Det_Init (); [tail call]
  return;

}


Det_ReportTransientFault (uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 FaultId)
{
  uint32 u32CoreId;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  u32CoreId_4 = (uint32) _1;
  # DEBUG u32CoreId => u32CoreId_4
  # DEBUG BEGIN_STMT
  Det_TransientModuleId[u32CoreId_4] = ModuleId_5(D);
  # DEBUG BEGIN_STMT
  Det_TransientInstanceId[u32CoreId_4] = InstanceId_7(D);
  # DEBUG BEGIN_STMT
  Det_TransientApiId[u32CoreId_4] = ApiId_9(D);
  # DEBUG BEGIN_STMT
  Det_TransientFaultId[u32CoreId_4] = FaultId_11(D);
  # DEBUG BEGIN_STMT
  return 0;

}


Det_ReportRuntimeError (uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
  uint32 u32CoreId;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  u32CoreId_4 = (uint32) _1;
  # DEBUG u32CoreId => u32CoreId_4
  # DEBUG BEGIN_STMT
  Det_RuntimeModuleId[u32CoreId_4] = ModuleId_5(D);
  # DEBUG BEGIN_STMT
  Det_RuntimeInstanceId[u32CoreId_4] = InstanceId_7(D);
  # DEBUG BEGIN_STMT
  Det_RuntimeApiId[u32CoreId_4] = ApiId_9(D);
  # DEBUG BEGIN_STMT
  Det_RuntimeErrorId[u32CoreId_4] = ErrorId_11(D);
  # DEBUG BEGIN_STMT
  return 0;

}


Det_ReportError (uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
  uint32 u32CoreId;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  u32CoreId_4 = (uint32) _1;
  # DEBUG u32CoreId => u32CoreId_4
  # DEBUG BEGIN_STMT
  Det_ModuleId[u32CoreId_4] = ModuleId_5(D);
  # DEBUG BEGIN_STMT
  Det_InstanceId[u32CoreId_4] = InstanceId_7(D);
  # DEBUG BEGIN_STMT
  Det_ApiId[u32CoreId_4] = ApiId_9(D);
  # DEBUG BEGIN_STMT
  Det_ErrorId[u32CoreId_4] = ErrorId_11(D);
  # DEBUG BEGIN_STMT
  return 0;

}


Det_Init ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


