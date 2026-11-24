/* 10 functions from 0x0208C250 to 0x0208D080 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u16 data[10];
} Unk14;

extern const Unk14 data_02141300;
extern const Unk14 data_02141378;
extern u8 *data_0216010c;
extern u8 *data_02160200;
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
extern void func_02092814(s32, s32, s32, s32, s32, s32, s32);
extern void func_020895a0(s32, s32, s32, s32, s32, s32, s32, s32, s32);

void func_0208cb1c(void) {
    Unk14 buf = data_02141378;
    func_02092814(6, 0, 0, 0x38, 0xef, 0x2d, 0x8d);
    func_020895a0(0xa, 0x15000, 0x3a000, 0x14, 6, *(u8 *)(data_02160200 + 0x16c), 0, 0, 0);
    func_020a3bbc(0x50);
    func_021098ac(&buf);
}

void func_0208ce74(void) {
    Unk14 buf = data_02141300;
    if (*(s16 *)(data_0216010c + 0x51ae) & 4) {
        func_020a3bbc(0x1a);
        *(s16 *)(data_0216010c + 0x51ae) &= ~4;
    } else {
        func_020a3bbc(0x19);
    }
    func_021098ac(&buf);
}
