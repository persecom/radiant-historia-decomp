/* 11 functions from 0x020E3A9C to 0x020E4A78 (main), found by ds-decomp. */
#include "common.h"

void func_021098ac(void *);
s32 func_020df38c(s32, s32);
void func_020a3bbc(s32);
void func_020e3db4(u16 *arg0, s32 arg1, s32 arg2) {
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0x7d;
    arg0[4] = 0xf;
    arg0[8] = 0x7d;
    arg0[9] = 0xf;
    arg0[5] = arg1;
    arg0[6] = arg2;
    func_021098ac(arg0);

    arg0[1] = 0x68;
    arg0[2] = 0;
    arg0[3] = 0x18;
    arg0[4] = 0xf;
    arg0[8] = 0x18;
    arg0[9] = 0xf;
    arg0[5] = arg1 + 0x7d;
    arg0[6] = arg2;
    func_021098ac(arg0);
}

void func_020e410c(u16 *arg0, s32 arg1, s32 arg2) {
    s32 offset = 0;
    if (arg2 == 0) {
        if (func_020df38c(3, 2) != 0) {
            func_020a3bbc(0x77);
            offset = 1;
        } else {
            func_020a3bbc(0x76);
        }
    } else {
        func_020a3bbc(0x78);
    }
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0x54;
    arg0[4] = 0xe;
    arg0[8] = 0x54;
    arg0[9] = 0xe;
    arg0[5] = offset + 0x76;
    arg0[6] = offset + 4;
    arg0[7] = arg1;
    func_021098ac(arg0);
}

void func_020e419c(u16 *arg0, s32 arg1) {
    s32 offset;
    if (func_020df38c(3, 0x4000) != 0) {
        func_020a3bbc(0x2a);
        offset = 1;
    } else {
        func_020a3bbc(0x29);
        offset = 0;
    }
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0x2d;
    arg0[4] = 0xe;
    arg0[8] = 0x2d;
    arg0[9] = 0xe;
    arg0[5] = offset + 0xcf;
    arg0[6] = offset + 4;
    arg0[7] = arg1;
    func_021098ac(arg0);
}

void func_020e43e4(u16 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0x10;
    arg0[4] = 0x10;
    arg0[8] = 0x10;
    arg0[9] = 0x10;
    arg0[5] = arg1;
    arg0[6] = arg2;
    arg0[7] = arg3;
    func_021098ac(arg0);
}
