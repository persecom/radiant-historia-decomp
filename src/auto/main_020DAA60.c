/* 13 functions from 0x020DAA60 to 0x020DB864 (main), found by ds-decomp. */
#include "common.h"

extern void func_020321cc(s32);
extern void func_020951b4(void);
extern s32 func_020deaf0(void *, s32, s32);
extern s32 func_0202e548(u8);
extern void func_02030878(void *, void *, s32, s32, s32, s32);
extern void func_020db35c(void *, s32);
extern void func_020de0a8(void *);
extern u8 *data_02160a6c;

extern u32 data_0216263c[3];
extern u8 *data_02160244;
extern void func_0205b710(void *, s32);
extern void *func_02022558(void *, s32);
extern s32 func_020da4f0(void *, s32);
extern s32 func_020d3160(s32, s32, s32, s32);
extern void func_0206e7a0(u8, void *, void *, u16);
extern void func_0210d27c(s32);
extern void func_020bfd78(s32, s32, u32, s32, s32, void *, u16, s32);
extern void func_0206e990(s32, u16);
void func_020daa60(u8 *arg0, u8 *arg1, u32 arg2, u8 *arg3, u32 arg4) {
    u8 *stat1 = *(u8 **)(arg1 + 0x118);
    u32 flags78 = *(u32 *)(stat1 + 0x78);
    s32 mult = 100;
    u8 *stat0;
    s32 isCrit;
    s32 critMult;
    s32 val;
    s32 dmg;

    if (flags78 & 0x800000) {
        func_0205b710(arg1, 0x9c);
        mult = 0;
    } else if (arg4 & 4) {
        if (flags78 & 0x1000000) {
            func_0205b710(arg1, 0x9d);
            mult = 0;
        } else if (*(u32 *)(stat1 + 0x8c) & 1) {
            mult = *(s16 *)((u8 *)func_02022558(*(void **)(stat1 + 0x60), 0xa2) + 6);
        }
    } else if (arg4 & 8) {
        if (flags78 & 0x2000000) {
            func_0205b710(arg1, 0x9e);
            mult = 0;
        } else if (*(u32 *)(stat1 + 0x8c) & 2) {
            mult = *(s16 *)((u8 *)func_02022558(*(void **)(stat1 + 0x60), 0xa3) + 6);
        }
    }

    stat1 = *(u8 **)(arg1 + 0x118);
    if ((*(u32 *)(stat1 + 0x8c) & 0x10) && mult != 0) {
        mult = *(s16 *)((u8 *)func_02022558(*(void **)(stat1 + 0x60), 0xa4) + 6);
    }

    stat1 = *(u8 **)(arg1 + 0x118);
    if ((*(u32 *)(stat1 + 0x90) & 0x20) && mult == 100) {
        mult = *(s16 *)(stat1 + 0x9c);
    }

    stat0 = *(u8 **)(arg0 + 0x118);
    isCrit = 0;
    critMult = 100;
    if (func_020da4f0(arg0, *(s16 *)(stat0 + 0x7c) + *(s16 *)(stat0 + 0x7e)) != 0) {
        critMult = 150;
        isCrit = 1;
    }

    val = func_020d3160(2, 0, 0, 0);
    {
        s32 baseDmg;
        if (arg4 & 1) {
            baseDmg = *(s32 *)(arg3 + 0xc);
        } else if (arg4 & 2) {
            baseDmg = *(s32 *)(arg3 + 0x8);
        }
        if (val == 0) {
            val = 1000;
        }
        dmg = (val * (baseDmg * mult) / 100000) * critMult / 100;
        data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
        dmg = dmg * ((u16)(((data_0216263c[0] >> 16) * 5) >> 16) + 98) / 100;
    }

    if (dmg <= 0) {
        dmg = 1;
    }
    if (mult == 0) {
        dmg = 0;
    }

    stat1 = *(u8 **)(arg1 + 0x118);
    {
        u32 f8c = *(u32 *)(stat1 + 0x8c);
        u32 f90;
        if ((f8c & 8) && !(f8c & 0x800)) {
            dmg = 0;
        }
        if (f8c & 0x200) {
            dmg = 0;
        }
        f90 = *(u32 *)(stat1 + 0x90);
        if (f90 & 1) {
            dmg = 0;
        }
        if ((f90 & 2) && (arg4 & 4)) {
            dmg = 0;
        }
        if ((f90 & 4) && (arg4 & 8)) {
            dmg = 0;
        }
    }

    if (stat1[0] == 0 && (*(u32 *)(*(u8 **)(arg1 + 0x128) + 0x18) & 2)) {
        u8 sp[0x18];
        dmg /= 2;
        *(u8 *)(sp + 0xc) = 0;
        *(u16 *)(sp + 0xe) = 0;
        *(u8 *)(sp + 0x10) = 0;
        *(u16 *)(sp + 0x12) = 0;
        *(u8 *)(sp + 0x14) = 0;
        *(u32 *)(sp + 0x0) = 0;
        *(u32 *)(sp + 0x4) = 0;
        *(u32 *)(sp + 0x8) = 0;
        func_0206e7a0(6, arg1, sp, 0);
        func_0210d27c(0x6a);
    }

    if (mult == 0 && !(*(u32 *)(*(u8 **)(arg1 + 0x128) + 0x18) & 2)) {
        u8 sp[0x18];
        *(u8 *)(sp + 0xc) = 0;
        *(u16 *)(sp + 0xe) = 0;
        *(u8 *)(sp + 0x10) = 0;
        *(u16 *)(sp + 0x12) = 0;
        *(u8 *)(sp + 0x14) = 1;
        *(u32 *)(sp + 0x0) = 0;
        *(u32 *)(sp + 0x4) = 0;
        *(u32 *)(sp + 0x8) = 0;
        func_0206e7a0(6, arg1, sp, 0);
        func_0210d27c(0x13);
    }

    stat0 = *(u8 **)(arg0 + 0x118);
    if (*(u32 *)(stat0 + 0x78) & 8) {
        *(s16 *)(arg0 + 0x1c4) += (s16)dmg;
        *(u32 *)(stat0 + 0x8c) |= 0x400;
    }

    if (arg4 & 0x10) {
        *(s16 *)(arg1 + 0x1c6) += (s16)dmg;
        return;
    }

    if (arg4 & 0x20) {
        s32 total;
        *(s16 *)(arg1 + 0x1c6) += (s16)dmg;
        total = *(s16 *)(arg1 + 0x1c6);
        *(s32 *)(*(u8 **)(arg1 + 0x118) + 4) -= total;
        if (*(s32 *)(*(u8 **)(arg1 + 0x118) + 4) <= 0) {
            *(s32 *)(*(u8 **)(arg1 + 0x118) + 4) = 0;
        }
        if (*(u32 *)(arg1 + 0x80) & 0x800) {
            if (*(s32 *)(*(u8 **)(arg1 + 0x118) + 4) <= 0) {
                *(s32 *)(*(u8 **)(arg1 + 0x118) + 4) = 1;
            }
        }
        if (data_02160244[0x16f] == 1) {
            func_020bfd78(0x80, 0x60, arg4, 3, total, arg1, *(u16 *)(arg1 + 0x90), 2);
        } else {
            func_020bfd78(0x80, 0x60, arg4, 1, total, arg1, *(u16 *)(arg1 + 0x90), 2);
        }
        return;
    }

    *(s32 *)(*(u8 **)(arg1 + 0x118) + 4) -= dmg;
    if (*(s32 *)(*(u8 **)(arg1 + 0x118) + 4) <= 0) {
        *(s32 *)(*(u8 **)(arg1 + 0x118) + 4) = 0;
    }
    if (*(u32 *)(arg1 + 0x80) & 0x800) {
        if (*(s32 *)(*(u8 **)(arg1 + 0x118) + 4) <= 0) {
            *(s32 *)(*(u8 **)(arg1 + 0x118) + 4) = 1;
        }
    }
    if (data_02160244[0x16f] == 1) {
        func_020bfd78(0x80, 0x60, arg4, 3, dmg, arg1, *(u16 *)(arg1 + 0x90), 2);
    } else {
        func_020bfd78(0x80, 0x60, arg4, 1, dmg, arg1, *(u16 *)(arg1 + 0x90), 2);
    }

    if (isCrit != 0) {
        if (*(u16 *)(arg1 + 0x8e) == 0x353) {
            func_0206e990(0x87, *(u16 *)(arg1 + 0x90));
        } else {
            func_0206e990(0x68, *(u16 *)(arg1 + 0x90));
        }
    }
}
