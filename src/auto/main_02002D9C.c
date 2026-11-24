/* 47 functions from 0x02002D9C to 0x02003D58 (main), found by ds-decomp. */
#include "common.h"

extern s32 data_02145ba4;
extern u32 func_02003188(void);
extern void func_02008690(s32, void *, u32, u32, s32);
extern void func_02008e08(void *, u32, u32);
extern void func_020030f4(void *);
extern s32 func_0200308c(s32 *);
extern s32 func_020030b8(s32 *);
extern u32 func_02003420(void);
extern void func_020085ec(s32, void *, u32, u32, s32);
extern void func_02008e38(void *, u32, u32);
extern void func_02008f48(void *, void *);
extern void func_02008f08(void *, void *);

void func_02002d9c(void) {
    func_020030f4((void *)0x04000400);
    while (*(volatile u32 *)0x04000600 & 0x08000000) {
    }
}

void func_02002dc0(void) {
    s32 sp4;
    s32 sp0;

    *(volatile u32 *)0x04000600 |= 0x8000;
    while (func_0200308c(&sp4)) {
    }
    while (func_020030b8(&sp0)) {
    }
    *(volatile u32 *)0x04000440 = 3;
    *(volatile u32 *)0x04000454 = 0;
    *(volatile u32 *)0x04000440 = 0;
    if (sp0 != 0) {
        *(volatile u32 *)0x04000448 = sp0;
    }
    *(volatile u32 *)0x04000454 = 0;
    *(volatile u32 *)0x04000440 = 2;
    *(volatile u32 *)0x04000448 = sp4;
    *(volatile u32 *)0x04000454 = 0;
}

void func_02002e58(void) {
    s32 sp4;
    s32 sp0;

    *(volatile u32 *)0x04000600 |= 0x8000;
    while (func_0200308c(&sp4)) {
    }
    while (func_020030b8(&sp0)) {
    }
    *(volatile u32 *)0x04000440 = 3;
    *(volatile u32 *)0x04000454 = 0;
    *(volatile u32 *)0x04000440 = 0;
    if (sp0 != 0) {
        *(volatile u32 *)0x04000448 = sp0;
    }
    *(volatile u32 *)0x04000440 = 2;
    *(volatile u32 *)0x04000448 = sp4;
    *(volatile u32 *)0x04000454 = 0;
}

void func_02002ee8(s32 arg0, u32 arg1, u32 arg2, u16 arg3) {
    if (arg0 == 0) {
        *(volatile u16 *)0x04000060 &= ~0x3080;
    } else {
        *(volatile u16 *)0x0400035c = arg3;
        *(volatile u16 *)0x04000060 = (*(volatile u16 *)0x04000060 & ~0x3f40) | (arg1 << 6) | (arg2 << 8) | 0x80;
    }
}

s32 func_02002f3c(void *arg0) {
    if (*(volatile u32 *)0x04000600 & 0x08000000) {
        return -1;
    }
    func_02008f48((void *)0x04000640, arg0);
    return 0;
}

s32 func_02002f6c(void *arg0) {
    if (*(volatile u32 *)0x04000600 & 0x08000000) {
        return -1;
    }
    func_02008f08((void *)0x04000680, arg0);
    return 0;
}

void func_020038f8(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_02003188();
    if (data_02145ba4 != -1 && arg2 > 0x1c) {
        func_02008690(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e08(arg0, base + arg1, arg2);
    }
}

extern u32 func_020031bc(void);
void func_02003968(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_020031bc();
    if (data_02145ba4 != -1 && arg2 > 0x1c) {
        func_02008690(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e08(arg0, base + arg1, arg2);
    }
}

extern u32 func_020031dc(void);
void func_020039d8(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_020031dc();
    if (data_02145ba4 != -1 && arg2 > 0x1c) {
        func_02008690(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e08(arg0, base + arg1, arg2);
    }
}

extern u32 func_02003210(void);
void func_02003a48(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_02003210();
    if (data_02145ba4 != -1 && arg2 > 0x1c) {
        func_02008690(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e08(arg0, base + arg1, arg2);
    }
}

extern u32 func_02003230(void);
void func_02003ab8(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_02003230();
    if (data_02145ba4 != -1 && arg2 > 0x1c) {
        func_02008690(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e08(arg0, base + arg1, arg2);
    }
}

extern u32 func_020032b4(void);
void func_02003b28(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_020032b4();
    if (data_02145ba4 != -1 && arg2 > 0x1c) {
        func_02008690(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e08(arg0, base + arg1, arg2);
    }
}

extern u32 func_02003328(void);
void func_02003b98(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_02003328();
    if (data_02145ba4 != -1 && arg2 > 0x1c) {
        func_02008690(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e08(arg0, base + arg1, arg2);
    }
}

extern u32 func_020033ac(void);
void func_02003c08(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_020033ac();
    if (data_02145ba4 != -1 && arg2 > 0x1c) {
        func_02008690(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e08(arg0, base + arg1, arg2);
    }
}

void func_02003c78(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_02003420();
    if (data_02145ba4 != -1 && arg2 > 0x30) {
        func_020085ec(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e38(arg0, base + arg1, arg2);
    }
}

