/* 35 functions from 0x02115380 to 0x02116350 (main), found by ds-decomp. */
#include "common.h"

extern s32 func_02116140(u32, u8, u16, u8, void *, u32);
extern void *func_021166c8(void *, u32);
extern s32 func_02116244(u32, u8, u16, u8, void *, void *, u32, u32);

typedef union UnkBits24 {
    u32 all;
    u32 bits : 24;
} UnkBits24;

extern void func_02115d90(void *, s32, s32, s32);
extern void func_02115d10(void *, s32, s32);
extern void func_02009740(void *, void *);
extern void func_0200a248(void *);
extern u8 *func_021150ac(void *);
extern void *func_02115be8(void *, void *, s32);
extern void *func_02115b7c(void *, void *, s32);
extern u8 *func_02115174(void *);
extern void *func_0211519c(void *, void *, void *, void *);
extern void func_02006da8(void *, void *);
extern u32 func_02008128(void);
extern void func_0200813c(u32);
extern void *func_02114f58(void *);

extern void func_021167ac(void *, void *);
extern void *func_02116970(void *, void *);
extern void func_021168f8(void *, void *);
extern void func_02117250(void *, s32);
extern void func_0211566c(void);
extern void func_02115d10(void *, s32, s32);
extern void func_02009720(void *, void *);
extern void func_02009760(void *, void *);
extern void func_0200a2e0(void *);
extern u32 func_02009d2c(void);
extern void func_02009b24(s32);
extern void func_02009cc0(u32);
extern u8 *func_02114f80(void *);
extern u8 *func_02114fe4(void *);
extern s32 func_021157d0(u16, u32, void *, s32, void *);
extern void *func_02115a38(void *, void *, s32);
extern void *func_02115aa4(void *, void *, s32);
extern void *func_02115264(void *);
extern s32 func_02115770(void *, u32, void *, s32, void **);
extern s32 func_02115630(void *);
extern void *func_0211721c(void *, u32, u32);
extern void func_021167f0(void *, void *);
extern s32 func_021172b4(void *, u16);
extern void func_02117304(void *, u32);
extern u32 func_0211727c(void *, u32);

typedef struct {
    u8 pad[0x118];
    s32 flag : 1;
    u8 pad2[0x60];
} Unk_0216cb40;

extern Unk_0216cb40 data_0216cb40[4];
extern void func_02116488(Unk_0216cb40 *, s32);
extern s32 func_0200a530(void *, s32);
extern void func_0200a4fc(void *, s32, s32);
extern void func_0200a328(void *);
extern s32 func_0200a348(void *, void *, void *);
extern s32 func_02115e58(s32, u16, s32, s32);
extern void *func_02114f70(void);
extern void *func_02115110(s32);
extern void func_02113a9c(s32, u8);
extern void func_02113abc(s32, u16);
extern s32 func_02113ad4(s32, void *, void *);

extern u32 func_02009d2c(void);
extern void func_02009b24(s32);
extern void func_02009cc0(u32);
extern u8 *func_02114f80(void *);
extern u8 *func_02114fe4(void *);
extern s32 func_021157d0(u16, u32, void *, s32, void *);
extern void *func_02115a38(void *, void *, s32);
extern void *func_02115aa4(void *, void *, s32);
extern s32 func_02115770(void *, u32, void *, s32, void **);

extern void *func_02115264(void *);
extern void *func_02114f70(void);
extern void *func_02115994(void *, void *, void *, void *, void *);
extern void func_0211528c(void *, void *);
extern void func_02115d68(void *, s32, s32, s32);
extern u32 func_0211727c(void *, u32);

extern void func_02115d90(void *, s32, s32, s32);
extern void func_02115d10(void *, s32, s32);
extern void func_02009740(void *, void *);
extern void func_0200a248(void *);
extern u8 *func_021150ac(void *);
extern void *func_02115be8(void *, void *, s32);
extern u8 *func_02115174(void *);
extern void *func_0211519c(void *, void *, void *, void *);
extern void func_02006da8(void *, void *);

extern void func_02115dc0(void *, s32, s32, s32);

#pragma peephole off

#pragma peephole on

void func_0211630c(s32 arg0) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (data_0216cb40[i].flag) {
            func_02116488(&data_0216cb40[i], arg0);
        }
    }
}

