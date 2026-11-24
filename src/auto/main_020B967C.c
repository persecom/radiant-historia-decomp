/* 20 functions from 0x020B967C to 0x020BA63C (main), found by ds-decomp. */
#include "common.h"
typedef struct { u16 data[5]; } Unk_020b9b78_5;
typedef struct { u16 data[2]; } Unk_020b9b78_2;
extern const Unk_020b9b78_5 data_02143930;
extern const Unk_020b9b78_2 data_02143900;
extern const u16 data_02143914[4];

extern u8 *data_021601ec;
extern u16 data_021438e0;
extern u16 data_021626a8;
extern u8 *func_020c9c10(void *, u32);
extern u16 func_021136b0(u16);
extern u8 *func_02111da8(u8 *);
extern u8 *func_02112048(u8 *);
extern u32 func_02022068(u16);
extern void func_020220b0(u16, u32);
extern void func_020b8aac(void);
extern u8 *data_02160204;
extern void func_020de394(u32, u16);
void func_020ba2d0(void);
void func_020ba4b4(void);
void func_020ba520(void);
void func_020ba604(void);

void func_020b9930(void) {
    u8 *obj = func_020c9c10(*(void **)(data_021601ec + 0x4c), 2);
    func_02112688();
    func_02111dc8(obj, (u16)(1 << func_02110b20()));
    func_020ba4b4();
    func_02112068(obj);
    func_02111bf0(obj);
    func_02111ff0(obj);
}

void func_020b9990(void) {
    u8 *p = data_021601ec;
    u16 arr[1] = { 0xe };
    func_020c738c(func_020c9c10(*(void **)(p + 0x4c), arr[0]), 0, 1);
    *(s32 *)(p + 0x5c) = 0xfa000;
}

void func_020b99d8(void) {
u8 *p=data_021601ec;
u8 *obj=func_020c9c10(*(void **)(p+0x4c),2);
s32 val=(*(s32 *)(p+0x5c)*60)/100;
*(s32 *)(p+0x5c)=val;
((void (*)(u8 *,s32))(*(void **)(obj+0x10)))(obj,(s16)((val>>12)-0xe6));
((void (*)(u8 *,s32))(*(void **)(obj+0x14)))(obj,0x19);
obj=func_020c9c10(*(void **)(p+0x4c),0xd);
val=(*(s32 *)(p+0x5c)*60)/100;
*(s32 *)(p+0x5c)=val;
((void (*)(u8 *,s32))(*(void **)(obj+0x10)))(obj,(s16)((val>>12)-0xe6));
obj=func_020c9c10(*(void **)(p+0x4c),0xe);
val=(*(s32 *)(p+0x5c)*60)/100;
*(s32 *)(p+0x5c)=val;
((void (*)(u8 *,s32))(*(void **)(obj+0x10)))(obj,(s16)((val>>12)-0xca));
if(*(s32 *)(p+0x5c)<0x800) {
*(s32 *)(p+0x40)=0;
func_020b8aac();
}
}

void func_020b9ad8(void) {
    *(s32 *)(data_021601ec + 0x5c) = 0xe6000;
}

void func_020b9af0(void) {
    u8 *p = data_021601ec;
    u8 *obj = func_020c9c10(*(void **)(p + 0x4c), 2);
    s32 val = (*(s32 *)(p + 0x5c) * 60) / 100;
    *(s32 *)(p + 0x5c) = val;
    ((void (*)(u8 *, s32))(*(void **)(obj + 0x10)))(obj, (s16)((val >> 12) + 0x14));
    ((void (*)(u8 *, s32))(*(void **)(obj + 0x14)))(obj, 0x19);
    if (*(s32 *)(p + 0x5c) < 0x800) {
        *(s32 *)(p + 0x40) = 0;
        func_020b8aac();
    }
}

void func_020ba63c(s32);
void func_020b9f6c(void);
void func_020b9b78(void) {
u8 *p=data_021601ec;
Unk_020b9b78_5 a=data_02143930;
u16 i;
u8 *obj;
for(i=0;i<5;i++) func_020c738c(func_020c9c10(*(void **)(p+0x4c),a.data[i]),0,1);
{
Unk_020b9b78_2 b=data_02143900;
for(i=0;i<2;i++) func_020c738c(func_020c9c10(*(void **)(p+0x48),b.data[i]),0,1);
}
func_020ba63c(1);
obj=func_020c9c10(*(void **)(p+0x4c),2);
obj[0x73]=1;
func_02111ff0(obj);
*(s32 *)(p+0x94)=0x5a000;
p[0x98]=1;
func_020b9f6c();
}

extern u16 data_02143948[6];
