/* 32 functions from 0x02128B80 to 0x02129A6C (main), found by ds-decomp. */
#include "common.h"
extern u32 data_02173478[4];
extern u32 data_02173488;
extern u32 data_0217357c[3];

extern void func_0212a9f4(void);
extern void func_021295a4(void *);
extern void func_0212a9f8(void);
extern void func_0212bda8(void *);
extern void func_021293c0(void);
extern void func_02128eb4(void);
extern void func_0212926c(void);
extern void func_02129490(void);
extern void func_0212951c(void *);
extern void func_021294c8(void *);
extern void func_02013878(void *, s32, u32);
extern void func_0212b3f8(s32, s32, void *, void *);
extern u32 data_0217348c[60];
extern u8 data_02156a54[];
void func_021294c4(void) {
}

void func_02129588(void *arg0) {
    func_0212a9f4();
    func_021295a4(arg0);
    func_0212a9f8();
}

void func_021295a4(void *arg0) {
    u8 *p = arg0;
    if (p == NULL) {
        func_0212bda8(data_02156a54);
        return;
    }
    switch (*(s8 *)(p + 1)) {
    case 3:
        func_021293c0();
        break;
    case 1:
        func_02128eb4();
        break;
    case 2:
        func_0212926c();
        break;
    case 4:
        func_02129490();
        break;
    case 5:
        func_021294c4();
        break;
    }
    func_0212951c(p);
    func_021294c8(p);
}

void func_02129624(void) {
    u32 i;
    for (i = 0; i < 60; i++) {
        data_0217348c[i] = 0;
    }
}

u8 *func_0212965c(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (*(u32 *)((u8 *)data_0217348c + i * 0x3c) == 0) {
            break;
        }
    }
    if (i == 4) {
        return 0;
    }
    {
        u8 *e = (u8 *)data_0217348c + i * 0x3c;
        func_02013878(e, 0, 0x3c);
        *(u32 *)((u8 *)data_0217348c + i * 0x3c) = 1;
        *(u32 *)(e + 4) = i;
        *(u32 *)(e + 8) = 0;
        *(u32 *)(e + 0xc) = 0;
        func_0212b3f8(0x1f4, 0xac44, e + 0x30, e + 0x32);
        *(u8 *)(e + 0x28) = 0;
        *(u8 *)(e + 0x29) = 0;
        *(u8 *)(e + 0x2a) = 0;
        *(u8 *)(e + 0x2b) = 0;
        *(u8 *)(e + 0x2c) = 0;
        *(u8 *)(e + 0x2d) = 0;
        *(u8 *)(e + 0x2e) = 0;
        *(u8 *)(e + 0x2f) = 0;
        return e;
    }
}

void func_02129708(u8 *arg0, s32 arg1, s32 arg2) {
    func_0212b3f8(arg2, arg1, arg0 + 0x30, arg0 + 0x32);
}

void func_02129724(u8 *arg0, s16 *arg1, s16 *arg2) {
    *(s16 *)(arg0 + 0x28) = arg1[0];
    *(s16 *)(arg0 + 0x2a) = arg2[0];
    *(s16 *)(arg0 + 0x2c) = arg1[1];
    *(s16 *)(arg0 + 0x2e) = arg2[1];
}

void func_02129748(u8 *arg0, s16 *arg1, s16 *arg2) {
    arg1[0] = *(s16 *)(arg0 + 0x28);
    arg2[0] = *(s16 *)(arg0 + 0x2a);
    arg1[1] = *(s16 *)(arg0 + 0x2c);
    arg2[1] = *(s16 *)(arg0 + 0x2e);
}

void func_0212976c(u8 *arg0, u16 arg1, u16 arg2, u16 arg3) {
    *(u16 *)(arg0 + 0x34) = arg1;
    *(u16 *)(arg0 + 0x36) = arg2;
    *(u16 *)(arg0 + 0x38) = arg3;
}

u32 func_021297b8(void *arg0) {
    return *(u32 *)((u8 *)arg0 + 0xc);
}

s32 func_021297f8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (*(s32 *)(arg0 + 0xc) != 0) {
        return 0;
    }
    *(s32 *)(arg0 + 0x14) = 2;
    *(s32 *)(arg0 + 0x18) = arg1;
    *(s32 *)(arg0 + 0x1c) = arg2;
    *(s32 *)(arg0 + 0x20) = arg3;
    *(s32 *)(arg0 + 0x24) = arg4;
    return 1;
}

void func_02129830(u8 *arg0) {
    if (*(s32 *)(arg0 + 0xc) == 0) {
        *(s32 *)(arg0 + 0x10) = 0;
        *(s32 *)(arg0 + 0xc) = 1;
    }
}

void func_0212984c(u8 *arg0) {
    *(s32 *)(arg0 + 0xc) = 0;
    *(u8 *)(arg0 + 0x28) = 0;
    *(u8 *)(arg0 + 0x29) = 0;
    *(u8 *)(arg0 + 0x2a) = 0;
    *(u8 *)(arg0 + 0x2b) = 0;
    *(u8 *)(arg0 + 0x2c) = 0;
    *(u8 *)(arg0 + 0x2d) = 0;
    *(u8 *)(arg0 + 0x2e) = 0;
    *(u8 *)(arg0 + 0x2f) = 0;
}

void func_02129878(u8 *arg0) {
    if (*(s32 *)(arg0 + 0xc) == 3) {
        *(s32 *)(arg0 + 0xc) = 0;
    }
}

void *func_0212988c(void *arg0) {
    return *(void **)((u8 *)arg0 + 0x10);
}

void func_02129894(void) {
    data_02173488 = 1;
}

