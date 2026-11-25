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
static inline void set_digit_size(DigitSprite *s, s16 width, s16 height) {
 s->field[3]=width; s->field[4]=height;
 s->field[8]=width; s->field[9]=height;
}
extern void func_020a3bbc(void);
extern void func_021098ac(void *);


extern u8 *data_02160078;
extern u8 *func_02021f10(u32);
extern u8 data_021512f0;
extern u8 *data_02160238;
extern s16 data_02162908[4];
extern void func_020cec8c(void);
extern void *func_020cda08(u32, u16);
typedef struct { u16 v[4]; } U16x4_020ce170;
extern const U16x4_020ce170 data_02144650;
extern const U16x4_020ce170 data_02144670;
extern u8 *func_020cdc8c(u16, u32);
extern void func_020a8810(void *, s32);
extern void func_020c738c(void *, s32, s32);
void func_020ce664(s32 arg0, s16 arg1, s16 arg2, s16 arg3, u8 arg4);
void func_020ceb74(s32 *arg0, s32 *arg1, s32 *arg2, s32 arg3);

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
#pragma scheduling off
void func_020cdce8(s32 value, s16 x, s16 y, s16 z, s8 spacing, u16 kind, s32 align, u8 count) {
 DigitSprite sprite=data_02144678;
 s32 n=value;
 s8 width,height;
 u8 digits=0, i;
 s16 padding;
 s16 zero=0;
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
 sprite.field[2]=zero; sprite.field[6]=y;
 { u8 digit=value%10; value/=10; sprite.field[1]=digit*width; }
 if(align) sprite.field[5]=x+i*(-(width+spacing));
 else { s32 left=(digits-1)*(width+spacing); s32 off=i*(-(width+spacing))+left; sprite.field[5]=off+x; }
 sprite.field[7]=z+101;
 func_021098ac(&sprite);
 }
}
#pragma scheduling on
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

#pragma push
#pragma scheduling off
void func_020ce170(s32 arg0, s32 arg1, s32 arg2) {
    U16x4_020ce170 tbl1 = data_02144650;
    u8 *slot = data_02160238 + 0x710 + arg1 * 0x10;
    u16 base = tbl1.v[arg0];
    u16 idx = 0;
    u8 active = 0;
    u8 *p;
    s32 i, k;
    U16x4_020ce170 tbl2;
    u16 base2;
    u16 base3;
    u16 j;
    s32 a, b, c;
    s16 y, x, x2;
    u8 *vobj; u8 **manager; u8 *m;

    if (slot[0] != 0) {
        active = 1;
    }

    p = (u8 *)func_020cda08(2, base);
    if (arg2 != 0) {
        p[3] = 9;
    } else {
        p[3] = 8;
    }

    idx++;
    p = (u8 *)func_020cda08(2, (u16)(base + idx));
    *(u16 *)(p + 4) = 0;
    *(u16 *)(p + 6) = 0;
    *(u16 *)(p + 8) = 10;
    *(u16 *)(p + 0xa) = 10;
    *(u16 *)(p + 0x10) = 10;
    *(u16 *)(p + 0x12) = 10;
    if (arg2 != 0) {
        p[3] = 10;
    } else {
        p[3] = 11;
    }
    p[2] = active;

    idx++;
    p = (u8 *)func_020cda08(2, (u16)(base + idx));
    if (arg2 != 0) {
        p[3] = 13;
    } else {
        p[3] = 12;
    }
    p[2] = active;

    idx++;
    p = (u8 *)func_020cda08(2, (u16)(base + idx));
    if (arg2 != 0) {
        p[3] = 14;
    } else {
        p[3] = 15;
    }
    p[2] = active;

    idx++;
    p = (u8 *)func_020cda08(2, (u16)(base + idx));
    if (arg2 != 0) {
        p[3] = 14;
    } else {
        p[3] = 15;
    }
    if (slot[1] != 0 && active != 0) {
        p[2] = 1;
    } else {
        p[2] = 0;
    }

    idx++;
    p = (u8 *)func_020cda08(2, (u16)(base + idx));
    if (arg2 != 0) {
        p[3] = 14;
    } else {
        p[3] = 15;
    }
    if (slot[2] != 0 && active != 0) {
        p[2] = 1;
    } else {
        p[2] = 0;
    }

    idx++;
    p = (u8 *)func_020cda08(2, (u16)(base + idx));
    if (arg2 != 0) {
        p[3] = 19;
    } else {
        p[3] = 18;
    }
    p[2] = active;

    idx++;
    p = (u8 *)func_020cda08(2, (u16)(base + idx));
    if (arg2 != 0) {
        p[3] = 28;
    } else {
        p[3] = 29;
    }
    p[2] = 0;
    if (active != 0 && slot[7] != 0) {
        p[2] = 1;
    }

    idx++;
    for (i = 0; i < 3; i++) {
        p = (u8 *)func_020cda08(2, (u16)(base + idx));
        if (slot[0] != 0 && slot[i] != 0) {
            p[2] = 1;
            p[3] = slot[i + 3] + 0x1d;
            p[0x2b] = 1;
            *(u16 *)(p + 0x28) = 0x29b0;
        } else {
            p[2] = 0;
        }
        idx++;
    }

    tbl2 = data_02144670;
    base2 = tbl2.v[arg0];
    for (j = 0; j < 5; j++) {
        p = func_020cdc8c((u16)(base2 + j), 2);
        if (p != NULL) {
            if (arg2 != 0) {
                *(u16 *)(p + 0x1c) = 0x13;
            } else {
                *(u16 *)(p + 0x1c) = 0x12;
            }
            p[2] = active;
        }
    }

    k = 0;
    base3 = ((volatile u16 *)&tbl2)[arg0];
    for (; k < 3; k++) {
        p = func_020cdc8c((u16)(k + base3), 2);
        *(u32 *)(p + 4) = slot[k];
        if (slot[0] != 0 && slot[k] != 0) {
            p[2] = 1;
        } else {
            p[2] = 0;
        }
    }

    manager=&data_02160238;
    func_020ceb74(&a, &b, &c, *(s32 *)(slot + 8));
    p = func_020cdc8c((u16)(base2 + 3), 2);
    *(s32 *)(p + 4) = a;
    p = func_020cdc8c((u16)(base2 + 4), 2);
    *(s32 *)(p + 4) = b;

    x = (s16)(arg0 * 0x30 + 0x1e);
    y = 0xf;
    if (arg0 == 3) {
        y = 0x19;
        x = 0x4e;
    }
    m=*manager;
    if(arg2) func_020a8810(*(void **)(m + arg0 * 0x64 + 0x560), 0x13);
else func_020a8810(*(void **)(m + arg0 * 0x64 + 0x560), 0x14);
    func_020ce664(arg0, 5, x, y, slot[6]);
    *(s32 *)(*manager + arg0 * 0x64 + 0x5b8) = active;

    x2 = (s16)(arg0 * 0x30 + 0x28);
    if (arg0 == 3) {
        x2 = 0x58;
    }
    vobj = *(u8 **)(*manager + arg0 * 4 + 0x6f0);
    ((void (*)(void *, s32))(*(void **)(vobj + 0x10)))(vobj, 0x19);
    ((void (*)(void *, s32))(*(void **)(vobj + 0x14)))(vobj, x2);
    ((void (*)(void *, s32))(*(void **)(vobj + 0x1c)))(vobj, 0x79);
    func_020c738c(vobj, active, 1);
}
#pragma pop
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

