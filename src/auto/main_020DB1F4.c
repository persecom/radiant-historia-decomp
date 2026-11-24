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
    u16 i;
    if (arg1[7] == 8) {
        s32 bit = 1 << arg2;
        s32 mask = func_020deaf0(arg1, arg2, 1);
        for (i = 0; i < 9; i++) {
            if ((mask & (1 << i)) != 0 && (arg3 & (1 << i)) != 0) {
                func_02030878(arg0, arg1, func_0202e548(i), mask, bit, 1);
            }
        }
        return mask;
    }
    return 0;
}
