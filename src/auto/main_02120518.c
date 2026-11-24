/* 27 functions from 0x02120518 to 0x02121494 (main), found by ds-decomp. */
#include "common.h"

extern void func_02117478(void);
extern u8 data_02173164[12];
void func_02120518(u32 *arg0) {
    *arg0 = 0;
}

void func_02120524(s32 arg0) {
    *(s32 *)(data_02173164 + 8) = arg0;
}

void func_02120bb0(void) {
    func_02117478();
}

extern u32 data_02145ba4;
extern u32 data_02173168;
extern void func_021205ec(u32, void *, u32);
extern void func_021204a8(void);
extern void func_02008d08(u32, void *, u32, void (*)(u32 *), void *);
extern void func_02008b08(u32, void *, u32, void (*)(u32 *), void *);
extern s32 func_02002f3c(void *);
extern void func_02001860(void *, void *);
extern s32 func_02002f6c(void *);
u8 *func_02120f94(u8 *arg0) {
    u16 off = *(u16 *)(arg0 + 0xc);
    return arg0 + *(u32 *)(arg0 + off);
}

