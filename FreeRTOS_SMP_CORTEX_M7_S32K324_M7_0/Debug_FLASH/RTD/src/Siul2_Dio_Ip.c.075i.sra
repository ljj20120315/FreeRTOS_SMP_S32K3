Creating summary for Siul2_Dio_Ip_MaskedWritePins/11:
  Descriptor for parameter 0 u8Siul2InstanceD.6285
    not a candidate for splitting
  Descriptor for parameter 1 u8PortIdD.6286
    not a candidate for splitting
  Descriptor for parameter 2 pinsD.6287
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 3 maskD.6288
    (locally) unused
    not a candidate for splitting


Creating summary for Siul2_Dio_Ip_ReadPin/10:
  Descriptor for parameter 0 baseD.6280
    not a candidate for splitting
  Descriptor for parameter 1 pinD.6281
    not a candidate for splitting


Creating summary for Siul2_Dio_Ip_ReadPins/9:
  Descriptor for parameter 0 baseD.6276
    not a candidate for splitting


Creating summary for Siul2_Dio_Ip_TogglePins/8:
  Descriptor for parameter 0 baseD.6272
    not a candidate for splitting
  Descriptor for parameter 1 pinsD.6273
    (locally) unused
    not a candidate for splitting


Creating summary for Siul2_Dio_Ip_ClearPins/7:
  Descriptor for parameter 0 baseD.6268
    not a candidate for splitting
  Descriptor for parameter 1 pinsD.6269
    (locally) unused
    not a candidate for splitting


Creating summary for Siul2_Dio_Ip_SetPins/6:
  Descriptor for parameter 0 baseD.6264
    not a candidate for splitting
  Descriptor for parameter 1 pinsD.6265
    (locally) unused
    not a candidate for splitting


Creating summary for Siul2_Dio_Ip_GetPinsOutput/5:
  Descriptor for parameter 0 baseD.6260
    not a candidate for splitting


Creating summary for Siul2_Dio_Ip_WritePins/4:
  Descriptor for parameter 0 baseD.6256
    not a candidate for splitting
  Descriptor for parameter 1 pinsD.6257
    (locally) unused
    not a candidate for splitting


Creating summary for Siul2_Dio_Ip_WritePin/3:
  Descriptor for parameter 0 baseD.6250
    not a candidate for splitting
  Descriptor for parameter 1 pinD.6251
    not a candidate for splitting
  Descriptor for parameter 2 valueD.6252
    not a candidate for splitting


Creating summary for Siul2_Dio_Ip_Rev_Bit_16/2:
  Descriptor for parameter 0 valueD.6242
    not a candidate for splitting



========== IPA-SRA IPA stage ==========

Summary for node Siul2_Dio_Ip_MaskedWritePins/11:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 3:
    (locally) unused
    not a candidate for splitting

  Summary for edge Siul2_Dio_Ip_MaskedWritePins/11->Siul2_Dio_Ip_Rev_Bit_16/2:
    Parameter 0:
      Scalar param sources: 2
  Summary for edge Siul2_Dio_Ip_MaskedWritePins/11->Siul2_Dio_Ip_Rev_Bit_16/2:
    Parameter 0:
      Scalar param sources: 3

Summary for node Siul2_Dio_Ip_ReadPin/10:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting

  Summary for edge Siul2_Dio_Ip_ReadPin/10->Siul2_Dio_Ip_Rev_Bit_16/2:
    return value used only to compute caller return value

Summary for node Siul2_Dio_Ip_ReadPins/9:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge Siul2_Dio_Ip_ReadPins/9->Siul2_Dio_Ip_Rev_Bit_16/2:
    return value used only to compute caller return value

Summary for node Siul2_Dio_Ip_TogglePins/8:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    (locally) unused
    not a candidate for splitting

  Summary for edge Siul2_Dio_Ip_TogglePins/8->Siul2_Dio_Ip_Rev_Bit_16/2:
    Parameter 0:
      Scalar param sources: 1

Summary for node Siul2_Dio_Ip_ClearPins/7:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    (locally) unused
    not a candidate for splitting

  Summary for edge Siul2_Dio_Ip_ClearPins/7->Siul2_Dio_Ip_Rev_Bit_16/2:
    Parameter 0:
      Scalar param sources: 1

