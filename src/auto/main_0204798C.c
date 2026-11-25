/* 1 function from 0x0204798C to 0x020495FC (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600ac, *data_021600bc;
extern void func_02078a40(void), func_02078e1c(void), func_02078f58(void), func_02079094(void);
extern void func_02079174(void), func_02079374(void), func_0207963c(void);
extern void func_0207a6b4(void), func_0207a8cc(void);
extern u16 func_020ddc8c(u8 *, u8 *);
extern s16 data_0213a394[];
extern u8 *data_02160200;
extern void func_020522d4(u8 *, s32, s32);
extern void func_020495fc(u8 *, s32);
extern void func_02050b0c(u8 *, s32);
extern void func_0205103c(u8 *);
extern void func_020510e8(u8 *);
extern void func_02051344(u8 *);
extern void func_0205196c(u8 *);
extern s32 func_020ef4c8(u8 *);
extern s32 func_0210c2f4(u8 *, u8 *);
extern void func_021168f8(u8 *, u8 *);
void func_0204798c(void) {
    u8 *g = data_021600ac;
    u8 *obj;
    if (g && *(u8 **)(g + 0x68) && *(u8 **)(*(u8 **)(g + 0x68) + 0xb0)) {
        (*(u8 **)(*(u8 **)(g + 0x68) + 0xb0))[0xc] = 0;
    }
    if (*(u16 *)(data_021600ac + 0x36e) & 1) func_02078a40();
    if (*(u16 *)(data_021600ac + 0x36e) & 0x10) func_02078e1c();
    if (*(u16 *)(data_021600ac + 0x36e) & 2) func_02078f58();
    if (*(u16 *)(data_021600ac + 0x36e) & 0x40) func_02079094();
    if (*(u16 *)(data_021600ac + 0x36e) & 0x20) func_02079174();
    if (*(u16 *)(data_021600ac + 0x36e) & 0x100) func_02079374();
    if (*(u16 *)(data_021600ac + 0x36e) & 0x40) func_02079094();
    if (*(u16 *)(data_021600ac + 0x36e) & 0x80) func_0207963c();
    func_0207a6b4();
    func_0207a8cc();
    obj = *(u8 **)(data_021600bc + 0x40);
    if (obj) {
        if (*(u32 *)(obj + 0xac) & 4) {
            *(u16 *)(obj + 0x92) = func_020ddc8c(obj, obj + 0x24);
            *(u32 *)(obj + 0xac) &= ~4;
        }
        if (*(u32 *)(obj + 0xac) & 8) {
            s32 vx, vz;
            u8 *sub;
            *(u16 *)(obj + 0x92) = func_020ddc8c(obj, obj + 0x24);
            if (*(u16 *)(obj + 0x8e) <= 1000 || *(u16 *)(obj + 0x8e) >= 2000) {
                func_020522d4(obj, 1, (*(u32 *)(obj + 0xac) & 0x20) ? 1 : 0);
            }
            vx = *(s32 *)(obj + 0x78) * data_0213a394[(*(u16 *)(obj + 0x92) >> 4) * 2];
            *(s32 *)(obj + 0x30) = vx;
            vz = *(s32 *)(obj + 0x78) * data_0213a394[(*(u16 *)(obj + 0x92) >> 4) * 2 + 1];
            *(s32 *)(obj + 0x38) = vz;
            *(s32 *)(obj + 0xc) = *(s32 *)(obj + 0x0);
            *(s32 *)(obj + 0x10) = *(s32 *)(obj + 0x4);
            *(s32 *)(obj + 0x14) = *(s32 *)(obj + 0x8);
            *(s32 *)(obj + 0xd4) = *(s32 *)(obj + 0x0);
            *(s32 *)(obj + 0xd8) = *(s32 *)(obj + 0x4);
            *(s32 *)(obj + 0xdc) = *(s32 *)(obj + 0x8);
            *(s32 *)(obj + 0xe0) = *(s32 *)(obj + 0x0) + vx;
            *(s32 *)(obj + 0xe4) = *(s32 *)(obj + 0x4);
            *(s32 *)(obj + 0xe8) = *(s32 *)(obj + 0x8) + vz;
            sub = *(u8 **)(obj + 0xb0);
            if (sub) {
                u16 saved = *(u16 *)(sub + 4);
                *(u16 *)(sub + 4) = 0;
                func_020495fc(obj, 0);
                func_02050b0c(obj, 0);
                func_02050b0c(obj, 0x8000);
                func_0205103c(obj);
                *(s32 *)(obj + 0xd4) = *(s32 *)(obj + 0xc);
                *(s32 *)(obj + 0xd8) = *(s32 *)(obj + 0x10);
                *(s32 *)(obj + 0xdc) = *(s32 *)(obj + 0x14);
                *(s32 *)(obj + 0xe0) = *(s32 *)(obj + 0x0);
                *(s32 *)(obj + 0xe4) = *(s32 *)(obj + 0x4);
                *(s32 *)(obj + 0xe8) = *(s32 *)(obj + 0x8);
                *(s32 *)(obj + 0x30) = *(s32 *)(obj + 0x0) - *(s32 *)(obj + 0xc);
                *(s32 *)(obj + 0x38) = *(s32 *)(obj + 0x8) - *(s32 *)(obj + 0x14);
                func_020510e8(obj);
                if (*(u32 *)(obj + 0xac) & 1) {
                    if (!(*(u32 *)(obj + 0xac) & 0x40000)) {
                        func_02051344(obj);
                    }
                    func_0205196c(obj);
                }
                *(s32 *)(obj + 0x30) = 0;
                *(s32 *)(obj + 0x38) = 0;
                if (*(u16 *)(obj + 0x8e) == 1 && *(u16 *)(*(u8 **)(obj + 0xb0) + 4) == 0 && *(u8 *)(*(u8 **)(obj + 0xb0) + 0xc) != 0) {
                    *(u16 *)(*(u8 **)(obj + 0xb0) + 4) = saved;
                }
            }
            if (*(u32 *)(data_02160200 + 0x160) & 4) {
                s32 y;
                *(u32 *)(obj + 0xac) &= ~8;
                *(u32 *)(obj + 0xac) |= 1;
                *(s32 *)(obj + 0x78) = *(u8 *)(obj + 0x9e);
                *(u8 *)(obj + 0x9e) = 0;
                *(u32 *)(obj + 0xac) &= ~0x1000000;
                *(s32 *)(obj + 0x0) = *(s32 *)(obj + 0x24);
                *(s32 *)(obj + 0x8) = *(s32 *)(obj + 0x2c);
                y = func_020ef4c8(obj + 0x24);
                *(s32 *)(obj + 0x4) = y;
                *(s32 *)(obj + 0x50) = y;
                func_020522d4(obj, 0, 1);
                *(s32 *)(**(u8 ***)(obj + 0x108) + 0x18) = 2;
                *(u32 *)(obj + 0xac) |= 1;
                if (*(u16 *)(obj + 0x8e) > 1000 && *(u16 *)(obj + 0x8e) < 2000) {
                    func_021168f8(data_021600bc + 0x40, obj);
                }
            } else if (func_0210c2f4(obj, obj + 0x24) < (*(s32 *)(obj + 0x78) << 12)) {
                s32 y;
                *(u32 *)(obj + 0xac) &= ~8;
                *(s32 *)(obj + 0x78) = *(u8 *)(obj + 0x9e);
                *(u8 *)(obj + 0x9e) = 0;
                *(s32 *)(obj + 0x0) = *(s32 *)(obj + 0x24);
                *(s32 *)(obj + 0x8) = *(s32 *)(obj + 0x2c);
                y = func_020ef4c8(obj + 0x24);
                *(s32 *)(obj + 0x4) = y;
                *(s32 *)(obj + 0x50) = y;
                *(u32 *)(obj + 0xac) |= 1;
                *(u32 *)(obj + 0xac) &= ~0x1000000;
                if (*(u16 *)(obj + 0x8e) > 1000 && *(u16 *)(obj + 0x8e) < 2000) {
                    func_021168f8(data_021600bc + 0x40, obj);
                }
            }
        } else if (*(u32 *)(obj + 0xac) & 0x200000) {
            if (*(u16 *)(obj + 0x8e) <= 1000 || *(u16 *)(obj + 0x8e) >= 2000) {
                func_020522d4(obj, 1, (*(u32 *)(obj + 0xac) & 0x20) ? 1 : 0);
            }
            if (*(u8 *)(obj + 0xa0)) {
                *(s32 *)(obj + 0x30) = (*(u8 *)(obj + 0x9f) * (*(s32 *)(obj + 0x24) - *(s32 *)(obj + 0x0))) / 100;
                *(s32 *)(obj + 0x38) = (*(u8 *)(obj + 0x9f) * (*(s32 *)(obj + 0x2c) - *(s32 *)(obj + 0x8))) / 100;
            }
            *(s32 *)(obj + 0xc) = *(s32 *)(obj + 0x0);
            *(s32 *)(obj + 0x10) = *(s32 *)(obj + 0x4);
            *(s32 *)(obj + 0x14) = *(s32 *)(obj + 0x8);
            *(s32 *)(obj + 0xd4) = *(s32 *)(obj + 0x0);
            *(s32 *)(obj + 0xd8) = *(s32 *)(obj + 0x4);
            *(s32 *)(obj + 0xdc) = *(s32 *)(obj + 0x8);
            *(s32 *)(obj + 0xe0) = *(s32 *)(obj + 0x0) + *(s32 *)(obj + 0x30);
            *(s32 *)(obj + 0xe4) = *(s32 *)(obj + 0x4);
            *(s32 *)(obj + 0xe8) = *(s32 *)(obj + 0x8) + *(s32 *)(obj + 0x38);
            if (func_0210c2f4(obj, obj + 0x24) > 0x9000) {
                *(s32 *)(obj + 0x0) += *(s32 *)(obj + 0x30);
                *(s32 *)(obj + 0x8) += *(s32 *)(obj + 0x38);
            }
            if (*(u8 *)(obj + 0xa0)) {
                if (*(s32 *)(obj + 0x4) < *(s32 *)(obj + 0x28)) {
                    *(s32 *)(obj + 0x60) = (*(u8 *)(obj + 0x9f) * (*(s32 *)(obj + 0x28) - *(s32 *)(obj + 0x4))) / 100;
                    *(s32 *)(obj + 0x4) += *(s32 *)(obj + 0x60);
                    if ((*(s32 *)(obj + 0x4) >> 12) >= (*(s32 *)(obj + 0x28) >> 12) || *(s32 *)(obj + 0x60) == 0) {
                        *(s32 *)(obj + 0x4) = *(s32 *)(obj + 0x28);
                        *(s32 *)(obj + 0x28) = 0;
                        *(s32 *)(obj + 0x50) = *(s32 *)(obj + 0x4);
                        *(u32 *)(obj + 0xac) &= ~0x100000;
                    }
                } else {
                    *(s32 *)(obj + 0x4) -= *(s32 *)(obj + 0x60);
                    *(s32 *)(obj + 0x60) = (*(u8 *)(obj + 0x9f) * (*(s32 *)(obj + 0x5c) - (*(s32 *)(obj + 0x4) - *(s32 *)(obj + 0x28)))) / 100;
                    if ((*(s32 *)(obj + 0x4) >> 12) <= (*(s32 *)(obj + 0x28) >> 12)) {
                        *(s32 *)(obj + 0x4) = *(s32 *)(obj + 0x28);
                        *(s32 *)(obj + 0x28) = 0;
                        *(s32 *)(obj + 0x50) = *(s32 *)(obj + 0x4);
                        *(u32 *)(obj + 0xac) &= ~0x100000;
                    }
                }
            } else {
                if (*(s32 *)(obj + 0x4) < *(s32 *)(obj + 0x28)) {
                    *(s32 *)(obj + 0x4) += (*(u8 *)(obj + 0x9f) << 12);
                    if (*(s32 *)(obj + 0x4) >= *(s32 *)(obj + 0x28)) {
                        *(s32 *)(obj + 0x4) = *(s32 *)(obj + 0x28);
                        *(s32 *)(obj + 0x28) = 0;
                        *(s32 *)(obj + 0x50) = *(s32 *)(obj + 0x4);
                        *(u32 *)(obj + 0xac) &= ~0x100000;
                    }
                } else {
                    *(s32 *)(obj + 0x4) -= (*(u8 *)(obj + 0x9f) << 12);
                    if (*(s32 *)(obj + 0x4) <= *(s32 *)(obj + 0x28)) {
                        *(s32 *)(obj + 0x4) = *(s32 *)(obj + 0x28);
                        *(s32 *)(obj + 0x28) = 0;
                        *(s32 *)(obj + 0x50) = *(s32 *)(obj + 0x4);
                        *(u32 *)(obj + 0xac) &= ~0x100000;
                    }
                }
            }
            if (*(u32 *)(data_02160200 + 0x160) & 4) {
                *(u32 *)(obj + 0xac) &= ~8;
                *(s32 *)(obj + 0x78) = *(u8 *)(obj + 0x9e);
                *(u8 *)(obj + 0x9e) = 0;
                if (*(u16 *)(obj + 0x8e) > 1000 && *(u16 *)(obj + 0x8e) < 2000) {
                    func_021168f8(data_021600bc + 0x40, obj);
                }
            } else if (func_0210c2f4(obj, obj + 0x24) < 0x9000 && !(*(u32 *)(obj + 0xac) & 0x100000)) {
                *(u32 *)(obj + 0xac) &= ~8;
                *(s32 *)(obj + 0x78) = *(u8 *)(obj + 0x9e);
                *(u8 *)(obj + 0x9e) = 0;
                if (*(u16 *)(obj + 0x8e) > 1000 && *(u16 *)(obj + 0x8e) < 2000) {
                    func_021168f8(data_021600bc + 0x40, obj);
                }
            }
        }
    }
}
