/* 6 functions from 0x020CB1F4 to 0x020CC09C (main), found by ds-decomp. */
#include "common.h"

void func_020cb1f4(void) {
}

void func_020cb1f8(void) {
}

extern u8 *data_02160234;
extern u8 *data_0216020c;
extern s32 data_02162884;
extern s32 data_02162814;
extern void func_020bec04(u16);
extern void func_020bebc8(u16);
void func_020cb1fc(void) {
    u8 *p = data_02160234;
    *(s16 *)(p + 0x8e) += 1;
    if (*(s16 *)(p + 0x8e) > 18) {
        *(s16 *)(p + 0x8e) = 18;
    }
    func_020bec04(*(u32 *)(data_0216020c + 0x84));
    func_020bebc8(*(u32 *)(data_0216020c + 0x80));
    if (*(s16 *)(p + 0x8e) <= 6) {
        data_02162884 = (*(s16 *)(p + 0x8e) * 16) / 6 - 16;
        data_02162814 = (*(s16 *)(p + 0x8e) * 16) / 6 - 16;
    } else if (*(s16 *)(p + 0x8e) > 8 && *(s16 *)(p + 0x8e) <= 12) {
        data_02162884 = 0;
        data_02162814 = 0;
    } else if (*(s16 *)(p + 0x8e) > 12) {
        data_02162884 = -((*(s16 *)(p + 0x8e) - 12) * 16) / 6;
        data_02162814 = -((*(s16 *)(p + 0x8e) - 12) * 16) / 6;
    }
}

extern u32 data_02162868;
extern u8 data_0215137c[16];
extern u8 *data_02160238;
extern u8 *data_02160204;
extern u8 data_021512f0;
extern void func_02108e54(s32);
extern void func_020cb320(void);
extern void func_020bdf24(void *);
extern void func_0210968c(s32, s32, s32);
extern void func_02109790(s32);
extern void func_020cbd20(void);
extern void func_0210dc88(void);
extern void func_02008250(u32);
s32 func_020cbfa8(void) {
    s32 zero = 0;
    s32 one = 1;
    data_02162868 = one;
    func_02108e54(zero);
    func_02108e54(one);
    func_020cb320();
    func_020bdf24(data_0215137c);
    func_0210968c(3, zero, 10);
    if (*(u8 *)(data_02160238 + 0x771) == zero) {
        func_0210dc88();
    } else {
        func_0210968c(3, -16, 20);
        func_02109790(3);
        func_020cbd20();
        func_0210dc88();
    }
    data_02162868 = zero;
    if (*(u8 *)(data_02160204 + 0xd6) == 0x1f) {
        if (data_021512f0 == zero) {
            func_02008250(*(u32 *)0x02fffc20 + one);
        } else {
            return 2;
        }
    }
    return *(u8 *)(data_02160204 + 0xd6);
}

