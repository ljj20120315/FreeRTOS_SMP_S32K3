
IPA constant propagation start:
Determining dynamic type for call: Xrdc_Ip_GetDetailError (u32Instance_5(D), _19, pXrdcDomainIDErrorStatus_7(D));
  Starting walk at: Xrdc_Ip_GetDetailError (u32Instance_5(D), _19, pXrdcDomainIDErrorStatus_7(D));
  instance pointer: pXrdcDomainIDErrorStatus_7(D)  Outer instance pointer: pXrdcDomainIDErrorStatus_7(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Xrdc_Ip_GetDetailError (u32Instance_5(D), u8counter_6, pXrdcDomainIDErrorStatus_7(D));
  Function call may change dynamic type:Xrdc_Ip_GetDetailError (u32Instance_5(D), _19, pXrdcDomainIDErrorStatus_7(D));
Determining dynamic type for call: Xrdc_Ip_GetDetailError (u32Instance_5(D), u8counter_6, pXrdcDomainIDErrorStatus_7(D));
  Starting walk at: Xrdc_Ip_GetDetailError (u32Instance_5(D), u8counter_6, pXrdcDomainIDErrorStatus_7(D));
  instance pointer: pXrdcDomainIDErrorStatus_7(D)  Outer instance pointer: pXrdcDomainIDErrorStatus_7(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Xrdc_Ip_GetDetailError (u32Instance_5(D), u8counter_6, pXrdcDomainIDErrorStatus_7(D));
Determining dynamic type for call: Xrdc_Domain_Init (_28);
  Starting walk at: Xrdc_Domain_Init (_28);
  instance pointer: _28  Outer instance pointer: _28 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Xrdc_Memory_Config_Descriptor (_16);
  Function call may change dynamic type:Xrdc_Peripheral_Access_Config (_22);
  Function call may change dynamic type:Xrdc_Domain_Init (_28);
Determining dynamic type for call: Xrdc_Peripheral_Access_Config (_22);
  Starting walk at: Xrdc_Peripheral_Access_Config (_22);
  instance pointer: _22  Outer instance pointer: _22 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Xrdc_Memory_Config_Descriptor (_16);
  Function call may change dynamic type:Xrdc_Peripheral_Access_Config (_22);
Determining dynamic type for call: Xrdc_Memory_Config_Descriptor (_16);
  Starting walk at: Xrdc_Memory_Config_Descriptor (_16);
  instance pointer: _16  Outer instance pointer: _16 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Xrdc_Memory_Config_Descriptor (_16);
Determining dynamic type for call: Xrdc_Ip_GetDomainIDErrorStatus_Privileged (u32Instance_2(D), pXrdcDomainIDErrorStatus_3(D));
  Starting walk at: Xrdc_Ip_GetDomainIDErrorStatus_Privileged (u32Instance_2(D), pXrdcDomainIDErrorStatus_3(D));
  instance pointer: pXrdcDomainIDErrorStatus_3(D)  Outer instance pointer: pXrdcDomainIDErrorStatus_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Xrdc_Ip_Init_Privileged (pXrdcConfig_2(D));
  Starting walk at: Xrdc_Ip_Init_Privileged (pXrdcConfig_2(D));
  instance pointer: pXrdcConfig_2(D)  Outer instance pointer: pXrdcConfig_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0 (u32Instance_4(D), pXrdcDomainIDErrorStatus_6(D));
  Starting walk at: Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0 (u32Instance_4(D), pXrdcDomainIDErrorStatus_6(D));
  instance pointer: pXrdcDomainIDErrorStatus_6(D)  Outer instance pointer: pXrdcDomainIDErrorStatus_6(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Xrdc_Ip_Init_Privileged.part.0 (pXrdcConfig_7(D));
  Starting walk at: Xrdc_Ip_Init_Privileged.part.0 (pXrdcConfig_7(D));
  instance pointer: pXrdcConfig_7(D)  Outer instance pointer: pXrdcConfig_7(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0/42:
    callsite  Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0/42 -> Xrdc_Ip_GetDetailError/13 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0/42 -> Xrdc_Ip_GetDetailError/13 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0x1f
         VR  [16, 31]
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Xrdc_Ip_LockProcessID_Privileged.part.0/40:
  Jump functions of caller  Xrdc_Ip_SetProcessID_Privileged.part.0/37:
    callsite  Xrdc_Ip_SetProcessID_Privileged.part.0/37 -> SchM_Enter_Rm_RM_EXCLUSIVE_AREA_00/20 : 
       no arg info
    callsite  Xrdc_Ip_SetProcessID_Privileged.part.0/37 -> SchM_Exit_Rm_RM_EXCLUSIVE_AREA_00/21 : 
       no arg info
    callsite  Xrdc_Ip_SetProcessID_Privileged.part.0/37 -> SchM_Enter_Rm_RM_EXCLUSIVE_AREA_00/20 : 
       no arg info
    callsite  Xrdc_Ip_SetProcessID_Privileged.part.0/37 -> SchM_Exit_Rm_RM_EXCLUSIVE_AREA_00/21 : 
       no arg info
  Jump functions of caller  Xrdc_Ip_Init_Privileged.part.0/33:
    callsite  Xrdc_Ip_Init_Privileged.part.0/33 -> Xrdc_Memory_Config_Descriptor/3 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Xrdc_Ip_Init_Privileged.part.0/33 -> Xrdc_Peripheral_Access_Config/4 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Xrdc_Ip_Init_Privileged.part.0/33 -> Xrdc_Domain_Init/5 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SchM_Exit_Rm_RM_EXCLUSIVE_AREA_00/21:
  Jump functions of caller  SchM_Enter_Rm_RM_EXCLUSIVE_AREA_00/20:
  Jump functions of caller  Xrdc_Ip_GetDomainIDErrorStatus/19:
    callsite  Xrdc_Ip_GetDomainIDErrorStatus/19 -> Xrdc_Ip_GetDomainIDErrorStatus_Privileged/14 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Xrdc_Ip_LockProcessID/18:
    callsite  Xrdc_Ip_LockProcessID/18 -> Xrdc_Ip_LockProcessID_Privileged/12 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Xrdc_Ip_SetProcessID/17:
    callsite  Xrdc_Ip_SetProcessID/17 -> Xrdc_Ip_SetProcessID_Privileged/11 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Xrdc_Ip_GetDomainID/16:
    callsite  Xrdc_Ip_GetDomainID/16 -> Xrdc_Ip_GetDomainID_Privileged/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Xrdc_Ip_Init/15:
    callsite  Xrdc_Ip_Init/15 -> Xrdc_Ip_Init_Privileged/10 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Xrdc_Ip_GetDomainIDErrorStatus_Privileged/14:
    callsite  Xrdc_Ip_GetDomainIDErrorStatus_Privileged/14 -> Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0/42 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Xrdc_Ip_GetDetailError/13:
  Jump functions of caller  Xrdc_Ip_LockProcessID_Privileged/12:
    callsite  Xrdc_Ip_LockProcessID_Privileged/12 -> Xrdc_Ip_LockProcessID_Privileged.part.0/40 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Xrdc_Ip_SetProcessID_Privileged/11:
    callsite  Xrdc_Ip_SetProcessID_Privileged/11 -> Xrdc_Ip_SetProcessID_Privileged.part.0/37 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Xrdc_Ip_Init_Privileged/10:
    callsite  Xrdc_Ip_Init_Privileged/10 -> Xrdc_Ip_Init_Privileged.part.0/33 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Xrdc_Ip_GetDomainID_Privileged/9:
  Jump functions of caller  Xrdc_Get_Secure_Attribute/8:
  Jump functions of caller  Xrdc_Get_Priviledge_Attribute/7:
  Jump functions of caller  Xrdc_Domain_Init/5:
    callsite  Xrdc_Domain_Init/5 -> Xrdc_Get_Priviledge_Attribute/7 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Xrdc_Domain_Init/5 -> Xrdc_Get_Secure_Attribute/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Xrdc_Peripheral_Access_Config/4:
  Jump functions of caller  Xrdc_Memory_Config_Descriptor/3:

 Propagating constants:

Not considering Xrdc_Ip_GetDomainIDErrorStatus/19 for cloning; -fipa-cp-clone disabled.
Not considering Xrdc_Ip_LockProcessID/18 for cloning; -fipa-cp-clone disabled.
Not considering Xrdc_Ip_SetProcessID/17 for cloning; -fipa-cp-clone disabled.
Not considering Xrdc_Ip_GetDomainID/16 for cloning; -fipa-cp-clone disabled.
Not considering Xrdc_Ip_Init/15 for cloning; -fipa-cp-clone disabled.
Not considering Xrdc_Ip_GetDomainIDErrorStatus_Privileged/14 for cloning; -fipa-cp-clone disabled.
Not considering Xrdc_Ip_LockProcessID_Privileged/12 for cloning; -fipa-cp-clone disabled.
Not considering Xrdc_Ip_SetProcessID_Privileged/11 for cloning; -fipa-cp-clone disabled.
Not considering Xrdc_Ip_Init_Privileged/10 for cloning; -fipa-cp-clone disabled.
Not considering Xrdc_Ip_GetDomainID_Privileged/9 for cloning; -fipa-cp-clone disabled.

overall_size: 531
 - context independent values, size: 50, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 7, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0/42:
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
  Node: Xrdc_Ip_LockProcessID_Privileged.part.0/40:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: Xrdc_Ip_SetProcessID_Privileged.part.0/37:
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
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: Xrdc_Ip_Init_Privileged.part.0/33:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: Xrdc_Ip_GetDomainIDErrorStatus/19:
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
  Node: Xrdc_Ip_LockProcessID/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Xrdc_Ip_SetProcessID/17:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Xrdc_Ip_GetDomainID/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Xrdc_Ip_Init/15:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Xrdc_Ip_GetDomainIDErrorStatus_Privileged/14:
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
  Node: Xrdc_Ip_GetDetailError/13:
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
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: Xrdc_Ip_LockProcessID_Privileged/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Xrdc_Ip_SetProcessID_Privileged/11:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Xrdc_Ip_Init_Privileged/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Xrdc_Ip_GetDomainID_Privileged/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: Xrdc_Get_Secure_Attribute/8:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: Xrdc_Get_Priviledge_Attribute/7:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: Xrdc_Domain_Init/5:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: Xrdc_Peripheral_Access_Config/4:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: Xrdc_Memory_Config_Descriptor/3:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE

IPA decision stage:

 - Creating a specialized node of Xrdc_Ip_GetDetailError/13 for all known contexts.

IPA constant propagation end

Reclaiming functions: Xrdc_Ip_GetDetailError/13
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Xrdc_Ip_GetDetailError.constprop.0/43 (Xrdc_Ip_GetDetailError.constprop) @06ec5460
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of Xrdc_Ip_GetDetailError/13
  Availability: local
  Function flags: count:1073741823 (estimated locally) local optimize_size
  Called by: Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0/42 (955630225 (estimated locally),8.09 per call) Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0/42 (955630225 (estimated locally),8.09 per call) 
  Calls: 
Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0/42 (Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0) @06d56540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local split_part optimize_size
  Called by: Xrdc_Ip_GetDomainIDErrorStatus_Privileged/14 (5315554 (estimated locally),0.25 per call) 
  Calls: Xrdc_Ip_GetDetailError.constprop.0/43 (955630225 (estimated locally),8.09 per call) Xrdc_Ip_GetDetailError.constprop.0/43 (955630225 (estimated locally),8.09 per call) 
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
  Calls: Xrdc_Ip_GetDomainIDErrorStatus_Privileged.part.0/42 (5315554 (estimated locally),0.25 per call) 
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

;; Function Xrdc_Ip_GetDetailError.constprop (Xrdc_Ip_GetDetailError.constprop.0, funcdef_no=23, decl_uid=6239, cgraph_uid=42, symbol_order=43)

Modification phase of node Xrdc_Ip_GetDetailError.constprop/43
Xrdc_Ip_GetDetailError.constprop (uint8 u8SubInstance, struct Xrdc_Ip_DomainIDErrStatusType * pXrdcDomainIDErrorStatus)
{
  uint32 u32ErrorAcces;
  uint32 u32ErrorState;
  uint32 u32ErrorStatus;
  volatile uint32 u32DomainIDAccess;
  uint32 u32Instance;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  volatile uint32 * _5;
  int _8;
  int _10;
  int _11;
  long unsigned int _12;
  long unsigned int u32DomainIDAccess.3_13;
  long unsigned int u32DomainIDAccess.4_14;
  long unsigned int _15;
  volatile uint32 * _16;
  int _17;
  long unsigned int _18;
  long unsigned int _19;
  volatile uint32 * _20;
  long unsigned int _21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;
  long unsigned int _26;
  long unsigned int _27;
  unsigned int _28;

  <bb 16> [local count: 1073741823]:
  # DEBUG D#4 s=> u32Instance
  # DEBUG u32Instance => D#4

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = (long unsigned int) u8SubInstance_1(D);
  _3 = _2 << 4;
  _4 = _3 + 1076331524;
  _5 = (volatile uint32 *) _4;
  u32ErrorStatus_6 ={v} *_5;
  # DEBUG u32ErrorStatus => u32ErrorStatus_6
  # DEBUG BEGIN_STMT
  u32ErrorState_7 = u32ErrorStatus_6 >> 30;
  # DEBUG u32ErrorState => u32ErrorState_7
  # DEBUG BEGIN_STMT
  if (u32ErrorState_7 <= 1)
    goto <bb 3>; [41.00%]
  else
    goto <bb 4>; [59.00%]

  <bb 3> [local count: 440234143]:
  # DEBUG BEGIN_STMT
  _8 = (int) u8SubInstance_1(D);
  pXrdcDomainIDErrorStatus_9(D)->ErrorStatus[_8].ErrState = 0;
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 633507680]:
  # DEBUG BEGIN_STMT
  if (u32ErrorState_7 == 2)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 215392613]:
  # DEBUG BEGIN_STMT
  _10 = (int) u8SubInstance_1(D);
  pXrdcDomainIDErrorStatus_9(D)->ErrorStatus[_10].ErrState = 1;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 418115066]:
  # DEBUG BEGIN_STMT
  _11 = (int) u8SubInstance_1(D);
  pXrdcDomainIDErrorStatus_9(D)->ErrorStatus[_11].ErrState = 2;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  if (u32ErrorState_7 > 1)
    goto <bb 8>; [59.00%]
  else
    goto <bb 15>; [41.00%]

  <bb 8> [local count: 633507681]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _12 ={v} MEM[(volatile uint32 *)1076330740B];
  u32DomainIDAccess ={v} _12;
  # DEBUG BEGIN_STMT
  u32DomainIDAccess.3_13 ={v} u32DomainIDAccess;
  if (u32DomainIDAccess.3_13 <= 2)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 316753840]:
  # DEBUG BEGIN_STMT
  u32DomainIDAccess.4_14 ={v} u32DomainIDAccess;
  pXrdcDomainIDErrorStatus_9(D)->DomainIDAccessError = u32DomainIDAccess.4_14;
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 316753840]:
  # DEBUG BEGIN_STMT
  pXrdcDomainIDErrorStatus_9(D)->DomainIDAccessError = 255;

  <bb 11> [local count: 633507681]:
  # DEBUG BEGIN_STMT
  _15 = _3 + 1076331520;
  _16 = (volatile uint32 *) _15;
  _17 = (int) u8SubInstance_1(D);
  _18 ={v} *_16;
  pXrdcDomainIDErrorStatus_9(D)->ErrorStatus[_17].u32AddError = _18;
  # DEBUG BEGIN_STMT
  _19 = _3 + 1076331528;
  _20 = (volatile uint32 *) _19;
  _21 ={v} *_20;
  pXrdcDomainIDErrorStatus_9(D)->ErrorStatus[_17].u32AddErrorRemain = _21;
  # DEBUG BEGIN_STMT
  _22 = u32ErrorStatus_6 >> 24;
  _23 = _22 & 7;
  pXrdcDomainIDErrorStatus_9(D)->ErrorStatus[_17].u32ErrPort = _23;
  # DEBUG BEGIN_STMT
  _24 = u32ErrorStatus_6 >> 11;
  u32ErrorAcces_25 = _24 & 1;
  # DEBUG u32ErrorAcces => u32ErrorAcces_25
  # DEBUG BEGIN_STMT
  if (u32ErrorAcces_25 == 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 316753840]:
  # DEBUG BEGIN_STMT
  pXrdcDomainIDErrorStatus_9(D)->ErrorStatus[_17].ErrAccess = 1;
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 316753840]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pXrdcDomainIDErrorStatus_9(D)->ErrorStatus[_17].ErrAccess = 2;

  <bb 14> [local count: 633507681]:
  # DEBUG BEGIN_STMT
  _26 = u32ErrorStatus_6 >> 8;
  _27 = _26 & 7;
  # DEBUG u32ErrorAttribute => _27
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG errorStatus => 0
  # DEBUG BEGIN_STMT
  _28 = _27 + 1;
  # DEBUG errorStatus => _28
  # DEBUG BEGIN_STMT
  # DEBUG u32ErrorAttribute => NULL
  # DEBUG errorStatus => NULL
  pXrdcDomainIDErrorStatus_9(D)->ErrorStatus[_17].ErrAttribute = _28;

  <bb 15> [local count: 1073741824]:
  return;

}



