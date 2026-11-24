/* 12 functions from 0x020CDCE8 to 0x020CEC8C (main), found by ds-decomp. */
#include "common.h"

extern u8 data_021512f0;
extern u8 *data_02160238;
extern s16 data_02162908[4];
extern void func_020cec8c(void);
extern void *func_020cda08(u32, u16);

typedef struct {
    s16 f0;
    s16 f2;
    s16 f4;
    u32 f8;
    s32 fc;
    s32 f10;
} Unk738;
void func_020ce738(void) {
    u8 i;
    for (i = 0; i < 3; i++) {
        u8 *p = *(u8 **)data_02160238 + i * 100;
        s16 *q = (s16 *)(p + 0x500);
        s32 a = q[0xb4 / 2];
        s32 b = q[0xb0 / 2];
        s32 c = *(s32 *)(p + 0x5bc);
        s32 d = q[0xb2 / 2];
        s32 e = *(s32 *)(p + 0x5c0);
        u32 f = *(u32 *)(p + 0x5b8);
        (*(u32 **)(p + 0x560))[0x4c / 4] = (a + 0x65) << 12;
        (*(u32 **)(p + 0x560))[0x44 / 4] = (b + c) << 12;
        (*(u32 **)(p + 0x560))[0x48 / 4] = (d + e) << 12;
        (*(u32 **)(p + 0x560))[0x40 / 4] = f;
    }
}

u8 func_020ce9c0(u16 arg0) {
    u8 *node = func_020cda08(2, arg0);
    s32 bx, by;
    s32 x1, y1, x2, y2;

    if (node == NULL) {
        return 0;
    }
    if ((u16)data_02162908[2] == 0) {
        return 0;
    }
    x1 = *(s16 *)(node + 0xc) + (*(s32 *)(node + 0x14) >> 12);
    bx = data_02162908[0];
    y1 = *(s16 *)(node + 0xe) + (*(s32 *)(node + 0x18) >> 12);
    x2 = x1 + *(s16 *)(node + 0x10) + (*(s32 *)(node + 0x1c) >> 12);
    y2 = y1 + *(s16 *)(node + 0x12) + (*(s32 *)(node + 0x20) >> 12);
    by = data_02162908[1];
    if (bx >= x1 && bx <= x2 && by >= y1 && by <= y2) {
        return 1;
    }
    return 0;
}

void func_020cea64(u8 arg0) {
    data_021512f0 = arg0;
}

void func_020ceb74(s32 *arg0, s32 *arg1, s32 *arg2, s32 arg3) {
    s32 q = arg3 / 60;
    *arg0 = arg3 / 3600;
    *arg1 = (arg3 % 3600) / 60;
    *arg2 = arg3 % 60;
    if (*arg0 > 999) {
        *arg0 = 999;
        *arg1 = 59;
        *arg2 = 59;
    }
}

void func_020cec18(void) {
    u8 *p = data_02160238;
    s32 flag = 0;
    u8 *node = NULL;
    u32 v;

    if (p == NULL) {
        return;
    }
    v = *(u8 *)(p + 0x772);
    if (v == 0) {
        goto common;
    }
    v--;
    *(u8 *)(p + 0x772) = v;
    flag = 1;
    if (v != 0) {
        goto common;
    }
    func_020cec8c();
    flag = 0;
common:
    node = func_020cda08(2, 1);
    if (node == NULL) {
        return;
    }
    if (flag != 0) {
        *(u8 *)(node + 3) = 5;
    } else {
        *(u8 *)(node + 3) = 4;
    }
}

