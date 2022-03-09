Creating summary for Mpu_M7_Ip_EnableRegion_Privileged.part.0/19:


Creating summary for Mpu_M7_Ip_GetErrorDetails/18:
  Descriptor for parameter 0 pErrorDetailsD.6036
    not a candidate for splitting


Creating summary for Mpu_M7_Ip_SetAccessRight/17:
  Descriptor for parameter 0 u8RegionNumD.6032
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1 eRightsD.6033
    (locally) unused
    not a candidate for splitting


Creating summary for Mpu_M7_Ip_EnableRegion/16:
  Descriptor for parameter 0 u8RegionNumD.6028
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1 bEnableD.6029
    (locally) unused
    not a candidate for splitting


Creating summary for Mpu_M7_Ip_Deinit/15:


Creating summary for Mpu_M7_Ip_SetRegionConfig/14:
  Descriptor for parameter 0 u8RegionNumD.6021
    unused with 1 call_uses
    not a candidate
  Descriptor for parameter 1 pUserConfigPtrD.6022
    unused with 1 call_uses
    by_ref with 1 pass throughs
----------------------------------------
  Descriptor for parameter 0 u8RegionNumD.6021
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1 pUserConfigPtrD.6022
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref


Creating summary for Mpu_M7_Ip_Init/13:
  Descriptor for parameter 0 pConfigD.6018
    unused with 1 call_uses
    by_ref with 1 pass throughs
----------------------------------------
  Descriptor for parameter 0 pConfigD.6018
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref


Creating summary for Mpu_M7_Ip_SetAccessRight_Privileged/12:
  Descriptor for parameter 0 u8RegionNumD.6012
    not a candidate for splitting
  Descriptor for parameter 1 eRightsD.6013
    (locally) unused
    not a candidate for splitting


Creating summary for Mpu_M7_Ip_EnableRegion_Privileged/11:
  Descriptor for parameter 0 u8RegionNumD.6007
    not a candidate for splitting
  Descriptor for parameter 1 bEnableD.6008
    not a candidate for splitting


Creating summary for Mpu_M7_Ip_Deinit_Privileged/10:


Creating summary for Mpu_M7_Ip_SetRegionConfig_Privileged/9:
  Descriptor for parameter 0 u8RegionNumD.5992
    not a candidate
  Descriptor for parameter 1 pUserConfigPtrD.5993
    not a candidate
----------------------------------------
  Descriptor for parameter 0 u8RegionNumD.5992
    not a candidate for splitting
  Descriptor for parameter 1 pUserConfigPtrD.5993
    not a candidate for splitting


Creating summary for Mpu_M7_Ip_Init_Privileged/8:
  Descriptor for parameter 0 pConfigD.5983
    not a candidate
----------------------------------------
  Descriptor for parameter 0 pConfigD.5983
    not a candidate for splitting


Creating summary for Mpu_M7_Ip_GetErrorRegisters/7:
  Descriptor for parameter 0 pMmfsrD.5979
    not a candidate for splitting
  Descriptor for parameter 1 pAddressD.5980
    not a candidate for splitting


Creating summary for Mpu_M7_Ip_ComputeAccessRights/6:
  Descriptor for parameter 0 pRegionAttrD.5975
    not a candidate for splitting
  Descriptor for parameter 1 eAccessRightsD.5976
    not a candidate for splitting


Creating summary for Mpu_M7_Ip_SetCachePolicies/5:
  Descriptor for parameter 0 pRegionAttrD.5970
    not a candidate for splitting
  Descriptor for parameter 1 eInnerPolicyD.5971
    not a candidate for splitting
  Descriptor for parameter 2 eOuterPolicyD.5972
    not a candidate for splitting


Creating summary for Mpu_M7_Ip_SetMemoryType/4:
  Descriptor for parameter 0 pRegionAttrD.5966
    not a candidate for splitting
  Descriptor for parameter 1 eTypeD.5967
    not a candidate for splitting


Creating summary for Mpu_M7_Ip_CalculateRegionSize/3:
  Descriptor for parameter 0 u32StartAddrD.5957
    not a candidate for splitting
  Descriptor for parameter 1 u32EndAddrD.5958
    not a candidate for splitting



========== IPA-SRA IPA stage ==========

Summary for node Mpu_M7_Ip_EnableRegion_Privileged.part.0/19:
  No parameter information. 


