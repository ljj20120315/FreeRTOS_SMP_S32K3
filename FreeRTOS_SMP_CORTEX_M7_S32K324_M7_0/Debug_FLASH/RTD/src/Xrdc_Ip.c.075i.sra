Creating summary for Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0/42:
  Descriptor for parameter 0 u32InstanceD.6226
    unused with 2 call_uses
    not a candidate
  Descriptor for parameter 1 pXrdcDomainIDErrorStatusD.6227
    unused with 2 call_uses
    by_ref with 2 pass throughs
----------------------------------------
  Descriptor for parameter 0 u32InstanceD.6226
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1 pXrdcDomainIDErrorStatusD.6227
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref


Creating summary for Xrdc_Ip_LockProcessID_Privileged.part.0/40:
  Descriptor for parameter 0 u8MasterCoreD.6217
    not a candidate for splitting


Creating summary for Xrdc_Ip_SetProcessID_Privileged.part.0/37:
  Descriptor for parameter 0 u8MasterCoreD.6205
    not a candidate for splitting
  Descriptor for parameter 1 u8PidD.6206
    not a candidate for splitting
  Descriptor for parameter 2 eSecureAttrD.6207
    not a candidate for splitting


Creating summary for Xrdc_Ip_Init_Privileged.part.0/33:
  Descriptor for parameter 0 pXrdcConfigD.6191
    not a candidate
----------------------------------------
  Descriptor for parameter 0 pXrdcConfigD.6191
    not a candidate for splitting


Creating summary for Xrdc_Ip_GetDomainIDErrorStatus/19:
  Descriptor for parameter 0 u32InstanceD.6078
    unused with 1 call_uses
    not a candidate
  Descriptor for parameter 1 pXrdcDomainIDErrorStatusD.6079
    unused with 1 call_uses
    by_ref with 1 pass throughs
----------------------------------------
  Descriptor for parameter 0 u32InstanceD.6078
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1 pXrdcDomainIDErrorStatusD.6079
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref


Creating summary for Xrdc_Ip_LockProcessID/18:
  Descriptor for parameter 0 u8MasterCoreD.6075
    (locally) unused
    not a candidate for splitting


Creating summary for Xrdc_Ip_SetProcessID/17:
  Descriptor for parameter 0 u8MasterCoreD.6070
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1 u8PidD.6071
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 2 eSecureAttrD.6072
    (locally) unused
    not a candidate for splitting


Creating summary for Xrdc_Ip_GetDomainID/16:
  Descriptor for parameter 0 u32InstanceD.6067
    (locally) unused
    not a candidate for splitting


Creating summary for Xrdc_Ip_Init/15:
  Descriptor for parameter 0 pXrdcConfigD.6064
    unused with 1 call_uses
    by_ref with 1 pass throughs
----------------------------------------
  Descriptor for parameter 0 pXrdcConfigD.6064
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref


Creating summary for Xrdc_Ip_GetDomainIDErrorStatus_Privileged/14:
  Descriptor for parameter 0 u32InstanceD.6051
    not a candidate for splitting
  Descriptor for parameter 1 pXrdcDomainIDErrorStatusD.6052
    not a candidate for splitting


Creating summary for Xrdc_Ip_GetDetailError/13:
  Descriptor for parameter 0 u32InstanceD.6042
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1 u8SubInstanceD.6043
    not a candidate for splitting
  Descriptor for parameter 2 pXrdcDomainIDErrorStatusD.6044
    not a candidate for splitting


Creating summary for Xrdc_Ip_LockProcessID_Privileged/12:
  Descriptor for parameter 0 u8MasterCoreD.6039
    not a candidate for splitting


Creating summary for Xrdc_Ip_SetProcessID_Privileged/11:
  Descriptor for parameter 0 u8MasterCoreD.6034
    not a candidate for splitting
  Descriptor for parameter 1 u8PidD.6035
    not a candidate for splitting
  Descriptor for parameter 2 eSecureAttrD.6036
    (locally) unused
    not a candidate for splitting


Creating summary for Xrdc_Ip_Init_Privileged/10:
  Descriptor for parameter 0 pXrdcConfigD.6015
    not a candidate for splitting


Creating summary for Xrdc_Ip_GetDomainID_Privileged/9:
  Descriptor for parameter 0 u32InstanceD.6011
    (locally) unused
    not a candidate for splitting


Creating summary for Xrdc_Get_Secure_Attribute/8:
  Descriptor for parameter 0 eXrdcSecureD.6007
    not a candidate for splitting


Creating summary for Xrdc_Get_Priviledge_Attribute/7:
  Descriptor for parameter 0 eXrdcPriviledgeD.6003
    not a candidate for splitting


Creating summary for Xrdc_Domain_Init/5:
  Descriptor for parameter 0 pDomainConfigD.5984
    not a candidate for splitting


Creating summary for Xrdc_Peripheral_Access_Config/4:
  Descriptor for parameter 0 pXrdcPerDescriptorD.5981
    not a candidate for splitting


Creating summary for Xrdc_Memory_Config_Descriptor/3:
  Descriptor for parameter 0 pXrdcMemDescriptorD.5978
    not a candidate for splitting



========== IPA-SRA IPA stage ==========

Summary for node Xrdc_Ip_GetDetailError.constprop/43:
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting


Summary for node Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0/42:
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1:
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref

  Summary for edge Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0/42->Xrdc_Ip_GetDetailError.constprop/43:
    return value ignored
    Parameter 0:
      Scalar param sources: 0
    Parameter 1:
    Parameter 2:
      Scalar param sources: 1
      Pointer pass through from the param given above, safe_to_import_accesses: 0
  Summary for edge Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0/42->Xrdc_Ip_GetDetailError.constprop/43:
    return value ignored
    Parameter 0:
      Scalar param sources: 0
    Parameter 1:
    Parameter 2:
      Scalar param sources: 1
      Pointer pass through from the param given above, safe_to_import_accesses: 0

