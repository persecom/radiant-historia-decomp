/* 12 functions from 0x020C55BC to 0x020C641C (main), found by ds-decomp. */
#include "common.h"
typedef struct {s32 x,y,z;} Vec_020c55bc;
extern u8 *data_02160200;
extern const s16 data_0213a394[];
extern s32 func_020a6dd8(s32,s32);
extern u8 *func_020a7154(s32);
extern s32 func_020a6d54(void *);
extern void func_0210d27c(s32);
extern u8 *func_020a6360(void *,u8);
extern void func_02065cb8(s32);
extern void func_020a5cd4(void *);
extern s32 func_0210c2f4(void *,void *);
extern s32 func_02002404(s32,s32);
extern void func_020a5d0c(void *);
extern void func_020cea64(s32);
s32 func_020c5f08(void);
void func_020c6124(void);
typedef struct {u16 x,y,z,w;} Touch_020c5f08;
extern u16 data_021626a8, data_021628f8, data_02162908[4];
extern u8 *data_02160204;
extern u8 *func_020a5f40(void *, u16);
extern s32 func_020a5f6c(void *, void *, u16, u16);

extern void func_0210c5dc(void *);
extern void *data_021600e4;
extern u32 data_02155c3c;
extern void func_020c6dbc(void);
extern u16 *func_020a5f14(void *, u16);
extern void func_020a5c40(void *, u16);
extern void *func_0210c594(u32, u32);
extern void *func_020e9fe8(void *, u16);
extern void func_021167f0(void *, void *);

