
IPA constant propagation start:
Determining dynamic type for call: Mpu_M7_Ip_GetErrorRegisters (&mmfsr, &errorAddress);
  Starting walk at: Mpu_M7_Ip_GetErrorRegisters (&mmfsr, &errorAddress);
  instance pointer: &mmfsr  Outer instance pointer: mmfsr offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Mpu_M7_Ip_GetErrorRegisters (&mmfsr, &errorAddress);
  Starting walk at: Mpu_M7_Ip_GetErrorRegisters (&mmfsr, &errorAddress);
  instance pointer: &errorAddress  Outer instance pointer: errorAddress offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Mpu_M7_Ip_SetRegionConfig_Privileged (u8RegionNum_2(D), pUserConfigPtr_3(D));
  Starting walk at: Mpu_M7_Ip_SetRegionConfig_Privileged (u8RegionNum_2(D), pUserConfigPtr_3(D));
  instance pointer: pUserConfigPtr_3(D)  Outer instance pointer: pUserConfigPtr_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Mpu_M7_Ip_Init_Privileged (pConfig_2(D));
  Starting walk at: Mpu_M7_Ip_Init_Privileged (pConfig_2(D));
  instance pointer: pConfig_2(D)  Outer instance pointer: pConfig_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Mpu_M7_Ip_ComputeAccessRights (&regionAttributes, eRights_8(D));
  Starting walk at: Mpu_M7_Ip_ComputeAccessRights (&regionAttributes, eRights_8(D));
  instance pointer: &regionAttributes  Outer instance pointer: regionAttributes offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Mpu_M7_Ip_SetCachePolicies (&regionAttributes, _18, _19);
  Starting walk at: Mpu_M7_Ip_SetCachePolicies (&regionAttributes, _18, _19);
  instance pointer: &regionAttributes  Outer instance pointer: regionAttributes offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Mpu_M7_Ip_SetMemoryType (&regionAttributes, _17);
  Starting walk at: Mpu_M7_Ip_SetMemoryType (&regionAttributes, _17);
  instance pointer: &regionAttributes  Outer instance pointer: regionAttributes offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Mpu_M7_Ip_ComputeAccessRights (&regionAttributes, _20);
  Starting walk at: Mpu_M7_Ip_ComputeAccessRights (&regionAttributes, _20);
  instance pointer: &regionAttributes  Outer instance pointer: regionAttributes offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Mpu_M7_Ip_SetMemoryType (&regionAttributes, _17);
  Function call may change dynamic type:Mpu_M7_Ip_SetCachePolicies (&regionAttributes, _18, _19);
Determining dynamic type for call: Mpu_M7_Ip_SetRegionConfig_Privileged (_20, regionCfg_42);
  Starting walk at: Mpu_M7_Ip_SetRegionConfig_Privileged (_20, regionCfg_42);
  instance pointer: regionCfg_42  Outer instance pointer: regionCfg_42 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Mpu_M7_Ip_Deinit_Privileged ();
  Function call may change dynamic type:Mpu_M7_Ip_SetRegionConfig_Privileged (_20, regionCfg_42);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Mpu_M7_Ip_EnableRegion_Privileged.part.0/19:
  Jump functions of caller  Mpu_M7_Ip_GetErrorDetails/18:
    callsite  Mpu_M7_Ip_GetErrorDetails/18 -> Mpu_M7_Ip_GetErrorRegisters/7 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  [1, -1]
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  [1, -1]
  Jump functions of caller  Mpu_M7_Ip_SetAccessRight/17:
    callsite  Mpu_M7_Ip_SetAccessRight/17 -> Mpu_M7_Ip_SetAccessRight_Privileged/12 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Mpu_M7_Ip_EnableRegion/16:
    callsite  Mpu_M7_Ip_EnableRegion/16 -> Mpu_M7_Ip_EnableRegion_Privileged/11 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0x1
         Unknown VR
  Jump functions of caller  Mpu_M7_Ip_Deinit/15:
    callsite  Mpu_M7_Ip_Deinit/15 -> Mpu_M7_Ip_Deinit_Privileged/10 : 
  Jump functions of caller  Mpu_M7_Ip_SetRegionConfig/14:
    callsite  Mpu_M7_Ip_SetRegionConfig/14 -> Mpu_M7_Ip_SetRegionConfig_Privileged/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Mpu_M7_Ip_Init/13:
    callsite  Mpu_M7_Ip_Init/13 -> Mpu_M7_Ip_Init_Privileged/8 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Mpu_M7_Ip_SetAccessRight_Privileged/12:
    callsite  Mpu_M7_Ip_SetAccessRight_Privileged/12 -> Mpu_M7_Ip_ComputeAccessRights/6 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  [1, -1]
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Mpu_M7_Ip_EnableRegion_Privileged/11:
    callsite  Mpu_M7_Ip_EnableRegion_Privileged/11 -> Mpu_M7_Ip_EnableRegion_Privileged.part.0/19 : 
  Jump functions of caller  Mpu_M7_Ip_Deinit_Privileged/10:
  Jump functions of caller  Mpu_M7_Ip_SetRegionConfig_Privileged/9:
    callsite  Mpu_M7_Ip_SetRegionConfig_Privileged/9 -> Mpu_M7_Ip_ComputeAccessRights/6 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  [1, -1]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Mpu_M7_Ip_SetRegionConfig_Privileged/9 -> Mpu_M7_Ip_SetCachePolicies/5 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  [1, -1]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Mpu_M7_Ip_SetRegionConfig_Privileged/9 -> Mpu_M7_Ip_SetMemoryType/4 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  [1, -1]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Mpu_M7_Ip_SetRegionConfig_Privileged/9 -> Mpu_M7_Ip_CalculateRegionSize/3 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Mpu_M7_Ip_Init_Privileged/8:
    callsite  Mpu_M7_Ip_Init_Privileged/8 -> Mpu_M7_Ip_SetRegionConfig_Privileged/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Mpu_M7_Ip_Init_Privileged/8 -> Mpu_M7_Ip_Deinit_Privileged/10 : 
  Jump functions of caller  Mpu_M7_Ip_GetErrorRegisters/7:
  Jump functions of caller  Mpu_M7_Ip_ComputeAccessRights/6:
  Jump functions of caller  Mpu_M7_Ip_SetCachePolicies/5:
  Jump functions of caller  Mpu_M7_Ip_SetMemoryType/4:
  Jump functions of caller  Mpu_M7_Ip_CalculateRegionSize/3:

 Propagating constants:

