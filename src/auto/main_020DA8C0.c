/* 15 functions from 0x020D9E48 to 0x020DAA60 (main), found by ds-decomp. */
#include "common.h"
extern s32 func_020db864(void *,void *,s32),func_0202c668(void *,s32,s32);
extern u8 *func_02023108(void *);
u8 *func_02064cb8(u32,s32);
u8 *func_02026d70(u8 *,u8 *,s32);
extern u8 *data_02160080;

extern u8 *data_02160258;
extern s32 data_02151fcc;
extern u32 data_0216263c[3];
extern s32 func_02002404(s32, s32);
extern void func_020dd810(void *, s32, s32);
extern u8 *data_02160080;
extern void func_020d626c(void *, void *);
extern void func_020223f8(void *, s32);
extern void func_02026ddc(void *);

BOOL func_020da008(s32);

extern s32 func_020d2e14(s32, s32);
extern void func_0202b6ec(void);
extern void func_0202b398(void);
extern void func_0202b41c(void);
extern void func_0202e4cc(void);
extern s32 func_020981fc(u16);
extern void func_02108ffc(void);
extern u16 func_020329d8(void *);
extern void func_020d0a40(s32);
extern u8 *data_0216011c;
extern u8 *data_02160244;
extern u8 *data_02160090;

#pragma opt_propagation off

#pragma opt_propagation on
void func_0202b950(u8 *);
u8 *func_0202c7d8(s32);

void func_0202ba04(u8 *);
void func_020de4ec(void);
u8 *func_020defcc(u32);
u8 *func_02064cb8(u32, s32);
u8 *func_02065298(u32,u32,s32,s32,s32);
u8 *func_02026d70(u8 *,u8 *,s32);
void func_020de4b4(u8 *);

void func_02030468(void *,s32);
s32 func_02030528(void *,s32);
void func_020e26f0(s32,s32,s32);

void func_020da8c0(u8 *p,s32 arg1) {
 u8 *q=*(u8 **)(p+0x128);
 s32 zero=0;
 func_02030468(*(void **)(p+0x118),zero);
 if (**(u8 **)(p+0x118)==0) {
  s32 id=*(s32 *)(q+0x24);
  if(id!=0x38b && id!=0x38e) {
   if(func_02030528(*(void **)(p+0x118),32)) {
    *(u32 *)(q+0x18)=(*(u32 *)(q+0x18)|8)&~2;
    *(u16 *)(p+0x8a)=0x109e;
    func_020da870(p,19,14);
   } else if(func_02030528(*(void **)(p+0x118),16)) {
    *(u32 *)(q+0x18)=(*(u32 *)(q+0x18)|8)&~2;
    func_020da870(p,7,14);
   } else if(*(u32 *)(q+0x18)&2) {
    p[0x9c]=zero;
    *(u16 *)(p+0x8a)=0x109e;
   } else {
    *(u16 *)(p+0x8a)=0x109e;
    func_020da870(p,3,14);
   }
  }
  func_020e26f0(1<<*(u16 *)(p+0x90),999,10);
 } else if(**(u8 **)(p+0x118)==1) {
  if(func_02030528(*(void **)(p+0x118),32)) {
   *(u32 *)(q+0x18)|=8;
   *(u16 *)(p+0x8a)=0x109e;
   func_020da870(p,19,14);
   *(u16 *)(p+0x98)=zero;
   p[0xa2]&=~4;
  } else if(func_02030528(*(void **)(p+0x118),16)) {
   *(u32 *)(q+0x18)|=8;
   func_020da870(p,zero,14);
   *(u16 *)(p+0x98)=zero;
   p[0xa2]&=~4;
  } else {
   *(u16 *)(p+0x8a)=0x109e;
   func_020da870(p,arg1,15);
  }
 }
}

