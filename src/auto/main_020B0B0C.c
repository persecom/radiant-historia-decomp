/* 7 functions from 0x020B0B0C to 0x020B1790 (main), found by ds-decomp. */
#include "common.h"
extern u8 *func_020b4044(void);
extern s32 func_02022068(void);
void func_020ae004(s32, s32, s32, s32, s32, s16, s16, s32, s32);

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

extern u8 *func_020ade60(s32);
extern void func_020ae0f0(s32, s32, s32, s32, s32, s32);
void func_020b0e08(u8 *arg0, u8 *arg1) {
    u8 *p = func_020ade60(0);
    s32 v;

    func_02076380(*(void **)(arg1 + 0xe8));
    func_020ae004(0x64, 1, 1, 1, 1, 0, 0, 0x100, 0xc0);

    func_02076380(*(void **)(arg1 + 0x78));
    func_020ae004(0x6a, 1, 1, 1, 1, 0, 0, 0x100, 2);

    func_02076380(*(void **)(arg1 + 0x78));
    func_020ae004(0x6a, 1, 1, 1, 1, 0, 0xad, 0x100, 0x13);

    func_02076380(*(void **)(arg1 + 0x18));
    if (*(s32 *)(arg0 + 0x3434) != 4) {
        func_020ae004(0x6b, 0, 0, 0x35, 0x13, (s16)*(s32 *)(p + 0), 0xad, 0x35, 0x13);
    } else if (*(s32 *)(arg0 + 0x3438) == 0) {
        func_020ae004(0x6b, 0, 0x13, 0x2b, 0x13, (s16)*(s32 *)(p + 0), 0xad, 0x2b, 0x13);
    } else if (*(s32 *)(arg0 + 0x3438) == 1) {
        func_020ae004(0x6b, 0, 0x26, 0x2b, 0x10, (s16)*(s32 *)(p + 0), 0xad, 0x2b, 0x10);
    }

    func_02076380(*(void **)(arg1 + 0x9c));
    func_020ae004(0x6a, 0, 0, 0xc, 0x10, 0x91, 6, 0xc, 0x10);
    func_020ae004(0x6a, 0xd, 0, 1, 0x10, 0x9d, 6, 0x4d, 0x10);

    v = *(s32 *)(func_020b3890() + 0x258);
    func_02076380(*(void **)(arg1 + 0x70));
    func_020ae0f0(v, 0x6b, 0xd8, 8, 8, 0xa);
    func_020ae004(0x6b, 0x50, 0, 8, 0xa, 0xe0, 8, 8, 0xa);

    func_02076380(*(void **)(arg1 + 0xa0));
    func_020ae004(0x6b, 0, 0, 0xa, 0xb, 0x9b, 9, 0xa, 0xb);

    if (*(s32 *)(arg1 + 0x6bc) == 2) {
        func_02076380(*(void **)(arg1 + 0x20));
    } else {
        func_02076380(*(void **)(arg1 + 0x1c));
    }
    func_020ae004(0x6a, 0, 0, 0x12, 0x12, 0xea, 3, 0x12, 0x12);
    func_020adfe8(0x1f, 0);
}

void func_020b10f0(u8 *a,u8 *b) {
 s32 i;
 for(i=0;i<3;i++) {
 if(i!=*(s32 *)(a+0x3438)) func_02076380(*(u32 *)(b+0x30));
 else func_02076380(*(u32 *)(b+0x34));
 s32 y=111+i*20;
 func_020ae004(101,0,0,8,18,148,y,8,18);
 func_020ae004(101,8,0,1,18,156,y,100,18);
 }
 func_02076380(*(u32 *)(b+0x90));
 func_020ae004(102,34,44,27,11,168,114,27,11);
 func_020ae004(102,35,11,26,11,168,134,26,11);
 func_020ae004(102,34,33,29,11,168,154,29,11);
 func_020adfe8(31,0);
}

void func_020b1254(u8 *p){
u8 *state;
s32 enabled=0,index=0;
s32 number;
state=func_020ade60(2);
if(state[13]==1)enabled=1;
if(enabled){func_020adfe8(state[12],0);index++;}
func_02076380(*(void **)(p+0x24));
func_020ae004(101,0,0,6,6,10,25,6,6);
func_020ae004(101,26,0,6,6,240,25,6,6);
func_020ae004(101,0,26,6,6,10,147,6,6);
func_020ae004(101,26,26,6,6,240,147,6,6);
func_020ae004(101,0,6,1,6,16,25,224,6);
func_020ae004(101,0,6,1,6,16,147,224,6);
func_020ae004(101,0,6,1,1,10,31,236,116);
if(enabled){func_020adfe8(state[12],index);index++;}
func_02076380(*(void **)(p+0x28));
func_020ae004(102,0,0,6,6,12,48,6,6);
func_020ae004(102,26,0,6,6,238,48,6,6);
func_020ae004(102,0,26,6,6,12,145,6,6);
func_020ae004(102,26,26,6,6,238,145,6,6);
func_020ae004(102,0,6,1,6,18,48,220,6);
func_020ae004(102,0,6,1,6,18,145,220,6);
func_020ae004(102,0,6,1,1,12,54,232,91);
if(*(s32 *)(p+0x6bc)==18)func_02076380(*(void **)(p+0x44));else func_02076380(*(void **)(p+0x40));
func_020ae004(106,0,0,52,16,194,156,52,16);
if(enabled){func_020adfe8(state[12],index);index++;}
if(*(s32 *)(p+0x6bc)==18)func_02076380(*(void **)(p+0x4c));else func_02076380(*(void **)(p+0x48));
func_020ae004(107,0,0,12,12,196,158,12,11);
func_02076380(*(void **)(p+0x90));
func_020ae004(107,0,11,27,11,210,158,27,11);
func_02076380(*(void **)(p+0xa4));
func_020ae004(102,1,0,31,11,175,35,31,11);
func_02076380(*(void **)(p+0x2c));
func_020ae004(102,0,0,6,14,209,32,6,14);
func_020ae004(102,6,0,1,14,215,32,18,14);
func_020ae004(102,58,0,6,14,233,32,6,14);
if(enabled)func_020adfe8(state[12],index);
func_02076380(*(void **)(p+0x74));
number=0;
func_020ae004(103,80,0,8,10,211,34,8,10);
if(*(u16 *)(func_020b4044()+4)!=0)number=func_02022068();
func_020ae0f0(number,103,227,34,8,10);
func_020adfe8(31,0);
}

