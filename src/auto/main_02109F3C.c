/* 33 functions from 0x021098AC to 0x0210A7E4 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_02162610[64];

extern s32 func_0210a38c();
extern void func_0210a014(void);
extern u32 data_0216256c[];
extern void func_021167ac(void *, s32);
extern void func_0210a2f0(u8 *);
extern void func_0210a348(u32, u32);
extern s32 func_0210a30c(u32 *, u32, s32);
extern void func_0210a3d8(u32, u32, u32);
extern void *func_0210c518(u32, void *);
extern void func_02006dc4(void *, u32);
extern void func_021168f8(void *, void *);
extern void func_0210c674(void *);
extern void func_0210c5dc(void *);
extern void *func_02109f3c(void);
extern void func_02109ea8(void *);
extern void *data_02155c3c;
extern u32 data_02162564[];
extern u32 func_0210a498(u32 *);

extern void func_02109c54(u8 *);
extern void func_0200b888(void *);
extern void func_0200bc08(void *, void *);
extern u32 func_0200bc18(void *);
extern void func_0200bb3c(void *, void *, u32);
extern void func_0200baa4(void *);
extern void *func_0210c594(u32, void *);
extern void func_02118594(void);
extern void *func_02109fac(void *);
extern u8 data_02155bb0[];
extern u8 data_02155bc0[];
extern u8 data_02155bd0[];
extern u8 data_02162578[];
extern u8 data_02162580[];
extern u8 data_021625c8[];

void *func_02109f3c(void) {
    void *node = NULL;
    u8 *base = (u8 *)data_02162564;
    u16 offset = *(u16 *)(base + 0x12);
    void *head = *(void **)(base + 8);
    for (;;) {
        node = (node == NULL) ? head : *(void **)((u8 *)node + offset + 4);
        if (node == NULL) {
            return NULL;
        }
        if (*(s32 *)((u8 *)node + 8) == 0) {
            return node;
        }
    }
}

s32 func_02109f84(void) {
    u8 *p = func_02109f3c();
    if (p == NULL) {
        return 0;
    }
    return *(u16 *)(p + 0x14) >= 2;
}
