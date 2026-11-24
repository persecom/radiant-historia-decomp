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
