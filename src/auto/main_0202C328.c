/* 14 functions from 0x0202C328 to 0x0202CD5C (main), found by ds-decomp. */
#include "common.h"

extern u8 **data_02160244;
extern void *func_0205bad4(void *);
extern void func_02032b98(void *, void *, s32);

extern void func_0202be58(u8 *, u8);
extern u8 *func_0202bdf0(u8 *, u8, s32);
extern void func_020020f8(s32 *, s32 *, s32 *);
void func_0202c328(u8 *arg0, u8 arg1) {
    u8 *p128 = *(u8 **)(arg0 + 0x128);
    u8 *r4 = *(u8 **)(p128 + 0x54);
    s32 vec[3];
    u8 *res;
    s8 type;

    if (arg0 == NULL) {
        return;
    }

    type = *(s8 *)(r4 + 1);
    if (type == 0) {
        func_0202be58(arg0, *(s8 *)r4);
        res = func_0202bdf0(arg0, arg1, 0);
        *(s32 *)(r4 + 0x18) = *(s32 *)(res + 4);
        *(s32 *)(r4 + 0x1c) = *(s32 *)(res + 8);
        *(s32 *)(r4 + 0x20) = *(s32 *)(res + 0xc);
    } else if (type == 1) {
        func_0202be58(arg0, *(s8 *)r4);
        func_0202be58(arg0, *(s8 *)r4 + 1);
        res = func_0202bdf0(arg0, arg1, 0);
        vec[0] = *(s32 *)(res + 4);
        vec[1] = *(s32 *)(res + 8);
        vec[2] = *(s32 *)(res + 0xc);
        res = func_0202bdf0(arg0, arg1 + 1, 2);
        func_020020f8(vec, (s32 *)(res + 4), vec);
        *(s32 *)(r4 + 0x18) = vec[0] / 2;
        *(s32 *)(r4 + 0x1c) = vec[1] / 2;
        *(s32 *)(r4 + 0x20) = vec[2] / 2;
    } else if (type == 2) {
        func_0202be58(arg0, *(s8 *)r4);
        func_0202be58(arg0, *(s8 *)r4 - 3);
        res = func_0202bdf0(arg0, arg1, 0);
        vec[0] = *(s32 *)(res + 4);
        vec[1] = *(s32 *)(res + 8);
        vec[2] = *(s32 *)(res + 0xc);
        res = func_0202bdf0(arg0, arg1 - 3, 1);
        func_020020f8(vec, (s32 *)(res + 4), vec);
        *(s32 *)(r4 + 0x18) = vec[0] / 2;
        *(s32 *)(r4 + 0x1c) = vec[1] / 2;
        *(s32 *)(r4 + 0x20) = vec[2] / 2;
    } else if (type == 3) {
        func_0202be58(arg0, *(s8 *)r4);
        func_0202be58(arg0, *(s8 *)r4 + 1);
        func_0202be58(arg0, *(s8 *)r4 - 3);
        func_0202be58(arg0, *(s8 *)r4 - 2);
        res = func_0202bdf0(arg0, arg1, 0);
        vec[0] = *(s32 *)(res + 4);
        vec[1] = *(s32 *)(res + 8);
        vec[2] = *(s32 *)(res + 0xc);
        res = func_0202bdf0(arg0, arg1 - 3, 1);
        func_020020f8(vec, (s32 *)(res + 4), vec);
        res = func_0202bdf0(arg0, arg1 + 1, 2);
        func_020020f8(vec, (s32 *)(res + 4), vec);
        func_0202bdf0(arg0, arg1 - 2, 3);
        *(s32 *)(r4 + 0x18) = vec[0] / 3;
        *(s32 *)(r4 + 0x1c) = vec[1] / 3;
        *(s32 *)(r4 + 0x20) = vec[2] / 3;
    }

    *(s8 *)r4 = arg1;
}

u8 *func_0202c5a0(u8 *arg0) {
    u8 *p128 = *(u8 **)(arg0 + 0x128);
    u8 *q = *(u8 **)(p128 + 0x54);
    u8 *p118;
    u8 x;
    if (arg0 != NULL) {
        p118 = *(u8 **)(arg0 + 0x118);
        x = *p118;
        if (x == 0) return q + 0x18;
        if (x == 1) return q + 0x18;
    }
    return NULL;
}

s32 func_0202c5d8(u8 *arg0) {
    u8 *p118;
    u8 x;
    u8 *p128;
    s8 *pidx;
    s8 idx;
    u8 *sub;
    u8 i;
    u8 *node;
    if (arg0 == NULL) goto fail;
    p118 = *(u8 **)(arg0 + 0x118);
    x = *p118;
    if (x == 0) return 1;
    if (x != 1) goto fail;
    p128 = *(u8 **)(arg0 + 0x128);
    pidx = *(s8 **)(p128 + 0x54);
    idx = *pidx;
    i = 0;
    sub = *(u8 **)((u8 *)data_02160244 + idx * 4 + 8);
    sub = *(u8 **)(sub + 0x10);
    while (sub != NULL) {
        node = *(u8 **)sub;
        if (node == arg0) return i;
        sub = *(u8 **)(sub + 0xc);
        i++;
    }
fail:
    return -1;
}

s8 func_0202c658(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 0x128);
    s8 *q = *(s8 **)(p + 0x54);
    return *q;
}
