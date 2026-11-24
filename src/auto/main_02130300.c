/* 12 functions from 0x02130300 to 0x021312A4 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_0215a0d8[];
extern void (*data_02173434[])(u32);
extern u8 data_0215b1a4[];

extern void func_0212bda8(void *);
extern void func_0212824c(void);
extern void func_0212e61c(void);
extern void func_02132770(void *);
extern void func_021326e4(void *);
extern void func_0212e628(void);
extern void func_02132568(void);

extern void func_02132ae8(void);
void func_02130858(u32 *arg0, u32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = data_0215a0d8[0];
    }
    if (arg1 != NULL) {
        *arg1 = data_0215a0d8[1];
    }
}

void func_021309c8(u32 arg0) {
    if (data_02173434[0] != NULL) {
        data_02173434[0](arg0);
    }
}

void func_021309e8(void *arg0) {
    u8 *r4;
    void *r5;
    if (arg0 == NULL) {
        func_0212bda8(data_0215b1a4);
        return;
    }
    func_0212824c();
    r4 = *(u8 **)(*(u8 **)((u8 *)arg0 + 4) + 4);
    r5 = *(void **)(r4 + 0xb8);
    if (r5 == NULL) {
        return;
    }
    func_0212e61c();
    func_02132770(r5);
    func_021326e4(r5);
    *(void **)(r4 + 0xb8) = NULL;
    func_0212e628();
    func_02132568();
}

void func_02130a44(void) {
    func_02132ae8();
}

extern void func_02132af0(void);
void func_02130a50(void) {
    func_02132af0();
}

extern s32 func_02132734(void *);
extern void func_02132afc(void *, s32);
extern void func_02132744(void *);
extern void func_02132a6c(void *);
extern s32 func_02132a9c(void *);
extern s32 func_02132a94(void *);
void func_02130a5c(u8 *p) {
void *v=*(void **)(p+0xb8);s32 zero=0,i,delta,old;
if(func_02132734(v)==0){*(s32 *)(p+0x90)=zero;*(s32 *)(p+0x88)=zero;func_02132770(v);}
if(*(s32 *)(p+4)==1) {
if(*(s32 *)(p+0xac)==0)func_02132afc(v,0);else func_02132afc(v,1);
*(s32 *)(p+0x88)=zero;func_02132744(v);*(s32 *)(p+4)=2;
} else if(*(s32 *)(p+4)==2) {
for(i=0;i<*(s32 *)(p+0xc0);i++)func_02132a6c(v);
delta=func_02132a9c(v);old=*(s32 *)(p+0x88);delta-=old;
*(s32 *)(p+0x90)=delta;*(s32 *)(p+0x88)=old+delta;
*(s32 *)(p+0x94)=func_02132a94(v);
if(func_02132734(v)==3){func_02132770(v);*(s32 *)(p+4)=zero;}
}
}