Summary for node Xrdc_Ip_LockProcessID_Privileged.part.0/40:
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node Xrdc_Ip_SetProcessID_Privileged.part.0/37:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting

  Summary for edge Xrdc_Ip_SetProcessID_Privileged.part.0/37->SchM_Enter_Rm_RM_EXCLUSIVE_AREA_00/20:
    return value ignored
  Summary for edge Xrdc_Ip_SetProcessID_Privileged.part.0/37->SchM_Exit_Rm_RM_EXCLUSIVE_AREA_00/21:
    return value ignored
  Summary for edge Xrdc_Ip_SetProcessID_Privileged.part.0/37->SchM_Enter_Rm_RM_EXCLUSIVE_AREA_00/20:
    return value ignored
  Summary for edge Xrdc_Ip_SetProcessID_Privileged.part.0/37->SchM_Exit_Rm_RM_EXCLUSIVE_AREA_00/21:
    return value ignored

Summary for node Xrdc_Ip_Init_Privileged.part.0/33:
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge Xrdc_Ip_Init_Privileged.part.0/33->Xrdc_Memory_Config_Descriptor/3:
    return value ignored
  Summary for edge Xrdc_Ip_Init_Privileged.part.0/33->Xrdc_Peripheral_Access_Config/4:
    return value ignored
  Summary for edge Xrdc_Ip_Init_Privileged.part.0/33->Xrdc_Domain_Init/5:
    return value ignored

Summary for node Xrdc_Ip_GetDomainIDErrorStatus/19:
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1:
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref

  Summary for edge Xrdc_Ip_GetDomainIDErrorStatus/19->Xrdc_Ip_GetDomainIDErrorStatus_Privileged/14:
    return value ignored
    Parameter 0:
      Scalar param sources: 0
    Parameter 1:
      Scalar param sources: 1
      Pointer pass through from the param given above, safe_to_import_accesses: 1

Summary for node Xrdc_Ip_LockProcessID/18:
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting

  Summary for edge Xrdc_Ip_LockProcessID/18->Xrdc_Ip_LockProcessID_Privileged/12:
    return value ignored
    Parameter 0:
      Scalar param sources: 0

Summary for node Xrdc_Ip_SetProcessID/17:
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 2:
    (locally) unused
    not a candidate for splitting

  Summary for edge Xrdc_Ip_SetProcessID/17->Xrdc_Ip_SetProcessID_Privileged/11:
    return value ignored
    Parameter 0:
      Scalar param sources: 0
    Parameter 1:
      Scalar param sources: 1
    Parameter 2:
      Scalar param sources: 2

Summary for node Xrdc_Ip_GetDomainID/16:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting

  Summary for edge Xrdc_Ip_GetDomainID/16->Xrdc_Ip_GetDomainID_Privileged/9:
    return value used only to compute caller return value
    Parameter 0:
      Scalar param sources: 0

Summary for node Xrdc_Ip_Init/15:
  Descriptor for parameter 0:
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref

  Summary for edge Xrdc_Ip_Init/15->Xrdc_Ip_Init_Privileged/10:
    return value ignored
    Parameter 0:
      Scalar param sources: 0
      Pointer pass through from the param given above, safe_to_import_accesses: 1

Summary for node Xrdc_Ip_GetDomainIDErrorStatus_Privileged/14:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting

  Summary for edge Xrdc_Ip_GetDomainIDErrorStatus_Privileged/14->Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0/42:
    return value ignored
    Parameter 0:
      Scalar param sources: 0
    Parameter 1:
      Scalar param sources: 1
      Pointer pass through from the param given above, safe_to_import_accesses: 0

Summary for node Xrdc_Ip_LockProcessID_Privileged/12:
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge Xrdc_Ip_LockProcessID_Privileged/12->Xrdc_Ip_LockProcessID_Privileged.part.0/40:
    return value ignored
    Parameter 0:
      Scalar param sources: 0

Summary for node Xrdc_Ip_SetProcessID_Privileged/11:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    (locally) unused
    not a candidate for splitting

  Summary for edge Xrdc_Ip_SetProcessID_Privileged/11->Xrdc_Ip_SetProcessID_Privileged.part.0/37:
    return value ignored
    Parameter 0:
      Scalar param sources: 0
    Parameter 1:
      Scalar param sources: 1
    Parameter 2:
      Scalar param sources: 2

Summary for node Xrdc_Ip_Init_Privileged/10:
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge Xrdc_Ip_Init_Privileged/10->Xrdc_Ip_Init_Privileged.part.0/33:
    return value ignored
    Parameter 0:
      Scalar param sources: 0
      Pointer pass through from the param given above, safe_to_import_accesses: 0

Summary for node Xrdc_Ip_GetDomainID_Privileged/9:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting


Summary for node Xrdc_Get_Secure_Attribute/8:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node Xrdc_Get_Priviledge_Attribute/7:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node Xrdc_Domain_Init/5:
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge Xrdc_Domain_Init/5->Xrdc_Get_Priviledge_Attribute/7:
  Summary for edge Xrdc_Domain_Init/5->Xrdc_Get_Secure_Attribute/8:

Summary for node Xrdc_Peripheral_Access_Config/4:
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node Xrdc_Memory_Config_Descriptor/3:
  Descriptor for parameter 0:
    not a candidate for splitting



Function Xrdc_Ip_GetDomainID_Privileged/9 disqualified because it cannot be made local.
Function Xrdc_Ip_Init_Privileged/10 disqualified because it cannot be made local.
Function Xrdc_Ip_SetProcessID_Privileged/11 disqualified because it cannot be made local.
Function Xrdc_Ip_LockProcessID_Privileged/12 disqualified because it cannot be made local.
Function Xrdc_Ip_GetDomainIDErrorStatus_Privileged/14 disqualified because it cannot be made local.
Function Xrdc_Ip_Init/15 disqualified because it cannot be made local.
Function Xrdc_Ip_GetDomainID/16 disqualified because it cannot be made local.
Function Xrdc_Ip_SetProcessID/17 disqualified because it cannot be made local.
Function Xrdc_Ip_LockProcessID/18 disqualified because it cannot be made local.
Function Xrdc_Ip_GetDomainIDErrorStatus/19 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

Evaluating analysis results for Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0/42
  Will remove parameter 0
  Created new node Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0.isra/44

