/* 59 functions from 0x02005C90 to 0x02006C38 (main), found by ds-decomp. */
#include "common.h"

extern u32 func_02008154(void);
extern s32 func_02005c80(u16, void *, void *);
extern void func_02005dd8(void);
extern u32 func_02008128(void);
extern s32 func_02009148(u16, void *);
extern void func_02008168(u32);
extern void func_0200813c(u32);
extern void func_02012e3c(void);
extern void func_02005d70(void);
extern s32 func_02005c0c(u16, void *, void (*)(void), BOOL);
extern s32 func_02005d0c(u16);
extern void func_02005ea8(s32, const char *, char *);
s32 func_02005c90(u16 arg0, void *arg1, void (*arg2)(void), BOOL arg3) {
    u32 r5;
    s32 r4;
    if (arg3) {
        r5 = func_02008154();
    } else {
        r5 = func_02008128();
    }
    r4 = func_02009148(arg0, arg1);
    if (r4 == 0) {
        if (arg2 != NULL) {
            arg2();
        }
        *(u16 *)((u8 *)arg1 + 4) = arg0;
    }
    if (arg3) {
        func_02008168(r5);
    } else {
        func_0200813c(r5);
    }
    return r4;
}

s32 func_02005cfc(u16 arg0, void *arg1, void *arg2) {
    return func_02005c90(arg0, arg1, (void (*)(void))arg2, 0);
}

s32 func_02005d0c(u16 arg0) {
    return func_02005c0c(arg0, (void *)0x02ffffe8, func_02005d70, 1);
}

s32 func_02005d2c(u16 arg0) {
    return func_02005d0c(arg0);
}

extern void func_02005d58(void);
extern s32 func_02005d38(u16);
s32 func_02005d38(u16 arg0) {
    return func_02005c90(arg0, (void *)0x02ffffe8, func_02005d58, 1);
}

void func_02005d58(void) {
    *(volatile u16 *)0x04000204 &= ~0x80;
}

void func_02005d70(void) {
    *(volatile u16 *)0x04000204 |= 0x80;
}

s32 func_02005d88(u16 arg0) {
    return func_02005c80(arg0, (void *)0x02ffffe0, func_02005dd8);
}

extern s32 func_02005cfc(u16, void *, void *);
extern void func_02005dc0(void);
s32 func_02005da4(u16 arg0) {
    return func_02005cfc(arg0, (void *)0x02ffffe0, func_02005dc0);
}

void func_02005dc0(void) {
    *(volatile u16 *)0x04000204 &= ~0x800;
}

void func_02005dd8(void) {
    *(volatile u16 *)0x04000204 |= 0x800;
}

u16 func_02005df0(u8 *arg0) {
    return *(u16 *)(arg0 + 4);
}

s32 func_02005df8(void) {
    volatile u32 *p = (volatile u32 *)0x02ffffb0;
    u32 lz;
    s32 id;

    lz = __clz(*p);
    if (lz != 32) {
        id = 0x40;
    } else {
        p++;
        lz = __clz(*p);
        if (lz == 32) {
            return -3;
        }
        id = 0x60;
    }
    id += lz;
    *p &= ~(0x80000000U >> lz);
    return id;
}

void func_02005e50(s32 id) {
    volatile u32 *p = (volatile u32 *)0x02ffffb0;
    if (id >= 0x60) {
        p++;
        id -= 0x60;
    } else {
        id -= 0x40;
    }
    *p |= (0x80000000U >> id);
}

void func_02005e80(s32 arg0, const char *arg1, ...) {
    char *vlist = (char *)((u32)&arg1 & ~3) + 4;
    func_02005ea8(arg0, arg1, vlist);
}

extern void func_02005ec0(void);
void func_02005ea8(s32 arg0, const char *arg1, char *arg2) {
    ((void (*)(s32, s32, const char *, char *))func_02005ec0)(arg0, 0x7fffffff, arg1, arg2);
}

void func_02005ec0(void) {
    func_02012e3c();
}

void func_02005ee4(void **arg0, u8 *arg1) {
    u8 *node = (u8 *)arg0[0];
    while (node != NULL && *(u32 *)(node + 0x70) <= *(u32 *)(arg1 + 0x70)) {
        if (node == arg1) {
            return;
        }
        node = *(u8 **)(node + 0x80);
    }
    if (node == NULL) {
        u8 *tail = (u8 *)arg0[1];
        if (tail == NULL) {
            arg0[0] = arg1;
        } else {
            *(u8 **)(tail + 0x80) = arg1;
        }
        *(u8 **)(arg1 + 0x7c) = tail;
        *(u8 **)(arg1 + 0x80) = NULL;
        arg0[1] = arg1;
    } else {
        u8 *prev = *(u8 **)(node + 0x7c);
        if (prev == NULL) {
            arg0[0] = arg1;
        } else {
            *(u8 **)(prev + 0x80) = arg1;
        }
        *(u8 **)(arg1 + 0x7c) = prev;
        *(u8 **)(arg1 + 0x80) = node;
        *(u8 **)(node + 0x7c) = arg1;
    }
}

extern u32 data_0215cdf0[4];
extern s32 func_02005c80(u16, void *, void *);
extern void func_02005dd8(void);
u32 func_020062c8(void) {
    return data_0215cdf0[0];
}

extern void func_02008114(void);
extern void func_02008454(void);
extern u32 data_0215cde4[];
void func_020067c8(void) {
    func_02008114();
    while (1) {
        func_02008454();
    }
}

extern void func_02005ea8(s32, const char *, char *);
void func_0200683c(u8 *arg0, u32 arg1) {
    *(u32 *)(arg0 + 0xb4) = arg1;
}

