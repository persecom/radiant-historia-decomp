/* 5 functions from 0x0208A678 to 0x0208B398 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s16 data[10];
} UnkBuf10_0208b198;

typedef struct {
    s16 data[27];
} UnkBuf27_0208b198;

extern UnkBuf10_0208b198 data_02140d4c;
extern UnkBuf27_0208b198 data_02140ec0;

extern void func_020a3bbc(u16);
extern void func_021098ac(void *);

void func_0208b198(void) {
    UnkBuf10_0208b198 other;
    UnkBuf27_0208b198 buf;
    u16 i;

    other = data_02140d4c;
    buf = data_02140ec0;
    *(volatile u32 *)0x040004a4 = 0x1f00c0;
    func_020a3bbc(0x1e);
    for (i = 0; i < 3; i++) {
        u16 idx = i * 9;
        other.data[1] = buf.data[idx + 0];
        other.data[2] = buf.data[idx + 1];
        other.data[3] = buf.data[idx + 2];
        other.data[4] = buf.data[idx + 3];
        other.data[5] = buf.data[idx + 4];
        other.data[6] = buf.data[idx + 5];
        other.data[8] = buf.data[idx + 7];
        other.data[9] = buf.data[idx + 8];
        func_021098ac(other.data);
    }
}
