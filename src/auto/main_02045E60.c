/* 17 functions from 0x02045E60 to 0x02046E30 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02155c3c;
extern u8 *data_021600b8;
extern void *func_0210c594(s32, u32);
extern void func_021167ac(void *, s32);
extern void func_021168f8(void *, void *);
extern void func_020a994c(void *);
extern void func_020a98a0(void *);
extern void func_02046760(u8 *);
extern void func_020f58c0(void *);

void func_020468e0(u8 arg0) {
    u8 *node = *(u8 **)data_021600b8;
    while (node != NULL) {
        *(u8 *)(node + 0x1e8) = arg0;
        node = *(u8 **)(node + 0x1dc);
    }
}
