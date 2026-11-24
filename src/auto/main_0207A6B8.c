/* 15 functions from 0x0207A6B8 to 0x0207B398 (main), found by ds-decomp. */
#include "common.h"

extern void *data_021600ac;
extern void *data_021600f0;
extern void *data_02160200;

void func_0206e8f0(s32, void *, s32);
void func_0210d27c(s32);

typedef struct {
    s32 x, y, z;
} Vec3_0207adbc;

BOOL func_0207ae24(void) {
    return (*(u8 **)((u8 *)data_021600f0 + 8))[0] == 1;
}

void func_0207b214(void) {
}
