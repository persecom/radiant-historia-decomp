/* 15 functions from 0x0207A6B8 to 0x0207B398 (main), found by ds-decomp. */
#include "common.h"

extern void *data_021600ac;
extern void *data_021600f0;
extern void *data_02160200;

void func_0206e8f0(s32, void *, s32);
void func_0210d27c(s32);

typedef struct {
    s32 x, y, z;
} Vec3_0207adbc;

void func_0207adbc(void *arg0) {
    u8 *p = *(u8 **)((u8 *)data_021600f0 + 8);
    u8 *q;
    p[0] = 1;
    *(u16 *)(p + 0x14) = *(u16 *)((u8 *)arg0 + 0x90);
    *(u16 *)(p + 2) = 0x18;
    func_0206e8f0(0x11, arg0, 2);
    q = *(u8 **)((u8 *)data_021600ac + 0x68);
    *(Vec3_0207adbc *)(q + 0x24) = *(Vec3_0207adbc *)q;
    *(s32 *)((u8 *)data_021600ac + 0x888) = 1;
    func_0210d27c(0x8d);
}

BOOL func_0207ae24(void) {
    return (*(u8 **)((u8 *)data_021600f0 + 8))[0] == 1;
}

void func_0207af60(void) {
    u8 *p = *(u8 **)((u8 *)data_021600f0 + 8);
    u8 *q = *(u8 **)((u8 *)data_021600f0 + 4);
    u8 *ac;
    if (p[0] == 1) {
        *((u8 *)data_021600ac + 0x879) = 1;
    }
    p[0] = 0;
    *(u16 *)(p + 2) = 0;
    *(u16 *)(p + 0x14) = 0;
    q[0] = 0;
    ac = data_021600ac;
    if (ac != NULL) {
        u8 *sub = *(u8 **)(ac + 0x68);
        if (sub != NULL) {
            *(u32 *)(sub + 0xac) &= ~0x0a000000;
        }
    }
}

void func_0207b214(void) {
}

void func_0207b218(void) {
    u32 arr[4];
    u32 flags;
    if (data_021600f0 == NULL) {
        return;
    }
    flags = *(u32 *)((u8 *)data_02160200 + 0x34);
    arr[0] = flags & 0x10;
    arr[1] = flags & 0x8;
    arr[2] = flags & 0x20;
    arr[3] = flags & 0x40;
    if (arr[2] == 0 && arr[3] == 0 && arr[1] == 0 && arr[0] == 0) {
        return;
    }
    while (arr[*(u8 *)data_021600f0] == 0) {
        if (*(u8 *)data_021600f0 != 0) {
            (*(u8 *)data_021600f0)--;
        } else {
            *(u8 *)data_021600f0 = 3;
        }
    }
}

