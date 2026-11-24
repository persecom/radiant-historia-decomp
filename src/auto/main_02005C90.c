/* 59 functions from 0x02005C90 to 0x02006C38 (main), found by ds-decomp. */
#include "common.h"

extern u32 func_02008154(void);
extern s32 func_02005c80(u16, void *, void *);
extern void func_02005dd8(void);
extern u32 func_02008128(void);
extern s32 func_02009148(u16, void *);
extern void func_02008168(u32);
extern void func_0200813c(u32);
extern void func_02012e3c(void);
extern void func_02005d70(void);
extern s32 func_02005c0c(u16, void *, void (*)(void), BOOL);
extern s32 func_02005d0c(u16);
s32 func_02005c90(u16 arg0, void *arg1, void (*arg2)(void), BOOL arg3) {
    u32 r5;
    s32 r4;
    if (arg3) {
        r5 = func_02008154();
    } else {
        r5 = func_02008128();
    }
    r4 = func_02009148(arg0, arg1);
    if (r4 == 0) {
        if (arg2 != NULL) {
            arg2();
        }
        *(u16 *)((u8 *)arg1 + 4) = arg0;
    }
    if (arg3) {
        func_02008168(r5);
    } else {
        func_0200813c(r5);
    }
    return r4;
}

s32 func_02005d0c(u16 arg0) {
    return func_02005c0c(arg0, (void *)0x02ffffe8, func_02005d70, 1);
}

s32 func_02005d2c(u16 arg0) {
    return func_02005d0c(arg0);
}

extern void func_02005d58(void);
extern s32 func_02005d38(u16);
s32 func_02005d38(u16 arg0) {
    return func_02005c90(arg0, (void *)0x02ffffe8, func_02005d58, 1);
}

void func_02005d58(void) {
    *(volatile u16 *)0x04000204 &= ~0x80;
}

void func_02005d70(void) {
    *(volatile u16 *)0x04000204 |= 0x80;
}

s32 func_02005d88(u16 arg0) {
    return func_02005c80(arg0, (void *)0x02ffffe0, func_02005dd8);
}

extern s32 func_02005cfc(u16, void *, void *);
extern void func_02005dc0(void);
s32 func_02005da4(u16 arg0) {
    return func_02005cfc(arg0, (void *)0x02ffffe0, func_02005dc0);
}

void func_02005dc0(void) {
    *(volatile u16 *)0x04000204 &= ~0x800;
}

u16 func_02005df0(u8 *arg0) {
    return *(u16 *)(arg0 + 4);
}

void func_02005ec0(void) {
    func_02012e3c();
}

extern u32 data_0215cdf0[4];
extern s32 func_02005c80(u16, void *, void *);
extern void func_02005dd8(void);
u32 func_020062c8(void) {
    return data_0215cdf0[0];
}