typedef struct {
    u8 pad[0x3c];
    u32 field_3c;
    u8 pad2[4];
    s32 field_44;
    s32 field_48;
    u8 pad2b[0x1c];
    s8 field_68;
    u8 pad3[7];
    s32 field_70;
    u8 pad4[0x54];
    s32 field_c8;
    u8 pad5[4];
    s32 field_d0;
    u8 pad6[0xd8];
    u32 field_1ac;
    u32 field_1b0;
} Unk_020c627c;
void func_020c55bc(void) {
 u8 *g=data_021600e4;
 s32 three=3,two=2,one=1,zero=0;
 u8 *cur=(u8 *)func_020a5f14(g+0x124,*(u16 *)(g+0xd4));
 u8 *p;
 switch(g[0xe0]) {
 case 0:
 if(!func_020a6dd8(three,14)) {
 p=func_020a7154(101);
 if((data_021626a8&0x400)||func_020a6d54(p)) {
 func_020a6dd8(one,one);*(u16 *)(p+0x30)|=2;*(u16 *)(g+0x13f2)=one;g[0xe0]=two;func_0210d27c(11);
 }}
 if(!func_020a6dd8(3,13)) {
 p=func_020a7154(102);
 if((data_021626a8&8)||func_020a6d54(p)) {
 func_020a6dd8(1,two);*(u16 *)(p+0x30)|=2;*(u16 *)(g+0x13f2)=two;g[0xe0]=two;func_0210d27c(11);
 }}
 if(!func_020a6dd8(3,11)) {
 p=func_020a7154(103);
 if(((data_021626a8&0x800)||func_020a6d54(p)) && (*(u32 *)(data_02160200+0x18)&1)) {
 func_020a6dd8(1,4);*(u16 *)(g+0x13f2)=three;g[0xe0]=two;func_0210d27c(11);
 }}
 if(!func_020a6dd8(3,15)) {
 if(!(*(u16 *)(g+0x19c)&16)) {
 *(u16 *)(g+0x19c)|=16;
 p=func_020a6360(g+0x118,cur[24]);if(p && *(u32 *)(p+0x18))*(u16 *)(g+0x19c)|=1;
p=func_020a6360(g+0x118,cur[25]);if(p && *(u32 *)(p+0x18))*(u16 *)(g+0x19c)|=2;
p=func_020a6360(g+0x118,cur[26]);if(p && *(u32 *)(p+0x18))*(u16 *)(g+0x19c)|=4;
p=func_020a6360(g+0x118,cur[27]);if(p && *(u32 *)(p+0x18))*(u16 *)(g+0x19c)|=8;
 }
 if(!*(u32 *)(g+0x30)) {
 s32 hit=0;
 if(data_021628f8) {
 s32 tx=data_02162908[0];
 s32 x=*(s32 *)(g+0x1ac)>>12;
 if(x-10<=tx && tx<x+10) {
 s32 ty=data_02162908[1];
 s32 y=*(s32 *)(g+0x1b0)>>12;
 if(y-30<=ty && ty<y)hit=1;
 }}
 if(data_021626a8&1)hit=1;
 if(hit) {
 func_020a6dd8(one,8);
 *(u16 *)(data_02160204+0x72)=*(u16 *)((u8 *)data_021600e4+0xd4);
 data_02160204[0x85]=one;func_02065cb8(2);
 *(u32 *)((u8 *)data_021600e4+0x30)=one;func_0210d27c(11);return;
 }}
 {s32 mask=func_020c5f08();
 if((*(u16 *)(g+0x19c)&1) && (mask&1)) {*(u8 **)(g+0xd8)=func_020a6360(g+0x118,cur[24]);g[0xe0]=one;func_0210d27c(2);}
if((*(u16 *)(g+0x19c)&2) && (mask&2)) {*(u8 **)(g+0xd8)=func_020a6360(g+0x118,cur[25]);g[0xe0]=one;func_0210d27c(2);}
if((*(u16 *)(g+0x19c)&4) && (mask&4)) {*(u8 **)(g+0xd8)=func_020a6360(g+0x118,cur[26]);g[0xe0]=one;func_0210d27c(2);}
if((*(u16 *)(g+0x19c)&8) && (mask&8)) {*(u8 **)(g+0xd8)=func_020a6360(g+0x118,cur[27]);g[0xe0]=one;func_0210d27c(2);}
 }
 if(g[0xe0]==1) {
 u8 *link=*(u8 **)(g+0xd8);
 u8 *a,*b;
 if(!link){g[0xe0]=zero;return;}
 func_020a5cd4(*(void **)(g+0x18c));*(u16 *)(g+0x19c)=zero;
 a=*(u8 **)(link+4);b=*(u8 **)(link+8);
 if(*(s16 *)(cur+6)==*(s16 *)(a+6) && *(s16 *)(cur+8)==*(s16 *)(a+8)) {
 g[0xe1]=one;*(u8 **)(g+0xdc)=a;*(s32 *)(g+0xe4)=*(s16 *)(b+6)<<12;*(s32 *)(g+0xec)=*(s16 *)(b+8)<<12;
 } else if(*(s16 *)(cur+6)==*(s16 *)(b+6) && *(s16 *)(cur+8)==*(s16 *)(b+8)) {
 g[0xe1]=two;*(u8 **)(g+0xdc)=b;*(s32 *)(g+0xe4)=*(s16 *)(a+6)<<12;*(s32 *)(g+0xec)=*(s16 *)(a+8)<<12;
 }
 g[0xe2]=zero;
 }
 }
 p=func_020a7154(101);if(p){*(s32 *)p+=*(s16 *)(p+0x2c)/4;if(*(s32 *)p>0)*(s32 *)p=zero;}
 p=func_020a7154(102);if(p){*(s32 *)p+=(*(s16 *)(p+0x2c)/4)*2;if(*(s32 *)p>0)*(s32 *)p=zero;}
 p=func_020a7154(103);if(p){*(s32 *)p-=40;if(*(s32 *)p<0)*(s32 *)p=zero;}
 p=func_020a7154(104);if(p){*(s32 *)p-=40;if(*(s32 *)p<0)*(s32 *)p=zero;}
 p=func_020a7154(105);if(p){*(s32 *)p+=34;if(*(s32 *)p>0)*(s32 *)p=zero;}
 p=func_020a7154(106);if(p){*(s32 *)p+=36;if(*(s32 *)p>0)*(s32 *)p=zero;}
 if(!(*(u16 *)(g+0x19c)&32))func_020c6124();
 p=func_020a7154(107);if(p){*(s32 *)p-=40;if(*(s32 *)p<0)*(s32 *)p=zero;}
 break;
 case 1: {
 Vec_020c55bc start,end;
 s32 distance;
 u8 *node=*(u8 **)(g+0xdc);
 distance=zero;
 while(node) {
 start=*(Vec_020c55bc *)(g+0xc8);
 end.x=*(s16 *)(node+6)<<12;end.z=*(s16 *)(node+8)<<12;
 if(func_0210c2f4(&start,&end)>0x2000-distance)break;
 distance+=func_0210c2f4(&start,&end);
 *(s32 *)(g+0xc8)=*(s16 *)(node+6)<<12;
 *(s32 *)(g+0xd0)=*(s16 *)(node+8)<<12;
 if(g[0xe1]==1)node=*(u8 **)(node+16);else if(g[0xe1]==2)node=*(u8 **)(node+12);
 if(node && *(u16 *)(node+4))*(u16 *)(g+0xd4)=*(u16 *)(node+4);
 }
 if(node) {
 s32 angle=func_02002404(end.x-start.x,end.z-start.z);
 s32 index=(angle%65536)>>4;
 s32 step=(0x2000-distance)>>12;
 *(s32 *)(g+0xc8)+=step*data_0213a394[index*2];
 *(s32 *)(g+0xd0)+=step*data_0213a394[index*2+1];
 } else {
 *(u32 *)(g+0xdc)=zero;g[0xe0]=zero;*(u32 *)(g+0x34)=1;g[0xe2]=1;*(u16 *)(g+0x19c)=zero;
 }
 *(u8 **)(g+0xdc)=node;
 p=func_020a7154(101);if(p){*(s32 *)p-=*(s16 *)(p+0x2c)/4;if(*(s32 *)p< -*(s16 *)(p+0x2c))*(s32 *)p= -*(s16 *)(p+0x2c);}
 p=func_020a7154(102);if(p){*(s32 *)p-=(*(s16 *)(p+0x2c)/4)*2;if(*(s32 *)p< -*(s16 *)(p+0x2c))*(s32 *)p= -*(s16 *)(p+0x2c)*2;}
 p=func_020a7154(103);if(p){*(s32 *)p+=40;if(*(s32 *)p>160)*(s32 *)p=160;}
 p=func_020a7154(104);if(p){*(s32 *)p+=40;if(*(s32 *)p>160)*(s32 *)p=160;}
 {s32 id=105;p=func_020a7154(id);if(p){*(s32 *)p-=34;if(*(s32 *)p<id-243)*(s32 *)p=id-243;}}
 {s32 id=106;p=func_020a7154(id);if(p){*(s32 *)p-=36;if(*(s32 *)p<id-250)*(s32 *)p=id-250;}}
 {u8 *panel=*(u8 **)(g+0x18c);*(s32 *)(panel+0x6c)-=0x24000;if((*(s32 *)(panel+0x6c)>>12)<-144)*(s32 *)(panel+0x6c)=-144*4096;}
 func_020a5d0c(*(void **)(g+0x18c));
 p=func_020a7154(107);if(p){*(s32 *)p+=40;if(*(s32 *)p>160)*(s32 *)p=160;}
 break;
 }
 case 2:
 (*(volatile s16 *)(g+0x13f0))++;
 if(*(volatile s16 *)(g+0x13f0)<=2)return;
 *(s16 *)(g+0x13f0)=zero;
 *(u16 *)(data_02160204+0xf6)=*(u16 *)(g+0xd4);
 if(*(u16 *)(g+0x13f2)==1) {*(u16 *)(data_02160204+0x11a)=4;func_02065cb8(11);}
 else if(*(u16 *)(g+0x13f2)==2) {func_02065cb8(29);func_020cea64(zero);}
 else if(*(u16 *)(g+0x13f2)==3) {
 *(u16 *)(data_02160204+0x72)=2000;*(u16 *)(data_02160204+0xf4)=4;
 data_02160204[0x110]=two;*(u16 *)(data_02160204+0x74)=100;*(u16 *)(data_02160204+0x76)=100;func_02065cb8(18);
 }
 *(u32 *)(g+0x30)=one;
 break;
 }
}

