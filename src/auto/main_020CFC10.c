/* 11 functions from 0x020CFC10 to 0x020D0A40 (main), found by ds-decomp. */
#include "common.h"

extern void func_0210c5dc(void *);
extern s32 data_02155c3c;
extern u8 *data_02160244;
extern u8 *data_02160a74;
extern void *func_0210c594(s32, s32);
extern void func_021168f8(void *, void *);
extern s32 func_0202bd60(u8, u8);
extern void func_0202bfa8(void *, u8);
extern void func_02030b7c(void *, s32, s32);
extern void func_020dd810(void *, s32, s32);
void *func_020d0808(void) {
    return func_0210c594(4, data_02155c3c);
}

void func_020d0824(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020d0838(void) {
    void *node;
    while ((node = *(void **)(data_02160244 + 0x150)) != NULL) {
        func_021168f8(data_02160244 + 0x150, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

void func_020d0884(void) {
    void *node;
    while ((node = *(void **)(data_02160244 + 0x160)) != NULL) {
        func_021168f8(data_02160244 + 0x160, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

void func_020d09d8(u8 *arg0) {
    u8 *r4 = *(u8 **)(arg0 + 0x128);
    *(s32 *)(r4 + 0x54) = func_0202bd60(*(u8 *)(arg0 + 0x1a0), *(u8 *)(*(u8 **)(arg0 + 0x118) + 0x54));
    func_0202bfa8(arg0, *(u8 *)(arg0 + 0x1a0));
    if (*(u8 *)(data_02160a74 + 0x1e3) != 1) {
        func_02030b7c(arg0, 1, 0x1ff);
    }
    func_020dd810(arg0, 0, 0);
}

