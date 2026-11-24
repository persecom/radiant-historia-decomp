/* 35 functions from 0x02000000 to 0x02000F44 (main), found by ds-decomp. */
#include "common.h"

void func_0200093c(u32 data, void *dest, u32 size) {
    u32 *p = (u32 *)dest;
    u32 *end = (u32 *)((u8 *)dest + size);
    while (p < end) {
        *p++ = data;
    }
}

void AutoloadCallback(void) {
}

void func_02000b60(void) {
}

