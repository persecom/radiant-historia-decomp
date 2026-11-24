/* 7 functions from 0x0205FA44 to 0x020607F4 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160a6c;
extern u8 *data_02160a74;
extern void func_02025f84(u8 *, s32);
extern s32 func_0201fb1c(s32, s32);
extern void func_020d907c(u32);
extern void func_020d9090(void);
extern u8 *data_02160260;

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

