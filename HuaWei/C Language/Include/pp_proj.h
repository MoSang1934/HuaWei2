
#ifndef _PP_PROJ_H_
#define _PP_PROJ_H_
//***********************************************************************************
// C header for accessing PMAC Global, CSGlobal, Ptr vars
// _PPScriptMode_ for Pmac Script like access global & csglobal
// global Mypvar - access with "Mypvar"
// global Myparray(32) - access with "Myparray(i)"
// csglobal Myqvar - access with "Myqvar(i)" where "i" is Coord #
// csglobal Myqarray(16) - access with "Myqvar(i,j)" where "j" is index
// _EnumMode_ for Pmac enum data type checking on Set & Get global functions
// Example
// global Mypvar
// csglobal Myqvar
// "SetGlobalVar(Myqvar, data)" will give a compile error because its a csglobal var.
// "SetCSGlobalVar(Mypvar, data)" will give a compile error because its a global var.
//************************************************************************************

#ifdef _PPScriptMode_
enum globalP {_globalP_=-1};
enum globalParray {_globalParray_=-1};
enum csglobalQ {_csglobalQ_=-1};
enum csglobalQarray {_csglobalQarray_=-1};

enum ptrM {_ptrM_=-1
,EMC=8402
,SEMC=8403
,ZJP_READY=8404
,ZJP_ALM=8405
,ZJP_TIM=8406
,JZDJ_READY=8407
,JZDJ_ALM=8408
,JZDJ_TIM=8409
,YZ_Z_ALM=8410
,YZ_Z_READY=8411
,ZJ_Z_ALM=8412
,ZJ_Z_READY=8413
,TP_Z_ALM=8414
,TP_Z_READY=8415
,DS_READY=8416
,DS_ALM=8417
,DS_INPOS=8418
,YZXJ_Z_READY=8419
,YZXJ_Z_INPOS=8420
,YZXJ_Z_ALM=8421
,TPXJ_Z_READY=8422
,TPXJ_Z_INPOS=8423
,TPXJ_Z_ALM=8424
,ZJP_FREE=8425
,ZJP_RESET=8426
,JZDJ_FREE=8427
,JZDJ_RESET=8428
,STO_0=8429
,STO_1=8430
,YZ_Z_ENA=8431
,YZ_Z_CLEAR=8432
,ZJ_Z_ENA=8433
,ZJ_Z_CLEAR=8434
,TP_Z_ENA=8435
,TP_Z_CLEAR=8436
,DS_FREE=8437
,DS_RESET=8438
,YZXJ_Z_FREE=8439
,YZXJ_Z_RESET=8440
,TPXJ_Z_FREE=8441
,TPXJ_Z_RESET=8442};
enum ptrMarray {_ptrMarray_=-1
,MotorStatus0=8192
,CoordStatus0=8223
,MotorDesPos=8244
,HomeMotor=8265
,HomeStatus=8293
,HomePolarity=8321
,HTimer=8347
,CtrlWord=8373
,Statusword=8389
,AD=8443};
#define	HomeVel(i)	pshm->P[(8192+i)%MAX_P]
#define	Mtr1MaxSpeed	pshm->P[8213]
#define	Enc1Res	pshm->P[8214]
#define	Mtr1Gear	pshm->P[8215]
#define	Mtr2MaxSpeed	pshm->P[8216]
#define	Enc2Res	pshm->P[8217]
#define	Mtr2Gear	pshm->P[8218]
#define	Mtr3MaxSpeed	pshm->P[8219]
#define	Enc3Res	pshm->P[8220]
#define	Mtr3Gear	pshm->P[8221]
#define	Mtr4MaxSpeed	pshm->P[8222]
#define	Enc4Res	pshm->P[8223]
#define	Mtr4Gear	pshm->P[8224]
#define	Mtr5MaxSpeed	pshm->P[8225]
#define	Enc5Res	pshm->P[8226]
#define	Mtr5Gear	pshm->P[8227]
#define	Mtr6MaxSpeed	pshm->P[8228]
#define	Enc6Res	pshm->P[8229]
#define	Mtr6Gear	pshm->P[8230]
#define	Mtr7MaxSpeed	pshm->P[8231]
#define	Enc7Res	pshm->P[8232]
#define	Mtr7Gear	pshm->P[8233]
#define	Mtr8MaxSpeed	pshm->P[8234]
#define	Enc8Res	pshm->P[8235]
#define	Mtr8Gear	pshm->P[8236]
#define	Mtr9MaxSpeed	pshm->P[8237]
#define	Enc9Res	pshm->P[8238]
#define	Mtr9Gear	pshm->P[8239]
#define	Mtr10MaxSpeed	pshm->P[8240]
#define	Enc10Res	pshm->P[8241]
#define	Mtr10Gear	pshm->P[8242]
#define	Mtr11MaxSpeed	pshm->P[8243]
#define	Enc11Res	pshm->P[8244]
#define	Mtr11Gear	pshm->P[8245]
#define	Mtr12MaxSpeed	pshm->P[8246]
#define	Enc12Res	pshm->P[8247]
#define	Mtr12Gear	pshm->P[8248]
#define	Mtr13MaxSpeed	pshm->P[8249]
#define	Enc13Res	pshm->P[8250]
#define	Mtr13Gear	pshm->P[8251]
#define	Mtr14MaxSpeed	pshm->P[8252]
#define	Enc14Res	pshm->P[8253]
#define	Mtr14Gear	pshm->P[8254]
#define	GlobalAlarmReset	pshm->P[8255]
#ifndef _PP_PROJ_HDR_
  void SetEnumGlobalVar(enum globalP var, double data)
  {
    pshm->P[var] = data;
  }

  double GetEnumGlobalVar(enum globalP var)
  {
    return pshm->P[var];
  }

  void SetEnumGlobalArrayVar(enum globalParray var, unsigned index, double data)
  {
    pshm->P[(var + index)%MAX_P] = data;
  }

  double GetEnumGlobalArrayVar(enum globalParray var, unsigned index)
  {
    return pshm->P[(var + index)%MAX_P];
  }

  void SetEnumCSGlobalVar(enum csglobalQ var, unsigned cs, double data)
  {
    pshm->Coord[cs % MAX_COORDS].Q[var] = data;
  }

  double GetEnumCSGlobalVar(enum csglobalQ var, unsigned cs)
  {
    return pshm->Coord[cs % MAX_COORDS].Q[var];
  }

  void SetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs, double data)
  {
    pshm->Coord[cs % MAX_COORDS].Q[(var + index)%MAX_Q] = data;
  }

  double GetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs)
  {
    return pshm->Coord[cs % MAX_COORDS].Q[(var + index)%MAX_Q];
  }

  void SetEnumPtrVar(enum ptrM var, double data)
  {
    im_write(pshm->Mdef + var, data, &pshm->Ldata);
  }

  double GetEnumPtrVar(enum ptrM var)
  {
    return im_read(pshm->Mdef + var, &pshm->Ldata);
  }

  void SetEnumPtrArrayVar(enum ptrMarray var, unsigned index, double data)
  {
    im_write(pshm->Mdef + ((var + index)%MAX_M), data, &pshm->Ldata);
  }

  double GetEnumPtrArrayVar(enum ptrMarray var, unsigned index)
  {
    return im_read(pshm->Mdef + ((var + index)%MAX_M), &pshm->Ldata);
  }

  #define SetGlobalVar(i, x)              SetEnumGlobalVar(i, x)
  #define SetGlobalArrayVar(i, j, x)      SetEnumGlobalArrayVar(i, j, x)
  #define GetGlobalVar(i)                 GetEnumGlobalVar(i)
  #define GetGlobalArrayVar(i, j)         GetEnumGlobalArrayVar(i, j)

  #define SetCSGlobalVar(i, j, x)         SetEnumCSGlobalVar(i, j, x)
  #define SetCSGlobalArrayVar(i, j, k, x) SetEnumCSGlobalArrayVar(i, j, k, x)
  #define GetCSGlobalVar(i, j)            GetEnumCSGlobalVar(i, j)
  #define GetCSGlobalArrayVar(i, j, k)    GetEnumCSGlobalArrayVar(i, j, k)

  #define SetPtrVar(i, x)                 SetEnumPtrVar(i, x)
  #define SetPtrArrayVar(i, j, x)         SetEnumPtrArrayVar(i, j, x)
  #define GetPtrVar(i)                    GetEnumPtrVar(i)
  #define GetPtrArrayVar(i, j)            GetEnumPtrArrayVar(i, j)

