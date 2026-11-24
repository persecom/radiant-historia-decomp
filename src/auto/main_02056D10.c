/* 7 functions from 0x02056D10 to 0x02057AE4 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600ac;
extern void func_021168f8(void **, void *);
extern void func_0210c5dc(void *);
extern void func_020f4f04(void *);

void func_02056f2c(void) {
    u8 *node = *(u8 **)(data_021600ac + 0x8d0);
    while (node != NULL) {
        u8 *child = *(u8 **)(node + 0x14);
        u8 *next = *(u8 **)(node + 0x24);
        while (child != NULL) {
            void *v = *(void **)(child + 4);
            u8 *child_next = *(u8 **)(child + 0xc);
            func_020f4f04(v);
            func_021168f8((void **)(node + 0x14), child);
            if (child != NULL) func_0210c5dc(child);
            child = child_next;
        }
        func_021168f8((void **)(data_021600ac + 0x8d0), node);
        if (node != NULL) func_0210c5dc(node);
        node = next;
    }
}

void *func_020579dc(u16 arg0) {
    u8 *node = *(u8 **)(data_021600ac + 0x8d0);
    while (node != NULL) {
        if (*(u16 *)node == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x24);
    }
    return NULL;
}

extern void func_02057764(u16, s32, s16, s16, s16, s8, u16, u8, s32);
void func_02057a18(u16 arg0, s32 arg1, s32 arg2) {
    u8 *node = (u8 *)func_020579dc(arg0);
    if (node != NULL) {
        u8 *child = *(u8 **)(node + 0x14);
        while (child != NULL) {
            void *v = *(void **)(child + 4);
            u8 *child_next = *(u8 **)(child + 0xc);
            func_020f4f04(v);
            func_021168f8((void **)(node + 0x14), child);
            if (child != NULL) func_0210c5dc(child);
            child = child_next;
        }
        func_021168f8((void **)(data_021600ac + 0x8d0), node);
        func_02057764(
            *(u16 *)node,
            arg1,
            *(s16 *)(node + 8),
            *(s16 *)(node + 0xa),
            *(s16 *)(node + 0xc),
            *(s8 *)(node + 0xe),
            *(u16 *)(node + 0x10),
            *(u8 *)(node + 0x12),
            arg2
        );
        if (node != NULL) func_0210c5dc(node);
    }
}