#pragma scheduling off
s32 func_020c5f08(void)
{
  Touch_020c5f08 touch;
  u8 *new_var;
  s32 i;
  u8 *n;
  s32 y;
  int new_var2;
  s32 x;
  u8 *p;
  s32 result = 0;
  u16 *current;
  if (data_021626a8 & 0x40)
  {
    result |= 1;
    if (1)
    {
    }
  }
  if (data_021626a8 & 0x80)
  {
    result |= 2;
  }
  if (data_021626a8 & 0x20)
  {
    result |= 4;
  }
  new_var2 = 6;
  if (data_021626a8 & 0x10)
  {
    result |= 8;
  }
  touch = *((Touch_020c5f08 *) data_02162908);
  p = data_021600e4;
  current = func_020a5f14(p + 0x124, *((u16 *) (p + 0xd4)));
  if (data_021628f8)
  {
    y = touch.y;
    x = touch.x;
    for (i = 0; i < 37; i++)
    {
      n = func_020a5f40(p + 0x124, (u16) i);
      if (n)
      {
        s32 nx = *((s16 *)(n + 6));
        s32 ny = *((s16 *)(n + 8));
        nx *= *((s32 *)(p + 0x70));
        nx = (nx - 22) + *((s32 *)(p + 0x44));
        ny *= *((s32 *)(p + 0x70));
        ny = (ny + 4) + *((s32 *)(p + 0x48));
        s32 left = nx - 14;
        s32 right = nx + 14;
        s32 top = ny - 14;
        s32 bottom = ny + 14;
        s32 hit;
        if ((((x >= left) && (x <= right)) && (y >= top)) && (y <= bottom))
        {
          hit = 1;
        }
        else
        {
          hit = 0;
        }
        if (hit == 1)
        {
          u16 id = *((u16 *) n);
          u16 old = *((u16 *) (p + 0xd4));
          if (old == id)
          {
            s32 one = 1;
            func_020a6dd8(one, 8);
            *((u16 *) (data_02160204 + 0x72)) = *((u16 *) (((u8 *) data_021600e4) + 0xd4));
            data_02160204[0x85] = one;
            func_02065cb8(2);
            new_var = (u8 *) data_021600e4;
            *((s32 *) (new_var + 0x30)) = one;
            func_0210d27c(11);
            return 0;
          }
          else
          {
            s32 dir = func_020a5f6c(p + 0x124, current, old, id);
            if ((dir >= 0) && (func_020a5f6c(p + 0x124, n, *((u16 *) n), *((u16 *) (p + 0xd4))) >= 0))
            {
              switch (dir)
              {
                case 0:
                  return result | 1;

                case 1:
                  return result | 8;

                case 2:
                  return result | 2;

                case 3:
                  return result | 4;

              }

            }
          }
        }
      }
    }

  }
  return result;
}
#pragma scheduling on
void func_020c6124(void) {
    u8 *ptr = data_021600e4;
    u16 *res = func_020a5f14(ptr + 0x124, *(u16 *)(ptr + 0xd4));
    func_020a5c40(*(void **)(ptr + 0x18c), *res);
    *(u16 *)(ptr + 0x19c) |= 0x20;
}

