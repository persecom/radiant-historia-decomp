/* 8 functions from 0x02058A08 to 0x02059888 (main), found by ds-decomp. */
#include "common.h"

extern s32 func_020bf3a0(void *, f32);
extern void func_020bf330(void *);
extern s32 *func_020bed24(void);
extern s32 func_020bf118(s32 *, u8 *, s32, f32);
extern void func_020befc4(void *);
extern void func_020bed54(s32, s32);
extern u8 *func_020bed94(void);
extern s32 func_020bedf8(void);
extern u8 *func_020becfc(void);
s32 func_02059460(u8 *arg0) {
    if (*(f32 *)(arg0 + 4) < 1.0f) {
        *(f32 *)(arg0 + 4) += 1.0f / *(f32 *)(arg0 + 0);
        if (*(f32 *)(arg0 + 4) > 1.0f) {
            *(f32 *)(arg0 + 4) = 1.0f;
        }
        if (func_020bf118(func_020bed24(), arg0 + 8, 4, *(f32 *)(arg0 + 4)) != 0) {
            func_020bed24()[0] <<= 0xc;
            func_020bed24()[1] <<= 0xc;
            func_020bed24()[2] <<= 0xc;
        }
    } else {
        func_020befc4(arg0);
        func_020bed54(4, 0);
        return 0;
    }
    return 1;
}

s32 func_0205951c(void) {
    u8 *p;
    if (*(s32 *)((p = func_020bed94()) + 0x18) > 0) {
        if (func_020bedf8() == 1) {
            s32 x, y;
            if (*(u16 *)(func_020becfc() + 0xd8) & 4) {
                x = func_020bed24()[0] + (*(s16 *)(p + 0xc) << 0xc);
                y = func_020bed24()[1] + (*(s16 *)(p + 0xe) << 0xc);
            } else {
                x = *(s32 *)(p + 0) + (*(s16 *)(p + 0xc) << 0xc);
                y = *(s32 *)(p + 4) + (*(s16 *)(p + 0xe) << 0xc);
            }
            func_020bed24()[0] = x;
            func_020bed24()[1] = y;
        } else {
            func_020bed54(2, 0);
            return 0;
        }
    }
    return 1;
}

s32 func_020595c0(u8 *arg0, s32 *arg1) {
    if (*(f32 *)(arg0 + 4) < 1.0f) {
        *(f32 *)(arg0 + 4) += 1.0f / *(f32 *)(arg0 + 0);
        if (*(f32 *)(arg0 + 4) > 1.0f) {
            *(f32 *)(arg0 + 4) = 1.0f;
        }
        if (func_020bf3a0(arg0, *(f32 *)(arg0 + 4)) != 0) {
            arg1[0] = *(s32 *)(arg0 + 0x20) << 0xc;
            arg1[1] = *(s32 *)(arg0 + 0x24) << 0xc;
            arg1[2] = *(s32 *)(arg0 + 0x28) << 0xc;
        }
        return 1;
    }
    func_020bf330(arg0);
    return 0;
}

s32 func_0205965c(u8 *arg0) {
    if (*(f32 *)(arg0 + 4) < 1.0f) {
        *(f32 *)(arg0 + 4) += 1.0f / *(f32 *)(arg0 + 0);
        if (*(f32 *)(arg0 + 4) > 1.0f) {
            *(f32 *)(arg0 + 4) = 1.0f;
        }
        if (func_020bf3a0(arg0, *(f32 *)(arg0 + 4)) != 0) {
            func_020bed24()[0] = *(s32 *)(arg0 + 0x20) << 0xc;
            func_020bed24()[1] = *(s32 *)(arg0 + 0x24) << 0xc;
            func_020bed24()[2] = *(s32 *)(arg0 + 0x28) << 0xc;
        }
    } else {
        func_020bf330(arg0);
        return 0;
    }
    return 1;
}

