/* 33 functions from 0x020C641C to 0x020C7408 (main), found by ds-decomp. */
#include "common.h"

extern void func_0210c5dc(void *);
extern void *func_020c641c(void);
extern void func_020c738c(void *, s32, s32);
void func_020c6d4c(u8 *arg0) {
    (*(void (**)(void *))(arg0 + 4))(arg0);
}

void *func_020c6d5c(void) {
    void *ptr = func_020c641c();
    (*(void (**)(void *))ptr)(ptr);
    return ptr;
}

s32 func_020c6d78(void *arg0) {
    if (arg0 == NULL) {
        return 1;
    }
    func_020c738c(arg0, 0, 0);
    return 0;
}

void func_020c6da0(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_020c6db4(void) {
    return 1;
}

void func_020c6de0(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_020c7080(void) {
    return 1;
}

void func_020c71d8(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

