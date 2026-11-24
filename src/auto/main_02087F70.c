/* 2 functions from 0x02087F70 to 0x02088E90 (main), found by ds-decomp. */
#include "common.h"

s32 func_02088e10(const void *arg0, const void *arg1) {
    struct {
        u32 unk_00[9];
        u16 unk_24;
        s16 unk_26;
        u32 unk_28[6];
    } a, b;

    a = *(const typeof(a) *)arg0;
    b = *(const typeof(b) *)arg1;

    if (a.unk_26 < b.unk_26) {
        return -1;
    }
    if (a.unk_26 > b.unk_26) {
        return 1;
    }
    return 0;
}
