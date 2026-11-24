/* 15 functions from 0x020D9E48 to 0x020DAA60 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160258;
extern s32 data_02151fcc;
extern u32 data_0216263c[3];
extern s32 func_02002404(s32, s32);
extern void func_020dd810(void *, s32, s32);

void func_020d9e48(u32 *arg0, u32 *arg1) {
    s32 dx = (s32)arg1[0] - (s32)arg0[0];
    s32 dy = (s32)arg1[2] - (s32)arg0[2];
    *(u16 *)(data_02160258 + 0x48) = func_02002404(dy, dx);
}

void func_020d9e7c(void) {
    u8 *p = data_02160258;
    *(u32 *)(p + 0x7c) &= ~1;
    *(u32 *)(p + 0x88) &= ~2;
    *(u32 *)(p + 0x88) &= ~8;
}

BOOL func_020da008(s32 arg0) {
    s32 val = data_02151fcc;
    if (val - arg0 < 0) {
        val += 0x20000;
        data_02151fcc = val;
        if (val > (arg0 << 12)) {
            val = arg0 << 12;
            data_02151fcc = val;
        }
    } else {
        val -= 0x20000;
        data_02151fcc = val;
        if (val < (arg0 << 12)) {
            val = arg0 << 12;
            data_02151fcc = val;
        }
    }
    return val == (arg0 << 12);
}

BOOL func_020da060(s32 arg0) {
    s32 *p = (s32 *)data_02160258;
    s32 dx = p[0] - p[3];
    s32 dy;
    s32 dz;
    if (dx < 0) dx = -dx;
    dy = p[1] - p[4];
    if (dy < 0) dy = -dy;
    dz = p[2] - p[5];
    if (dx < 0x5000 && dy <= (arg0 << 12)) {
        if (dz < 0) dz = -dz;
        if (dz < 0x5000) {
            return TRUE;
        }
    }
    return FALSE;
}

void func_020da0c8(s32 arg0) {
    data_02151fcc = arg0 << 12;
}

BOOL func_020da4f0(u8 *arg0, s32 arg1) {
    u8 *p = *(u8 **)(arg0 + 0x118);
    s32 val;
    u32 x;
    u16 r;
    if (*p != 0) {
        val = 0;
    } else {
        val = *(s16 *)(p + 0xba) / 30 + *(s8 *)(p + 0x36) + arg1 + 5;
    }
    if (val >= 75) {
        val = 74;
    }
    x = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
    data_0216263c[0] = x;
    r = ((x >> 16) * 100) >> 16;
    return val >= r;
}

void func_020da870(u8 *arg0, s32 arg1) {
    *(u8 *)(arg0 + 0x9c) = 0;
    func_020dd810(arg0, arg1, 0);
    if (*(u32 *)(*(u8 **)(arg0 + 0x118) + 0x78) & 0x10) {
        *(volatile s32 *)(arg0 + 0xf8) = 1;
    } else {
        *(volatile s32 *)(arg0 + 0xf8) = 0;
    }
}

void func_020da8a4(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 0x118);
    *(s32 *)(arg0 + 0xf8) = (*(u32 *)(p + 0x78) & 0x10) ? 1 : 0;
}

