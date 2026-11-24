/* 5 functions from 0x020A1234 to 0x020A18F8 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600b0;
extern void func_020a1750(u32 arg0);

u32 func_020a1734(u32 arg0) {
    return (arg0 >= 1 && arg0 <= 8) ? 1 : 0;
}

void func_020a18c8(u16 arg0) {
    u8 *ptr = data_021600b0;
    func_020a1750(0xc);
    *(u16 *)(ptr + 0x1a8) = 0;
    *(u16 *)(ptr + 0x1a6) = arg0;
}

