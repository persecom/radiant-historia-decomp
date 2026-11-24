/* 23 functions from 0x020ADE8C to 0x020AEDC0 (main), found by ds-decomp. */
#include "common.h"

typedef struct Unk_02150788 {
    u32 field_0;
    u32 field_4;
    u32 field_8;
    u32 field_c;
    u32 field_10;
} Unk_02150788;

extern Unk_02150788 data_02150788[];
extern void func_02008f74(void *, s32, u32);
extern void *func_020ade60(s32);
extern u8 *func_0203be10(s32);
extern s32 func_0203be60(u8 *, s32, s32);

void func_020adfe8(u16 arg0, u8 arg1) {
    *(u32 *)0x40004A4 = (arg1 << 24) | 0xC0 | (arg0 << 16);
}
