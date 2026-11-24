/* 73 functions from 0x02006C38 to 0x02007C2C (main), found by ds-decomp. */
#include "common.h"

extern void func_02006e48(void);
extern void func_0200a56c(void);
extern void func_02006e90(void);
extern void func_02005ae0(void);
extern void func_02006fac(void);
extern void func_020057d0(void);
extern void func_02005a40(void);
extern void func_020075fc(void);
extern void func_020094a8(void);
extern void func_02007d18(void);
extern void func_0200835c(void);
extern void func_0200617c(void);
extern void func_020081fc(void);
extern void func_02011334(void);
extern void func_0200f858(void);
extern void func_0200e384(void);
extern void func_02006e1c(void);
extern u32 func_02006940(void);
extern u32 data_0215d058[2];
extern void (*data_02145bc0[])(u32);
extern u8 *data_0215d060[];
extern u32 data_0215d084[3];
extern u32 func_02008128(void);
extern void func_0200813c(u32);
extern void *func_02007250(void *, void *);
extern void *func_02007278(void *, void *);
extern void func_02007538(s32, u32);
typedef struct UnkStruct_0215d128 {
    u16 unk00;
    u16 unk02;
    u32 unk04;
    u64 unk08;
} UnkStruct_0215d128;

extern u16 data_0215d124;
extern u16 data_0215d128;
extern u16 data_0215d138;
extern void func_020077f8(s32);
extern void func_0200789c(void);
extern void func_020057e8(u32, void (*)(void));
extern void func_020059b4(u32);
extern void func_02005944(u32, void (*)(void), u32);
extern void func_02007674(void);
extern u32 func_0200701c(s32);
extern void func_020071a0(s32, u32);
extern u32 func_020070fc(s32);
extern void func_020071b4(s32, u32);
extern void func_020075d4(s32, u32, s32);

extern u32 data_0215d084[3];

extern void func_020076fc(s32);
extern void func_0200777c(void);

extern u16 data_0215d128;

u64 func_02007904(void) {
    volatile u16 countL;
    volatile u64 countH;
    u32 cookie = func_02008128();
    countL = *(volatile u16 *)0x04000100;
    countH = *(volatile u64 *)((u8 *)&data_0215d128 + 8) & 0xffffffffffffULL;
    if ((*(volatile u32 *)0x04000214 & 8) != 0 && !(countL & 0x8000)) {
        countH++;
    }
    func_0200813c(cookie);
    return (countH << 16) | countL;
}

extern void func_020059e4(u32);
extern void func_02007c1c(void);
extern void func_02008414(void);
extern void func_02007a88(void *, u64);
void func_020079a4(u8 *arg0) {
    s64 delta;
    u16 count;
    volatile u16 *tmr;
    u64 now = func_02007904();

    *(volatile u16 *)0x04000106 = 0;
    delta = *(s64 *)(arg0 + 0xc) - (s64)now;
    func_02005944(1, func_02007c1c, 0);

    if (delta < 0) {
        count = 0xfffe;
    } else if (delta < 0x10000) {
        count = (u16)(~delta);
    } else {
        count = 0;
    }

    tmr = (volatile u16 *)0x04000104;
    tmr[0] = count;
    tmr[1] = 0xc1;
    func_020059b4(0x10);
}

void func_02007a2c(void) {
    u8 *p = (u8 *)&data_0215d138;
    if (*(u16 *)p == 0) {
        *(u16 *)p = 1;
        func_020077f8(1);
        *(u32 *)(p + 4) = 0;
        *(u32 *)(p + 8) = 0;
        func_020059e4(0x10);
    }
}

extern u16 data_0215d138;
u16 func_02007a68(void) {
    return data_0215d138;
}

void func_02007a78(u32 *arg0) {
    arg0[0] = 0;
    arg0[2] = 0;
}

void func_02007bb0(u8 *arg0, u64 arg1, void *arg2, void *arg3) {
    u32 cookie;
    if (arg0 == NULL || *(void **)arg0 != NULL) {
        func_02008414();
    }
    cookie = func_02008128();
    *(u64 *)(arg0 + 0x1c) = 0;
    *(void **)arg0 = arg2;
    *(void **)(arg0 + 4) = arg3;
    func_02007a88(arg0, arg1 + func_02007904());
    func_0200813c(cookie);
}

void func_02007c2c(void);
void func_02007c1c(void) {
    func_02007c2c();
}