#else

  void SetEnumGlobalVar(enum globalP var, double data);
  double GetEnumGlobalVar(enum globalP var);
  void SetEnumGlobalArrayVar(enum globalParray var, unsigned index, double data);
  double GetEnumGlobalArrayVar(enum globalParray var, unsigned index);
  void SetEnumCSGlobalVar(enum csglobalQ var, unsigned cs, double data);
  double GetEnumCSGlobalVar(enum csglobalQ var, unsigned cs);
  void SetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs, double data);
  double GetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs);
  void SetEnumPtrVar(enum ptrM var, double data);
  double GetEnumPtrVar(enum ptrM var);
  void SetEnumPtrArrayVar(enum ptrMarray var, unsigned index, double data);
  double GetEnumPtrArrayVar(enum ptrMarray var, unsigned index);

  #define SetGlobalVar(i, x)              SetEnumGlobalVar(i, x)
  #define SetGlobalArrayVar(i, j, x)      SetEnumGlobalArrayVar(i, j, x)
  #define GetGlobalVar(i)                 GetEnumGlobalVar(i)
  #define GetGlobalArrayVar(i, j)         GetEnumGlobalArrayVar(i, j)

  #define SetCSGlobalVar(i, j, x)         SetEnumCSGlobalVar(i, j, x)
  #define SetCSGlobalArrayVar(i, j, k, x) SetEnumCSGlobalArrayVar(i, j, k, x)
  #define GetCSGlobalVar(i, j)            GetEnumCSGlobalVar(i, j)
  #define GetCSGlobalArrayVar(i, j, k)    GetEnumCSGlobalArrayVar(i, j, k)

  #define SetPtrVar(i, x)                 SetEnumPtrVar(i, x)
  #define SetPtrArrayVar(i, j, x)         SetEnumPtrArrayVar(i, j, x)
  #define GetPtrVar(i)                    GetEnumPtrVar(i)
  #define GetPtrArrayVar(i, j)            GetEnumPtrArrayVar(i, j)

