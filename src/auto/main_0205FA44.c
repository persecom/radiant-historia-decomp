/* 7 functions from 0x0205FA44 to 0x020607F4 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160a6c;
extern u8 *data_02160a74;
extern void func_02025f84(u8 *, s32);
extern s32 func_0201fb1c(s32, s32);
extern void func_020d907c(u32);
extern void func_020d9090(void);
extern u8 *data_02160260;

extern void func_02060408(u8 *);
extern void func_020dd810(u8 *, s32, s32);
void func_02060328(u8 *arg0)
{
    u8 *r4 = *(u8 **)(arg0 + 0x128);
    u32 flags = *(u32 *)(arg0 + 0x80);
    s32 zero = 0;

    if (flags & 0x20000) {
        *(u32 *)(arg0 + 0x80) = flags & ~0x20000;
        *(u16 *)(*(u8 **)(arg0 + 0x118) + 0xbc) = zero;
    }
    if (*(u32 *)(*(u8 **)(arg0 + 0x118) + 0x78) != 0) {
        func_02060408(arg0);
        *(u16 *)(arg0 + 0x8a) = 0x7fff;
        func_020dd810(arg0, 6, zero);
        *(u32 *)(arg0 + 0xf8) = zero;
    }
    if (*(data_02160260 + 0x8c) != 1 || *(u16 *)(arg0 + 0x8c) != 1) {
        if (*(u8 *)(arg0 + 0x104) != 6) {
            *(u32 *)(*(u8 **)(arg0 + 0x118) + 0x70) = 1;
            func_020dd810(arg0, 6, zero);
            *(u32 *)(*(u8 **)(arg0 + 0x118) + 0x70) = zero;
        }
    }
    *(u32 *)(r4 + 0x18) &= ~2;
    *(u32 *)(*(u8 **)(arg0 + 0x118) + 0x70) = zero;
    *(u32 *)(*(u8 **)(arg0 + 0x118) + 4) = zero;
}

void func_02060560(u8 *arg0) {
    func_02025f84(arg0, 0x85);
    func_02025f84(arg0, 0x86);
    func_02025f84(arg0, 0x87);
    func_02025f84(arg0, 0x88);
    func_02025f84(arg0, 0x89);
    func_02025f84(arg0, 0x8d);
    func_02025f84(arg0, 0x8f);
    func_02025f84(arg0, 0x91);
    func_02025f84(arg0, 0x93);
    func_02025f84(arg0, 0x95);
    func_02025f84(arg0, 0x97);
    func_02025f84(arg0, 0x9b);
    func_02025f84(arg0, 0xae);
}

void func_02060604(void) {
    s32 x, y, z;
    s16 n;
    u8 *node;

    if (*(u16 *)(data_02160a6c + 0xc0) == 0) {
        return;
    }

    node = *(u8 **)(data_02160a6c + 0xb8);
    x = 0;
    y = 0;
    z = 0;
    n = 0;
    while (node != NULL) {
        n++;
        x += *(s32 *)(node + 0x0);
        y += *(s32 *)(node + 0x4);
        z += *(s32 *)(node + 0x8);
        node = *(u8 **)(node + 0x174);
    }

    *(s32 *)(data_02160a74 + 0x1e8) = func_0201fb1c(x, n);
    *(s32 *)(data_02160a74 + 0x1ec) = func_0201fb1c(y, n) + 0x8000;
    *(s32 *)(data_02160a74 + 0x1f0) = func_0201fb1c(z, n);
    func_020d907c((u32)(data_02160a74 + 0x1e8));
    func_020d9090();
}

