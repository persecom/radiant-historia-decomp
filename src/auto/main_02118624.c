/* 33 functions from 0x02118234 to 0x021191F0 (main), found by ds-decomp. */
#include "common.h"

extern void func_02117df4(void *);
extern s32 func_02117d80(void *);
extern s32 func_02117d74(void *, void *);
extern u8 data_0216f234[16];
extern u8 data_0216f3d4[];
extern u8 data_0216f3d8[];
extern u8 data_0216f3c4[];
extern u8 data_0216f6c4[];
extern u32 data_0216f244[];
typedef struct {
    u32 w[6];
} S_02119150;

extern void func_02118234(void *);
extern void func_02118430(void *);

extern void func_02006dc4(void *, u32);
extern void func_0200439c(void);
extern void func_020043f8(void *, u32, u32);
extern void func_02004544(void);
extern void func_02003830(void *, u32, u32);
extern void func_02003894(void *, u32, u32);

void func_02118624(void *arg0, u32 arg1, s32 arg2, void *arg3) {
    u32 mapType = *(u32 *)((u8 *)arg0 + 8);
    u32 zero = 0;

    switch (arg2) {
        case 0:
            break;
        case 1:
            *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & 0xffcfffef) | mapType;
            break;
        case 2:
            *(volatile u32 *)0x04001000 = (*(volatile u32 *)0x04001000 & 0xffcfffef) | mapType;
            break;
    }

    func_02006dc4(*(void **)((u8 *)arg0 + 0x14), *(u32 *)((u8 *)arg0 + 0x10));

    switch (arg2) {
        case 0:
            func_0200439c();
            func_020043f8(*(void **)((u8 *)arg0 + 0x14), arg1, *(u32 *)((u8 *)arg0 + 0x10));
            func_02004544();
            break;
        case 1:
            func_02003830(*(void **)((u8 *)arg0 + 0x14), arg1, *(u32 *)((u8 *)arg0 + 0x10));
            break;
        case 2:
            func_02003894(*(void **)((u8 *)arg0 + 0x14), arg1, *(u32 *)((u8 *)arg0 + 0x10));
            break;
    }

    if (*(u32 *)((u8 *)arg0 + 8) == 0) {
        u32 val;
        switch (*(u16 *)((u8 *)arg0 + 2)) {
            case 1: val = 0; break;
            case 2: val = 1; break;
            case 4: val = 2; break;
            case 8: val = 3; break;
            case 16: val = 4; break;
            case 32: val = 5; break;
            default: val = 0; break;
        }
        *(u32 *)((u8 *)arg3 + 0xc) = val;

        switch (*(u16 *)((u8 *)arg0 + 0)) {
            case 1: val = 0; break;
            case 2: val = 1; break;
            case 4: val = 2; break;
            case 8: val = 3; break;
            case 16: val = 4; break;
            case 32: val = 5; break;
            default: val = 0; break;
        }
        *(u32 *)((u8 *)arg3 + 0x10) = val;
    } else {
        *(u32 *)((u8 *)arg3 + 0xc) = *(u16 *)((u8 *)arg0 + 2);
        *(u32 *)((u8 *)arg3 + 0x10) = *(u16 *)((u8 *)arg0 + 0);
    }

    *(u32 *)((u8 *)arg3 + 0x14) = *(u32 *)((u8 *)arg0 + 4);
    *(u32 *)((u8 *)arg3 + 0x18) = zero;
    *(u32 *)((u8 *)arg3 + 0x1c) = 1;
    *(u32 *)((u8 *)arg3 + 0x20) = *(u32 *)((u8 *)arg0 + 8);
    func_021185b0((s32 *)arg3, arg2, (s32)arg1);
}

void func_02118e68(s32 *arg0) {
    s32 i;
    for (i = 0; i < 3; i++) {
        arg0[i] = -1;
    }
}

void func_02118e84(s32 *arg0, s32 arg1, s32 arg2) {
    arg0[arg1] = arg2;
}

s32 func_02118e8c(s32 *arg0, s32 arg1) {
    return arg0[arg1];
}

void func_02118e94(u8 *arg0, u16 arg1, u16 arg2) {
    if (*(s32 *)arg0 == 1) {
        *(u16 *)(arg0 + 0xc) = arg1;
        *(u16 *)(arg0 + 0xe) = arg2;
        *(u16 *)(arg0 + 0x12) |= 8;
    }
}

void func_02118eb4(u8 *arg0, u16 arg1) {
    if (*(s32 *)arg0 == 1) {
        *(u16 *)(arg0 + 0x10) = arg1;
        *(u16 *)(arg0 + 0x12) |= 4;
    }
}

void func_02118ed0(u8 *arg0, u32 arg1, u32 arg2) {
    if (*(s32 *)arg0 == 1) {
        *(u32 *)(arg0 + 4) = arg1;
        *(u32 *)(arg0 + 8) = arg2;
        *(u16 *)(arg0 + 0x12) |= 2;
    }
}

extern void func_02118efc(void *);
extern void func_02008df0(s32, void *, s32);
extern void func_02117d9c(void *);
extern void func_0211a5fc(void *, s32, s32, s32, u32, s32, s32, s32);
extern void func_021190bc(void *, void *);
void func_02118eec(u32 *arg0, u32 arg1) {
    *arg0 = arg1;
    func_02118efc(arg0);
}

void func_02118efc(void *arg0) {
    u8 *p = (u8 *)arg0;
    func_02008df0(0, p + 4, 0x18);
    *(s32 *)(p + 4) = 0x1000;
    *(s32 *)(p + 8) = 0x1000;
}

void func_02119000(u8 *arg0, void *arg1, void *arg2) {
    u8 *p = arg0;
    *(void **)(p + 0x34) = arg2;
    *(s32 *)(p + 0x38) = -1;
    func_02118eec((u32 *)(p + 0x3c), 1);
    func_02117d9c(p);
    func_021190bc(p, arg1);
}

void func_0211903c(u8 *arg0, void *arg1, u8 *arg2, void *arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9) {
    func_0211a5fc(arg3, arg4, arg5, arg6, **(u32 **)(arg2 + 0xc), arg7, arg8, arg9);
    *(void **)(arg0 + 0x34) = arg2;
    *(void **)(arg0 + 0x38) = arg3;
    func_02118eec((u32 *)(arg0 + 0x3c), 1);
    func_02117d9c(arg0);
    func_021190bc(arg0, arg1);
}

extern void func_02117e4c(void *, void *);
extern void func_02118f24(void *);
void func_021190bc(void *arg0, void *arg1) {
    func_02117e4c(arg0, arg1);
    func_02118f24(arg0);
}

extern s32 func_02117be0(void *);
extern void func_02008df0(s32, void *, s32);
extern void func_02117d9c(void *);
extern void func_0211a5fc(void *, s32, s32, s32, u32, s32, s32, s32);
void func_02119110(void *arg0) {
    if (func_02117be0(arg0) != 0) {
        func_02118f24(arg0);
    }
}

void func_02119130(u8 *arg0) {
    func_02117df4(arg0);
    *(u32 *)(arg0 + 0xc) = 1;
    func_02118f24(arg0);
}

