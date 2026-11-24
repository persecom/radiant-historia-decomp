/* 40 functions from 0x02001D9C to 0x02002D9C (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s32 x, y, z;
} Vec3;

typedef struct {
    s32 x, y;
} Vec2;

typedef struct {
    Vec2 xy;
    s32 z;
} Vec3n;

extern u16 data_02145ba0;
extern u16 data_0215cd20;
extern void func_0200f1bc(void);
void func_02002058(s32 arg0, s32 arg1);
void func_02002028(u32 arg0);
s32 func_02001ff4(void);
s32 func_02001fb0(s32 arg0, s32 arg1) {
    func_02002058(arg0, arg1);
    return func_02001ff4();
}

s32 func_02001fc0(u32 arg0) {
    func_02002028(arg0);
    return func_02001ff4();
}

s64 func_02001fd0(void) {
    while (*(volatile u16 *)0x04000280 & 0x8000) {
    }
    return *(s64 *)0x040002a0;
}

s32 func_02001ff4(void) {
    while (*(volatile u16 *)0x04000280 & 0x8000) {
    }
    return (s32)((*(u64 *)0x040002a0 + 0x80000) >> 20);
}

void func_02002028(u32 arg0) {
    *(volatile u16 *)0x04000280 = 1;
    *(volatile u64 *)0x04000290 = (u64)0x1000 << 32;
    *(volatile u64 *)0x04000298 = arg0;
}

void func_02002058(s32 arg0, s32 arg1) {
    *(volatile u16 *)0x04000280 = 1;
    *(volatile s32 *)0x04000290 = 0;
    *(volatile s32 *)0x04000294 = arg0;
    *(volatile s32 *)0x04000298 = arg1;
    *(volatile s32 *)0x0400029c = 0;
}

s32 func_02002080(s32 arg0, u32 arg1) {
    *(volatile u16 *)0x04000280 = 0;
    *(volatile s32 *)0x04000290 = arg0;
    *(volatile u64 *)0x04000298 = arg1;
    while (*(volatile u16 *)0x04000280 & 0x8000) {
    }
    return *(volatile s32 *)0x040002a0;
}

s32 func_020020bc(s32 arg0, u32 arg1) {
    *(volatile u16 *)0x04000280 = 0;
    *(volatile u32 *)0x04000290 = arg0;
    *(volatile u64 *)0x04000298 = arg1;
    while (*(volatile u16 *)0x04000280 & 0x8000) {
    }
    return *(volatile s32 *)0x040002a8;
}

void func_020020f8(s32 *arg0, s32 *arg1, s32 *arg2) {
    arg2[0] = arg0[0] + arg1[0];
    arg2[1] = arg0[1] + arg1[1];
    arg2[2] = arg0[2] + arg1[2];
}

void func_02002128(s32 *arg0, s32 *arg1, s32 *arg2) {
    arg2[0] = arg0[0] - arg1[0];
    arg2[1] = arg0[1] - arg1[1];
    arg2[2] = arg0[2] - arg1[2];
}

s32 func_02002158(const s32 *a, const s32 *b) {
    return (s32)(((s64)a[0] * b[0] + (s64)a[1] * b[1] + (s64)a[2] * b[2] + 0x800) >> 12);
}

void func_02002194(const s32 *a, const s32 *b, s32 *ab) {
    s32 x = (s32)(((s64)a[1] * b[2] - (s64)a[2] * b[1] + 0x800) >> 12);
    s32 y = (s32)(((s64)a[2] * b[0] - (s64)a[0] * b[2] + 0x800) >> 12);
    s32 z = (s32)(((s64)a[0] * b[1] - (s64)a[1] * b[0] + 0x800) >> 12);
    ab[0] = x;
    ab[1] = y;
    ab[2] = z;
}

s32 func_02002214(const s32 *v) {
    s64 sum = (s64)v[0] * v[0];
    sum += (s64)v[1] * v[1];
    sum += (s64)v[2] * v[2];
    *(volatile u16 *)0x040002b0 = 1;
    *(volatile u64 *)0x040002b8 = (u64)sum << 2;
    while (*(volatile u16 *)0x040002b0 & 0x8000) {
    }
    return (*(volatile s32 *)0x040002b4 + 1) >> 1;
}

s32 func_02002388(s32 *arg0, s32 *arg1) {
    s64 sum;
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    a = arg0[1];
    b = arg1[1];
    c = arg0[0];
    d = a - b;
    sum = (s64)d * d;
    d = c - arg1[0];
    sum += (s64)d * d;
    d = arg0[2] - arg1[2];
    sum += (s64)d * d;
    *(volatile u16 *)0x40002b0 = 1;
    *(volatile u64 *)0x40002b8 = (u64)sum << 2;
    while (*(volatile u16 *)0x40002b0 & 0x8000) {
    }
    return (*(volatile s32 *)0x40002b4 + 1) >> 1;
}

u16 func_02002404(s32 y, s32 x)
{
    extern s32 func_02001fb0(s32, s32);
    extern const s16 data_0213e394[];

    u32 positive, bias, denominator, numerator;

    if (y > 0) {
        if (x > 0) {
            if (x > y) {
                numerator = (u32)y;
                denominator = (u32)x;
                bias = 0;
                positive = TRUE;
            } else if (x < y) {
                numerator = (u32)x;
                denominator = (u32)y;
                bias = 0x4000;
                positive = FALSE;
            } else {
                return 0x2000;
            }
        } else if (x < 0) {
            x = -x;

            if (x < y) {
                numerator = (u32)x;
                denominator = (u32)y;
                bias = 0x4000;
                positive = TRUE;
            } else if (x > y) {
                numerator = (u32)y;
                denominator = (u32)x;
                bias = 0x8000;
                positive = FALSE;
            } else {
                return 0x6000;
            }
        } else {
            return 0x4000;
        }
    } else if (y < 0) {
        y = -y;

        if (x < 0) {
            x = -x;

            if (x > y) {
                numerator = (u32)y;
                denominator = (u32)x;
                bias = (u32)-0x8000;
                positive = TRUE;
            } else if (x < y) {
                numerator = (u32)x;
                denominator = (u32)y;
                bias = (u32)-0x4000;
                positive = FALSE;
            } else {
                return 0xA000;
            }
        } else if (x > 0) {
            if (x < y) {
                numerator = (u32)x;
                denominator = (u32)y;
                bias = (u32)-0x4000;
                positive = TRUE;
            } else if (x > y) {
                numerator = (u32)y;
                denominator = (u32)x;
                bias = 0;
                positive = FALSE;
            } else {
                return 0xE000;
            }
        } else {
            return 0xC000;
        }
    } else {
        u16 result = 0;

        if (x < 0) {
            result = 0x8000;
        }

        return result;
    }

    if (denominator == 0) {
        return 0;
    }

    if (positive) {
        return (u16)(bias + data_0213e394[
            func_02001fb0((s32)numerator, (s32)denominator) >> 5
        ]);
    } else {
        return (u16)(bias - data_0213e394[
            func_02001fb0((s32)numerator, (s32)denominator) >> 5
        ]);
    }
}

void func_02002594(void) {
}

void func_020026e0(s32 arg0) {
    u32 v = (u32)arg0 << 24;
    *(volatile u16 *)0x4000004 = (*(volatile u16 *)0x4000004 & 0x3f) | (v >> 16) | ((arg0 & 0x100) >> 1);
}

void func_02002708(s32 arg0) {
    volatile u16 *reg = (volatile u16 *)0x4000004;
    u16 v = *reg;
    if (arg0 != 0) {
        *reg = v | 8;
    } else {
        *reg = v & 0xfff7;
    }
}

extern u16 data_02145ba0;
extern void func_02002028(u32);
extern s32 func_02001ff4(void);
u16 func_02002740(void) {
    return data_02145ba0;
}

void func_02002750(void) {
    u32 tmp = *(volatile u32 *)0x04000000;
    data_02145ba0 = 0;
    data_0215cd20 = (u16)((tmp & 0x30000) >> 16);
    *(volatile u32 *)0x04000000 = tmp & ~0x30000;
    func_0200f1bc();
}

void func_02002790(void) {
    data_02145ba0 = 1;
    if (data_0215cd20 != 0) {
        *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x30000) | (data_0215cd20 << 16);
    } else {
        *(volatile u32 *)0x04000000 |= 0x10000;
    }
}

void func_020027d4(u32 dispMode, u32 bgMode, u32 bg0_2d3d) {
    u32 cnt = *(volatile u32 *)0x04000000;
    data_0215cd20 = (u16)dispMode;
    if (data_02145ba0 == 0) {
        dispMode = 0;
    }
    *(volatile u32 *)0x04000000 = (cnt & 0xfff0fff0) | (dispMode << 16) | bgMode | (bg0_2d3d << 3);
    if (data_0215cd20 == 0) {
        data_02145ba0 = 0;
    }
}

void func_0200283c(u32 arg0) {
    *(volatile u32 *)0x04001000 = (*(volatile u32 *)0x04001000 & ~7) | arg0;
}

void func_02002920(u32 *arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    *arg0 = (arg1 | 0x40) | (arg2 << 8) | ((arg3 | (arg4 << 8)) << 16);
}

extern void func_020055d4(void);
void func_02002bbc(void) {
    s32 v = 0x16;
    *(u32 *)0x4000400 = v;
    func_020055d4();
}

extern void func_020055b0(void *arg0);
extern void func_0200f1bc(void);
extern u16 data_0215cd20;
void func_02002bd8(void *arg0) {
    *(volatile u32 *)0x04000400 = 0x17;
    func_020055b0(arg0);
}

extern void func_02001d9c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 *arg7);
void func_02002bf4(void *arg0) {
    *(volatile u32 *)0x04000400 = 0x19;
    func_020055b0(arg0);
}

