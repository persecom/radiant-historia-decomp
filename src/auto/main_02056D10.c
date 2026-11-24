/* 7 functions from 0x02056D10 to 0x02057AE4 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600ac;
extern void func_021168f8(void **, void *);
extern void func_0210c5dc(void *);
extern void func_020f4f04(void *);

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
