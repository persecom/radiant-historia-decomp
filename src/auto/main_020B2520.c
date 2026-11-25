/* 3 functions from 0x020B2520 to 0x020B34D0 (main), found by ds-decomp. */
#include "common.h"

extern s32 func_020b3fd8(void);
extern s32 func_020b4044(void);
extern void func_020adfe8(s32, s32);
extern void func_02076380(void *);
extern void func_020ae004(s16, s16, s16, s16, s16, s16, s16, s16, s16);
extern void func_020ae0f0(s32, s16, s32, s16, s16, s16);
extern void func_020ae3f8(s32, s32, s32, s32, s32, s32);
extern void func_020a30d4(u16);
extern void func_020a3128(void);
extern s32 func_020b3f14(u16);
extern u8 *func_020b3880(void);

void func_020b2520(u8 *arg0, s32 arg1, s32 arg2) {
    s32 zero = 0;
    s32 r6=0;
    s32 r7 = func_020b3fd8();
    s32 r5 = func_020b4044();
    s32 r8, r4, r11;

    func_020adfe8(0x1f, zero);
    func_02076380(*(void **)(arg0 + 0x94));
    func_020ae004(0x6a, 0, 0, 8, 0x11, 0, 0x1e, 8, 0x11);
    func_020ae004(0x6a, 8, 0, 1, 0x11, 8, 0x1e, 0xb8, 0x11);
    func_020ae004(0x6a, 0x18, 0, 8, 0x11, 0xc0, 0x1e, 8, 0x11);
    func_020ae004(0x6b, 0, 0x11, 7, 0xd, 8, 0x20, 7, 0xd);

    if (arg2 == 1) {
        r8 = 0x3a;
        func_020ae004(0x6a, 0, 0, 8, 0x11, 0x18, r8, 8, 0x11);
        func_020ae004(0x6a, 8, 0, 1, 0x11, 0x20, r8, 0xe0, 0x11);
        func_020ae004(0x6a, 0, 0, 8, 0x11, 0x7c, 0x4e, 8, 0x11);
        func_020ae004(0x6a, 8, 0, 1, 0x11, 0x84, 0x4e, 0x7c, 0x11);

    func_02076380(*(void **)(arg0 + 0x2c));
    func_020ae004(0x6b, 0, 0, 6, 0xe, 0xa9, 0x4f, 6, 0xe);
    func_020ae004(0x6b, 6, 0, 1, 0xe, 0xaf, 0x4f, 0x35, 0xe);
    func_020ae004(0x6b, r8, 0, 6, 0xe, 0xe4, 0x4f, 6, 0xe);

    func_02076380(*(void **)(arg0 + 0xa4));
    func_020ae004(0x6b, 0x21, 0, 0x1b, 0xb, 0x86, 0x51, 0x1b, 0xb);

    func_02076380(*(void **)(arg0 + 0x6c));
    func_020ae004(0x6b, 0x58, 0, 8, 0xa, 0xec, 0x51, 8, 0xa);

    r6 = *(s32 *)(r5 + 0) * *(s32 *)(r7 + 0x2000 + 0xaac);
    func_020ae0f0(r6, 0x6c, 0xdf, 0x51, 8, 0xa);
    func_020a30d4(*(u16 *)(r5 + 4));
    func_020a3128();
    func_020ae004(0x6b, 0, 0, 0x10, 0x10, 0x1e, r8, 0x10, 0x10);
    func_020ae3f8(7, 0x18, *(u16 *)(r5 + 4), 0x31, 0x3c, 0x6c);

    if (arg1 == 1 || (arg1 == 0 && func_020b3f14(*(u16 *)(r5 + 4)) == 0)) {
        if (*(u32 *)(arg0+0x6bc)==0x18) func_02076380(*(void **)(arg0+0x80)); else func_02076380(*(void **)(arg0+0x7c));
        func_020ae004(0x6c, 0x10, 0, 0xe, 0xe, 0xe4, 0x3b, 0xe, 0xe);

        if (*(u32 *)(arg0+0x6bc)==0x19) func_02076380(*(void **)(arg0+0x80)); else func_02076380(*(void **)(arg0+0x7c));
        r11 = 0;
        func_020ae004(0x6c, 0, 0, 0xe, 0xe, 0xa5, 0x3b, 0xe, 0xe);
        func_02076380(*(void **)(arg0 + 0x2c));
        func_020ae004(0x6c, 0, 0, 6, 0xe, 0xb5, 0x3b, 6, 0xe);
        func_020ae004(0x6c, 6, 0, 1, 0xe, 0xbb, 0x3b, 0x21, 0xe);
        func_020ae004(0x6c, 0x3a, 0, 6, 0xe, 0xdc, 0x3b, 6, 0xe);
        func_02076380(*(void **)(arg0 + 0xc0));
        func_020ae004(0x6d, 0x46, 0, 7, 8, 0xbd, 0x3f, 7, 8);
        func_02076380(*(void **)(arg0 + 0x6c));
        r6 = *(s32 *)(r7 + 0x2000 + 0xaac);
        func_020ae0f0(r6, 0x6d, 0xcf, 0x3d, 8, 0xa);
    }
    }
    if (arg1 == 0) {
        if (func_020b3880()[0x3442] == 1) r6=1;
        else if (func_020b3880()[0x3442] == 2) r6=11;
    } else r6=7;
    func_020ae3f8(6,0x1e,r6,0x14,0x20,0x6d);
    func_020adfe8(0x1f,0);
}

void func_020b2aac(u8 *arg0) {
    s32 zero = 0;
    func_020adfe8(0x1f, zero);
    func_02076380(*(void **)(arg0 + 0x24));
}

void func_020b33b8(u8 *p) {
func_020adfe8(0x1f,0);
func_02076380(*(void **)(p+0x94));
func_020ae004(0x6a,0,0,8,0x11,0x1c,0x4b,8,0x11);
func_020ae004(0x6a,8,0,1,0x11,0x24,0x4b,0xb8,0x11);
func_020ae004(0x6a,0x18,0,8,0x11,0xdc,0x4b,8,0x11);
func_020ae004(0x6b,0,0x11,7,0xd,0x24,0x4e,7,0xd);
func_020ae3f8(6,0x1e,0xa,0x30,0x4e,0x6c);
func_020adfe8(0x1f,0);
}
