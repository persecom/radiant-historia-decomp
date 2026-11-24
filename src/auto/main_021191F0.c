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
extern u8 data_0216f3c4[];
extern u8 data_0216f3d4[];
extern u8 data_02155eb0[];
extern u8 data_0216f3d8[];
extern u32 data_02155eb8[];
extern void func_02008e68(s32, void *, s32);
extern void func_02008df0(u32, void *, u32);
typedef void (*Cb4_02119448)(void *, void *, s32, void *);
typedef void (*Cb5_02119694)(void *, void *, s32, s32, void *);

extern void func_0211c4ec(void *);
extern void func_02119150(void);
extern void func_0211c738(void);
extern void *func_0211ab38(void);
extern void func_0211ab04(u32);
extern void func_0211ab28(void *);
extern void func_0211ab14(void);
extern void func_02119b34(u32);
extern void func_02119334(void);
extern void func_02119448();
extern void func_021194cc(void);
extern void func_02119694();

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

void func_02119c80(u8 *arg0) {
    s32 i;
    func_0211c4ec(arg0);
    *(u32 *)(arg0 + 0x70) = 0;
    *(u32 *)(arg0 + 0x74) = 0;
    *(u32 *)(arg0 + 0x78) = 0;
    *(u32 *)(arg0 + 0x7c) = 0;
    *(u32 *)(arg0 + 0x80) = 0;
    *(u32 *)(arg0 + 0x84) = 0;
    *(u16 *)(arg0 + 0x88) = 0;
    *(u16 *)(arg0 + 0x8a) = 0;
    *(u32 *)(arg0 + 0x8c) = 0;
    *(u32 *)(arg0 + 0x90) = 0;
    *(u16 *)(arg0 + 0x94) = 0;
    data_0216f234.fc = 0;
    *(u16 *)data_02155eb0 = 0xfffe;
    for (i = 0; i < 0x20; i++) {
        func_02008e68(-1, data_0216f9c4[i].f10, 0x10);
    }
    data_0216f234.f0 = 0;
    data_0216f234.f2 = 0;
    func_02008e68(0, data_0216f2c4, 0x100);
    data_0216f234.f4 = 0;
}

void func_02119d38(void *arg0, void **arg1) {
    arg1[0xc] = *(void **)((u8 *)arg0 + 0x70);
    *(void **)((u8 *)arg0 + 0x70) = arg1;
}

void func_02119d48(u8 *arg0) {
    func_02008df0(0, arg0, 0x48);
    *(s32 *)(arg0 + 0x10) = 1;
    *(s32 *)(arg0 + 0x14) = 3;
    *(void **)(arg0 + 0x18) = func_02119334;
    *(void **)(arg0 + 0x1c) = func_02119448;
    *(void **)(arg0 + 0x20) = func_021194cc;
    *(void **)(arg0 + 0x24) = func_02119694;
}

void func_02119da4(u32 arg0) {
    s32 n;
    s32 i;
    data_0216f234.f8 = arg0;
    *(u16 *)data_02155eb0 = 0xfffe;
    data_0216f234.fc = 0;
    for (i = 0; i < (s32)data_0216f234.f0; i++) {
        MI_CpuFill32((u8 *)&data_0216f9c4[i] + 0x10, 0xffffffff, 0x10);
    }
    data_0216f234.f0 = 0;
    data_0216f234.f2 = 0;
    MI_CpuFill32(data_0216f2c4, 0, 0x100);
    *(u32 *)data_0216f2c4 = 0;
    *(u32 *)((u8 *)data_0216f2c4 + 0x10) = 0;
    func_02119150();
}

void func_02119e4c(void) {
    u32 flags;
    u8 *p;
    *(u32 *)0x4000448 = 1;
    p = (u8 *)data_0216f234.f8;
    flags = *(u32 *)(p + 0x7c);
    if (flags == 0) {
        goto done;
    }
    if (flags & 1) {
        data_0216f234.f4 = 0;
    }
    if (flags & 2) {
        *(u32 *)(p + 0x74) = 0;
        func_0211c738();
    }
    *(u32 *)((u8 *)data_0216f234.f8 + 0x7c) = 0;
done:
    data_0216f234.f8 = 0;
}

void func_02119eb8(u32 arg0) {
    void *x;
    if (*(void **)((u8 *)data_0216f234.f8 + 0x80) != NULL) {
        x = func_0211ab38();
        func_0211ab04(1);
        func_0211ab28(*(void **)((u8 *)data_0216f234.f8 + 0x80));
        func_02119b34(arg0);
        func_0211ab04(0);
        func_0211ab28(x);
        func_0211ab14();
        return;
    }
    func_02119b34(arg0);
}

void func_0211a128(void) {
    BOOL empty = ((s32)data_0216f234.fc <= 0);
    if (empty) {
        return;
    }
    data_0216f234.fc--;
    if (*(u16 *)data_02155eb0 > (s32)data_0216f234.fc) {
        *(u16 *)data_02155eb0 = 0xfffe;
    }
}

