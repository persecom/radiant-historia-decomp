/* 52 functions from 0x02008BF4 to 0x02009B24 (main), found by ds-decomp. */
#include "common.h"

extern u16 data_0215d1a0;
extern s32 func_02006afc(u16 *);
extern s32 func_02006b4c(u16 *);
typedef struct {
    u32 field_0;
    u32 field_4;
    u32 field_8;
    u32 field_c;
    u32 field_10;
    u32 field_14;
    u32 field_18;
    u32 field_1c;
} Data_215d17c;
extern Data_215d17c data_0215d17c;
extern void func_020058fc(u32, u32, u32);
extern void func_01ff845c(u32, u32, u32, u32, u32);
extern void func_02005a14(u32);
extern void func_020059e4(u32);
extern void func_020057e8(u32, u32);
extern void func_02008a28(u32, u32);
extern void func_02008ab4(u32, u32, u32, u32);
extern void func_0200893c(u32);
extern void func_02008ca8(void);
extern void func_02008dc4(void);
typedef void (*Fn_U32)(u32);
extern void func_02008558(s32);
extern void func_02008998(s32);
extern void func_020097a8(u32, s32, s32, s32);
typedef struct { u32 a[8]; } Copy32B;
typedef struct { u32 a[9]; } Copy36B;
typedef struct { u32 a[12]; } Copy48B;

void func_02008bf4(void) {
    u32 base;
    u32 size;
    u32 remaining;
    size = data_0215d17c.field_c;
    if (size == 0) return;
    base = data_0215d17c.field_8;
    if (size >= 0x1d8) size = 0x1d8;
    remaining = data_0215d17c.field_c - size;
    data_0215d17c.field_c = remaining;
    data_0215d17c.field_8 = base + size;
    if (remaining == 0) {
        func_020058fc(data_0215d17c.field_4, (u32)func_02008ca8, 0);
        func_01ff845c(data_0215d17c.field_4, base, 0x4000400, (-0x3bc00000) | (size >> 2), 0);
    } else {
        func_01ff845c(data_0215d17c.field_4, base, 0x4000400, 0x84400000 | (size >> 2), 0);
    }
    func_02005a14(0x200000);
}

void func_02008ca8(void) {
    Fn_U32 fn;
    u32 arg;
    func_020059e4(0x200000);
    *(volatile u32 *)0x04000600 = (*(volatile u32 *)0x04000600 & 0x3fffffff) | (data_0215d17c.field_18 << 30);
    func_020057e8(0x200000, data_0215d17c.field_1c);
    data_0215d17c.field_0 = 0;
    fn = (Fn_U32)data_0215d17c.field_10;
    arg = data_0215d17c.field_14;
    if (fn != NULL) {
        fn(arg);
    }
}

void func_02008d08(u32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    if (arg2 == 0) {
        if (arg3 != 0) {
            ((Fn_U32)arg3)(arg4);
        }
        return;
    }
    if (data_0215d17c.field_0 != 0) goto done;
    data_0215d17c.field_0 = 1;
    data_0215d17c.field_4 = arg0;
    data_0215d17c.field_10 = arg3;
    data_0215d17c.field_14 = arg4;
    func_02008a28(arg0, 0x38000000);
    func_02008ab4(arg0, arg1, arg2, 0);
    func_0200893c(arg0);
    func_020058fc(arg0, (u32)func_02008dc4, 0);
    func_01ff845c(arg0, arg1, 0x4000400, (-0x3c00000) | (arg2 >> 2), 0);
done:
    return;
}

void func_02008dc4(void) {
    void (*cb)(u32);
    u32 arg;
    data_0215d17c.field_0 = 0;
    cb = (void (*)(u32))data_0215d17c.field_10;
    arg = data_0215d17c.field_14;
    if (cb != NULL) {
        cb(arg);
    }
}

void func_02008df0(u16 val, u8 *dst, s32 size) {
    s32 i = 0;
    while (i < size) {
        *(u16 *)(dst + i) = val;
        i += 2;
    }
}

void func_02008e08(u8 *src, u8 *dst, s32 size) {
    s32 i = 0;
    while (i < size) {
        *(u16 *)(dst + i) = *(u16 *)(src + i);
        i += 2;
    }
}

void func_02008eec(const Copy32B *src, Copy32B *dst) {
    *dst = *src;
}

void func_02008f08(const Copy36B *src, Copy36B *dst) {
    *dst = *src;
}

void func_02008f24(const Copy48B *src, Copy48B *dst) {
    *dst = *src;
}

void func_02009138(u32 *dst) {
    u32 i;
    for (i = 0; i < 9; i++) {
        dst[i] = 0;
    }
}

u32 func_02009148(u32 val, u32 *ptr) {
    return __swp(val, ptr);
}

void func_0200942c(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    func_02008a28(arg0, ~0u);
    func_02008ab4(arg0, arg1, arg3, 0x1000000);
    if (arg3 == 0) {
        return;
    }
    {
        volatile u32 *reg = (volatile u32 *)(0x04000000 + 0xb0 + ((arg0 * 3) + 2) * 4);
        while (*reg & 0x80000000) {
        }
        func_01ff845c(arg0, arg1, arg2, 0xaf000001, 0);
    }
}

void func_020094a8(void) {
    func_02008558(3);
    func_02008998(0);
}

void func_020094c0(u32 arg0) {
    func_020097f0(1, arg0, 0, 0, 0);
}

void func_020094e0(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    func_020097f0(2, arg0, arg1, arg2, arg3);
}

void func_02009508(u32 arg0) {
    func_020097f0(3, arg0, 0, 0, 0);
}

void func_02009528(u32 arg0, s32 arg1) {
    func_020097a8(arg0, 6, arg1, 2);
}

void func_02009540(u32 arg0, u32 arg1) {
    func_020097a8(arg0, 4, arg1, 1);
}

s32 func_0200986c(void) {
    return func_02006afc(&data_0215d1a0);
}

s32 func_02009880(void) {
    return func_02006b4c(&data_0215d1a0);
}

