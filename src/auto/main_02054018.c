/* 8 functions from 0x0205317C to 0x02054118 (main), found by ds-decomp. */
#include "common.h"

extern s32 func_02054e14(void *);
extern s32 func_020552e4(void *);

extern s32 func_0205453c(void *);
extern void func_02055564(void *, u8);

void func_02054018(u8 *arg0) {
    u8 *r4 = *(u8 **)(arg0 + 0xd0);

    if (*(u8 *)(r4 + 0x25) % 10 != 2) {
        return;
    }

    switch (*(u16 *)(r4 + 4)) {
    case 1:
        if (*(u16 *)(r4 + 0x1c) != 0) {
            if (func_0205453c(arg0) != 0) {
                *(u16 *)(r4 + 4) = 2;
            } else {
                *(u16 *)(r4 + 4) = 0;
            }
        } else {
            u8 *node = *(u8 **)(r4 + 0x30);
            while (node != NULL) {
                if (*node == *(u8 *)(r4 + 0xa)) {
                    break;
                }
                node = *(u8 **)(node + 0x14);
            }
            if (node == NULL) {
                *(u16 *)(r4 + 4) = 0;
            } else {
                *(u32 *)(arg0 + 0x24) = *(u32 *)(node + 4);
                *(u32 *)(arg0 + 0x2c) = *(u32 *)(node + 0xc);
                *(u8 *)(r4 + 0xa) += 1;
                *(u8 *)(r4 + 0xa) %= *(u16 *)(r4 + 0x38);
                *(u16 *)(r4 + 4) = 2;
            }
        }
        break;
    case 2:
        func_02055564(arg0, *(u8 *)(r4 + 0x19));
        if (*(u8 *)(r4 + 8) == 0) {
            *(u16 *)(r4 + 4) = 0;
        }
        break;
    }
}

