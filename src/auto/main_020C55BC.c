/* 12 functions from 0x020C55BC to 0x020C641C (main), found by ds-decomp. */
#include "common.h"

extern void func_0210c5dc(void *);
extern void *data_021600e4;
extern u32 data_02155c3c;
extern void func_020c6dbc(void);
extern u16 *func_020a5f14(void *, u16);
extern void func_020a5c40(void *, u16);
extern void *func_0210c594(u32, u32);
extern void *func_020e9fe8(void *, u16);
extern void func_021167f0(void *, void *);
void func_020c6124(void) {
    u8 *ptr = data_021600e4;
    u16 *res = func_020a5f14(ptr + 0x124, *(u16 *)(ptr + 0xd4));
    func_020a5c40(*(void **)(ptr + 0x18c), *res);
    *(u16 *)(ptr + 0x19c) |= 0x20;
}

void func_020c6160(void *arg0, u16 arg1) {
    u8 *node;
    u8 *obj;
    if (data_021600e4 == NULL) {
        return;
    }
    node = func_0210c594(0x10, data_02155c3c);
    obj = func_020e9fe8(arg0, arg1);
    *(u32 *)(obj + 0x18) &= ~1;
    *(void **)(node + 4) = obj;
    *(u16 *)node = arg1;
    func_021167f0((u8 *)data_021600e4 + 0x1a0, node);
}

void *func_020c61cc(u16 arg0) {
    u8 *node = *(u8 **)((u8 *)data_021600e4 + 0x1a0);
    while (node != NULL) {
        if (*(u16 *)node == arg0) {
            return *(void **)(node + 4);
        }
        node = *(u8 **)(node + 0xc);
    }
    return NULL;
}

s32 func_020c6324(void) {
    func_020c6dbc();
    return 0;
}

void func_020c6334(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}
