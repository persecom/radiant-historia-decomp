/* 1 function from 0x02036514 to 0x02037D1C (main), found by ds-decomp. */
#include "common.h"

extern void func_020d9ea8(s32, s32);
extern u8 *func_0205bad4(u8 *);
s32 func_02036514(u8 *arg0) {
    s32 ret = 0;
    u8 *r8 = *(u8 **)(arg0 + 0x128);
    u8 *r5 = *(u8 **)(r8 + 0x8c);
    u8 *r4 = *(u8 **)(r8 + 0x0);

    switch (*(u16 *)(r5 + 0x0)) {
    case 0: {
        u8 *it;
        func_020d9ea8(8, ret);
        *(u32 *)(r5 + 0x24) = *(u32 *)(r4 + 0);
        *(u32 *)(r5 + 0x28) = *(u32 *)(r4 + 4);
        *(u32 *)(r5 + 0x2c) = *(u32 *)(r4 + 8);
        it = func_0205bad4(r8);
        while (it != 0) {
            u8 *p = *(u8 **)(it + 0);
            if (p != 0 && *(u8 **)(p + 0x118) != 0) {
                *(u32 *)(p + 0xd4) = *(u32 *)(p + 0);
                *(u32 *)(p + 0xd8) = *(u32 *)(p + 4);
                *(u32 *)(p + 0xdc) = *(u32 *)(p + 8);
            }
            it = *(u8 **)(it + 0x18);
        }
        *(u32 *)(r5 + 0x18) = *(u32 *)(arg0 + 0);
        *(u32 *)(r5 + 0x1c) = *(u32 *)(arg0 + 4);
        *(u32 *)(r5 + 0x20) = *(u32 *)(arg0 + 8);
        ret = 1;
        break;
    }
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 9:
    case 10:
    case 11:
    case 19:
    case 20:
        break;
    }
    return ret;
}