========== IPA SRA IPA analysis done ==========


Reclaiming functions: Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0/42
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0.isra.0/44 (Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0.isra) @06e8d460
  Type: function definition analyzed
  Visibility: artificial
  References: 
  Referring: 
  Clone of Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0/42
  Availability: local
  Function flags: count:118111600 (estimated locally) local split_part optimize_size
  Called by: Xrdc_Ip_GetDomainIDErrorStatus_Privileged/14 (5315554 (estimated locally),0.25 per call) 
  Calls: Xrdc_Ip_GetDetailError.constprop.0/43 (955630225 (estimated locally),8.09 per call) Xrdc_Ip_GetDetailError.constprop.0/43 (955630225 (estimated locally),8.09 per call) 
Xrdc_Ip_GetDetailError.constprop.0/43 (Xrdc_Ip_GetDetailError.constprop) @06ec5460
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of Xrdc_Ip_GetDetailError/13
  Availability: local
  Function flags: count:1073741823 (estimated locally) local optimize_size
  Called by: Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0.isra.0/44 (955630225 (estimated locally),8.09 per call) Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0.isra.0/44 (955630225 (estimated locally),8.09 per call) 
  Calls: 
Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0/42 (Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0) @06d56540
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:118111600 (estimated locally) body split_part optimize_size
  Called by: 
  Calls: 
Xrdc_Ip_LockProcessID_Privileged.part.0/40 (Xrdc_Ip_LockProcessID_Privileged.part.0) @06fd5380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local split_part optimize_size
  Called by: Xrdc_Ip_LockProcessID_Privileged/12 (5315554 (estimated locally),0.25 per call) 
  Calls: 
Xrdc_Ip_SetProcessID_Privileged.part.0/37 (Xrdc_Ip_SetProcessID_Privileged.part.0) @06ec5380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local split_part optimize_size
  Called by: Xrdc_Ip_SetProcessID_Privileged/11 (2657777 (estimated locally),0.12 per call) 
  Calls: SchM_Enter_Rm_RM_EXCLUSIVE_AREA_00/20 (182536112 (estimated locally),0.17 per call) SchM_Exit_Rm_RM_EXCLUSIVE_AREA_00/21 (182536112 (estimated locally),0.17 per call) SchM_Enter_Rm_RM_EXCLUSIVE_AREA_00/20 (354334800 (estimated locally),0.33 per call) SchM_Exit_Rm_RM_EXCLUSIVE_AREA_00/21 (354334800 (estimated locally),0.33 per call) 
Xrdc_Ip_Init_Privileged.part.0/33 (Xrdc_Ip_Init_Privileged.part.0) @06ec59a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:21262216 (estimated locally) body local split_part optimize_size
  Called by: Xrdc_Ip_Init_Privileged/10 (2657777 (estimated locally),0.12 per call) 
  Calls: Xrdc_Memory_Config_Descriptor/3 (43007664 (estimated locally),2.02 per call) Xrdc_Peripheral_Access_Config/4 (43007664 (estimated locally),2.02 per call) Xrdc_Domain_Init/5 (43007664 (estimated locally),2.02 per call) 
SchM_Exit_Rm_RM_EXCLUSIVE_AREA_00/21 (SchM_Exit_Rm_RM_EXCLUSIVE_AREA_00) @06e731c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Xrdc_Ip_SetProcessID_Privileged.part.0/37 (182536112 (estimated locally),0.17 per call) Xrdc_Ip_SetProcessID_Privileged.part.0/37 (354334800 (estimated locally),0.33 per call) 
  Calls: 
SchM_Enter_Rm_RM_EXCLUSIVE_AREA_00/20 (SchM_Enter_Rm_RM_EXCLUSIVE_AREA_00) @06e730e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Xrdc_Ip_SetProcessID_Privileged.part.0/37 (182536112 (estimated locally),0.17 per call) Xrdc_Ip_SetProcessID_Privileged.part.0/37 (354334800 (estimated locally),0.33 per call) 
  Calls: 
Xrdc_Ip_GetDomainIDErrorStatus/19 (Xrdc_Ip_GetDomainIDErrorStatus) @06d56c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Xrdc_Ip_GetDomainIDErrorStatus_Privileged/14 (1073741824 (estimated locally),1.00 per call) 
Xrdc_Ip_LockProcessID/18 (Xrdc_Ip_LockProcessID) @06d569a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Xrdc_Ip_LockProcessID_Privileged/12 (1073741824 (estimated locally),1.00 per call) 
Xrdc_Ip_SetProcessID/17 (Xrdc_Ip_SetProcessID) @06d56700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Xrdc_Ip_SetProcessID_Privileged/11 (1073741824 (estimated locally),1.00 per call) 
Xrdc_Ip_GetDomainID/16 (Xrdc_Ip_GetDomainID) @06d56460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Xrdc_Ip_GetDomainID_Privileged/9 (1073741824 (estimated locally),1.00 per call) 
Xrdc_Ip_Init/15 (Xrdc_Ip_Init) @06d561c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Xrdc_Ip_Init_Privileged/10 (1073741824 (estimated locally),1.00 per call) 
Xrdc_Ip_GetDomainIDErrorStatus_Privileged/14 (Xrdc_Ip_GetDomainIDErrorStatus_Privileged) @06d38ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: Xrdc_Ip_GetDomainIDErrorStatus/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0.isra.0/44 (5315554 (estimated locally),0.25 per call) 
Xrdc_Ip_GetDetailError/13 (Xrdc_Ip_GetDetailError) @06d38e00
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Xrdc_Ip_LockProcessID_Privileged/12 (Xrdc_Ip_LockProcessID_Privileged) @06d38a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: g_bAvailablePidRegisters/1 (read) 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: Xrdc_Ip_LockProcessID/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: Xrdc_Ip_LockProcessID_Privileged.part.0/40 (5315554 (estimated locally),0.25 per call) 
Xrdc_Ip_SetProcessID_Privileged/11 (Xrdc_Ip_SetProcessID_Privileged) @06d387e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: g_bAvailablePidRegisters/1 (read) 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: Xrdc_Ip_SetProcessID/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: Xrdc_Ip_SetProcessID_Privileged.part.0/37 (2657777 (estimated locally),0.12 per call) 
Xrdc_Ip_Init_Privileged/10 (Xrdc_Ip_Init_Privileged) @06d38460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: Xrdc_Ip_Init/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: Xrdc_Ip_Init_Privileged.part.0/33 (2657777 (estimated locally),0.12 per call) 
Xrdc_Ip_GetDomainID_Privileged/9 (Xrdc_Ip_GetDomainID_Privileged) @06d38000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Xrdc_Ip_GetDomainID/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Xrdc_Get_Secure_Attribute/8 (Xrdc_Get_Secure_Attribute) @06d808c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Xrdc_Domain_Init/5 (903644 (estimated locally),0.04 per call) 
  Calls: 