void func_020c6160(void *arg0, u16 arg1) {
    u8 *node;
    u8 *obj;
    if (data_021600e4 == NULL) {
        return;
    }
    node = func_0210c594(0x10, data_02155c3c);
    obj = func_020e9fe8(arg0, arg1);
    *(u32 *)(obj + 0x18) &= ~1;
    *(void **)(node + 4) = obj;
    *(u16 *)node = arg1;
    func_021167f0((u8 *)data_021600e4 + 0x1a0, node);
}

void *func_020c61cc(u16 arg0) {
    u8 *node = *(u8 **)((u8 *)data_021600e4 + 0x1a0);
    while (node != NULL) {
        if (*(u16 *)node == arg0) {
            return *(void **)(node + 4);
        }
        node = *(u8 **)(node + 0xc);
    }
    return NULL;
}

void func_020c6208(void) {
    void *base = (void *)0x1b5b;
    u16 idx = 0;
    u8 *obj;
    func_020c6160(base, idx);
    obj = func_020c61cc(idx);
    *(u32 *)(obj + 0x1c) = 0xc8000;
    *(u32 *)(obj + 0x20) = 0x79000;
    *(u32 *)(obj + 0x24) = 0x14000;
    base = (void *)((u32)base - 0x3e0);
    func_020c6160(base, 1);
    func_020c6160(base, 2);
    func_020c6160(base, 3);
    func_020c6160(base, 4);
}

