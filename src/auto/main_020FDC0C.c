/* 1 function from 0x020FDC0C to 0x020FE83C (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02162880;
extern u8 *data_021600ac;
extern u8 data_02162820[16];
extern u32 data_021600a0;
extern u16 data_021626a6;
extern u32 data_021600bc;
extern u8 *data_021600b8;
extern u8 *data_02160204;
extern u8 data_02160c74[8];
extern u8 *data_02160c38;
extern u16 data_021626a8;
extern u16 data_021628f8;
extern s32 func_020f5730(s32);
extern void func_020f46cc(void *, u32);
extern void func_020f4174(void);
extern void func_020a994c(void *);
extern void func_020a98f4(void *);
extern void func_020a98a0(void *);
extern void func_020a957c(void *);
extern void func_0203fcc0(s32);
extern void func_0203fcd4(s32);
extern void *func_02047820(u16);
extern void func_020522d4(void *, s32, s32);
extern s32 func_02064b3c(s32, s32, s32, s32);
extern s32 func_020a567c(void);
extern void func_020a5644(s32);
extern void func_020f67a8(void *);
extern void func_020f4668(void *);
extern void func_020a9610(void *, void *, u32, void *, s32, s32);
extern void func_020a98ac(void *);
extern void func_020a9738(void *, s32);
extern void func_020a8810(void *, s32);
extern void func_0210d6a4(s32, s32);
extern void func_0210d27c(s32);
void func_020fdc0c(void) {
    u8 *mgr = data_02162880;
    u8 **g1 = (u8 **)&data_021600ac;
    s32 zero = 0;
    u8 *node = *(u8 **)(mgr + 0x14);
    if (*(u8 *)(mgr + 0x1e8) != 0) return;
    s32 id = data_021600bc;
    *(u32 *)(mgr + 0x30) += data_021600a0;
    if (func_020f5730(id) != 0) goto conv;
    if (func_020f5730(id - 6) != 1) goto conv;
    if (func_020f5730(id + 3) == 1) goto conv;
    if (func_020f5730(id + 2) == 1) goto conv;
    if (func_020f5730(id + 1) != 1) goto flagcheck;
    if (*(u32 *)(mgr + 0x18) & 0x10) {
        func_020f46cc(mgr + 0x1c, 2);
        func_020f4174();
        *(u32 *)(mgr + 0x18) &= ~0x10;
    }
    {
        u8 *p = *(u8 **)(mgr + 0x130);
        if (p) *(u32 *)(p + 0x40) = zero;
        p = *(u8 **)((u8 *)*g1 + 0xb4);
        *(u32 *)(p + 0x40) = zero;
        p = *(u8 **)((u8 *)*g1 + 0x104);
        *(u32 *)(p + 0x40) = zero;
    }
    if (*(u32 *)(mgr + 0x158) != 0) goto flagcheck;
    if ((*(u32 *)(mgr + 0x18) & 1) == 0) goto flagcheck;
    if (*(u32 *)(mgr + 0x18) & 0x1000000) {
        *(u32 *)(mgr + 0x18) &= ~1;
        *(u32 *)(mgr + 0x18) &= ~0x1000000;
        goto flagcheck;
    }
    {
        u8 *p = *(u8 **)&data_021600b8;
        *(u32 *)(p + 0x38) = zero;
    }
    func_020a994c((u8 *)*g1 + 0xb8);
    func_020a994c((u8 *)*g1 + 0x108);
    func_020a98f4(mgr + 0x144);
    func_020a994c(mgr + 0x144);
    func_020a98a0(mgr + 0x144);
    if (*(u8 **)(mgr + 0x128) != 0) {
        func_020a957c(mgr + 0x128);
        *(u8 **)(mgr + 0x128) = (u8 *)zero;
    }
    func_0203fcc0(zero);
    func_0203fcd4(zero);
    {
        u32 f = *(u32 *)(mgr + 0x18);
        f &= ~1;
        f &= ~0x800;
        *(u32 *)(mgr + 0x18) = f;
    }
    if (*(u32 *)(mgr + 0x2c) > 1) *(u32 *)(mgr + 0x2c) = 1;
    if (*(u32 *)(mgr + 0x34) > 1) *(u32 *)(mgr + 0x34) = 1;
    if (*(u32 *)(mgr + 0x38) != 0) {
        u8 *a = func_02047820(*(u16 *)(mgr + 0x3c));
        if (a) {
            u32 f = *(u32 *)(mgr + 0x38);
            if (f & 8) {
                u32 af = *(u32 *)(a + 0xac);
                if (!(af & 8)) *(u32 *)(mgr + 0x38) = f & ~8;
            }
            f = *(u32 *)(mgr + 0x38);
            if (f & 0x1000) {
                u32 af = *(u32 *)(a + 0xac);
                if (!(af & 0x1000)) *(u32 *)(mgr + 0x38) = f & ~0x1000;
            }
        }
    }
    goto conv;
flagcheck:
    {
        u8 *p = *(u8 **)&data_02160204;
        u8 *a = *(u8 **)((u8 *)p + 0x40);
        if (a) {
            u32 af = *(u32 *)(a + 0xac);
            if (af & 0x1000) goto conv;
            if (af & 8) {
                af = *(u32 *)(a + 0xac);
                *(u32 *)(a + 0xac) = af | 0x2000000;
            }
        }
    }
conv:
    if (data_021626a6 & 8) {
        if (func_020f5730(id + 4) == 0 && func_020f5730(id + 3) == 0) {
            if (func_020a567c() >= 3) {
                func_020a5644(zero);
            }
        }
    }
    {
        s32 v[3];
        u8 *src = *(u8 **)(mgr + 0x17c);
        v[0] = *(s32 *)(src + 0);
        v[1] = *(s32 *)(src + 4);
        v[2] = *(s32 *)(src + 8);
        v[1] += 0x1c000;
        func_020f4668(v);
    }
    if (*(u32 *)(node + 0x8) != 0) return;
    func_020f67a8(mgr);
    return;
}
