/* 17 functions from 0x0202FB50 to 0x02030878 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160204;
extern u32 data_02155c3c;
extern void *func_0210c594(s32, u32);
extern void func_021167ac(void *, s32);
extern void func_020305b0(void *, void *);
extern void func_0210c5dc(void *);
s32 func_02030528(u8 *arg0, u32 arg1) {
    return (*(u32 *)(arg0 + 0x78) & arg1) ? 1 : 0;
}
