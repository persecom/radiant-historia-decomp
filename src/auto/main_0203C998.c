/* 9 functions from 0x0203C998 to 0x0203D970 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160098[2];
extern u32 data_02155c3c;

extern void *func_0210c594(u32, u32);
extern void func_021167ac(void *, s32);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void func_020020f8(void *, void *, void *);
extern void func_020f4668(void *);

void func_0203d7c0(void) {
    if (data_02160098[1] != NULL) {
        return;
    }
    data_02160098[1] = func_0210c594(0x70, data_02155c3c);
    func_021167ac(data_02160098[1] + 0x64, 4);
}

void func_0203d800(void) {
    while (*(void **)(data_02160098[1] + 0x64) != NULL) {
        void *node = *(void **)(data_02160098[1] + 0x64);
        func_021168f8(data_02160098[1] + 0x64, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
    if (data_02160098[1] != NULL) {
        func_0210c5dc(data_02160098[1]);
        data_02160098[1] = NULL;
    }
}

s32 func_0203d960(s32 arg0) {
    return arg0 == 1;
}