#endif
// end of #ifdef _PPScriptMode_
#else
#ifdef _EnumMode_
enum globalP {_globalP_=-1
,Mtr1MaxSpeed=8213
,Enc1Res=8214
,Mtr1Gear=8215
,Mtr2MaxSpeed=8216
,Enc2Res=8217
,Mtr2Gear=8218
,Mtr3MaxSpeed=8219
,Enc3Res=8220
,Mtr3Gear=8221
,Mtr4MaxSpeed=8222
,Enc4Res=8223
,Mtr4Gear=8224
,Mtr5MaxSpeed=8225
,Enc5Res=8226
,Mtr5Gear=8227
,Mtr6MaxSpeed=8228
,Enc6Res=8229
,Mtr6Gear=8230
,Mtr7MaxSpeed=8231
,Enc7Res=8232
,Mtr7Gear=8233
,Mtr8MaxSpeed=8234
,Enc8Res=8235
,Mtr8Gear=8236
,Mtr9MaxSpeed=8237
,Enc9Res=8238
,Mtr9Gear=8239
,Mtr10MaxSpeed=8240
,Enc10Res=8241
,Mtr10Gear=8242
,Mtr11MaxSpeed=8243
,Enc11Res=8244
,Mtr11Gear=8245
,Mtr12MaxSpeed=8246
,Enc12Res=8247
,Mtr12Gear=8248
,Mtr13MaxSpeed=8249
,Enc13Res=8250
,Mtr13Gear=8251
,Mtr14MaxSpeed=8252
,Enc14Res=8253
,Mtr14Gear=8254
,GlobalAlarmReset=8255};
enum globalParray {_globalParray_=-1
,HomeVel=8192};
enum csglobalQ {_csglobalQ_=-1};
enum csglobalQarray {_csglobalQarray_=-1};
enum ptrM {_ptrM_=-1
,EMC=8402
,SEMC=8403
,ZJP_READY=8404
,ZJP_ALM=8405
,ZJP_TIM=8406
,JZDJ_READY=8407
,JZDJ_ALM=8408
,JZDJ_TIM=8409
,YZ_Z_ALM=8410
,YZ_Z_READY=8411
,ZJ_Z_ALM=8412
,ZJ_Z_READY=8413
,TP_Z_ALM=8414
,TP_Z_READY=8415
,DS_READY=8416
,DS_ALM=8417
,DS_INPOS=8418
,YZXJ_Z_READY=8419
,YZXJ_Z_INPOS=8420
,YZXJ_Z_ALM=8421
,TPXJ_Z_READY=8422
,TPXJ_Z_INPOS=8423
,TPXJ_Z_ALM=8424
,ZJP_FREE=8425
,ZJP_RESET=8426
,JZDJ_FREE=8427
,JZDJ_RESET=8428
,STO_0=8429
,STO_1=8430
,YZ_Z_ENA=8431
,YZ_Z_CLEAR=8432
,ZJ_Z_ENA=8433
,ZJ_Z_CLEAR=8434
,TP_Z_ENA=8435
,TP_Z_CLEAR=8436
,DS_FREE=8437
,DS_RESET=8438
,YZXJ_Z_FREE=8439
,YZXJ_Z_RESET=8440
,TPXJ_Z_FREE=8441
,TPXJ_Z_RESET=8442};
enum ptrMarray {_ptrMarray_=-1
,MotorStatus0=8192
,CoordStatus0=8223
,MotorDesPos=8244
,HomeMotor=8265
,HomeStatus=8293
,HomePolarity=8321
,HTimer=8347
,CtrlWord=8373
,Statusword=8389
,AD=8443};
#ifndef _PP_PROJ_HDR_
  void SetEnumGlobalVar(enum globalP var, double data)
  {
    pshm->P[var] = data;
  }

  double GetEnumGlobalVar(enum globalP var)
  {
    return pshm->P[var];
  }

  void SetEnumGlobalArrayVar(enum globalParray var, unsigned index, double data)
  {
    pshm->P[(var + index)%MAX_P] = data;
  }

  double GetEnumGlobalArrayVar(enum globalParray var, unsigned index)
  {
    return pshm->P[(var + index)%MAX_P];
  }

  void SetEnumCSGlobalVar(enum csglobalQ var, unsigned cs, double data)
  {
    pshm->Coord[cs % MAX_COORDS].Q[var] = data;
  }

  double GetEnumCSGlobalVar(enum csglobalQ var, unsigned cs)
  {
    return pshm->Coord[cs % MAX_COORDS].Q[var];
  }

  void SetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs, double data)
  {
    pshm->Coord[cs % MAX_COORDS].Q[(var + index)%MAX_Q] = data;
  }

  double GetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs)
  {
    return pshm->Coord[cs % MAX_COORDS].Q[(var + index)%MAX_Q];
  }

  void SetEnumPtrVar(enum ptrM var, double data)
  {
    im_write(pshm->Mdef + var, data, &pshm->Ldata);
  }

  double GetEnumPtrVar(enum ptrM var)
  {
    return im_read(pshm->Mdef + var, &pshm->Ldata);
  }

  void SetEnumPtrArrayVar(enum ptrMarray var, unsigned index, double data)
  {
    im_write(pshm->Mdef + ((var + index)%MAX_M), data, &pshm->Ldata);
  }

  double GetEnumPtrArrayVar(enum ptrMarray var, unsigned index)
  {
    return im_read(pshm->Mdef + ((var + index)%MAX_M), &pshm->Ldata);
  }

  #define SetGlobalVar(i, x)              SetEnumGlobalVar(i, x)
  #define SetGlobalArrayVar(i, j, x)      SetEnumGlobalArrayVar(i, j, x)
  #define GetGlobalVar(i)                 GetEnumGlobalVar(i)
  #define GetGlobalArrayVar(i, j)         GetEnumGlobalArrayVar(i, j)

  #define SetCSGlobalVar(i, j, x)         SetEnumCSGlobalVar(i, j, x)
  #define SetCSGlobalArrayVar(i, j, k, x) SetEnumCSGlobalArrayVar(i, j, k, x)
  #define GetCSGlobalVar(i, j)            GetEnumCSGlobalVar(i, j)
  #define GetCSGlobalArrayVar(i, j, k)    GetEnumCSGlobalArrayVar(i, j, k)

  #define SetPtrVar(i, x)                 SetEnumPtrVar(i, x)
  #define SetPtrArrayVar(i, j, x)         SetEnumPtrArrayVar(i, j, x)
  #define GetPtrVar(i)                    GetEnumPtrVar(i)
  #define GetPtrArrayVar(i, j)            GetEnumPtrArrayVar(i, j)

