/* 8 functions from 0x01FF8000 to 0x01FF852C (itcm), found by ds-decomp. */
#include "common.h"

extern u32 func_02005a74(void);
extern void func_01ff82c8(void);
extern void func_01ff81e4(void);
extern void (*data_027e0000[])(void);

void func_01ff8000(void) {
    u32 flags;
    u32 bit;
    u32 n;
    if (*(volatile u32 *)0x4000208 == 0) return;
    flags = *(volatile u32 *)0x4000210 & *(volatile u32 *)0x4000214;
    if (flags == 0) return;
    do {
        n = __clz(flags);
        bit = 0x80000000U >> n;
        flags &= ~bit;
    } while (flags != 0);
    *(volatile u32 *)0x4000214 = bit;
    data_027e0000[31 - n]();
}

void func_01ff81b8(void) {
    if (func_02005a74() == 0) return;
    *(u16 *)0x4000208 = 0;
    func_01ff82c8();
    func_01ff81e4();
}
