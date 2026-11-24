/* 2 functions from 0x020D4EB8 to 0x020D56D8 (main), found by ds-decomp. */
#include "common.h"

extern void func_020d9e7c(void);
extern void func_020ddfd0(u8 *, s32);
extern void func_020dd810(void *, s32, s32);
void func_020d5648(u8 *arg0, u8 *arg1) {
    u8 *p = *(u8 **)(arg0 + 0x128);
    s32 v;
    if (*(u32 *)(arg1 + 0x14) != 0) {
        if (*(u32 *)(arg1 + 0x14) & 1) {
            func_020d9e7c();
        }
        if (*(u32 *)(arg1 + 0x14) & 2) {
            func_020ddfd0(arg0, 1);
        }
        if (*(u32 *)(arg1 + 0x14) & 4) {
            *(u16 *)(p + 0x40) |= 1;
        }
    }
    v = *(s16 *)(arg1 + 0x18);
    if (v > -1) {
        if ((*(u32 *)(*(u8 **)(arg0 + 0x118) + 0x78) & 0x30) == 0) {
            func_020dd810(arg0, v & 0xff, 0);
        }
    }
    *(u16 *)(p + 0x1c) = 0;
    *(u32 *)(p + 0x14) = 0;
}
