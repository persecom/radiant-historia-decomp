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
extern void func_02008414(void);
extern u32 data_0215fa2c;
extern s32 func_02010ff8(void);
extern void func_02007504(u32, u32);
extern void func_02006d58(void);
extern void func_02006de8(void);
extern void func_020074d4(s32);
extern void func_020074f4(s32);
extern void func_02007528(s32);
extern void func_020074c4(s32);
extern void func_020074e4(s32);
extern void func_02007518(s32);
extern void func_0201101c(void);
extern void func_0200a56c(void);
extern s32 func_0200a6c0(s32, s32);
extern void func_0200a674(s32, void *);
extern void func_020113e4(void);
extern void func_02011674(void *);
extern u8 data_0215fb20[232];
extern u16 data_0215fa30;
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

void func_0201164c(void) {
    func_02011254(2);
    func_02008414();
}

void func_02011660(void) {
    data_0215fa34[1] = 0;
}
