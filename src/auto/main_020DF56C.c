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
