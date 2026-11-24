/* 35 functions from 0x02000000 to 0x02000F44 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02160204;

typedef struct { u32 v; } OneWord;
typedef struct { u32 a, b, c, d; } FourWords;
typedef struct { s32 v[4]; } Mat4;

void func_02110000(void);
void func_021100d8(void);
void func_02008414(void);
void func_0200093c(u32 data, OneWord *dest, u32 size) {
    OneWord *end = (OneWord *)((u8 *)dest + size);
    while (dest < end) {
        dest->v = data;
        dest++;
    }
}

void AutoloadCallback(void) {
}

void func_02000b60(void) {
}

void func_02000b64(void) {
}

int main(void) {
    if (data_02160204 == 0) {
        func_02110000();
        func_021100d8();
        func_02008414();
    }
    return 0;
}

void func_02000bec(FourWords *p) {
    p->a = 0x1000;
    p->b = 0;
    p->c = 0;
    p->d = 0x1000;
}

void func_02000c04(s32 *a, s32 *b, s32 *out) {
    s32 tmp[4];
    s32 *dst = (out == b) ? tmp : out;
    dst[0] = (s32)(((s64)a[1] * b[2] + (s64)a[0] * b[0]) >> 12);
    dst[1] = (s32)(((s64)a[1] * b[3] + (s64)a[0] * b[1]) >> 12);
    dst[2] = (s32)(((s64)a[3] * b[2] + (s64)a[2] * b[0]) >> 12);
    dst[3] = (s32)(((s64)a[3] * b[3] + (s64)a[2] * b[1]) >> 12);
    if (dst == tmp) {
        out[0] = tmp[0];
        out[1] = tmp[1];
        out[2] = tmp[2];
        out[3] = tmp[3];
    }
}

