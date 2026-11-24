/* 8 functions from 0x020E8358 to 0x020E9354 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160a74;
extern u8 *data_02160078;
extern u8 *func_020e5910(s32);

s32 func_020e8358(u8 *arg0) {
    u8 *p = data_02160a74;
    s16 shift = *(s16 *)(p + 0xb2);
    u8 *ret;
    if ((*(u16 *)(p + 0x1b8) & (1 << shift)) == 0) {
        return 0;
    }
    switch (*(s16 *)(p + 0xbc)) {
    case 0:
    case 2:
    case 4:
    case 5:
        return 1;
    case 1:
        ret = func_020e5910((*(s16 *)(p + 0xce) + shift) & 0xff);
        if (ret == NULL) {
            return 0;
        }
        return *(s16 *)(*(u8 **)(arg0 + 0x118) + 0xc) >= *(s16 *)(ret + 0x1c);
    case 3:
        return 1;
    case 6:
        if (*(s16 *)(*(u8 **)(arg0 + 0x118) + 0x5a) < 100) {
            return 0;
        }
        return 1;
    default:
        return 0;
    }
}

s32 func_020e8410(s32 arg0, u32 arg1, s32 arg2) {
    u8 *flags;
    if (arg0 != 0 && arg0 != 1) {
        return 0;
    }
    if (arg1 < 1 || arg1 > 3) {
        return 0;
    }
    flags = data_02160078 + 0x33;
    arg1 -= 1;
    if (arg0 == 0) {
        return (*flags & (1 << arg1)) != 0;
    }
    if (arg2 == 0) {
        *flags |= (1 << arg1);
    } else {
        *flags &= ~(1 << arg1);
    }
    return 0;
}

void *func_020e84c0(s32 arg0) {
    u8 *p = data_02160a74;
    void **a = *(void **)(p + 0xa0);
    void *b = *a;
    void *c = *(void **)b;
    switch (arg0) {
    case 0:
        return c;
    case 1:
        return b;
    default:
        return NULL;
    }
}

void func_020e8698(void) {
    *(u32 *)(data_02160a74 + 0x98) = 0;
    *(u32 *)(data_02160a74 + 0x58) = 0;
    *(u16 *)(data_02160a74 + 0x9c) = 0;
}
