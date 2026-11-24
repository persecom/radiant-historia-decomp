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

extern void *func_020aa19c(void);
extern void func_020a6ca0(u16);
extern void func_020a9af0(void *, s16, s16);
extern void func_020a9d60(void *);
extern void func_020aa1b4(void);
extern s32 func_020aa144(void);
s32 func_02066bdc(void) {
    u8 *ptr = data_021600e0[1];
    u8 *node = *(u8 **)(*(u8 **)func_020aa19c() + 0xc);
    while (node != NULL) {
        func_020a6ca0(*(u16 *)(*(u8 **)node + 4));
        node = *(u8 **)(node + 8);
    }
    ptr[0xe0] = 4;
    return 0;
}

void func_02066c28(void) {
    s16 i, j;
    u8 (*arr)[11][0x20] = (u8 (*)[11][0x20])(data_021600e0[1] + 0x1b4);
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 11; j++) {
            func_020a9af0(arr[i][j], i, j);
        }
    }
}

void func_02066c8c(void) {
    s16 i, j;
    u8 (*arr)[11][0x20] = (u8 (*)[11][0x20])(data_021600e0[1] + 0x1b4);
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 11; j++) {
            func_020a9d60(arr[i][j]);
        }
    }
}

void func_02066ce8(void) {
    u8 *ptr = data_021600e0[1];
    u8 *node;
    s32 flag;
    if (ptr[0xe0] != 4) {
        return;
    }
    node = *(u8 **)(*(u8 **)func_020aa19c());
    flag = 0;
    while (node != NULL) {
        if (*(s8 *)(node + 8) > 0) {
            *(s8 *)(node + 8) -= 7;
            flag = 1;
            if (*(s8 *)(node + 8) < 0) {
                *(s8 *)(node + 8) = 0;
            }
            break;
        }
        node = *(u8 **)(node + 0x10);
    }
    if (flag == 0) {
        func_020aa1b4();
        if (func_020aa144() == 0) {
            func_02066b7c(*(u32 *)(ptr + 0x50), *(u32 *)(ptr + 0x54), (u32)func_02066bc4);
        }
    }
}

