/* 19 functions from 0x020BF330 to 0x020C0284 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 v[10]; } Unk_020bfb44;
extern const Unk_020bfb44 data_02143de0;
extern void func_020c0018(s16, s16, s32, s32, u8, s16);
extern const Unk_020bfb44 data_02143e08;
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
typedef struct { s32 a,b; u16 c,pad; s32 d,e,f,g; s32 x,y,z,w,speed; u16 kind,h,i,j; s32 timer; u8 *owner; u16 state; u8 rest[10]; } Unk_020bfd78;
extern u32 data_0216263c[3];
#define RH_RANDOM(n) ((u16)((((data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2]) >> 16) * (n)) >> 16))
extern u8 *data_02160244;
extern u8 *func_020ec950(s32);
extern void func_020ec548(void *);

extern void func_021082d0(void);
extern void func_02008f74(void *, s32, u32);
extern void func_02009008(void *, void *, u32);
extern void func_020bf00c(void *, void *, void *, f32);
extern void func_020ec9d0(s32, s32);
extern void func_020eca2c(s32);
extern u32 data_02155bac;
extern u32 data_02155c3c;
extern u8 *func_020ec294(u16, u16, s32, s32);
extern void func_020ec88c(void *, s32, s32);
extern void func_020ec8cc(void *, s32, s32);
extern u8 *func_0210c594(s32, u32);
extern void func_021167ac(void *, s32);
extern void func_0210d9e4(void *);
extern void func_0210db70(void *);
extern void func_02066eac(s32);
extern void func_020bf768(void);
extern void func_020bfb44(void);

typedef struct Unk_020bf65c {
    void (*unk00)(void);
    s32 unk04;
    u8 unk08[0xc];
    void (*unk14)(void);
    s32 unk18;
    u8 unk1c[0xc];
    u8 unk28[0xc];
    s32 unk34;
} Unk_020bf65c;
extern u8 *data_02160214;
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_0210c5dc(void *);
extern void func_02066f9c(void);
extern void func_021168f8(void *, void *);
extern void func_020bff30(void *arg0);
void func_020bf330(void *arg0) {
    func_02008f74(arg0, 0, 0x2c);
}

void func_020bf344(u8 *arg0, void *arg1, void *arg2, s32 arg3) {
    *(f32 *)arg0 = (f32)arg3;
    *(f32 *)(arg0 + 4) = 0.0f;
    func_02009008(arg1, arg0 + 8, 0xc);
    func_02009008(arg2, arg0 + 0x14, 0xc);
    func_02009008(arg0 + 8, arg0 + 0x20, 0xc);
}

s32 func_020bf3a0(u8 *arg0, f32 arg1) {
    u8 buf[0xc];
    if (arg1 > 1.0f) {
        return 0;
    }
    func_020bf00c(buf, arg0 + 8, arg0 + 0x14, arg1);
    func_02009008(buf, arg0 + 0x20, 0xc);
    return 1;
}

void func_020bf3fc(void) {
    func_021082d0();
}

extern void func_021082ec(void);
void func_020bf408(void) {
    func_021082ec();
}

void func_020bf414(s32 arg0) {
    if (arg0 != 0) {
        func_020ec9d0(0x3ee, 0);
        func_020ec9d0(0x3ee, 1);
    } else {
        func_020eca2c(0);
        func_020eca2c(1);
    }
}

u8 *func_020bf458(s32 arg0, s32 arg1) {
    u8 *p;
    data_02155bac = 0;
    p = func_020ec294((u16)arg0, (u16)(arg1 + 2), 0x1800, arg1 * 0x1800);
    data_02155bac = 1;
    *(u16 *)(p + 0x10) = 0;
    *(u32 *)(p + 0x14) = 0x80000;
    *(u32 *)(p + 0x18) = 0x60000;
    *(u32 *)(p + 0x1c) = 0x28a000;
    func_020ec88c(p, 0, 0);
    func_020ec8cc(p, 0, 1);
    return p;
}

void *func_020bf4dc(s32 arg0) {
    u8 *p = func_0210c594(0x28, data_02155c3c);
    *(s32 *)(p + 0x4) = arg0;
    *(u32 *)(p + 0x24) = 0;
    return p;
}

int func_020bf508(u32 index, int state, int x, int y, s16 z) {
u8 *p; u8 *obj; int zero=0;
if(index>=3)return zero;
p=*(u8 **)(data_02160244+0x60+index*4);
if(!p)return zero;
if(state) *(int *)(p+8)=state;
if(*(int *)(p+8)==1) {
if(!*(void **)(p+0x24)) {
obj=func_020bf458(*(int *)(p+0x20),*(int *)p-1);
*(u32 *)(obj+0x28)|=4;
func_020ec8cc(obj,0,0);
*(void **)(p+0x24)=obj;
}
*(int *)(p+8)=2;
} else if(*(int *)(p+8)==3) {
obj=func_020ec950(*(int *)p+1);
func_020ec8cc(obj,zero,zero);
func_020ec548(obj);
*(int *)(p+0x24)=zero;*(int *)(p+8)=zero;
} else if(*(int *)(p+8)==2) {
obj=func_020ec950(*(int *)p+1);
if(obj) {
*(int *)(obj+0x14)=x<<12;
*(int *)(obj+0x18)=y<<12;
*(int *)(obj+0x1c)=z<<12;
*(*(u8 **)(*(u8 **)obj+8)+0x71)=31;
func_020ec8cc(obj,1,0);
}
} else if(*(int *)(p+8)==4) {
*(int *)(p+8)=zero;
obj=func_020ec950(*(int *)p+1);
if(!obj)return zero;
}
return 1;
}

void func_020bf65c(void) {
    s32 val = 0x3f6;
    if (data_02160214 != NULL) {
        return;
    }
    data_02160214 = (u8 *)func_0210c594(0x38, data_02155c3c);
    func_021167ac(((Unk_020bf65c *)data_02160214)->unk28, 0x44);
    ((Unk_020bf65c *)data_02160214)->unk34 = 0;
    ((Unk_020bf65c *)data_02160214)->unk00 = func_020bf768;
    ((Unk_020bf65c *)data_02160214)->unk04 = val;
    func_0210d9e4(data_02160214);
    ((Unk_020bf65c *)data_02160214)->unk14 = func_020bfb44;
    ((Unk_020bf65c *)data_02160214)->unk18 = val - 0xc;
    func_0210db70(data_02160214 + 0x14);
    func_02066eac(1);
}

void func_020bf700(void) {
    while (*(void **)(data_02160214 + 0x28) != NULL) {
        func_020bff30(*(void **)(data_02160214 + 0x28));
    }
    func_0210da14(data_02160214);
    func_0210dba0(data_02160214 + 0x14);
    if (data_02160214 != NULL) {
        func_0210c5dc(data_02160214);
        data_02160214 = NULL;
    }
    func_02066f9c();
}

void func_020bfb44(void) {
Unk_020bfb44 draw = data_02143de0;
s32 zero=0;
u8 *p=*(u8 **)(data_02160214+0x28);
while(p) {
if(*(s16 *)(p+0x40)<0) {
switch(*(u32 *)(p+0xc)) {
case 1: case 3: case 4: case 5: case 6:
func_020c0018((s16)(*(s32 *)p+(*(s32 *)(p+0x1c)>>12)),(s16)(*(s32 *)(p+4)+(*(s32 *)(p+0x20)>>12)),*(s32 *)(p+0x14),1,1,zero); break;
case 2:
func_020c0018((s16)(*(s32 *)p+(*(s32 *)(p+0x1c)>>12)),(s16)(*(s32 *)(p+4)+(*(s32 *)(p+0x20)>>12)),*(s32 *)(p+0x14),5,1,zero); break;
case 7: case 9:
func_020c0018((s16)*(s32 *)p,(s16)*(s32 *)(p+4),*(s32 *)(p+0x14),2,1,zero);break;
case 8:
func_020c0018((s16)*(s32 *)p,(s16)((s16)*(s32 *)(p+4)+10),*(s32 *)(p+0x14),4,1,zero);break;
case 10:
*(volatile u32 *)0x40004a4=0x1f0080;
func_020a3bbc(5);
draw.v[1]=80;draw.v[3]=26;draw.v[4]=11;draw.v[8]=26;draw.v[9]=11;draw.v[2]=zero;
draw.v[5]=*(s32 *)p+(*(s32 *)(p+0x1c)>>12)-14;
draw.v[6]=*(s32 *)(p+4)+(*(s32 *)(p+0x20)>>12)-21;
draw.v[7]=*(s16 *)(p+8);
func_021098ac(&draw);break;
case 0:case 11:case 12:case 13:case 14:case 15:case 16:case 17:case 18:case 19:case 20:case 21:break;
}
}
p=*(u8 **)(p+0x48);
}
}

extern void func_021167f0(void *,void *);
void func_020bfd78(s32 a,s32 b,u16 c,s32 d,s32 e,u8 *owner,u16 g,u16 h) {
Unk_020bfd78 *p=(Unk_020bfd78 *)func_0210c594(0x4c,data_02155c3c);
s32 zero=0;
p->a=a;p->b=b;
p->c=zero;
p->d=d;p->e=zero;
p->f=e;p->g=zero;
p->x=RH_RANDOM(0x1800)-0xc00;
p->y=RH_RANDOM(0x2000)-0x1000;
p->z=RH_RANDOM(0xc00)+0x2800;
p->w=RH_RANDOM(0x1000)+0x2800;
p->speed=RH_RANDOM(200)+700;
p->timer=zero;p->h=g;p->j=zero;p->i=h;
p->owner=owner;
p->kind=c;p->state=1;
{u8 *o=p->owner;
if(o) {
u8 *q=*(u8 **)(o+0x128);
(*(s16 *)(q+0xaa))++;
if(**(u8 **)(o+0x118)==0) p->b+=10;
p->state=3;
}
}
func_021167f0(data_02160214+0x28,p);
(*(s32 *)(data_02160214+0x34))++;
}

void *func_020bff74(u16 arg0, u16 arg1) {
    u8 *node = *(u8 **)(data_02160214 + 0x28);
    while (node != NULL) {
        if (*(u16 *)(node + 0x32) == arg0 && *(u16 *)(node + 0x34) == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x48);
    }
    return NULL;
}

extern u8 *data_02160214;
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_0210c5dc(void *);
extern void func_02066f9c(void);
extern void func_021168f8(void *, void *);
void func_020bff30(void *arg0);
void func_020bffb8(u32 arg0) {
    u8 *p = data_02160214;
    u8 *node;
    if (p == NULL) {
        return;
    }
    node = *(u8 **)(p + 0x28);
    while (node != NULL) {
        if (*(u32 *)(node + 0x3c) == arg0) {
            *(u32 *)(node + 0x3c) = 0;
        }
        node = *(u8 **)(node + 0x48);
    }
}

void func_020bfff4(s32 arg0) {
    u8 *p = func_020bff74((u16)arg0, 1);
    if (p != NULL) {
        *(u32 *)(p + 0x38) = 1;
    }
}

void func_020c0018(s16 x, s16 y, s32 number, s32 kind, u8 style, s16 scale) {
Unk_020bfb44 draw=data_02143e08;
s32 divisor=10;
s16 index=0;
s32 mode;
s16 width,height;
s16 digit;
*(volatile u32 *)0x40004a4=0x1f0080;
if(kind==0)func_020a3bbc(1);
else if(kind==1)func_020a3bbc(5);
else if(kind==2)func_020a3bbc(6);
else if(kind==3)func_020a3bbc(112);
else if(kind==4)func_020a3bbc(7);
else if(kind==5)func_020a3bbc(8);
if(style==0) {width=8;height=10;mode=0;}
else if(style==4) {draw.v[1]=index;draw.v[2]=index;width=scale*3+15;height=scale*3+16;mode=5;}
else if(number<100) {width=8;height=10;mode=0;}
else if(number>=500) {draw.v[1]=index;draw.v[2]=index;width=14;height=19;mode=2;}
else {draw.v[1]=140;draw.v[2]=index;width=11;height=14;mode=1;}
draw.v[9]=height;draw.v[8]=width;
if(scale==0) {draw.v[4]=height;draw.v[3]=width;}else {draw.v[4]=16;draw.v[3]=15;}
digit=number%divisor;
divisor=1; index=0;
do {
s16 value;
if(divisor==1)value=digit;
else value=(number/divisor)%10;
if(mode==0 || mode==2)draw.v[1]=value*width;
else if(mode==1){draw.v[1]=value*width+140;draw.v[2]=0;}
else if(mode==5)draw.v[1]=value*15;
draw.v[5]=x-index*width;draw.v[6]=y;
func_021098ac(&draw);
index++;
divisor=(s16)divisor*10;
if(number<divisor)divisor=-1;
}while(divisor>0);
}

