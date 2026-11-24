/* 38 functions from 0x020C7408 to 0x020C83F4 (main), found by ds-decomp. */
#include "common.h"

extern void func_0210c5dc(void *);
extern u32 func_020c73b8(void);
extern void func_020c74fc(void *);
extern void func_020c753c(void *);
extern void func_020c7630(void *);
extern void func_020c7f6c(void *, s32, s16);
extern void func_020f4f04(void *);
extern void func_020c85e8(void *);
extern void *func_020a94b8(void *);
extern s32 func_020c73c0(void *);
extern void func_020c9b64(void *);
extern void func_020c9a04(void *, s32);
extern u32 func_020c9c34(void *);
extern u8 *func_020c9c10(void *, u32);
extern void func_020c9b24(void *, u32, s32);
extern void func_020c7930(void *);
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

u32 func_020c7754(u32 **arg0) {
    return **arg0;
}

extern void func_020c7838(void *);
extern u32 func_020c73b8(void);
extern void func_020c74fc(void *);
extern void func_020c753c(void *);
void func_020c7818(void *arg0) {
    func_020c7838(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_020c786c(u8 *arg0) {
    if (func_020c73c0(arg0) == 0) {
        return 2;
    }
    func_020c9b64(*(void **)(arg0 + 0x4c));
    return 0;
}

void func_020c7894(u8 *arg0, u8 arg1) {
    u16 i;
    *(u8 *)(arg0 + 0x50) = arg1;
    switch (arg1) {
    case 1:
        func_020c9a04(*(void **)(arg0 + 0x4c), 3);
        break;
    case 3:
        func_020c9a04(*(void **)(arg0 + 0x4c), 9);
        break;
    }
    for (i = 0; i < func_020c9c34(*(void **)(arg0 + 0x4c)); i++) {
        if (func_020c9c10(*(void **)(arg0 + 0x4c), i) == NULL) {
            func_020c9b24(*(void **)(arg0 + 0x4c), i, 1);
        }
    }
    func_020c7930(arg0);
}

void func_020c7f6c(void *arg0, s32 arg1, s16 arg2) {
    u8 *self = (u8 *)arg0;
    u16 i;
    u32 count = func_020c9c34(*(void **)(self + 0x4c));
    for (i = 0; i < count; i++) {
        u8 *obj = func_020c9c10(*(void **)(self + 0x4c), i);
        *(s16 *)(obj + 0x3a) = arg1 + (*(s16 *)(obj + 0x3a) - *(s16 *)(self + 0x3a));
        *(s16 *)(obj + 0x3c) = arg2 + (*(s16 *)(obj + 0x3c) - *(s16 *)(self + 0x3c));
    }
    *(s16 *)(self + 0x3a) = arg1;
    *(s16 *)(self + 0x3c) = arg2;
}

extern void func_020c7f6c(void *, s32, s16);
void func_020c7fe4(u8 *arg0, s32 arg1) {
    func_020c7f6c(arg0, arg1, *(s16 *)(arg0 + 0x3c));
}

void func_020c7ff4(u8 *arg0, s32 arg1) {
    ((void (*)(u8 *, s16, s32))func_020c7f6c)(arg0, *(s16 *)(arg0 + 0x3a), arg1);
}

s32 func_020c8124(void) {
    return 5;
}

extern void func_020c6d78(void);
s32 func_020c812c(void) {
    func_020c6d78();
    return 0;
}

void func_020c813c(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_020c8268(u8 *arg0) {
    arg0[0x38] = 0x1f;
    return 0;
}

void func_020c83b0(u8 *arg0, void *arg1) {
    func_020c85e8(arg0);
    *(void **)(arg0 + 0x34) = func_020a94b8(arg1);
}

