/* 26 functions from 0x02138E00 to 0x02139CDC (main), found by ds-decomp. */
#include "common.h"

extern void func_0212a9f4(void);
extern void func_02139be8(u32, u32, u32);
extern void func_0212a9f8(void);
void func_021396e8(u8 *arg0, u32 arg1) {
    *(u8 *)(arg0 + 0xac) = arg1;
}

void func_02139bbc(u32 arg0, u32 arg1, u32 arg2) {
    func_0212a9f4();
    func_02139be8(arg0, arg1, arg2);
    func_0212a9f8();
}
