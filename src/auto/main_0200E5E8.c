/* 29 functions from 0x0200E5E8 to 0x0200F244 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_0215f04c[8];
extern void func_0200f004(void *, s32);
extern void func_0200e524(u32 *, s32);
extern s32 func_0200ed20(s32, s32, s32, s32);
extern s32 func_0200e4a0(u32 *, s32, void *, void *, void *);
extern void func_0200e314(void);
extern void func_0200e290(void);
s32 func_0200e5e8(u32 arg0, u32 arg1) {
    u32 buf[2];
    buf[0] = 0x03006000;
    func_0200e524(buf, 1);
    while (func_0200ed20(0, 2, 0, 1) != 1) {
    }
    buf[0] = 0x02006200 | (arg0 & 0xff);
    buf[1] = 0x01010000 | (u16)arg1;
    func_0200e524(buf, 2);
    return 0;
}

s32 func_0200e674(u32 arg0, u32 arg1, void *arg2, void *arg3, void *arg4) {
    u32 buf[2];
    buf[0] = 0x02006100 | (arg0 & 0xff);
    buf[1] = 0x01010000 | (u16)arg1;
    return func_0200e4a0(buf, 2, arg2, arg3, arg4);
}

s32 func_0200e6bc(u32 arg0, u32 arg1, void *arg2) {
    s32 result;
    s32 ret = func_0200e674(arg0, arg1, arg2, func_0200e314, &result);
    if (ret != 0) {
        return ret;
    }
    func_0200e290();
    return result;
}

extern void func_0200ef78(void *, u32, u32, u32);
s32 func_0200e6f4(u32 arg0, void *arg1, void *arg2) {
    u32 val;
    switch (arg0) {
    case 1:
        val = 1;
        break;
    case 3:
        val = 2;
        break;
    case 2:
        val = 3;
        break;
    default:
        val = 0;
        break;
    }
    if (val == 0) {
        return 0xffff;
    }
    return func_0200e674(val, 0, NULL, arg1, arg2);
}

s32 func_0200e758(u32 arg0) {
    s32 result;
    s32 ret = func_0200e6f4(arg0, func_0200e314, &result);
    if (ret != 0) {
        return ret;
    }
    func_0200e290();
    return result;
}

s32 func_0200e780(u32 arg0, u32 arg1, void *arg2, void *arg3) {
    u32 val = 0;
    if (arg0 == 0) {
        if (arg1 == 1) {
            val = 6;
        }
        if (arg1 == 0) {
            val = 7;
        }
    } else if (arg0 == 1) {
        if (arg1 == 1) {
            val = 4;
        }
        if (arg1 == 0) {
            val = 5;
        }
    } else if (arg0 == 2) {
        if (arg1 == 1) {
            val = 8;
        }
        if (arg1 == 0) {
            val = 9;
        }
    }
    if (val == 0) {
        return 0xffff;
    }
    return func_0200e674(val, 0, NULL, arg2, arg3);
}

void func_0200f0e4(s32 arg0) {
    func_0200f004(data_0215f04c, arg0);
}

extern u8 data_0215f054[8];
void func_0200f0fc(s32 arg0) {
    func_0200f004(data_0215f054, arg0);
}

