/* 17 functions from 0x02045E60 to 0x02046E30 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02155c3c;
extern u8 *data_021600b8;
extern void *func_0210c594(s32, u32);
extern void func_021167ac(void *, s32);
extern void func_021168f8(void *, void *);
extern void func_020a994c(void *);
extern void func_020a98a0(void *);
extern void func_02046760(u8 *);
extern void func_020f58c0(void *);
extern u8 *data_021600bc;
extern void func_0204798c(void);
extern void func_02051ef4(void);
extern void func_0210d9e4(void *);
extern void func_0210dae0(void *);

void func_02046594(void) {
    data_021600b8 = func_0210c594(0x2c, data_02155c3c);
    func_021167ac(data_021600b8, 0x1d8);
    func_021167ac(data_021600b8 + 0xc, 0x1e0);
    func_021167ac(data_021600b8 + 0x20, 0x1ec);
    *(u8 *)(data_021600b8 + 0x18) = 0;
    *(u16 *)(data_021600b8 + 0x1a) = 0;
    *(u16 *)(data_021600b8 + 0x1c) = 0;
}

void func_020466f4(void) {
    if (data_021600b8 == NULL) {
        return;
    }
    while (*(u8 **)(data_021600b8 + 0x20) != NULL) {
        u8 *node = *(u8 **)(data_021600b8 + 0x20);
        if (*(void **)(node + 0x128) != NULL) {
            *(u32 *)(node + 0x178) += 1;
            func_020a994c(node + 0x144);
            func_020a98a0(node + 0x144);
        }
        func_02046760(node);
        func_020f58c0(node);
    }
}

void func_02046760(u8 *arg0) {
    if (data_021600b8 != NULL) {
        func_021168f8(data_021600b8 + 0x20, arg0);
        *(u8 *)(arg0 + 0x1f4) = 0;
    }
}

void func_020468e0(u8 arg0) {
    u8 *node = *(u8 **)data_021600b8;
    while (node != NULL) {
        *(u8 *)(node + 0x1e8) = arg0;
        node = *(u8 **)(node + 0x1dc);
    }
}

void func_020469ac(void) {
    u16 cur = *(u16 *)(data_021600b8 + 0x1a);
    u16 target = *(u16 *)(data_021600b8 + 0x1c);
    if (target < cur) {
        *(u16 *)(data_021600b8 + 0x1a) = cur - 1;
    } else if (target > cur) {
        *(u16 *)(data_021600b8 + 0x1a) = cur + 1;
    }
    if (*(u16 *)(data_021600b8 + 0x1a) == 0) {
        *(u8 *)(data_021600b8 + 0x18) = 0;
    }
}

