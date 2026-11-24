/* 3 functions from 0x020AEDC0 to 0x020AF2DC (main), found by ds-decomp. */
#include "common.h"

extern u8 *func_020adda8(void);

extern u8 *func_020ade60(s32);
extern void func_02076380(void *);
extern void func_020ae004(s16, s16, s16, s16, s16, s16, s16, s16, s16);
extern void func_020adfe8(u16, u8);
void func_020af170(u8 *arg0) {
    u8 *p = func_020ade60(1);
    s16 y = *(s32 *)(p + 4) + 0x87;

    func_02076380(*(void **)(arg0 + 0x14));
    func_020ae004(0x6a, 0, 0, 4, 0xe, 9, y, 4, 0xe);
    func_020ae004(0x6a, 4, 0, 1, 0xe, 0xd, y, 0xe6, 0xe);
    func_020ae004(0x6a, 0x1c, 0, 4, 0xe, 0xf3, y, 4, 0xe);
    func_020ae004(0x6a, 0, 0xf, 4, 0x23, 9, y + 0xe, 4, 0x23);
    func_020ae004(0x6a, 4, 0xf, 1, 0x23, 0xd, y + 0xe, 0xe6, 0x23);
    func_020ae004(0x6a, 0x1c, 0xf, 4, 0x23, 0xf3, y + 0xe, 4, 0x23);
    func_020adfe8(0x1f, 0);
}

void func_020af2c8(void *arg0) {
    u8 *p = func_020adda8();
    *(void **)(p + 0x6c8) = arg0;
}
