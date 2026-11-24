/* 25 functions from 0x020A28E0 to 0x020A3814 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02155c3c;
extern u32 data_021600b0[2];
extern void *func_0210c594(u32, u32);
extern void func_021167f0(void *, void *);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void func_020a30d4(void);
s32 func_020a3128(void);
void func_020a29dc(u16 arg0) {
    void *p = func_0210c594(0x20, data_02155c3c);
    *(u16 *)p = arg0;
    *(u8 *)((u8 *)p + 0xc) = 0;
}

s32 func_020a30c4(void) {
    func_020a30d4();
    return func_020a3128();
}

extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern u32 data_021600b0[2];
extern void func_021167f0(void *, void *);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
void func_020a37f0(u8 *dst, const s8 *src, s32 size) {
    u8 *p = dst;
    while (size > 0) {
        *p++ = *src++;
        size--;
    }
}

