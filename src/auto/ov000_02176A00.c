/* 13 functions from 0x02176A00 to 0x02177AA0 (ov000), found by ds-decomp. */
#include "common.h"

extern u8 func_ov000_02177f8c[];
extern u8 func_ov000_02177438[];
extern u8 func_ov000_02177fc8[];
extern u8 func_ov000_02177474[];
extern u8 func_ov000_0217801c[];
u32 func_ov000_02176a00(u32 (*arg0)(void *), void *arg1) {
    u32 funcs[32];
    u32 *p;
    u32 sum;

    funcs[2] = 0;
    funcs[0] = (u32)(func_ov000_02177f8c + 0x1000) + 0x320;
    funcs[1] = (u32)(func_ov000_02177438 + 0x1000) + 0x320;

    sum = 0x30eb87;
    p = funcs;
    do {
        sum += ((u32 (*)(void))(*p - 0x1320))();
        p++;
    } while (*p != 0);

    if (sum % 241 != 0) {
        sum = arg0(arg1);
    }
    return sum;
}

u32 func_ov000_02176aa0(u32 (*arg0)(void *), void *arg1) {
    u32 funcs[32];
    u32 *p;
    u32 sum;

    funcs[2] = 0;
    funcs[0] = (u32)(func_ov000_02177fc8 + 0x1000) + 0x320;
    funcs[1] = (u32)(func_ov000_02177474 + 0x1000) + 0x320;

    sum = 0x30eb87;
    p = funcs;
    do {
        sum += ((u32 (*)(void))(*p - 0x1320))();
        p++;
    } while (*p != 0);

    if (sum % 251 == 0) {
        sum = arg0(arg1);
    }
    return sum;
}

extern u8 func_ov000_02177a00[];
extern u8 func_ov000_021773fc[];
u32 func_ov000_02176be0(u32 (*arg0)(void *), void *arg1) {
    u32 funcs[32];
    u32 *p;
    u32 sum;

    funcs[2] = 0;
    funcs[0] = (u32)(func_ov000_02177a00 + 0x1000) + 0x320;
    funcs[1] = (u32)(func_ov000_021773fc + 0x1000) + 0x320;

    sum = 0x30eb87;
    p = funcs;
    do {
        sum += ((u32 (*)(void))(*p - 0x1320))();
        p++;
    } while (*p != 0);

    if (sum % 251 == 0) {
        sum = arg0(arg1);
    }
    return sum;
}

u32 func_ov000_02176c80(u32 (*arg0)(void *), void *arg1) {
    u32 funcs[32];
    u32 *p;
    u32 sum;

    funcs[0] = (u32)(func_ov000_0217801c + 0x1000) + 0x320;
    funcs[1] = 0;

    sum = 0x30eb87;
    p = funcs;
    do {
        sum += ((u32 (*)(void))(*p - 0x1320))();
        p++;
    } while (*p != 0);

    if (sum % 241 != 0) {
        sum = arg0(arg1);
    }
    return sum;
}

void func_ov000_02176da0(void) {
}
