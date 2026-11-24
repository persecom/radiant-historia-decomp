/* 57 functions from 0x02129A6C to 0x0212A9FC (main), found by ds-decomp. */
#include "common.h"

extern void func_0213807c(void);
extern void func_02129624(void);
extern void func_02129a50(void);
extern void func_02129798(void *);
extern void func_02013878(void *, s32, u32);
extern void func_0212a0e4();
extern void *memset(void *, int, u32);
extern u8 data_021735a4[976];
extern u8 data_0217358c[12];
extern volatile u32 data_02173974[2];
extern s32 func_02129db4(void *, void *, u32);
void func_02129bb8(s32 arg0) {
    *(s32 *)(data_0217358c + 8) = arg0;
}

u32 func_02129bc8(void) {
    return *(u32 *)(data_0217358c + 8);
}

void func_02129bd8(void) {
    u32 *p;
    int i;
    func_02129624();
    func_02129a50();
    p = (u32 *)data_021735a4;
    for (i = 0; i < 244; i++) {
        p[i] = 0;
    }
    func_02129bb8(0);
}

u32 func_02129c20(u8 *arg0, u32 *arg1, u32 *arg2, u32 *arg3) {
    *arg1 = *(u32 *)(arg0 + 0x8c);
    *arg2 = *(u32 *)(arg0 + 0x40) - *(u32 *)(arg0 + 0x8c);
    *arg3 = *(u32 *)(arg0 + 0x18) - *(u32 *)(arg0 + 0x88);
    return *(u32 *)(arg0 + 0x3c);
}

void func_02129c50(u8 *arg0, s32 arg1, s32 arg2) {
    s32 a = *(s32 *)(arg0 + 0x8c) + arg2;
    s32 b = *(s32 *)(arg0 + 0x88) + arg2;
    *(s32 *)(arg0 + 0x8c) = a;
    *(s32 *)(arg0 + 0x88) = b;
}

void func_02129c6c(u8 *arg0) {
    u8 *p;
    u32 i;
    *(u32 *)(arg0 + 0xc4) = 0;
    *(s16 *)(arg0 + 0xd8) = 0;
    *(s16 *)(arg0 + 0xda) = -0x80;
    *(s16 *)(arg0 + 0xdc) = -0x80;
    p = arg0 + 0xc8;
    i = 4;
    do {
        p[0] = 0;
        p[1] = 0;
        p[2] = 0;
        p[3] = 0;
        p += 4;
    } while (--i != 0);
}

void func_02129d80(u8 *arg0) {
    if (arg0 == NULL) {
        return;
    }
    {
        void *p = *(void **)(arg0 + 8);
        *(void **)(arg0 + 8) = NULL;
        func_02129798(p);
    }
    func_02013878(arg0, 0, 0xf4);
    *(u16 *)(arg0 + 0) = 0;
}

void func_0212a0d0(u8 *arg0) {
    s16 v = *(s16 *)(arg0 + 0x9a);
    *(s16 *)(arg0 + 0x98) = v;
    func_0212a0e4(arg0, v);
}

void func_0212a0e4(arg0)
    u8 *arg0;
{
    u32 a = *(u32 *)(arg0 + 0x3c);
    u32 b = *(u32 *)(arg0 + 0x40);
    u32 c = *(u32 *)(arg0 + 0x44);
    *(u16 *)(arg0 + 0x2) = 1;
    *(u32 *)(arg0 + 0x14) = 0xbb80;
    *(u8 *)(arg0 + 0xe) = 2;
    *(u8 *)(arg0 + 0xd) = 0x10;
    *(u32 *)(arg0 + 0x18) = 0x7fffffff;
    *(u8 *)(arg0 + 0xf) = 0x7f;
    *(u32 *)(arg0 + 0x10) = 0x400;
    *(u32 *)(arg0 + 0x50) = 2;
    *(u32 *)(arg0 + 0x54) = 0x7f;
    *(u32 *)(arg0 + 0x58) = 0x400;
    *(u32 *)(arg0 + 0x5c) = a;
    *(u32 *)(arg0 + 0x60) = b;
    *(u32 *)(arg0 + 0x64) = c;
    *(u32 *)(arg0 + 0x8c) = 0;
    *(u16 *)(arg0 + 0x1c) = 0;
    *(u16 *)(arg0 + 0x24) = 0;
    *(u16 *)(arg0 + 0x26) = 0;
    *(u32 *)(arg0 + 0x20) = 0;
    *(u32 *)(arg0 + 0x28) = 0;
    *(u32 *)(arg0 + 0x2c) = 0;
    *(u32 *)(arg0 + 0x30) = 0;
    *(u32 *)(arg0 + 0x34) = 0;
    *(u32 *)(arg0 + 0x88) = 0;
    *(u8 *)(arg0 + 0xde) = 0;
    *(u8 *)(arg0 + 0xdf) = 0;
}

s32 func_0212a180(void *arg0, u8 *arg1, u32 arg2) {
    u16 v;
    func_02129c6c(arg0);
    v = (arg1[0] << 8) | arg1[1];
    if (v != 0x8000) {
        return -1;
    }
    return func_02129db4(arg0, arg1, arg2);
}

void func_0212a1c8(u8 *arg0, u32 arg1, u32 arg2) {
    *(u32 *)(arg0 + 0x78) = arg1;
    *(u32 *)(arg0 + 0x7c) = arg2;
}

u32 func_0212a1d4(u8 *arg0) {
    return *(u32 *)(arg0 + 0x3c);
}

s16 func_0212a1dc(u8 *arg0) {
    return *(s16 *)(arg0 + 0x98);
}

u32 func_0212a1e4(u8 *arg0) {
    return *(u32 *)(arg0 + 0x14);
}

s8 func_0212a210(s8 *a0) {
    return a0[0xd];
}

s32 func_0212a218(void) {
    return 0x10;
}

void *func_0212a220(void *arg0) {
    return *(void **)((u8 *)arg0 + 0x10);
}

s32 func_0212a228(s32 *arg0) {
    return arg0[6];
}

s32 func_0212a230(s16 *arg0) {
    return arg0[0x12];
}

s32 func_0212a238(s32 *arg0) {
    return arg0[10];
}

extern void func_02129624(void);
extern void func_02129a50(void);
extern void *memset(void *, int, u32);
extern u8 data_021735a4[976];
u32 func_0212a250(u8 *arg0) {
    return *(u32 *)(arg0 + 0x30);
}

s32 func_0212a258(s32 *arg0) {
    return arg0[13];
}

s32 func_0212a260(s32 *arg0) {
    return arg0[0x31];
}

s32 func_0212a268(s16 *arg0) {
    return arg0[0x6c];
}

s32 func_0212a4b8(s32 *arg0) {
    return arg0[1];
}

s32 func_0212a584(s32 *arg0) {
    return arg0[0x25];
}

void *func_0212a58c(u8 *arg0) {
    return *(void **)(arg0 + 0x90);
}

void func_0212a98c(void) {
    data_02173974[1]++;
    if (data_02173974[1] == 1) {
        data_02173974[0] = 0;
    }
}

void func_0212a9b4(void) {
    data_02173974[1]--;
    if (data_02173974[1] == 0) {
        data_02173974[0] = 0;
    }
}

void func_0212a9dc(void) {
    func_0213807c();
}

extern void func_0213808c(void);
void func_0212a9e8(void) {
    func_0213808c();
}

void func_0212a9f4(void) {
}

void func_0212a9f8(void) {
}