Summary for node Siul2_Dio_Ip_SetPins/6:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    (locally) unused
    not a candidate for splitting

  Summary for edge Siul2_Dio_Ip_SetPins/6->Siul2_Dio_Ip_Rev_Bit_16/2:
    Parameter 0:
      Scalar param sources: 1

Summary for node Siul2_Dio_Ip_GetPinsOutput/5:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge Siul2_Dio_Ip_GetPinsOutput/5->Siul2_Dio_Ip_Rev_Bit_16/2:
    return value used only to compute caller return value

Summary for node Siul2_Dio_Ip_WritePins/4:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    (locally) unused
    not a candidate for splitting

  Summary for edge Siul2_Dio_Ip_WritePins/4->Siul2_Dio_Ip_Rev_Bit_16/2:
    Parameter 0:
      Scalar param sources: 1

Summary for node Siul2_Dio_Ip_WritePin/3:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting

  Summary for edge Siul2_Dio_Ip_WritePin/3->SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01/13:
    return value ignored
  Summary for edge Siul2_Dio_Ip_WritePin/3->SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/12:
    return value ignored

Summary for node Siul2_Dio_Ip_Rev_Bit_16/2:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting



Function Siul2_Dio_Ip_WritePin/3 disqualified because it cannot be made local.
Function Siul2_Dio_Ip_WritePins/4 disqualified because it cannot be made local.
Function Siul2_Dio_Ip_GetPinsOutput/5 disqualified because it cannot be made local.
Function Siul2_Dio_Ip_SetPins/6 disqualified because it cannot be made local.
Function Siul2_Dio_Ip_ClearPins/7 disqualified because it cannot be made local.
Function Siul2_Dio_Ip_TogglePins/8 disqualified because it cannot be made local.
Function Siul2_Dio_Ip_ReadPins/9 disqualified because it cannot be made local.
Function Siul2_Dio_Ip_ReadPin/10 disqualified because it cannot be made local.
Function Siul2_Dio_Ip_MaskedWritePins/11 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01/13 (SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01) @06211d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Siul2_Dio_Ip_WritePin/3 (2657777 (estimated locally),0.12 per call) 
  Calls: 
SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/12 (SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01) @06211c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Siul2_Dio_Ip_WritePin/3 (2657777 (estimated locally),0.12 per call) 
  Calls: 
Siul2_Dio_Ip_MaskedWritePins/11 (Siul2_Dio_Ip_MaskedWritePins) @062117e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Siul2_Dio_Ip_au32BaseAdresses/1 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Siul2_Dio_Ip_Rev_Bit_16/2 (1073741824 (estimated locally),1.00 per call) Siul2_Dio_Ip_Rev_Bit_16/2 (1073741824 (estimated locally),1.00 per call) 
Siul2_Dio_Ip_ReadPin/10 (Siul2_Dio_Ip_ReadPin) @06211540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: Siul2_Dio_Ip_Rev_Bit_16/2 (5315554 (estimated locally),0.25 per call) 
Siul2_Dio_Ip_ReadPins/9 (Siul2_Dio_Ip_ReadPins) @062112a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: Siul2_Dio_Ip_Rev_Bit_16/2 (10631108 (estimated locally),0.50 per call) 
Siul2_Dio_Ip_TogglePins/8 (Siul2_Dio_Ip_TogglePins) @06211000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: Siul2_Dio_Ip_Rev_Bit_16/2 (10631108 (estimated locally),0.50 per call) 
Siul2_Dio_Ip_ClearPins/7 (Siul2_Dio_Ip_ClearPins) @05f0ec40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: Siul2_Dio_Ip_Rev_Bit_16/2 (10631108 (estimated locally),0.50 per call) 
Siul2_Dio_Ip_SetPins/6 (Siul2_Dio_Ip_SetPins) @05f0e700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: Siul2_Dio_Ip_Rev_Bit_16/2 (10631108 (estimated locally),0.50 per call) 
Siul2_Dio_Ip_GetPinsOutput/5 (Siul2_Dio_Ip_GetPinsOutput) @05f0ee00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: Siul2_Dio_Ip_Rev_Bit_16/2 (10631108 (estimated locally),0.50 per call) 
Siul2_Dio_Ip_WritePins/4 (Siul2_Dio_Ip_WritePins) @05f0eb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: Siul2_Dio_Ip_Rev_Bit_16/2 (10631108 (estimated locally),0.50 per call) 
Siul2_Dio_Ip_WritePin/3 (Siul2_Dio_Ip_WritePin) @05f0e8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01/13 (2657777 (estimated locally),0.12 per call) SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/12 (2657777 (estimated locally),0.12 per call) 
Siul2_Dio_Ip_Rev_Bit_16/2 (Siul2_Dio_Ip_Rev_Bit_16) @05f0e620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:119292720 (estimated locally) body local optimize_size
  Called by: Siul2_Dio_Ip_MaskedWritePins/11 (1073741824 (estimated locally),1.00 per call) Siul2_Dio_Ip_MaskedWritePins/11 (1073741824 (estimated locally),1.00 per call) Siul2_Dio_Ip_ReadPin/10 (5315554 (estimated locally),0.25 per call) Siul2_Dio_Ip_ReadPins/9 (10631108 (estimated locally),0.50 per call) Siul2_Dio_Ip_TogglePins/8 (10631108 (estimated locally),0.50 per call) Siul2_Dio_Ip_ClearPins/7 (10631108 (estimated locally),0.50 per call) Siul2_Dio_Ip_SetPins/6 (10631108 (estimated locally),0.50 per call) Siul2_Dio_Ip_GetPinsOutput/5 (10631108 (estimated locally),0.50 per call) Siul2_Dio_Ip_WritePins/4 (10631108 (estimated locally),0.50 per call) 
  Calls: 
