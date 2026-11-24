/* 8 functions from 0x0205317C to 0x02054118 (main), found by ds-decomp. */
#include "common.h"

extern s32 func_02054e14(void *);
extern s32 func_020552e4(void *);

void func_02053f6c(void *arg0) {
    u8 *p = *(u8 **)((u8 *)arg0 + 0xd0);

    switch (func_02054e14(arg0)) {
    case 1:
        *(u16 *)(p + 4) = 0;
        *(u16 *)(p + 6) = 0;
        *(u8 *)(p + 1) = 5;
        break;
    }
}

void func_02053f94(void *arg0) {
    u8 *p = *(u8 **)((u8 *)arg0 + 0xd0);

    if (func_020552e4(arg0) != 1) return;
    *(u16 *)(p + 4) = 0;
    if (*(u8 *)(p + 0x25) != 0x47 && *(u8 *)(p + 0x25) != 0x51) {
        *(u16 *)(p + 6) = 0;
        *(u8 *)(p + 1) = 1;
    } else {
        *(u16 *)(p + 6) = 2;
        *(u8 *)(p + 1) = 3;
    }
}

void func_02053fdc(u8 *arg0) {
    u16 n = *(u16 *)(arg0 + 4);
    u8 v;

    if (n > 1) return;
    v = *(u8 *)arg0;
    if (v != 0) {
        *(u8 *)arg0 = v - 1;
        return;
    }
    {
        u16 x = 1;
        if (n != 0) x = 0;
        *(u16 *)(arg0 + 4) = x;
    }
    *(u8 *)arg0 = *(u8 *)(arg0 + 0x1b);
}

