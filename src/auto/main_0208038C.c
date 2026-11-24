/* 8 functions from 0x0208038C to 0x02080E00 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 value[17]; } Stats_020806e8;

extern void func_02080e00(void);
extern void *data_02155c3c;
extern u8 *data_0216010c;
extern char data_021484f8[];
extern char data_02148510[];
extern char data_02148524[];
extern void *func_0210c594(u32, void *);
extern void func_020ec548(void *);
#pragma optimization_level 0
void func_02080c68(void);
void func_02080d30(void);
extern u16 func_0208a318(u32);
extern u8 *func_020ec294(u16, s32, s32, s32);
extern void func_020ec8cc(void *, s32, s32);
extern void func_020ec88c(void *, s32, s32);
extern void func_0208a4ac(void);
#pragma optimization_level 0
u32 func_02085110(u8);
u8 *func_02021f10(u32);
#pragma optimization_level 0
void func_02081f08(u32 *,s32);
#pragma optimization_level 0
#pragma optimization_level 0
extern void *func_021092d8(char *);
extern void func_02013878(void *, s32, u32);
extern s32 func_020f685c(void *, s32);
extern u8 func_02022068(u16);
extern void func_021093f0(void *);
extern s32 func_02109444(void *);
extern void func_021093b0(void *);
extern s32 func_02089b38(const void *, const void *);
extern void func_02015a3c(void *, s32, s32, s32 (*)(const void *, const void *));
#pragma optimization_level 0
void func_0208038c(u8 arg) {
    u8 *p0 = *(u8 **)(data_0216010c + 0x44);
    void *csv = 0;
    s32 i;
    u16 id;
    s16 bits;
    s16 mask;
    u8 *actor = 0;

    *(s16 *)(data_0216010c + 0x50d4) = 0;
    actor = func_02021f10(func_02085110(data_0216010c[0x50dc]));
    mask = 1 << func_02085110(data_0216010c[0x50dc]);

    if (arg == 0) {
        csv = func_021092d8(data_021484f8);
    } else if (arg == 1) {
        csv = func_021092d8(data_02148510);
    } else {
        csv = func_021092d8(data_02148524);
    }

    func_02013878(data_0216010c + 0x5570, 0, 0x2ee0);

    if (csv != 0) {
        do {
            id = func_020f685c(csv, 0);
            if (func_02022068(id) >= 1 && id >= 1) {
                func_021093f0(csv);
                func_021093f0(csv);
                bits = func_020f685c(csv, 0);
                if (bits & mask) {
                    func_021093f0(csv);
                    func_021093f0(csv);
                    for (i = 0; i < 0xf; i++) {
                        ((s16 *)(data_0216010c + *(s16 *)(data_0216010c + 0x50d4) * 0x64 + 0x55b4))[i] = func_020f685c(csv, 0);
                    }
                    *(u16 *)(data_0216010c + *(s16 *)(data_0216010c + 0x50d4) * 0x64 + 0x5570) = id;
                    *(u8 *)(data_0216010c + *(s16 *)(data_0216010c + 0x50d4) * 0x64 + 0x5572) = func_02022068(id);
                    *(s16 *)(data_0216010c + *(s16 *)(data_0216010c + 0x50d4) * 0x64 + 0x559a) = func_020f685c(csv, 0);
                    (*(s16 *)(data_0216010c + 0x50d4))++;
                }
            }
        } while (func_02109444(csv) != 0);
        func_021093b0(csv);
    }

    if (*(s16 *)(data_0216010c + 0x50d4) <= 6) {
        data_0216010c[0x50d8] = 0x4e;
    } else {
        data_0216010c[0x50d8] = 0x1d4 / *(s16 *)(data_0216010c + 0x50d4);
        if (data_0216010c[0x50d8] < 8) {
            data_0216010c[0x50d8] = 8;
        }
    }

    func_02015a3c(data_0216010c + 0x5570, *(s16 *)(data_0216010c + 0x50d4), 0x64, func_02089b38);
}
s16 func_020806e8(u8 stat,s32 slot,u8 actor,u8 item) {
u32 buf[25];
Stats_020806e8 old;
u8 *p=NULL;
if(*(s16 *)(data_0216010c+0x50d4)==0)return 0;
p=func_02021f10(actor);
func_02081f08((u32 *)buf,item);
if(slot==0)old=*(Stats_020806e8 *)(p+0x7c);
else if(slot==1)old=*(Stats_020806e8 *)(p+0x9e);
else old=*(Stats_020806e8 *)(p+0xc0+(slot-2)*0x22);
switch(stat) {
case 0:return (s16)(*(s16 *)((u8 *)buf+68)-old.value[0]);
case 1:return (s16)(*(s16 *)((u8 *)buf+70)-old.value[1]);
case 2:return (s16)(*(s16 *)((u8 *)buf+72)-old.value[2]);
case 3:return (s16)(*(s16 *)((u8 *)buf+74)-old.value[3]);
case 4:return (s16)(*(s16 *)((u8 *)buf+76)-old.value[4]);
case 5:return (s16)(*(s16 *)((u8 *)buf+78)-old.value[5]);
case 6:return (s16)(*(s16 *)((u8 *)buf+80)-old.value[6]);
case 7:return (s16)(*(s16 *)((u8 *)buf+82)-old.value[7]);
}
}
void func_02080930(u8 arg) {
u8 *p=NULL;
p=func_02021f10(func_02085110(arg));
*(s16 *)(p+36)=(s16)(*(s16 *)(p+260) + (*(s16 *)(p+226) + (*(s16 *)(p+192) + (*(s16 *)(p+124) + *(s16 *)(p+158)))));
*(s16 *)(p+38)=(s16)(*(s16 *)(p+262) + (*(s16 *)(p+228) + (*(s16 *)(p+194) + (*(s16 *)(p+126) + *(s16 *)(p+160)))));
*(s16 *)(p+40)=(s16)(*(s16 *)(p+264) + (*(s16 *)(p+230) + (*(s16 *)(p+196) + (*(s16 *)(p+128) + *(s16 *)(p+162)))));
*(s16 *)(p+44)=(s16)(*(s16 *)(p+266) + (*(s16 *)(p+232) + (*(s16 *)(p+198) + (*(s16 *)(p+130) + *(s16 *)(p+164)))));
*(s16 *)(p+42)=(s16)(*(s16 *)(p+268) + (*(s16 *)(p+234) + (*(s16 *)(p+200) + (*(s16 *)(p+132) + *(s16 *)(p+166)))));
*(s16 *)(p+46)=(s16)(*(s16 *)(p+270) + (*(s16 *)(p+236) + (*(s16 *)(p+202) + (*(s16 *)(p+134) + *(s16 *)(p+168)))));
*(s16 *)(p+48)=(s16)(*(s16 *)(p+272) + (*(s16 *)(p+238) + (*(s16 *)(p+204) + (*(s16 *)(p+136) + *(s16 *)(p+170)))));
*(s16 *)(p+50)=(s16)(*(s16 *)(p+274) + (*(s16 *)(p+240) + (*(s16 *)(p+206) + (*(s16 *)(p+138) + *(s16 *)(p+172)))));
if(*(u16 *)(p+16) > *(u16 *)(p+18) + *(s16 *)(p+36)) *(u16 *)(p+16)=(u16)(*(u16 *)(p+18) + *(s16 *)(p+36));
if(*(u16 *)(p+20) > *(u16 *)(p+22) + *(s16 *)(p+38)) *(u16 *)(p+20)=(u16)(*(u16 *)(p+22) + *(s16 *)(p+38));
}

void func_02080b58(u32 arg0) {
    u8 *p = NULL;
    func_02080d30();
    p = func_020ec294(func_0208a318(arg0), 1, 0x4000, 0);
    func_020ec8cc(p, 1, 0);
    func_020ec88c(p, 0, 0);
    *(u32 *)(p + 0x1c) = 0xaf000;
    *(u32 *)(p + 0x18) = 0;
    *(void **)(data_0216010c + 0x5564) = p;
    *(u8 *)(data_0216010c + 0x556c) = 0xa;
    p = func_020ec294(func_0208a318(arg0) + 1, 1, 0x2000, 0x4000);
    func_020ec8cc(p, 1, 0);
    func_020ec88c(p, 0, 0);
    *(u32 *)(p + 0x1c) = 0xaf000;
    *(u32 *)(p + 0x18) = 0x60000;
    *(void **)(data_0216010c + 0x5568) = p;
    func_02080c68();
    func_0208a4ac();
    *(s8 *)(data_0216010c + 0x556d) = (s8)arg0;
}

void func_02080c68(void) {
    void *p = NULL;
    if (*(void **)(data_0216010c + 0x5000 + 0x564)) {
        p = *(void **)(data_0216010c + 0x5000 + 0x564);
        *(u32 *)((u8 *)p + 0x14) = (6 * *(u8 *)(data_0216010c + 0x5000 + 0x56c) + 0x82) << 12;
        p = *(void **)(data_0216010c + 0x5000 + 0x568);
        *(u32 *)((u8 *)p + 0x14) = (6 * *(u8 *)(data_0216010c + 0x5000 + 0x56c) + 0x82) << 12;
        if (*(u8 *)(data_0216010c + 0x5000 + 0x56c) != 0) {
            u8 *q = (u8 *)(data_0216010c + 0x16c + 0x5400);
            *q = *q - 1;
        }
    }
}

void func_02080d30(void) {
    if (*(void **)(data_0216010c + 0x5000 + 0x564)) {
        func_020ec548(*(void **)(data_0216010c + 0x5000 + 0x564));
        *(void **)(data_0216010c + 0x5000 + 0x564) = NULL;
        func_020ec548(*(void **)(data_0216010c + 0x5000 + 0x568));
        *(void **)(data_0216010c + 0x5000 + 0x568) = NULL;
    }
    *(s8 *)(data_0216010c + 0x5000 + 0x56d) = -1;
}
#pragma optimization_level 4
void func_02080db8(void) {
    func_02080e00();
}

void func_02080dc4(void) {
    *(void **)(data_0216010c + 0x44) = func_0210c594(0x38, data_02155c3c);
    *(u8 *)(*(void **)(data_0216010c + 0x44) + 2) = 0;
}

