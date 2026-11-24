/* 10 functions from 0x02102E60 to 0x02103DC8 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160c74;

s32 func_02103b04(s32 arg0, void *arg1) {
    void *p;
    s32 result;
    if (arg0 == 0) {
        return -3;
    }
    p = func_021092d8(arg1);
    if (p == NULL) {
        return -1;
    }
    result = 0;
    if (func_02092a40(p, 0) == 0) {
        return -3;
    }
    if (func_020123f0(arg0) == 0) {
        result = (u16)func_02092994(p, 0);
    } else if (func_02109444(p) == 0) {
        result = -2;
    }
    func_021093b0(p);
    return result;
}

s32 func_02103c2c(s32 arg0, s32 arg1, void *arg2) {
    void *p = func_021092d8(arg2);
    s32 result;
    if (p == NULL) {
        return -1;
    }
    result = func_02103b90(p, arg0, arg1);
    func_021093b0(p);
    return result;
}

s32 func_02103d78(s32 arg0) {
    return arg0 - *(s32 *)(data_02160c74 + 0x2c) + *(s32 *)(data_02160c74 + 0x28);
}
