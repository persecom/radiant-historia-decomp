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
extern void func_020a994c(void *);
extern void func_020a9610(void *, s32, s32, s32, s32, s32);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
void func_020ce664(s32 arg0, s16 arg1, s16 arg2, s16 arg3, u8 arg4) {
    u8 *p = data_02160238;
    s32 idx = arg0 * 100;

    func_020a994c(p + 0x164 + 0x400 + idx);
    if (arg4 == 0) {
        return;
    }
    *(u16 *)(p + idx + 0x5b0) = arg1;
    *(u16 *)(p + idx + 0x5b2) = arg2;
    *(u16 *)(p + idx + 0x5b4) = arg3;
    func_020a9610(p + 0x198 + 0x400 + idx, *(u32 *)(p + 0x704), arg4, *(u32 *)(p + idx + 0x560), 0, 0);
    func_020a98ac(p + 0x164 + 0x400 + idx);
    func_020a98f4(p + 0x164 + 0x400 + idx);
}

void func_020ce738(void) {
    u8 i;
    for (i = 0; i < 3; i++) {
        u8 *p = *(u8 **)data_02160238 + i * 100;
        Unk738 *s = (Unk738 *)(p + 0x5b0);
        (*(u32 **)(p + 0x560))[0x4c / 4] = (s->f4 + 0x65) << 12;
        (*(u32 **)(p + 0x560))[0x44 / 4] = (s->f0 + s->fc) << 12;
        (*(u32 **)(p + 0x560))[0x48 / 4] = (s->f2 + s->f10) << 12;
        (*(u32 **)(p + 0x560))[0x40 / 4] = s->f8;
    }
}

void func_020ce7d8(void) {
u8 *p = data_02160238;
s32 zero;
s32 one;
if((p + p[0x708]*16)[0x710]==0) return;
one=1;
func_020ccc30(one);
p[0x70a]=one;
func_020ccb10();
zero=0;
func_020cda64(0,0x12000,0x2d000,0x1e,zero,4,zero,zero,zero);
func_020cda64(one,0x92000,0x86000,0x1e,zero,0x65,zero,zero,zero);
func_020cda64(2,0x92000,0x9a000,0x1e,zero,0x66,zero,zero,zero);
*(s32 *)(*(u8 **)(data_02160238+0x60)+0x40)=one;
*(s32 *)(*(u8 **)(data_02160238+0xb0)+0x40)=one;
*(s32 *)(*(u8 **)(data_02160238+0x100)+0x40)=one;
p[0]=6;
p[0x70b]=zero;
}

void func_020ce8d4(void) {
u8 *p = data_02160238; s32 flag = 0; s32 enabled = 1; u8 *node;
if (p[0x770] == 0) return;
if (p[0x70d] != 0) { p[0x70d]--; flag = 1; if (p[0x70d] == 0) func_020ce7d8(); }
if (p[0] == 1 || p[0] == 2 || (u8)(p[0]+252) <= 2) enabled = 0;
{ u8 values[2] = { 0x17, 0x18 };
node = func_020cda08(2,2); node[3] = values[flag]; node[2] = enabled;
node = func_020cda08(2,3); node[2] = enabled;
}
{ u8 values[2] = { 0x1a, 0x1b };
node = func_020cda08(2,4); node[3] = values[flag]; node[2] = enabled;
}
}

u8 func_020ce9c0(u16 arg0) {
    u8 *node = func_020cda08(2, arg0);
    s16 *p;
    s32 bx, by;
    s32 x1, y1, x2, y2;

    if (node == NULL) {
        return 0;
    }
    p = data_02162908;
    if ((u16)p[2] == 0) {
        return 0;
    }
    x1 = *(s16 *)(node + 0xc) + (*(s32 *)(node + 0x14) >> 12);
    bx = p[0];
    y1 = *(s16 *)(node + 0xe) + (*(s32 *)(node + 0x18) >> 12);
    x2 = x1 + *(s16 *)(node + 0x10) + (*(s32 *)(node + 0x1c) >> 12);
    y2 = y1 + *(s16 *)(node + 0x12) + (*(s32 *)(node + 0x20) >> 12);
    by = p[1];
    return (bx >= x1 && bx <= x2 && by >= y1 && by <= y2) ? 1 : 0;
}

void func_020cea64(u8 arg0) {
    data_021512f0 = arg0;
}

void func_020ceb74(s32 *arg0, s32 *arg1, s32 *arg2, s32 arg3) {
    s32 q = arg3 / 60;
    *arg0 = q / 3600;
    *arg1 = (q % 3600) / 60;
    *arg2 = q % 60;
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

