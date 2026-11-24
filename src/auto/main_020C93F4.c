/* 32 functions from 0x020C93F4 to 0x020CA10C (main), found by ds-decomp. */
#include "common.h"

extern void func_020c9980(void);
extern void func_020c9404(u8 *, u16);
extern void func_020c94dc(u8 *);
extern void func_020c9348(u8 *, s32);
extern u8 *func_020c9c10(void *, s32);
extern void func_020c9590(u8 *);
void func_020c93f4(u8 *arg0, u16 arg1) {
    *(u16 *)(arg0 + 0x3a) = arg1;
    func_020c9404(arg0, arg1);
}

u8 func_020c9488(u8 *arg0) {
    return *(u8 *)(arg0 + 0x44);
}

u32 func_020c9490(u8 *arg0) {
    return arg0[0x44] | arg0[0x45];
}

u16 func_020c94a0(u8 *arg0) {
    return *(u16 *)(arg0 + 0x3a);
}

u16 func_020c94a8(u8 *arg0) {
    return *(u16 *)(arg0 + 0x3e);
}

u16 func_020c9924(u8 *arg0) {
    return *(u16 *)(arg0 + 8);
}

void func_020c9940(void) {
    func_020c9980();
}

u16 func_020c9c34(u8 *arg0) {
    return *(u16 *)(arg0 + 4);
}

