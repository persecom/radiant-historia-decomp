/* 36 functions from 0x0200F244 to 0x020101F8 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_0215f0a0[4];
extern void func_0200fa74(void *, s32);
extern u8 data_0215f120[1312];
extern u16 func_020081e0(void);
extern u32 func_02008128(void);
extern void func_0200813c(u32);
extern void func_02006510(void *);
extern void func_02006560(void *);
extern void func_0200fd64(void *, s32, u32, u32);
extern s32 func_02005da4(u16);
extern void func_0200851c(void *, s32);
extern void func_02007e58(void *, s32, s32, void *, void *);
u32 func_0200f684(u32 arg0) {
    u32 result = 0;
    s32 i;
    u32 mult;

    for (i = 0; i < 8; i++) {
        if (((arg0 >> (i << 2)) & 0xf) >= 10) {
            return 0;
        }
    }

    mult = 1;
    for (i = 0; i < 8; i++) {
        result += ((arg0 >> (i << 2)) & 0xf) * mult;
        mult *= 10;
    }

    return result;
}

s32 func_0200f6ec(void) {
    return func_0200f6fc(0x27);
}

s32 func_0200f6fc(s32 arg0) {
    s32 ret = 0;
    if (func_0200a6e4(5, (arg0 << 8) & 0x7f00, 0) >= 0) {
        ret = 1;
    }
    return ret;
}

s32 func_0200f728(u8 *arg0) {
    s32 month = *(s32 *)(arg0 + 4) - 2;
    s32 year = *(s32 *)(arg0 + 0) + 2000;
    s32 day = *(s32 *)(arg0 + 8);
    s32 century = year / 100;
    s32 yearInCentury = year % 100;
    s32 monthTerm;
    if (month < 1) {
        month += 12;
        year -= 1;
    }
    monthTerm = (month * 26 - 2) / 10;
    return (day + monthTerm + yearInCentury + yearInCentury / 4 + century / 4 + 5 * century) % 7;
}

void func_0200f7e4(u8 *arg0) {
    if (((s32 (*)(void *))*(u32 *)(arg0 + 0x34))(*(void **)(arg0 + 0x38)) != 0) {
        func_0200851c(arg0, 1);
    } else {
        func_02007e58(arg0 + 0xc, 0xc0, 0xc0 + 0x47, (void *)func_0200f7e4, arg0);
    }
}

BOOL func_0200f83c(u16 *arg0) {
    return func_02005da4(*arg0) == 0;
}

u32 func_0200f94c(void) {
    return data_0215f0a0[0];
}

extern void func_02008414(void);
extern void func_02008460(void *);
extern void func_02007e44(void *);
extern s32 func_0200f83c(u16 *);
extern void func_0200f7e4(u8 *);
extern void func_02008474(void *, s32, s32, s32);
extern void func_02005d88(void);
extern void func_0200faec(u32, s32);
extern s32 func_020106ac(void);
extern void func_020106a0(void);
void func_0200f95c(void) {
    if (func_0200f94c() == 0) {
        func_02008414();
    }
}

extern s32 func_0200a6e4(s32, s32, s32);
s32 func_0200f6fc(s32 arg0);
void func_0200f974(u32 arg0) {
    data_0215f0a0[0] = arg0;
}

u32 func_0200f984(void) {
    return **(u32 **)data_0215f120;
}

void *func_0200f998(void) {
    return (void *)0x02fffa80;
}

void *func_0200f9a4(void) {
    return (void *)0x02fffe00;
}

void func_0200f9b0(struct { u16 unk0; u16 unk2; u32 unk4[3]; } arg0) {
    u8 buf[0x40];
    func_0200fa74((void *)(u32)arg0.unk0, 1);
    func_02008460(buf);
    func_02007e44(buf + 0xc);
    *(void **)(buf + 0x34) = (void *)func_0200f83c;
    *(void **)(buf + 0x38) = &arg0;
    func_0200f7e4(buf);
    func_02008474(buf, 1, 0, 1);
}

void func_0200fa20(u32 arg0) {
    func_02005d88();
    func_0200faec(arg0, 1);
}

extern void func_0200fa74(void *, s32);
void func_0200fa3c(void *arg0) {
    func_0200fa74(arg0, 2);
}

void func_0200fa4c(u32 arg0) {
    if (func_020106ac() == 0) {
        func_020106a0();
    }
    func_0200faec(arg0, 2);
}

