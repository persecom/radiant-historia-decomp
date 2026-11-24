/* 28 functions from 0x0211A178 to 0x0211B0E8 (main), found by ds-decomp. */
#include "common.h"
extern u32 data_021701d8[4];
extern u32 data_021701cc[3];
extern u16 data_02144e48[8];

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} U32x3;

extern u32 data_02155ed0[4];


extern void func_0211c5fc(void);
void func_0211a4c0(void) {
    func_0211c5fc();
}

u32 func_0211a4cc(u8 *arg0) {
    return *(u32 *)(arg0 + 0x78);
}

extern void func_0211c52c(void);
void func_0211a4d4(void) {
    func_0211c52c();
}

u8 *func_0211a5e4(s32 arg0) {
    return (u8 *)data_021701cc[2] + arg0 * 0x30;
}

extern void func_02118e68(void *);
extern void func_02118e84(void *, s32, s32);
extern s32 func_0200283c(s32);
extern s32 func_020027d4(s32, s32, s32);
void func_0211a5fc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u32 arg4, u32 arg5, u32 arg6, u32 arg7) {
    u8 *ptr = (u8 *)data_021701cc[2] + arg0 * 0x30;
    func_02118e68(ptr);
    if (arg1 != -1) {
        func_02118e84(ptr, 0, arg1);
    }
    if (arg2 != -1) {
        func_02118e84(ptr, 1, arg2);
    }
    if (arg3 != -1) {
        func_02118e84(ptr, 2, arg3);
    }
    *(u32 *)(ptr + 0xc) = arg4;
    *(u32 *)(ptr + 0x10) = arg5;
    *(u32 *)(ptr + 0x14) = arg6;
    *(u32 *)(ptr + 0x18) = arg7;
}

void func_0211a698(u32 arg0, u32 count, u32 arg2) {
    u32 i = 0;

    data_021701cc[0] = arg2;
    data_021701cc[1] = count;
    data_021701cc[2] = arg0;
    if (count == 0) {
        return;
    }
    do {
        u8 *p = (u8 *)arg0 + i * 0x30;
        func_02118e68(p);
        *(u32 *)(p + 0xc) = 0;
        *(u32 *)(p + 0x10) = 0;
        *(u32 *)(p + 0x14) = 0;
        *(u32 *)(p + 0x18) = 0;
        *(u32 *)(p + 0x1c) = 0;
        *(u32 *)(p + 0x20) = 0;
        *(u32 *)(p + 0x24) = 0;
        *(u32 *)(p + 0x28) = 0;
        *(u32 *)(p + 0x2c) = 0;
        i++;
    } while (i < count);
}

void func_0211a7ec(s32 arg0, u32 arg1, u32 arg2) {
    u8 *p = func_0211a5e4(arg0);
    *(u32 *)(p + 0x24) = -1;
    *(u32 *)(p + 0x28) = arg1;
    *(u32 *)(p + 0x2c) = arg2;
}

s32 func_0211a810(void) {
    u32 i = 0;
    u32 count = data_021701cc[1];

    for (; i < count; i++) {
        u8 *p = (u8 *)data_021701cc[2] + i * 0x30;
        if (*(u32 *)(p + 0x1c) != 1) {
            *(u32 *)(p + 0x1c) = 1;
            return i;
        }
    }
    return -1;
}

void func_0211a860(u32 arg0) {
    u8 *p = (u8 *)data_021701cc[2] + arg0 * 0x30;
    func_02118e68(p);
    *(u32 *)(p + 0xc) = 0;
    *(u32 *)(p + 0x10) = 0;
    *(u32 *)(p + 0x14) = 0;
    *(u32 *)(p + 0x18) = 0;
    *(u32 *)(p + 0x1c) = 0;
    *(u32 *)(p + 0x20) = 0;
    *(u32 *)(p + 0x24) = 0;
    *(u32 *)(p + 0x28) = 0;
    *(u32 *)(p + 0x2c) = 0;
}

void func_0211ab04(u32 arg0) {
    data_021701d8[2] = arg0;
}

void func_0211ab14(void) {
    data_021701d8[1] = 0;
}

void func_0211ab28(u32 arg0) {
    data_02155ed0[0] = arg0;
}

extern u32 data_02155ed0[4];
u32 func_0211ab38(void) {
    return data_02155ed0[0];
}

extern u32 data_021701d8[4];
void func_0211ad90(u32 arg0) {
    data_021701d8[0] = arg0;
}

void func_0211ada0(void) {
    data_021701d8[0] = 0;
}

u8 *func_0211adb4(u8 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    for (i = 0; i < 4; i++) {
        u8 *p = arg0 + i * 6;
        if (arg1 <= *(u16 *)p && arg2 <= *(u16 *)(p + 2)) {
            return p;
        }
    }
    return arg0 + 0x12;
}

s32 func_0211adf4(u8 *arg0) {
    u32 v1 = *(volatile u32 *)0x04000000;
    u32 v2 = *(volatile u32 *)0x04000000;
    u32 idx = v1 & 7;
    s32 flag = (v2 & 8) != 0;
    s32 arg2 = 0;
    s32 val = arg0[idx];

    if (flag != 0) {
        arg2 = 1;
    }
    if (val >= 8) {
        val -= 8;
    }
    return func_020027d4(1, val, arg2);
}

s32 func_0211ae38(u8 *arg0) {
    u32 idx = *(volatile u32 *)0x04001000 & 7;
    s32 val = arg0[idx];

    if (val >= 8) {
        val -= 8;
    }
    return func_0200283c(val);
}

u32 func_0211b0bc(u32 arg0) {
    u16 val = data_02144e48[arg0];
    if (val == 0) {
        return arg0;
    }
    if (*(u16 *)(val + 0x4000000) & 0x2000) {
        return arg0 + 2;
    }
    return arg0;
}