Xrdc_Get_Priviledge_Attribute/7 (Xrdc_Get_Priviledge_Attribute) @06d80380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Xrdc_Domain_Init/5 (903644 (estimated locally),0.04 per call) 
  Calls: 
Xrdc_Domain_Init/5 (Xrdc_Domain_Init) @06d80a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:21262216 (estimated locally) body local optimize_size
  Called by: Xrdc_Ip_Init_Privileged.part.0/33 (43007664 (estimated locally),2.02 per call) 
  Calls: Xrdc_Get_Priviledge_Attribute/7 (903644 (estimated locally),0.04 per call) Xrdc_Get_Secure_Attribute/8 (903644 (estimated locally),0.04 per call) 
Xrdc_Peripheral_Access_Config/4 (Xrdc_Peripheral_Access_Config) @06d807e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:21262216 (estimated locally) body local optimize_size
  Called by: Xrdc_Ip_Init_Privileged.part.0/33 (43007664 (estimated locally),2.02 per call) 
  Calls: 
Xrdc_Memory_Config_Descriptor/3 (Xrdc_Memory_Config_Descriptor) @06d80540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:21262216 (estimated locally) body local optimize_size
  Called by: Xrdc_Ip_Init_Privileged.part.0/33 (43007664 (estimated locally),2.02 per call) 
  Calls: 
g_bAvailablePidRegisters/1 (g_bAvailablePidRegisters) @06d7b6c0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Xrdc_Ip_SetProcessID_Privileged/11 (read) Xrdc_Ip_LockProcessID_Privileged/12 (read) 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Xrdc_Ip_LockProcessID_Privileged.part.0 (uint8 u8MasterCore)
{
  volatile boolean x;
  volatile boolean x;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  volatile uint32 * _5;
  long unsigned int _6;
  long unsigned int _7;

  <bb 3> [local count: 1073741824]:

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  _2 = (long unsigned int) u8MasterCore_1(D);
  _3 = _2 << 2;
  _4 = _3 + 1076332288;
  _5 = (volatile uint32 *) _4;
  _6 ={v} *_5;
  _7 = _6 | 1610612736;
  *_5 ={v} _7;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  return;

}


Xrdc_Ip_SetProcessID_Privileged.part.0 (uint8 u8MasterCore, uint8 u8Pid, Xrdc_Ip_SecureAttributeType eSecureAttr)
{
  volatile boolean x;
  volatile boolean x;
  volatile boolean x;
  long unsigned int _1;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _7;
  long unsigned int _8;
  volatile uint32 * _9;
  long unsigned int _10;
  long unsigned int _11;
  unsigned char _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  volatile uint32 * _19;
  long unsigned int _20;
  long unsigned int _21;
  unsigned char _22;
  long unsigned int _23;
  long unsigned int _24;

  <bb 7> [local count: 1073741824]:

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(volatile uint32 *)1076330744B];
  _3 = (long unsigned int) u8MasterCore_2(D);
  _4 = _1 >> _3;
  _5 = _4 & 1;
  if (_5 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (eSecureAttr_6(D) == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 182536112]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  SchM_Enter_Rm_RM_EXCLUSIVE_AREA_00 ();
  # DEBUG BEGIN_STMT
  _7 = _3 << 2;
  _8 = _7 + 1076332288;
  _9 = (volatile uint32 *) _8;
  _10 ={v} *_9;
  _11 = _10 & 4294967232;
  _13 = u8Pid_12(D) & 31;
  _14 = (long unsigned int) _13;
  _15 = _11 | _14;
  _16 = _15 | 32;
  *_9 ={v} _16;
  # DEBUG BEGIN_STMT
  SchM_Exit_Rm_RM_EXCLUSIVE_AREA_00 ();
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 354334800]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  SchM_Enter_Rm_RM_EXCLUSIVE_AREA_00 ();
  # DEBUG BEGIN_STMT
  _17 = _3 << 2;
  _18 = _17 + 1076332288;
  _19 = (volatile uint32 *) _18;
  _20 ={v} *_19;
  _21 = _20 & 4294967232;
  _22 = u8Pid_12(D) & 31;
  _23 = (long unsigned int) _22;
  _24 = _21 | _23;
  *_19 ={v} _24;
  # DEBUG BEGIN_STMT
  SchM_Exit_Rm_RM_EXCLUSIVE_AREA_00 ();
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");

  <bb 6> [local count: 1073741824]:
  return;

}


