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
s32 func_020db1f4(void *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 mask;
    s32 bit;
    u16 i;

    if (arg1[7] != 8) {
        return 0;
    }

    bit = 1 << arg2;
    mask = func_020deaf0(arg1, arg2, 1);
    for (i = 0; i < 9; i++) {
        if ((mask & (1 << i)) != 0 && (arg3 & (1 << i)) != 0) {
            func_02030878(arg0, arg1, func_0202e548(i), mask, bit, 1);
        }
    }
    return mask;
}

void func_020db4ac(void *arg0) {
    u8 *node = *(u8 **)(data_02160a6c + 0x70);
    while (node != NULL) {
        u8 *sub = *(u8 **)(node + 0x128);
        if (*(void **)(sub + 4) == arg0) {
            *(void **)(sub + 4) = NULL;
        }
        if (*(void **)(sub + 0) == arg0) {
            *(void **)(sub + 0) = NULL;
        }
        node = *(u8 **)(node + 0x13c);
    }
}

void func_020db4fc(void) {
    u8 *node = *(u8 **)(data_02160a6c + 0x70);
    while (node != NULL) {
        u8 *sub = *(u8 **)(node + 0x118);
        if (sub[0] == 1) {
            if (*(s32 *)(sub + 0x70) != 0 && *(s32 *)(sub + 4) <= 0) {
                func_020db35c(node, 0);
            } else {
                func_020de0a8(node);
            }
        }
        node = *(u8 **)(node + 0x13c);
    }
}

void func_020db850(void) {
    func_020321cc(0);
    func_020951b4();
}
