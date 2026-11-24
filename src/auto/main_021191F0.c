/* 15 functions from 0x021191F0 to 0x0211A178 (main), found by ds-decomp. */
#include "common.h"
typedef struct {
    u16 f0;
    u16 f2;
    u32 f4;
    u32 f8;
    u32 fc;
} Struct0216f234;

typedef struct {
    u16 f0;
    u16 f2;
    u16 f4;
    u16 f6;
} Struct0216f2c4;

typedef struct {
    u32 a;
    u32 b;
    u32 c;
    u32 d;
} Struct16;

typedef struct {
    u32 f0[4];
    u8 f10[0x10];
} Struct0216f9c4;

extern Struct0216f234 data_0216f234;
extern Struct0216f2c4 data_0216f2c4[];
extern Struct0216f9c4 data_0216f9c4[];
extern u8 data_0216f6c4[];
extern u8 data_0216f3d4[];
extern u8 data_02155eb0[];
extern u8 data_0216f3d8[];
extern u32 data_02155eb8[];
extern void func_02008e68(s32, void *, s32);

static inline void MI_CpuFill32(void *dest, u32 data, u32 size) {
    func_02008e68((s32)data, dest, (s32)size);
}

void func_021191f0(void) {
    Struct0216f2c4 *entry;
    u16 f2;
    u16 f0;
    u32 *src;
    u32 (*tbl)[8];
    u16 k;
    s32 i;
    s32 idx;
    s32 ok;
    u8 *fill;

    entry = &data_0216f2c4[(u16)data_0216f234.fc];
    ok = (entry->f4 == 1 || entry->f4 == 2);
    if (!ok) {
        return;
    }

    f2 = entry->f2;
    f0 = data_0216f234.f0;
    if (f0 < 0x1f) {
        data_0216f234.f0 = f0 + 1;
    }
    entry->f0 = f0;
    fill = (u8 *)&data_0216f9c4[f0];
    func_02008e68(-1, fill + 0x10, 0x10);

    idx = data_0216f234.fc;
    if (data_0216f234.f4 == 0) {
        src = (u32 *)(data_0216f6c4 + idx * 0x18);
    } else {
        *(volatile u32 *)(data_02155eb0 + 0x18) = *(volatile u32 *)(data_0216f3d4 + idx * 0x18);
        *(volatile u32 *)(data_02155eb0 + 0x1c) = *(volatile u32 *)(data_0216f3d8 + idx * 0x18);
        src = data_02155eb8;
    }

    tbl = (u32 (*)[8])data_0216f9c4;
    k = data_0216f2c4[(u16)idx].f0;
    tbl[k][0] = src[0];
    tbl[k][1] = src[1];
    i = (u16)data_0216f234.fc;
    tbl[k][2] = src[2];
    tbl[k][3] = src[3];

    while (i >= 0) {
        if (f2 != data_0216f2c4[i].f2) {
            return;
        }
        data_0216f2c4[i].f4 = 3;
        data_0216f2c4[i].f0 = f0;
        i--;
    }
}

void func_02119d38(void *arg0, void **arg1) {
    arg1[0xc] = *(void **)((u8 *)arg0 + 0x70);
    *(void **)((u8 *)arg0 + 0x70) = arg1;
}

