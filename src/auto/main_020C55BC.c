/* 12 functions from 0x020C55BC to 0x020C641C (main), found by ds-decomp. */
#include "common.h"

extern void func_0210c5dc(void *);
extern void *data_021600e4;
extern u32 data_02155c3c;
extern void func_020c6dbc(void);
extern u16 *func_020a5f14(void *, u16);
extern void func_020a5c40(void *, u16);
extern void *func_0210c594(u32, u32);
extern void *func_020e9fe8(void *, u16);
extern void func_021167f0(void *, void *);
void func_020c6124(void) {
    u8 *ptr = data_021600e4;
    u16 *res = func_020a5f14(ptr + 0x124, *(u16 *)(ptr + 0xd4));
    func_020a5c40(*(void **)(ptr + 0x18c), *res);
    *(u16 *)(ptr + 0x19c) |= 0x20;
}

s32 func_020c6324(void) {
    func_020c6dbc();
    return 0;
}

void func_020c6334(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}
