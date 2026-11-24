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

void func_02066bc4(void) {
    data_021600e0[1][0xe0] = 0;
}