Summary for node Mpu_M7_Ip_GetErrorDetails/18:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge Mpu_M7_Ip_GetErrorDetails/18->Mpu_M7_Ip_GetErrorRegisters/7:
    return value ignored

Summary for node Mpu_M7_Ip_SetAccessRight/17:
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1:
    (locally) unused
    not a candidate for splitting

  Summary for edge Mpu_M7_Ip_SetAccessRight/17->Mpu_M7_Ip_SetAccessRight_Privileged/12:
    return value ignored
    Parameter 0:
      Scalar param sources: 0
    Parameter 1:
      Scalar param sources: 1

Summary for node Mpu_M7_Ip_EnableRegion/16:
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1:
    (locally) unused
    not a candidate for splitting

  Summary for edge Mpu_M7_Ip_EnableRegion/16->Mpu_M7_Ip_EnableRegion_Privileged/11:
    return value ignored
    Parameter 0:
      Scalar param sources: 0
    Parameter 1:
      Scalar param sources: 1

Summary for node Mpu_M7_Ip_Deinit/15:
  No parameter information. 

  Summary for edge Mpu_M7_Ip_Deinit/15->Mpu_M7_Ip_Deinit_Privileged/10:
    return value ignored

Summary for node Mpu_M7_Ip_SetRegionConfig/14:
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1:
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref

  Summary for edge Mpu_M7_Ip_SetRegionConfig/14->Mpu_M7_Ip_SetRegionConfig_Privileged/9:
    return value ignored
    Parameter 0:
      Scalar param sources: 0
    Parameter 1:
      Scalar param sources: 1
      Pointer pass through from the param given above, safe_to_import_accesses: 1

Summary for node Mpu_M7_Ip_Init/13:
  Descriptor for parameter 0:
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref

  Summary for edge Mpu_M7_Ip_Init/13->Mpu_M7_Ip_Init_Privileged/8:
    return value ignored
    Parameter 0:
      Scalar param sources: 0
      Pointer pass through from the param given above, safe_to_import_accesses: 1

Summary for node Mpu_M7_Ip_SetAccessRight_Privileged/12:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    (locally) unused
    not a candidate for splitting

  Summary for edge Mpu_M7_Ip_SetAccessRight_Privileged/12->Mpu_M7_Ip_ComputeAccessRights/6:
    return value ignored
    Parameter 0:
    Parameter 1:
      Scalar param sources: 1

Summary for node Mpu_M7_Ip_EnableRegion_Privileged/11:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting

  Summary for edge Mpu_M7_Ip_EnableRegion_Privileged/11->Mpu_M7_Ip_EnableRegion_Privileged.part.0/19:
    return value ignored

Summary for node Mpu_M7_Ip_Deinit_Privileged/10:
  No parameter information. 


Summary for node Mpu_M7_Ip_SetRegionConfig_Privileged/9:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting

  Summary for edge Mpu_M7_Ip_SetRegionConfig_Privileged/9->Mpu_M7_Ip_ComputeAccessRights/6:
    return value ignored
    Parameter 0:
    Parameter 1:
      Scalar param sources: 1
  Summary for edge Mpu_M7_Ip_SetRegionConfig_Privileged/9->Mpu_M7_Ip_SetCachePolicies/5:
    return value ignored
    Parameter 0:
    Parameter 1:
      Scalar param sources: 1
    Parameter 2:
      Scalar param sources: 1
  Summary for edge Mpu_M7_Ip_SetRegionConfig_Privileged/9->Mpu_M7_Ip_SetMemoryType/4:
    return value ignored
    Parameter 0:
    Parameter 1:
      Scalar param sources: 1
  Summary for edge Mpu_M7_Ip_SetRegionConfig_Privileged/9->Mpu_M7_Ip_CalculateRegionSize/3:

Summary for node Mpu_M7_Ip_Init_Privileged/8:
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge Mpu_M7_Ip_Init_Privileged/8->Mpu_M7_Ip_SetRegionConfig_Privileged/9:
    return value ignored
    Parameter 0:
      Scalar param sources: 0
    Parameter 1:
      Scalar param sources: 0
  Summary for edge Mpu_M7_Ip_Init_Privileged/8->Mpu_M7_Ip_Deinit_Privileged/10:
    return value ignored

Summary for node Mpu_M7_Ip_GetErrorRegisters/7:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting


Summary for node Mpu_M7_Ip_ComputeAccessRights/6:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting


Summary for node Mpu_M7_Ip_SetCachePolicies/5:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting


