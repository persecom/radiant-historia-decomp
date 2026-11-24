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
    register void *a0 asm("r9") = arg0;
    register u8 *a1 asm("r8") = arg1;
    register s32 a3 asm("r7") = arg3;
    register s32 one asm("r4") = 1;
    register s32 mask asm("r5");
    register s32 bit asm("r6");
    register u16 i asm("r10");
    if (a1[7] == 8) {
        bit = one << arg2;
        mask = func_020deaf0(a1, arg2, one);
        for (i = 0; i < 9; i++) {
            if ((mask & (one << i)) != 0 && (a3 & (one << i)) != 0) {
                func_02030878(a0, a1, func_0202e548(i), mask, bit, one);
            }
        }
        return mask;
    }
    return 0;
}