Xrdc_Ip_Init_Privileged.part.0 (const struct Xrdc_Ip_ConfigType * pXrdcConfig)
{
  uint32 u32counter;
  volatile boolean x;
  volatile boolean x;
  volatile boolean x;
  volatile boolean x;
  volatile boolean x;
  const struct Xrdc_Ip_PeripheralConfigType * _2;
  _Bool _3;
  _Bool x.0_4;
  const struct Xrdc_Ip_DomainConfigType * _5;
  _Bool _6;
  _Bool x.0_7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _12;
  const struct Xrdc_Ip_MemConfigType * _13;
  long unsigned int _15;
  const struct Xrdc_Ip_MemConfigType * _16;
  long unsigned int _18;
  const struct Xrdc_Ip_PeripheralConfigType * _19;
  long unsigned int _21;
  const struct Xrdc_Ip_PeripheralConfigType * _22;
  long unsigned int _24;
  const struct Xrdc_Ip_DomainConfigType * _25;
  long unsigned int _27;
  const struct Xrdc_Ip_DomainConfigType * _28;
  long unsigned int _30;
  long unsigned int _31;
  long unsigned int _32;
  long unsigned int _35;

  <bb 26> [local count: 21262216]:

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = pXrdcConfig_1(D)->pPeripheralDescriptorConfig;
  _3 = _2 != 0B;
  x ={v} _3;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_4 ={v} x;
  if (x.0_4 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 10631108]:

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 6> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _5 = pXrdcConfig_1(D)->pDomainConfig;
  _6 = _5 != 0B;
  x ={v} _6;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_7 ={v} x;
  if (x.0_7 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 5315554]:
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 5315554]:
  goto <bb 12>; [100.00%]

  <bb 9> [local count: 536870913]:

  <bb 10> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 11> [local count: 43007664]:
  # DEBUG BEGIN_STMT
  _8 ={v} MEM[(volatile uint32 *)1076330496B];
  _9 = _8 & 4294967294;
  MEM[(volatile uint32 *)1076330496B] ={v} _9;
  # DEBUG BEGIN_STMT
  u32counter_11 = u32counter_10 + 1;
  # DEBUG u32counter => u32counter_11

  <bb 12> [local count: 48323218]:
  # u32counter_10 = PHI <0(8), u32counter_11(11)>
  # DEBUG x => NULL
  # DEBUG u32counter => u32counter_10
  # DEBUG BEGIN_STMT
  _12 = pXrdcConfig_1(D)->u32InstanceInUsedCnt;
  if (u32counter_10 < _12)
    goto <bb 11>; [89.00%]
  else
    goto <bb 13>; [11.00%]

  <bb 13> [local count: 5315554]:
  goto <bb 15>; [100.00%]

  <bb 14> [local count: 43007664]:
  # DEBUG BEGIN_STMT
  _13 = pXrdcConfig_1(D)->pMemoryDesConfig;
  _15 = u32counter_14 * 40;
  _16 = _13 + _15;
  Xrdc_Memory_Config_Descriptor (_16);
  # DEBUG BEGIN_STMT
  u32counter_17 = u32counter_14 + 1;
  # DEBUG u32counter => u32counter_17

  <bb 15> [local count: 48323218]:
  # u32counter_14 = PHI <0(13), u32counter_17(14)>
  # DEBUG u32counter => u32counter_14
  # DEBUG BEGIN_STMT
  _18 = pXrdcConfig_1(D)->u32MemoryConfigCnt;
  if (u32counter_14 < _18)
    goto <bb 14>; [89.00%]
  else
    goto <bb 16>; [11.00%]

  <bb 16> [local count: 5315554]:
  goto <bb 18>; [100.00%]

  <bb 17> [local count: 43007664]:
  # DEBUG BEGIN_STMT
  _19 = pXrdcConfig_1(D)->pPeripheralDescriptorConfig;
  _21 = u32counter_20 * 24;
  _22 = _19 + _21;
  Xrdc_Peripheral_Access_Config (_22);
  # DEBUG BEGIN_STMT
  u32counter_23 = u32counter_20 + 1;
  # DEBUG u32counter => u32counter_23

  <bb 18> [local count: 48323218]:
  # u32counter_20 = PHI <0(16), u32counter_23(17)>
  # DEBUG u32counter => u32counter_20
  # DEBUG BEGIN_STMT
  _24 = pXrdcConfig_1(D)->u32PeripheralConfigCnt;
  if (u32counter_20 < _24)
    goto <bb 17>; [89.00%]
  else
    goto <bb 19>; [11.00%]

  <bb 19> [local count: 5315554]:
  goto <bb 21>; [100.00%]

  <bb 20> [local count: 43007664]:
  # DEBUG BEGIN_STMT
  _25 = pXrdcConfig_1(D)->pDomainConfig;
  _27 = u32counter_26 * 44;
  _28 = _25 + _27;
  Xrdc_Domain_Init (_28);
  # DEBUG BEGIN_STMT
  u32counter_29 = u32counter_26 + 1;
  # DEBUG u32counter => u32counter_29

  <bb 21> [local count: 48323218]:
  # u32counter_26 = PHI <0(19), u32counter_29(20)>
  # DEBUG u32counter => u32counter_26
  # DEBUG BEGIN_STMT
  _30 = pXrdcConfig_1(D)->u32DomainConfigCnt;
  if (u32counter_26 < _30)
    goto <bb 20>; [89.00%]
  else
    goto <bb 22>; [11.00%]

  <bb 22> [local count: 5315554]:
  goto <bb 24>; [100.00%]

  <bb 23> [local count: 43007664]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  _31 ={v} MEM[(volatile uint32 *)1076330496B];
  _32 = _31 | 1;
  MEM[(volatile uint32 *)1076330496B] ={v} _32;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  u32counter_34 = u32counter_33 + 1;
  # DEBUG u32counter => u32counter_34

  <bb 24> [local count: 48323218]:
  # u32counter_33 = PHI <0(22), u32counter_34(23)>
  # DEBUG u32counter => u32counter_33
  # DEBUG BEGIN_STMT
  _35 = pXrdcConfig_1(D)->u32InstanceInUsedCnt;
  if (u32counter_33 < _35)
    goto <bb 23>; [89.00%]
  else
    goto <bb 25>; [11.00%]

  <bb 25> [local count: 5315554]:
  return;

}


Xrdc_Ip_GetDomainIDErrorStatus (uint32 u32Instance, struct Xrdc_Ip_DomainIDErrStatusType * pXrdcDomainIDErrorStatus)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Xrdc_Ip_GetDomainIDErrorStatus_Privileged (u32Instance_2(D), pXrdcDomainIDErrorStatus_3(D));
  return;

}


Xrdc_Ip_LockProcessID (uint8 u8MasterCore)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Xrdc_Ip_LockProcessID_Privileged (u8MasterCore_2(D));
  return;

}


Xrdc_Ip_SetProcessID (uint8 u8MasterCore, uint8 u8Pid, Xrdc_Ip_SecureAttributeType eSecureAttr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Xrdc_Ip_SetProcessID_Privileged (u8MasterCore_2(D), u8Pid_3(D), eSecureAttr_4(D));
  return;

}


