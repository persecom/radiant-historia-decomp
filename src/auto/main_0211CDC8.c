/* 24 functions from 0x0211CDC8 to 0x0211DDAC (main), found by ds-decomp. */
#include "common.h"

extern u8 data_021701fc[];
extern u8 data_0217032c[];
extern void func_0211d814(void);
extern void func_0200439c(void);
extern void func_020043f8(void *, u32, u32);
extern void func_02004544(void);
void func_0211cdc8(u8 *arg0, BOOL arg1) {
    u32 sz;
    if (arg1) {
        func_0200439c();
    }
    sz = (u32)*(u16 *)(arg0 + 0xc) << 3;
    if (sz != 0) {
        func_020043f8(arg0 + *(u32 *)(arg0 + 0x14), (*(u32 *)(arg0 + 8) & 0xffff) << 3, sz);
        *(u16 *)(arg0 + 0x10) |= 1;
    }
    sz = (u32)*(u16 *)(arg0 + 0x1c) << 3;
    if (sz != 0) {
        u32 addr = (*(u32 *)(arg0 + 0x18) & 0xffff) << 3;
        func_020043f8(arg0 + *(u32 *)(arg0 + 0x24), addr, sz);
        func_020043f8(arg0 + *(u32 *)(arg0 + 0x28), 0x20000 + ((addr & 0x1ffff) >> 1) + ((addr & 0x40000) >> 2), sz >> 1);
        *(u16 *)(arg0 + 0x20) |= 1;
    }
    if (arg1) {
        func_02004544();
    }
}

void func_0211ce80(u8 *arg0, u32 *arg1, u32 *arg2) {
    if (arg1 != NULL) {
        *(u16 *)(arg0 + 0x10) &= ~1;
        *arg1 = *(u32 *)(arg0 + 8);
        *(u32 *)(arg0 + 8) = 0;
    }
    if (arg2 != NULL) {
        *(u16 *)(arg0 + 0x20) &= ~1;
        *arg2 = *(u32 *)(arg0 + 0x18);
        *(u32 *)(arg0 + 0x18) = 0;
    }
}

u32 func_0211ced0(u8 *arg0) {
    if (arg0 != NULL) {
        return (u32)*(u16 *)(arg0 + 0x30) << 3;
    }
    return 0;
}

void *func_0211d878(void) {
    u8 *p = data_021701fc;
    if ((*(u32 *)(p + 0xfc) & 0x80) == 0) {
        func_0211d814();
        *(u32 *)(p + 0xfc) |= 0x80;
    }
    return data_0217032c;
}
