/* 3 functions from 0x02019C20 to 0x0201ABC4 (main), found by ds-decomp. */
#include "common.h"

extern u64 func_0201e1f8(u32, u32, s32 *);
extern void func_0201e2b8(u64, s32);
void func_02019c20(u32 arg0, u32 arg1, s32 arg2) {
    s32 local;
    u64 tmp = func_0201e1f8(arg0, arg1, &local);
    local += arg2;
    func_0201e2b8(tmp, local);
}
