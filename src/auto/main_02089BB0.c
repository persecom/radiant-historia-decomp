/* 9 functions from 0x02089BB0 to 0x0208A678 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600b0;
extern u8 *data_0216010c;
extern s32 func_02092ab0(void *);
extern u16 func_02092994(void *, s32);
extern void func_020a3b84(void);
extern void func_020a0da8(void);
extern void func_020a0dc8(void *);
extern void func_0210c5dc(void *);
extern void func_020a9544(void *);
void func_0208a168(u8 *arg0, s32 arg1, s32 arg2, u32 *arg3) {
    arg3[2] = arg3[0];
    if (func_02092ab0(arg3) == -1) {
        return;
    }
    *(u16 *)(arg0 + 0x26) = func_02092994(arg3, 0);
}

s32 func_0208a318(s32 arg0) {
    switch (arg0) {
    case 1: return 0x1f41;
    case 2: return 0x1f55;
    case 3: return 0x1f91;
    case 4: return 0x1f5f;
    case 5: return 0x1f69;
    case 7: return 0x1f4b;
    case 8: return 0x1f9b;
    default: return 0;
    }
}

