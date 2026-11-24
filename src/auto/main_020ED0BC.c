/* 5 functions from 0x020ED0BC to 0x020EE098 (main), found by ds-decomp. */
#include "common.h"

typedef struct UnkF_020ed3a4 {
    u8 unk00[4];
    u16 unk04;
} UnkF_020ed3a4;

typedef struct UnkE_020ed3a4 {
    u16 count;
    u8 unk02[2];
    UnkF_020ed3a4 *items;
} UnkE_020ed3a4;

extern s32 func_0201f884(s32);
extern s32 func_02020888(s32, s32);
extern s32 func_020201f4(s32, s32);
extern s32 func_0201ff0c(s32);
extern u8 *data_02155984;
extern u8 *data_021600bc;
extern u32 data_02162834;
extern u8 *data_02160210;
extern u32 data_02162860;
extern void func_020ed4c4(void *, void *, u32, u32, u32, u32);

extern s32 func_020ed270(void *, u16, s32);
void func_020ed0bc(void) {
    s32 pos[2];
    u8 *p = NULL;

    pos[0] = *(s32 *)(data_02155984 + 0x20) / 0x10000;
    pos[1] = *(s32 *)(data_02155984 + 0x28) / 0x10000;

    if (data_021600bc != NULL) {
        u32 flag = 0;
        if (*(u16 *)(data_021600bc + 0x2a) == 1) {
            flag = 0x80;
        }
        *(volatile u32 *)0x040004a4 = 0x31f00c0;
        *(volatile u32 *)0x04000480 = 0x7fff;

        while ((p = (p != NULL) ? *(u8 **)(p + *(u16 *)(data_021600bc + 0x6e) + 4) : *(u8 **)(data_021600bc + 0x64)) != NULL) {
            if (*(u32 *)(p + 0x80) & 0x40000) {
                *(volatile u32 *)0x040004a4 = 0x30000c0 | (*(s16 *)(p + 0x9a) << 16);
            } else {
                *(volatile u32 *)0x040004a4 = 0x31f00c0;
            }
            func_020ed4c4(p, pos, *(u16 *)(data_021600bc + 0x32), flag, 1, data_02162834);
            *(volatile u32 *)0x04000504 = 0;
        }
    }

    if (data_02160210 != NULL) {
        *(volatile u32 *)0x040004a4 = 0x31f00c0;
        *(volatile u32 *)0x04000480 = 0x7fff;

        while ((p = (p != NULL) ? *(u8 **)(p + *(u16 *)(data_02160210 + 0x56) + 4) : *(u8 **)(data_02160210 + 0x4c)) != NULL) {
            if (data_02162860 == 0) {
                func_020ed4c4(p, pos, 0, 0, 3, 0);
            } else {
                func_020ed4c4(p, pos, 0, 0, 2, 0);
            }
            *(volatile u32 *)0x04000504 = 0;
        }
    }
}

s32 func_020ed2d0(u8 *arg0, s32 arg1) {
    u8 *r3 = *(u8 **)(arg0 + 0x10);
    if (*(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)arg0 + 0x58) + 0xc)) <= arg1 * 2) {
        return 0;
    }
    switch (r3[arg1 * 4]) {
        case 0:
            return 0;
        case 1:
            break;
        case 4:
            *(u16 *)(arg0 + 0xc) = 0xffff;
            return func_020ed270(arg0, *(u16 *)(r3 + arg1 * 4 + 2) + 2, 1);
        case 0xe:
            *(u16 *)(arg0 + 0xc) = 0xffff;
            return func_020ed270(arg0, *(u16 *)(r3 + arg1 * 4 + 2) + 2, 1);
        case 0xf:
            *(u16 *)(arg0 + 0xc) = 0xffff;
            return func_020ed270(arg0, *(u16 *)(r3 + arg1 * 4 + 2), 1);
    }
    return 0;
}

void func_020ed3a4(u8 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 j;
    s32 v;
    UnkF_020ed3a4 *f;

    for (i = 0; i < *(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)arg0 + 0x58) + 4)); i++) {
        for (j = 0; j < (*(UnkE_020ed3a4 **)(*(u8 **)(*(u8 **)(*(u8 **)arg0 + 0x58) + 4) + 4))[i].count; j++) {
            f = &(*(UnkE_020ed3a4 **)(*(u8 **)(*(u8 **)(*(u8 **)arg0 + 0x58) + 4) + 4))[i].items[j];
            f->unk04 += (u16)(arg1 + (arg2 << 5));
            f = &(*(UnkE_020ed3a4 **)(*(u8 **)(*(u8 **)(*(u8 **)arg0 + 0x58) + 4) + 4))[i].items[j];
            v = func_0201ff0c(func_020201f4(0x42000000, func_02020888(func_0201f884((f->unk04 % 0x1000 % 0x400) / 0x10), 0x40000000)));
            f->unk04 += (u16)(v - (arg1 + (arg2 << 5)));
        }
    }
}
