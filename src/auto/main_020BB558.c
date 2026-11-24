/* 6 functions from 0x020BB558 to 0x020BC394 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 data[10]; } Unk_020bbb1c_10;
typedef struct { s16 data[18]; } Unk_020bbb1c_18;
extern const Unk_020bbb1c_10 data_02143c90;
extern const Unk_020bbb1c_18 data_02143cec;

void func_020bbd2c(u8 *arg0) {
    u16 i;
    register u8 one asm("r1");
    one = 1;
    arg0[0x42] = 0;
    *(u16 *)(arg0 + 0x10) = 0;
    *(u16 *)(arg0 + 0x12) = 0;
    *(u16 *)(arg0 + 0x14) = 0;
    *(u16 *)(arg0 + 0x16) = 0;
    *(u16 *)(arg0 + 0x18) = 0;
    *(u16 *)(arg0 + 0x1a) = 0;
    *(u16 *)(arg0 + 0x1c) = 0;
    *(u16 *)(arg0 + 0x1e) = 0;
    *(u16 *)(arg0 + 0x20) = 0;
    *(u16 *)(arg0 + 0x22) = 0;
    arg0[0x43] = 0;
    arg0[0x45] = 0;
    for (i = 0; i < 8; i++) {
        u8 *p = arg0 + i;
        p[0x46] = 0;
    }
    *(u16 *)(arg0 + 0x28) = 0;
    *(u16 *)(arg0 + 0x2a) = 0;
    *(u16 *)(arg0 + 0x2c) = 0;
    *(u16 *)(arg0 + 0x2e) = 0;
    *(u16 *)(arg0 + 0x34) = 0;
    arg0[0x44] = one;
    *(u32 *)(arg0 + 0x0) = 0;
    *(u32 *)(arg0 + 0x4) = 0;
    *(u32 *)(arg0 + 0x8) = 0;
    *(u16 *)(arg0 + 0x38) = 0;
    *(u16 *)(arg0 + 0x3a) = 0;
    *(u16 *)(arg0 + 0x30) = 0;
    *(u16 *)(arg0 + 0x32) = 0;
    for (i = 0; i < 3; i++) {
        u8 *p = arg0 + i * 2;
        *(u16 *)(p + 0x3c) = 0;
    }
    for (i = 0; i < 30; i++) {
        u8 *p = arg0 + i;
        p[0x4e] = 0;
    }
    for (i = 0; i < 15; i++) {
        u8 *p = arg0 + i;
        p[0x6c] = 0;
    }
}

void func_020bc2c4(u8 *arg0, u8 arg1) {
    u8 i;
    u8 found = 0;
    if (arg1 <= 100) {
        for (i = 0; i < 30; i++) {
            u8 *p = arg0 + i;
            if (arg1 == p[0x4e]) {
                found = 1;
            }
        }
        if (found) return;
        for (i = 0; i < 30; i++) {
            u8 *p = arg0 + i;
            if (p[0x4e] == 0) {
                p[0x4e] = arg1;
                return;
            }
        }
        return;
    }
    if (arg1 >= 101) {
        for (i = 0; i < 15; i++) {
            u8 *p = arg0 + i;
            if (arg1 == p[0x6c]) {
                found = 1;
            }
        }
        if (found) return;
        for (i = 0; i < 15; i++) {
            u8 *p = arg0 + i;
            if (p[0x6c] == 0) {
                p[0x6c] = arg1;
                return;
            }
        }
    }
}
