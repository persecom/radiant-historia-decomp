/* 6 functions from 0x020FC50C to 0x020FCEA0 (main), found by ds-decomp. */
#include "common.h"

typedef struct Unk020FC50C_Sub {
    u8 unk_000[0x2f0];
    u8 unk_2f0;
    u8 unk_2f1[3];
    s32 unk_2f4;
    u8 unk_2f8;
    u8 unk_2f9[3];
    s32 unk_2fc;
    u8 unk_300;
    u8 unk_301;
} Unk020FC50C_Sub;

typedef struct Unk020FC50C {
    u32 unk_00;
    Unk020FC50C_Sub *unk_04;
} Unk020FC50C;

extern Unk020FC50C data_02160c74;

void func_020fce30(s32 arg0, s32 arg1, u8 arg2, u8 arg3) {
    if (data_02160c74.unk_04 == NULL) {
        return;
    }
    data_02160c74.unk_04->unk_2f4 = arg0;
    data_02160c74.unk_04->unk_2fc = arg1;
    data_02160c74.unk_04->unk_2f8 = arg2;
    data_02160c74.unk_04->unk_301 = arg3;
    data_02160c74.unk_04->unk_300 = 0;
    data_02160c74.unk_04->unk_2f0 = 1;
}

void func_020fce9c(void) {
}
