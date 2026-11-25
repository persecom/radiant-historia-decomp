/* 1 function from 0x020DFF7C to 0x020E13B0 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160a74;
extern u8 *data_02160244;

extern void func_020e18b4(void);
extern void func_020e1998(void);
extern void func_020e1b00(void);
extern s32 func_020e4ad4(void);
extern void func_020a3bbc(s32);
extern void func_020e13b0(s32, s32);

void func_020dff7c(void) {
    u8 *p5 = 0;
    u8 *p9 = 0;
    u32 flags;
    s32 r8;

    func_020e18b4();
    func_020e1998();
    if (data_02160a74 == 0) {
        return;
    }
    flags = *(u32 *)(data_02160a74 + 0x58);
    if ((flags & 0x40000) && !(flags & 0x80)) {
        func_020e1b00();
    }
    flags = *(u32 *)(data_02160a74 + 0x58);
    if ((flags & 0x80) != 0) {
        u8 *a0 = *(u8 **)(data_02160a74 + 0xa0);
        if (a0 != 0) {
            p5 = *(u8 **)(a0 + 0);
            if (p5 != 0) {
                p9 = *(u8 **)(p5 + 8);
            }
        }
    }
    if (p5 == 0 || !(flags & 0x80)) {
        return;
    }
    r8 = func_020e4ad4();
    if (r8 >= 0 && r8 <= 0xb) {
        func_020a3bbc(0x1d);
        func_020e13b0(r8, 0);
        if (p9 != 0) {
            u8 *p6 = *(u8 **)(data_02160244 + (r8 << 2) + 8);
            if (p6 != 0) {
                u32 f = *(u32 *)(p9 + 8);
                if (f & 4) {
                    func_020a3bbc(0x44);
                } else if (f & 8) {
                    func_020a3bbc(0x44);
                } else if (f & 0x10) {
                    func_020a3bbc(0x43);
                } else if (f & 0x20) {
                    func_020a3bbc(0x43);
                }
            }
        }
    }
}
