/* 23 functions from 0x020ADE8C to 0x020AEDC0 (main), found by ds-decomp. */
#include "common.h"
extern u8 *func_020adda8(void);

typedef struct Unk_02150788 {
    u32 field_0;
    u32 field_4;
    u32 field_8;
    u32 field_c;
    u32 field_10;
} Unk_02150788;

extern Unk_02150788 data_02150788[];
extern void func_02008f74(void *, s32, u32);
extern void *func_020ade60(s32);
extern u8 *func_0203be10(s32);
extern s32 func_0203be60(u8 *, s32, s32);
extern void func_020aed5c(s32);
extern void func_020aea1c(void);
extern void func_020ae530(void);
extern void func_0203be4c(void *);
extern void func_021098ac(void *);

void func_020adfb4(void **arg0) {
    s32 i;
    for (i = 0; i < 0x3b; i++) {
        if (arg0[i] != NULL) {
            func_0203be4c(arg0[i]);
            arg0[i] = NULL;
        }
    }
}

void func_020adfe8(u16 arg0, u8 arg1) {
    *(u32 *)0x40004A4 = (arg1 << 24) | 0xC0 | (arg0 << 16);
}

void func_020ae004(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, s16 arg8) {
    s16 buf[10];
    buf[0] = 1;
    buf[1] = arg1;
    buf[2] = arg2;
    buf[3] = arg3;
    buf[4] = arg4;
    buf[5] = arg5;
    buf[6] = arg6;
    buf[7] = arg0;
    buf[8] = arg7;
    buf[9] = arg8;
    func_021098ac(buf);
}

u8 func_020ae05c(u32 arg0, u32 arg1) {
    u32 i;
    u32 pow10 = 1;
    u32 count;
    if (arg0 == 0 && arg1 == 1) {
        return 0;
    }
    count = arg1 - 1;
    for (i = 0; i < count; i++) {
        pow10 *= 10;
    }
    if (arg0 < pow10) {
        return 10;
    }
    for (i = 0; i < count; i++) {
        arg0 /= 10;
    }
    return arg0 % 10;
}

s32 func_020ae9cc(u32 arg0, s32 arg1) {
    u8 *base = func_020adda8();
    u8 *p;
    if (arg1 == 0) {
        if (arg0 >= 5) {
            return 0;
        }
    } else if (arg0 >= 5) {
        return 0;
    }
    p = *(u8 **)(base + arg0 * 0x50 + 0x3ec);
    *(u32 *)(p + 0x40) = 0;
    return 1;
}

void func_020aea1c(void) {
    u8 *base = func_020adda8();
    s32 i;
    for (i = 0; i < 5; i++) {
        u8 *p = *(u8 **)(base + i * 0x50 + 0x3ec);
        if (p != NULL) {
            *(u32 *)(p + 0x40) = 0;
        }
    }
}

void func_020aea50(void) {
    u8 *base = func_020adda8();
    s32 i;
    for (i = 0; i < 5; i++) {
        u8 *p = *(u8 **)(base + i * 0x50 + 0x3ec);
        if (p != NULL) {
            *(u32 *)(p + 0x40) = 1;
        }
    }
}

extern u8 *func_020adda8(void);
extern void func_020a994c(void *);
void func_020aea84(void) {
    u8 *base = func_020adda8();
    s32 i;
    for (i = 0; i < 5; i++) {
        func_020a994c(base + 0x3f0 + i * 0x50);
    }
}

void func_020aeda0(void) {
    func_020aed5c(0);
    func_020aed5c(1);
    func_020aea1c();
    func_020ae530();
}

