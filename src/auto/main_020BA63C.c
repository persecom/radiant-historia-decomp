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
void func_020ba6d0(u32 arg0) {
    u16 vals[6];
    void *root = *data_021601ec;
    s32 i;
    void *obj, *obj2;
    s16 v;
    for (i = 0; i < 6; i++) vals[i] = data_02143954[i];
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

s32 func_020baba8(u8 *arg0) {
    func_02110b94(arg0);
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