void func_020c627c(void)
{
  u8 *p = data_021600e4;
  u8 *obj;
  s32 a;
  s32 scale;
  s32 t1;
  s32 b;
  s32 v2;
  s32 t2;
  s32 base1;
  s32 base2;
  if (p == NULL)
  {
    return;
  }
  obj = func_020c61cc(0);
  if (obj == NULL)
  {
    return;
  }
  base1 = 12;
  *((u32 *) (obj + 0x18)) = (*((u32 *) (obj + 0x18))) & (~1);
  if ((((*((u32 *) (p + 0x3c))) & 2) != 0) || ((*((s8 *) (p + 0x68))) != 1))
  {
    return;
  }
  *((u32 *) (obj + 0x18)) |= 1;
  a = *((s32 *) (p + 0xc8));
  scale = *((s32 *) (p + 0x70));
  t1 = ((a >> base1) * scale) - 0x20;
  b = *((s32 *) (p + 0xd0));
  ;
  v2 = scale;
  v2 = b;
  v2 = (v2 >> base1) * v2;
  t2 = v2 + 0x14;
  *((u32 *) (obj + 0x1c)) = ((*((s32 *) (p + 0x44))) + t1) << base1;
  base2 = *((s32 *) (p + 0x48));
  *((u32 *) (obj + 0x20)) = (base2 + t2) << base1;
  *((u32 *) (p + 0x1ac)) = *((u32 *) (obj + 0x1c));
  *((u32 *) (p + 0x1b0)) = *((u32 *) (obj + 0x20));
}

s32 func_020c6324(void) {
    func_020c6dbc();
    return 0;
}

void func_020c6334(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_020c6348(u8 *arg0) {
    u32 v = arg0[0x4d] + 1;
    arg0[0x4d] = v;
    if ((v & 0xff) > 12) {
        arg0[0x4d] = 0;
    }
    return 0;
}

extern s32 func_020c73c0(void *);
extern s32 func_020c7408(void *);
extern void func_020c6df4(void *);
extern void func_020c6e40(void *, void *, s16, s32);
s32 func_020c636c(u8 *arg0) {
    if (func_020c73c0(arg0) == 0) {
        return 0;
    }
    *(volatile u32 *)0x40004a4 = (*(u8 *)(arg0 + 0x42) << 16) | 0xc0;
    if (func_020c7408(arg0) != 0) {
        func_020c6df4(arg0);
        return 0;
    }
    switch (arg0[0x4c]) {
        case 0:
            func_020c6e40(arg0, arg0 + 0x30, arg0[0x4d] / 4, 0);
            break;
        case 1:
            func_020c6e40(arg0, arg0 + 0x30, -(s32)arg0[0x4d] / 4, 0);
            break;
    }
    return 0;
}

s32 func_020c6414(void) {
    return 9;
}

