/* 7 functions from 0x020B0B0C to 0x020B1790 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u16 unk[7];
} Unk14;

extern const Unk14 data_021438c8;
extern void func_021099f8(void *);
extern u8 *func_020b3890(void);
extern void func_020ae3f8(s32, s32, s32, s32, s32, s32);

void func_020b0b0c(u8 *unused0, u32 unused1) {
    u8 *p = func_020b3890();
    u8 val = ((u8 *)(*(u32 *)(p + 0x250) + (u32)func_020b3890()))[0x25c];
    func_020ae3f8(3, 0x18, val + 1, 0x80, 0x25, 0x6b);
    func_020ae3f8(0, 0x18, 6, 0xc6, 0x25, 0x6b);
}

void func_020b0b78(u8 *p) {
func_020adfe8(0x1f,0);
func_02076380(*(void **)(p+0x94));
func_020ae004(0x6a,0,0,8,0x11,3,0x53,8,0x11);
func_020ae004(0x6a,8,0,1,0x11,0xb,0x53,0xb7,0x11);
func_020ae004(0x6a,0x18,0,8,0x11,0xc2,0x53,8,0x11);
func_020ae004(0x6b,0,0x11,7,0xd,0xa,0x55,7,0xd);
func_020ae3f8(5,0x18,1,0x18,0x56,0x6b);
func_020adfe8(0x1f,0);
}

void func_020b0ca0(void) {
    Unk14 buf = data_021438c8;
    *(volatile u32 *)0x040004A4 = 0x011200C0;
    func_021099f8(&buf);
}

extern u8 *func_020b3880(void);
extern u8 *func_020adda8(void);
void func_020b0cfc(void) {
 u8 *a=func_020b3880();
 u8 *b=func_020adda8();
 func_020b3fd8();
 switch(*(u32 *)(a+0x3434)) {
 case 0: case 1: case 2:
 func_020aedc0(a,b); func_020af170(b); func_020aeab0(a,b,1); break;
 case 3: case 4:
 func_020aedc0(a,b); func_020af170(b); func_020aeab0(a,b,0);
 if(func_020b3d88()) {
 if(*(u32 *)(b+0x6c8)) func_020af2dc(b);
 if(func_020b3890()[0x263]==1) { func_020b0ca0();
 func_020b0b78(b); }
 func_020b0b0c(b,*(u32 *)(a+0x3438));
 } break;
 case 5:
 func_020aedc0(a,b); func_020af170(b); func_020aeab0(a,b,1); break;
 case 6: break;
 }
}

void func_020b10f0(u8 *a,u8 *b) {
 s32 i;
 for(i=0;i<3;i++) {
 if(i!=*(s32 *)(a+0x3438)) func_02076380(*(u32 *)(b+0x30));
 else func_02076380(*(u32 *)(b+0x34));
 func_020ae004(101,0,0,8,18,148,(s16)(111+i*20),8,18);
 func_020ae004(101,8,0,1,18,156,(s16)(111+i*20),100,18);
 }
 func_02076380(*(u32 *)(b+0x90));
 func_020ae004(102,34,44,27,11,168,114,27,11);
 func_020ae004(102,35,11,26,11,168,134,26,11);
 func_020ae004(102,34,33,29,11,168,154,29,11);
 func_020adfe8(31,0);
}

