/* 7 functions from 0x020617C8 to 0x02062578 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160a6c;
extern u8 *data_02160244;
extern void func_02030b7c(void *, s32, s32);

void func_020619c8(s32 arg0) {
    u8 *node = *(u8 **)(data_02160a6c + 0xb8);
    while (node != NULL) {
        s32 val = *(s32 *)(node + 4);
        u8 *sub = *(u8 **)(node + 0x128);
        if (val == 0x20000) {
            func_02030b7c(node, 1, arg0);
            sub[0x7c] = 1;
        }
        node = *(u8 **)(node + 0x174);
    }
}

s32 func_020624c8(void) {
    u8 *node = *(u8 **)(data_02160a6c + 0xb8);
    while (node != NULL) {
        u8 *sub = *(u8 **)(node + 0x128);
        if (node != NULL && *(u8 **)(node + 0x118) != NULL && *(s32 *)(*(u8 **)(node + 0x118) + 4) >= 1) {
            s32 val = *(s32 *)(sub + 0x24);
            if (val != 0 && val != 0x270e) {
                return 1;
            }
        }
        node = *(u8 **)(node + 0x174);
    }
    return 0;
}

void func_02062530(void) {
    u8 *ptr = *(u8 **)data_02160244;
    s32 i;
    for (i = 0; i < 10; i++) {
        *(s32 *)(ptr + 0x10 + i * 4) = 0;
    }
    *(s32 *)(ptr + 4) = 0;
    *(u16 *)(ptr + 0x3e) = 0;
}

s32 func_02062570(s32 *arg0) {
    return arg0[1];
}
