/* 33 functions from 0x02118234 to 0x021191F0 (main), found by ds-decomp. */
#include "common.h"

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

extern void func_02118efc(void *);
void func_02118eec(u32 *arg0, u32 arg1) {
    *arg0 = arg1;
    func_02118efc(arg0);
}

extern void func_02117e4c(void *);
extern void func_02118f24(void *);
void func_021190bc(void *arg0) {
    func_02117e4c(arg0);
    func_02118f24(arg0);
}

