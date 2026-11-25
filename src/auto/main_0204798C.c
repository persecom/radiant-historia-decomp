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
void func_0204798c(void)
{
    typedef struct Vec {
        s32 x, y, z;
    } Vec;

    extern u8 *data_02160204;
    extern u8 *data_02160a80;
    extern u8 *data_02160af0;
    extern u8 *data_021600f0;
    extern u16 data_02151fca;
    extern void func_02052abc(u8 *);
    extern s32 func_020529ac(u8 *, u16, u8 *);
    extern void func_02052844(u8 *, s32, s32);
    extern void *func_02047820(u16);
    extern void *func_0204785c(u32, u32);
    extern s32 func_02117d80(void *);
    extern void func_0210d314(s32, s32);
    extern s32 func_02044dd0(void);
    extern void func_02052b68(void);
    extern void func_020477dc(void *, u8, s32);
    extern void *func_02044180(u16);
    extern void func_0205440c(void *, s32);
    extern void func_0206e8f0(s32, void *, s32);
    extern void func_0210d27c(s32);
    extern s32 func_0201ff80(f64);

    u8 *g = data_021600ac;
    register s32 zero = 0;
    register s32 triggered = 0;
    u8 *obj;
    s32 one = 1;
    Vec pos;

    if (g && (*(u8 **)(g + 0x68)) && (*(u8 **)((*(u8 **)(g + 0x68)) + 0xb0))) {
        (*(u8 *)((*(u8 **)((*(u8 **)(g + 0x68)) + 0xb0)) + 0xc)) = triggered;
    }
    if ((*(u16 *)(data_021600ac + 0x36e)) & 1) func_02078a40();
    if ((*(u16 *)(data_021600ac + 0x36e)) & 0x10) func_02078e1c();
    if ((*(u16 *)(data_021600ac + 0x36e)) & 2) func_02078f58();
    if ((*(u16 *)(data_021600ac + 0x36e)) & 0x40) func_02079094();
    if ((*(u16 *)(data_021600ac + 0x36e)) & 0x20) func_02079174();
    if ((*(u16 *)(data_021600ac + 0x36e)) & 0x100) func_02079374();
    if ((*(u16 *)(data_021600ac + 0x36e)) & 0x40) func_02079094();
    if ((*(u16 *)(data_021600ac + 0x36e)) & 0x80) func_0207963c();
    func_0207a6b4();
    func_0207a8cc();

    for (obj = (*(u8 **)(data_021600bc + 0x40)); obj != NULL; obj = (*(u8 **)(obj + 0x13c))) {
        if ((*(u32 *)(obj + 0xac)) & 4) {
            (*(u16 *)(obj + 0x92)) = func_020ddc8c(obj, obj + 0x24);
            (*(u32 *)(obj + 0xac)) &= ~4;
        }
        if ((*(u32 *)(obj + 0xac)) & 8) {
            s32 vx, vz;
            u8 *sub;
            s32 y;
            (*(u16 *)(obj + 0x92)) = func_020ddc8c(obj, obj + 0x24);
            if ((*(u16 *)(obj + 0x8e)) <= 5000 || (*(u16 *)(obj + 0x8e)) >= 6000) {
                if ((*(u32 *)(obj + 0xac)) & 0x20) {
                    func_020522d4(obj, 1, 1);
                } else {
                    func_020522d4(obj, 1, 0);
                }
            }
            vx = (*(s32 *)(obj + 0x78)) * ((const s16 (*)[2])data_0213a394)[(((*(u16 *)(obj + 0x92)) + 0) % 0x10000) >> 4][0];
            (*(s32 *)(obj + 0x30)) = vx;
            vz = (*(s32 *)(obj + 0x78)) * ((const s16 (*)[2])data_0213a394)[(((*(u16 *)(obj + 0x92)) + 0) % 0x10000) >> 4][1];
            (*(s32 *)(obj + 0x38)) = vz;
            (*(s32 *)(obj + 0xc)) = (*(s32 *)(obj + 0));
            (*(s32 *)(obj + 0x10)) = (*(s32 *)(obj + 4));
            (*(s32 *)(obj + 0x14)) = (*(s32 *)(obj + 8));
            (*(s32 *)(obj + 0xd4)) = (*(s32 *)(obj + 0));
            (*(s32 *)(obj + 0xd8)) = (*(s32 *)(obj + 4));
            (*(s32 *)(obj + 0xdc)) = (*(s32 *)(obj + 8));
            {
                s32 px = (*(s32 *)(obj + 0));
                s32 py = (*(s32 *)(obj + 4));
                s32 pz = (*(s32 *)(obj + 8));
                (*(s32 *)(obj + 0xe0)) = px + vx;
                (*(s32 *)(obj + 0xe4)) = py;
                (*(s32 *)(obj + 0xe8)) = pz + vz;
            }
            sub = (*(u8 **)(obj + 0xb0));
            if (sub != NULL) {
                u16 saved = (*(u16 *)(sub + 4));
                (*(u16 *)(sub + 4)) = 0;
                func_020495fc(obj, 0);
                func_02050b0c(obj, 0);
                func_02050b0c(obj, 0x8000);
                func_0205103c(obj);
                (*(s32 *)(obj + 0xd4)) = (*(s32 *)(obj + 0xc));
                (*(s32 *)(obj + 0xd8)) = (*(s32 *)(obj + 0x10));
                (*(s32 *)(obj + 0xdc)) = (*(s32 *)(obj + 0x14));
                (*(s32 *)(obj + 0xe0)) = (*(s32 *)(obj + 0));
                (*(s32 *)(obj + 0xe4)) = (*(s32 *)(obj + 4));
                (*(s32 *)(obj + 0xe8)) = (*(s32 *)(obj + 8));
                (*(s32 *)(obj + 0x30)) = (*(s32 *)(obj + 0)) - (*(s32 *)(obj + 0xc));
                (*(s32 *)(obj + 0x38)) = (*(s32 *)(obj + 8)) - (*(s32 *)(obj + 0x14));
                func_020510e8(obj);
                if ((*(u32 *)(obj + 0xac)) & 1) {
                    if (!((*(u32 *)(obj + 0xac)) & 0x40000)) {
                        func_02051344(obj);
                    }
                    func_0205196c(obj);
                }
                (*(s32 *)(obj + 0x30)) = zero;
                (*(s32 *)(obj + 0x38)) = zero;
                if ((*(u16 *)(obj + 0x8e)) == 1 && (*(u16 *)((*(u8 **)(obj + 0xb0)) + 4)) == 0 && (*(u8 *)((*(u8 **)(obj + 0xb0)) + 0xc)) != 0) {
                    (*(u16 *)((*(u8 **)(obj + 0xb0)) + 4)) = saved;
                }
            }
            if ((*(u32 *)(data_02160200 + 0x160)) & 4) {
                (*(u32 *)(obj + 0xac)) &= ~8;
                (*(u32 *)(obj + 0xac)) |= 1;
                (*(s32 *)(obj + 0x78)) = (*(u8 *)(obj + 0x9e));
                (*(u8 *)(obj + 0x9e)) = zero;
                (*(u32 *)(obj + 0xac)) &= ~0x1000000;
                (*(s32 *)(obj + 0)) = (*(s32 *)(obj + 0x24));
                (*(s32 *)(obj + 8)) = (*(s32 *)(obj + 0x2c));
                y = func_020ef4c8(obj + 0x24);
                (*(s32 *)(obj + 4)) = y;
                (*(s32 *)(obj + 0x50)) = y;
                func_020522d4(obj, zero, 1);
                (*(s32 *)((*(u8 **)((*(u8 **)(obj + 0x108)) + 0)) + 0x18)) = 2;
                (*(u32 *)(obj + 0xac)) |= 1;
                if ((*(u16 *)(obj + 0x8e)) > 5000 && (*(u16 *)(obj + 0x8e)) < 6000) {
                    func_021168f8(data_021600bc + 0x40, obj);
                }
            } else if (func_0210c2f4(obj, obj + 0x24) < ((*(s32 *)(obj + 0x78)) << 12)) {
                (*(u32 *)(obj + 0xac)) &= ~8;
                (*(s32 *)(obj + 0x78)) = (*(u8 *)(obj + 0x9e));
                (*(u8 *)(obj + 0x9e)) = zero;
                (*(s32 *)(obj + 0)) = (*(s32 *)(obj + 0x24));
                (*(s32 *)(obj + 8)) = (*(s32 *)(obj + 0x2c));
                y = func_020ef4c8(obj + 0x24);
                (*(s32 *)(obj + 4)) = y;
                (*(s32 *)(obj + 0x50)) = y;
                (*(u32 *)(obj + 0xac)) |= 1;
                (*(u32 *)(obj + 0xac)) &= ~0x1000000;
                if ((*(u16 *)(obj + 0x8e)) > 5000 && (*(u16 *)(obj + 0x8e)) < 6000) {
                    func_021168f8(data_021600bc + 0x40, obj);
                }
            }
        } else if ((*(u32 *)(obj + 0xac)) & 0x200000) {
            if ((*(u16 *)(obj + 0x8e)) <= 5000 || (*(u16 *)(obj + 0x8e)) >= 6000) {
                if ((*(u32 *)(obj + 0xac)) & 0x20) {
                    func_020522d4(obj, 1, 1);
                } else {
                    func_020522d4(obj, 1, 0);
                }
            }
            if ((*(u8 *)(obj + 0xa0))) {
                (*(s32 *)(obj + 0x30)) = ((*(u8 *)(obj + 0x9f)) * ((*(s32 *)(obj + 0x24)) - (*(s32 *)(obj + 0)))) / 100;
                (*(s32 *)(obj + 0x38)) = ((*(u8 *)(obj + 0x9f)) * ((*(s32 *)(obj + 0x2c)) - (*(s32 *)(obj + 8)))) / 100;
            }
            (*(s32 *)(obj + 0xc)) = (*(s32 *)(obj + 0));
            (*(s32 *)(obj + 0x10)) = (*(s32 *)(obj + 4));
            (*(s32 *)(obj + 0x14)) = (*(s32 *)(obj + 8));
            (*(s32 *)(obj + 0xd4)) = (*(s32 *)(obj + 0));
            (*(s32 *)(obj + 0xd8)) = (*(s32 *)(obj + 4));
            (*(s32 *)(obj + 0xdc)) = (*(s32 *)(obj + 8));
            {
                s32 x = (*(s32 *)(obj + 0)) + (*(s32 *)(obj + 0x30));
                s32 z = (*(s32 *)(obj + 8)) + (*(s32 *)(obj + 0x38));
                s32 y = (*(s32 *)(obj + 4));
                (*(s32 *)(obj + 0xe0)) = x;
                (*(s32 *)(obj + 0xe4)) = y;
                (*(s32 *)(obj + 0xe8)) = z;
            }
            if (func_0210c2f4(obj, obj + 0x24) > 0x9000) {
                (*(s32 *)(obj + 0)) += (*(s32 *)(obj + 0x30));
                (*(s32 *)(obj + 8)) += (*(s32 *)(obj + 0x38));
            }
            if ((*(u8 *)(obj + 0xa0))) {
                if ((*(s32 *)(obj + 4)) < (*(s32 *)(obj + 0x28))) {
                    (*(s32 *)(obj + 0x60)) = ((*(u8 *)(obj + 0x9f)) * ((*(s32 *)(obj + 0x28)) - (*(s32 *)(obj + 4)))) / 100;
                    (*(s32 *)(obj + 4)) += (*(s32 *)(obj + 0x60));
                    if (((*(s32 *)(obj + 4)) >> 12) >= ((*(s32 *)(obj + 0x28)) >> 12) || (*(s32 *)(obj + 0x60)) == 0) {
                        (*(s32 *)(obj + 4)) = (*(s32 *)(obj + 0x28));
                        (*(s32 *)(obj + 0x28)) = zero;
                        (*(s32 *)(obj + 0x50)) = (*(s32 *)(obj + 4));
                        (*(u32 *)(obj + 0xac)) &= ~0x100000;
                    }
                } else {
                    (*(s32 *)(obj + 4)) -= (*(s32 *)(obj + 0x60));
                    (*(s32 *)(obj + 0x60)) = ((*(u8 *)(obj + 0x9f)) * ((*(s32 *)(obj + 0x5c)) - ((*(s32 *)(obj + 4)) - (*(s32 *)(obj + 0x28))))) / 100;
                    if (((*(s32 *)(obj + 4)) >> 12) <= ((*(s32 *)(obj + 0x28)) >> 12)) {
                        (*(s32 *)(obj + 4)) = (*(s32 *)(obj + 0x28));
                        (*(s32 *)(obj + 0x28)) = zero;
                        (*(s32 *)(obj + 0x50)) = (*(s32 *)(obj + 4));
                        (*(u32 *)(obj + 0xac)) &= ~0x100000;
                    }
                }
            } else {
                if ((*(s32 *)(obj + 4)) < (*(s32 *)(obj + 0x28))) {
                    (*(s32 *)(obj + 4)) += (*(u8 *)(obj + 0x9f)) << 12;
                    if ((*(s32 *)(obj + 4)) >= (*(s32 *)(obj + 0x28))) {
                        (*(s32 *)(obj + 4)) = (*(s32 *)(obj + 0x28));
                        (*(s32 *)(obj + 0x28)) = zero;
                        (*(s32 *)(obj + 0x50)) = (*(s32 *)(obj + 4));
                        (*(u32 *)(obj + 0xac)) &= ~0x100000;
                    }
                } else {
                    (*(s32 *)(obj + 4)) -= (*(u8 *)(obj + 0x9f)) << 12;
                    if ((*(s32 *)(obj + 4)) <= (*(s32 *)(obj + 0x28))) {
                        (*(s32 *)(obj + 4)) = (*(s32 *)(obj + 0x28));
                        (*(s32 *)(obj + 0x28)) = zero;
                        (*(s32 *)(obj + 0x50)) = (*(s32 *)(obj + 4));
                        (*(u32 *)(obj + 0xac)) &= ~0x100000;
                    }
                }
            }
            if ((*(u32 *)(data_02160200 + 0x160)) & 4) {
                (*(u32 *)(obj + 0xac)) &= ~8;
                (*(s32 *)(obj + 0x78)) = (*(u8 *)(obj + 0x9e));
                (*(u8 *)(obj + 0x9e)) = zero;
                if ((*(u16 *)(obj + 0x8e)) > 5000 && (*(u16 *)(obj + 0x8e)) < 6000) {
                    func_021168f8(data_021600bc + 0x40, obj);
                }
            } else if (func_0210c2f4(obj, obj + 0x24) < 0x9000 && !((*(u32 *)(obj + 0xac)) & 0x100000)) {
                (*(u32 *)(obj + 0xac)) &= ~8;
                (*(s32 *)(obj + 0x78)) = (*(u8 *)(obj + 0x9e));
                (*(u8 *)(obj + 0x9e)) = zero;
                if ((*(u16 *)(obj + 0x8e)) > 5000 && (*(u16 *)(obj + 0x8e)) < 6000) {
                    func_021168f8(data_021600bc + 0x40, obj);
                }
            }
        } else if ((*(u32 *)(obj + 0xac)) & 0x100000) {
            if ((*(u8 *)(obj + 0xa0))) {
                if ((*(s32 *)(obj + 4)) < (*(s32 *)(obj + 0x28))) {
                    (*(s32 *)(obj + 0x60)) = ((*(u8 *)(obj + 0x9f)) * ((*(s32 *)(obj + 0x28)) - (*(s32 *)(obj + 4)))) / 100;
                    (*(s32 *)(obj + 4)) += (*(s32 *)(obj + 0x60));
                    if (((*(s32 *)(obj + 4)) >> 12) >= ((*(s32 *)(obj + 0x28)) >> 12) || (*(s32 *)(obj + 0x60)) == 0) {
                        (*(s32 *)(obj + 4)) = (*(s32 *)(obj + 0x28));
                        (*(s32 *)(obj + 0x28)) = zero;
                        (*(s32 *)(obj + 0x50)) = (*(s32 *)(obj + 4));
                        (*(u32 *)(obj + 0xac)) &= ~0x100000;
                    }
                } else {
                    (*(s32 *)(obj + 4)) -= (*(s32 *)(obj + 0x60));
                    (*(s32 *)(obj + 0x60)) = ((*(u8 *)(obj + 0x9f)) * ((*(s32 *)(obj + 0x5c)) - ((*(s32 *)(obj + 4)) - (*(s32 *)(obj + 0x28))))) / 100;
                    if (((*(s32 *)(obj + 4)) >> 12) <= ((*(s32 *)(obj + 0x28)) >> 12)) {
                        (*(s32 *)(obj + 4)) = (*(s32 *)(obj + 0x28));
                        (*(s32 *)(obj + 0x28)) = zero;
                        (*(s32 *)(obj + 0x50)) = (*(s32 *)(obj + 4));
                        (*(u32 *)(obj + 0xac)) &= ~0x100000;
                    }
                }
            } else {
                if ((*(s32 *)(obj + 4)) < (*(s32 *)(obj + 0x28))) {
                    (*(s32 *)(obj + 4)) += (*(u8 *)(obj + 0x9f)) << 12;
                    if ((*(s32 *)(obj + 4)) >= (*(s32 *)(obj + 0x28))) {
                        (*(s32 *)(obj + 4)) = (*(s32 *)(obj + 0x28));
                        (*(s32 *)(obj + 0x28)) = zero;
                        (*(s32 *)(obj + 0x50)) = (*(s32 *)(obj + 4));
                        (*(u32 *)(obj + 0xac)) &= ~0x100000;
                    }
                } else {
                    (*(s32 *)(obj + 4)) -= (*(u8 *)(obj + 0x9f)) << 12;
                    if ((*(s32 *)(obj + 4)) <= (*(s32 *)(obj + 0x28))) {
                        (*(s32 *)(obj + 4)) = (*(s32 *)(obj + 0x28));
                        (*(s32 *)(obj + 0x28)) = zero;
                        (*(s32 *)(obj + 0x50)) = (*(s32 *)(obj + 4));
                        (*(u32 *)(obj + 0xac)) &= ~0x100000;
                    }
                }
            }
        } else if ((*(u32 *)(obj + 0xac)) & 0x400) {
            u8 *sub;
            s32 angle;
            s32 speed;
            if ((*(u8 *)(data_02160204 + 0x85)) == 1) {
                (*(s32 *)(obj + 0x30)) = (*(s32 *)(obj + 0x78)) * ((const s16 (*)[2])data_0213a394)[(((*(u16 *)(data_02160204 + 0x78)) + 0) % 0x10000) >> 4][0];
                speed = (*(s32 *)(obj + 0x78));
                angle = (*(u16 *)(data_02160204 + 0x78));
                goto mode400_z;
            } else if ((*(u8 *)(data_02160204 + 0x85)) == 3) {
                (*(s32 *)(obj + 0x30)) = (*(s32 *)(obj + 0x78)) * ((const s16 (*)[2])data_0213a394)[(((*(u16 *)(obj + 0x92)) + 0) % 0x10000) >> 4][0];
                angle = (*(u16 *)(obj + 0x92));
                speed = (*(s32 *)(obj + 0x78));
mode400_z:
                (*(s32 *)(obj + 0x38)) = speed * ((const s16 (*)[2])data_0213a394)[((angle + 0) % 0x10000) >> 4][1];
            }
            (*(s32 *)(obj + 0xc)) = (*(s32 *)(obj + 0));
            (*(s32 *)(obj + 0x10)) = (*(s32 *)(obj + 4));
            (*(s32 *)(obj + 0x14)) = (*(s32 *)(obj + 8));
            (*(s32 *)(obj + 0xd4)) = (*(s32 *)(obj + 0));
            (*(s32 *)(obj + 0xd8)) = (*(s32 *)(obj + 4));
            (*(s32 *)(obj + 0xdc)) = (*(s32 *)(obj + 8));
            {
                s32 vx = (*(s32 *)(obj + 0x30));
                s32 px = (*(s32 *)(obj + 0));
                s32 py = (*(s32 *)(obj + 4));
                s32 pz = (*(s32 *)(obj + 8));
                s32 vz = (*(s32 *)(obj + 0x38));
                (*(s32 *)(obj + 0xe0)) = px + vx;
                (*(s32 *)(obj + 0xe4)) = py;
                (*(s32 *)(obj + 0xe8)) = pz + vz;
            }
            sub = (*(u8 **)(obj + 0xb0));
            if (sub != NULL) {
                u16 saved = (*(u16 *)(sub + 4));
                s32 dx, dz;
                (*(u16 *)(sub + 4)) = 0;
                func_020495fc(obj, 0);
                dx = ((*(s32 *)(obj + 0)) - (*(s32 *)(obj + 0xec))) >> 12;
                dz = ((*(s32 *)(obj + 8)) - (*(s32 *)(obj + 0xf4))) >> 12;
                if (dz < 0) dz = -dz;
                if (dx < 0) dx = -dx;
                if (dx + dz <= 1) {
                    (*(s32 *)(obj + 0)) = (*(s32 *)(obj + 0xec));
                    (*(s32 *)(obj + 8)) = (*(s32 *)(obj + 0xf4));
                }
                func_02050b0c(obj, 0);
                func_02050b0c(obj, 0x8000);
                func_0205103c(obj);
                (*(s32 *)(obj + 0xd4)) = (*(s32 *)(obj + 0xc));
                (*(s32 *)(obj + 0xd8)) = (*(s32 *)(obj + 0x10));
                (*(s32 *)(obj + 0xdc)) = (*(s32 *)(obj + 0x14));
                (*(s32 *)(obj + 0xe0)) = (*(s32 *)(obj + 0));
                (*(s32 *)(obj + 0xe4)) = (*(s32 *)(obj + 4));
                (*(s32 *)(obj + 0xe8)) = (*(s32 *)(obj + 8));
                (*(s32 *)(obj + 0x30)) = (*(s32 *)(obj + 0)) - (*(s32 *)(obj + 0xc));
                (*(s32 *)(obj + 0x38)) = (*(s32 *)(obj + 8)) - (*(s32 *)(obj + 0x14));
                func_020510e8(obj);
                if ((*(u32 *)(obj + 0xac)) & 1) {
                    if (!((*(u32 *)(obj + 0xac)) & 0x40000)) {
                        func_02051344(obj);
                    }
                    func_0205196c(obj);
                }
                (*(s32 *)(obj + 0x30)) = zero;
                (*(s32 *)(obj + 0x38)) = zero;
                if ((*(s32 *)(obj + 0xec)) != (*(s32 *)(obj + 0)) || (*(s32 *)(obj + 0xf4)) != (*(s32 *)(obj + 8))) {
                    (*(s32 *)(obj + 0xec)) = (*(s32 *)(obj + 0));
                    (*(s32 *)(obj + 0xf0)) = (*(s32 *)(obj + 4));
                    (*(s32 *)(obj + 0xf4)) = (*(s32 *)(obj + 8));
                }
                if ((*(u16 *)(obj + 0x8e)) == 1 && (*(u16 *)((*(u8 **)(obj + 0xb0)) + 4)) == 0 && (*(u8 *)((*(u8 **)(obj + 0xb0)) + 0xc)) != 0) {
                    (*(u16 *)((*(u8 **)(obj + 0xb0)) + 4)) = saved;
                }
            }
            if ((*(u8 *)(data_02160204 + 0x85)) == 3 && func_0210c2f4(obj, obj + 0x24) < 0x9000) {
                (*(u32 *)(obj + 0xac)) &= ~0x400;
                (*(u32 *)(obj + 0xac)) &= ~0x800;
                (*(u8 *)(data_02160204 + 0x85)) = zero;
            }
        } else if ((*(u32 *)(obj + 0xac)) & 0x20000) {
            u8 *sub;
            (*(s32 *)(obj + 0xc)) = (*(s32 *)(obj + 0));
            (*(s32 *)(obj + 0x10)) = (*(s32 *)(obj + 4));
            (*(s32 *)(obj + 0x14)) = (*(s32 *)(obj + 8));
            (*(s32 *)(obj + 0xd4)) = (*(s32 *)(obj + 0));
            (*(s32 *)(obj + 0xd8)) = (*(s32 *)(obj + 4));
            (*(s32 *)(obj + 0xdc)) = (*(s32 *)(obj + 8));
            {
                s32 vx = (*(s32 *)(obj + 0x30));
                s32 px = (*(s32 *)(obj + 0));
                s32 py = (*(s32 *)(obj + 4));
                s32 pz = (*(s32 *)(obj + 8));
                s32 vz = (*(s32 *)(obj + 0x38));
                (*(s32 *)(obj + 0xe0)) = px + vx;
                (*(s32 *)(obj + 0xe4)) = py;
                (*(s32 *)(obj + 0xe8)) = pz + vz;
            }
            sub = (*(u8 **)(obj + 0xb0));
            if (sub != NULL) {
                u16 saved = (*(u16 *)(sub + 4));
                s32 dx, dz;
                (*(u16 *)(sub + 4)) = 0;
                func_020495fc(obj, 0);
                dx = ((*(s32 *)(obj + 0)) - (*(s32 *)(obj + 0xec))) >> 12;
                dz = ((*(s32 *)(obj + 8)) - (*(s32 *)(obj + 0xf4))) >> 12;
                if (dz < 0) dz = -dz;
                if (dx < 0) dx = -dx;
                if (dx + dz <= 1) {
                    (*(s32 *)(obj + 0)) = (*(s32 *)(obj + 0xec));
                    (*(s32 *)(obj + 8)) = (*(s32 *)(obj + 0xf4));
                }
                func_02050b0c(obj, 0);
                func_02050b0c(obj, 0x8000);
                func_0205103c(obj);
                (*(s32 *)(obj + 0xd4)) = (*(s32 *)(obj + 0xc));
                (*(s32 *)(obj + 0xd8)) = (*(s32 *)(obj + 0x10));
                (*(s32 *)(obj + 0xdc)) = (*(s32 *)(obj + 0x14));
                (*(s32 *)(obj + 0xe0)) = (*(s32 *)(obj + 0));
                (*(s32 *)(obj + 0xe4)) = (*(s32 *)(obj + 4));
                (*(s32 *)(obj + 0xe8)) = (*(s32 *)(obj + 8));
                (*(s32 *)(obj + 0x30)) = (*(s32 *)(obj + 0)) - (*(s32 *)(obj + 0xc));
                (*(s32 *)(obj + 0x38)) = (*(s32 *)(obj + 8)) - (*(s32 *)(obj + 0x14));
                func_020510e8(obj);
                if ((*(u32 *)(obj + 0xac)) & 1) {
                    if (!((*(u32 *)(obj + 0xac)) & 0x40000)) {
                        func_02051344(obj);
                    }
                    func_0205196c(obj);
                }
                (*(s32 *)(obj + 0x30)) = zero;
                (*(s32 *)(obj + 0x38)) = zero;
                if ((*(s32 *)(obj + 0xec)) != (*(s32 *)(obj + 0)) || (*(s32 *)(obj + 0xf4)) != (*(s32 *)(obj + 8))) {
                    (*(s32 *)(obj + 0xec)) = (*(s32 *)(obj + 0));
                    (*(s32 *)(obj + 0xf0)) = (*(s32 *)(obj + 4));
                    (*(s32 *)(obj + 0xf4)) = (*(s32 *)(obj + 8));
                }
                if ((*(u16 *)(obj + 0x8e)) == 1 && (*(u16 *)((*(u8 **)(obj + 0xb0)) + 4)) == 0 && (*(u8 *)((*(u8 **)(obj + 0xb0)) + 0xc)) != 0) {
                    (*(u16 *)((*(u8 **)(obj + 0xb0)) + 4)) = saved;
                }
            }
        } else if ((*(u32 *)(obj + 0xac)) & 2) {
            u8 *sub;
            (*(s32 *)(obj + 0xc)) = (*(s32 *)(obj + 0));
            (*(s32 *)(obj + 0x10)) = (*(s32 *)(obj + 4));
            (*(s32 *)(obj + 0x14)) = (*(s32 *)(obj + 8));
            (*(s32 *)(obj + 0xd4)) = (*(s32 *)(obj + 0));
            (*(s32 *)(obj + 0xd8)) = (*(s32 *)(obj + 4));
            (*(s32 *)(obj + 0xdc)) = (*(s32 *)(obj + 8));
            {
                s32 vx = (*(s32 *)(obj + 0x30));
                s32 px = (*(s32 *)(obj + 0));
                s32 py = (*(s32 *)(obj + 4));
                s32 pz = (*(s32 *)(obj + 8));
                s32 vz = (*(s32 *)(obj + 0x38));
                (*(s32 *)(obj + 0xe0)) = px + vx;
                (*(s32 *)(obj + 0xe4)) = py;
                (*(s32 *)(obj + 0xe8)) = pz + vz;
            }
            if ((*(s32 *)(obj + 0x30)) != 0 || (*(s32 *)(obj + 0x38)) != 0) {
                (*(u16 *)(obj + 0x92)) = func_020ddc8c(obj + 0xd4, obj + 0xe0);
            }
            sub = (*(u8 **)(obj + 0xb0));
            if (sub != NULL) {
                u16 saved = (*(u16 *)(sub + 4));
                s32 dx, dz;
                (*(u16 *)(sub + 4)) = 0;
                func_020495fc(obj, 0);
                dx = ((*(s32 *)(obj + 0)) - (*(s32 *)(obj + 0xec))) >> 12;
                dz = ((*(s32 *)(obj + 8)) - (*(s32 *)(obj + 0xf4))) >> 12;
                if (dz < 0) dz = -dz;
                if (dx < 0) dx = -dx;
                if (dx + dz <= 1) {
                    (*(s32 *)(obj + 0)) = (*(s32 *)(obj + 0xec));
                    (*(s32 *)(obj + 8)) = (*(s32 *)(obj + 0xf4));
                }
                func_02050b0c(obj, 0);
                func_02050b0c(obj, 0x8000);
                func_0205103c(obj);
                (*(s32 *)(obj + 0xd4)) = (*(s32 *)(obj + 0xc));
                (*(s32 *)(obj + 0xd8)) = (*(s32 *)(obj + 0x10));
                (*(s32 *)(obj + 0xdc)) = (*(s32 *)(obj + 0x14));
                (*(s32 *)(obj + 0xe0)) = (*(s32 *)(obj + 0));
                (*(s32 *)(obj + 0xe4)) = (*(s32 *)(obj + 4));
                (*(s32 *)(obj + 0xe8)) = (*(s32 *)(obj + 8));
                (*(s32 *)(obj + 0x30)) = (*(s32 *)(obj + 0)) - (*(s32 *)(obj + 0xc));
                (*(s32 *)(obj + 0x38)) = (*(s32 *)(obj + 8)) - (*(s32 *)(obj + 0x14));
                func_020510e8(obj);
                if ((*(u32 *)(obj + 0xac)) & 1) {
                    if (!((*(u32 *)(obj + 0xac)) & 0x40000)) {
                        func_02051344(obj);
                    }
                    func_0205196c(obj);
                }
                (*(s32 *)(obj + 0x30)) = zero;
                (*(s32 *)(obj + 0x38)) = zero;
                if ((*(s32 *)(obj + 0xec)) != (*(s32 *)(obj + 0)) || (*(s32 *)(obj + 0xf4)) != (*(s32 *)(obj + 8))) {
                    (*(s32 *)(obj + 0xec)) = (*(s32 *)(obj + 0));
                    (*(s32 *)(obj + 0xf0)) = (*(s32 *)(obj + 4));
                    (*(s32 *)(obj + 0xf4)) = (*(s32 *)(obj + 8));
                }
                if ((*(u16 *)(obj + 0x8e)) == 1 && (*(u16 *)((*(u8 **)(obj + 0xb0)) + 4)) == 0 && (*(u8 *)((*(u8 **)(obj + 0xb0)) + 0xc)) != 0) {
                    (*(u16 *)((*(u8 **)(obj + 0xb0)) + 4)) = saved;
                }
            }
        } else if ((*(u32 *)(obj + 0xac)) & 0x40) {
            u8 *sub;
            if (func_0210c2f4(obj, obj + 0x24) < 0x9000) {
                (*(u32 *)(obj + 0xac)) &= ~0x40;
                (*(u32 *)(obj + 0xac)) &= ~0x80;
            } else {
                if (!((*(u32 *)(obj + 0xac)) & 0x800)) {
                    (*(u16 *)(obj + 0x92)) = func_020ddc8c(obj, obj + 0x24);
                    (*(s32 *)(obj + 0x30)) = (*(s32 *)(obj + 0x78)) * ((const s16 (*)[2])data_0213a394)[(((*(u16 *)(obj + 0x92)) + 0) % 0x10000) >> 4][0];
                    (*(s32 *)(obj + 0x38)) = (*(s32 *)(obj + 0x78)) * ((const s16 (*)[2])data_0213a394)[(((*(u16 *)(obj + 0x92)) + 0) % 0x10000) >> 4][1];
                    if ((s32)data_02151fca / 182 == 21) {
                        (*(s32 *)(obj + 0x38)) += ((*(s32 *)(obj + 0x38)) * 5) / 10;
                    }
                }
                (*(s32 *)(obj + 0xc)) = (*(s32 *)(obj + 0));
                (*(s32 *)(obj + 0x10)) = (*(s32 *)(obj + 4));
                (*(s32 *)(obj + 0x14)) = (*(s32 *)(obj + 8));
                (*(s32 *)(obj + 0xd4)) = (*(s32 *)(obj + 0));
                (*(s32 *)(obj + 0xd8)) = (*(s32 *)(obj + 4));
                (*(s32 *)(obj + 0xdc)) = (*(s32 *)(obj + 8));
                {
                    s32 vx = (*(s32 *)(obj + 0x30));
                    s32 px = (*(s32 *)(obj + 0));
                    s32 py = (*(s32 *)(obj + 4));
                    s32 pz = (*(s32 *)(obj + 8));
                    s32 vz = (*(s32 *)(obj + 0x38));
                    (*(s32 *)(obj + 0xe0)) = px + vx;
                    (*(s32 *)(obj + 0xe4)) = py;
                    (*(s32 *)(obj + 0xe8)) = pz + vz;
                }
                sub = (*(u8 **)(obj + 0xb0));
                if (sub != NULL) {
                    u16 saved = (*(u16 *)(sub + 4));
                    s32 dx, dz;
                    (*(u16 *)(sub + 4)) = 0;
                    func_020495fc(obj, 0);
                    dx = ((*(s32 *)(obj + 0)) - (*(s32 *)(obj + 0xec))) >> 12;
                    dz = ((*(s32 *)(obj + 8)) - (*(s32 *)(obj + 0xf4))) >> 12;
                    if (dz < 0) dz = -dz;
                    if (dx < 0) dx = -dx;
                    if (dx + dz <= 1) {
                        (*(s32 *)(obj + 0)) = (*(s32 *)(obj + 0xec));
                        (*(s32 *)(obj + 8)) = (*(s32 *)(obj + 0xf4));
                    }
                    func_02050b0c(obj, 0);
                    func_02050b0c(obj, 0x8000);
                    func_0205103c(obj);
                    (*(s32 *)(obj + 0xd4)) = (*(s32 *)(obj + 0xc));
                    (*(s32 *)(obj + 0xd8)) = (*(s32 *)(obj + 0x10));
                    (*(s32 *)(obj + 0xdc)) = (*(s32 *)(obj + 0x14));
                    (*(s32 *)(obj + 0xe0)) = (*(s32 *)(obj + 0));
                    (*(s32 *)(obj + 0xe4)) = (*(s32 *)(obj + 4));
                    (*(s32 *)(obj + 0xe8)) = (*(s32 *)(obj + 8));
                    (*(s32 *)(obj + 0x30)) = (*(s32 *)(obj + 0)) - (*(s32 *)(obj + 0xc));
                    (*(s32 *)(obj + 0x38)) = (*(s32 *)(obj + 8)) - (*(s32 *)(obj + 0x14));
                    func_020510e8(obj);
                    if ((*(u32 *)(obj + 0xac)) & 1) {
                        if (!((*(u32 *)(obj + 0xac)) & 0x40000)) {
                            func_02051344(obj);
                        }
                        func_0205196c(obj);
                    }
                    (*(s32 *)(obj + 0x30)) = zero;
                    (*(s32 *)(obj + 0x38)) = zero;
                    if ((*(s32 *)(obj + 0xec)) != (*(s32 *)(obj + 0)) || (*(s32 *)(obj + 0xf4)) != (*(s32 *)(obj + 8))) {
                        (*(s32 *)(obj + 0xec)) = (*(s32 *)(obj + 0));
                        (*(s32 *)(obj + 0xf0)) = (*(s32 *)(obj + 4));
                        (*(s32 *)(obj + 0xf4)) = (*(s32 *)(obj + 8));
                    }
                    if ((*(u16 *)(obj + 0x8e)) == 1 && (*(u16 *)((*(u8 **)(obj + 0xb0)) + 4)) == 0 && (*(u8 *)((*(u8 **)(obj + 0xb0)) + 0xc)) != 0) {
                        (*(u16 *)((*(u8 **)(obj + 0xb0)) + 4)) = saved;
                    }
                }
            }
        } else if ((*(u32 *)(obj + 0xac)) & 0x1000) {
            u16 savedAngle = (*(u16 *)(obj + 0x92));
            if ((*(u32 *)(data_02160200 + 0x160)) & 4) {
                (*(s32 *)(obj + 0)) = (*(s32 *)(obj + 0x24));
                (*(s32 *)(obj + 8)) = (*(s32 *)(obj + 0x2c));
                (*(u32 *)(obj + 0xac)) &= ~0x1000;
                (*(u32 *)(obj + 0xac)) |= 1;
            } else {
                s32 vx, vz;
                (*(u16 *)(obj + 0x92)) = func_020ddc8c(obj, obj + 0x24);
                vx = (*(s32 *)(obj + 0x78)) * ((const s16 (*)[2])data_0213a394)[(((*(u16 *)(obj + 0x92)) + 0) % 0x10000) >> 4][0];
                (*(s32 *)(obj + 0x30)) = vx;
                vz = (*(s32 *)(obj + 0x78)) * ((const s16 (*)[2])data_0213a394)[(((*(u16 *)(obj + 0x92)) + 0) % 0x10000) >> 4][1];
                (*(s32 *)(obj + 0x38)) = vz;
                (*(u16 *)(obj + 0x92)) = savedAngle;
                (*(s32 *)(obj + 0xc)) = (*(s32 *)(obj + 0));
                (*(s32 *)(obj + 0x10)) = (*(s32 *)(obj + 4));
                (*(s32 *)(obj + 0x14)) = (*(s32 *)(obj + 8));
                (*(s32 *)(obj + 0xd4)) = (*(s32 *)(obj + 0));
                (*(s32 *)(obj + 0xd8)) = (*(s32 *)(obj + 4));
                (*(s32 *)(obj + 0xdc)) = (*(s32 *)(obj + 8));
                {
                    s32 px = (*(s32 *)(obj + 0));
                    s32 py = (*(s32 *)(obj + 4));
                    s32 pz = (*(s32 *)(obj + 8));
                    (*(s32 *)(obj + 0xe0)) = px + vx;
                    (*(s32 *)(obj + 0xe4)) = py;
                    (*(s32 *)(obj + 0xe8)) = pz + vz;
                }
                (*(s32 *)(obj + 0)) += vx;
                (*(s32 *)(obj + 8)) += vz;
                if (func_0210c2f4(obj, obj + 0x24) < ((*(s32 *)(obj + 0x78)) << 12)) {
                    (*(s32 *)(obj + 0)) = (*(s32 *)(obj + 0x24));
                    (*(s32 *)(obj + 8)) = (*(s32 *)(obj + 0x2c));
                    (*(u32 *)(obj + 0xac)) &= ~0x1000;
                    (*(u32 *)(obj + 0xac)) |= 1;
                    (*(u32 *)(obj + 0xac)) &= ~0x1000000;
                }
            }
        } else if ((*(u32 *)(obj + 0xac)) & 0x200) {
            func_02052abc(obj);
        }

        if (((*(u32 *)(obj + 0xac)) & 0x10000) || ((*(u32 *)(obj + 0xac)) & 0x2000)) {
            if ((s32)(*(u8 *)(obj + 0xa3)) % 3 == 0) {
                if ((*(u32 *)(obj + 0x80)) & 2) {
                    (*(u32 *)(obj + 0x80)) &= ~2;
                } else {
                    (*(u32 *)(obj + 0x80)) |= 2;
                }
            }
            (*(u8 *)(obj + 0xa3))--;
            if ((*(u8 *)(obj + 0xa3)) == 0) {
                (*(u32 *)(obj + 0x80)) |= 2;
                (*(u32 *)(obj + 0xac)) &= ~0x10000;
                (*(u32 *)(obj + 0xac)) &= ~0x2000;
            }
        }

        if ((*(u16 *)(obj + 0x8e)) == 2000) {
            u8 *player;
            switch ((*(u8 *)(obj + 0xce))) {
            case 0:
                break;
            case 1:
            case 2:
                player = (*(u8 **)(data_021600ac + 0x68));
                if (func_0210c2f4(obj, player) < ((*(u8 *)(obj + 0xcf)) << 12) && func_020529ac(player, (*(u16 *)(player + 0x92)), obj)) {
                    if ((*(u8 *)(obj + 0xce)) == 1) {
                        func_02052844(player, 0, 0);
                        triggered = 1;
                    }
                    (*(u8 *)((*(u8 **)(player + 0xb0)) + 0xc)) = one;
                    (*(u16 *)((*(u8 **)(player + 0xb0)) + 4)) = (*(u16 *)(obj + 0x90));
                    (*(u16 *)((*(u8 **)(player + 0xb0)) + 0xa)) = (*(u16 *)((*(u8 **)(obj + 0xb0)) + 0xa));
                }
                break;
            case 3:
                player = (*(u8 **)(data_021600ac + 0x68));
                if (!((*(u32 *)(obj + 0xac)) & 0x80000) && func_0210c2f4(obj, player) < ((*(u8 *)(obj + 0xcf)) << 12) && func_020529ac(player, (*(u16 *)(player + 0x92)), obj)) {
                    if ((*(u8 *)(obj + 0xce)) == 1) {
                        func_02052844(player, 0, 0);
                        triggered = 1;
                    }
                    (*(u8 *)((*(u8 **)(player + 0xb0)) + 0xc)) = one;
                    (*(u16 *)((*(u8 **)(player + 0xb0)) + 4)) = (*(u16 *)(obj + 0x90));
                    (*(u16 *)((*(u8 **)(player + 0xb0)) + 0xa)) = (*(u16 *)((*(u8 **)(obj + 0xb0)) + 0xa));
                }
                break;
            }
        }

        {
            u8 *node;
            for (node = (*(u8 **)(data_02160a80 + 0x48)); node != NULL; node = (*(u8 **)(node + 0x40))) {
                if ((*(u32 *)(node + 0x18)) & 1) {
                    u8 *other = func_02047820((u16)((*(s32 *)(node + 8)) - 3001));
                    if (other != NULL) {
                        (*(s32 *)(node + 0x1c)) = (*(s32 *)(other + 0xfc)) << 12;
                        (*(s32 *)(node + 0x20)) = ((*(s32 *)(other + 0x100)) - 0x30) << 12;
                    }
                    if ((*(s32 *)(node + 0x10)) != 0 && ((*(u32 *)(node + 0x18)) & 8)) {
                        (*(u32 *)(node + 0x18)) &= ~1;
                    }
                }
            }
        }
        {
            u8 *node;
            for (node = (*(u8 **)(data_02160af0 + 0x70)); node != NULL; node = (*(u8 **)(node + 0x54))) {
                if ((*(u32 *)(node + 0x14)) & 4) {
                    Vec *v;
                    u8 *owner;
                    if ((*(s32 *)(node + 0x38)) > (*(s32 *)(node + 8))) {
                        (*(s32 *)(node + 0x24)) += (*(s32 *)(node + 0x40));
                        if ((*(s32 *)(node + 0x24)) >= (*(s32 *)(node + 0x38))) {
                            (*(s32 *)(node + 0x24)) = (*(s32 *)(node + 0x38));
                            (*(u32 *)(node + 0x14)) &= ~4;
                        }
                    } else {
                        (*(s32 *)(node + 0x24)) -= (*(s32 *)(node + 0x40));
                        if ((*(s32 *)(node + 0x24)) <= (*(s32 *)(node + 0x38))) {
                            (*(s32 *)(node + 0x24)) = (*(s32 *)(node + 0x38));
                            (*(u32 *)(node + 0x14)) &= ~4;
                        }
                    }
                    v = func_0204785c((*(u16 *)((*(u8 **)(node + 0)) + 0x1b8)), (u16)(*(s32 *)(node + 0x2c)));
                    if (v != NULL) {
                        *v = *(Vec *)(node + 0x20);
                    }
                    owner = (*(u8 **)(node + 0));
                    (*(s32 *)(owner + 0x6c)) = (*(s32 *)(node + 0x20));
                    (*(s32 *)(owner + 0x70)) = (*(s32 *)(node + 0x24));
                    (*(s32 *)(owner + 0x74)) = (*(s32 *)(node + 0x28));
                    (*(s32 *)(owner + 0xf4)) = one;
                }
                if ((*(u32 *)(node + 0x14)) & 8) {
                    s32 index = ((func_020ddc8c(node + 0x20, node + 0x34) + 0) % 0x10000) >> 4;
                    s16 x = ((const s16 (*)[2])data_0213a394)[index][0];
                    s16 z = ((const s16 (*)[2])data_0213a394)[index][1];
                    u8 *owner;
                    Vec *v;
                    (*(s32 *)(node + 0x20)) += (*(u8 *)(node + 0x44)) * x;
                    (*(s32 *)(node + 0x28)) += (*(u8 *)(node + 0x44)) * z;
                    if (func_0210c2f4(node + 0x20, node + 0x34) <= ((*(u8 *)(node + 0x44)) << 12)) {
                        (*(s32 *)(node + 0x20)) = (*(s32 *)(node + 0x34));
                        (*(s32 *)(node + 0x28)) = (*(s32 *)(node + 0x3c));
                        (*(u32 *)(node + 0x14)) &= ~8;
                    }
                    owner = (*(u8 **)(node + 0));
                    (*(s32 *)(owner + 0x6c)) = (*(s32 *)(node + 0x20));
                    (*(s32 *)(owner + 0x70)) = (*(s32 *)(node + 0x24));
                    (*(s32 *)(owner + 0x74)) = (*(s32 *)(node + 0x28));
                    (*(s32 *)(owner + 0xf4)) = one;
                    v = func_0204785c((*(u16 *)((*(u8 **)(node + 0)) + 0x1b8)), (u16)(*(s32 *)(node + 0x2c)));
                    if (v != NULL) {
                        *v = *(Vec *)(node + 0x20);
                    }
                }
            }
        }

        if ((*(u16 *)(obj + 0x8e)) == 1) {
            u8 mode = (*(u8 *)(obj + 0x104));
            u8 *rng = (*(u8 **)((*(u8 **)(obj + 0x108)) + 0));
            if ((mode == 3 || mode == 4 || mode == 6) && (((*(u32 *)(obj + 0xac)) & 0x20000) || ((*(u32 *)(obj + 0xac)) & 0x2000000))) {
                if (mode != 6 && (*(u8 *)((*(u8 **)(data_021600f0 + 4)) + 0)) == 0 && func_02117d80(rng) % 2 == 0) {
                    func_0210d314((*(u8 *)(data_021600ac + 0x8c1)), 0x3c);
                }
            } else if (((*(u32 *)(obj + 0xac)) & 2) || ((*(u32 *)(obj + 0xac)) & 0x40) || ((*(u32 *)(obj + 0xac)) & 8) || (((*(u32 *)(obj + 0xac)) & 0x400) && (*(u16 *)(obj + 0x90)) == 0)) {
                if ((*(u16 *)(obj + 0x8e)) == 1) {
                    if ((*(u8 *)((*(u8 **)(data_021600f0 + 4)) + 0)) == 0 && func_02117d80(rng) % 2 == 0) {
                        func_0210d314((*(u8 *)(data_021600ac + 0x8c1)), 0x3c);
                    }
                } else if (func_02117d80(rng) % 2 == 0) {
                    func_0210d314((*(u8 *)(data_021600ac + 0x8c1)), 0x3c);
                }
            }
        }
    }

    if ((*(u16 *)(data_02160204 + 0x72)) != 2000 && triggered == 0 && func_02044dd0() && (*(u8 *)(data_02160204 + 0x7e)) == 0) {
        func_02052844((*(u8 **)(data_021600ac + 0x68)), 0, -1);
    }
    func_02052b68();

    for (obj = (*(u8 **)(data_021600bc + 0x4c)); obj != NULL; obj = (*(u8 **)(obj + 0x14c))) {
        if ((*(u32 *)(obj + 0xac)) & 0x100) {
            s32 vz;
            (*(s32 *)(obj + 0x30)) = func_0201ff80(0.6 * (f64)(*(s32 *)(obj + 0x78)) * (f64)((const s16 (*)[2])data_0213a394)[(((*(u16 *)(obj + 0x92)) + 0) % 0x10000) >> 4][0]);
            vz = func_0201ff80(0.6 * (f64)(*(s32 *)(obj + 0x78)) * (f64)((const s16 (*)[2])data_0213a394)[(((*(u16 *)(obj + 0x92)) + 0) % 0x10000) >> 4][1]);
            (*(s32 *)(obj + 0x38)) = vz;
            (*(s32 *)(obj + 0xc)) = (*(s32 *)(obj + 0));
            (*(s32 *)(obj + 0x10)) = (*(s32 *)(obj + 4));
            (*(s32 *)(obj + 0x14)) = (*(s32 *)(obj + 8));
            (*(s32 *)(obj + 0xd4)) = (*(s32 *)(obj + 0));
            (*(s32 *)(obj + 0xd8)) = (*(s32 *)(obj + 4));
            (*(s32 *)(obj + 0xdc)) = (*(s32 *)(obj + 8));
            {
                s32 px = (*(s32 *)(obj + 0));
                s32 py = (*(s32 *)(obj + 4));
                s32 pz = (*(s32 *)(obj + 8));
                (*(s32 *)(obj + 0xe0)) = px + (*(s32 *)(obj + 0x30));
                (*(s32 *)(obj + 0xe4)) = py;
                (*(s32 *)(obj + 0xe8)) = pz + vz;
            }
            (*(s32 *)(obj + 0)) += (*(s32 *)(obj + 0x30));
            (*(s32 *)(obj + 8)) += vz;
            if ((*(u16 *)(obj + 0x8e)) == 5502 && (*(s32 *)(obj + 4)) >= 0) {
                (*(s32 *)(obj + 4)) -= (*(s32 *)(obj + 0x38));
                if ((*(s32 *)(obj + 4)) <= 0) {
                    func_0210d27c(0x5c);
                    (*(u32 *)(obj + 0xac)) &= ~0x100;
                }
            }
        }
    }

    for (obj = (*(u8 **)(data_021600bc + 0x70)); obj != NULL; obj = (*(u8 **)(obj + 0x17c))) {
        switch ((*(u16 *)(obj + 0x8e))) {
        case 5081: {
            u8 *sub = (*(u8 **)(obj + 0xd0));
            switch ((*(u8 *)(sub + 1))) {
            case 0:
                if (func_0210c2f4((*(u8 **)(data_021600ac + 0x68)), obj) < 0x30000) {
                    u8 *entry;
                    func_020477dc(obj, 1, 1);
                    func_0210d27c(0x3c);
                    entry = func_02044180((*(u16 *)(sub + 4)));
                    if (entry != NULL) (*(u8 *)(entry + 0x12)) = 1;
                    (*(u8 *)(sub + 1)) = 1;
                }
                break;
            case 1:
                if ((*(s32 *)((*(u8 **)(obj + 0x108)) + 0x14)) != 0) {
                    func_020477dc(obj, 2, 1);
                    (*(u8 *)(sub + 1)) = 2;
                }
                break;
            case 2:
                if ((*(u8 *)(sub + 0xa)) >= 250) {
                    u8 *entry;
                    (*(u8 *)(sub + 1)) = 0;
                    entry = func_02044180((*(u16 *)(sub + 4)));
                    if (entry != NULL) (*(u8 *)(entry + 0x12)) = 0;
                    func_020477dc(obj, 0, 1);
                    (*(u8 *)(sub + 0xa)) = 0;
                }
                (*(u8 *)(sub + 0xa))++;
                break;
            }
            break;
        }
        case 5301:
        case 5311:
        case 5321:
        case 5331:
        case 10091:
            if ((*(u32 *)(data_02160200 + 0x34)) & 0x40) {
                u8 *player = (*(u8 **)(data_021600ac + 0x68));
                s32 bit;
                pos = *(Vec *)obj;
                bit = (*(s16 *)((*(u8 **)(obj + 0xb0)) + 0x14));
                if (bit != -1 && func_0210c2f4(obj, player) < ((*(u8 *)(obj + 0xcf)) << 12) && (((u32 *)data_02160200)[(*(s16 *)((*(u8 **)(obj + 0xb0)) + 0x14)) / 32] & (1U << ((*(s16 *)((*(u8 **)(obj + 0xb0)) + 0x14)) % 32)))) {
                    func_0205440c(obj, 1);
                }
                if (!((*(u32 *)(obj + 0x80)) & 2)) {
                    if ((*(s16 *)(obj + 0x98)) >= 1) {
                        (*(s16 *)(obj + 0x98))++;
                        if ((*(s16 *)(obj + 0x98)) >= 8) {
                            func_0205440c(obj, 1);
                        }
                    } else if (func_0210c2f4(obj, player) < ((*(u8 *)(obj + 0xcf)) << 12)) {
                        bit = (*(s16 *)((*(u8 **)(obj + 0xb0)) + 0x14));
                        if (bit != -1) {
                            ((u32 *)data_02160200)[bit / 32] |= 1U << (bit % 32);
                        }
                        (*(s16 *)(obj + 0x98)) = 1;
                        pos.z += 0x5000;
                        pos.x += 0x3000;
                        func_0206e8f0(0x85, &pos, 2);
                        func_0210d27c(0x81);
                    }
                } else {
                    func_0205440c(obj, 1);
                }
            }
            break;
        }
    }
}
