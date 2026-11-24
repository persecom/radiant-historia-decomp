/* 5 functions from 0x020139A4 to 0x02014994 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u8 padding, sign, unk2, alternate, unk4, conversion;
    u16 unk6;
    s32 width, precision;
} FormatSpec;
