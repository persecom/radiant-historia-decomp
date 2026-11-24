/* 12 functions from 0x020CDCE8 to 0x020CEC8C (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 entries[12][14]; } SpriteTable12_020cdf18;
typedef struct { s16 entries[11][14]; } SpriteTable11_020cdf18;
extern const SpriteTable12_020cdf18 data_021447c0;
extern const SpriteTable11_020cdf18 data_0214468c;
extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern void func_021167f0(void *, void *);
typedef struct { s16 field[10]; } DigitSprite;
extern const DigitSprite data_02144678;
extern void func_020a3bbc(void);
extern void func_021098ac(void *);


extern u8 *data_02160078;
extern u8 *func_02021f10(u32);
extern u8 data_021512f0;
extern u8 *data_02160238;
extern s16 data_02162908[4];
extern void func_020cec8c(void);
extern void *func_020cda08(u32, u16);

typedef struct {
    s16 f0;
    s16 f2;
    s16 f4;
    u32 f8;
    s32 fc;
    s32 f10;
} Unk738;
extern void func_020a994c(void *);
extern void func_020a9610(void *, s32, s32, s32, s32, s32);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
void func_020cdce8(s32 value, s16 x, s16 y, s16 z, s8 spacing, u16 kind, s32 align, u8 count) {
 DigitSprite sprite=data_02144678;
 s32 n=value;
 s8 width,height;
 u8 digits=0, i;
 s16 padding;
 switch(kind) {
 case 7: width=6; height=8; break;
 case 18: case 19: width=8; height=10; break;
 }
 for(;;) { if(n==0) break; digits++; n/=10; }
 if(digits==0) digits=1;
 func_020a3bbc();
 padding=count-digits;
 for(i=0;i<padding;i++) {
 sprite.field[1]=0; sprite.field[2]=0;
 sprite.field[3]=width; sprite.field[4]=height;
 sprite.field[8]=width; sprite.field[9]=height;
 sprite.field[6]=y; sprite.field[5]=x+(-(width+spacing))*(digits+i);
 sprite.field[7]=z+101;
 func_021098ac(&sprite);
 }
 *(volatile u32 *)0x40004a4=0x1f00c0;
 for(i=0;i<digits;i++) {
 sprite.field[3]=width; sprite.field[4]=height;
 sprite.field[8]=width; sprite.field[9]=height;
 sprite.field[2]=0;
 sprite.field[1]=(u8)(value%10)*width;
 sprite.field[6]=y;
 value/=10;
 if(align) sprite.field[5]=x+i*(-(width+spacing));
 else { s32 left=(digits-1)*(width+spacing); sprite.field[5]=i*(-(width+spacing))+left+x; }
 sprite.field[7]=z+101;
 func_021098ac(&sprite);
 }
}

void func_020cdf18(void) {
    SpriteTable12_020cdf18 first=data_021447c0;
    SpriteTable11_020cdf18 second=data_0214468c;
    u8 i;
    s32 row;
    s32 offset, idOffset;
    u8 j;
    for(i=0;i<12;i++) {
        u8 *p=func_0210c594(0x34,data_02155c3c);
        s16 *s=first.entries[i];
        *(s16 *)(p+4)=s[0];
        *(s16 *)(p+6)=s[1];
        *(s16 *)(p+8)=s[2];
        *(s16 *)(p+10)=s[3];
        *(s16 *)(p+16)=s[4];
        *(s16 *)(p+18)=s[5];
        *(s16 *)(p+12)=s[6];
        *(s16 *)(p+14)=s[7];
        *(s16 *)(p+36)=s[8]+101;
        p[2]=1;
        *(s16 *)p=s[11];
        p[3]=s[9];
        p[42]=s[12];
        p[38]=31;
        if(s[10]==1)func_021167f0(data_02160238+0x740,p);
        else if(s[10]==2)func_021167f0(data_02160238+0x74c,p);
    }
    for(row=0;row<4;row++) {
        offset=row*48;
        idOffset=row*100;
        for(j=0;j<11;j++) {
            u8 *p=func_0210c594(0x34,data_02155c3c);
            s16 *s=second.entries[j];
            *(s16 *)(p+4)=s[0];
            *(s16 *)(p+6)=s[1];
            *(s16 *)(p+8)=s[2];
            *(s16 *)(p+10)=s[3];
            *(s16 *)(p+16)=s[4];
            *(s16 *)(p+18)=s[5];
            *(s16 *)(p+12)=s[6];
            if(row==3)*(s16 *)(p+14)=s[7]+48;
            else *(s16 *)(p+14)=s[7]+offset;
            *(s16 *)(p+36)=s[8]+111;
            p[2]=1;
            *(u16 *)p=(u16)s[11]+idOffset;
            p[3]=s[9];
            p[42]=s[12];
            p[38]=31;
            if(s[10]==1)func_021167f0(data_02160238+0x740,p);
            else if(s[10]==2)func_021167f0(data_02160238+0x74c,p);
        }
    }
}

void func_020ce664(s32 arg0, s16 arg1, s16 arg2, s16 arg3, u8 arg4) {
    s32 idx = arg0 * 100;

    func_020a994c(data_02160238 + 0x164 + 0x400 + idx);
    if (arg4 == 0) {
        return;
    }
    *(u16 *)(data_02160238 + idx + 0x5b0) = arg1;
    *(u16 *)(data_02160238 + idx + 0x5b2) = arg2;
    *(u16 *)(data_02160238 + idx + 0x5b4) = arg3;
    func_020a9610(data_02160238 + 0x198 + 0x400 + idx, *(u32 *)(data_02160238 + 0x704), arg4, *(u32 *)(data_02160238 + idx + 0x560), 0, 0);
    func_020a98ac(data_02160238 + 0x164 + 0x400 + idx);
    func_020a98f4(data_02160238 + 0x164 + 0x400 + idx);
}

void func_020ce738(void) {
    u8 i;
    for (i = 0; i < 3; i++) {
        u8 *p = *(u8 **)data_02160238 + i * 100;
        Unk738 *s = (Unk738 *)(p + 0x5b0);
        (*(u32 **)(p + 0x560))[0x4c / 4] = (s->f4 + 0x65) << 12;
        (*(u32 **)(p + 0x560))[0x44 / 4] = (s->f0 + s->fc) << 12;
        (*(u32 **)(p + 0x560))[0x48 / 4] = (s->f2 + s->f10) << 12;
        (*(u32 **)(p + 0x560))[0x40 / 4] = s->f8;
    }
}

void func_020ce7d8(void) {
u8 *p = data_02160238;
s32 zero;
s32 one;
if((p + p[0x708]*16)[0x710]==0) return;
one=1;
func_020ccc30(one);
p[0x70a]=one;
func_020ccb10();
zero=0;
func_020cda64(0,0x12000,0x2d000,0x1e,zero,4,zero,zero,zero);
func_020cda64(one,0x92000,0x86000,0x1e,zero,0x65,zero,zero,zero);
func_020cda64(2,0x92000,0x9a000,0x1e,zero,0x66,zero,zero,zero);
*(s32 *)(*(u8 **)(data_02160238+0x60)+0x40)=one;
*(s32 *)(*(u8 **)(data_02160238+0xb0)+0x40)=one;
*(s32 *)(*(u8 **)(data_02160238+0x100)+0x40)=one;
p[0]=6;
p[0x70b]=zero;
}

void func_020ce8d4(void) {
u8 *p = data_02160238; s32 flag = 0; s32 enabled = 1; u8 *node;
if (p[0x770] == 0) return;
if (p[0x70d] != 0) { p[0x70d]--; flag = 1; if (p[0x70d] == 0) func_020ce7d8(); }
if (p[0] == 1 || p[0] == 2 || (u8)(p[0]+252) <= 2) enabled = 0;
{ u8 values[2] = { 0x17, 0x18 };
node = func_020cda08(2,2); node[3] = values[flag]; node[2] = enabled;
node = func_020cda08(2,3); node[2] = enabled;
}
{ u8 values[2] = { 0x1a, 0x1b };
node = func_020cda08(2,4); node[3] = values[flag]; node[2] = enabled;
}
}

u8 func_020ce9c0(u16 arg0) {
    u8 *node = func_020cda08(2, arg0);
    s16 *p;
    s32 bx, by;
    s32 x1, y1, x2, y2;

    if (node == NULL) {
        return 0;
    }
    p = data_02162908;
    if ((u16)p[2] == 0) {
        return 0;
    }
    x1 = *(s16 *)(node + 0xc) + (*(s32 *)(node + 0x14) >> 12);
    bx = p[0];
    y1 = *(s16 *)(node + 0xe) + (*(s32 *)(node + 0x18) >> 12);
    x2 = x1 + *(s16 *)(node + 0x10) + (*(s32 *)(node + 0x1c) >> 12);
    y2 = y1 + *(s16 *)(node + 0x12) + (*(s32 *)(node + 0x20) >> 12);
    by = p[1];
    return (bx >= x1 && bx <= x2 && by >= y1 && by <= y2) ? 1 : 0;
}

void func_020cea64(u8 arg0) {
    data_021512f0 = arg0;
}

void func_020cea74(u8 *arg0) {
s32 i=1; u8 *p = data_02160078; s32 n=0; u8 *entries; u8 *obj;
arg0[0] = 0; arg0[1] = 0; arg0[2] = 0;
arg0[n] = p[0x7b];
arg0[n+3] = 1;
n++;
*(u32 *)(arg0+8) = *(u32 *)(p+0x24);
for (; i<7; i++) {
entries = p + 0x14d0;
if (*(u16 *)(entries+i*4) & 1) {
obj = func_02021f10(entries[i*4+2]);
if (obj != NULL) {
arg0[n] = obj[0x43];
arg0[n+3] = obj[0x42];
n++;
if (n == 3) break;
}
}
}
arg0[6] = 1;
for (i=0;i<15;i++) {
u32 bit = i+0xe0;
if ((*(u32 *)(p+0x14f4+(bit>>5)*4)) & (1u << (bit&31))) {
arg0[6]=i+1;
break;
}
}
arg0[7] = (*(u32 *)(p+0x1650) & 0x40000000) != 0;
*(u32 *)(arg0+12) = *(u16 *)(p+0x20);
}

void func_020ceb74(s32 *arg0, s32 *arg1, s32 *arg2, s32 arg3) {
    s32 q = arg3 / 60;
    *arg0 = q / 3600;
    *arg1 = (q % 3600) / 60;
    *arg2 = q % 60;
    if (*arg0 > 999) {
        *arg0 = 999;
        *arg1 = 59;
        *arg2 = 59;
    }
}

void func_020cec18(void) {
    u8 *p = data_02160238;
    s32 flag = 0;
    u8 *node = NULL;
    u32 v;

    if (p == NULL) {
        return;
    }
    v = *(u8 *)(p + 0x772);
    if (v == 0) {
        goto common;
    }
    v--;
    *(u8 *)(p + 0x772) = v;
    flag = 1;
    if (v != 0) {
        goto common;
    }
    func_020cec8c();
    flag = 0;
common:
    node = func_020cda08(2, 1);
    if (node == NULL) {
        return;
    }
    if (flag != 0) {
        *(u8 *)(node + 3) = 5;
    } else {
        *(u8 *)(node + 3) = 4;
    }
}