#else

  void SetEnumGlobalVar(enum globalP var, double data);
  double GetEnumGlobalVar(enum globalP var);
  void SetEnumGlobalArrayVar(enum globalParray var, unsigned index, double data);
  double GetEnumGlobalArrayVar(enum globalParray var, unsigned index);
  void SetEnumCSGlobalVar(enum csglobalQ var, unsigned cs, double data);
  double GetEnumCSGlobalVar(enum csglobalQ var, unsigned cs);
  void SetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs, double data);
  double GetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs);
  void SetEnumPtrVar(enum ptrM var, double data);
  double GetEnumPtrVar(enum ptrM var);
  void SetEnumPtrArrayVar(enum ptrMarray var, unsigned index, double data);
  double GetEnumPtrArrayVar(enum ptrMarray var, unsigned index);

  #define SetGlobalVar(i, x)              SetEnumGlobalVar(i, x)
  #define SetGlobalArrayVar(i, j, x)      SetEnumGlobalArrayVar(i, j, x)
  #define GetGlobalVar(i)                 GetEnumGlobalVar(i)
  #define GetGlobalArrayVar(i, j)         GetEnumGlobalArrayVar(i, j)

  #define SetCSGlobalVar(i, j, x)         SetEnumCSGlobalVar(i, j, x)
  #define SetCSGlobalArrayVar(i, j, k, x) SetEnumCSGlobalArrayVar(i, j, k, x)
  #define GetCSGlobalVar(i, j)            GetEnumCSGlobalVar(i, j)
  #define GetCSGlobalArrayVar(i, j, k)    GetEnumCSGlobalArrayVar(i, j, k)

  #define SetPtrVar(i, x)                 SetEnumPtrVar(i, x)
  #define SetPtrArrayVar(i, j, x)         SetEnumPtrArrayVar(i, j, x)
  #define GetPtrVar(i)                    GetEnumPtrVar(i)
  #define GetPtrArrayVar(i, j)            GetEnumPtrArrayVar(i, j)

