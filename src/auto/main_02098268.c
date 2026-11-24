/* 10 functions from 0x02098268 to 0x02098A28 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u16 f0;
    u16 f1;
} Pair16;

extern s16 *data_0216011c;
extern Pair16 data_02141fdc[6];
extern Pair16 data_0214200c[8];
extern Pair16 data_0214202c[10];

void func_02098694(u32 arg0) {
    u8 *out = (u8 *)data_0216011c;
    u16 buf[16];
    u16 *src = (u16 *)data_0214200c;
    u16 *dst = buf;
    u32 n = 8;
    u32 idx;
    s16 v0, v1;
    do {
        dst[1] = src[1];
        dst[0] = src[0];
        src += 2;
        dst += 2;
    } while (--n != 0);
    if (arg0 == 4 || arg0 == 6) {
        return;
    }
    idx = (arg0 << 17) >> 16;
    v0 = ((s16 *)buf)[idx];
    v1 = ((s16 *)buf)[idx + 1];
    *(s16 *)(out + 0x3a) = v0;
    *(s16 *)(out + 0x3c) = v1;
}

void func_02098710(u32 arg0) {
    u8 *out = (u8 *)data_0216011c;
    u16 buf[20];
    u16 *src = (u16 *)data_0214202c;
    u16 *dst = buf;
    u32 n = 10;
    u32 idx;
    s16 v0, v1;
    do {
        dst[1] = src[1];
        dst[0] = src[0];
        src += 2;
        dst += 2;
    } while (--n != 0);
    idx = (arg0 << 17) >> 16;
    v0 = ((s16 *)buf)[idx];
    v1 = ((s16 *)buf)[idx + 1];
    *(s16 *)(out + 0x3a) = v0;
    *(s16 *)(out + 0x3c) = v1;
}

void func_0209877c(u16 arg0) {
    u8 *out = (u8 *)data_0216011c;
    struct Table24 { s16 v[12]; } buf = *(const struct Table24 *)data_02141fdc;
    u16 idx = arg0 * 2;
    s16 v0 = buf.v[idx];
    s16 v1 = buf.v[idx + 1];
    *(s16 *)(out + 0x3a) = v0;
    *(s16 *)(out + 0x3c) = v1;
}

extern Pair16 data_02141ff4[6];
void func_020987e8(u16 arg0) {
    u8 *out = (u8 *)data_0216011c;
    struct Table24 { s16 v[12]; } buf = *(const struct Table24 *)data_02141ff4;
    u16 idx = arg0 * 2;
    s16 v0 = buf.v[idx];
    s16 v1 = buf.v[idx + 1];
    *(s16 *)(out + 0x3a) = v0;
    *(s16 *)(out + 0x3c) = v1;
}

extern Pair16 data_02141fc4[6];
void func_02098854(u16 arg0) {
    u8 *out = (u8 *)data_0216011c;
    struct Table24 { s16 v[12]; } buf = *(const struct Table24 *)data_02141fc4;
    u16 idx = arg0 * 2;
    s16 v0 = buf.v[idx];
    s16 v1 = buf.v[idx + 1];
    *(s16 *)(out + 0x3a) = v0;
    *(s16 *)(out + 0x3c) = v1;
}

void func_020988c0(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}