Not considering Mpu_M7_Ip_GetErrorDetails/18 for cloning; -fipa-cp-clone disabled.
Not considering Mpu_M7_Ip_SetAccessRight/17 for cloning; -fipa-cp-clone disabled.
Not considering Mpu_M7_Ip_EnableRegion/16 for cloning; -fipa-cp-clone disabled.
Not considering Mpu_M7_Ip_SetRegionConfig/14 for cloning; -fipa-cp-clone disabled.
Not considering Mpu_M7_Ip_Init/13 for cloning; -fipa-cp-clone disabled.
Not considering Mpu_M7_Ip_SetAccessRight_Privileged/12 for cloning; -fipa-cp-clone disabled.
Not considering Mpu_M7_Ip_EnableRegion_Privileged/11 for cloning; -fipa-cp-clone disabled.
Not considering Mpu_M7_Ip_SetRegionConfig_Privileged/9 for cloning; -fipa-cp-clone disabled.
Not considering Mpu_M7_Ip_Init_Privileged/8 for cloning; -fipa-cp-clone disabled.
Not considering Mpu_M7_Ip_GetErrorRegisters/7 for cloning; -fipa-cp-clone disabled.

overall_size: 292

IPA lattices after all propagation:

Lattices:
  Node: Mpu_M7_Ip_EnableRegion_Privileged.part.0/19:
  Node: Mpu_M7_Ip_GetErrorDetails/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Mpu_M7_Ip_SetAccessRight/17:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Mpu_M7_Ip_EnableRegion/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Mpu_M7_Ip_Deinit/15:
  Node: Mpu_M7_Ip_SetRegionConfig/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Mpu_M7_Ip_Init/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Mpu_M7_Ip_SetAccessRight_Privileged/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Mpu_M7_Ip_EnableRegion_Privileged/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Mpu_M7_Ip_Deinit_Privileged/10:
  Node: Mpu_M7_Ip_SetRegionConfig_Privileged/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Mpu_M7_Ip_Init_Privileged/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Mpu_M7_Ip_GetErrorRegisters/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Mpu_M7_Ip_ComputeAccessRights/6:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         uint32 * [1B, +INF]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: Mpu_M7_Ip_SetCachePolicies/5:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         uint32 * [1B, +INF]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: Mpu_M7_Ip_SetMemoryType/4:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         uint32 * [1B, +INF]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: Mpu_M7_Ip_CalculateRegionSize/3:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE

IPA decision stage:

Propagated bits info for function Mpu_M7_Ip_ComputeAccessRights/6:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Mpu_M7_Ip_SetCachePolicies/5:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Mpu_M7_Ip_SetMemoryType/4:
 param 0: value = 0x0, mask = 0xfffffffc

IPA constant propagation end

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

;; Function Mpu_M7_Ip_ComputeAccessRights (Mpu_M7_Ip_ComputeAccessRights, funcdef_no=5, decl_uid=5950, cgraph_uid=6, symbol_order=6)

