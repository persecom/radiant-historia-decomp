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

u8 *func_0202c7d8(s32 arg0) {
    u8 *result = NULL;
    if (arg0 >= 0 && arg0 <= 8) {
        u8 *entry = *(u8 **)((u8 *)data_02160244 + arg0 * 4 + 8);
        u8 *sub = *(u8 **)(entry + 0x10);
        if (sub != NULL && *(u8 *)(sub + 4) == 0) {
            result = *(u8 **)sub;
        }
    }
    return result;
}

u8 *func_0202c820(u32 arg0) {
    u8 *sub = NULL;
    if (arg0 <= 8) {
        u8 *entry = *(u8 **)((u8 *)data_02160244 + arg0 * 4 + 8);
        sub = *(u8 **)(entry + 0x10);
    }
    return sub ? *(u8 **)sub : NULL;
}

u8 *func_0202c850(u32 arg0) {
    u8 *sub = NULL;
    u8 *obj;
    if (arg0 <= 8) {
        u8 *entry = *(u8 **)((u8 *)data_02160244 + arg0 * 4 + 8);
        sub = *(u8 **)(entry + 0x10);
    }
    obj = sub ? *(u8 **)sub : NULL;
    if (obj != NULL && (*(u8 *)(*(u8 **)(obj + 0x118) + 0x64) & 2) != 0) {
        return obj;
    }
    return NULL;
}

u32 func_0202c898(u32 arg0, void *arg1, u32 arg2) {
    u32 zero = 0;
    u8 *entry;
    u8 *node;
    u8 *p;
    u32 v;
    if (arg0 > 8) goto fail;
    entry = *(u8 **)((u8 *)data_02160244 + arg0 * 4 + 8);
    node = *(u8 **)(entry + 0x10);
    if (node == NULL) goto fail;
    do {
        v = *(u32 *)(node + 0);
        p = func_0205bad4(arg1);
        while (p != NULL) {
            if (v == *(u32 *)(p + 0)) {
                v = zero;
            }
            p = *(u8 **)(p + 0x18);
        }
        if (v != 0 && v != arg2) {
            return v;
        }
        node = *(u8 **)(node + 0xc);
    } while (node != NULL);
fail:
    return 0;
}

u8 *func_0202c920(u32 arg0) {
    u8 *sub = NULL;
    if (arg0 <= 0xb) {
        u8 *entry = *(u8 **)((u8 *)data_02160244 + arg0 * 4 + 8);
        sub = *(u8 **)(entry + 0x10);
    }
    return sub ? *(u8 **)sub : NULL;
}

void func_0202cbf8(u32 arg0, void *arg1) {
    u32 i;
    u32 zero = 0;
    u32 one = 1;
    for (i = 9; i <= 0xb; i++) {
        if (arg0 & (one << i)) {
            u8 *sub = *(u8 **)(data_02160244[i + 2] + 0x10);
            while (sub != NULL) {
                u8 *obj = *(u8 **)(sub + 0);
                if (obj != NULL && *(void **)(*(u8 **)(obj + 0x118) + 0x70) != NULL) {
                    func_02032b98(arg1, obj, zero);
                }
                sub = *(u8 **)(sub + 0xc);
            }
        }
    }
}

u32 func_0202cc74(u32 arg0) {
    u8 *node;
    u32 i;
    u32 ret = 0;
    for (i = 9; i <= 11; i++) {
        if (arg0 & (1 << i)) {
            node = *(u8 **)(data_02160244[2 + i] + 0x10);
            while (node != NULL) {
                u8 *obj = *(u8 **)node;
                if (obj != NULL) {
                    u8 *p = *(u8 **)(obj + 0x118);
                    if (*(u32 *)(p + 0x70) != 0) {
                        ret |= (u16)(1 << (i - 9));
                    }
                }
                node = *(u8 **)(node + 0xc);
            }
        }
    }
    return ret;
}

void func_0202ccec(u32 arg0, void *arg1) {
    u8 *node;
    u32 i;
    for (i = 9; i <= 11; i++) {
        if (arg0 & (1 << i)) {
            node = *(u8 **)(data_02160244[2 + i] + 0x10);
            while (node != NULL) {
                void *obj = *(void **)node;
                if (obj != NULL) {
                    func_02032b98(arg1, obj, 0);
                }
                node = *(u8 **)(node + 0xc);
            }
        }
    }
}