;; Function Xrdc_Ip_GetDomainID_Privileged (Xrdc_Ip_GetDomainID_Privileged, funcdef_no=7, decl_uid=5968, cgraph_uid=8, symbol_order=9)

Modification phase of node Xrdc_Ip_GetDomainID_Privileged/9
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



;; Function Xrdc_Ip_Init_Privileged (Xrdc_Ip_Init_Privileged, funcdef_no=8, decl_uid=5966, cgraph_uid=9, symbol_order=10)

Modification phase of node Xrdc_Ip_Init_Privileged/10
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



;; Function Xrdc_Ip_SetProcessID_Privileged (Xrdc_Ip_SetProcessID_Privileged, funcdef_no=9, decl_uid=5975, cgraph_uid=10, symbol_order=11)

Modification phase of node Xrdc_Ip_SetProcessID_Privileged/11
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



;; Function Xrdc_Ip_LockProcessID_Privileged (Xrdc_Ip_LockProcessID_Privileged, funcdef_no=10, decl_uid=5977, cgraph_uid=11, symbol_order=12)

Modification phase of node Xrdc_Ip_LockProcessID_Privileged/12
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



;; Function Xrdc_Ip_GetDomainIDErrorStatus_Privileged (Xrdc_Ip_GetDomainIDErrorStatus_Privileged, funcdef_no=12, decl_uid=5971, cgraph_uid=13, symbol_order=14)

