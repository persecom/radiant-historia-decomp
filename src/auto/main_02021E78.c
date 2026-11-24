/* 22 functions from 0x02021C48 to 0x02022A48 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02160078;
extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_02005e80(char *, const char *, ...);
extern const char data_02145fdc[];
extern u32 func_021092d8(char *);
extern u32 func_02092994(u32, u32);
extern void func_02022088(u32, u32);
extern s32 func_02109444(void *);
extern void func_0210c970(void *);
extern void func_021167f0(void *, void *);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);

void func_02021e78(void) {
    register char *bp asm("r4");
    register void *p asm("r6");
    register u32 zero asm("r5");
    char buf[0x14];
    u32 res, a, b;
    bp = buf;
    func_02005e80(bp, data_02145fdc);
    p = func_0210c594(0x60, data_02155c3c);
    res = func_021092d8(bp);
    *(u32 *)p = res;
    if (res == 0) return;
    zero = 0;
    a = func_02092994(*(u32 *)p, zero);
    b = func_02092994(*(u32 *)p, zero);
    func_02022088(a, b);
    if (func_02109444(*(void **)p) != 0) goto done;
    func_0210c970(p);
done:;
}

void *func_02021f10(s32 arg0) {
    if (arg0 == 0x3e7) goto fail;
    if (arg0 < 0) goto fail;
    if (arg0 > 7) goto fail;
    return (void *)((u8 *)data_02160078 + 0x38 + arg0 * 0x128);
fail:
    return NULL;
}

void *func_0202214c(void) {
    return *(void **)((u8 *)data_02160078 + 0x28);
}
