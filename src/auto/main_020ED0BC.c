/* 5 functions from 0x020ED0BC to 0x020EE098 (main), found by ds-decomp. */
#include "common.h"

typedef struct UnkF_020ed3a4 {
    u8 unk00[4];
    u16 unk04;
} UnkF_020ed3a4;

typedef struct UnkE_020ed3a4 {
    u16 count;
    u8 unk02[2];
    UnkF_020ed3a4 *items;
} UnkE_020ed3a4;

extern s32 func_0201f884(s32);
extern s32 func_02020888(s32, s32);
extern s32 func_020201f4(s32, s32);
extern s32 func_0201ff0c(s32);

void func_020ed3a4(void *arg0, s32 arg1, s32 arg2) {
    u8 *a;
    u8 *c;
    u8 *d;
    UnkE_020ed3a4 *e;
    UnkF_020ed3a4 *f;
    u16 count;
    u16 n;
    s32 i;
    u16 j;
    s32 base;
    s32 tmp;
    s32 v;

    a = arg0;
    base = arg1 + (arg2 << 5);
    c = *(u8 **)(*(u8 **)a + 0x58);
    d = *(u8 **)(c + 4);
    count = *(u16 *)d;
    if ((s32)count <= 0) return;
    for (i = 0; i < (s32)count; i++) {
        e = (UnkE_020ed3a4 *)(*(u8 **)(d + 4) + i * 8);
        n = e->count;
        if ((s32)n <= 0) continue;
        for (j = 0; j < n; j++) {
            f = e->items + j;
            f->unk04 = (u16)(f->unk04 + (u16)base);
            tmp = f->unk04;
            tmp = tmp % 0x1000;
            tmp = tmp % 0x400;
            tmp = tmp / 0x10;
            func_0201f884(tmp);
            func_02020888(0x40000000, 0);
            v = func_0201ff0c(func_020201f4(0x42000000, 0));
            f->unk04 = (u16)(f->unk04 + (u16)(v - base));
        }
    }
}
