/* 32 functions from 0x020C93F4 to 0x020CA10C (main), found by ds-decomp. */
#include "common.h"

extern void func_020c9980();
extern void func_020c9404(u8 *, u16);
extern void func_020c94dc(u8 *);
extern void func_020c9348(u8 *, s32);
extern u8 *func_020c9c10(void *, s32);
extern void func_020c9590(u8 *);
extern u16 func_020c9808(u8 *);
extern s32 func_020c9888(u8 *);
extern s32 func_0201f884(s32);
extern s32 func_02020604(s32, s32);
extern s32 func_02020888(s32, s32);
extern u16 data_021445f8[];
extern u16 data_02162908[];
extern s32 func_0201f8cc(u32);
extern s32 func_020201f4(s32, s32);
extern s32 func_0201ff0c(void);
extern void func_020c7930(void *);
extern void func_020c9680(u8 *, s16 *, s16 *);
extern s32 func_020c992c(u8 *);
extern u16 func_020c9924(u8 *);
void func_020c93f4(u8 *arg0, u16 arg1) {
    *(u16 *)(arg0 + 0x3a) = arg1;
    func_020c9404(arg0, arg1);
}

void func_020c9404(u8 *arg0, u16 arg1) {
    u16 max = *(u16 *)(arg0 + 0x42);
    s16 diff = max - *(u16 *)(arg0 + 0x40);
    u16 old = *(u16 *)(arg0 + 0x3a);
    if (max != 0) {
        if (old >= max) {
            *(u16 *)(arg0 + 0x3a) = max - 1;
        }
    } else {
        *(u16 *)(arg0 + 0x3a) = 0;
    }
    if (diff > 0) {
        if (*(u16 *)(arg0 + 0x3e) > diff) {
            *(u16 *)(arg0 + 0x3e) = diff;
        }
    } else {
        *(u16 *)(arg0 + 0x3e) = 0;
    }
    if (old != *(u16 *)(arg0 + 0x3a)) {
        func_020c9348(arg0, 1);
        *(u8 *)(arg0 + 0x44) = 1;
    }
}

u8 func_020c9488(u8 *arg0) {
    return *(u8 *)(arg0 + 0x44);
}

u32 func_020c9490(u8 *arg0) {
    return arg0[0x44] | arg0[0x45];
}

u16 func_020c94a0(u8 *arg0) {
    return *(u16 *)(arg0 + 0x3a);
}

u16 func_020c94a8(u8 *arg0) {
    return *(u16 *)(arg0 + 0x3e);
}

s16 func_020c94b0(u8 *arg0) {
    return *(u16 *)(arg0 + 0x3a) - *(u16 *)(arg0 + 0x3e);
}

void func_020c94c8(u8 *arg0, u16 arg1, u16 arg2) {
    *(u16 *)(arg0 + 0x52) = arg1;
    *(u16 *)(arg0 + 0x54) = arg2;
    func_020c94dc(arg0);
}

void func_020c94dc(u8 *arg0) {
    u8 *obj = func_020c9c10(*(void **)(arg0 + 0x30), 0);
    ((void (*)(u8 *, s16))(*(void **)(obj + 0x10)))(obj, *(s16 *)(arg0 + 0x34) + *(u16 *)(arg0 + 0x52) - *(s16 *)(obj + 0x3e));
    ((void (*)(u8 *, s16))(*(void **)(obj + 0x14)))(obj, *(s16 *)(arg0 + 0x36) + *(u16 *)(arg0 + 0x54) - *(s16 *)(obj + 0x40));
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 1);
    ((void (*)(u8 *, s16))(*(void **)(obj + 0x10)))(obj, *(s16 *)(arg0 + 0x34) + *(u16 *)(arg0 + 0x52) - *(s16 *)(obj + 0x3e));
    ((void (*)(u8 *, s16))(*(void **)(obj + 0x14)))(obj, *(s16 *)(arg0 + 0x36));
    func_020c9590(arg0);
}

void func_020c9590(u8 *arg0) {
    s16 v = func_020c9808(arg0);
    s16 diff = (s16)(*(u16 *)(arg0 + 0x42) - *(u16 *)(arg0 + 0x40));
    u8 *obj1 = func_020c9c10(*(void **)(arg0 + 0x30), 1);
    s16 v1 = *(s16 *)(obj1 + 0x3e);
    u8 *obj2 = func_020c9c10(*(void **)(arg0 + 0x30), 2);
    if (diff <= 0) {
        return;
    }
    {
        s16 val = v - (s16)(diff + func_020c9924(obj2 + 0x30));
        if (val < 0xc) {
            val = 0xc;
        }
        *(u16 *)(obj2 + 0x40) = val;
        *(u16 *)(obj2 + 0x3e) = v1;
    }
}

void func_020c9610(u8 *arg0) {
    s16 b = 0;
    s16 a = 0;
    s32 v;
    s32 q;
    u8 *obj;
    func_020c9680(arg0, &b, &a);
    v = func_020c9888(arg0);
    q = func_0201f8cc(*(u16 *)(arg0 + 0x3e));
    func_020201f4(q, v);
    a += func_0201ff0c();
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 2);
    *(s16 *)(obj + 0x3c) = a;
    *(s16 *)(obj + 0x3a) = b;
    func_020c7930(obj);
}

void func_020c9680(u8 *arg0, s16 *arg1, s16 *arg2) {
    u8 *obj = func_020c9c10(*(void **)(arg0 + 0x30), 1);
    *arg2 = *(s16 *)(obj + 0x3c) + *(s16 *)(obj + 0x40);
    *arg1 = *(s16 *)(obj + 0x3a);
}