Siul2_Dio_Ip_au32BaseAdresses/1 (Siul2_Dio_Ip_au32BaseAdresses) @05f0dd38
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Siul2_Dio_Ip_MaskedWritePins/11 (read) 
  Availability: available
  Varpool flags: initialized
Siul2_Dio_Ip_MaskedWritePins (uint8 u8Siul2Instance, uint8 u8PortId, Siul2_Dio_Ip_PinsChannelType pins, Siul2_Dio_Ip_PinsChannelType mask)
{
  uint32 pinsRev;
  uint32 maskRev;
  struct SIUL2_Type * base;
  int _1;
  long unsigned int _2;
  short unsigned int _3;
  short unsigned int _4;
  long unsigned int _5;
  int _6;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) u8Siul2Instance_8(D);
  _2 = Siul2_Dio_Ip_au32BaseAdresses[_1];
  base_10 = (struct SIUL2_Type *) _2;
  # DEBUG base => base_10
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = Siul2_Dio_Ip_Rev_Bit_16 (mask_11(D));
  maskRev_12 = (uint32) _3;
  # DEBUG maskRev => maskRev_12
  # DEBUG BEGIN_STMT
  _4 = Siul2_Dio_Ip_Rev_Bit_16 (pins_13(D));
  pinsRev_14 = (uint32) _4;
  # DEBUG pinsRev => pinsRev_14
  # DEBUG BEGIN_STMT
  _5 = maskRev_12 << 16;
  _6 = (int) u8PortId_15(D);
  _7 = _5 | pinsRev_14;
  base_10->MPGPDO[_6] ={v} _7;
  return;

}