Summary for node Mpu_M7_Ip_SetMemoryType/4:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting


Summary for node Mpu_M7_Ip_CalculateRegionSize/3:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting



Function Mpu_M7_Ip_GetErrorRegisters/7 disqualified because it cannot be made local.
Function Mpu_M7_Ip_SetRegionConfig_Privileged/9 disqualified because it cannot be made local.
Function Mpu_M7_Ip_Deinit_Privileged/10 disqualified because it cannot be made local.
Function Mpu_M7_Ip_Init_Privileged/8 disqualified because it cannot be made local.
Function Mpu_M7_Ip_EnableRegion_Privileged/11 disqualified because it cannot be made local.
Function Mpu_M7_Ip_SetAccessRight_Privileged/12 disqualified because it cannot be made local.
Function Mpu_M7_Ip_Init/13 disqualified because it cannot be made local.
Function Mpu_M7_Ip_SetRegionConfig/14 disqualified because it cannot be made local.
Function Mpu_M7_Ip_Deinit/15 disqualified because it cannot be made local.
Function Mpu_M7_Ip_EnableRegion/16 disqualified because it cannot be made local.
Function Mpu_M7_Ip_SetAccessRight/17 disqualified because it cannot be made local.
Function Mpu_M7_Ip_GetErrorDetails/18 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Mpu_M7_Ip_EnableRegion_Privileged.part.0/19 (Mpu_M7_Ip_EnableRegion_Privileged.part.0) @06cf80e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local split_part optimize_size
  Called by: Mpu_M7_Ip_EnableRegion_Privileged/11 (536870912 (estimated locally),0.50 per call) 
  Calls: 
Mpu_M7_Ip_GetErrorDetails/18 (Mpu_M7_Ip_GetErrorDetails) @06cf8a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: Mpu_M7_Ip_GetErrorRegisters/7 (118111600 (estimated locally),1.00 per call) 
Mpu_M7_Ip_SetAccessRight/17 (Mpu_M7_Ip_SetAccessRight) @06cf87e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Mpu_M7_Ip_SetAccessRight_Privileged/12 (1073741824 (estimated locally),1.00 per call) 
Mpu_M7_Ip_EnableRegion/16 (Mpu_M7_Ip_EnableRegion) @06cf8540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Mpu_M7_Ip_EnableRegion_Privileged/11 (1073741824 (estimated locally),1.00 per call) 
Mpu_M7_Ip_Deinit/15 (Mpu_M7_Ip_Deinit) @06cf82a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Mpu_M7_Ip_Deinit_Privileged/10 (1073741824 (estimated locally),1.00 per call) 
Mpu_M7_Ip_SetRegionConfig/14 (Mpu_M7_Ip_SetRegionConfig) @06cf8000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Mpu_M7_Ip_SetRegionConfig_Privileged/9 (1073741824 (estimated locally),1.00 per call) 
Mpu_M7_Ip_Init/13 (Mpu_M7_Ip_Init) @06cb59a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Mpu_M7_Ip_Init_Privileged/8 (1073741824 (estimated locally),1.00 per call) 
Mpu_M7_Ip_SetAccessRight_Privileged/12 (Mpu_M7_Ip_SetAccessRight_Privileged) @06cb51c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Mpu_M7_Ip_SetAccessRight/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: Mpu_M7_Ip_ComputeAccessRights/6 (1073741824 (estimated locally),1.00 per call) 
Mpu_M7_Ip_EnableRegion_Privileged/11 (Mpu_M7_Ip_EnableRegion_Privileged) @06cb5d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Mpu_M7_Ip_EnableRegion/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: Mpu_M7_Ip_EnableRegion_Privileged.part.0/19 (536870912 (estimated locally),0.50 per call) 
Mpu_M7_Ip_Deinit_Privileged/10 (Mpu_M7_Ip_Deinit_Privileged) @06cb58c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: Mpu_M7_Ip_Init_Privileged/8 (118111600 (estimated locally),1.00 per call) Mpu_M7_Ip_Deinit/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Mpu_M7_Ip_SetRegionConfig_Privileged/9 (Mpu_M7_Ip_SetRegionConfig_Privileged) @06cb5620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Mpu_M7_Ip_Init_Privileged/8 (955630225 (estimated locally),8.09 per call) Mpu_M7_Ip_SetRegionConfig/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: Mpu_M7_Ip_ComputeAccessRights/6 (1073741824 (estimated locally),1.00 per call) Mpu_M7_Ip_SetCachePolicies/5 (365072224 (estimated locally),0.34 per call) Mpu_M7_Ip_SetMemoryType/4 (708669601 (estimated locally),0.66 per call) Mpu_M7_Ip_CalculateRegionSize/3 (1073741824 (estimated locally),1.00 per call) 
Mpu_M7_Ip_Init_Privileged/8 (Mpu_M7_Ip_Init_Privileged) @06cb50e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: Mpu_M7_Ip_Init/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: Mpu_M7_Ip_SetRegionConfig_Privileged/9 (955630225 (estimated locally),8.09 per call) Mpu_M7_Ip_Deinit_Privileged/10 (118111600 (estimated locally),1.00 per call) 
Mpu_M7_Ip_GetErrorRegisters/7 (Mpu_M7_Ip_GetErrorRegisters) @06cae620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Mpu_M7_Ip_GetErrorDetails/18 (118111600 (estimated locally),1.00 per call) 
  Calls: 
