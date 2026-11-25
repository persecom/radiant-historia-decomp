/* 1 function from 0x02104B04 to 0x02104F68 (main), found by ds-decomp. */
#include "common.h"

extern const char data_02155754[];
extern const char data_02155758[];
extern const char data_02155760[];
extern const char data_02155764[];
extern const char data_0215576c[];
extern const char data_02155774[];
extern const char data_0215577c[];
extern const char data_02155784[];
extern const char data_0215578c[];
extern const char data_02155794[];
extern const char data_0215579c[];
extern const char data_021557a4[];
extern const char data_021557a8[];
extern const char data_021557b0[];
extern u8 *data_02160204;
extern u8 *data_02160200;
extern void *data_02160c74;
extern u8 *data_021600ac;
extern s32 func_0210cc54(const char *);
extern s32 func_0210ce5c(void);
extern void func_0210d6f4(void *);
extern void func_0210d6a8(void *, s32);
extern void func_0210d844(s16);
extern void func_0210d6a4(s32, s32);
extern void func_0210d27c(s32);
extern void func_02108da0(u8, u8);
extern void func_02108d34(u8, f32);
extern void func_02108c24(u8, s32);
extern s32 func_0210920c(u8);
extern s32 func_0210922c(u8);
extern void func_02108ea4(u8, u16);
extern void func_0210d6d8(void *, u8, s32, s32);
extern void func_0210d828(void);
extern void func_0210d46c(void);
extern void func_0210d3b0(s32);
s32 func_02104b04(void) {
    if (func_0210cc54(data_02155754)) {
        s32 a;
        if (*(u32 *)(data_02160200 + 0x160) & 4) {
            return 1;
        }
        a = func_0210ce5c();
        func_0210d6f4(data_02160c74);
        func_0210d6a8(data_02160c74, a);
        func_0210d844((s16)a);
        return 1;
    }
    if (func_0210cc54(data_02155758)) {
        s32 a;
        if (*(u32 *)(data_02160200 + 0x160) & 4) {
            return 1;
        }
        a = func_0210ce5c();
        func_0210d6a4(0x7f, 1);
        func_0210d27c(a);
        return 1;
    }
    if (func_0210cc54(data_02155760)) {
        s32 a = func_0210ce5c();
        s32 b = func_0210ce5c();
        func_02108da0((u8)a, (u8)b);
        func_02108d34((u8)a, 1.0f);
        if (a == 0) {
            *(u8 *)(data_02160204 + 0x112) = b;
        }
        if (*(u32 *)(data_02160200 + 0x160) & 4) {
            func_02108c24((u8)a, 0);
        } else {
            func_02108c24((u8)a, 1);
        }
        return 1;
    }
    if (func_0210cc54(data_02155764)) {
        s32 a = func_0210ce5c();
        s32 b = func_0210ce5c();
        *(u8 *)(data_02160204 + 0x111) = a + 1;
        *(u8 *)(data_02160204 + 0x112) = b;
        if (*(u8 *)(data_02160204 + 0x114) == 1) {
            *(u8 *)(data_02160204 + 0x112) = *(s8 *)(data_02160204 + 0x113);
        }
        if (func_0210920c((u8)a) != -1) {
            if (*(u32 *)(data_02160200 + 0x160) & 4) {
                func_02108c24((u8)a, 0);
            } else {
                u8 val = *(u8 *)(data_02160204 + 0x112);
                if (val == func_0210920c((u8)a)) {
                    if (func_0210922c((u8)a) == 1) {
                        func_02108ea4((u8)a, 0);
                        func_02108da0((u8)a, *(u8 *)(data_02160204 + 0x112));
                    } else {
                        func_02108c24((u8)a, 1);
                    }
                } else {
                    func_02108da0((u8)a, val);
                }
            }
        } else {
            func_02108da0((u8)a, *(u8 *)(data_02160204 + 0x112));
        }
        return 1;
    }
    if (func_0210cc54(data_0215576c)) {
        s8 a = func_0210ce5c();
        if (a < 0) {
            *(u8 *)(data_02160204 + 0x114) = 0;
            *(s8 *)(data_02160204 + 0x113) = -1;
        } else {
            *(u8 *)(data_02160204 + 0x114) = 1;
            *(s8 *)(data_02160204 + 0x113) = a;
        }
        return 1;
    }
    if (func_0210cc54(data_02155774)) {
        s32 a = func_0210ce5c();
        s32 b = func_0210ce5c();
        func_02108d34((u8)a, 0.01f * (f32)b);
        return 1;
    }
    if (func_0210cc54(data_0215577c)) {
        func_02108c24((u8)func_0210ce5c(), 0);
        return 1;
    }
    if (func_0210cc54(data_02155784)) {
        func_02108c24((u8)func_0210ce5c(), 1);
        return 1;
    }
    if (func_0210cc54(data_0215578c)) {
        s32 a = func_0210ce5c();
        s32 b = func_0210ce5c();
        if (*(u32 *)(data_02160200 + 0x160) & 4) {
            b = 1;
        }
        func_02108ea4((u8)a, (u16)b);
        return 1;
    }
    if (func_0210cc54(data_02155794)) {
        s32 a = func_0210ce5c();
        s32 b = func_0210ce5c();
        func_0210d6d8(data_02160c74, (u8)a, b, 0);
        return 1;
    }
    if (func_0210cc54(data_0215579c)) {
        func_0210d6f4(data_02160c74);
        func_0210d828();
        return 1;
    }
    if (func_0210cc54(data_021557a4)) {
        s32 a;
        s32 b;
        if (data_021600ac == 0) {
            return 0;
        }
        a = func_0210ce5c();
        b = func_0210ce5c();
        *(u8 *)(data_021600ac + a + 0x8c1) = b - 1;
        return 1;
    }
    if (func_0210cc54(data_021557a8)) {
        s32 a = func_0210ce5c();
        func_0210d46c();
        if (!(*(u32 *)(data_02160200 + 0x160) & 4)) {
            func_0210d3b0(a);
        }
        return 1;
    }
    if (func_0210cc54(data_021557b0)) {
        func_0210d46c();
        return 1;
    }
    return 0;
}
