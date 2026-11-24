/* 13 functions from 0x02065E78 to 0x02066D84 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600e0[];
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
void func_02066594(void) {
    void *node;
    while ((node = *(void **)(data_021600e0[1] + 0x10c)) != NULL) {
        func_021168f8(data_021600e0[1] + 0x10c, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

void func_020665e0(void) {
    void *node;
    while ((node = *(void **)(data_021600e0[1] + 0x1a0)) != NULL) {
        func_021168f8(data_021600e0[1] + 0x1a0, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

void func_02066b7c(u32 arg0, u32 arg1, u32 arg2) {
    u8 *ptr = data_021600e0[1];
    ptr[0xe0] = 3;
    *(u32 *)(ptr + 0x160) = arg0;
    *(u32 *)(ptr + 0x164) = 0;
    *(u32 *)(ptr + 0x168) = arg1;
    *(u32 *)(ptr + 0x16c) = *(u32 *)(ptr + 0xfc);
    *(u32 *)(ptr + 0x174) = *(u32 *)(ptr + 0x100);
    *(u32 *)(ptr + 0x178) = arg2;
    *(u16 *)(ptr + 0x19c) = 0;
}

s32 func_02066bc4(void) {
    data_021600e0[1][0xe0] = 0;
    return 0;
}
