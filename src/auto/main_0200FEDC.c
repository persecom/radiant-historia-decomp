/* 36 functions from 0x0200F244 to 0x020101F8 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_0215f0a0[4];
extern void func_0200fa74(void *, s32);
extern u8 data_0215f120[1312];
extern void func_02006df4(void);
extern void func_02006e00(u32, u32);
extern s32 func_02006638(void *, s32);
extern void func_020065c8(void *);
extern u32 data_0213ea64[];
extern void func_02006d58(void);
extern void func_02006da8(u32, u32);
extern void func_02006d8c(u32, u32);
extern void func_02006de8(void);
extern void func_0200fddc(u8 *);
extern s32 func_0200fca4(void (*)(void *), s32);
extern u16 func_020081e0(void);
extern u32 func_02008128(void);
extern void func_0200813c(u32);
extern void func_02006510(void *);
extern void func_02006560(void *);
extern s32 func_0200fd64(u8 *, s32, u32, u32);
extern s32 func_02005da4(u16);
extern void func_0200851c(void *, s32);
extern void func_02007e58(void *, s32, s32, void *, void *);

extern void func_02008414(void);
extern void func_02008460(void *);
extern void func_02007e44(void *);
extern s32 func_0200f83c(u16 *);
extern void func_0200f7e4(u8 *);
extern void func_02008474(void *, s32, s32, s32);
extern void func_02005d88(void);
extern void func_0200faec(u32, s32);
extern s32 func_020106ac(void);
extern void func_020106a0(void);

extern s32 func_0200a6e4(s32, s32, s32);
s32 func_0200f6fc(s32 arg0);

extern void func_0200fa74(void *, s32);

extern u8 data_0215f0c0[];
extern void *data_0215f640[];
extern void func_02008e68(s32, void *, s32);
extern void func_02006dc4(void *, s32);
extern void func_0200a674(s32, void *);
extern void func_0200fedc(u32, u32, u32);

#pragma peephole off

void func_0200fedc(u32 arg0, u32 arg1, u32 arg2) {
    volatile u32 *p;
    if (arg0 != 0xb || arg2 == 0) {
        return;
    }
    p = (volatile u32 *)data_0215f120;
    p[1] &= ~0x20;
    func_020065c8((void *)p[0x51c / 4]);
}

extern u32 data_0215ce00[];
extern s32 func_0200a6c0(s32, s32);
extern void func_020081a4(s32);
s32 func_0200ff10(u8 *arg0, s32 arg1, s32 arg2) {
    u32 cpsr;
    u32 res;

    if ((*(volatile u32 *)(arg0 + 4) & 2) == 0) {
        *(volatile u32 *)(arg0 + 4) |= 2;
        while (!func_0200a6c0(0xb, 1)) {
            func_020081a4(0x32);
        }
        func_0200ff10(arg0, 0, 1);
    }
    func_02006dc4(*(void **)arg0, 0x60);
    func_02006de8();
    *(u32 *)(arg0 + 0x51c) = data_0215ce00[1];
    do {
        *(volatile u32 *)(arg0 + 4) |= 0x20;
        while (func_0200a6e4(0xb, arg1, 1) < 0) {
        }
        if (arg1 == 0) {
            s32 val = *(s32 *)arg0;
            while (func_0200a6e4(0xb, val, 1) < 0) {
            }
        }
        cpsr = func_02008128();
        while ((*(volatile u32 *)(arg0 + 4) & 0x20) != 0) {
            func_02006510(NULL);
        }
        func_0200813c(cpsr);
        func_02006d8c(*(u32 *)arg0, 0x60);
        res = **(u32 **)arg0;
    } while (res == 4 && --arg2 > 0);
    return res == 0;
}

