/* 4 functions from 0x0205DF48 to 0x0205EE3C (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160a74;
extern u8 *func_0205bad4(void);
extern void func_020d3c98(void *);
extern void func_020e24bc(void *, s32, s32, s32, s32);
extern void func_020d9dc8(void *, s32, s32, s32);
extern u8 **data_02160244;
extern void func_020d9da8(s32);
extern void func_020d9ea8(s32, s32);
extern void func_0206e990(s32, u32);
extern void func_0210d27c(s32);
extern void func_020d0884(void);
extern void func_020d3160(s32, s32, s32, s32);
void func_0205ebb0(u8 *arg0) {
    u8 *r4 = *(u8 **)(arg0 + 0x128);
    s32 state;
    (*data_02160244)[0x6c] = 2;
    state = *(s16 *)(r4 + 0x1c);
    if (state == 0) {
        func_020d9da8(0x20);
        func_020d9ea8(8, 0x30);
        *(s16 *)(r4 + 0x1c) = 1;
        func_0206e990(7, *(u16 *)(arg0 + 0x90));
        func_0210d27c(0x6a);
    } else if (state == 1) {
        func_020d0884();
        func_020d3160(7, 0, 0, 0);
        func_020d3160(0, 0, 0, 0);
        *(u32 *)(r4 + 0x18) |= 2;
        *(u32 *)(r4 + 0x18) &= ~0x10;
        *(u16 *)(r4 + 0x1e) |= 0x100;
        *(s32 *)(r4 + 0x24) = 0x12b;
    }
}

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
