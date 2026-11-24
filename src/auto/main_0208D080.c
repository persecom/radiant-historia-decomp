/* 9 functions from 0x0208D080 to 0x0208E000 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s16 f0, f1, f2, f3, f4, f5, f6, f7, f8, f9;
} Unk10;

extern const Unk10 data_021411ac;
extern const Unk10 data_02141210;
extern const Unk10 data_021411fc;
extern const Unk10 data_02141198;
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);

void func_0208d84c(s16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    Unk10 a = data_02141210;
    Unk10 b = data_021411fc;
    func_020a3bbc(0x2a);
    a.f5 = arg0;
    a.f6 = arg1;
    a.f8 = arg2;
    a.f7 = arg3;
    func_021098ac(&a);
    b.f5 = arg0 + 1;
    b.f6 = arg1;
    b.f8 = arg2 - 2;
    b.f7 = arg3 + 1;
    func_021098ac(&b);
}

void func_0208da7c(s16 arg0, s32 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6) {
    Unk10 sp;
    s32 v;
    sp = data_021411ac;
    func_020a3bbc(arg0);
    v = arg4 * arg1;
    sp.f1 = v;
    sp.f2 = 0;
    sp.f8 = arg4;
    sp.f3 = arg4;
    sp.f9 = arg5;
    sp.f4 = arg5;
    sp.f5 = arg2;
    sp.f6 = arg3;
    sp.f7 = arg6;
    func_021098ac(&sp);
}

void func_0208db04(s16 arg0, s32 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, u8 arg6, s16 arg7) {
    s32 pow10 = 1;
    u8 digit = 0;
    s32 done = 0;

    if (arg1 < 0) {
        arg1 = 0;
    }

    func_0208da7c(arg0, (u8)(arg1 % 10), arg2, arg3, arg4, arg5, arg7);

    do {
        s32 v;
        pow10 *= 10;
        v = arg1 - (arg1 % pow10);
        digit++;
        if (pow10 > arg1) {
            done = 1;
        } else {
            s32 d = v / pow10;
            func_0208da7c(arg0, (u8)(d % 10), arg2 - arg6 * digit, arg3, arg4, arg5, arg7);
        }
    } while (done != 1);
}

void func_0208dc14(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4) {
    Unk10 sp;
    sp = data_02141198;
    if (arg4 == 1) {
        func_020a3bbc(0x2e);
    } else {
        func_020a3bbc(0x2d);
    }
    sp.f1 = (arg0 % 3) * 18;
    sp.f2 = (arg0 / 3) * 19;
    sp.f5 = arg1;
    sp.f6 = arg2;
    sp.f7 = arg3;
    func_021098ac(&sp);
}

