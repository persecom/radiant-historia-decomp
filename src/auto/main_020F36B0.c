/* 10 functions from 0x020F36B0 to 0x020F46A0 (main), found by ds-decomp. */
#include "common.h"

typedef struct UnkF_020f36b0 {
    u8 unk00[4];
    u16 unk04;
} UnkF_020f36b0;

typedef struct UnkE_020f36b0 {
    u16 count;
    u8 unk02[2];
    UnkF_020f36b0 *items;
} UnkE_020f36b0;
