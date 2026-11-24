/* 33 functions from 0x020C641C to 0x020C7408 (main), found by ds-decomp. */
#include "common.h"

extern void func_0210c5dc(void *);
extern void *func_020c641c(void);
extern void func_020c738c(void *, s32, s32);
extern s32 func_020c73c0(void);
extern void func_021098ac(void *);
extern void func_020a3bbc(u16);
extern s16 data_02160220[10];
extern s16 data_02162908[4];
void func_020c6ef4(u8 *arg0);
s32 func_020c6e40(void *arg0, u8 *arg1, s32 arg2, s32 arg3);
void func_020c6e2c(void *, void *);
void func_020c6d4c(u8 *arg0) {
    (*(void (**)(void *))(arg0 + 4))(arg0);
}

void *func_020c6d5c(void) {
    void *ptr = func_020c641c();
    (*(void (**)(void *))ptr)(ptr);
    return ptr;
}

s32 func_020c6d78(void *arg0) {
    if (arg0 == NULL) {
        return 1;
    }
    func_020c738c(arg0, 0, 0);
    return 0;
}

void func_020c6da0(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_020c6db4(void) {
    return 1;
}

s32 func_020c6dbc(u8 *arg0) {
    arg0[0x42] = 0x1f;
    arg0[0x43] = 0x2d;
    *(void **)(arg0 + 0x48) = (void *)func_020c6ef4;
    return 0;
}

void func_020c6de0(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_020c6df4(u8 *arg0) {
    u8 val = arg0[0x42];
    if (val == 0) {
        return 0;
    }
    *(volatile u32 *)0x040004a4 = (val << 16) | 0xc0;
    func_020c6e2c(arg0, arg0 + 0x30);
    return 0;
}

void func_020c6e2c(void *arg0, void *arg1) {
    func_020c6e40(arg0, arg1, 0, 0);
}

void func_020c6f04(u8 *arg0, u16 arg1) {
    *(u16 *)(arg0 + 0x3a) = arg1;
}

void func_020c6f0c(u8 *arg0, u16 arg1) {
    *(u16 *)(arg0 + 0x3c) = arg1;
}

s32 func_020c7080(void) {
    return 1;
}

void func_020c71d8(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

