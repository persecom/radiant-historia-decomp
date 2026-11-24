/* 10 functions from 0x020DF56C to 0x020DFF7C (main), found by ds-decomp. */
#include "common.h"

extern void func_020e5968(void);
s32 func_020e291c(void);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern u8 *data_02160a74;
extern u8 *data_02160a6c;
extern u32 data_02155c3c;
extern void *func_0210c594(s32, u32);
extern void func_021167f0(void *, void *);
extern void func_020df9dc(void *, void *);
void func_020df56c(void *arg0, s32 arg1) {
    u8 *node = *(u8 **)(data_02160a6c + 0xb8);

    if (arg1 == 0) {
        while (node != NULL) {
            if (arg0 != node) {
                *(u32 *)(node + 0x80) &= ~2;
            }
            node = *(u8 **)(node + 0x174);
        }
    } else {
        while (node != NULL) {
            *(u32 *)(node + 0x80) |= 2;
            node = *(u8 **)(node + 0x174);
        }
    }
}

void *func_020df944(void *arg0, u16 arg1, u32 arg2) {
    u8 *ptr = func_0210c594(0x18, data_02155c3c);

    *(u32 *)(ptr + 0) = arg2;
    *(u16 *)(ptr + 4) = 0;
    *(u16 *)(ptr + 6) = -17;
    *(u16 *)(ptr + 8) = 0;
    *(u16 *)(ptr + 0xa) = arg1;
    func_021167f0(arg0, ptr);
    return ptr;
}

void func_020df9c8(u32 arg0) {
    *(u32 *)(data_02160a74 + 0xa0) = arg0;
}

void func_020df9dc(void *arg0, void *arg1) {
    func_021168f8(arg0, arg1);
    if (arg1 != NULL) {
        func_0210c5dc(arg1);
    }
}

s32 func_020df9fc(void) {
    func_020e5968();
    return func_020e291c();
}
