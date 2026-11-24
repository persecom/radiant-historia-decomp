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

void func_020ade8c(s32 arg0) {
    u8 *p = func_020ade60(arg0);
    s32 size;
    if (p == NULL) {
        return;
    }
    size = 0x10;
    func_02008f74(p, 0, size);
    switch (arg0) {
    case 0:
        *(s32 *)p = 0x100;
        break;
    case 1:
        *(s32 *)(p + 4) = 0x39;
        break;
    case 2:
        p[0xc] = 1;
        p[0xd] = 1;
        break;
    case 3:
        *(s32 *)p = size - 0xEC;
        break;
    case 4:
        p[0xc] = 1;
        p[0xd] = 1;
        break;
    }
}

void func_020adf14(void) {
    s32 i;
    for (i = 0; i < 5; i++) {
        func_020ade8c(i);
    }
}

void func_020adfe8(u16 arg0, u8 arg1) {
    *(u32 *)0x40004A4 = (arg1 << 24) | 0xC0 | (arg0 << 16);
}
