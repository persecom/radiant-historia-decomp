/* 45 functions from 0x021241A4 to 0x021251A0 (main), found by ds-decomp. */
#include "common.h"

typedef struct { u32 f[6]; } Row24;
extern Row24 data_0215617c[];
extern u32 data_02156160[];
extern u16 data_02173170;
extern u32 data_02156150;
extern u32 data_02156154;

extern void func_02003c78(void);
extern void func_02002058(s32, s32);
extern s32 func_02001ff4(void);
void func_021241a4(s32 *arg0, u8 *arg1) {
    s32 r2 = *(s32 *)(arg1 + 0x24);
    u16 r3 = *(u16 *)(arg1 + 0x2c);
    u16 h = *(u16 *)(arg1 + 0x2e);
    s32 y = *(s32 *)(arg1 + 0x28);
    arg0[0] = 0x1000;
    arg0[5] = 0x1000;
    arg0[1] = 0;
    arg0[12] = (-r2 * r3) << 4;
    arg0[13] = (y * h) << 4;
    arg0[4] = 0;
}

void func_021243ac(s32 *arg0, u8 *arg1) {
    s32 lr = *(s32 *)(arg1 + 0x1c);
    s32 r4 = *(s32 *)(arg1 + 0x18);
    u16 r3 = *(u16 *)(arg1 + 0x2c);
    u16 r1 = *(u16 *)(arg1 + 0x2e);
    arg0[5] = lr;
    arg0[0] = r4;
    arg0[1] = 0;
    arg0[12] = ((0x1000 - r4) * r3) << 3;
    arg0[13] = ((0x1000 - lr) * r1) << 3;
    arg0[4] = 0;
}

void func_021243f4(s32 *arg0) {
    arg0[0] = 0x1000;
    arg0[1] = 0;
    arg0[4] = 0;
    arg0[5] = 0x1000;
    arg0[12] = 0;
    arg0[13] = 0;
}

void func_02124788(s32 *arg0, u8 *arg1) {
    s32 ty = *(s32 *)(arg1 + 0x28);
    s32 sy = *(s32 *)(arg1 + 0x1c);
    s32 sx = *(s32 *)(arg1 + 0x18);
    s32 tx = *(s32 *)(arg1 + 0x24);
    s32 t1 = (s32)(((s64)(-ty) * sy) >> 12);
    s32 t2 = (s32)(((s64)tx * sx) >> 12);
    s32 h = *(u16 *)(arg1 + 0x2e);
    s32 w = *(u16 *)(arg1 + 0x2c);
    arg0[0] = sx;
    arg0[5] = sy;
    arg0[1] = 0;
    arg0[12] = (w * (-t2)) << 4;
    arg0[13] = ((-h) * (sy + t1 - 0x1000)) << 4;
    arg0[4] = 0;
}

void func_02124800(s32 *arg0, u8 *arg1) {
    u16 h = *(u16 *)(arg1 + 0x2e);
    s32 ty = *(s32 *)(arg1 + 0x28);
    s32 tx = *(s32 *)(arg1 + 0x24);
    u16 w = *(u16 *)(arg1 + 0x2c);
    s32 s = w * (-tx);
    s32 t = (-(s32)h) * (-ty);
    arg0[5] = 0x1000;
    arg0[0] = 0x1000;
    arg0[1] = 0;
    arg0[12] = s << 4;
    arg0[13] = t << 4;
    arg0[4] = 0;
}

void func_0212491c(s32 *arg0, u8 *arg1) {
    s32 w = *(u16 *)(arg1 + 0x2c) << 12;
    s32 h = *(u16 *)(arg1 + 0x2e) << 12;
    s32 val;

    func_02002058(h, w);
    val = *(s16 *)(arg1 + 0x22);
    arg0[0] = val;
    arg0[5] = val;
    arg0[1] = (*(s16 *)(arg1 + 0x20) * func_02001ff4()) >> 12;
    func_02002058(w, h);
    {
        u16 h2 = *(u16 *)(arg1 + 0x2e);
        s16 s2 = *(s16 *)(arg1 + 0x22);
        u16 w2 = *(u16 *)(arg1 + 0x2c);
        s16 s1 = *(s16 *)(arg1 + 0x20);
        arg0[12] = (w2 * s1) << 4;
        arg0[13] = (-h2 * (s2 - 0x1000)) << 4;
    }
    arg0[4] = (-*(s16 *)(arg1 + 0x20) * func_02001ff4()) >> 12;
}

void func_021249bc(s32 *arg0, u8 *arg1) {
    u16 h = *(u16 *)(arg1 + 0x2e);
    s32 y = *(s32 *)(arg1 + 0x1c);
    s32 ty = (-h * (y - 0x1000)) << 4;
    arg0[5] = y;
    arg0[0] = *(s32 *)(arg1 + 0x18);
    arg0[1] = 0;
    arg0[12] = 0;
    arg0[13] = ty;
    arg0[4] = 0;
}