volatile unsigned int func_020ce738(void)
{
  u8 **base = (u8 **) (&data_02160238);
  u32 stride = 0x64;
  u32 i = 0;
  u32 **new_var;
  do
  {
    u32 offset = i * stride;
    u8 *p;
    u32 next = i + 1;
    u8 *q;
    s32 z = *((s16 *) ((((0, (*base) + offset)) + 0x500) + 0xB4));
    s32 x = *((s16 *) ((((0, (*base) + offset)) + 0x500) + 0xB0));
    s32 dx = *((s32 *) (((0, (*base) + offset)) + 0x5BC));
    s32 height = z + 0x65;
    s32 y = *((s16 *) ((((0, (*base) + offset)) + 0x500) + 0xB2));
    s32 dy;
    u32 value = *((u32 *) (((0, (*base) + offset)) + 0x5B8));
    u32 *dst;
    ;
    dst = *((u32 **) (p + 0x560));
    dy = *((s32 *) (((0, (*base) + offset)) + 0x5C0));
    dst[0x13] = ((u32) height) << 12;
    dst = *((u32 **) (((*base) + offset) + 0x560));
    dy = y + dy;
    dst[0x11] = ((u32) (x + dx)) << 12;
    ;
    i = next & 0xFF;
    (*((u32 **) (((*base) + offset) + 0x560)))[0x12] = ((u32) dy) << 12;
    new_var = (u32 **) (((*base) + offset) + 0x560);
    dst = *new_var;
    dst[0x10] = value;
  }
  while (i < 4);
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
u8 *node = func_020cda08(2,arg0);
s32 bx,dy,by,x1,y1,x2,y2;
if(!node) return 0;
if((u16)data_02162908[2]==0) return 0;
x1=*(s16*)(node+12)+(*(s32*)(node+20)>>12);
dy=*(s32*)(node+24)>>12;

x2=x1+*(s16*)(node+16)+(*(s32*)(node+28)>>12);
y1=*(s16*)(node+14)+dy;
y2=y1+*(s16*)(node+18)+(*(s32*)(node+32)>>12);
bx=data_02162908[0]; by=data_02162908[1];
return bx>=x1 && bx<=x2 && by>=y1 && by<=y2 ? 1:0;
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

    if (p == NULL) {
        return;
    }
    if (*(u8 *)(p + 0x772) != 0) {
        (*(u8 *)(p + 0x772))--;
        flag = 1;
        if (*(u8 *)(p + 0x772) == 0) {
            func_020cec8c();
            flag = 0;
        }
    }
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

