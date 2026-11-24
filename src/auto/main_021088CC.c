/* 38 functions from 0x021088CC to 0x021098AC (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u8 unk_00[0x08];
    u32 unk_08;
    u32 unk_0c;
    u8 unk_10[0x08];
    u8 unk_18[2];
} Unk021624F8;

extern Unk021624F8 *data_021624f8;
extern u8 data_02162510[];

void func_02125b78(u32);
void func_02125d00(u32);
void func_02125bd4(u32, s32);

void func_02108b54(u32 arg0) {
    u32 *ptr = NULL;
    if (arg0 == 0) {
        ptr = &data_021624f8->unk_08;
    } else if (arg0 == 1) {
        ptr = &data_021624f8->unk_0c;
    }
    if (arg0 >= 2) {
        return;
    }
    if (ptr == NULL) {
        return;
    }
    if (data_021624f8->unk_18[arg0] & 8) {
        return;
    }
    func_02125b78(*ptr);
}

void func_02108bb8(u32 arg0, u32 arg1, u32 arg2) {
    u32 *ptr = NULL;
    if (arg0 == 0) {
        ptr = &data_021624f8->unk_08;
    } else if (arg0 == 1) {
        ptr = &data_021624f8->unk_0c;
    }
    if (arg0 >= 2) {
        return;
    }
    if (ptr == NULL) {
        return;
    }
    if (data_021624f8->unk_18[arg0] & 8) {
        return;
    }
    func_02125d00(*ptr);
    func_02125b78(*ptr);
}

void func_02108c24(u32 arg0, s32 arg1) {
    u32 *ptr = NULL;
    if (arg0 == 0) {
        ptr = &data_021624f8->unk_08;
    } else if (arg0 == 1) {
        ptr = &data_021624f8->unk_0c;
    }
    if (arg0 >= 2) {
        return;
    }
    if (ptr == NULL) {
        return;
    }
    if (data_021624f8->unk_18[arg0] & 8) {
        return;
    }
    if (arg1 == 0) {
        func_02125bd4(*ptr, 1);
        data_021624f8->unk_18[arg0] |= 4;
    } else {
        func_02125bd4(*ptr, 0);
        data_021624f8->unk_18[arg0] &= 0xfb;
    }
}

void func_021091b0(void) {
}

void func_02109828(void) {
    *(u32 *)(data_02162510 + 0x34) = 0x8000;
    *(u32 *)(data_02162510 + 0x44) = 0x8000;
}

