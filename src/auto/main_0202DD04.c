/* 16 functions from 0x0202DD04 to 0x0202EC9C (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160a6c;
extern u8 **data_02160244;
extern u8 *func_0202c5a0(u8 *);

s32 func_0202e260(u32 arg0) {
    s32 i;
    s32 start = (arg0 == 0) ? 0 : 9;
    s32 end = (arg0 == 0) ? 9 : 12;
    for (i = start; i < end; i++) {
        u8 *entry = data_02160244[8 + i];
        u8 *sub = *(u8 **)(entry + 0x10);
        if (sub != NULL) {
            u8 *a = *(u8 **)(sub + 0);
            if (a != NULL && *(u8 **)(a + 0x118) != NULL) {
                if (*(u8 **)(*(u8 **)(a + 0x118) + 0x70) != NULL) {
                    return 1;
                }
            }
            if (*(u8 **)(sub + 0xc) != NULL) {
                return 1;
            }
        }
    }
    return 0;
}

s32 func_0202e468(void) {
    s32 i;
    for (i = 0; i < 9; i++) {
        u8 *entry = data_02160244[8 + i];
        u8 *sub = *(u8 **)(entry + 0x10);
        if (sub != NULL) {
            u8 *a = *(u8 **)(sub + 0);
            if (a != NULL && *(u8 **)(a + 0x118) != NULL) {
                if (*(s32 *)(*(u8 **)(a + 0x118) + 4) >= 1) {
                    return 1;
                }
            }
            if (*(u8 **)(sub + 0xc) != NULL) {
                return 1;
            }
        }
    }
    return 0;
}

void func_0202e4cc(void) {
    u8 *node = *(u8 **)(data_02160a6c + 0xb8);
    while (node != NULL) {
        u8 *src = func_0202c5a0(node);
        *(u32 *)(node + 0) = *(u32 *)(src + 0);
        *(u32 *)(node + 4) = *(u32 *)(src + 4);
        *(u32 *)(node + 8) = *(u32 *)(src + 8);
        node = *(u8 **)(node + 0x174);
    }
}

u32 func_0202e98c(u32 arg0, s32 arg1) {
    switch (arg0) {
    case 0:
        return 0;
    case 1:
        return 1 << arg1;
    case 2:
        return (1 << arg1) | (1 << (arg1 + 1));
    case 3:
        return (1 << arg1) | (1 << (arg1 - 3));
    case 4:
        return (1 << arg1) | (1 << (arg1 + 1)) | (1 << (arg1 - 3)) | (1 << (arg1 - 2));
    default:
        return 0x1ff;
    }
}
