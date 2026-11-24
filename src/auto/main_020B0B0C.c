/* 7 functions from 0x020B0B0C to 0x020B1790 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u16 unk[7];
} Unk14;

extern const Unk14 data_021438c8;
extern void func_021099f8(void *);
extern u8 *func_020b3890(void);
extern void func_020ae3f8(s32, s32, s32, s32, s32, s32);

void func_020b0b0c(void) {
    u8 *p = func_020b3890();
    u8 val = ((u8 *)(*(u32 *)(p + 0x250) + (u32)func_020b3890()))[0x25c];
    func_020ae3f8(3, 0x18, val + 1, 0x80, 0x25, 0x6b);
    func_020ae3f8(0, 0x18, 6, 0xc6, 0x25, 0x6b);
}

void func_020b0ca0(void) {
    Unk14 buf = data_021438c8;
    *(volatile u32 *)0x040004A4 = 0x011200C0;
    func_021099f8(&buf);
}

