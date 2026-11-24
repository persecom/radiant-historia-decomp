/* 28 functions from 0x020BA63C to 0x020BB558 (main), found by ds-decomp. */
#include "common.h"

extern void func_02110b94(void *);
extern void func_02110d94(void *);
extern void func_020ba9c4(void);
extern void func_020baae0(void);
extern u8 *func_020c9b24(void *, u32, u32);
extern void func_020babe8(void);
extern void func_020ba948(void);
extern void func_020baa74(void);
extern void *func_020c9c10(void *, u32);
extern void func_020c738c(void *, u32, u32);
extern void **data_021601ec;
extern void *func_020c8b10(void);
extern void func_020c7894(void *);
extern u16 data_02143954[];
extern void func_020c52c0(void);
extern u8 data_021601f0;
void func_020ba63c(u32 arg0) {
    void *root = *data_021601ec;
    void *obj5 = func_020c9c10(*(void **)((u8 *)root + 0x4c), 5);
    void *obj6 = func_020c9c10(*(void **)((u8 *)root + 0x4c), 6);
    void *obj4;
    if (arg0 != 0) {
        func_020c738c(obj5, 0, 1);
    } else {
        func_020c738c(obj6, 0, 1);
        func_020c738c(obj5, 1, 1);
    }
    obj4 = func_020c9c10(*(void **)((u8 *)root + 0x4c), 4);
    *(u16 *)((u8 *)obj4 + 0x32) = 0;
    *(u16 *)((u8 *)obj4 + 0x34) = (arg0 == 0) ? 0xb : 0;
}

void func_020ba6d0(u32 arg0) {
    u16 vals[6];
    void *root = *data_021601ec;
    void *obj, *obj2;
    s16 v;
    vals[0] = data_02143954[0];
    vals[1] = data_02143954[1];
    vals[2] = data_02143954[2];
    vals[3] = data_02143954[3];
    vals[4] = data_02143954[4];
    vals[5] = data_02143954[5];
    obj = func_020c9c10(*(void **)((u8 *)root + 0x4c), 0xe);
    obj2 = func_020c8b10();
    *(u16 *)((u8 *)obj2 + 0x32) = 0;
    *(u16 *)((u8 *)obj2 + 0x34) = arg0 * 13;
    v = ((s16 *)vals)[arg0];
    *(u16 *)((u8 *)obj + 0x3e) = v + 0xc;
    *(u16 *)((u8 *)obj + 0x32) = 0;
    *(u16 *)((u8 *)obj + 0x34) = 0;
    *(u16 *)((u8 *)obj + 0x36) = 0x20;
    *(u16 *)((u8 *)obj + 0x38) = 0x11;
    *(u16 *)((u8 *)obj + 0x40) = 0x11;
    func_020c7894(obj);
}

s32 func_020ba78c(u8 *arg0) {
    u8 *obj;
    func_02110b94(arg0);
    *(void **)(arg0 + 0x4c) = (void *)func_020ba948;
    *(void **)(arg0 + 0x50) = (void *)func_020baa74;
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 0);
    *(u16 *)(obj + 0x3e) = 0x87;
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 3);
    *(u16 *)(obj + 0x3e) = 0x87;
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 2);
    ((void (*)(u8 *, s32))(*(void **)(obj + 0x10)))(obj, 0x23);
    return 0;
}

s32 func_020ba7f8(u8 *arg0) {
    u8 *obj;
    func_02110b94(arg0);
    *(void **)(arg0 + 0x4c) = (void *)func_020ba9c4;
    *(void **)(arg0 + 0x50) = (void *)func_020baae0;
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 0);
    *(u16 *)(obj + 0x3e) = 0x96;
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 3);
    *(u16 *)(obj + 0x3e) = 0x96;
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 2);
    ((void (*)(u8 *, s32))(*(void **)(obj + 0x10)))(obj, 0x1b);
    ((void (*)(u8 *, s32))(*(void **)(obj + 0x14)))(obj, 1);
    return 0;
}

void func_020ba878(u8 *arg0, u32 arg1) {
    u8 *sub = *(u8 **)(arg0 + 0x48);
    BOOL flag = 1;
    u8 *obj = func_020c9b24(*(void **)(arg0 + 0x30), 4, 2);
    *(u32 *)(obj + 0x4c) = arg1;
    obj[0x50] = flag;
    if (sub[0x74] & 1) {
        flag = 0;
    }
    func_020c738c(obj, !flag, 1);
}

void func_020ba8c4(u8 *arg0, u32 arg1) {
    u8 *sub = *(u8 **)(arg0 + 0x48);
    BOOL flag = 1;
    u8 *obj = func_020c9b24(*(void **)(arg0 + 0x30), 4, 2);
    *(u32 *)(obj + 0x4c) = arg1;
    obj[0x50] = flag;
    if (sub[0x74] & 1) {
        flag = 0;
    }
    func_020c738c(obj, !flag, 1);
    obj = func_020c9b24(*(void **)(arg0 + 0x30), 5, 1);
    if (sub[0x74] & 1) {
        flag = 0;
    }
    func_020c738c(obj, !flag, 1);
}

s32 func_020baba8(u8 *arg0) {
    func_02110b94(arg0);
    *(void **)(arg0 + 0x4c) = (void *)func_020babe8;
    return 0;
}

s32 func_020babc8(u8 *arg0) {
    func_02110d94(arg0);
    *(void **)(arg0 + 0x4c) = (void *)func_020babe8;
    return 0;
}

void func_020bac70(u8 arg0) {
    data_021601f0 = arg0;
}

void func_020bafb4(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_020bafdc(void) {
    func_020c52c0();
}
