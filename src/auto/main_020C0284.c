/* 15 functions from 0x020C0284 to 0x020C11F4 (main), found by ds-decomp. */
#include "common.h"

extern void func_0210c5dc(void *);
extern u32 data_02155c3c;
extern void *data_02160218;
extern void *func_0210c594(u32, u32);
extern s32 func_020dd9b4(void *, u32 *);
extern s32 func_02117d80();
extern s32 func_020dddfc(void *, void *, s32);
extern void func_020020f8(void *, void *, void *);
extern void func_020c1fec(void);
extern void func_0210d9e4(void *);
void *func_020c0924(void) {
    return func_0210c594(0x10, data_02155c3c);
}

void func_020c0940(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s16 func_020c0954(u8 *arg0) {
    u32 tmp;
    s32 ret = func_020dd9b4(arg0, &tmp);
    if (*(s32 *)(*(u8 **)(arg0 + 0x108) + 0x14) != 0) {
        *(u32 *)(arg0 + 0x80) &= ~2;
        *(s32 *)(arg0 + 0xf8) = 1;
        arg0[0xa5] = 1;
        return -1;
    }
    return func_02117d80(ret);
}

s32 func_020c09b0(u8 *arg0, s32 arg1, s32 arg2) {
    u16 cnt = 0;
    s32 d;
    if (func_020dddfc(arg0, arg0 + 0x24, arg1 << 12) != 0) {
        *(s32 *)(arg0 + 0x30) = 0;
        *(s32 *)(arg0 + 0x38) = 0;
        cnt++;
        if (*(s32 *)(arg0 + 0x34) == 0) {
            cnt++;
        }
    }
    d = (*(s32 *)(arg0 + 0x28) - *(s32 *)(arg0 + 4)) >> 12;
    if (d < 0) {
        d = -d;
    }
    if (d < arg2) {
        *(s32 *)(arg0 + 4) = *(s32 *)(arg0 + 0x28);
        *(s32 *)(arg0 + 0x34) = 0;
        cnt++;
    }
    if (cnt >= 2) {
        return 1;
    }
    func_020020f8(arg0, arg0 + 0x30, arg0);
    return 0;
}

void func_020c0d1c(void) {
    data_02160218 = func_0210c594(0x14, data_02155c3c);
    *(void (**)(void))data_02160218 = func_020c1fec;
    *(u32 *)((u8 *)data_02160218 + 4) = 0x3ed;
    func_0210d9e4(data_02160218);
}

extern void func_0210da14(void *);
extern void *func_020dce1c(u16, s32, s32);
extern void func_020dde88(void *);
extern void func_020dd810(void *, s32, s32);
extern void func_020ddb54(u16);
extern void func_020dd51c(void);
extern void func_021168f8(void *, void *);
void func_020c0d68(void) {
    func_0210da14(data_02160218);
    if (data_02160218 != NULL) {
        func_0210c5dc(data_02160218);
        data_02160218 = NULL;
    }
}

void func_020c0d98(void) {
    u8 *p = *(u8 **)((u8 *)&data_02160218 + 4);
    u8 *q = *(u8 **)(p + 4);
    while (q != NULL) {
        u8 *obj = func_020dce1c(*(u16 *)q, 0, 0);
        *(u16 *)(obj + 0x90) = 0x100;
        *(u16 *)(obj + 0x92) = 0;
        *(u32 *)(obj + 0x0) = 0;
        *(u32 *)(obj + 0x8) = 0;
        *(u32 *)(obj + 0x4) = 0;
        func_020dde88(obj);
        func_020dd810(obj, 0, 0);
        q = *(u8 **)(q + 8);
    }
}

void func_020c0e08(void) {
    u8 *g = (u8 *)&data_02160218;
    u8 *q = *(u8 **)(*(u8 **)(g + 4) + 4);
    while (q != NULL) {
        u8 *next = *(u8 **)(q + 8);
        func_020ddb54(*(u16 *)q);
        func_020dd51c();
        func_021168f8(*(u8 **)(g + 4) + 4, q);
        if (q != NULL) {
            func_0210c5dc(q);
        }
        q = next;
    }
}