Mpu_M7_Ip_ComputeAccessRights/6 (Mpu_M7_Ip_ComputeAccessRights) @06cae0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Mpu_M7_Ip_SetAccessRight_Privileged/12 (1073741824 (estimated locally),1.00 per call) Mpu_M7_Ip_SetRegionConfig_Privileged/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Mpu_M7_Ip_SetCachePolicies/5 (Mpu_M7_Ip_SetCachePolicies) @06caea80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Mpu_M7_Ip_SetRegionConfig_Privileged/9 (365072224 (estimated locally),0.34 per call) 
  Calls: 
Mpu_M7_Ip_SetMemoryType/4 (Mpu_M7_Ip_SetMemoryType) @06cae540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: u8Mpu_M7_MemoryTypeValues/1 (read) 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Mpu_M7_Ip_SetRegionConfig_Privileged/9 (708669601 (estimated locally),0.66 per call) 
  Calls: 
Mpu_M7_Ip_CalculateRegionSize/3 (Mpu_M7_Ip_CalculateRegionSize) @06cae2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: Mpu_M7_Ip_SetRegionConfig_Privileged/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
u8Mpu_M7_MemoryTypeValues/1 (u8Mpu_M7_MemoryTypeValues) @06c653f0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Mpu_M7_Ip_SetMemoryType/4 (read) 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Mpu_M7_Ip_EnableRegion_Privileged.part.0 ()
{
  struct S32_MPU_Type * base;
  uint8 u8RegionNum;
  boolean bEnable;
  long unsigned int _1;
  long unsigned int _2;

  <bb 4> [local count: 1073741824]:
  # DEBUG D#4 s=> u8RegionNum
  # DEBUG u8RegionNum => D#4
  # DEBUG D#3 s=> bEnable
  # DEBUG bEnable => D#3

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct S32_MPU_Type *)3758153728B].RASR;
  _2 = _1 | 1;
  MEM[(struct S32_MPU_Type *)3758153728B].RASR ={v} _2;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");

  <bb 3> [local count: 1073741824]:
  return;

}


Mpu_M7_Ip_GetErrorDetails (struct Mpu_M7_Ip_ErrorDetailsType * pErrorDetails)
{
  uint8 errorCount;
  uint32 errorAddress;
  uint32 mmfsrCopy;
  uint32 mmfsr;
  boolean result;
  unsigned char _1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int mmfsr.11_4;
  long unsigned int errorAddress.13_6;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG errorCount => 0
  # DEBUG BEGIN_STMT
  Mpu_M7_Ip_GetErrorRegisters (&mmfsr, &errorAddress);
  # DEBUG BEGIN_STMT
  mmfsrCopy_13 = mmfsr;
  # DEBUG mmfsrCopy => mmfsrCopy_13
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  _1 = (unsigned char) mmfsr.11_4;
  _2 = _1 & 1;
  errorCount_26 = _2 + errorCount_8;
  # DEBUG errorCount => errorCount_26
  # DEBUG BEGIN_STMT
  _3 = mmfsr.11_4 >> 1;
  mmfsr = _3;

  <bb 4> [local count: 1073741824]:
  # errorCount_8 = PHI <0(2), errorCount_26(3)>
  # DEBUG errorCount => errorCount_8
  # DEBUG BEGIN_STMT
  mmfsr.11_4 = mmfsr;
  if (mmfsr.11_4 != 0)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111600]:
  # errorCount_5 = PHI <errorCount_8(4)>
  # DEBUG BEGIN_STMT
  if (errorCount_5 > 1)
    goto <bb 6>; [59.00%]
  else
    goto <bb 7>; [41.00%]

  <bb 6> [local count: 69685844]:
  # DEBUG BEGIN_STMT
  pErrorDetails_15(D)->eType = 5;
  goto <bb 14>; [100.00%]

  <bb 7> [local count: 48425756]:
  # DEBUG BEGIN_STMT
  mmfsr = mmfsrCopy_13;
  # DEBUG BEGIN_STMT
  switch (mmfsrCopy_13) <default: <L10> [16.67%], case 1: <L5> [16.67%], case 2: <L6> [16.67%], case 8: <L7> [16.67%], case 16: <L8> [16.67%], case 32: <L9> [16.67%]>

  <bb 8> [local count: 8070959]:
