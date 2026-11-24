/* 24 functions from 0x020C2E80 to 0x020C3DF4 (main), found by ds-decomp. */
#include "common.h"

extern void func_0210c5dc(void *);
void func_020c3c94(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

extern void func_021168f8(void *, void *);
void func_020c3cd4(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

