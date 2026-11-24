/* 6 functions from 0x02035C3C to 0x02036514 (main), found by ds-decomp. */
#include "common.h"

extern u8 *func_020ddc08(s32);
void func_020362e8(s32 arg0, s32 arg1) {
    u8 *p = func_020ddc08(arg0);
    *(s32 *)(p + 0xf8) = arg1;
}