Modification phase of node Mpu_M7_Ip_ComputeAccessRights/6
Adjusting mask for param 0 to 0xfffffffc
Adjusting align: 4, misalign: 0
Setting nonnull for 0
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



;; Function Mpu_M7_Ip_GetErrorRegisters (Mpu_M7_Ip_GetErrorRegisters, funcdef_no=6, decl_uid=5953, cgraph_uid=7, symbol_order=7)

Modification phase of node Mpu_M7_Ip_GetErrorRegisters/7
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



;; Function Mpu_M7_Ip_SetRegionConfig_Privileged (Mpu_M7_Ip_SetRegionConfig_Privileged, funcdef_no=8, decl_uid=5927, cgraph_uid=9, symbol_order=9)

Modification phase of node Mpu_M7_Ip_SetRegionConfig_Privileged/9
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



;; Function Mpu_M7_Ip_Deinit_Privileged (Mpu_M7_Ip_Deinit_Privileged, funcdef_no=9, decl_uid=5929, cgraph_uid=10, symbol_order=10)

Modification phase of node Mpu_M7_Ip_Deinit_Privileged/10
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



;; Function Mpu_M7_Ip_Init_Privileged (Mpu_M7_Ip_Init_Privileged, funcdef_no=7, decl_uid=5924, cgraph_uid=8, symbol_order=8)

Modification phase of node Mpu_M7_Ip_Init_Privileged/8
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



;; Function Mpu_M7_Ip_EnableRegion_Privileged (Mpu_M7_Ip_EnableRegion_Privileged, funcdef_no=10, decl_uid=5932, cgraph_uid=11, symbol_order=11)

Modification phase of node Mpu_M7_Ip_EnableRegion_Privileged/11
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



;; Function Mpu_M7_Ip_SetAccessRight_Privileged (Mpu_M7_Ip_SetAccessRight_Privileged, funcdef_no=11, decl_uid=5935, cgraph_uid=12, symbol_order=12)

Modification phase of node Mpu_M7_Ip_SetAccessRight_Privileged/12
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



;; Function Mpu_M7_Ip_Init (Mpu_M7_Ip_Init, funcdef_no=12, decl_uid=5908, cgraph_uid=13, symbol_order=13)

Modification phase of node Mpu_M7_Ip_Init/13
Mpu_M7_Ip_Init (const struct Mpu_M7_Ip_ConfigType * pConfig)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Mpu_M7_Ip_Init_Privileged (pConfig_2(D));
  return;

}



;; Function Mpu_M7_Ip_SetRegionConfig (Mpu_M7_Ip_SetRegionConfig, funcdef_no=13, decl_uid=5911, cgraph_uid=14, symbol_order=14)

Modification phase of node Mpu_M7_Ip_SetRegionConfig/14
Mpu_M7_Ip_SetRegionConfig (uint8 u8RegionNum, const struct Mpu_M7_Ip_RegionConfigType * const pUserConfigPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Mpu_M7_Ip_SetRegionConfig_Privileged (u8RegionNum_2(D), pUserConfigPtr_3(D));
  return;

}



;; Function Mpu_M7_Ip_Deinit (Mpu_M7_Ip_Deinit, funcdef_no=14, decl_uid=5913, cgraph_uid=15, symbol_order=15)

Modification phase of node Mpu_M7_Ip_Deinit/15
Mpu_M7_Ip_Deinit ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Mpu_M7_Ip_Deinit_Privileged ();
  return;

}



;; Function Mpu_M7_Ip_EnableRegion (Mpu_M7_Ip_EnableRegion, funcdef_no=15, decl_uid=5916, cgraph_uid=16, symbol_order=16)

Modification phase of node Mpu_M7_Ip_EnableRegion/16
Mpu_M7_Ip_EnableRegion (uint8 u8RegionNum, boolean bEnable)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Mpu_M7_Ip_EnableRegion_Privileged (u8RegionNum_2(D), bEnable_3(D));
  return;

}



;; Function Mpu_M7_Ip_SetAccessRight (Mpu_M7_Ip_SetAccessRight, funcdef_no=16, decl_uid=5919, cgraph_uid=17, symbol_order=17)

Modification phase of node Mpu_M7_Ip_SetAccessRight/17
Mpu_M7_Ip_SetAccessRight (uint8 u8RegionNum, Mpu_M7_Ip_AccessRightsType eRights)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Mpu_M7_Ip_SetAccessRight_Privileged (u8RegionNum_2(D), eRights_3(D));
  return;

}



;; Function Mpu_M7_Ip_GetErrorDetails (Mpu_M7_Ip_GetErrorDetails, funcdef_no=17, decl_uid=5921, cgraph_uid=18, symbol_order=18)

Modification phase of node Mpu_M7_Ip_GetErrorDetails/18
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


