/* 7 functions from 0x020A033C to 0x020A1234 (main), found by ds-decomp. */
#include "common.h"

extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern s16 *func_02116984(void *, u16);

void func_020a0da8(void) {
}

void *func_020a0dac(void) {
    return func_0210c594(0xc, data_02155c3c);
}

void func_020a0dc8(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
}

s32 func_020a0e08(void *arg0, s32 arg1) {
    s32 i = 0;
    s16 *ptr = func_02116984(arg0, i);
    do {
        if (ptr[0] == arg1) {
            return ptr[1];
        }
        i++;
        ptr = func_02116984(arg0, i);
    } while (ptr != NULL);
    return 0;
}

