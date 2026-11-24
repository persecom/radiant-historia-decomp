/* 26 functions from 0x02138E00 to 0x02139CDC (main), found by ds-decomp. */
#include "common.h"
extern char data_0215ccac[];
extern char data_0215ccd8[];

extern char data_0215cab0[];
extern char data_0215cae0[];
extern char data_0215cb10[];
extern char data_0215cb40[];
extern char data_0215cb70[];
extern char data_0215cba0[];
extern char data_0215cbd4[];
extern char data_0215cc04[];
extern void func_02126c20(const char *);
extern void *func_02138fd0(void *, s32);
extern void *func_02138f34(void *, s32);
extern void func_02130880(void *, u8 *, u32);
extern void func_021309c8(void *);
extern s32 func_02126c88(void *);
extern void func_021396e8(u8 *, u32);
extern void func_02126c98(void *, s32);
extern void func_02126cb0(void *, u32, u32, u32, u32);
extern void func_02126e50(void *, void *, void *, s32);
extern void func_02126e60(void *, void *, void *, s32);
extern void func_02139a9c();
extern void func_02126c00(void);
extern void func_02126c0c(void);
extern void func_0213937c(void *, void *);
extern void func_02139450(u8 *, u8 *, s32, u8);
extern void func_02126c00(void);
extern void func_02126c0c(void);
extern void func_02139804(void *);
extern void func_021398d0(void *);
extern void func_0213999c(u8 *, u8 *);
extern char data_0215cc64[];
extern void (*data_0215cc6c[])(void *, s32, void *);
extern s32 func_020138b8(const void *, const void *, u32);
extern u32 func_02126c90(void *);
extern void func_02130b48(s32, s32, void *);
typedef void (*Fn3)(void *, s32, u32);
typedef void (*Fn2)(void *, s32);
typedef struct { u8 pad[0x38]; Fn3 f38; } Vt3;
typedef struct { u8 pad[0x30]; Fn2 f30; } Vt2;

extern void func_0212a9f4(void);
extern void func_02139be8(u32, u32, u32);
extern void func_0212a9f8(void);

extern void func_02126d40(void *);

void func_0213999c(u8 *arg0, u8 *arg1) {
    s32 i;
    void *p = *(void **)(arg1 + 8);
    if (*(s32 *)(arg0 + 0x9c) == 1) {
        for (i = 0; i < *(s32 *)(arg0 + 0x8c); i++) {
            u32 v = func_02126c90(p);
            s32 extra = v + (*(s32 **)(arg0 + 0xc8))[i] + *(s32 *)(arg0 + 0xcc);
            (*(void (**)(void *, s32, u32))(*(u8 **)arg1 + 0x38))(*(void **)arg1, i, extra);
        }
    } else {
        u32 v = func_02126c90(p);
        (*(void (**)(void *, s32))(*(u8 **)arg1 + 0x30))(*(void **)arg1, *(s32 *)(arg0 + 0xcc) + v);
    }
}

s32 func_02139a34(u8 *arg0) {
    s32 i;
    s32 ret = 0;
    if (*(s32 *)(arg0 + 0x6c) == 1) {
        return ret;
    }
    for (i = 0; i < *(s32 *)(arg0 + 0xa8); i++) {
        if (func_02126c88(*(void **)(arg0 + 0x20 + i * 0xc)) != 0) {
            break;
        }
    }
    if (i == *(s32 *)(arg0 + 0xa8)) {
        ret = 1;
    }
    return ret;
}

void func_02139a9c(void *arg0, void *arg1) {
    if (arg0 != NULL) {
        void (*f)(void *, void *) = *(void (**)(void *, void *))((u8 *)arg0 + 0xe0);
        if (f != NULL) {
            f(arg0, arg1);
        }
    }
}

s32 func_02139ab8(u8 *arg0, s32 arg1, u16 *arg2) {
    s32 i;
    s32 found = 0x7fffffff;

    for (i = 0; i < arg1 - 3; i++) {
        if (func_020138b8(arg0 + i, data_0215cc64, 4) == 0) {
            found = (i < 0x7fffffff) ? i : 0x7fffffff;
            break;
        }
    }
    if (found != 0x7fffffff) {
        *arg2 = found;
        return 0;
    }
    *arg2 = 0;
    return -1;
}

void func_02139b34(u8 *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 val = (*(s32 *)(arg0 + arg2 * 4 + 4) - 0x40) & 0x3ff;
    u8 *p = arg0 + 0x14 + (arg2 << 11);
    u8 *dst = p + val * 2;
    s32 c;
    *(s32 *)(arg0 + arg2 * 4 + 4) = val;
    c = *(s32 *)(arg0 + 0xc);
    if ((arg1 & 0x1f) != 0 || (c & 0x1f) != 0) {
        func_02130b48(arg1, c, dst);
    }
    data_0215cc6c[*(s32 *)((u8 *)arg0 + 4 + arg2 * 4) >> 6](p + *(s32 *)((u8 *)arg0 + 4 + arg2 * 4) * 2, *(u32 *)(arg0 + 0x10), arg3);
}

void func_02139bbc(u32 arg0, u32 arg1, u32 arg2) {
    func_0212a9f4();
    func_02139be8(arg0, arg1, arg2);
    func_0212a9f8();
}