Xrdc_Ip_GetDomainID (uint32 u32Instance)
{
  uint32 _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = Xrdc_Ip_GetDomainID_Privileged (u32Instance_2(D));
  return _4;

}


Xrdc_Ip_Init (const struct Xrdc_Ip_ConfigType * pXrdcConfig)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Xrdc_Ip_Init_Privileged (pXrdcConfig_2(D));
  return;

}


Xrdc_Ip_GetDomainIDErrorStatus_Privileged (uint32 u32Instance, struct Xrdc_Ip_DomainIDErrStatusType * pXrdcDomainIDErrorStatus)
{
  volatile boolean x;
  volatile boolean x;
  _Bool _1;
  _Bool _2;
  _Bool x.0_7;
  _Bool x.0_8;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = u32Instance_4(D) == 0;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_8 ={v} x;
  if (x.0_8 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = pXrdcDomainIDErrorStatus_6(D) != 0B;
  x ={v} _2;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_7 ={v} x;
  if (x.0_7 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 5315554]:

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 536870913]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 5315554]:
  Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0 (u32Instance_4(D), pXrdcDomainIDErrorStatus_6(D));
  return;

}


Xrdc_Ip_LockProcessID_Privileged (uint8 u8MasterCore)
{
  volatile boolean x;
  volatile boolean x;
  _Bool _1;
  int _2;
  _Bool _3;
  _Bool x.0_7;
  _Bool x.0_8;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _1 = u8MasterCore_5(D) <= 4;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_8 ={v} x;
  if (x.0_8 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = (int) u8MasterCore_5(D);
  _3 = g_bAvailablePidRegisters[_2];
  x ={v} _3;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_7 ={v} x;
  if (x.0_7 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 5315554]:

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 536870913]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 5315554]:
  Xrdc_Ip_LockProcessID_Privileged.part.0 (u8MasterCore_5(D));
  return;

}


Xrdc_Ip_SetProcessID_Privileged (uint8 u8MasterCore, uint8 u8Pid, Xrdc_Ip_SecureAttributeType eSecureAttr)
{
  volatile boolean x;
  volatile boolean x;
  volatile boolean x;
  _Bool _1;
  _Bool _2;
  int _3;
  _Bool _4;
  _Bool x.0_10;
  _Bool x.0_11;
  _Bool x.0_12;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _1 = u8MasterCore_6(D) <= 4;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_12 ={v} x;
  if (x.0_12 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 14> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = u8Pid_8(D) <= 30;
  x ={v} _2;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_11 ={v} x;
  if (x.0_11 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 5315554]:

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 536870913]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 5315554]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _3 = (int) u8MasterCore_6(D);
  _4 = g_bAvailablePidRegisters[_3];
  x ={v} _4;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_10 ={v} x;
  if (x.0_10 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 9> [local count: 2657777]:

  <bb 7> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 268435456]:
  goto <bb 7>; [100.00%]

  <bb 8> [local count: 2657777]:
  Xrdc_Ip_SetProcessID_Privileged.part.0 (u8MasterCore_6(D), u8Pid_8(D), eSecureAttr_9(D));
  return;

}


Xrdc_Ip_Init_Privileged (const struct Xrdc_Ip_ConfigType * pXrdcConfig)
{
  volatile boolean x;
  volatile boolean x;
  volatile boolean x;
  _Bool _1;
  long unsigned int _2;
  _Bool _3;
  const struct Xrdc_Ip_MemConfigType * _4;
  _Bool _5;
  _Bool x.0_9;
  _Bool x.0_10;
  _Bool x.0_11;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  # DEBUG u32counter => 0
  # DEBUG BEGIN_STMT
  _1 = pXrdcConfig_7(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_11 ={v} x;
  if (x.0_11 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 14> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = pXrdcConfig_7(D)->u32DomainConfigCnt;
  _3 = _2 != 0;
  x ={v} _3;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_10 ={v} x;
  if (x.0_10 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 5315554]:

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 536870913]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 5315554]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _4 = pXrdcConfig_7(D)->pMemoryDesConfig;
  _5 = _4 != 0B;
  x ={v} _5;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_9 ={v} x;
  if (x.0_9 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 9> [local count: 2657777]:

  <bb 7> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 268435456]:
  goto <bb 7>; [100.00%]

  <bb 8> [local count: 2657777]:
  Xrdc_Ip_Init_Privileged.part.0 (pXrdcConfig_7(D));
  return;

}


Xrdc_Ip_GetDomainID_Privileged (uint32 u32Instance)
{
  uint32 u32Value;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  u32Value_4 ={v} MEM[(volatile uint32 *)1076330740B];
  # DEBUG u32Value => u32Value_4
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  return u32Value_4;

}


Xrdc_Get_Secure_Attribute (Xrdc_Ip_SecureAttributeType eXrdcSecure)
{
  uint32 Ret;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (eXrdcSecure_2(D) == 1)
    goto <bb 5>; [21.72%]
  else
    goto <bb 3>; [78.28%]

  <bb 3> [local count: 840525097]:
  # DEBUG BEGIN_STMT
  if (eXrdcSecure_2(D) == 0)
    goto <bb 5>; [65.00%]
  else
    goto <bb 4>; [35.00%]

  <bb 4> [local count: 294183785]:
  # DEBUG BEGIN_STMT
  # DEBUG Ret => 192

  <bb 5> [local count: 1073741824]:
  # Ret_1 = PHI <64(2), 0(3), 192(4)>
  # DEBUG Ret => Ret_1
  # DEBUG BEGIN_STMT
  return Ret_1;

}