u16 func_020c9808(u8 *arg0) {
    u16 vals[4];
    u16 *dst = vals;
    u16 i;
    u16 r5 = *(u16 *)(arg0 + 0x54);
    vals[0] = data_021445f8[0];
    vals[1] = data_021445f8[1];
    vals[2] = data_021445f8[2];
    vals[3] = data_021445f8[3];
    for (i = 0; i < 2; i++) {
        r5 -= *(u16 *)((u8 *)func_020c9c10(*(void **)(arg0 + 0x30), dst[i * 2]) + 0x40);
    }
    return r5;
}

s32 func_020c9888(u8 *arg0) {
    s16 v = (s16)(*(u16 *)(arg0 + 0x42) - *(u16 *)(arg0 + 0x40));
    s32 r4 = func_0201f8cc(func_020c9808(arg0));
    if (v <= 0) {
        return 0;
    }
    r4 = func_02020604(r4, func_0201f884(*(s16 *)((u8 *)func_020c9c10(*(void **)(arg0 + 0x30), 2) + 0x40)));
    return func_02020888(r4, func_0201f884(v));
}

void func_020c98f8(u8 *arg0) {
    func_020c9590(arg0);
    func_020c9610(arg0);
    func_020c9348(arg0, 1);
    ((void (*)(u8 *))func_020c9404)(arg0);
}

u16 func_020c9924(u8 *arg0) {
    return *(u16 *)(arg0 + 8);
}

s32 func_020c992c(u8 *arg0) {
    *(u32 *)arg0 = 0;
    *(u16 *)(arg0 + 4) = 0;
    return 0;
}

void func_020c9940(void) {
    func_020c9980();
}

extern void func_0210c5dc(void *);
extern void func_020c99e4(u8 *, void *);
void func_020c994c(u8 *arg0) {
    if (*(void **)arg0 == NULL) {
        return;
    }
    if (*(void **)arg0 != NULL) {
        func_0210c5dc(*(void **)arg0);
        *(void **)arg0 = NULL;
    }
    *(void **)arg0 = NULL;
    *(u16 *)(arg0 + 4) = 0;
}

void func_020c9980(u8 *arg0) {
    u16 i;
    if (*(void **)arg0 == NULL) {
        return;
    }
    for (i = 0; i < *(u16 *)(arg0 + 4); i++) {
        func_020c99e4(arg0, (*(void ***)arg0)[i]);
        (*(void ***)arg0)[i] = NULL;
    }
    func_020c994c(arg0);
}

void func_020c99e4(u8 *arg0, void *arg1) {
    if (arg0 == NULL || arg1 == NULL) {
        return;
    }
    ((void (*)(void *))(*(void **)((u8 *)arg1 + 4)))(arg1);
}

extern u8 *func_020c641c(s32);
extern void func_0210968c(s32, s32, s32);
extern void func_02108eec(s32, s32);
extern void func_020c9cec(void);
extern void func_02109790(s32);
extern void func_0210dc88(void);
extern void func_020a2c20(void);
extern void func_020ca010(void);
extern s32 data_02162868;
extern s32 data_0216bf84;
extern u8 *data_02160234;
u8 *func_020c9b24(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *obj = (*(u8 ***)arg0)[arg1];
    if (obj != NULL) {
        return obj;
    }
    obj = func_020c641c(arg2);
    (*(u8 ***)arg0)[arg1] = obj;
    ((void (*)(u8 *))(*(void **)obj))(obj);
    return obj;
}

u32 func_020c9b64(u8 *arg0) {
    register u32 ret = 0;
    u16 count = *(u16 *)(arg0 + 4);
    u16 i;
    for (i = 0; i < count; i++) {
        u8 *obj = (*(u8 ***)arg0)[i];
        if (obj != NULL) {
            ret |= ((u32 (*)(u8 *))(*(void **)(obj + 8)))(obj);
        }
    }
    return ret;
}

u32 func_020c9bb8(u8 *arg0) {
    register u32 ret = 0;
    u16 count = *(u16 *)(arg0 + 4);
    u16 i;
    for (i = 0; i < count; i++) {
        u8 *obj = (*(u8 ***)arg0)[i];
        if (obj != NULL && *(void **)(obj + 0xc) != NULL) {
            ret |= ((u32 (*)(u8 *))(*(void **)(obj + 0xc)))(obj);
        }
    }
    return ret;
}

extern u16 func_020c9c34(u8 *);
u8 *func_020c9c10(void *arg0, s32 arg1) {
    if ((u32)arg1 >= func_020c9c34(arg0)) {
        return NULL;
    }
    return (*(u8 ***)arg0)[arg1];
}

u16 func_020c9c34(u8 *arg0) {
    return *(u16 *)(arg0 + 4);
}

s32 func_020c9c3c(void) {
    data_02162868 = 0;
    data_0216bf84 = 0;
    func_0210968c(3, -16, 1);
    func_02108eec(0, 1000);
    func_02108eec(1, 1000);
    func_020c9cec();
    func_0210968c(3, 0, 30);
    func_02109790(3);
    for (;;) {
        if (*(u32 *)(data_02160234 + 0x90) != 0) {
            break;
        }
        func_0210dc88();
    }
    func_020a2c20();
    func_020ca010();
    func_0210dc88();
    data_02162868 = 0;
    return 2;
}