#endif
// end of #ifdef _EnumMode_
#else
// ***** Standard default mode *****
#define MotorStatus0 8192
#define CoordStatus0 8223
#define MotorDesPos 8244
#define HomeMotor 8265
#define HomeStatus 8293
#define HomePolarity 8321
#define HTimer 8347
#define CtrlWord 8373
#define Statusword 8389
#define HomeVel 8192
#define Mtr1MaxSpeed 8213
#define Enc1Res 8214
#define Mtr1Gear 8215
#define Mtr2MaxSpeed 8216
#define Enc2Res 8217
#define Mtr2Gear 8218
#define Mtr3MaxSpeed 8219
#define Enc3Res 8220
#define Mtr3Gear 8221
#define Mtr4MaxSpeed 8222
#define Enc4Res 8223
#define Mtr4Gear 8224
#define Mtr5MaxSpeed 8225
#define Enc5Res 8226
#define Mtr5Gear 8227
#define Mtr6MaxSpeed 8228
#define Enc6Res 8229
#define Mtr6Gear 8230
#define Mtr7MaxSpeed 8231
#define Enc7Res 8232
#define Mtr7Gear 8233
#define Mtr8MaxSpeed 8234
#define Enc8Res 8235
#define Mtr8Gear 8236
#define Mtr9MaxSpeed 8237
#define Enc9Res 8238
#define Mtr9Gear 8239
#define Mtr10MaxSpeed 8240
#define Enc10Res 8241
#define Mtr10Gear 8242
#define Mtr11MaxSpeed 8243
#define Enc11Res 8244
#define Mtr11Gear 8245
#define Mtr12MaxSpeed 8246
#define Enc12Res 8247
#define Mtr12Gear 8248
#define Mtr13MaxSpeed 8249
#define Enc13Res 8250
#define Mtr13Gear 8251
#define Mtr14MaxSpeed 8252
#define Enc14Res 8253
#define Mtr14Gear 8254
#define EMC 8402
#define SEMC 8403
#define ZJP_READY 8404
#define ZJP_ALM 8405
#define ZJP_TIM 8406
#define JZDJ_READY 8407
#define JZDJ_ALM 8408
#define JZDJ_TIM 8409
#define YZ_Z_ALM 8410
#define YZ_Z_READY 8411
#define ZJ_Z_ALM 8412
#define ZJ_Z_READY 8413
#define TP_Z_ALM 8414
#define TP_Z_READY 8415
#define DS_READY 8416
#define DS_ALM 8417
#define DS_INPOS 8418
#define YZXJ_Z_READY 8419
#define YZXJ_Z_INPOS 8420
#define YZXJ_Z_ALM 8421
#define TPXJ_Z_READY 8422
#define TPXJ_Z_INPOS 8423
#define TPXJ_Z_ALM 8424
#define ZJP_FREE 8425
#define ZJP_RESET 8426
#define JZDJ_FREE 8427
#define JZDJ_RESET 8428
#define STO_0 8429
#define STO_1 8430
#define YZ_Z_ENA 8431
#define YZ_Z_CLEAR 8432
#define ZJ_Z_ENA 8433
#define ZJ_Z_CLEAR 8434
#define TP_Z_ENA 8435
#define TP_Z_CLEAR 8436
#define DS_FREE 8437
#define DS_RESET 8438
#define YZXJ_Z_FREE 8439
#define YZXJ_Z_RESET 8440
#define TPXJ_Z_FREE 8441
#define TPXJ_Z_RESET 8442
#define AD 8443
#define GlobalAlarmReset 8255
#endif
#endif
#endif //_PP_PROJ_H_