Modification phase of node Xrdc_Ip_GetDomainIDErrorStatus_Privileged/14
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



;; Function Xrdc_Ip_Init (Xrdc_Ip_Init, funcdef_no=13, decl_uid=5935, cgraph_uid=14, symbol_order=15)

Modification phase of node Xrdc_Ip_Init/15
Xrdc_Ip_Init (const struct Xrdc_Ip_ConfigType * pXrdcConfig)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Xrdc_Ip_Init_Privileged (pXrdcConfig_2(D));
  return;

}



;; Function Xrdc_Ip_GetDomainID (Xrdc_Ip_GetDomainID, funcdef_no=14, decl_uid=5937, cgraph_uid=15, symbol_order=16)

Modification phase of node Xrdc_Ip_GetDomainID/16
Xrdc_Ip_GetDomainID (uint32 u32Instance)
{
  uint32 _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = Xrdc_Ip_GetDomainID_Privileged (u32Instance_2(D));
  return _4;

}



;; Function Xrdc_Ip_SetProcessID (Xrdc_Ip_SetProcessID, funcdef_no=15, decl_uid=5941, cgraph_uid=16, symbol_order=17)

Modification phase of node Xrdc_Ip_SetProcessID/17
Xrdc_Ip_SetProcessID (uint8 u8MasterCore, uint8 u8Pid, Xrdc_Ip_SecureAttributeType eSecureAttr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Xrdc_Ip_SetProcessID_Privileged (u8MasterCore_2(D), u8Pid_3(D), eSecureAttr_4(D));
  return;

}



;; Function Xrdc_Ip_LockProcessID (Xrdc_Ip_LockProcessID, funcdef_no=16, decl_uid=5943, cgraph_uid=17, symbol_order=18)

Modification phase of node Xrdc_Ip_LockProcessID/18
Xrdc_Ip_LockProcessID (uint8 u8MasterCore)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Xrdc_Ip_LockProcessID_Privileged (u8MasterCore_2(D));
  return;

}



;; Function Xrdc_Ip_GetDomainIDErrorStatus (Xrdc_Ip_GetDomainIDErrorStatus, funcdef_no=17, decl_uid=5946, cgraph_uid=18, symbol_order=19)

Modification phase of node Xrdc_Ip_GetDomainIDErrorStatus/19
Xrdc_Ip_GetDomainIDErrorStatus (uint32 u32Instance, struct Xrdc_Ip_DomainIDErrStatusType * pXrdcDomainIDErrorStatus)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Xrdc_Ip_GetDomainIDErrorStatus_Privileged (u32Instance_2(D), pXrdcDomainIDErrorStatus_3(D));
  return;

}


