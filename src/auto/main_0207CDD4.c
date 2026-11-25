/* 4 functions from 0x0207CDD4 to 0x0207D4CC (main), found by ds-decomp. */
#include "common.h"

extern void *data_02155c3c;
extern u8 *data_0216010c;
extern u8 data_021484dc[8];
extern u8 *data_021600ac;
extern u8 *data_02160af0;
extern s32 data_02162884;
extern s32 data_02162814;
extern u8 *data_02160204;

typedef struct {
    s32 x, y, z;
} Vec3_0207cdd4;

extern void func_0210d27c(s32);
extern void func_020477dc(void *, s32, s32);
extern void func_0206e8f0(s32, void *, s32);
extern u32 func_02052a88(void *, s32);
extern u8 *func_020f0aa4(s32);
extern void func_020bdbe8(s32, Vec3_0207cdd4);
extern void func_020bdd80(s32, s32);

extern void func_0207d4cc(void);
extern void *func_0210c594(s32, void *);
extern void func_020a9544(void *);
extern void *func_020a94b8(void *);
extern void func_02080d30(void);
extern void func_0210c5dc(void *);
extern void func_02089a98(void);

#pragma optimization_level 0
void func_0207cdd4(void) {
    u8 *s = data_021600ac;
    u8 *p = *(u8 **)(s + 0x68);
    u8 *obj;

    switch (*(u16 *)(s + 0x8e0)) {
    case 0:
        func_0210d27c(0x62);
        *(s16 *)(s + 0x8e2) = 0;
        *(s8 *)(s + 0x8fc) = 0;
        *(u8 *)(data_02160af0 + 0x7d) = 1;
        *(u16 *)(s + 0x8e0) = 1;
        break;
    case 1:
        *(s16 *)(s + 0x8e2) += 1;
        if (*(s16 *)(s + 0x8e2) > 8 && *(s8 *)(s + 0x8fc) < 2) {
            *(s16 *)(s + 0x8e2) = 0;
            *(s8 *)(s + 0x8fc) += 1;
            func_0210d27c(0x62);
        }
        if (*(u8 *)(data_02160af0 + 0x7d) == 2) {
            *(u16 *)(s + 0x8e0) = 2;
        }
        break;
    case 2:
        *(u16 *)(p + 0x92) = 0x8000;
        func_020477dc(p, 8, 0);
        func_0206e8f0(0x7b, p, 1);
        *(Vec3_0207cdd4 *)(s + 0x8f0) = *(Vec3_0207cdd4 *)p;
        func_0210d27c(0x83);
        *(u16 *)(s + 0x8e0) = 3;
        break;
    case 3:
        if (func_02052a88(p, 0) & 2) {
            func_020477dc(p, 9, 0);
            obj = func_020f0aa4(0x3e6);
            *(s32 *)(s + 0x8e4) = *(s32 *)(obj + 4) - *(s32 *)(p + 0);
            *(s32 *)(s + 0x8e8) = 0x20000;
            *(s32 *)(s + 0x8ec) = *(s32 *)(obj + 0xc) - *(s32 *)(p + 8);
            *(s16 *)(s + 0x8e2) = 0;
            *(u16 *)(s + 0x8e0) = 4;
        }
        break;
    case 4:
        if (*(s16 *)(s + 0x8e2) == 1) {
            func_0210d27c(0x75);
        }
        obj = func_020f0aa4(0x3e6);
        *(s16 *)(s + 0x8e2) += 1;
        if (*(s16 *)(s + 0x8e2) > 6) {
            *(s16 *)(s + 0x8e2) = 6;
        }
        *(s32 *)(p + 0) = (*(s32 *)(obj + 4) - *(s32 *)(s + 0x8e4)) + (*(s32 *)(s + 0x8e4) * *(s16 *)(s + 0x8e2)) / 6;
        *(s32 *)(p + 8) = (*(s32 *)(obj + 0xc) - *(s32 *)(s + 0x8ec)) + (*(s32 *)(s + 0x8ec) * *(s16 *)(s + 0x8e2)) / 6;
        *(s32 *)(p + 4) = ((*(s32 *)(obj + 8) + 0x20000) - *(s32 *)(s + 0x8e8)) + (*(s32 *)(s + 0x8e8) * *(s16 *)(s + 0x8e2)) / 6;
        if (*(s16 *)(s + 0x8e2) >= 6) {
            *(u8 *)(data_02160af0 + 0x7d) = 3;
            *(s16 *)(s + 0x8e2) = 0;
            *(u32 *)(p + 0x80) &= ~2;
            *(u16 *)(s + 0x8e0) = 5;
        }
        break;
    case 5:
        *(s16 *)(s + 0x8e2) += 1;
        if (*(s16 *)(s + 0x8e2) > 20) {
            *(s16 *)(s + 0x8e2) = 20;
        }
        if (data_02162884 != -16) {
            data_02162884 = (-16 * *(s16 *)(s + 0x8e2)) / 20;
        }
        data_02162814 = (-16 * *(s16 *)(s + 0x8e2)) / 20;
        if (*(s16 *)(s + 0x8e2) == 20) {
            *(u16 *)(s + 0x8e0) = 0;
            *(s16 *)(s + 0x8e2) = 0;
            func_020bdbe8(2, *(Vec3_0207cdd4 *)(s + 0x8f0));
            func_020bdd80(2, 1);
            *(u8 *)(data_02160204 + 0x110) = 0;
            *(s32 *)(data_021600ac + 0xc) = 1;
            *(u16 *)(data_02160204 + 0x72) = 0x7d0;
            *(u8 *)(data_02160204 + 0xd8) = 0x12;
            *(u8 *)(data_021600ac + 0x334) = 0;
            *(u8 *)(data_021600ac + 0x3ac) |= 0x20;
            *(u8 *)(data_02160204 + 0x7e) = 0;
            *(s32 *)(data_021600ac + 0x10) = 4;
            *(u8 *)(data_02160204 + 0x11e) = 2;
        }
        break;
    case 6:
        *(u8 *)(data_02160af0 + 0x7d) = 4;
        *(u16 *)(s + 0x8e0) = 7;
        *(u32 *)(p + 0x80) &= ~2;
        obj = func_020f0aa4(0x3e6);
        *(s32 *)(s + 0x8e4) = *(s32 *)(obj + 4) - *(s32 *)(p + 0);
        *(s32 *)(s + 0x8e8) = 0x20000;
        *(s32 *)(s + 0x8ec) = *(s32 *)(obj + 0xc) - *(s32 *)(p + 8);
        *(s32 *)(p + 0) = *(s32 *)(obj + 4);
        *(s32 *)(p + 8) = *(s32 *)(obj + 0xc);
        *(s32 *)(p + 4) = *(s32 *)(obj + 8) + 0x20000;
        break;
    case 7:
        if (*(u8 *)(data_02160af0 + 0x7d) == 2) {
            *(s16 *)(s + 0x8e2) = 0;
            *(u16 *)(s + 0x8e0) = 8;
        }
        break;
    case 8:
        *(s16 *)(s + 0x8e2) += 1;
        if (*(s16 *)(s + 0x8e2) > 30) {
            func_020477dc(p, 9, 0);
            func_0210d27c(0x77);
            *(u32 *)(p + 0x80) |= 2;
            *(s16 *)(s + 0x8e2) = 0;
            *(u16 *)(s + 0x8e0) = 9;
        }
        break;
    case 9:
        obj = func_020f0aa4(0x3e6);
        *(s16 *)(s + 0x8e2) += 1;
        if (*(s16 *)(s + 0x8e2) > 10) {
            *(s16 *)(s + 0x8e2) = 10;
        }
        *(s32 *)(p + 0) = (*(s32 *)(obj + 4) - *(s32 *)(s + 0x8e4)) + (*(s32 *)(s + 0x8e4) * (10 - *(s16 *)(s + 0x8e2))) / 10;
        *(s32 *)(p + 8) = (*(s32 *)(obj + 0xc) - *(s32 *)(s + 0x8ec)) + (*(s32 *)(s + 0x8ec) * (10 - *(s16 *)(s + 0x8e2))) / 10;
        *(s32 *)(p + 4) = ((*(s32 *)(obj + 8) + 0x20000) - *(s32 *)(s + 0x8e8)) + (*(s32 *)(s + 0x8e8) * (10 - *(s16 *)(s + 0x8e2))) / 10;
        if (*(s16 *)(s + 0x8e2) == 10) {
            *(u8 *)(data_02160af0 + 0x7d) = 3;
            func_0210d27c(0x83);
            func_020477dc(p, 10, 0);
            func_0206e8f0(0x7b, p, 1);
            *(u16 *)(s + 0x8e0) = 10;
        }
        break;
    case 10:
        if (func_02052a88(p, 0) & 2) {
            func_020477dc(p, 2, 0);
        }
        if (*(u8 *)(data_02160af0 + 0x7d) == 0) {
            *(u16 *)(s + 0x8e0) = 11;
        }
        break;
    case 11:
        *(u8 *)(data_02160204 + 0x7e) = 0;
        *(s32 *)(data_021600ac + 0x10) = 4;
        *(u16 *)(s + 0x8e0) = 0;
        *(s16 *)(s + 0x8e2) = 0;
        break;
    }
}

void func_0207d3cc(void) {
    func_0207d4cc();
}
#pragma optimization_level 0
void func_0207d3d8(void) {
    s32 i = 0;
    u8 unused[4];
    *(void **)(data_0216010c + 0x44) = func_0210c594(0x20, data_02155c3c);
    if (*(void **)(data_0216010c + 0x58)) {
        if (**(void ***)(data_0216010c + 0x58)) {
            func_020a9544(*(void **)(data_0216010c + 0x58));
        }
    }
    *(void **)(data_0216010c + 0x58) = func_020a94b8(&data_021484dc);
}
void func_0207d464(void) {
    func_02080d30();
    if (*(void **)(data_0216010c + 0x44)) {
        func_0210c5dc(*(void **)(data_0216010c + 0x44));
        *(void **)(data_0216010c + 0x44) = NULL;
    }
    *(void **)(data_0216010c + 0x44) = NULL;
    *(u8 *)(data_0216010c + 0x3f) = 0;
    func_02089a98();
}
#pragma optimization_level 4

