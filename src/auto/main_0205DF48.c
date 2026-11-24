/* 4 functions from 0x0205DF48 to 0x0205EE3C (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160a74;
extern u8 *func_0205bad4(void);
extern void func_020d3c98(void *);
extern void func_020e24bc(void *, s32, s32, s32, s32);
extern void func_020d9dc8(void *, s32, s32, s32);
void func_0205ed94(void) {
    u8 *node = func_0205bad4();
    while (node != NULL) {
        u8 *obj = *(u8 **)node;
        if (**(u8 **)(obj + 0x118) == 1) {
            func_020d3c98(obj);
            *(u16 *)(data_02160a74 + 0x1e0) = 0;
            func_020e24bc(*(void **)(data_02160a74 + 0x78), 5, 0xaa, *(u16 *)(*(u8 **)(obj + 0x118) + 0x74), 0);
            *(u32 *)(*(u8 **)(*(u8 **)(data_02160a74 + 0x78) + 4) + 0x4c) = 0x28a000;
            func_020d9dc8(obj + 0x1a8, *(u16 *)(obj + 0x90), -4, 0);
            return;
        }
        node = *(u8 **)(node + 0x18);
    }
}
