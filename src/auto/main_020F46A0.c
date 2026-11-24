/* 30 functions from 0x020F46A0 to 0x020F5574 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

extern void func_0210c5dc(void *);
extern u32 data_02160c3c[];
extern u8 data_02151fc8[];
extern s32 func_02107d58(u32, u16, u16);
extern u8 *data_02160c34[];
extern u8 *data_02155984;
extern u32 data_02162834[];
extern void func_02002128(Vec3 *, void *, void *);
extern s32 func_02002080(s32, u32);
void func_020f4860(u32 arg0) {
    data_02160c3c[1] = arg0;
}

void func_020f4bd0(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}
