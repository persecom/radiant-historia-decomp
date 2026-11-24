/* 5 functions from 0x020ED0BC to 0x020EE098 (main), found by ds-decomp. */
#include "common.h"

typedef struct UnkF_020ed3a4 {
    u8 unk00[4];
    u16 unk04;
} UnkF_020ed3a4;

typedef struct UnkE_020ed3a4 {
    u16 count;
    u8 unk02[2];
    UnkF_020ed3a4 *items;
} UnkE_020ed3a4;

extern void func_0201f884(s32);
extern s32 func_02020888(s32, s32);
extern s32 func_020201f4(s32, s32);
extern s32 func_0201ff0c(s32);
