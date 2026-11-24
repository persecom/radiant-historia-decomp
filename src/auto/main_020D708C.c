/* 4 functions from 0x020D708C to 0x020D7E7C (main), found by ds-decomp. */
#include "common.h"

extern void *func_02021f10(u32);
void *func_020d7a68(u32 arg0, u8 *arg1, u32 arg2) {
    u8 *p = func_02021f10(arg0);
    if (p != NULL) {
        *(u16 *)(p + 0x10) = *(u32 *)(*(u8 **)(arg1 + 0x118) + 4);
        *(s16 *)(p + 0x14) = *(s16 *)(*(u8 **)(arg1 + 0x118) + 0xc);
        *(s16 *)(p + 0x34) = *(s16 *)(*(u8 **)(arg1 + 0x118) + 0x5a);
        *(u32 *)(p + 8) = arg2;
        *(u8 *)(p + 0x44) = *(u32 *)(*(u8 **)(arg1 + 0x118) + 0x70);
    }
    return p;
}
