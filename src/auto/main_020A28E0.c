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
    while (size > 0) {
        *dst++ = *src++;
        size--;
    }
}