<L5>:
  # DEBUG BEGIN_STMT
  pErrorDetails_15(D)->eType = 0;
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 9> [local count: 8070959]:
<L6>:
  # DEBUG BEGIN_STMT
  pErrorDetails_15(D)->eType = 1;
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 10> [local count: 8070959]:
<L7>:
  # DEBUG BEGIN_STMT
  pErrorDetails_15(D)->eType = 3;
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 11> [local count: 8070959]:
<L8>:
  # DEBUG BEGIN_STMT
  pErrorDetails_15(D)->eType = 2;
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 12> [local count: 8070959]:
<L9>:
  # DEBUG BEGIN_STMT
  pErrorDetails_15(D)->eType = 4;
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 8070959]:
<L10>:
  # DEBUG BEGIN_STMT
  pErrorDetails_15(D)->eType = 6;
  # DEBUG BEGIN_STMT

  <bb 14> [local count: 118111599]:
  # DEBUG BEGIN_STMT
  errorAddress.13_6 = errorAddress;
  pErrorDetails_15(D)->u32Address = errorAddress.13_6;
  # DEBUG BEGIN_STMT
  if (errorCount_5 != 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 15> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1

  <bb 16> [local count: 118111599]:
  # result_7 = PHI <0(14), 1(15)>
  # DEBUG result => result_7
  # DEBUG BEGIN_STMT
  mmfsr ={v} {CLOBBER};
  errorAddress ={v} {CLOBBER};
  return result_7;

}


Mpu_M7_Ip_SetAccessRight (uint8 u8RegionNum, Mpu_M7_Ip_AccessRightsType eRights)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Mpu_M7_Ip_SetAccessRight_Privileged (u8RegionNum_2(D), eRights_3(D));
  return;

}


Mpu_M7_Ip_EnableRegion (uint8 u8RegionNum, boolean bEnable)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Mpu_M7_Ip_EnableRegion_Privileged (u8RegionNum_2(D), bEnable_3(D));
  return;

}


Mpu_M7_Ip_Deinit ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Mpu_M7_Ip_Deinit_Privileged ();
  return;

}


Mpu_M7_Ip_SetRegionConfig (uint8 u8RegionNum, const struct Mpu_M7_Ip_RegionConfigType * const pUserConfigPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Mpu_M7_Ip_SetRegionConfig_Privileged (u8RegionNum_2(D), pUserConfigPtr_3(D));
  return;

}


Mpu_M7_Ip_Init (const struct Mpu_M7_Ip_ConfigType * pConfig)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Mpu_M7_Ip_Init_Privileged (pConfig_2(D));
  return;

}


Mpu_M7_Ip_SetAccessRight_Privileged (uint8 u8RegionNum, Mpu_M7_Ip_AccessRightsType eRights)
{
  uint32 regionAttributes;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int regionAttributes.8_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG base => 3758153728B
  # DEBUG BEGIN_STMT
  _1 = (long unsigned int) u8RegionNum_4(D);
  MEM[(struct S32_MPU_Type *)3758153728B].RNR ={v} _1;
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct S32_MPU_Type *)3758153728B].RASR;
  regionAttributes = _2;
  # DEBUG BEGIN_STMT
  Mpu_M7_Ip_ComputeAccessRights (&regionAttributes, eRights_8(D));
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  regionAttributes.8_3 = regionAttributes;
  MEM[(struct S32_MPU_Type *)3758153728B].RASR ={v} regionAttributes.8_3;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  regionAttributes ={v} {CLOBBER};
  return;

}


