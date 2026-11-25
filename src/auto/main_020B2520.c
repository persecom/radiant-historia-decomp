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
