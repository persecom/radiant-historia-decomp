/* 73 functions from 0x02006C38 to 0x02007C2C (main), found by ds-decomp. */
#include "common.h"

extern void func_02006e48(void);
extern void func_0200a56c(void);
extern void func_02006e90(void);
extern void func_02005ae0(void);
extern void func_02006fac(void);
extern void func_020057d0(void);
extern void func_02005a40(void);
extern void func_020075fc(void);
extern void func_020094a8(void);
extern void func_02007d18(void);
extern void func_0200835c(void);
extern void func_0200617c(void);
extern void func_020081fc(void);
extern void func_02011334(void);
extern void func_0200f858(void);
extern void func_0200e384(void);
extern void func_02006e1c(void);
extern u32 func_02006940(void);
extern u32 data_0215d058[2];
extern void (*data_02145bc0[])(u32);
extern u8 *data_0215d060[];
extern u32 data_0215d084[3];
extern u32 func_02008128(void);
extern void func_0200813c(u32);
extern void *func_02007250(void *, void *);
extern void *func_02007278(void *, void *);
extern void func_02007538(s32, u32);
typedef struct UnkStruct_0215d128 {
    u16 unk00;
    u16 unk02;
    u32 unk04;
    u64 unk08;
} UnkStruct_0215d128;

extern u16 data_0215d124;
extern u16 data_0215d128;
extern u16 data_0215d138;
extern void func_020077f8(s32);
extern void func_0200789c(void);
extern void func_020057e8(u32, void (*)(void));
extern void func_020059b4(u32);
extern void func_02005944(u32, void (*)(void), u32);
extern void func_02007674(void);
extern u32 func_0200701c(s32);
extern void func_020071a0(s32, u32);
extern u32 func_020070fc(s32);
extern void func_020071b4(s32, u32);
extern void func_020075d4(s32, u32, s32);

extern u32 data_0215d084[3];

extern s32 func_020076fc(s32);
extern void func_0200777c(s32);

s32 func_020076e8(s32 arg0) {
    func_0200777c(func_020076fc(arg0));
    return arg0;
}
