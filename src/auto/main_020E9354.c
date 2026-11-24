/* 25 functions from 0x020E9354 to 0x020EA188 (main), found by ds-decomp. */
#include "common.h"

extern void func_02108594(void *);
extern void func_0210c5dc(void *);
extern void func_020e86c0(s32);
extern void func_021167ac(void *, s32);
extern void func_020e9860(void);
extern void func_0210dae0(void *);
extern u8 *data_02160a74;
void func_020e9354(u16 arg0) {
    u8 *ptr = data_02160a74;
    func_020e86c0(0x18);
    *(u16 *)(ptr + 0x148) = 0;
    *(u16 *)(ptr + 0x14a) = arg0;
}

void func_020e95d0(void) {
    *(u16 *)(data_02160a74 + 0x1b0) = 0;
}

void func_020ea164(void **arg0) {
    func_02108594(*arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}
