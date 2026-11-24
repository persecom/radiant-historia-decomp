/* 32 functions from 0x02003D58 to 0x02004CD4 (main), found by ds-decomp. */
#include "common.h"

extern u32 func_020034a8(void);
extern u32 func_020034c8(void);

extern s32 data_02145ba4;
extern u32 func_02003474(void);
extern void func_020085ec(s32, void *, u32, u32, s32);
extern void func_02008e38(void *, u32, u32);
void func_02003d58(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_02003474();
    if (data_02145ba4 != -1 && arg2 > 0x30) {
        func_020085ec(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e38(arg0, base + arg1, arg2);
    }
}

void func_02003dc8(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_020034a8();
    if (data_02145ba4 != -1 && arg2 > 0x30) {
        func_020085ec(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e38(arg0, base + arg1, arg2);
    }
}

void func_02003e38(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_020034c8();
    if (data_02145ba4 != -1 && arg2 > 0x30) {
        func_020085ec(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e38(arg0, base + arg1, arg2);
    }
}

extern u32 func_020034a8(void);
extern u32 func_020034c8(void);
extern u32 func_02003518(void);
void func_02003ea8(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_02003518();
    if (data_02145ba4 != -1 && arg2 > 0x30) {
        func_020085ec(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e38(arg0, base + arg1, arg2);
    }
}

extern u32 func_02003558(void);
extern u32 func_020035b0(void);
extern s32 func_020053d0(void);
extern void func_02008840(s32, void *, u32, u32, s32, s32, s32);
extern u32 data_0215cd24[];
void func_02003f18(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_02003558();
    if (data_02145ba4 != -1 && arg2 > 0x30) {
        func_020085ec(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e38(arg0, base + arg1, arg2);
    }
}

void func_02003f88(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_020035b0();
    if (data_02145ba4 != -1 && arg2 > 0x30) {
        func_020085ec(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e38(arg0, base + arg1, arg2);
    }
}

void func_02003ff8(void) {
    s32 val = func_020053d0();
    data_0215cd24[5] = val;
    switch (val) {
    case 0x10:
        data_0215cd24[4] = 0x06880000;
        data_0215cd24[3] = 0;
        break;
    case 0x20:
    case 0x60:
        data_0215cd24[4] = 0x06890000;
        data_0215cd24[3] = 0;
        break;
    case 0x40:
        data_0215cd24[4] = 0x06894000;
        data_0215cd24[3] = 0x4000;
        break;
    case 0:
        break;
    }
}

