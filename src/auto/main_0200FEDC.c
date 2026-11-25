/* 36 functions from 0x0200F244 to 0x020101F8 (main), found by ds-decomp. */
#include "common.h"
extern u8 data_0215f660[256];
extern void func_02000b64(void *);
extern u32 func_0201068c(void);
extern void func_02009008(void *,void *,u32);

extern u32 data_0215f0a0[4];
extern void func_0200fa74(void *, s32);
extern u8 data_0215f120[1312];
extern void func_02006df4(void);
extern void func_02006e00(u32, u32);
extern s32 func_02006638(void *, s32);
extern void func_020065c8(void *);
extern u32 data_0213ea64[];
extern void func_02006d58(void);
extern void func_02006da8(u32, u32);
extern void func_02006d8c(u32, u32);
extern void func_02006de8(void);
extern void func_0200fddc(u8 *);
extern s32 func_0200fca4(void (*)(void *), s32);
extern u16 func_020081e0(void);
extern u32 func_02008128(void);
extern void func_0200813c(u32);
extern void func_02006510(void *);
extern void func_02006560(void *);
extern s32 func_0200fd64(u8 *, s32, u32, u32);
extern s32 func_02005da4(u16);
extern void func_0200851c(void *, s32);
extern void func_02007e58(void *, s32, s32, void *, void *);

extern void func_02008414(void);
extern void func_02008460(void *);
extern void func_02007e44(void *);
extern s32 func_0200f83c(u16 *);
extern void func_0200f7e4(u8 *);
extern void func_02008474(void *, s32, s32, s32);
extern void func_02005d88(void);
extern void func_0200faec(u32, s32);
extern s32 func_020106ac(void);
extern void func_020106a0(void);

extern s32 func_0200a6e4(s32, s32, s32);
s32 func_0200f6fc(s32 arg0);

extern void func_0200fa74(void *, s32);

extern u8 data_0215f0c0[];
extern void *data_0215f640[];
extern void func_02008e68(s32, void *, s32);
extern void func_02006dc4(void *, s32);
extern void func_0200a674(s32, void *);
extern void func_0200fedc(u32, u32, u32);

#pragma peephole off

typedef struct {
    u8 pad0[4];
    volatile u32 flag;
    u8 pad1[0x51c - 8];
    void *payload;
} RH0215f120;

#pragma opt_propagation off
void func_0200fedc(u32 arg0, u32 arg1, u32 arg2) {
    if (arg0 != 0xb || arg2 == 0) {
        return;
    }
    *(volatile u32 *)((u8 *)data_0215f120 + 4) &= ~0x20u;
    func_020065c8(*(void **)((u8 *)data_0215f120 + 0x51c));
}
#pragma opt_propagation on
extern u32 data_0215ce00[];
extern s32 func_0200a6c0(s32, s32);
extern void func_020081a4(s32);
