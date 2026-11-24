/* 4 functions from 0x020FCEA0 to 0x020FDC0C (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160200;
extern u8 *data_021600bc;
extern void func_02009008(void *, void *, u32);
extern void func_02008f74(void *, s32, u32);
extern void func_02052240(void *);
void func_020fdb64(void) {
    u8 *node;
    if (*(u32 *)(data_02160200 + 0x15c) & 0x2000000) {
        return;
    }
    node = *(u8 **)(data_021600bc + 0x70);
    while (node != NULL) {
        if (*(u16 *)(node + 0x8e) == 0x1483) {
            func_02009008(node + 0x18, node, 0xc);
            func_02009008(node + 0x18, node + 0xc, 0xc);
            func_02009008(node + 0x18, node + 0x24, 0xc);
            func_02008f74(node + 0x30, 0, 0xc);
            func_02052240(node);
        }
        node = *(u8 **)(node + 0x17c);
    }
}
