/* 16 functions from 0x021221E4 to 0x021231B0 (main), found by ds-decomp. */
#include "common.h"

extern void *data_02155ee8;
void func_02008df0(u8, void *, u32);
s32 func_02120e30(void *, void *);
void func_021228d0(u8 *arg0, u8 *arg1, u8 *arg2) {
    u32 i;
    u8 *r8;

    if (arg2 != NULL && *(u32 *)(arg2 + 8) != 0) {
        r8 = arg2 + *(u32 *)(arg2 + 8);
    } else {
        r8 = NULL;
    }

    *(void **)(arg0 + 0xc) = data_02155ee8;
    arg0[0x19] = arg2[0x18];
    func_02008df0(0, arg0 + 0x1a, (u32)arg0[0x19] * 2);

    for (i = 0; i < arg1[9]; i++) {
        void *name;
        s32 idx;
        if ((arg1 + 8) != NULL && i < *(u8 *)(arg1 + 9)) {
            u8 *p = (arg1 + 8) + *(u16 *)((arg1 + 8) + 6);
            name = p + *(u16 *)(p + 2) + i * 0x10;
        } else {
            name = NULL;
        }
        if (r8 == NULL) {
            idx = -1;
        } else {
            idx = func_02120e30(r8 + 4, name);
        }
        if (idx >= 0) {
            *(u16 *)(arg0 + 0x1a + idx * 2) = (u16)(i | 0x100);
        }
    }
}

extern void func_02122ca8(u8 *arg0, u16 arg1, s32 arg2, u32 *arg3);
void func_02122e70(u32 *arg0, u8 *arg1, u32 arg2) {
    u8 *ptr = *(u8 **)(arg1 + 8);
    s32 frame = *(s32 *)(arg1 + 0);
    s32 limit = *(u16 *)(ptr + 4) << 12;

    if (frame >= limit) {
        frame = limit - 1;
    } else if (frame < 0) {
        frame = 0;
    }
    func_02122ca8(ptr, (u16)arg2, frame >> 12, arg0);

    arg0[4] = (arg0[4] & ~0xc0000000u) | 0x40000000u;
    arg0[0] |= 0x8;
}

