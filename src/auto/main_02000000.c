/* 35 functions from 0x02000000 to 0x02000F44 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02160204;

typedef struct { u32 v; } OneWord;
typedef struct { u32 a, b, c, d; } FourWords;
typedef struct { s32 v[4]; } Mat4;
typedef struct { s32 v[4]; } MatA;
typedef struct { s32 v[9]; } Mtx9;
typedef struct { s32 a0; s32 a1, a2; s32 a3, a4; s32 a5, a6, a7, a8; } MtxFields;
typedef struct { u32 x, y; } Pair;
typedef union { u32 u; struct { u32 pad : 12; u32 val : 20; } b; } FX;

void func_02110000(void);
void func_021100d8(void);
void func_02008414(void);
void func_0200093c(u32 data, void *dest, u32 size) {
    u32 *p = (u32 *)dest;
    u32 *end = (u32 *)((u8 *)dest + size);
    while (p < end) {
        *p++ = data;
    }
}

void AutoloadCallback(void) {
}

void func_02000b60(void) {
}

void func_02000b64(void) {
}

void main(void) {
    if (data_02160204 == 0) {
        func_02110000();
    }
    func_021100d8();
    func_02008414();
}

void func_02000bec(FourWords *p) {
    p->a = 0x1000;
    p->b = 0;
    p->c = 0;
    p->d = 0x1000;
}

void func_02000c04(const MatA *a, Mat4 *b, Mat4 *out) {
    Mat4 tmp;
    Mat4 *dst;
    s32 av0, av1, av2, av3;
    av1 = *(const s32 *)((const u8 *)a + 4);
    av0 = *(const s32 *)((const u8 *)a + 0);
    av3 = *(const s32 *)((const u8 *)a + 12);
    av2 = *(const s32 *)((const u8 *)a + 8);
    dst = &tmp;
    if (out != b) dst = out;
    dst->v[0] = (s32)(((s64)av0 * b->v[0] + (s64)av1 * b->v[2]) >> 12);
    dst->v[1] = (s32)(((s64)av0 * b->v[1] + (s64)av1 * b->v[3]) >> 12);
    dst->v[2] = (s32)(((s64)av2 * b->v[0] + (s64)av3 * b->v[2]) >> 12);
    dst->v[3] = (s32)(((s64)av2 * b->v[1] + (s64)av3 * b->v[3]) >> 12);
    if (dst == &tmp) {
        *out = tmp;
    }
}

void func_02000cb4(u64 *p) {
    p[4] = 0x1000ULL;
    p[0] = 0x0000000000001000ULL;
    p[1] = 0;
    p[2] = 0x0000000000001000ULL;
    p[3] = 0;
}

void func_02000da0(s32 *p, s32 a, s32 b) {
    p[0] = 1 << 12;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = b;
    p[5] = a;
    p[6] = 0;
    p[7] = -a;
    p[8] = b;
}

void func_02000dbc(s32 *p, s32 a, s32 b) {
    p[0] = b;
    p[8] = b;
    p[1] = 0;
    p[3] = 0;
    p[5] = 0;
    p[7] = 0;
    p[6] = a;
    p[2] = -a;
    p[4] = 1 << 12;
}

void func_02000dd8(MtxFields *p, s32 a, s32 b) {
    p->a0 = b;
    p->a1 = a;
    p->a2 = 0;
    p->a3 = -a;
    p->a4 = b;
    p->a5 = 0;
    p->a6 = 0;
    p->a7 = 0;
    p->a8 = 1 << 12;
}

