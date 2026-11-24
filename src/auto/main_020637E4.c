/* 5 functions from 0x020637E4 to 0x02064590 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600c4;
extern u8 **data_02160244;
extern u32 data_02155c3c;
extern void func_0210da14(void *);
extern void func_0210c5dc(void *);
extern void *func_0210c594(u32, u32);
extern void func_0210d9e4(void *);
extern void func_02063f68(void);
extern void func_02064590(void);
extern void func_02064a30(void);
s16 func_02063e18(void) {
    s32 ret = 0;
    u8 i;
    for (i = 0; i < 9; i++) {
        u8 *entry = *(u8 **)((u8 *)data_02160244 + i * 4 + 8);
        u16 val = *(u16 *)(entry + 0x18);
        if (val != 0) {
            if (val >= 2) {
                ret = 1;
            }
        }
        {
            u8 *node = *(u8 **)(entry + 0x10);
            while (node != NULL) {
                node = *(u8 **)(node + 0xc);
            }
        }
    }
    return ret;
}

void func_02063e84(void) {
    data_021600c4 = (u8 *)func_0210c594(0x3c, data_02155c3c);
    *(void **)(data_021600c4 + 0x0) = (void *)func_02063f68;
    *(u32 *)(data_021600c4 + 0x4) = 0x3ed;
    func_0210d9e4(data_021600c4);
    *(void **)(data_021600c4 + 0x14) = (void *)func_02064590;
    *(u32 *)(data_021600c4 + 0x18) = 0x3fc;
    func_0210d9e4(data_021600c4 + 0x14);
    *(void **)(data_021600c4 + 0x28) = (void *)func_02064a30;
    *(u32 *)(data_021600c4 + 0x2c) = 0x3e8;
    func_0210d9e4(data_021600c4 + 0x28);
}

void func_02063f20(void) {
    func_0210da14(data_021600c4);
    func_0210da14(data_021600c4 + 0x14);
    func_0210da14(data_021600c4 + 0x28);
    if (data_021600c4 != NULL) {
        func_0210c5dc(data_021600c4);
        data_021600c4 = NULL;
    }
}
