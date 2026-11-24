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

void func_020bdd80(void) {
}

void func_020bdd84(void) {
}

s32 func_020bdf24(void *arg0, ...) {
    arg0 = NULL;
    return 0;
}

