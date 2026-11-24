/* 37 functions from 0x0212C824 to 0x0212D7BC (main), found by ds-decomp. */
#include "common.h"

extern s32 func_0212a584(void *);
extern s32 func_0212a58c(void *);
extern s32 func_0212a4b8(void *);
extern void func_0212cbb8(void *);
extern void func_0212a904(void *);
extern void func_0212cfc4(void *);
extern void func_0212a9dc(void);
extern void func_0212d288(void *);
extern void func_0212a9e8(void);
extern void func_0212c824(void *);
extern void func_0212d3b4(void *);

void func_0212d168(u8 *arg0) {
    void *p = *(void **)(arg0 + 4);
    s32 a = func_0212a584(p);
    s32 b = func_0212a58c(p);
    *(s32 *)(arg0 + 0x2c) += b;
    *(s32 *)(arg0 + 0x30) += a;
    *(s32 *)(arg0 + 0x34) += b;
}

u32 func_0212d540(u8 *arg0) {
    return *(u32 *)(arg0 + 0x30);
}

void func_0212d550(u8 *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0x34) = arg1;
}

extern void func_0212a1dc(void *);
extern s32 func_0212a584(void *);
extern s32 func_0212a58c(void *);
extern s32 func_0212a4b8(void *);
extern void func_0212cbb8(void *);
extern void func_0212a904(void *);
extern void func_0212cfc4(void *);
extern void func_0212a9dc(void);
extern void func_0212d288(void *);
extern void func_0212a9e8(void);
extern void func_0212c824(void *);
extern void func_0212d3b4(void *);
void func_0212d590(void *arg0) {
    func_0212a1dc(*(void **)((u8 *)arg0 + 4));
}

