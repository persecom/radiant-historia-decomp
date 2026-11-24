/* 48 functions from 0x02007C2C to 0x02008BF4 (main), found by ds-decomp. */
#include "common.h"

extern u32 func_02008128(void);
extern void func_02008454(void);
extern void func_020081a4(u32);
extern u32 func_020081f0(void);
u32 func_02008198(u32 x) {
    do {
        x -= 4;
    } while (x >= 4);
    return x;
}

u32 func_020081f0(void) {
    return 0x2fffc40;
}

u32 func_02008354(u32 x) {
    return __builtin_clz(x);
}

void func_02008444(void) {
    func_02008128();
    while (1) {
        func_02008454();
    }
}
