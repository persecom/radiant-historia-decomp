/* 23 functions from 0x020A66B8 to 0x020A7598 (main), found by ds-decomp. */
#include "common.h"

extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern u8 *data_021600e4;
extern u8 func_020bdba0(u16);
extern void func_020a6c44(void *, u16);
void func_020a6e90(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
}

void func_020a745c(void) {
}

void func_020a7494(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
}