Mpu_M7_Ip_EnableRegion_Privileged (uint8 u8RegionNum, boolean bEnable)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG base => 3758153728B
  # DEBUG BEGIN_STMT
  _1 = (long unsigned int) u8RegionNum_5(D);
  MEM[(struct S32_MPU_Type *)3758153728B].RNR ={v} _1;
  # DEBUG BEGIN_STMT
  if (bEnable_8(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870912]:
  # DEBUG D#1 => u8RegionNum_5(D)
  # DEBUG D#2 => bEnable_8(D)
  Mpu_M7_Ip_EnableRegion_Privileged.part.0 ();
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct S32_MPU_Type *)3758153728B].RASR;
  _3 = _2 & 4294967294;
  MEM[(struct S32_MPU_Type *)3758153728B].RASR ={v} _3;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");

  <bb 5> [local count: 1073741824]:
  return;

}


Mpu_M7_Ip_Deinit_Privileged ()
{
  uint8 region;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _16;
  long unsigned int _17;
  unsigned char _18;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG base => 3758153728B
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct S32_MPU_Type *)3758153728B].CTRL;
  _2 = _1 & 4294967288;
  MEM[(struct S32_MPU_Type *)3758153728B].CTRL ={v} _2;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  # DEBUG region => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  _3 = (long unsigned int) region_4;
  MEM[(struct S32_MPU_Type *)3758153728B].RNR ={v} _3;
  # DEBUG BEGIN_STMT
  MEM[(struct S32_MPU_Type *)3758153728B].RASR ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct S32_MPU_Type *)3758153728B].RBAR ={v} 0;
  # DEBUG BEGIN_STMT
  region_15 = region_4 + 1;
  # DEBUG region => region_15

  <bb 4> [local count: 1073741824]:
  # region_4 = PHI <0(2), region_15(3)>
  # DEBUG region => region_4
  # DEBUG BEGIN_STMT
  # DEBUG base => 3758153728B
  # DEBUG INLINE_ENTRY Mpu_M7_Ip_GetDRegion
  # DEBUG BEGIN_STMT
  _16 ={v} MEM[(const struct S32_MPU_Type *)3758153728B].TYPE;
  _17 = _16 >> 8;
  _18 = (unsigned char) _17;
  # DEBUG base => NULL
  if (region_4 < _18)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111600]:
  return;

}


Mpu_M7_Ip_SetRegionConfig_Privileged (uint8 u8RegionNum, const struct Mpu_M7_Ip_RegionConfigType * const pUserConfigPtr)
{
  uint32 regionAttributes;
  uint32 regionSize;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  unsigned char _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  _Bool _12;
  long unsigned int regionAttributes.3_13;
  long unsigned int _14;
  long unsigned int regionAttributes.4_15;
  long unsigned int _16;
  <unnamed type> _17;
  <unnamed type> _18;
  <unnamed type> _19;
  <unnamed type> _20;
  long unsigned int regionAttributes.5_21;
  long unsigned int _22;
  long unsigned int regionAttributes.6_23;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG base => 3758153728B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = pUserConfigPtr_28(D)->u32StartAddr;
  _2 = pUserConfigPtr_28(D)->u32EndAddr;
  regionSize_29 = Mpu_M7_Ip_CalculateRegionSize (_1, _2);
  # DEBUG regionSize => regionSize_29
  # DEBUG BEGIN_STMT
  _3 = (long unsigned int) u8RegionNum_30(D);
  MEM[(struct S32_MPU_Type *)3758153728B].RNR ={v} _3;
  # DEBUG BEGIN_STMT
  MEM[(struct S32_MPU_Type *)3758153728B].RBAR ={v} _1;
  # DEBUG BEGIN_STMT
  _4 = regionSize_29 + 4294967295;
  _5 = _4 << 1;
  _6 = _5 & 62;
  regionAttributes = _6;
  # DEBUG BEGIN_STMT
  _7 = _2 - _1;
  if (_7 > 31)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _8 = pUserConfigPtr_28(D)->u8SubRegMask;
  _9 = (long unsigned int) _8;
  _10 = _9 << 8;
  _11 = _6 | _10;
  regionAttributes = _11;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _12 = pUserConfigPtr_28(D)->bShareable;
  if (_12 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  regionAttributes.3_13 = regionAttributes;
  _14 = regionAttributes.3_13 | 262144;
  regionAttributes = _14;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  regionAttributes.4_15 = regionAttributes;
  _16 = regionAttributes.4_15 & 4294705151;
  regionAttributes = _16;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _17 = pUserConfigPtr_28(D)->eMemType;
  if (_17 != 7)
    goto <bb 8>; [66.00%]
  else
    goto <bb 9>; [34.00%]

  <bb 8> [local count: 708669601]:
  # DEBUG BEGIN_STMT
  Mpu_M7_Ip_SetMemoryType (&regionAttributes, _17);
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 365072224]:
  # DEBUG BEGIN_STMT
  _18 = pUserConfigPtr_28(D)->eInnerCachePolicy;
  _19 = pUserConfigPtr_28(D)->eOuterCachePolicy;
  Mpu_M7_Ip_SetCachePolicies (&regionAttributes, _18, _19);

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _20 = pUserConfigPtr_28(D)->eAccessRight;
  Mpu_M7_Ip_ComputeAccessRights (&regionAttributes, _20);
  # DEBUG BEGIN_STMT
  regionAttributes.5_21 = regionAttributes;
  _22 = regionAttributes.5_21 | 1;
  regionAttributes = _22;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  regionAttributes.6_23 = regionAttributes;
  MEM[(struct S32_MPU_Type *)3758153728B].RASR ={v} regionAttributes.6_23;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  regionAttributes ={v} {CLOBBER};
  return;

}


