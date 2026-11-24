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
