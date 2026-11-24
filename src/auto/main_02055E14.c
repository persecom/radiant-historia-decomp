/* 8 functions from 0x02055E14 to 0x02056D10 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_021600c0;

void func_02055e14(u16 arg0) {
    u8 *p;
    u8 *node;
    p = data_021600c0;
    if (p == NULL) return;
    node = *(u8 **)(p + 0x40);
    if (node == NULL) return;
    for (;;) {
        if (*(u16 *)(node + 4) == arg0) {
            u8 *d = *(u8 **)node;
            *(volatile u32 *)0x040004a8 = (*(u32 *)(d + 4) >> 3) | (*(u32 *)(d + 0x18) << 26) |
                                          0x40000000 | (*(u32 *)(d + 0x10) << 20) |
                                          (*(u32 *)(d + 0x14) << 23) | 0x20000000;
            *(volatile u32 *)0x040004ac = *(u32 *)(d + 0xc) >> (4 - (*(u32 *)(d + 0x18) == 2));
            *(volatile u32 *)0x04000480 = 0x7fff;
            return;
        }
        node = *(u8 **)(node + 0xc);
        if (node == NULL) return;
    }
}
