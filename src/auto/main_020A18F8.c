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

u8 func_020a2814(void) {
    return data_02160124;
}
