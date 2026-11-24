/* 8 functions from 0x01FF8000 to 0x01FF852C (itcm), found by ds-decomp. */
#include "common.h"

extern u32 func_02005a74(void);
extern void func_01ff82c8(void);
extern void func_01ff81e4(void);
extern void (*data_027e0000[])(void);

void func_01ff8000(void) {
    u32 flags;
    u32 bit;
    u32 n;
    if (*(volatile u32 *)0x4000208 == 0) return;
    flags = *(volatile u32 *)0x4000210 & *(volatile u32 *)0x4000214;
    if (flags == 0) return;
    do {
        n = __clz(flags);
        bit = 0x80000000U >> n;
        flags &= ~bit;
    } while (flags != 0);
    *(volatile u32 *)0x4000214 = bit;
    data_027e0000[31 - n]();
}

void func_01ff81b8(void) {
    if (func_02005a74() == 0) return;
    *(u16 *)0x4000208 = 0;
    func_01ff82c8();
    func_01ff81e4();
}

void func_01ff82b4(u32 val, s32 dst, s32 size) {
    s32 end = dst + size;
    while (1) {
        if (dst >= end) {
            return;
        }
        *(volatile u32 *)dst = val;
        dst += 4;
    }
}

extern u32 data_02fffe60;
void func_01ff8388(u32 arg0, u8 *arg1, s32 arg2) {
    u32 ctrl = (*(u32 *)0x02fffe60 & ~0x7000000U) | 0xa1000000U;
    s32 pos = -(s32)(arg0 & 0x1ff);
    u32 status;

    while (*(volatile u32 *)0x040001a4 & 0x80000000) {}
    *(volatile u8 *)0x040001a1 = 0x80;
    for (arg0 += pos; pos < arg2; arg0 += 0x200) {
        *(volatile u8 *)0x040001a8 = 0xb7;
        *(volatile u8 *)0x040001a9 = arg0 >> 24;
        *(volatile u8 *)0x040001aa = arg0 >> 16;
        *(volatile u8 *)0x040001ab = arg0 >> 8;
        *(volatile u8 *)0x040001ac = arg0;
        *(volatile u8 *)0x040001ad = 0;
        *(volatile u8 *)0x040001ae = 0;
        *(volatile u8 *)0x040001af = 0;
        *(volatile u32 *)0x040001a4 = ctrl;
        do {
            status = *(volatile u32 *)0x040001a4;
            if (status & 0x800000) {
                u32 val = *(volatile u32 *)0x04100010;
                if (pos >= 0 && pos < arg2) {
                    *(u32 *)(arg1 + pos) = val;
                }
                pos += 4;
            }
        } while (status & 0x80000000);
    }
}

extern void func_02008128(void);
extern void func_0200813c(void);
void func_01ff845c(u32 dmaNo, u32 src, u32 dest, u32 ctrl, u32 flags) {
    volatile u32 *p;
    u32 noWait = flags & 1;
    u32 fix;

    if (!noWait) {
        func_02008128();
    }

    p = (volatile u32 *)(0x040000b0 + dmaNo * 0xc);

    if (flags & 0x10) {
        *(volatile u32 *)(0x040000e0 + dmaNo * 4) = src;
        src = 0x040000e0 + dmaNo * 4;
    } else if (flags & 0x20) {
        *(volatile u16 *)(0x040000e0 + dmaNo * 4) = (u16)src;
        src = 0x040000e0 + dmaNo * 4;
    }

    p[0] = src;
    p[1] = dest;
    p[2] = ctrl;

    fix = flags & 2;
    if (fix) {
        (void)*(volatile u32 *)0x040000b0;
        (void)*(volatile u32 *)0x040000b0;
        if (!(flags & 4) && dmaNo == 0) {
            p[0] = 0;
            p[1] = 0;
            p[2] = 0x81400001;
        }
    }

    if (!noWait) {
        func_0200813c();
    }

    if (fix) {
        (void)*(volatile u32 *)0x040000b0;
        (void)*(volatile u32 *)0x040000b0;
    }
}

