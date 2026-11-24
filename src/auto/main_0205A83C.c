/* 8 functions from 0x0205A83C to 0x0205B710 (main), found by ds-decomp. */
#include "common.h"

extern u8 **data_02160244;
extern u8 *data_02160080;
extern u8 *data_02160a6c;

extern void func_020d90bc(s32);

s32 func_0205a83c(void) {
    u8 *p = *data_02160244;
    s32 i;
    for (i = 0; i < *(s8 *)(p + 0x39); i++) {
        u8 *q = ((u8 **)(p + 0x10))[i];
        u8 *r = *(u8 **)q;
        u8 *s = *(u8 **)(r + 0x128);
        if (*(u32 *)(s + 0x24) != 0) {
            return 0;
        }
    }
    {
        u8 *g = data_02160080;
        if (*(u16 *)(g + 0x14) == 1) {
            return 0;
        }
        if (*(u16 *)(g + 0x16) != 0) {
            return 0;
        }
    }
    if (*(u8 *)(p + 0x7a) != 0) {
        return 0;
    }
    return 1;
}

void func_0205b4e0(void) {
    u8 *p = *data_02160244;
    if (*(u8 *)(p + 0x3c) == 0) {
        *(u8 *)(p + 0x3c) += 1;
        return;
    }
    if (*(u8 *)(p + 0x3c) == 1) {
        func_020d90bc(1);
        *(u32 *)(p + 0x4) = 0;
    }
}

void func_0205b6bc(void) {
    u8 *p = *data_02160244;
    if (*(u8 *)(p + 0x3a) == 0) {
        *(u32 *)(data_02160a6c + 0x100) = 0;
        *(u8 *)(p + 0x3a) = 1;
    }
    {
        u8 *q = *(u8 **)(p + 0x60);
        u8 *r = *(u8 **)(q + 0x128);
        if (*(u32 *)(r + 0x24) == 0) {
            *(u32 *)(p + 0xc) = 0xc;
        }
    }
}

