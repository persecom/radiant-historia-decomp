/* 25 functions from 0x020BD38C to 0x020BE330 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160204;
extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_021167ac(void *, u32);
extern void func_021167f0(void *, void *);
extern void *func_020bd450(void);

extern u8 *data_02160204;
extern u8 *data_02160078;
extern u8 *func_020bd438(u8);
extern void func_020bd3b8(u8, u16, u8, u8);

void *func_020bd38c(void) {
    void *ptr = func_0210c594(0xc, data_02155c3c);
    func_021167ac(ptr, 8);
    return ptr;
}

void func_020bd574(void) {
    u8 i;
    for (i = 0; i < 7; i++) {
        u8 *p = func_020bd438(i);
        if (p == NULL) {
            func_020bd3b8(
                i,
                *(u16 *)(data_02160078 + 0x14d0 + i * 4),
                *(u8 *)(data_02160078 + 0x14d2 + i * 4),
                *(u8 *)(data_02160078 + 0x14d3 + i * 4)
            );
        } else {
            *(u16 *)(p + 0) = *(u16 *)(data_02160078 + 0x14d0 + i * 4);
            *(u8 *)(p + 2) = *(u8 *)(data_02160078 + 0x14d2 + i * 4);
            *(u8 *)(p + 3) = *(u8 *)(data_02160078 + 0x14d3 + i * 4);
        }
    }
}

void func_020bd608(void) {
    u8 i;
    for (i = 0; i < 3; i++) {
        u8 *p = func_020bd438(i);
        if (*(u16 *)p & 8) {
            *(u16 *)p |= 1;
            *(u16 *)p &= ~8;
        }
        if (*(u16 *)p & 2) {
            *(u16 *)p &= ~2;
            p[3] = 0;
        }
        if (*(u16 *)p & 0x10) {
            *(u16 *)p &= ~1;
            *(u16 *)p &= ~0x10;
        }
    }
}

void func_020bdd80(void) {
}

void func_020bdd84(void) {
}

void func_020bddb0(u8 *arg0) {
    *(u32 *)(arg0 + 0) = 0;
    *(u16 *)(arg0 + 4) = 1;
}

s32 func_020bdf24(volatile s32 arg0, ...) {
    arg0 = 0;
    return 0;
}

