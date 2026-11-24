/* 33 functions from 0x0211242C to 0x021133F8 (main), found by ds-decomp. */
#include "common.h"

extern void func_0211242c(void *, s32, s32);
extern u32 func_020c9c34(void *);
extern u8 *func_020c9c10(void *, u16);
extern void func_02111a3c(void *, u8);
extern void func_02112dcc(void *, s32, s32);
extern void func_020c7930(void *);
extern void func_020c94c8(void *, u16, u16);
extern void func_02110b94(void *);
extern void func_02112724(void);
extern void func_021127fc(void);
extern u8 *func_020c9b24(void *, s32, s32);

extern void func_02112110(void);
void func_02112554(u8 *arg0, s32 arg1) {
    func_0211242c(arg0, arg1, *(s16 *)(arg0 + 0x96));
}

void func_02112564(u8 *arg0, s32 arg1) {
    func_0211242c(arg0, *(s16 *)(arg0 + 0x94), arg1);
}

void func_02112578(u8 *arg0, u8 arg1) {
    u32 count = func_020c9c34(*(void **)(arg0 + 0x8c));
    u16 i;
    u8 *obj;
    u8 val;

    for (i = 0; i < count; i++) {
        obj = func_020c9c10(*(void **)(arg0 + 0x8c), i);
        if (obj != NULL) {
            ((void (*)(u8 *, u8))(*(void **)(obj + 0x1c)))(obj, arg1 + (obj[0x43] - arg0[0x98]));
        }
    }
    obj = *(u8 **)(arg0 + 0x90);
    ((void (*)(u8 *, u8))(*(void **)(obj + 0x1c)))(obj, arg1 + (obj[0x38] - arg0[0x98]));
    val = arg1 + (arg0[0x48] - arg0[0x98]);
    arg0[0x98] = arg1;
    func_02111a3c(arg0, val);
}

u16 func_02112620(u8 *arg0) {
    return *(u16 *)(arg0 + 0x9a);
}

void func_02112628(u8 *arg0, u16 arg1, u16 arg2, u16 arg3) {
    u8 *obj = func_020c9c10(*(void **)(arg0 + 0x8c), arg1);
    *(u16 *)(obj + 0x3e) = arg2;
    *(u16 *)(obj + 0x40) = arg3;
    if (((s32 (*)(u8 *))(*(void **)(obj + 0x28)))(obj) == 5) {
        func_020c7930(obj);
    }
    func_020c94c8(*(void **)(arg0 + 0x6c), (u16)(arg2 - 8), (u16)(arg3 - 8));
}

void *func_02112688(u8 *arg0) {
    return *(void **)(arg0 + 0x90);
}

s32 func_02112690(u8 *arg0) {
    u8 *obj;
    func_02110b94(arg0);
    *(void **)(arg0 + 0x4c) = (void *)func_02112724;
    *(void **)(arg0 + 0x50) = (void *)func_021127fc;
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 0);
    *(u16 *)(obj + 0x3e) = 0xc8;
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 3);
    *(u16 *)(obj + 0x3e) = 0xc8;
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 2);
    ((void (*)(u8 *, s32))(*(void **)(obj + 0x10)))(obj, 0x14);
    return 0;
}

void func_021126fc(u8 *arg0, u32 arg1) {
    u8 *obj = func_020c9b24(*(void **)(arg0 + 0x30), 4, 2);
    *(u32 *)(obj + 0x4c) = arg1;
    obj[0x50] = 1;
}

s32 func_021128c4(void) {
    func_02112110();
    return 0;
}

extern void func_0210c5dc(void *);
extern void func_021121b8(void *);
void func_021128d4(void *arg0) {
    func_021121b8(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_021128f4(void) {
    return 0x11;
}

extern void func_020c8818(void *);
void func_02112ac0(void *arg0) {
    func_020c8818(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_02112ae0(void) {
    return 0x13;
}

extern void func_020c9b64(void *);
s32 func_02112ce0(void *arg0) {
    func_020c9b64(*(void **)((u8 *)arg0 + 0x30));
    return 0;
}

void func_02112d64(u8 *arg0, s32 arg1) {
    func_02112dcc(arg0, arg1, *(s16 *)(arg0 + 0x36));
}

void func_02112d74(u8 *arg0, s32 arg1) {
    func_02112dcc(arg0, *(s16 *)(arg0 + 0x34), arg1);
}

