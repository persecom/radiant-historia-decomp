/* 23 functions from 0x020B44CC to 0x020B5364 (main), found by ds-decomp. */
#include "common.h"

extern void func_020ec548(void *);
extern u8 *func_020b3890(void);
extern void func_02022160(void *);
extern u8 *func_020b3880(void);
extern void func_0210dba0(void *);
extern void func_0210dbe8(void *);
extern void func_0210dac8(void *);
extern void func_0210c5dc(void *);
extern void func_0210e290(s32);
extern void func_0210f138(void);
extern void func_020a2c20(void);
extern void func_0210f6d4(void);
extern void func_020b4440(void);
extern void func_02108ffc(void);
extern void func_020a2e24(void);
extern void func_020bd2cc(void);
extern void func_020bc844(void);
extern void func_020ade0c(void);
extern void *data_021601e0[];
extern void *data_02162858;
extern void *data_02162854;
extern u8 *data_021601e8;
extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_021167ac(void *, s32);
extern u8 *func_020b3fd8(void);
extern void func_020b4150(void);
extern void func_020b41b8(u8);
extern void func_020b40a4(u32, s32 *, s32 *);
extern void func_020b4058(void);
extern u8 *func_020b4044(void);
extern u8 func_020b3be8(u16, s32);
extern void func_020aadd8(void);
extern s32 func_020b3a28(void);
extern void func_020af2c8(s32);
extern u8 *func_020ec294(void *, s32, s32, s32);
extern u8 *func_0210c924(void *, void *);
extern void func_020b5364(void);
extern void func_020b4f18(void);
extern void func_0210d9e4(void *);
extern void func_0210dab0(void *);
extern void func_021167f0(void *, void *);
extern void func_021168f8(void *, void *);
extern void func_0210da14(void *);
extern void func_0210c970(void *);
void func_020b44cc(void) {
    u8 *p = func_020b3880();
    func_0210dba0(p + 0x14);
    func_0210dbe8(p + 0x28);
    func_0210dac8(p);
    if (data_021601e0[1] != NULL) {
        func_0210c5dc(data_021601e0[1]);
    }
    data_021601e0[1] = NULL;
    func_0210e290(0);
    data_02162858 = NULL;
    data_02162854 = NULL;
    func_0210f138();
}

void func_020b453c(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_020b4564(void) {
    func_020a2c20();
    func_0210f6d4();
    data_02162858 = (void *)func_020b453c;
    data_02162854 = (void *)func_020b453c;
    func_020b4440();
    func_02108ffc();
}

void func_020b459c(void) {
    func_02022160(*(void **)(func_020b3890() + 0x258));
}

void func_020b45b0(void) {
    func_020a2e24();
    func_020bd2cc();
    func_020bc844();
    func_020ade0c();
    func_020b44cc();
}

void func_020b45cc(void) {
    s32 sp4;
    s32 sp0;
    u8 *p6 = func_020b3880();
    u8 *p4 = func_020b3fd8();
    u8 *p5 = func_020b3890();
    func_020b4150();
    func_020b41b8((u8)*(u32 *)(p6 + 0x3438));
    func_020b40a4(*(u32 *)(p4 + 0x2aa4), &sp4, &sp0);
    {
        s32 val = sp0;
        u8 *q = p4 + 0x2000;
        *(s32 *)(q + 0xa98) = val;
        *(s32 *)(q + 0xaa0) = val;
    }
    func_020b4058();
    *(u8 *)(p5 + 0x263) = func_020b3be8(*(u16 *)(func_020b4044() + 4), 0);
    func_020aadd8();
    if (func_020b3a28() == 1) {
        func_020af2c8(1);
    } else {
        func_020af2c8(0);
    }
}

void func_020b485c(void) {
    data_021601e8 = func_0210c594(0x1c, data_02155c3c);
    *(void **)(data_021601e8 + 0xc) = func_0210c594(0xc, data_02155c3c);
    *(void **)(data_021601e8 + 0x10) = func_0210c594(0xc, data_02155c3c);
    func_021167ac(data_021601e8, 0x60);
}

void *func_020b498c(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = func_020ec294(arg0, 0, 0x4000, arg2 << 14);
    if (arg1 == 0) {
        *(u32 *)(p + 0x14) = 0;
        *(u8 *)(*(u8 **)(*(u8 **)p + 8) + 0x70) |= 2;
    } else if (arg1 == 1) {
        *(u32 *)(p + 0x14) = 0x100000;
    }
    *(u32 *)(p + 0x18) = 0x40000;
    *(u32 *)(p + 0x1c) = 0x257000;
    return p;
}

void func_020b4af0(void *arg0) {
    if (arg0 != NULL) {
        func_020ec548(arg0);
    }
}

void *func_020b4b04(u16 arg0) {
    u8 *node = *(u8 **)data_021601e8;
    while (node != NULL) {
        if (*(u16 *)(node + 0x4c) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x64);
    }
    return NULL;
}

void func_020b52e0(u32 arg0) {
    *(u32 *)(data_021601e8 + 0x14) = arg0;
}

void func_020b52f4(s32 arg0) {
    u8 *p = *(u8 **)(data_021601e8 + 0x14);
    if (arg0 != 0) {
        *(u32 *)(p + 0x108) |= 0x10;
    } else if (arg0 == 0) {
        *(u32 *)(p + 0x108) &= ~0x10;
    }
}