Siul2_Dio_Ip_ReadPin (const struct Siul2_Dio_Ip_GpioType * const base, Siul2_Dio_Ip_PinsChannelType pin)
{
  volatile boolean x;
  volatile boolean x;
  Siul2_Dio_Ip_PinsLevelType returnValue;
  _Bool _1;
  _Bool _2;
  short unsigned int _3;
  short unsigned int _4;
  int _5;
  int _6;
  int _7;
  int _8;
  int _9;
  _Bool x.0_13;
  _Bool x.0_15;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _1 = base_10(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_15 ={v} x;
  if (x.0_15 != 0)
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
  _2 = pin_12(D) <= 15;
  x ={v} _2;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_13 ={v} x;
  if (x.0_13 != 0)
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
  # DEBUG returnValue => 0
  # DEBUG BEGIN_STMT
  _3 ={v} base_10(D)->PGPDI;
  _4 = Siul2_Dio_Ip_Rev_Bit_16 (_3);
  _5 = (int) _4;
  _6 = (int) pin_12(D);
  _7 = 1 << _6;
  _8 = _5 & _7;
  _9 = _8 >> _6;
  returnValue_14 = (Siul2_Dio_Ip_PinsLevelType) _9;
  # DEBUG returnValue => returnValue_14
  # DEBUG BEGIN_STMT
  return returnValue_14;

}


Siul2_Dio_Ip_ReadPins (const struct Siul2_Dio_Ip_GpioType * const base)
{
  volatile boolean x;
  Siul2_Dio_Ip_PinsChannelType returnValue;
  _Bool _1;
  short unsigned int _2;
  _Bool x.0_5;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _1 = base_3(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_5 ={v} x;
  if (x.0_5 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  # DEBUG returnValue => 0
  # DEBUG BEGIN_STMT
  _2 ={v} base_3(D)->PGPDI;
  returnValue_6 = Siul2_Dio_Ip_Rev_Bit_16 (_2);
  # DEBUG returnValue => returnValue_6
  # DEBUG BEGIN_STMT
  return returnValue_6;

}


Siul2_Dio_Ip_TogglePins (struct Siul2_Dio_Ip_GpioType * const base, Siul2_Dio_Ip_PinsChannelType pins)
{
  volatile boolean x;
  _Bool _1;
  short unsigned int _2;
  short unsigned int _3;
  _Bool x.0_7;
  short unsigned int _8;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _1 = base_4(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_7 ={v} x;
  if (x.0_7 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _8 = Siul2_Dio_Ip_Rev_Bit_16 (pins_6(D));
  _2 ={v} base_4(D)->PGPDO;
  _3 = _2 ^ _8;
  base_4(D)->PGPDO ={v} _3;
  return;

}


Siul2_Dio_Ip_ClearPins (struct Siul2_Dio_Ip_GpioType * const base, Siul2_Dio_Ip_PinsChannelType pins)
{
  volatile boolean x;
  _Bool _1;
  short unsigned int _2;
  short unsigned int _3;
  short unsigned int _4;
  _Bool x.0_8;
  short unsigned int _9;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _1 = base_5(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_8 ={v} x;
  if (x.0_8 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = Siul2_Dio_Ip_Rev_Bit_16 (pins_7(D));
  _9 = ~_2;
  _3 ={v} base_5(D)->PGPDO;
  _4 = _3 & _9;
  base_5(D)->PGPDO ={v} _4;
  return;

}


Siul2_Dio_Ip_SetPins (struct Siul2_Dio_Ip_GpioType * const base, Siul2_Dio_Ip_PinsChannelType pins)
{
  volatile boolean x;
  _Bool _1;
  short unsigned int _2;
  short unsigned int _3;
  _Bool x.0_7;
  short unsigned int _8;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _1 = base_4(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_7 ={v} x;
  if (x.0_7 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _8 = Siul2_Dio_Ip_Rev_Bit_16 (pins_6(D));
  _2 ={v} base_4(D)->PGPDO;
  _3 = _2 | _8;
  base_4(D)->PGPDO ={v} _3;
  return;

}


Siul2_Dio_Ip_GetPinsOutput (const struct Siul2_Dio_Ip_GpioType * const base)
{
  volatile boolean x;
  Siul2_Dio_Ip_PinsChannelType returnValue;
  _Bool _1;
  short unsigned int _2;
  _Bool x.0_5;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _1 = base_3(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_5 ={v} x;
  if (x.0_5 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  # DEBUG returnValue => 0
  # DEBUG BEGIN_STMT
  _2 ={v} base_3(D)->PGPDO;
  returnValue_6 = Siul2_Dio_Ip_Rev_Bit_16 (_2);
  # DEBUG returnValue => returnValue_6
  # DEBUG BEGIN_STMT
  return returnValue_6;

}


Siul2_Dio_Ip_WritePins (struct Siul2_Dio_Ip_GpioType * const base, Siul2_Dio_Ip_PinsChannelType pins)
{
  volatile boolean x;
  _Bool _1;
  short unsigned int _2;
  _Bool x.0_6;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _1 = base_3(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_6 ={v} x;
  if (x.0_6 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  _2 = Siul2_Dio_Ip_Rev_Bit_16 (pins_5(D));
  base_3(D)->PGPDO ={v} _2;
  return;

}


Siul2_Dio_Ip_WritePin (struct Siul2_Dio_Ip_GpioType * const base, Siul2_Dio_Ip_PinsChannelType pin, Siul2_Dio_Ip_PinsLevelType value)
{
  volatile boolean x;
  volatile boolean x;
  volatile boolean x;
  Siul2_Dio_Ip_PinsChannelType pinsValues;
  _Bool _1;
  _Bool _2;
  _Bool _3;
  unsigned int _4;
  unsigned int _5;
  int _6;
  short unsigned int _7;
  short unsigned int _8;
  unsigned int _9;
  unsigned int _10;
  short unsigned int _11;
  unsigned char _14;
  _Bool x.0_23;
  _Bool x.0_24;
  _Bool x.0_25;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _1 = base_12(D) != 0B;
  x ={v} _1;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_25 ={v} x;
  if (x.0_25 != 0)
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
  _2 = pin_15(D) <= 15;
  x ={v} _2;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_24 ={v} x;
  if (x.0_24 != 0)
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
  _3 = value_16(D) <= 1;
  x ={v} _3;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_23 ={v} x;
  if (x.0_23 != 0)
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
  # DEBUG BEGIN_STMT
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01 ();
  # DEBUG BEGIN_STMT
  pinsValues_18 ={v} base_12(D)->PGPDO;
  # DEBUG pinsValues => pinsValues_18
  # DEBUG BEGIN_STMT
  _4 = (unsigned int) pin_15(D);
  _5 = 15 - _4;
  _6 = 1 << _5;
  _7 = (short unsigned int) _6;
  _8 = ~_7;
  pinsValues_19 = _8 & pinsValues_18;
  # DEBUG pinsValues => pinsValues_19
  # DEBUG BEGIN_STMT
  _14 = value_16(D) & 1;
  _9 = (unsigned int) _14;
  _10 = _9 << _5;
  _11 = (short unsigned int) _10;
  pinsValues_20 = _11 | pinsValues_19;
  # DEBUG pinsValues => pinsValues_20
  # DEBUG BEGIN_STMT
  base_12(D)->PGPDO ={v} pinsValues_20;
  # DEBUG BEGIN_STMT
  SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01 ();
  return;

}


Siul2_Dio_Ip_Rev_Bit_16 (uint16 value)
{
  uint16 ret;
  uint8 i;
  int _1;
  int _2;
  int _3;
  unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  unsigned int _8;
  short unsigned int _9;
  int _11;
  unsigned int _12;
  unsigned int _13;
  unsigned int _14;
  short unsigned int _15;
  short unsigned int _16;

  <bb 2> [local count: 119292720]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 954449105]:
  # DEBUG BEGIN_STMT
  _1 = (int) value_20(D);
  _2 = (int) i_17;
  _3 = _1 >> _2;
  _4 = (unsigned int) _3;
  _5 = _4 & 1;
  _6 = (unsigned int) i_17;
  _7 = 15 - _6;
  _8 = _5 << _7;
  _9 = (short unsigned int) _8;
  _11 = _1 << _2;
  _12 = (unsigned int) _11;
  _13 = _12 & 32768;
  _14 = _13 >> _7;
  _15 = (short unsigned int) _14;
  _16 = _9 | _15;
  ret_21 = _16 | ret_18;
  # DEBUG ret => ret_21
  # DEBUG BEGIN_STMT
  i_22 = i_17 + 1;
  # DEBUG i => i_22

  <bb 4> [local count: 1073741824]:
  # i_17 = PHI <0(2), i_22(3)>
  # ret_18 = PHI <0(2), ret_21(3)>
  # DEBUG ret => ret_18
  # DEBUG i => i_17
  # DEBUG BEGIN_STMT
  if (i_17 != 8)
    goto <bb 3>; [88.89%]
  else
    goto <bb 5>; [11.11%]

  <bb 5> [local count: 119292720]:
  # ret_10 = PHI <ret_18(4)>
  # DEBUG BEGIN_STMT
  return ret_10;

}


