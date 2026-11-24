/* 34 functions from 0x020101F8 to 0x020111D4 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_0215fa20[3];
extern u8 data_0215f660[256];
extern u8 data_0215f120[1312];
extern void func_0200ff10(void *, s32, s32);
extern void func_02000b64(void *);
extern void func_0200f95c(void);
extern u32 func_0200fb6c(void);
extern void func_02008414(void);
extern void func_0200fd64(void *, s32, u32, u32);
extern void func_02010060(void);
extern void func_0200fca4(void (*)(void), u32);
extern void func_020101f8(void *);

extern void func_0200fb84(void);
void func_02010540(u32 **arg0) {
    func_0200ff10(arg0, 2, 1);
    (*arg0)[3] = 0;
    (*arg0)[4] = (u32)data_0215f660;
    (*arg0)[5] = 1;
    func_0200ff10(arg0, 6, 1);
}

void func_02010590(u32 arg0, u32 arg1, u32 arg2) {
    func_02000b64((void *)0x02000bac);
    func_0200f95c();
    if ((arg0 & func_0200fb6c()) != arg0) {
        func_02008414();
    }
    func_0200fd64(data_0215f120, 1, arg1, arg2);
}

void func_020105e0(u32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5, u32 arg6, u32 arg7, u32 arg8) {
    u32 flags = 1;
    if (arg8 != 0) {
        flags = 2;
    }
    func_02010590(flags, arg3, arg4);
    *(u32 *)(data_0215f120 + 0x4fc) = arg0;
    *(u32 *)(data_0215f120 + 0x500) = arg1;
    *(u32 *)(data_0215f120 + 0x504) = arg2;
    *(u32 *)(data_0215f120 + 0x510) = arg6;
    *(u32 *)(data_0215f120 + 0x514) = arg7;
    *(u32 *)(data_0215f120 + 0x518) = arg8;
    func_0200fca4(func_02010060, arg5);
}

void func_0201064c(void *arg0) {
    if (arg0 == NULL) {
        func_02008414();
    }
    func_02010590(0, 0, 0);
    func_020101f8(arg0);
    func_0200fca4((void (*)(void))func_02010540, 0);
}

extern void func_020101f8(void *);
u32 func_0201068c(void) {
    return *(u32 *)(*(u8 **)data_0215f120 + 0x1c);
}

void func_020106a0(void) {
    func_0200fb84();
}

extern void func_0200fba4(void);
void func_020106ac(void) {
    func_0200fba4();
}

void func_020106b8(u32 arg0, u32 arg1) {
    u32 cmd0 = (arg1 >> 8) | (arg0 << 24);
    u32 cmd1 = arg1 << 24;
    while (*(volatile u32 *)0x40001a4 & 0x80000000) {
    }
    *(volatile u16 *)0x40001a0 = (*(volatile u16 *)0x40001a0 & ~0x2000) | 0xc000;
    *(volatile u32 *)0x40001a8 = ((cmd0 & 0xff000000) >> 24) | ((cmd0 & 0x00ff0000) >> 8) | ((cmd0 & 0x0000ff00) << 8) | (cmd0 << 24);
    *(volatile u32 *)0x40001ac = ((cmd1 & 0xff000000) >> 24) | ((cmd1 & 0x00ff0000) >> 8) | ((cmd1 & 0x0000ff00) << 8) | (cmd1 << 24);
}

void func_02010738(u32 arg0) {
    func_020106b8(0xb7, arg0);
    *(volatile u32 *)0x40001a4 = (*(volatile u32 *)0x2fffae0 & ~0x07000000) | 0xa1000000;
}

void func_02010e40(void) {
    func_0200fb84();
}

extern u32 data_0215fa20[3];
extern u8 data_0215f660[256];
extern u8 data_0215f120[1312];
extern void func_0200ff10(void *, s32, s32);
extern void func_02000b64(void *);
extern void func_0200f95c(void);
extern u32 func_0200fb6c(void);
extern void func_02008414(void);
extern void func_0200fd64(void *, s32, u32, u32);
extern void func_02010060(void);
extern void func_0200fca4(void (*)(void), u32);
u32 func_02010f10(void) {
    return data_0215fa20[1];
}

