/* 11 functions from 0x020E1EC8 to 0x020E2BE4 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02160a74[];
extern void func_020a5ce4(void *);
extern void func_020a994c(void *);
extern void func_020a9610(void *, u32, u32, u32, u32, u32);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
extern void func_020e24bc(u32, u32, u32, u32);
extern void func_020b52f4(u32);

void func_020e267c(void *arg0, u32 arg1, u32 arg2, u32 arg3) {
    u8 *p = *(u8 **)((u8 *)arg0 + 4);
    *(u32 *)(p + 0x44) = arg1 << 12;
    *(u32 *)(p + 0x48) = arg2 << 12;
    *(u32 *)(p + 0x4c) = arg3 << 12;
}