Mpu_M7_Ip_Init_Privileged (const struct Mpu_M7_Ip_ConfigType * pConfig)
{
  const struct Mpu_M7_Ip_RegionConfigType * regionCfg;
  uint8 region;
  _Bool _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  _Bool _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  _Bool _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  const struct Mpu_M7_Ip_RegionConfigType * _16;
  unsigned int _17;
  unsigned int _18;
  unsigned char _20;
  unsigned char _21;
  long unsigned int _22;
  long unsigned int _23;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG base => 3758153728B
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Mpu_M7_Ip_Deinit
  # DEBUG BEGIN_STMT
  Mpu_M7_Ip_Deinit_Privileged ();
  # DEBUG BEGIN_STMT
  _1 = pConfig_30(D)->bDefaultMapEn;
  if (_1 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct S32_MPU_Type *)3758153728B].CTRL;
  _3 = _2 | 4;
  MEM[(struct S32_MPU_Type *)3758153728B].CTRL ={v} _3;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(struct S32_MPU_Type *)3758153728B].CTRL;
  _5 = _4 & 4294967291;
  MEM[(struct S32_MPU_Type *)3758153728B].CTRL ={v} _5;

  <bb 5> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _6 = pConfig_30(D)->bEnableRunHFNMI;
  if (_6 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct S32_MPU_Type *)3758153728B].CTRL;
  _8 = _7 | 2;
  MEM[(struct S32_MPU_Type *)3758153728B].CTRL ={v} _8;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  _9 ={v} MEM[(struct S32_MPU_Type *)3758153728B].CTRL;
  _10 = _9 & 4294967293;
  MEM[(struct S32_MPU_Type *)3758153728B].CTRL ={v} _10;

  <bb 8> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _11 = pConfig_30(D)->bEnMemManageInterrupt;
  if (_11 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  _12 ={v} MEM[(struct S32_SCB_Type *)3758153728B].SHCSR;
  _13 = _12 | 65536;
  MEM[(struct S32_SCB_Type *)3758153728B].SHCSR ={v} _13;

  <bb 13> [local count: 118111600]:
  # region_27 = PHI <0(10), 0(9)>
  goto <bb 15>; [100.00%]

  <bb 10> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  _14 ={v} MEM[(struct S32_SCB_Type *)3758153728B].SHCSR;
  _15 = _14 & 4294901759;
  MEM[(struct S32_SCB_Type *)3758153728B].SHCSR ={v} _15;
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  _16 = pConfig_30(D)->pRegionConfigArr;
  _17 = (unsigned int) region_24;
  _18 = _17 * 32;
  regionCfg_42 = _16 + _18;
  # DEBUG regionCfg => regionCfg_42
  # DEBUG BEGIN_STMT
  _20 = regionCfg_42->u8RegionNum;
  Mpu_M7_Ip_SetRegionConfig_Privileged (_20, regionCfg_42);
  # DEBUG BEGIN_STMT
  region_44 = region_24 + 1;
  # DEBUG region => region_44

  <bb 15> [local count: 1073741824]:
  # region_24 = PHI <region_27(13), region_44(12)>
  # DEBUG region => region_24
  # DEBUG BEGIN_STMT
  _21 = pConfig_30(D)->u8RegionCnt;
  if (_21 > region_24)
    goto <bb 12>; [89.00%]
  else
    goto <bb 14>; [11.00%]

  <bb 14> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  _22 ={v} MEM[(struct S32_MPU_Type *)3758153728B].CTRL;
  _23 = _22 | 1;
  MEM[(struct S32_MPU_Type *)3758153728B].CTRL ={v} _23;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  return;

}


