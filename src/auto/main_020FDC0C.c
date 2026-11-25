/* 1 function from 0x020FDC0C to 0x020FE83C (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02162880;
extern u8 *data_021600ac;
extern u8 data_02162820[16];
extern u32 data_021600a0;
extern u16 data_021626a6;
extern u32 data_021600bc;
extern u8 *data_021600b8;
extern u8 *data_02160200;
extern u8 *data_02160204;
extern u8 data_02160c74[8];
extern u8 *data_02160c38;
extern u16 data_021626a8;
extern u16 data_021626aa;
extern u16 data_021628f8;
extern u32 data_021601d4;
extern u32 data_02146330;
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
    *(u32 *)(mgr + 0x30) += *(u32 *)data_02162820;
    if (func_020f5730(0xb01) == 0 &&
        func_020f5730(0xb01 - 6) == 1 &&
        func_020f5730(0xb01 + 3) != 1 &&
        func_020f5730(0xb01 + 2) != 1) {
        if (func_020f5730(0xb01 + 1) == 1) {
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
            if (*(u32 *)(mgr + 0x158) != 0 || (*(u32 *)(mgr + 0x18) & 1)) {
                if (*(u32 *)(mgr + 0x18) & 0x1000000) {
                    *(u32 *)(mgr + 0x18) &= ~1;
                    *(u32 *)(mgr + 0x18) &= ~0x1000000;
                } else {
                    *(u32 *)(*(u8 **)&data_021600a0 + 0x38) = 0;
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
            func_0203fcc0(0);
            func_0203fcd4(0);
            *(u32 *)(mgr + 0x18) &= ~1;
            *(u32 *)(mgr + 0x18) &= ~0x800;
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
                   func_020f5730(0xb01 + 4) == 0 &&
                   func_020f5730(0xb01 + 3) == 0 &&
                   (u32)func_020a567c() >= 3) {
            u8 *a;
            func_020a5644(0);
            a = *(u8 **)(*(u8 **)&data_021600bc + 0x40);
            while (a != NULL) {
                if ((*(u32 *)(a + 0xac) & 0x1000) || (*(u32 *)(a + 0xac) & 8)) {
                    *(u32 *)(a + 0xac) |= 0x2000000;
                }
                a = *(u8 **)(a + 0x13c);
            }
        }
    }
    if (*(u32 *)(mgr + 0x18) & 0x200) {
        struct Vec3 { s32 x, y, z; };
        struct Vec3 v = *(struct Vec3 *)(*(void **)(mgr + 0x17c));
        v.y += 0x1c000;
        func_020f4668(&v);
    }
    if (*(s32 *)(node + 8) == 0) {
        {
            u8 *p = *(u8 **)&data_02160c74;
            if (p != NULL && *(u8 *)(p + 0x24) == 1) {
                *(u32 *)(mgr + 0x18) = (*(u32 *)(mgr + 0x18) & ~0x20000000) | 0x80000000;
                func_020f67a8(mgr);
            }
        }
        if (*(s32 *)(mgr + 0x2c) != 0) {
            s32 t = *(s32 *)(mgr + 0x2c) - *(s32 *)data_02162820;
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
            if ((*(u32 *)(data_02160c38 + 0x2c) | *(u32 *)(data_02160c38 + 0x30) | *(u32 *)(data_02160c38 + 0x34)) != 0) return;
            *(void **)(data_02160c38 + 0x14) = *(void **)(mgr + 0x17c);
            *(u32 *)(data_02160c38 + 0x2c) = 0;
            *(u32 *)(data_02160c38 + 0x30) = 0;
            *(u32 *)(data_02160c38 + 0x34) = 0;
            *(u32 *)(mgr + 0x18) &= ~0x10;
        }
        if (*(u32 *)(mgr + 0x18) & 1) {
            if (*(u32 *)(mgr + 0x158) == 0 && !(*(u32 *)(mgr + 0x18) & 0x800)) {
                func_0203fcd4(1);
            }
            *(u8 *)(data_02160204 + 0x121) |= 1;
            if (*(u32 *)(mgr + 0x158) == 0) {
                if (((data_021626a8 & 1) ||
                     (data_021626a8 & 2) ||
                     data_021628f8 != 0 ||
                     (data_021626aa & 0x400) ||
                     func_02064b3c(0xd8, 4, 0x28, 0xe) != 0) &&
                    func_020a567c() == 8) {
                    if ((data_021626aa & 0x400) ||
                        func_02064b3c(0xd8, 4, 0x28, 0xe) != 0 ||
                        (*(u32 *)(data_02160200 + 0x160) & 4)) {
                        *(u8 *)(data_02160204 + 0x121) |= 2;
                    }
                    *(u32 *)(mgr + 0x18) &= ~0x800;
                    func_0210d6a4(0x1e, 1);
                    func_0210d27c(2);
                    func_0203fcd4(0);
                    if (*(s8 *)(mgr + 0x1c2) != -1) {
                        if (!(*(u32 *)(mgr + 0x18) & 0x80000000)) {
                            if (*(u32 *)(mgr + 0x18) & 0x1000000) {
                                *(u32 *)(mgr + 0x18) &= ~1;
                                *(u32 *)(mgr + 0x18) &= ~0x1000000;
                                return;
                            }
                            if (*(u32 *)(mgr + 0x128) == 0) {
                                *(u32 *)(mgr + 0x18) &= ~1;
                            }
                            *(s32 *)(mgr + 0x178) += 1;
                            func_020a994c(mgr + 0x144);
                            func_020a9610(mgr + 0x12c, *(void **)(mgr + 0x128), *(u32 *)(mgr + 0x178), *(void **)(mgr + 0x130), 0, -100);
                            if (*(u32 *)(mgr + 0x13c) == 0) {
                                *(u32 *)(mgr + 0x18) &= ~1;
                            } else {
                                s32 w, h;
                                u8 *p;
                                func_020a98ac(mgr + 0x144);
                                *(u32 *)(*(u8 **)(mgr + 0x130) + 0x40) = 1;
                                func_020a8810(*(void **)(data_021600ac + 0x78), 7);
                                switch (*(s8 *)(mgr + 0x1c2)) {
                                    case 0:
                                    case 5:
                                        if (*(s8 *)(mgr + 0x1c2) == 5) {
                                            *(u32 *)(mgr + 0x18) |= 0x400;
                                        }
                                        w = 0xcc;
                                        h = 0x14;
                                        break;
                                    case 1:
                                        func_020a8810(*(void **)(data_021600ac + 0x78), 0x10);
                                        *(u32 *)(mgr + 0x18) |= 0x800;
                                        w = 0xcc;
                                        h = 0x52;
                                        break;
                                    case 2:
                                        w = func_020a9738(*(void **)(*(void **)(mgr + 0x12c)), (u16)*(u32 *)(mgr + 0x178));
                                        *(u32 *)(mgr + 0x18) |= 0x400;
                                        h = 0xb4;
                                        break;
                                    case 3:
                                        w = func_020a9738(*(void **)(*(void **)(mgr + 0x12c)), (u16)*(u32 *)(mgr + 0x178));
                                        *(u32 *)(mgr + 0x18) |= 0x800;
                                        h = 0x50;
                                        break;
                                    case 4:
                                        *(u32 *)(mgr + 0x18) |= 0x800;
                                        w = 0x80;
                                        h = 0x90;
                                        break;
                                }
                                p = *(u8 **)(mgr + 0x130);
                                if (*(s8 *)(mgr + 0x1c2) == 4) {
                                    *(s32 *)(p + 0x44) = 0x3000;
                                } else {
                                    *(s32 *)(p + 0x44) = (0x80 - w / 2) << 12;
                                }
                                *(s32 *)(p + 0x48) = h << 12;
                                *(s32 *)(p + 0x4c) = 0x2bc000;
                                *(u32 *)(mgr + 0x18) |= 1;
                                return;
                            }
                        }
                    } else {
                        *(u32 *)(mgr + 0x18) &= ~1;
                    }
                    goto after_bit1;
                }
            }
            if (*(u32 *)(mgr + 0x158) == 0) return;
            if (!((data_021626a8 & 1) ||
                  (data_021626a8 & 2) ||
                  data_021628f8 != 0 ||
                  (data_021626aa & 0x400) ||
                  func_02064b3c(0xd8, 4, 0x28, 0xe) != 0)) return;
            if (func_020a567c() != 8) return;
            if ((data_021626aa & 0x400) ||
                func_02064b3c(0xd8, 4, 0x28, 0xe) != 0 ||
                (*(u32 *)(data_02160200 + 0x160) & 4)) {
                *(u8 *)(data_02160204 + 0x121) |= 2;
            }
            func_020a98f4(mgr + 0x144);
            func_0210d6a4(0x1e, 1);
            *(u32 *)data_02160c74 = 0;
            return;
        }
after_bit1:
        if (*(u32 *)(mgr + 0x18) & 0x400) {
            if (*(u32 *)(mgr + 0x158) != 0) return;
            *(u32 *)(mgr + 0x18) &= ~0x400;
        }
        if (*(u32 *)(mgr + 0x18) & 0x100) {
            s32 cnt = 0;
            u8 *p = *(u8 **)(data_021600b8 + 0xc);
            while (p != NULL) {
                if (*(u32 *)(*(u8 **)(p + 0x14) + 8) == 0) cnt++;
                p = *(u8 **)(p + 0x1e4);
            }
            if (cnt != 0) return;
            *(u32 *)(mgr + 0x18) &= ~0x100;
        }
        if (*(u32 *)(mgr + 0x18) & 0x20) {
            s8 idx = *(s8 *)(data_02160204 + 0x86);
            if (idx == -1) return;
            func_0210cba0(*(void **)(mgr + 0x14), *(u32 *)(mgr + 0x18c + idx * 4));
            *(u32 *)(mgr + 0x18) &= ~0x20;
            *(u32 *)(data_02160200 + 0x160) &= ~8;
            *(u32 *)(data_02160200 + 0x160) &= ~0x10;
        }
        if (*(u32 *)(mgr + 0x18) & 0x2000) {
            s32 cnt = 0;
            u8 *p = *(u8 **)(data_021600b8 + 0x20);
            while (p != NULL) {
                if (*(u32 *)(*(u8 **)(p + 0x14) + 8) == 0) cnt++;
                p = *(u8 **)(p + 0x1f0);
            }
            if (cnt != 0) return;
            *(u32 *)(mgr + 0x18) &= ~0x2000;
        }
        func_0210c9cc(node);
        return;
    }
    if (data_021600ac != NULL &&
        data_021600a0 != 0xe &&
        *(u8 *)(data_02160204 + 0xd8) != 4 &&
        *(u8 *)(mgr + 0x1c1) != 1 &&
        *(u8 *)(mgr + 0x1c1) != 0xc) {
        *(u8 *)(data_021600ac + 0x3ac) |= 0x20;
    }
    switch (*(u8 *)(mgr + 0x1c1)) {
        case 8:
            if (data_021600ac == NULL) return;
            *(u8 *)(data_021600ac + 0x334) = 0;
            *(u32 *)(data_021600ac + 0x10) = 4;
            func_020f5364(data_021600b8, mgr);
            func_0205443c(0);
            return;
        case 2:
        case 4:
        case 5:
        case 6:
        case 7:
        case 10:
            if (data_021600ac != NULL) {
                if (*(u8 *)(mgr + 0x1c1) != 6 &&
                    *(u8 *)(mgr + 0x1c1) != 7 &&
                    *(u8 *)(mgr + 0x1c1) != 10 &&
                    *(u32 *)(data_021600ac + 0x10) != 10) {
                    if (*(u32 *)(data_021600ac + 0x10) != 0xd) {
                        *(u32 *)(data_021600ac + 0x10) = 4;
                    } else {
                        *(u8 *)(data_021600ac + 0x3ac) &= 0xdf;
                    }
                }
                if (*(u8 *)(mgr + 0x1c1) == 5) {
                    if (*(u8 *)(mgr + 0x1c1) != 7) {
                        *(u32 *)(data_021600ac + 0x10) = 0xb;
                    }
                }
                if (func_020f5364(data_021600b8, mgr) == 0) {
                    func_020f58c0(mgr);
                }
                *(u32 *)(data_021600ac + 0x7c) = 0;
                func_020468b0(0);
            } else if (mgr != NULL) {
                if (func_020f5364(data_021600b8, mgr) == 0) {
                    func_020f58c0(mgr);
                }
            }
            if (data_021600ac != NULL &&
                *(u8 *)(data_02160204 + 0xd8) != 1 &&
                *(u32 *)(data_021600ac + 0x10) != 10) {
                func_02044c48(1);
            }
            *(s8 *)(data_02160204 + 0x86) = -1;
            *(u8 *)(data_02160204 + 0x7e) = 0;
            func_0205443c(0);
            return;
        case 11:
            if (data_021600ac != NULL) {
                if (func_020f5364(data_021600b8, mgr) == 0) {
                    func_020f58c0(mgr);
                }
                *(u32 *)(data_021600ac + 0x7c) = 0;
                func_020468b0(0);
            }
            if (*(u8 *)(data_02160204 + 0xd8) != 1 &&
                *(u32 *)(data_021600ac + 0x10) != 10) {
                func_02044c48(1);
            }
            *(s8 *)(data_02160204 + 0x86) = -1;
            return;
        case 3:
            func_0205443c(0);
        case 0:
        case 1:
            func_020f5364(data_021600b8, mgr);
            return;
        case 12:
            func_020f5364(data_021600b8 + 0x20, mgr);
            return;
        default:
            func_020f58c0(mgr);
            if (*(u8 *)(data_02160204 + 0xd8) != 1 &&
                *(u32 *)(data_021600ac + 0x10) != 10) {
                func_02044c48(1);
            }
            return;
    }
}
