/* 5 functions from 0x020D413C to 0x020D4EB8 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02155c3c;
extern void *func_0210c594(s32 arg0, u32 arg1);
extern void func_0210c5dc(void *arg0);
extern void func_021167ac(void *arg0, s32 arg1);
extern void func_021167f0(void *arg0, void *arg1);
extern void func_021168f8(void *arg0, void *arg1);
extern void func_02022454(void *arg0);
extern void func_0202bdbc(void *arg0);
extern void func_0203319c(void *arg0);

void *func_020d413c(void) {
    u8 *p = func_0210c594(0xb0, data_02155c3c);
    func_021167ac(p + 0x64, 8);
    func_021167ac(p + 0x58, 0xc);
    *(u32 *)(p + 0x24) = 0;
    *(u32 *)(p + 0x4) = 0;
    return p;
}

void func_020d4184(u8 *arg0) {
    func_02022454(arg0);
    while (*(void **)(arg0 + 0x58) != NULL) {
        void *node = *(void **)(arg0 + 0x58);
        func_021168f8(arg0 + 0x58, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
    if (*(void **)(arg0 + 0x54) != NULL) {
        func_0202bdbc(*(void **)(arg0 + 0x54));
        *(void **)(arg0 + 0x54) = NULL;
    }
    if (*(void **)(arg0 + 0x8c) != NULL) {
        func_0203319c(*(void **)(arg0 + 0x8c));
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020d4e54(u8 *arg0, void *arg1, void *arg2) {
    u8 *base = *(u8 **)(arg0 + 0x128);
    u8 *p = func_0210c594(0x14, data_02155c3c);
    *(void **)p = arg1;
    *(void **)(p + 0x8) = arg2;
    func_021167f0(base + 0x58, p);
}

void func_020d4e90(u8 *arg0, void *arg1) {
    func_021168f8(*(u8 **)(arg0 + 0x128) + 0x58, arg1);
    if (arg1 != NULL) {
        func_0210c5dc(arg1);
    }
}
