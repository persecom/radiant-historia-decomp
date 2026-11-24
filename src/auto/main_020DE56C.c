/* 14 functions from 0x020DE56C to 0x020DF56C (main), found by ds-decomp. */
#include "common.h"

extern u8 *func_0202c7d8(s32);
extern void *func_020de534(void *);
extern u8 *data_02160a6c;
extern u8 *data_02160a74;

void func_020220b0(u32, u32);
void func_02065c44(void *);
void func_020de56c(void *);
void func_020df224(void *, u8 *);
void func_020e2788(u32);
u8 *func_020de810(void) {
    u8 i;
    for (i = 0; i < 9; i++) {
        u8 *res = func_0202c7d8((s8)i);
        if (res != NULL) {
            return res;
        }
    }
    return NULL;
}

u8 *func_020de844(s32 arg0) {
    if (arg0 == 0) {
        u8 i = 0;
        do {
            u8 *res = func_0202c7d8((s8)(u8)(i + 9));
            if (res != NULL) {
                return res;
            }
            i++;
        } while (i < 3);
    }
    return NULL;
}

void *func_020defcc(u16 arg0) {
    u8 *root = data_02160a6c;
    u8 *node;
    if (root == NULL) {
        return NULL;
    }
    node = *(u8 **)(root + 0x70);
    while (node != NULL) {
        if (*(void **)(*(u8 **)(node + 0x118) + 0x70) != NULL) {
            if (*(u16 *)(node + 0x8c) == arg0) {
                if (func_020de534(node) == NULL) {
                    return node;
                }
            }
        }
        node = *(u8 **)(node + 0x13c);
    }
    return NULL;
}

BOOL func_020df03c(s32 arg0) {
    u8 *ptr = data_02160a74;
    volatile s16 *v = (volatile s16 *)(ptr + 0xae);
    if (arg0 == 0) {
        *v = *v + 0x10;
        if (*v <= 0x1e) {
            goto fail;
        }
        *v = 0x1e;
        return TRUE;
    }
    if (arg0 == 1) {
        *v = *v - 0x10;
        if (*v >= 0) {
            goto fail;
        }
        *v = 0;
        *(u32 *)(ptr + 0x58) &= ~0x2;
        *(u32 *)(ptr + 0x58) &= ~0x800;
        return TRUE;
    }
fail:
    return FALSE;
}

