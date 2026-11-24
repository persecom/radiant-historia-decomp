/* 12 functions from 0x020A18F8 to 0x020A28E0 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_02160124;
extern u8 *data_021600b0;
extern void func_0209ee60(s32);
extern void func_0209ed58(s32, s32);
extern void func_0209f010(s32);
extern void func_0209edc8(s32, s32);
extern void func_020ec548(void *);
extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern void func_021167f0(void *, void *);
void func_020a2534(void) {
    u8 *r4 = data_021600b0;
    if (*(u16 *)(r4 + 0xe0) & 1) {
        func_0209ee60(0xa);
    }
    if (*(u16 *)(r4 + 0xe0) & 2) {
        func_0209ed58(0, 0);
    }
}

void func_020a2574(void) {
    u8 *r4 = data_021600b0;
    if (*(u16 *)(r4 + 0xe0) & 1) {
        func_0209f010(0xa);
    }
    if (*(u16 *)(r4 + 0xe0) & 2) {
        func_0209edc8(0, 0);
    }
    if (*(u16 *)(r4 + 0xe0) & 4) {
        func_0209f010(0x74);
    }
}

void func_020a25c8(void) {
    u8 *r4 = data_021600b0;
    if (*(void **)(r4 + 0x19c) != NULL) {
        func_020ec548(*(void **)(r4 + 0x19c));
        *(void **)(r4 + 0x19c) = NULL;
        *(u16 *)(r4 + 0x198) = 0;
    }
}

s32 func_020a25fc(s32 arg0, u32 arg1) {
    u8 *base = data_021600b0;
    if (arg0 == 0) {
        *(u32 *)(base + 0x1a0) = 0;
    } else if (arg0 == 1) {
        *(u32 *)(base + 0x1a0) |= arg1;
    } else if (arg0 == 2) {
        *(u32 *)(base + 0x1a0) &= ~arg1;
    } else if (arg0 == 3) {
        if (*(u32 *)(base + 0x1a0) & arg1) {
            return 1;
        }
    }
    return 0;
}

s32 func_020a27a8(s32 arg0) {
    switch (arg0) {
    case 1:
        return 0;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        return 1;
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        return 2;
    default:
        return 0;
    }
}

u8 func_020a2814(void) {
    return data_02160124;
}

void func_020a2824(u16 arg0) {
    void *p = func_0210c594(0x14, data_02155c3c);
    *(u16 *)p = arg0;
    *(u8 *)((u8 *)p + 4) = 0;
}

void func_020a2850(void) {
    u16 i;
    u8 *base = data_021600b0;
    for (i = 0; i < 0x20; i++) {
        func_021167f0(base + 0x134, ((void *(*)(u16))func_020a2824)((u16)(i + 1)));
    }
}

