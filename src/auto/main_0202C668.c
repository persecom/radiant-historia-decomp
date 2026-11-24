/* 14 functions from 0x0202C328 to 0x0202CD5C (main), found by ds-decomp. */
#include "common.h"

extern u8 **data_02160244;
extern void *func_0205bad4(void *);
extern void func_02032b98(void *, void *, s32);

s32 func_0202c668(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *base;
    s16 *grp;
    u8 *p128;
    s8 *pidx;
    s8 idx;
    u8 *ent;
    s32 value;
    s32 q1;

    base = (u8 *)data_02160244;
    grp = *(s16 **)(base + 0x13c);
    p128 = *(u8 **)(arg0 + 0x128);
    pidx = *(s8 **)(p128 + 0x54);
    idx = *pidx;
    ent = *(u8 **)(base + idx * 4 + 8);
    switch (arg1) {
    case 0:
        switch (ent[1]) {
        case 1: value = grp[0]; break;
        case 2: value = grp[1]; break;
        case 3: value = grp[2]; break;
        default: goto none;
        }
        break;
    case 1:
        switch (ent[1]) {
        case 1: value = grp[6]; break;
        case 2: value = grp[7]; break;
        case 3: value = grp[8]; break;
        default: goto none;
        }
        break;
    case 2:
        switch (ent[1]) {
        case 1: value = grp[3]; break;
        case 2: value = grp[4]; break;
        case 3: value = grp[5]; break;
        default: goto none;
        }
        break;
    case 3:
        switch (ent[1]) {
        case 1: value = grp[9]; break;
        case 2: value = grp[10]; break;
        case 3: value = grp[11]; break;
        default: goto none;
        }
        break;
    default:
        goto none;
    }
    q1 = arg2 * value / 10;
none:
    if (q1 % 10 != 0) {
        return q1 / 10 + 1;
    }
    return q1 / 10;
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
    if (arg0 <= 8) {
        u8 *entry = *(u8 **)((u8 *)data_02160244 + arg0 * 4 + 8);
        sub = *(u8 **)(entry + 0x10);
    }
    if (sub != NULL && *(u8 **)sub != NULL &&
        (*(u8 *)(*(u8 **)(*(u8 **)sub + 0x118) + 0x64) & 2)) {
        return *(u8 **)sub;
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
    u8 *sub;
    u32 i;
    u32 zero = 0;
    u32 one = 1;
    for (i = 9; i <= 0xb; i++) {
        if (arg0 & (one << i)) {
            sub = *(u8 **)(data_02160244[i + 2] + 0x10);
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

