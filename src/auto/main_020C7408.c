/* 38 functions from 0x020C7408 to 0x020C83F4 (main), found by ds-decomp. */
#include "common.h"

extern void func_0210c5dc(void *);
extern u32 func_020c73b8(void);
extern void func_020c74fc(void *);
extern void func_020c753c(void *);
extern void func_020c7630(void *);
extern void func_020c7f6c(void *, s32, s16);
extern void func_020f4f04(void *);
extern void func_020f4ea4(u32, s32);
extern s32 func_0201fb1c(s32, s32);
extern void func_020c6dbc(void);
extern void func_020c992c(void);
extern void *func_0210c594(s32, void *);
extern void *data_02155c3c;
extern void func_020c9940(void *);
extern u32 func_020c7754(u32 **);
extern void func_020c7818(void *);
extern void func_020c85e8(void *);
extern void *func_020a94b8(void *);
extern s32 func_020c73c0(void *);
extern void func_020c9b64(void *);
extern void func_020c9a04(void *, s32);
extern u32 func_020c9c34(void *);
extern u8 *func_020c9c10(void *, u32);
extern void func_020c9b24(void *, u32, s32);
extern void func_020c7930(void *);
extern void func_020c83f4(void *, void *, s32, s32);
extern void func_020c8310(void **);
extern void func_020c84ac(void *);
extern u32 data_02162880;
extern void func_020c8568(void *, s32, s32);
extern void func_020a9068(u8);
extern void func_0210db70(void *);
extern u8 *func_020a84b8(s32, s32);
extern void func_020c8640(void *, s32);
extern void func_0210dba0(void *);
BOOL func_020c7408(void) {
    return (func_020c73b8() & 4) != 0;
}

BOOL func_020c7420(void) {
    return (func_020c73b8() & 8) != 0;
}

s32 func_020c7438(void) {
    return 1;
}

s32 func_020c7440(void) {
    return 0;
}

void func_020c7448(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_020c745c(void *arg0) {
    if (*(s32 *)((u8 *)arg0 + 0x30) == 0) {
        return 1;
    }
    switch (*(u8 *)((u8 *)arg0 + 0x3a)) {
    case 0: {
        u16 max = *(u16 *)((u8 *)arg0 + 0x38);
        *(u16 *)((u8 *)arg0 + 0x36) += 1;
        if (*(u16 *)((u8 *)arg0 + 0x36) > max) {
            *(u8 *)((u8 *)arg0 + 0x3a) = 1;
            *(u16 *)((u8 *)arg0 + 0x36) = max;
        }
        break;
    }
    case 1:
        *(u16 *)((u8 *)arg0 + 0x36) -= 1;
        if (*(u16 *)((u8 *)arg0 + 0x36) == 0) {
            *(u16 *)((u8 *)arg0 + 0x36) = 0;
            *(u8 *)((u8 *)arg0 + 0x3a) = 0;
        }
        break;
    }
    switch (*(u8 *)((u8 *)arg0 + 0x34)) {
    case 0:
        func_020c74fc(arg0);
        break;
    case 1:
        func_020c753c(arg0);
        break;
    }
    return 0;
}

void func_020c74fc(void *arg0) {
    u8 *p = arg0;
    u8 state = p[0x3a];
    u8 *obj = *(u8 **)(p + 0x30);
    switch (state) {
    case 0:
        ((void (*)(u8 *, s32))(*(void **)(obj + 0x20)))(obj, 0x1f);
        break;
    case 1:
        ((void (*)(u8 *, s32))(*(void **)(obj + 0x20)))(obj, 0);
        break;
    }
}

extern s32 func_0201f8cc(u32);
extern s32 func_02020888(s32, s32);
extern s32 func_020201f4(s32, s32);
extern s32 func_020203d4(s32, s32);
extern s32 func_0201ff40(s32);
void func_020c753c(void *arg0) {
    u8 *p = arg0;
    u8 *obj = *(u8 **)(p + 0x30);
    switch (p[0x3a]) {
    case 0: {
        s32 a = func_0201f8cc(*(u16 *)(p + 0x36));
        s32 b = func_0201f8cc(*(u16 *)(p + 0x38));
        s32 product = func_02020888(a, b);
        s32 v = func_020201f4(0x41800000, product);
        s32 r = func_020203d4(0x41700000, v);
        u8 value = (u8)func_0201ff40(r);
        ((void (*)(u8 *, s32))(*(void **)(obj + 0x20)))(obj, value);
        break;
    }
    case 1: {
        s32 a = func_0201f8cc(*(u16 *)(p + 0x36));
        s32 b = func_0201f8cc(*(u16 *)(p + 0x38));
        s32 product = func_02020888(a, b);
        s32 v = func_020201f4(0x41700000, product);
        u8 value = (u8)(func_0201ff40(v) + 0x10);
        ((void (*)(u8 *, s32))(*(void **)(obj + 0x20)))(obj, value);
        break;
    }
    }
}

s32 func_020c7604(void) {
    return 0;
}

void func_020c760c(u8 *arg0) {
    func_020c7630(arg0 + 0x30);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020c7630(void *arg0) {
    if (*(void **)arg0 != NULL) {
        func_020f4f04(*(void **)arg0);
        *(void **)arg0 = NULL;
    }
}

extern void *func_020f4d40(s32);
extern void *func_020f4c2c(s32);
extern void *func_020f4ec4(void);
extern void func_020f50bc(void *, void *, void *);
extern void func_020f5114(void *, s32);
extern void func_020c7760(void *, s16, s16);
s32 func_020c7654(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    s32 sp0[5];
    u8 *r5;

    func_020c7630(arg0 + 0x30);
    r5 = func_020f4d40(arg1);
    if (r5 == NULL) {
        r5 = func_020f4c2c(arg1);
        *(s32 *)(r5 + 0x20) = 0x1000;
        *(s32 *)(r5 + 0x24) = 0x1000;
    }
    *(u8 **)(arg0 + 0x30) = func_020f4ec4();
    *(s32 *)(*(u8 **)(arg0 + 0x30) + 0x8) = arg3;
    *(s32 *)(*(u8 **)(arg0 + 0x30) + 0xc) = arg4;
    *(u16 *)(*(u8 **)(arg0 + 0x30) + 0x44) = arg6;
    *(s32 *)(*(u8 **)(arg0 + 0x30) + 0x48) = arg8;
    sp0[0] = 0;
    sp0[1] = arg2;
    sp0[2] = arg5;
    sp0[3] = arg7;
    sp0[4] = 0x300;
    func_020f50bc(*(void **)(arg0 + 0x30), sp0, r5);
    func_020f5114(*(void **)(arg0 + 0x30), 1);
    func_020c7760(arg0, (s16)arg3, (s16)arg4);
    return 0;
}

s32 func_020c7734(u8 *arg0, s32 arg1) {
    func_020f4ea4(func_020c7754((u32 **)(arg0 + 0x30)), arg1);
    return 0;
}

u32 func_020c7754(u32 **arg0) {
    return **arg0;
}
