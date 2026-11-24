/* 22 functions from 0x020111D4 to 0x02011EF4 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_0215fa34[11];
extern u32 func_02008128(void);
extern u32 func_02005df0(void *);
extern s32 func_02005d38(s32);
extern void func_0200813c(u32);
extern void WaitByLoop(s32);
extern void func_02005d2c(s32);
extern s32 func_0200a6e4(s32, s32, s32);
void func_020111d4(s32 arg0, u32 *arg1) {
    for (;;) {
        arg1[1] = func_02008128();
        arg1[0] = func_02005df0((void *)0x02ffffe8) & 0x40;
        if (arg1[0] != 0) {
            break;
        }
        if (func_02005d38(arg0) == 0) {
            break;
        }
        func_0200813c(arg1[1]);
        WaitByLoop(1);
    }
}

void func_02011230(s32 arg0, u32 *arg1) {
    if (arg1[0] == 0) {
        func_02005d2c(arg0);
    }
    func_0200813c(arg1[1]);
}

void func_02011254(s32 arg0) {
    while (func_0200a6e4(0xd, arg0, 0) != 0) {
        WaitByLoop(1);
    }
}

void func_02011660(void) {
    data_0215fa34[1] = 0;
}
