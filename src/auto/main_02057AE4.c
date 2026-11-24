/* 4 functions from 0x02057AE4 to 0x02058A08 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600ac;
void *func_0205817c(u32 arg0) {
    u8 *root = data_021600ac;
    u8 *node = *(u8 **)(root + 0x8c4);
    while (node != NULL) {
        if (*(u32 *)(node + 0x48) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x3c);
    }
    return NULL;
}
