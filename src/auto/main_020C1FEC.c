/* 19 functions from 0x020C1FEC to 0x020C2E80 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160090;
extern u8 *data_02160a6c;

extern u8 *func_020c2584(u8 *, u32);
extern void func_020c27b4(u8, s8, u32);
extern void func_021167f0(u8 *, u8 *);

void func_020c2734(u8 arg0, s8 arg1, u32 arg2);
void *func_020c2a98(u8 arg0, u8 arg1) {
    u8 *node = *(u8 **)(data_02160090 + 0x48);
    while (node != NULL) {
        if (node[0] == arg0 && node[1] == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x24);
    }
    return NULL;
}