Mpu_M7_Ip_GetErrorRegisters (uint32 * pMmfsr, uint32 * pAddress)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CFSR;
  _2 = _1 & 59;
  *pMmfsr_9(D) = _2;
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CFSR;
  _4 = _3 >> 7;
  _5 = _4 & 1;
  if (_5 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _6 ={v} MEM[(struct S32_SCB_Type *)3758153728B].MMFAR;
  *pAddress_11(D) = _6;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  *pAddress_11(D) = 4294967295;

  <bb 5> [local count: 1073741824]:
  return;

}


Mpu_M7_Ip_ComputeAccessRights (uint32 * pRegionAttr, Mpu_M7_Ip_AccessRightsType eAccessRights)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  int _6;
  int _7;
  long unsigned int _8;
  long unsigned int _9;
  <unnamed type> _16;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = *pRegionAttr_12(D);
  _2 = _1 & 3909091327;
  # DEBUG BEGIN_STMT
  _3 = eAccessRights_13(D) << 24;
  _4 = _3 & 117440512;
  _5 = _2 | _4;
  # DEBUG BEGIN_STMT
  _16 = eAccessRights_13(D) & 255;
  _6 = (int) _16;
  _7 = _6 & 16;
  if (_7 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _8 = _5 | 268435456;
  *pRegionAttr_12(D) = _8;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _9 = _5 & 4026531839;
  *pRegionAttr_12(D) = _9;

  <bb 5> [local count: 1073741824]:
  return;

}


Mpu_M7_Ip_SetCachePolicies (uint32 * pRegionAttr, Mpu_M7_Ip_CachePolicyType eInnerPolicy, Mpu_M7_Ip_CachePolicyType eOuterPolicy)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = *pRegionAttr_14(D);
  _2 = eInnerPolicy_15(D) >> 1;
  _3 = _2 << 17;
  _4 = _3 & 131072;
  _5 = eInnerPolicy_15(D) << 16;
  _6 = _5 & 65536;
  _7 = _4 | _6;
  _8 = _1 | _7;
  # DEBUG BEGIN_STMT
  _9 = eOuterPolicy_16(D) << 19;
  _10 = _9 & 1572864;
  _11 = _8 | _10;
  _12 = _11 | 2097152;
  *pRegionAttr_14(D) = _12;
  return;

}


Mpu_M7_Ip_SetMemoryType (uint32 * pRegionAttr, Mpu_M7_Ip_MemoryType eType)
{
  long unsigned int _1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = *pRegionAttr_7(D);
  _2 = u8Mpu_M7_MemoryTypeValues[eType_8(D)];
  _3 = (long unsigned int) _2;
  _4 = _3 << 16;
  _5 = _1 | _4;
  *pRegionAttr_7(D) = _5;
  return;

}


Mpu_M7_Ip_CalculateRegionSize (uint32 u32StartAddr, uint32 u32EndAddr)
{
  uint32 u32Size;
  uint32 finalSize;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG finalSize => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32Size => 0
  # DEBUG BEGIN_STMT
  u32Size_5 = u32EndAddr_3(D) - u32StartAddr_4(D);
  # DEBUG u32Size => u32Size_5
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  finalSize_8 = finalSize_1 + 1;
  # DEBUG finalSize => finalSize_8
  # DEBUG BEGIN_STMT
  u32Size_9 = u32Size_2 >> 1;
  # DEBUG u32Size => u32Size_9

  <bb 4> [local count: 1073741824]:
  # finalSize_1 = PHI <0(2), finalSize_8(3)>
  # u32Size_2 = PHI <u32Size_5(2), u32Size_9(3)>
  # DEBUG u32Size => u32Size_2
  # DEBUG finalSize => finalSize_1
  # DEBUG BEGIN_STMT
  if (u32Size_2 != 0)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111600]:
  # finalSize_6 = PHI <finalSize_1(4)>
  # DEBUG BEGIN_STMT
  return finalSize_6;

}


