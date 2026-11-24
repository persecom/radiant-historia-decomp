/* 26 functions from 0x020A7598 to 0x020A84B8 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160140;
extern u8 data_02150088[16];
extern u8 data_021601d0[4];
extern u32 data_02160148[34];
extern u32 data_02160144;
extern u32 data_0216bf84;
extern u32 data_02162858[2];
extern u32 data_02162854;
extern u8 data_021436cc[264];
extern u32 (*data_02156158)(s32, s32, s32);
extern u32 func_02109c60(void *, void *);
extern void func_020a8440(void);
extern void func_020a3b84(void);
extern void func_0210e290(s32);
extern void func_020c3cd4(void *);
extern void func_020c3c94(void *);
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_0210dbe8(void *);
extern void func_0210c5dc(void *);
extern void func_0210f138(void);
extern void func_02004588(void);
extern void func_020045bc(void *, u32, s32);
extern void func_0200462c(void);
extern u8 *data_0216013c;
extern void func_020c3df4(void *, s32);
extern void func_020c49ec(void *);
extern void func_020c3fa0(void *);
extern void func_020c48b8(void);
extern u8 *data_021600e4;
extern void func_020c3850(void *);
extern void func_020a78f0(void);
extern void *func_020c6d5c(s32);
extern void func_020c7654(void *, s32, u32, s32, s32, s32, s32, s32, s32);
extern void func_020a7834(void);
extern void func_020a773c(void);
extern s32 func_020aa818(void *, u16);
extern void func_020c7734(void *, s32);
extern void func_020c7760(void *, s16, s16);
extern void func_020c3df4(void *, s32);
extern void func_020c6d4c(u8 *);
extern void *func_020a6360(void *, u8);

extern s32 data_02162868;
extern void func_02108e54(s32);
extern void func_0210968c(s32, s32, s32);
extern void func_020a81a8(void);
extern void func_02109790(s32);
extern void func_0210dc88(void);
extern void func_020a82f0(void);

void func_020a82f0(void) {
    if (data_02160140 == NULL) {
        return;
    }
    data_0216bf84 = 0;
    func_020a3b84();
    func_0210e290(0);
    data_02162858[0] = 0;
    data_02162854 = 0;
    if (data_02160140 != NULL) {
        func_020c3cd4(*(void **)(data_02160140 + 0x3c));
        *(void **)(data_02160140 + 0x3c) = NULL;
        func_020c3c94(*(void **)(data_02160140 + 0x40));
        *(void **)(data_02160140 + 0x40) = NULL;
        func_0210da14(data_02160140);
        func_0210dba0(data_02160140 + 0x14);
        func_0210dbe8(data_02160140 + 0x28);
        if (data_02160140 != NULL) {
            func_0210c5dc(data_02160140);
            data_02160140 = NULL;
        }
    }
    func_0210f138();
}

void func_020a83a8(void) {
    func_020c3850(*(void **)(data_02160140 + 0x40));
}

void func_020a83c4(void) {
    func_020c3df4(*(void **)(data_02160140 + 0x3c), 1);
}

void func_020a83e4(void) {
    func_020c3df4(*(void **)(data_02160140 + 0x3c), 0);
}

void func_020a8404(void) {
    data_02160148[33] = func_02109c60(data_02150088, data_021601d0);
    func_020a8440();
    data_02160144 = 0;
}

void func_020a8440(void) {
    s32 i;
    u32 *dst = data_02160148;
    u8 *src = data_021436cc;
    u32 (**fp)(s32, s32, s32);
    func_02004588();
    fp = &data_02156158;
    for (i = 0; i < 0x21; i++) {
        u32 key = (*fp)(8, 1, 0);
        dst[i] = key;
        func_020045bc(src, (u32)(u16)key << 3, 8);
        src += 8;
    }
    func_0200462c();
}

