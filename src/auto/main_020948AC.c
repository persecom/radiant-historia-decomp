/* 19 functions from 0x020948AC to 0x02095874 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160110;
extern void func_020a9544(void *);
extern void func_0203bc34(void *, void *, u32, s32, s32, s32);
extern void func_020a8ab8(void *);
extern void *func_020a94b8(void *);
extern u8 data_021488b0[];
extern u8 data_021488bc[];
u32 func_02095198(void) {
    if (data_02160110 != NULL) {
        return *(u32 *)(data_02160110 + 0x9c);
    }
    return 0;
}