Xrdc_Get_Priviledge_Attribute (Xrdc_Ip_PriviledgedAttributeType eXrdcPriviledge)
{
  uint32 Ret;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (eXrdcPriviledge_2(D) == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (eXrdcPriviledge_2(D) == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 354334800]:
  # DEBUG BEGIN_STMT
  # DEBUG Ret => 48

  <bb 5> [local count: 1073741824]:
  # Ret_1 = PHI <0(2), 16(3), 48(4)>
  # DEBUG Ret => Ret_1
  # DEBUG BEGIN_STMT
  return Ret_1;

}


Xrdc_Domain_Init (const struct Xrdc_Ip_DomainConfigType * pDomainConfig)
{
  volatile boolean x;
  volatile boolean x;
  uint32 u32UserAtt;
  uint32 u32SecureAtt;
  _Bool _1;
  long unsigned int _2;
  _Bool _3;
  <unnamed type> _4;
  <unnamed type> _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  <unnamed type> _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;
  long unsigned int _20;
  long unsigned int _21;
  volatile uint32 * _22;
  long unsigned int _23;
  <unnamed type> _24;
  long unsigned int _25;
  <unnamed type> _26;
  long unsigned int _27;
  long unsigned int _28;
  volatile uint32 * _29;
  long unsigned int _30;
  <unnamed type> _31;
  <unnamed type> _32;
  <unnamed type> _33;
  long unsigned int _34;
  long unsigned int _35;
  volatile uint32 * _36;
  long unsigned int _37;
  long unsigned int _38;
  long unsigned int _39;
  long unsigned int _40;
  _Bool x.0_45;
  _Bool x.0_47;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = pDomainConfig_42(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_45 ={v} x;
  if (x.0_45 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 12> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 14> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = pDomainConfig_42(D)->u32XrdcInstance;
  _3 = _2 == 0;
  x ={v} _3;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_47 ={v} x;
  if (x.0_47 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 5315554]:

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 536870913]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 5315554]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _4 = pDomainConfig_42(D)->XrdcCoreMdacInstance;
  if (_4 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 2657777]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  _5 = pDomainConfig_42(D)->u32XrdcDomainID;
  _6 = _5 & 7;
  _7 = pDomainConfig_42(D)->u32XrdcProcessIDEnable;
  _8 = _6 | _7;
  _9 = pDomainConfig_42(D)->u32XrdcProcessID;
  _10 = _9 << 16;
  _11 = _8 | _10;
  _12 = pDomainConfig_42(D)->u32XrdcProcessIDMask;
  _13 = _12 << 8;
  _14 = _11 | _13;
  _15 = pDomainConfig_42(D)->XrdcMdacInstance;
  _16 = _15 << 5;
  _17 = _16 + 1076330496;
  _18 = pDomainConfig_42(D)->u32XrdcWordDescriptor;
  _19 = _18 << 2;
  _20 = _17 + _19;
  _21 = _20 + 2048;
  _22 = (volatile uint32 *) _21;
  _23 = _14 | 2147483648;
  *_22 ={v} _23;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 2657777]:
  # DEBUG BEGIN_STMT
  if (_4 == 1)
    goto <bb 9>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 9> [local count: 903644]:
  # DEBUG BEGIN_STMT
  _24 = pDomainConfig_42(D)->u32XrdcDomainID;
  _25 = _24 & 7;
  _26 = pDomainConfig_42(D)->XrdcMdacInstance;
  _27 = _26 << 5;
  _28 = _27 + 1076332544;
  _29 = (volatile uint32 *) _28;
  _30 = _25 | 2684354560;
  *_29 ={v} _30;
  # DEBUG BEGIN_STMT
  _31 = pDomainConfig_42(D)->eXrdcSecureOutput;
  u32SecureAtt_46 = Xrdc_Get_Secure_Attribute (_31);
  # DEBUG u32SecureAtt => u32SecureAtt_46
  # DEBUG BEGIN_STMT
  _32 = pDomainConfig_42(D)->eXrdcPriviledgeOutput;
  u32UserAtt_48 = Xrdc_Get_Priviledge_Attribute (_32);
  # DEBUG u32UserAtt => u32UserAtt_48
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  _33 = pDomainConfig_42(D)->XrdcMdacInstance;
  _34 = _33 << 5;
  _35 = _34 + 1076332544;
  _36 = (volatile uint32 *) _35;
  _37 ={v} *_36;
  _38 = _37 & 4294967055;
  _39 = u32SecureAtt_46 | u32UserAtt_48;
  _40 = _38 | _39;
  *_36 ={v} _40;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");

  <bb 10> [local count: 5315554]:
  # DEBUG BEGIN_STMT
  return;

}


Xrdc_Peripheral_Access_Config (const struct Xrdc_Ip_PeripheralConfigType * pXrdcPerDescriptor)
{
  volatile boolean x;
  volatile boolean x;
  _Bool _1;
  long unsigned int _2;
  _Bool _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  volatile uint32 * _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;
  long unsigned int _20;
  long unsigned int _21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;
  long unsigned int _25;
  long unsigned int _26;
  long unsigned int _27;
  long unsigned int _28;
  volatile uint32 * _29;
  long unsigned int _30;
  long unsigned int _31;
  long unsigned int _32;
  long unsigned int _33;
  long unsigned int _34;
  long unsigned int _35;
  long unsigned int _36;
  long unsigned int _37;
  long unsigned int _38;
  volatile uint32 * _39;
  long unsigned int _40;
  long unsigned int _41;
  long unsigned int _42;
  long unsigned int _43;
  long unsigned int _44;
  _Bool x.0_58;
  _Bool x.0_59;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _1 = pXrdcPerDescriptor_45(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_59 ={v} x;
  if (x.0_59 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = pXrdcPerDescriptor_45(D)->u32XrdcInstance;
  _3 = _2 == 0;
  x ={v} _3;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_58 ={v} x;
  if (x.0_58 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 5315554]:

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 536870913]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 5315554]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  _4 = pXrdcPerDescriptor_45(D)->u32XrdcPdacInstance;
  _5 = _4 >> 7;
  _6 = _5 * 1024;
  _7 = _6 + 1076330496;
  _8 = _4 << 3;
  _9 = _8 & 1016;
  _10 = _7 + _9;
  _11 = _10 + 4100;
  _12 = (volatile uint32 *) _11;
  _13 ={v} *_12;
  _14 = _13 & 2147483647;
  *_12 ={v} _14;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  _15 = pXrdcPerDescriptor_45(D)->u32XrdcSema4Enable;
  _16 = pXrdcPerDescriptor_45(D)->u32XrdcSema4Number;
  _17 = _16 << 24;
  _18 = _17 & 251658240;
  _19 = _15 | _18;
  _20 = pXrdcPerDescriptor_45(D)->u32XrdcPerPolicy;
  _21 = pXrdcPerDescriptor_45(D)->u32XrdcPdacInstance;
  _22 = _21 >> 7;
  _23 = _22 * 1024;
  _24 = _23 + 1076330496;
  _25 = _21 << 3;
  _26 = _25 & 1016;
  _27 = _24 + _26;
  _28 = _27 + 4096;
  _29 = (volatile uint32 *) _28;
  _30 = _19 | _20;
  *_29 ={v} _30;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  _31 = pXrdcPerDescriptor_45(D)->u32XrdcPdacInstance;
  _32 = _31 >> 7;
  _33 = _32 * 1024;
  _34 = _33 + 1076330496;
  _35 = _31 << 3;
  _36 = _35 & 1016;
  _37 = _34 + _36;
  _38 = _37 + 4100;
  _39 = (volatile uint32 *) _38;
  _40 ={v} *_39;
  _41 = _40 & 2130706432;
  _42 = pXrdcPerDescriptor_45(D)->u32XrdcPerPolicy1;
  _43 = _41 | _42;
  _44 = _43 | 2147483648;
  *_39 ={v} _44;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  return;

}


