/* 10 functions from 0x0208C250 to 0x0208D080 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u16 data[10];
} Unk14;
extern const Unk14 data_02141328, data_02141314;
extern const Unk14 data_021410d0, data_021412d8, data_021412c4;

extern const Unk14 data_02141300;
extern const Unk14 data_02141378;
extern u8 *data_0216010c;
extern u8 *data_02160200;
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
extern void func_02092814(s32, s32, s32, s32, s32, s32, s32);
extern void func_020895a0(s32, s32, s32, s32, s32, s32, s32, s32, s32);

extern void func_020a8810(void *, s32);
extern void func_020896f4(s32, s32, s32, s32, s32, s32, s32);
extern void func_020a994c(void *);
void func_0208c680(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    func_020a8810(*(void **)(data_0216010c + 0x340), 0x18);
    func_020896f4(9, 0x40, 0xb, 0x46, 7, arg0, 1);
    func_020a8810(*(void **)(data_0216010c + 0x3e0), 0x18);
    func_020896f4(0xb, 0x40, 0x21, 0x46, 8, arg1, 1);
    func_020896f4(8, 0x17, 0x3c, 0x14, 9, arg2, 3);
    if (arg4 != 0) {
        func_020896f4(0xa, 0x17, 0x74 - arg3 * 0xe, 0x14, 9, arg4, 3);
    } else {
        func_020a994c(data_0216010c + 0x394);
    }
}

extern char data_02148734[];
extern void func_02005e80(char *, const char *, ...);
extern void *func_021092d8(char *);
extern s32 func_02092994(void *, s32);
extern s32 func_02109444(void *);
extern void func_021093b0(void *);
void func_0208c788(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    char buf[0x20];
    void *fp;
    u16 i;
    s32 limit;
    func_02005e80(buf, data_02148734, arg0);
    fp = func_021092d8(buf);
    if (fp == NULL) return;
    limit = arg1 - 1;
    for (i = 0; i <= limit; i++) {
        s32 val;
        func_02092994(fp, 0);
        func_02092994(fp, 0);
        func_02092994(fp, 0);
        func_02092994(fp, 0);
        func_02092994(fp, 0);
        func_02092994(fp, 0);
        func_02092994(fp, 0);
        func_02092994(fp, 0);
        func_02092994(fp, 0);
        func_02092994(fp, 0);
        val = func_02092994(fp, 0);
        if (i < limit) {
            *arg3 += val;
        }
        if (i == limit) {
            *arg2 = val;
        }
        if (func_02109444(fp) == 0) break;
    }
    if (fp != NULL) {
        func_021093b0(fp);
    }
}

void func_0208cb1c(void) {
    Unk14 buf = data_02141378;
    func_02092814(6, 0, 0, 0x38, 0xef, 0x2d, 0x8d);
    func_020895a0(0xa, 0x15000, 0x3a000, 0x14, 6, *(u8 *)(data_02160200 + 0x16c), 0, 0, 0);
    func_020a3bbc(0x50);
    func_021098ac(&buf);
}

extern const Unk14 data_02141364;
extern const Unk14 data_02141350;
extern const Unk14 data_0214133c;
extern void func_0209250c(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_0208cbcc(void) {
    Unk14 buf0 = data_02141364;
    Unk14 buf1 = data_02141350;
    Unk14 buf2 = data_0214133c;
    func_020a3bbc(7);
    func_021098ac(&buf0);
    func_021098ac(&buf1);
    func_021098ac(&buf2);
    func_0209250c(0x10, 0, 9, 0x94, 0xee, 0x23, 8, 8, 4, 2, 4, 2, 0xb1);
}

void func_0208ccc4(u32 id, s16 x, s16 y) {
 Unk14 a=data_02141328;
 Unk14 b=data_02141314;
 u8 *state=data_0216010c;
 s32 selected=0;
 if(id==5 && !(*(u32 *)(data_02160200+0x15c)&0x10000000))return;
 if(id==((s8 *)state)[0x50d2]+((s8 *)state)[0x50d1]*2)selected=1;
 func_0209250c((s16)(selected+17),1,x,y,36,36,8,8,4,2,4,2,141);
 func_020a3bbc(selected+19);
 a.data[2]=id*19; a.data[5]=x+17; a.data[6]=y+17;
 func_021098ac(&a);
 if(id>=4) {
 func_020a3bbc(selected+23);
 b.data[1]=(id-4)*24;
 } else {
 func_020a3bbc(selected+21);
 switch(id) {
 case 1:b.data[2]=24;break;
 case 2:b.data[1]=24;break;
 case 3:b.data[1]=24;b.data[2]=24;break;
 }
 }
 b.data[5]=x+1;b.data[6]=y+1;
 func_021098ac(&b);
}

void func_0208ce74(void) {
    Unk14 buf = data_02141300;
    if (*(s16 *)(data_0216010c + 0x51ae) & 4) {
        func_020a3bbc(0x1a);
        *(s16 *)(data_0216010c + 0x51ae) &= ~4;
    } else {
        func_020a3bbc(0x19);
    }
    func_021098ac(&buf);
}

void func_0208cef8(s32 value) {
 Unk14 a=data_021410d0;
 Unk14 b=data_021412d8;
 Unk14 c=data_021412c4;
 s16 i=0;
 func_020a3bbc(5);
 a.data[1]=0; a.data[2]=0; a.data[3]=a.data[8]=16; a.data[4]=a.data[9]=14;
 func_021098ac(&a);
 a.data[1]=10; a.data[2]=0; a.data[3]=6; a.data[4]=a.data[9]=14; a.data[5]=(s16)a.data[5]+16; a.data[8]=90;
 func_021098ac(&a);
 func_020a3bbc(27);
 func_021098ac(&b);
 func_020a3bbc(28);
 do {
 c.data[1]=(value%10)*8;
 c.data[5]=237-i*8;
 func_021098ac(&c);
 value/=10;
 i++;
 } while(value!=0);
 c.data[1]=80; c.data[5]=245;
 func_021098ac(&c);
}

