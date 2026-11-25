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
extern u16 data_021626aa;
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
extern s32 func_020a9738(void *, u16);
extern void func_020a8810(void *, s32);
extern void func_0210d6a4(s32, s32);
extern void func_0210d27c(s32);
extern void func_0210cba0(void *, u32);
extern void func_0210c9cc(void *);
extern s32 func_020f5364(void *, void *);
extern void func_0205443c(s32);
extern void func_020f58c0(void *);
extern void func_020468b0(s32);
extern void func_02044c48(s32);
void func_020fdc0c(void) {
    u8 *mgr = data_02162880;
    u8 *node = *(u8 **)(mgr + 0x14);
    if (*(u8 *)(mgr + 0x1e8) != 0) return;
    *(u32 *)(mgr + 0x30) += data_021600a0;
    {
        s32 id = (s32)data_021600bc;
        if (func_020f5730(id) == 0 &&
            func_020f5730(id - 6) == 1 &&
            func_020f5730(id + 3) != 1 &&
            func_020f5730(id + 2) != 1) {
            if (func_020f5730(id + 1) == 1) {
                if (*(u32 *)(mgr + 0x18) & 0x10) {
                    func_020f46cc(mgr + 0x1c, 2);
                    func_020f4174();
                    *(u32 *)(mgr + 0x18) &= ~0x10;
                }
                if (*(u8 **)(mgr + 0x130) != NULL) {
                    *(u32 *)(*(u8 **)(mgr + 0x130) + 0x40) = 0;
                }
                *(u32 *)(*(u8 **)(data_021600ac + 0xb4) + 0x40) = 0;
                *(u32 *)(*(u8 **)(data_021600ac + 0x104) + 0x40) = 0;
                if (*(u32 *)(mgr + 0x158) == 0) {
                    if (*(u32 *)(mgr + 0x18) & 1) {
                        if (*(u32 *)(mgr + 0x18) & 0x1000000) {
                            *(u32 *)(mgr + 0x18) &= ~0x1000001;
                        } else {
                            *(u32 *)(data_021600b8 + 0x38) = 0;
                            func_020a994c(data_021600ac + 0xb8);
                            func_020a994c(data_021600ac + 0x108);
                            func_020a98f4(mgr + 0x144);
                            func_020a994c(mgr + 0x144);
                            func_020a98a0(mgr + 0x144);
                            if (*(u8 **)(mgr + 0x128) != NULL) {
                                func_020a957c(mgr + 0x128);
                                *(u8 **)(mgr + 0x128) = NULL;
                            }
                        }
                    }
                }
                func_0203fcc0(0);
                func_0203fcd4(0);
                *(u32 *)(mgr + 0x18) &= ~0x801;
                if (*(s32 *)(mgr + 0x2c) > 1) *(s32 *)(mgr + 0x2c) = 1;
                if (*(s32 *)(mgr + 0x34) > 1) *(s32 *)(mgr + 0x34) = 1;
                if (*(u32 *)(mgr + 0x38) != 0) {
                    u8 *a = func_02047820(*(u16 *)(mgr + 0x3c));
                    if (a != NULL) {
                        if (*(u32 *)(mgr + 0x38) & 8) {
                            if (!(*(u32 *)(a + 0xac) & 8)) {
                                *(u32 *)(mgr + 0x38) &= ~8;
                            }
                        }
                        if (*(u32 *)(mgr + 0x38) & 0x1000) {
                            if (!(*(u32 *)(a + 0xac) & 0x1000)) {
                                *(u32 *)(mgr + 0x38) &= ~0x1000;
                            }
                        }
                    }
                }
            } else if ((data_021626a6 & 8) &&
                       func_020f5730(id + 4) == 0 &&
                       func_020f5730(id + 3) == 0 &&
                       (u32)func_020a567c() >= 3) {
                u8 *a;
                func_020a5644(0);
                a = *(u8 **)(data_02160204 + 0x40);
                while (a != NULL) {
                    if ((*(u32 *)(a + 0xac) & 0x1000) || (*(u32 *)(a + 0xac) & 8)) {
                        *(u32 *)(a + 0xac) |= 0x2000000;
                    }
                    a = *(u8 **)(a + 0x13c);
                }
            }
        }
    }
    if (*(u32 *)(mgr + 0x18) & 0x200) {
        s32 v[3];
        s32 *src = *(s32 **)(mgr + 0x17c);
        v[0] = src[0];
        v[1] = src[1];
        v[2] = src[2];
        v[1] += 0x1c000;
        func_020f4668(v);
    }
    if (*(s32 *)(node + 8) != 0) {
        return;
    }
    {
        u8 *p = data_021600b8;
        if (p != NULL && *(u8 *)(p + 0x24) == 1) {
            *(u32 *)(mgr + 0x18) = (*(u32 *)(mgr + 0x18) & ~0x20000000) | 0x80000000;
            func_020f67a8(mgr);
        }
    }
    if (*(s32 *)(mgr + 0x2c) != 0) {
        s32 t = *(s32 *)(mgr + 0x2c) - data_021600a0;
        *(s32 *)(mgr + 0x2c) = t;
        if (t > 0) return;
        *(s32 *)(mgr + 0x2c) = 0;
    }
    if (*(s32 *)(mgr + 0x34) != 0) {
        if (*(s32 *)(mgr + 0x30) < *(s32 *)(mgr + 0x34)) return;
        *(s32 *)(mgr + 0x34) = 0;
    }
    if (*(u32 *)(mgr + 0x38) != 0) {
        u8 *a = func_02047820(*(u16 *)(mgr + 0x3c));
        if (a != NULL) {
            if (*(u32 *)(mgr + 0x38) & 8) {
                if (!(*(u32 *)(a + 0xac) & 8)) {
                    func_020522d4(a, 0, 0);
                    *(u32 *)(mgr + 0x38) &= ~8;
                }
            }
            if (*(u32 *)(mgr + 0x38) & 0x1000) {
                if (!(*(u32 *)(a + 0xac) & 0x1000)) {
                    *(u32 *)(mgr + 0x38) &= ~0x1000;
                }
            }
            if (*(u32 *)(a + 0xac) & 8) return;
            if (*(u32 *)(a + 0xac) & 0x1000) return;
        }
    }
    if (*(u32 *)(mgr + 0x18) & 0x10) {
        u8 *p = data_02160c38;
        if ((*(u32 *)(p + 0x2c) | *(u32 *)(p + 0x30) | *(u32 *)(p + 0x34)) != 0) return;
        *(void **)(p + 0x14) = *(void **)(mgr + 0x17c);
        *(u32 *)(p + 0x2c) = 0;
        *(u32 *)(p + 0x30) = 0;
        *(u32 *)(p + 0x34) = 0;
        *(u32 *)(mgr + 0x18) &= ~0x10;
    }
}