Xrdc_Memory_Config_Descriptor (const struct Xrdc_Ip_MemConfigType * pXrdcMemDescriptor)
{
  volatile boolean x;
  volatile boolean x;
  _Bool _1;
  long unsigned int _2;
  _Bool _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  volatile uint32 * _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;
  volatile uint32 * _20;
  long unsigned int _21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;
  long unsigned int _25;
  long unsigned int _26;
  long unsigned int _27;
  long unsigned int _28;
  volatile uint32 * _29;
  long unsigned int _30;
  long unsigned int _31;
  long unsigned int _32;
  long unsigned int _33;
  long unsigned int _34;
  long unsigned int _35;
  long unsigned int _36;
  long unsigned int _37;
  long unsigned int _38;
  long unsigned int _39;
  long unsigned int _40;
  long unsigned int _41;
  long unsigned int _42;
  volatile uint32 * _43;
  long unsigned int _44;
  long unsigned int _45;
  long unsigned int _46;
  long unsigned int _47;
  long unsigned int _48;
  long unsigned int _49;
  long unsigned int _50;
  volatile uint32 * _51;
  long unsigned int _52;
  long unsigned int _53;
  long unsigned int _54;
  long unsigned int _55;
  long unsigned int _56;
  _Bool x.0_72;
  _Bool x.0_73;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _1 = pXrdcMemDescriptor_57(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_73 ={v} x;
  if (x.0_73 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = pXrdcMemDescriptor_57(D)->u32XrdcInstance;
  _3 = _2 == 0;
  x ={v} _3;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_72 ={v} x;
  if (x.0_72 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 5315554]:

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 536870913]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 5315554]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  _4 = pXrdcMemDescriptor_57(D)->u32XrdcMrcInstance;
  _5 = _4 << 4;
  _6 = pXrdcMemDescriptor_57(D)->u32XrdcMrcRegionDescriptor;
  _7 = _5 + _6;
  _8 = _7 * 32;
  _9 = _8 + 1076338700;
  _10 = (volatile uint32 *) _9;
  _11 ={v} *_10;
  _12 = _11 & 2147483647;
  *_10 ={v} _12;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  _13 = pXrdcMemDescriptor_57(D)->u32XrdcStartAddress;
  _14 = pXrdcMemDescriptor_57(D)->u32XrdcMrcInstance;
  _15 = _14 << 4;
  _16 = pXrdcMemDescriptor_57(D)->u32XrdcMrcRegionDescriptor;
  _17 = _15 + _16;
  _18 = _17 * 32;
  _19 = _18 + 1076338688;
  _20 = (volatile uint32 *) _19;
  _21 = _13 | 1;
  *_20 ={v} _21;
  # DEBUG BEGIN_STMT
  _22 = pXrdcMemDescriptor_57(D)->u32XrdcEndAddress;
  _23 = pXrdcMemDescriptor_57(D)->u32XrdcMrcInstance;
  _24 = _23 << 4;
  _25 = pXrdcMemDescriptor_57(D)->u32XrdcMrcRegionDescriptor;
  _26 = _24 + _25;
  _27 = _26 * 32;
  _28 = _27 + 1076338692;
  _29 = (volatile uint32 *) _28;
  _30 = _22 | 1;
  *_29 ={v} _30;
  # DEBUG BEGIN_STMT
  _31 = pXrdcMemDescriptor_57(D)->u32XrdcSema4Enable;
  _32 = pXrdcMemDescriptor_57(D)->u32XrdcSema4Number;
  _33 = _32 << 24;
  _34 = _33 & 251658240;
  _35 = _31 | _34;
  _36 = pXrdcMemDescriptor_57(D)->u32XrdcMemPolicy;
  _37 = pXrdcMemDescriptor_57(D)->u32XrdcMrcInstance;
  _38 = _37 << 4;
  _39 = pXrdcMemDescriptor_57(D)->u32XrdcMrcRegionDescriptor;
  _40 = _38 + _39;
  _41 = _40 * 32;
  _42 = _41 + 1076338696;
  _43 = (volatile uint32 *) _42;
  _44 = _35 | _36;
  *_43 ={v} _44;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  _45 = pXrdcMemDescriptor_57(D)->u32XrdcMrcInstance;
  _46 = _45 << 4;
  _47 = pXrdcMemDescriptor_57(D)->u32XrdcMrcRegionDescriptor;
  _48 = _46 + _47;
  _49 = _48 * 32;
  _50 = _49 + 1076338700;
  _51 = (volatile uint32 *) _50;
  _52 ={v} *_51;
  _53 = _52 & 2130706432;
  _54 = pXrdcMemDescriptor_57(D)->u32XrdcMemPolicy1;
  _55 = _53 | _54;
  _56 = _55 | 2147483648;
  *_51 ={v} _56;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  return;

}


