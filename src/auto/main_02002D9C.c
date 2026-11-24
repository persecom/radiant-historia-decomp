/* 47 functions from 0x02002D9C to 0x02003D58 (main), found by ds-decomp. */
#include "common.h"

typedef struct Unk_020030f4 {
    u32 a, b, c, d;
} Unk_020030f4;

extern s32 data_02145ba4;
extern u32 func_02003188(void);
extern void func_02008690(s32, void *, u32, u32, s32);
extern void func_02008e08(void *, u32, u32);
extern void func_020030f4(void *);
extern s32 func_0200308c(s32 *);
extern s32 func_020030b8(s32 *);
extern void func_02008eec(void *, void *);
extern void func_02008738(s32, void *, u32, u32, s32, s32, s32);
extern void func_02008568(s32, void *, u32, u32, s32);
extern void func_02008e24(s32, void *, u32);
extern void *memset(void *, int, u32);
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
    if (arg0) {
        *(volatile u16 *)0x0400035c = arg3;
        *(volatile u16 *)0x04000060 = (*(volatile u16 *)0x04000060 & ~0x3f40) | ((arg2 << 8) | (arg1 << 6) | 0x80);
    } else {
        *(volatile u16 *)0x04000060 &= 0xcf7f;
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

void func_02002f9c(void *arg0) {
    func_02008eec(arg0, (void *)0x04000360);
}

void func_02002fb0(u32 arg0, u32 arg1, u16 arg2, u32 arg3, s32 arg4) {
    u32 val = arg0 | (arg1 << 16) | (arg3 << 24);
    if (arg4) {
        val |= 0x8000;
    }
    *(volatile u32 *)0x04000350 = val;
    *(volatile u16 *)0x04000354 = arg2;
}

void func_02002fd8(void) {
    s32 i;
    if (data_02145ba4 != -1) {
        func_02008738(data_02145ba4, (void *)0x04000330, 0, 0x10, 0, 0, 1);
        func_02008568(data_02145ba4, (void *)0x04000360, 0, 0x60, 1);
    } else {
        func_02008e24(0, (void *)0x04000330, 0x10);
        func_02008e24(0, (void *)0x04000360, 0x60);
    }
    i = 0;
    for (; i < 0x20;) {
        *(volatile u32 *)0x040004d0 = i++;
    }
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

extern u32 func_02003454(void);
void func_02003ce8(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_02003454();
    if (data_02145ba4 != -1 && arg2 > 0x30) {
        func_020085ec(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e38(arg0, base + arg1, arg2);
    }
}

void func_020030e4(u32 arg0) {
    *(volatile u32 *)0x04000010 = arg0;
}

void func_020030f4(void *arg0) {
    s32 i;
    for (i = 0; i < 0x80; i++) {
        ((u32 *)arg0)[i] = 0;
    }
}

u32 func_02003188(void) {
    u16 b = *(volatile u16 *)0x04000008;
    u32 a = (*(volatile u32 *)0x04000000 & 0x38000000) >> 27;
    u32 v = a << 16;
    v += 0x06000000;
    v += ((b & 0x1f00) >> 8) << 11;
    return v;
}

u32 func_020031bc(void) {
    u16 v = *(volatile u16 *)0x04001008;
    return 0x06200000 + (((v & 0x1f00) >> 8) << 11);
}

u32 func_020031dc(void) {
    s32 offset = (*(volatile u16 *)0x0400000a & 0x1f00) >> 8;
    u32 base = ((*(volatile u32 *)0x04000000 & 0x38000000) >> 27) << 16;
    return 0x06000000 + base + (offset << 11);
}

u32 func_02003210(void) {
    s32 offset = (*(volatile u16 *)0x0400100a & 0x1f00) >> 8;
    return 0x06200000 + (offset << 11);
}

u32 func_02003230(void) {
    volatile u8 *reg = (volatile u8 *)0x04000000;
    u32 mode = *(volatile u32 *)reg & 7;
    u16 cnt = *(volatile u16 *)(reg + 0xc);
    u32 base = ((*(volatile u32 *)reg & 0x38000000) >> 27) << 16;
    u32 offset = (u32)(cnt & 0x1f00) >> 8;
    switch (mode) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        return 0x06000000 + base + (offset << 11);
    case 5:
        if (cnt & 0x80) {
            return 0x06000000 + (offset << 14);
        } else {
            return 0x06000000 + base + (offset << 11);
        }
    case 6:
        return 0x06000000;
    default:
        return 0;
    }
}

u32 func_020032b4(void) {
    volatile u8 *reg = (volatile u8 *)0x04001000;
    u32 mode = *(volatile u32 *)reg & 7;
    u16 cnt = *(volatile u16 *)(reg + 0xc);
    u32 offset = (u32)(cnt & 0x1f00) >> 8;
    switch (mode) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        return 0x06200000 + (offset << 11);
    case 5:
        if (cnt & 0x80) {
            return 0x06200000 + (offset << 14);
        } else {
            return 0x06200000 + (offset << 11);
        }
    case 6:
        return 0;
    default:
        return 0;
    }
}

u32 func_02003328(void) {
    volatile u8 *reg = (volatile u8 *)0x04000000;
    u32 mode = *(volatile u32 *)reg & 7;
    u16 cnt = *(volatile u16 *)(reg + 0xe);
    u32 base = ((*(volatile u32 *)reg & 0x38000000) >> 27) << 16;
    u32 offset = (u32)(cnt & 0x1f00) >> 8;
    switch (mode) {
    case 0:
    case 1:
    case 2:
        return 0x06000000 + base + (offset << 11);
    case 3:
    case 4:
    case 5:
        if (cnt & 0x80) {
            return 0x06000000 + (offset << 14);
        } else {
            return 0x06000000 + base + (offset << 11);
        }
    case 6:
        return 0;
    default:
        return 0;
    }
}

u32 func_020033ac(void) {
    volatile u8 *reg = (volatile u8 *)0x04001000;
    u32 mode = *(volatile u32 *)reg & 7;
    u16 cnt = *(volatile u16 *)(reg + 0xe);
    u32 offset = (u32)(cnt & 0x1f00) >> 8;
    switch (mode) {
    case 0:
    case 1:
    case 2:
        return 0x06200000 + (offset << 11);
    case 3:
    case 4:
    case 5:
        if (cnt & 0x80) {
            return 0x06200000 + (offset << 14);
        } else {
            return 0x06200000 + (offset << 11);
        }
    case 6:
        return 0;
    default:
        return 0;
    }
}

u32 func_02003420(void) {
    s32 offset = (*(volatile u16 *)0x04000008 & 0x3c) >> 2;
    u32 base = ((*(volatile u32 *)0x04000000 & 0x07000000) >> 24) << 16;
    return 0x06000000 + base + (offset << 14);
}

u32 func_02003454(void) {
    s32 offset = (*(volatile u16 *)0x04001008 & 0x3c) >> 2;
    return 0x06200000 + (offset << 14);
}

u32 func_02003474(void) {
    s32 offset = (*(volatile u16 *)0x0400000a & 0x3c) >> 2;
    u32 base = ((*(volatile u32 *)0x04000000 & 0x07000000) >> 24) << 16;
    return 0x06000000 + base + (offset << 14);
}

u32 func_020034a8(void) {
    s32 offset = (*(volatile u16 *)0x0400100a & 0x3c) >> 2;
    return 0x06200000 + (offset << 14);
}

u32 func_020034c8(void) {
    s32 mode = *(volatile u32 *)0x04000000 & 7;
    u16 cnt = *(volatile u16 *)0x0400000c;
    if (mode < 5 || !(cnt & 0x80)) {
        u32 base = ((*(volatile u32 *)0x04000000 & 0x07000000) >> 24) << 16;
        u32 offset = (u32)(cnt & 0x3c) >> 2;
        return 0x06000000 + base + (offset << 14);
    }
    return 0;
}

u32 func_02003518(void) {
    volatile u8 *reg = (volatile u8 *)0x04001000;
    s32 mode = *(volatile u32 *)reg & 7;
    u16 cnt = *(volatile u16 *)(reg + 0xc);
    if (mode < 5 || !(cnt & 0x80)) {
        u32 offset = (u32)(cnt & 0x3c) >> 2;
        return 0x06200000 + (offset << 14);
    }
    return 0;
}

s32 func_0200308c(s32 *arg0) {
    if (*(volatile u32 *)0x04000600 & 0x4000) {
        return -1;
    }
    *arg0 = (*(volatile u32 *)0x04000600 & 0x1f00) >> 8;
    return 0;
}

s32 func_020030b8(s32 *arg0) {
    if (*(volatile u32 *)0x04000600 & 0x4000) {
        return -1;
    }
    *arg0 = (*(volatile u32 *)0x04000600 & 0x2000) >> 13;
    return 0;
}

