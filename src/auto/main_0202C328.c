/* 14 functions from 0x0202C328 to 0x0202CD5C (main), found by ds-decomp. */
#include "common.h"

extern u8 **data_02160244;
extern void *func_0205bad4(void *);
extern void func_02032b98(void *, void *, s32);

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