void func_021249f8(s32 *arg0) {
    arg0[0] = 0x1000;
    arg0[1] = 0;
    arg0[4] = 0;
    arg0[5] = 0x1000;
    arg0[12] = 0;
    arg0[13] = 0;
}

s32 func_02124b90(void) {
    return 0;
}

s32 func_02124b98(void) {
    return -1;
}

s32 func_02124ba0(void) {
    return 0;
}

s32 func_02124ba8(void) {
    return -1;
}

extern u32 data_02173174[];
extern void (*data_02156158)(void);
extern s32 (*data_0215615c)(void);
extern void func_02125038(void);
extern void func_02124ef8(void);
extern s32 func_02125014(void);
void func_02124bb0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    data_02156160[2] = (u32)&data_0215617c[a0];
    data_02156160[3] = (u32)&data_0215617c[a1];
    data_02156160[4] = (u32)&data_0215617c[a2];
    data_02156160[5] = (u32)&data_0215617c[a3];
    data_02156160[6] = (u32)&data_0215617c[a4];
}

void func_02124c78(void) {
    s32 n = (data_02173170 > 1) ? data_02173170 + 1 : data_02173170;
    s32 i;
    for (i = 0; i < 5; i++) {
        if (i < n) {
            data_0215617c[i].f[2] = 1;
        } else {
            data_0215617c[i].f[2] = 0;
        }
        if (data_0215617c[i].f[3] != 0) {
            data_0215617c[i].f[0] = 0;
            data_0215617c[i].f[1] = 0x10000;
        } else {
            data_0215617c[i].f[0] = 0;
            data_0215617c[i].f[1] = 0x20000;
        }
    }
}

s32 func_02124e60(void) {
    return 0;
}

void func_02124e68(u32 *arg0) {
    s32 i;
    for (i = 0; i < 5; i++) {
        arg0[i * 2] = data_0215617c[i].f[0];
        arg0[i * 2 + 1] = data_0215617c[i].f[1];
    }
}

void func_02124eac(u32 arg0, s32 arg1) {
    data_02173174[2] = arg0;
    func_02125038();
    if (arg1 != 0) {
        data_02156158 = func_02124ef8;
        data_0215615c = func_02125014;
    }
}

s32 func_02125014(void) {
    return 0;
}

extern void func_02124cf8(void);
extern int func_02124e60(void);
void func_0212501c(u32 *arg0) {
    arg0[0] = data_02173174[0];
    arg0[1] = data_02173174[1];
}

void func_02125038(void) {
    data_02173174[0] = 0;
    data_02173174[1] = data_02173174[2];
}

u16 func_02125054(u32 *arg0, u32 arg1) {
    return (arg1 + 1) % arg0[1];
}

extern void func_0200439c(void);
extern void func_020043f8(u32, u32, u32);
extern void func_02004544(void);
void func_021250a0(u32 arg0, u32 arg1, u32 arg2) {
    func_0200439c();
    func_020043f8(arg0, arg1, arg2);
    func_02004544();
}

extern void func_02004588(void);
extern void func_020045bc(u32, u32, u32);
extern void func_0200462c(void);
void func_021250cc(u32 arg0, u32 arg1, u32 arg2) {
    func_02004588();
    func_020045bc(arg0, arg1, arg2);
    func_0200462c();
}

extern void func_02004668(void);
extern void func_020046f8(void *, void *);
extern void func_020047d4(void);
void func_021250f8(void *arg0, void *arg1, void *arg2) {
    func_02004668();
    ((void (*)(void *, void *))func_020046f8)(arg0, arg2);
    func_020047d4();
}

extern void func_02004764(void *, void *);
void func_0212511c(void *arg0, void *arg1, void *arg2) {
    func_02004668();
    ((void (*)(void *, void *))func_02004764)(arg0, arg2);
    func_020047d4();
}

void func_02125140(void) {
    func_02003c78();
}

extern void func_02003d58(void);
void func_0212514c(void) {
    func_02003d58();
}

extern void func_02003e38(void);
void func_02125158(void) {
    func_02003e38();
}

extern void func_02003f18(void);
void func_02125164(void) {
    func_02003f18();
}

extern void func_020038f8(void);
void func_02125170(void) {
    func_020038f8();
}

extern void func_020039d8(void);
void func_0212517c(void) {
    func_020039d8();
}

extern void func_02003ab8(void);
void func_02125188(void) {
    func_02003ab8();
}

extern void func_02003b98(void);
void func_02125194(void) {
    func_02003b98();
}

