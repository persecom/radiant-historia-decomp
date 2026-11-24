/* 8 functions from 0x020E8358 to 0x020E9354 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160a74;
extern u8 *data_02160078;
extern u8 *func_020e5910(s32);
extern void func_020e26f0(s32, s32, s32);
extern void func_020e25fc(s32, s32, s32);

typedef struct {
    s32 m0;
    s32 m4;
    s32 m8;
    s32 mC;
} Entry516c4;

extern Entry516c4 data_021516c4[];

s32 func_020e8358(u8 *arg0) {
    u8 *p = data_02160a74;
    u16 flags = *(u16 *)(p + 0x1b8);
    s16 shift = *(s16 *)(p + 0xb2);
    s32 ret = 1;
    if ((flags & (1 << shift)) == 0) {
        return 0;
    }
    switch (*(s16 *)(p + 0xbc)) {
    case 0:
    case 2:
    case 4:
    case 5:
        return ret;
    case 1: {
        u8 *r = func_020e5910((*(s16 *)(p + 0xce) + shift) & 0xff);
        if (r == NULL) {
            return 0;
        }
        if (*(s16 *)(*(u8 **)(arg0 + 0x118) + 0xc) >= *(s16 *)(r + 0x1c)) {
            return ret;
        }
        return 0;
    }
    case 3:
        return ret;
    case 6:
        if (*(s16 *)(*(u8 **)(arg0 + 0x118) + 0x5a) < 100) {
            return 0;
        }
        return ret;
    default:
        return 0;
    }
}

s32 func_020e8410(s32 arg0, u32 arg1, s32 arg2) {
    u8 *flags;
    u8 mask;
    if (arg0 == 0) {
        if (arg1 < 1 || arg1 > 3) goto fail;
        flags = data_02160078 + 0x33;
        arg1 -= 1;
        if (*flags & (1 << arg1)) return 1;
        goto fail;
    }
    if (arg0 != 1) goto fail;
    if (arg1 < 1 || arg1 > 3) goto fail;
    arg1 -= 1;
    if (arg2 == 0) {
        mask = (u8)(1 << arg1);
        flags = data_02160078 + 0x33;
        *flags |= mask;
        return 0;
    }
    mask = (u8)(1 << arg1);
    flags = data_02160078 + 0x33;
    *flags &= ~mask;
    return 0;
fail:
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

void func_020e8504(s32 arg0) {
    u8 *p = data_02160a74;

    if (*(u32 *)(p + 0x58) & 0x4000) {
        func_020e26f0(7, 1, 999);
        func_020e25fc(8, arg0, 1);
    } else {
        u8 *q;
        u8 *r;
        func_020e26f0(7, 0, 999);
        func_020e25fc(8, arg0, 0);
        q = *(u8 **)(p + 0xa0);
        r = *(u8 **)q;
        func_020e26f0(1 << *(u16 *)(r + 0x90), 3, 999);
    }
}

s32 func_020e85a0(s32 arg0, s32 arg1) {
    u8 i;

    for (i = 0; i < 9; i++) {
        s32 *e = (s32 *)data_021516c4 + i * 4;
        s16 a = (s16)e[0];
        s16 b = (s16)e[1];
        s16 c = (s16)(e[0] + e[2]);
        s16 d = (s16)(e[1] + e[3]);

        if (arg0 >= a && arg0 <= c && b <= arg1 && arg1 <= d) {
            return (s8)i;
        }
    }
    return -1;
}

s32 func_020e861c(s32 arg0, s32 arg1) {
    u8 i;

    for (i = 9; i < 12; i++) {
        s32 *e = (s32 *)data_021516c4 + i * 4;
        s16 a = (s16)e[0];
        s16 b = (s16)e[1];
        s16 c = (s16)(e[0] + e[2]);
        s16 d = (s16)(e[1] + e[3]);

        if (arg0 >= a && arg0 <= c && b <= arg1 && arg1 <= d) {
            return (s8)i;
        }
    }
    return -1;
}

void func_020e8698(void) {
    *(u32 *)(data_02160a74 + 0x98) = 0;
    *(u32 *)(data_02160a74 + 0x58) = 0;
    *(u16 *)(data_02160a74 + 0x9c) = 0;
}
