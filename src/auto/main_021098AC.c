/* 33 functions from 0x021098AC to 0x0210A7E4 (main), found by ds-decomp. */
#include "common.h"

extern void func_0210a38c(void);
extern void func_0210a014(void);
extern u32 data_0216256c[];
extern void func_021167ac(void *, s32);
extern void func_0210a2f0(void);
extern void func_0210a348(u32, u32);
extern void func_0210a30c(u32, u32, s32);
extern void func_0210a3d8(u32, u32, u32);
void func_02109af8(void) {
    func_0210a014();
    func_021167ac(data_0216256c, 0);
}

void func_02109c04(u32 arg0, u32 arg1) {
    func_0210a2f0();
    func_0210a348(arg0, arg1);
}

void func_02109c24(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    func_0210a30c(arg0, arg2, 0);
    func_0210a3d8(arg0, arg1, arg3);
}

void func_02109c54(void) {
    func_0210a38c();
}

extern u8 data_02162610[64];
void *func_0210a4b4(void) {
    return data_02162610;
}

extern u8 data_02162614[64];
void *func_0210a4c0(void) {
    return data_02162614;
}

