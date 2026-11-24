/* 6 functions from 0x020C4C60 to 0x020C55BC (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 data[10]; } Unk_020c4fa4_10;
typedef struct { s16 data[36]; } Unk_020c4fa4_36;
extern const Unk_020c4fa4_10 data_02144518;
extern const Unk_020c4fa4_36 data_021445b0;

void func_020c50b4(u16 *a, s32 mode) {
    if (mode == 0) {
        a[0] = 1;
        a[1] = 0;
        a[2] = 0;
        a[3] = 0;
        a[4] = 0;
        a[5] = 0;
        a[6] = 0;
        return;
    }
    if (mode != 1) return;
    a[0] = 100;
    a[1] = 0x100;
    a[2] = 8;
    a[3] = 0x1f;
    a[4] = 0xc0;
    a[5] = 0;
    a[6] = 0;
}
