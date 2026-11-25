/* 52 functions from 0x020C83F4 to 0x020C93F4 (main), found by ds-decomp. */
#include "common.h"
typedef struct Row_020c9000 { u16 id; s16 dir; u16 mask; } Row_020c9000;
typedef struct Table_020c9000 { u16 v[6]; } Table_020c9000;
extern const Table_020c9000 data_0214460c;
extern u16 data_021626a6;
s32 func_020c70c0(void *, u16);
void func_020c9404(u8 *);
s32 func_020c6fe4(void *);
void func_020c96b4(u8 *, void *);
u16 func_020c9744(u8 *, void *);
void func_020c7090(void *, s32);
void func_020c9348(u8 *, s32);
typedef struct { s16 data[24]; } Unk_020c8c08;
extern const Unk_020c8c08 data_02144618;
static inline s32 contains_020c8650(s32 x, s32 y, s32 right, s32 bottom, s32 tx, s32 ty) { if(tx>=x && tx<=right && ty>=y && ty<=bottom) return 1; return 0; }
extern const u16 data_02144600[6];

extern void func_020c6f14(void);
extern void func_0210c5dc(void *);
extern void func_020c8dc0(void *, s32, s32);
extern void func_020a9610(void *, s32, s32, void *, s32, s32);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
extern void func_0203bc34(s32, void *, s32, s32, s32, s32);
extern void func_020a98a0(void *);
extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_020a9830(void *, void *, s32, s32, s32, s32);
extern s32 func_020c73c0(void *);
extern void func_020c9b64(void *);
extern u32 func_020c9c34(void *);
extern void *func_020c9c10(void *, u16);
extern void func_020c7f6c(void *, s32, s32);
extern void func_020c8008(void *, u8);
extern void func_020c9bb8(void *);
extern void func_020c9000(u8 *);
extern void func_020c8f20(u8 *);
extern void func_020c80ac(u8 *, s32, s32);
extern u8 *func_020c9b24(void *, s32, s32);
extern void func_020c8b58(u8 *, u8 *);
void func_020c83f4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    (*(void (**)(void *))(*(u8 **)(arg0 + 0x30) + 4))(*(void **)(arg0 + 0x30));
    (*(void (**)(void *))(*(u8 **)(arg0 + 0x30) + 8))(*(void **)(arg0 + 0x30));
    if (*(void **)(arg0 + 0x40) != NULL) {
        func_020a9610(arg0 + 0x44, arg1, arg2, *(void **)(arg0 + 0x30), 0, 0);
        func_020a98ac(*(void **)(arg0 + 0x40));
        func_020a98f4(*(void **)(arg0 + 0x40));
    } else {
        func_0203bc34(arg1, *(void **)(arg0 + 0x30), arg2, 0, 0, arg3);
    }
}

void func_020c8488(u8 *arg0) {
    (*(void (**)(void *))(*(u8 **)(arg0 + 0x30) + 4))(*(void **)(arg0 + 0x30));
    (*(void (**)(void *))(*(u8 **)(arg0 + 0x30) + 8))(*(void **)(arg0 + 0x30));
}

void func_020c84ac(u8 *arg0) {
    if (*(void **)(arg0 + 0x40) != NULL) {
        func_020a98a0(*(void **)(arg0 + 0x40));
        if (*(void **)(arg0 + 0x40) != NULL) {
            func_0210c5dc(*(void **)(arg0 + 0x40));
            *(void **)(arg0 + 0x40) = NULL;
        }
        *(void **)(arg0 + 0x40) = NULL;
    }
}

void func_020c84e8(u8 *arg0, s32 arg1, s32 arg2) {
    func_020c84ac(arg0);
    *(void **)(arg0 + 0x40) = func_0210c594(0x34, data_02155c3c);
    *(void **)(arg0 + 0x48) = *(void **)(arg0 + 0x30);
    func_020a9830(*(void **)(arg0 + 0x40), arg0 + 0x44, arg1, arg2, 0, 0);
}

void func_020c8548(u8 *arg0, s32 arg1) {
    *(s32 *)(*(u8 **)(arg0 + 0x30) + 0x44) = arg1 << 12;
}

void func_020c8558(u8 *arg0, s32 arg1) {
    *(s32 *)(*(u8 **)(arg0 + 0x30) + 0x48) = arg1 << 12;
}

void func_020c8568(u8 *arg0, s32 arg1, s32 arg2) {
    func_020c8548(arg0, arg1);
    func_020c8558(arg0, arg2);
}

void func_020c8588(u8 *arg0, u16 arg1) {
    *(u16 *)(arg0 + 0x3a) = arg1;
}

void func_020c8590(u8 *arg0, u16 arg1) {
    *(u16 *)(arg0 + 0x3c) = arg1;
}

void func_020c8598(u8 *arg0, s32 arg1) {
    *(s32 *)(*(u8 **)(arg0 + 0x30) + 0x4c) += arg1 << 12;
}

extern void func_020c8548(u8 *, s32);
extern void func_020c8558(u8 *, s32);
void func_020c85ac(u8 *arg0, s32 arg1) {
    *(s32 *)(*(u8 **)(arg0 + 0x30) + 0x4c) = arg1 << 12;
}

void func_020c85bc(u8 *arg0, s32 arg1) {
    *(s32 *)(*(u8 **)(arg0 + 0x30) + 0x4c) = arg1 << 12;
}

u8 func_020c85cc(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 0x30);
    if (p == NULL) {
        return 0x2d;
    }
    return *(s32 *)(p + 0x4c) >> 12;
}

extern void func_020c9940(void *);
extern void func_020a9544(void *);
void func_020c85e8(u8 *arg0) {
    (*(void (**)(void *))(*(u8 **)(arg0 + 0x30) + 4))(*(void **)(arg0 + 0x30));
    (*(void (**)(void *))(*(u8 **)(arg0 + 0x30) + 8))(*(void **)(arg0 + 0x30));
    if (*(void **)(arg0 + 0x34) != NULL) {
        func_020a9544(*(void **)(arg0 + 0x34));
        *(void **)(arg0 + 0x34) = NULL;
    }
}

s32 func_020c8624(void) {
    return 4;
}

void func_020c862c(u8 *arg0, u8 arg1) {
    arg0[0x38] = arg1;
}

void func_020c8634(u8 *arg0, u8 arg1, u8 arg2) {
    arg0[0x3e] = arg1;
    arg0[0x3f] = arg2;
}

extern void func_020a8810(void *);
extern void func_020a30c4(u16);
void func_020c8640(u8 *arg0) {
    func_020a8810(*(void **)(arg0 + 0x30));
}

extern u16 data_021628fa[];
extern u16 data_021628f8;
extern s16 data_02162908[];
extern s32 func_020c73d8(void *);
extern void func_020c738c(void *, s32, s32);
s32 func_020c8650(u8 *p) {
u8 old=func_020c73d8(p); s32 x,y,right,bottom,tx,ty; u8 inside; u8 *v;
if(func_020c73d8(p)) {if(data_021628fa[0]==0)return 1;func_020c738c(p,0,2);}
else {if(data_021628f8==0)return 1;if((u16)data_02162908[2]==0)return 1;}
v=*(u8 **)(p+0x30); y=*(s16 *)(p+0x3c);x=*(s16 *)(p+0x3a);
right=x+*(s32 *)(v+0x18); bottom=y+*(s32 *)(v+0x1c);
tx=data_02162908[0];ty=data_02162908[1]; inside=contains_020c8650(x,y,right,bottom,tx,ty);
if(inside) {if(!old)func_020c738c(p,2,2);return 0;}return 2;
}

extern void func_020c6dbc(void *);
void func_020c8794(u8 *arg0);
s32 func_020c874c(u8 *arg0) {
    func_020c6dbc(arg0);
    *(void **)(arg0 + 0x48) = (void *)func_020c8794;
    *(u16 *)(arg0 + 0x36) = 0x10;
    *(u16 *)(arg0 + 0x38) = 0x10;
    *(u16 *)(arg0 + 0x3e) = 0x10;
    *(u16 *)(arg0 + 0x40) = 0x10;
    return 0;
}

void func_020c8780(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020c8794(u8 *arg0) {
    func_020a30c4(*(u16 *)(arg0 + 0x4c));
}

s32 func_020c87a4(u8 *arg0) {
    func_020c77d8(arg0);
    if (*(void **)(arg0 + 0x54) == NULL) {
        *(void **)(arg0 + 0x54) = func_0210c594(8, data_02155c3c);
        func_020c992c();
        func_020c9a04(*(void **)(arg0 + 0x54), 0xc);
    }
    *(u8 *)(arg0 + 0x5c) = *(u8 *)(arg0 + 0x43) - 1;
    return 0;
}

extern void func_020c8818(void *);
void func_020c87f8(void *arg0) {
    func_020c8818(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020c8818(void *arg0) {
    if (*(void **)((u8 *)arg0 + 0x54) != NULL) {
        func_020c9940(*(void **)((u8 *)arg0 + 0x54));
        if (*(void **)((u8 *)arg0 + 0x54) != NULL) {
            func_0210c5dc(*(void **)((u8 *)arg0 + 0x54));
            *(void **)((u8 *)arg0 + 0x54) = NULL;
        }
        *(void **)((u8 *)arg0 + 0x54) = NULL;
    }
    func_020c7838(arg0);
}

s32 func_020c885c(u8 *arg0) {
    if (func_020c73c0(arg0) == 0) {
        return 2;
    }
    func_020c786c(arg0);
    func_020c9b64(*(void **)(arg0 + 0x54));
    return 0;
}

void func_020c888c(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *obj;
    s32 x;
    s32 y;
    u16 i;
    u32 count = func_020c9c34(*(void **)(arg0 + 0x54));
    for (i = 0; i < count; i++) {
        obj = func_020c9c10(*(void **)(arg0 + 0x54), i);
        if (obj != NULL) {
            ((void (*)(u8 *))(*(void **)(obj + 0x28)))(obj);
            x = (s16)(arg1 + (*(s16 *)(obj + 0x3a) - *(s16 *)(arg0 + 0x58)));
            y = (s16)(arg2 + (*(s16 *)(obj + 0x3c) - *(s16 *)(arg0 + 0x5a)));
            ((void (*)(u8 *, s32))(*(void **)(obj + 0x10)))(obj, x);
            ((void (*)(u8 *, s32))(*(void **)(obj + 0x14)))(obj, y);
        }
    }
    *(s16 *)(arg0 + 0x58) = arg1;
    *(s16 *)(arg0 + 0x5a) = arg2;
    func_020c7f6c(arg0, arg1, arg2);
}

extern void func_020c888c(u8 *, s32, s32);
void func_020c8948(u8 *arg0, s32 arg1) {
    func_020c888c(arg0, arg1, *(s16 *)(arg0 + 0x5a));
}

extern s32 func_020c786c(u8 *);
void func_020c8958(u8 *arg0, s32 arg1) {
    func_020c888c(arg0, *(s16 *)(arg0 + 0x58), arg1);
}

void func_020c896c(u8 *arg0, s32 arg1) {
    u8 *obj;
    u16 i;
    u32 count = func_020c9c34(*(void **)(arg0 + 0x54));
    for (i = 0; i < count; i++) {
        obj = func_020c9c10(*(void **)(arg0 + 0x54), i);
        if (obj != NULL) {
            s32 delta;
            if (((s32 (*)(u8 *))(*(void **)(obj + 0x28)))(obj) == 4) {
                delta = func_020c85cc(obj) - arg0[0x5c];
            } else {
                delta = obj[0x43] - arg0[0x5c];
            }
            ((void (*)(u8 *, u8))(*(void **)(obj + 0x1c)))(obj, arg1 + delta);
        }
    }
    arg0[0x5c] = arg1;
    func_020c8008(arg0, arg1);
}

void func_020c8a08(void) {
    func_020c6f14();
}

void func_020c8a14(u8 *arg0, s32 arg1) {
    u16 i;
    u32 count = func_020c9c34(*(void **)(arg0 + 0x54));
    for (i = 0; i < count; i++) {
        u8 *obj = func_020c9c10(*(void **)(arg0 + 0x54), i);
        if (obj != NULL) {
            ((void (*)(u8 *, s32))(*(void **)(obj + 0x20)))(obj, arg1);
        }
    }
}

void func_020c8a6c(u8 *arg0, s32 arg1, s32 arg2) {
    u16 i;
    u32 count = func_020c9c34(*(void **)(arg0 + 0x54));
    for (i = 0; i < count; i++) {
        u8 *obj = func_020c9c10(*(void **)(arg0 + 0x54), i);
        if (obj != NULL) {
            ((void (*)(u8 *, s32, s32))(*(void **)(obj + 0x24)))(obj, arg1, arg2);
        }
    }
    func_020c80ac(arg0, arg1, arg2);
}

u8 *func_020c8adc(u8 *arg0) {
    u8 *obj = func_020c9c10(*(void **)(arg0 + 0x54), 0);
    if (obj != NULL) {
        return obj;
    }
    return func_020c9b24(*(void **)(arg0 + 0x54), 0, 4);
}

u8 *func_020c8b10(u8 *arg0) {
    u8 *obj = func_020c9c10(*(void **)(arg0 + 0x54), 1);
    if (obj != NULL) {
        return obj;
    }
    u8 *ret = func_020c9b24(*(void **)(arg0 + 0x54), 1, 1);
    func_020c8b58(arg0, ret);
    return ret;
}

void func_020c8b58(u8 *arg0, u8 *obj) {
    ((void (*)(u8 *, s16))(*(void **)(obj + 0x10)))(obj, *(s16 *)(arg0 + 0x58));
    ((void (*)(u8 *, s16))(*(void **)(obj + 0x14)))(obj, *(s16 *)(arg0 + 0x5a));
}

s32 func_020c8b88(void) {
    return 0x12;
}

extern void func_020c71bc(void);
s32 func_020c8b90(void) {
    func_020c71bc();
    return 0;
}

void func_020c8ba0(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

BOOL func_020c8bb4(u8 *arg0)
{
  s32 delta;
  s32 cur = *((s32 *) (arg0 + 0x4c));
  s32 next = cur + (*((s32 *) (arg0 + 0x58)));
  *((s32 *) (arg0 + 0x4c)) = next;
  cur = 0x54;
  if ((*((s32 *) (arg0 + 0x58))) > 0)
  {
    if (next >= (*((s32 *) (arg0 + 0x54))))
    {
      *((s32 *) (arg0 + 0x4c)) = *((s32 *) (arg0 + cur));
      *((s32 *) (arg0 + 0x58)) = 0x4c * 0;
    }
  }
  else
    if ((*((s32 *) (arg0 + 0x58))) < 0)
  {
    if (next <= (*((s32 *) (arg0 + cur))))
    {
      *((s32 *) (arg0 + 0x4c)) = *((s32 *) (arg0 + cur));
      *((s32 *) (arg0 + 0x58)) = 0;
    }
  }
  return FALSE;
}

s32 func_020c8c08(u8 *arg0) {
 Unk_020c8c08 buf;
 u16 i;
 func_020c6d78();
 if(*(void **)(arg0+0x30)==NULL) {
 *(void **)(arg0+0x30)=func_0210c594(8,data_02155c3c);
 func_020c992c(*(void **)(arg0+0x30));
 func_020c9a04(*(void **)(arg0+0x30),3);
 }
 buf=data_02144618;
 for(i=0;i<3;i++) {
 s16 type=((s16 (*)[8])buf.data)[i][0];
 u8 *p=func_020c9b24(*(void **)(arg0+0x30),(u16)type,(u8)((s16 (*)[8])buf.data)[i][1]);
 *(s16 *)(p+0x32)=((s16 (*)[8])buf.data)[i][2];
 *(s16 *)(p+0x34)=((s16 (*)[8])buf.data)[i][3];
 *(s16 *)(p+0x36)=((s16 (*)[8])buf.data)[i][4];
 *(s16 *)(p+0x38)=((s16 (*)[8])buf.data)[i][5];
 *(s16 *)(p+0x3e)=((s16 (*)[8])buf.data)[i][6];
 *(s16 *)(p+0x40)=((s16 (*)[8])buf.data)[i][7];
 (*(void (**)(u8 *,u8))(p+0x1c))(p,(u8)(p[0x43]+1));
 if(type==2) func_020c7894(p,3);
 }
 return 0;
}

void func_020c8d24(u8 *arg0) {
    if (*(void **)(arg0 + 0x30) != NULL) {
        func_020c9940(*(void **)(arg0 + 0x30));
        if (*(void **)(arg0 + 0x30) != NULL) {
            func_0210c5dc(*(void **)(arg0 + 0x30));
            *(void **)(arg0 + 0x30) = NULL;
        }
        *(void **)(arg0 + 0x30) = NULL;
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_020c8d70(u8 *arg0) {
    if (func_020c73c0(arg0) == 0) {
        return 1;
    }
    func_020c9b64(*(void **)(arg0 + 0x30));
    return 0;
}

s32 func_020c8d98(u8 *arg0) {
    func_020c9bb8(*(void **)(arg0 + 0x30));
    func_020c9000(arg0);
    func_020c8f20(arg0);
    return 0;
}

void func_020c8dc0(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = arg0;
    u16 i;
    s16 x;
    s16 y;
    u32 count = func_020c9c34(*(void **)(p + 0x30));
    for (i = 0; i < count; i++) {
        u8 *obj = func_020c9c10(*(void **)(p + 0x30), i);
        x = arg1 + (*(s16 *)(obj + 0x3a) - *(s16 *)(p + 0x34));
        y = arg2 + (*(s16 *)(obj + 0x3c) - *(s16 *)(p + 0x36));
        ((void (*)(u8 *, s32))(*(void **)(obj + 0x10)))(obj, x);
        ((void (*)(u8 *, s32))(*(void **)(obj + 0x14)))(obj, y);
    }
    *(s16 *)(p + 0x34) = arg1;
    *(s16 *)(p + 0x36) = arg2;
}

void func_020c8e5c(u8 *arg0, u8 arg1) {
    u16 i;
    u32 count = func_020c9c34(*(void **)(arg0 + 0x30));
    for (i = 0; i < count; i++) {
        u8 *obj = func_020c9c10(*(void **)(arg0 + 0x30), i);
        s32 delta = obj[0x43] - arg0[0x38];
        ((void (*)(u8 *, u8))(*(void **)(obj + 0x1c)))(obj, arg1 + delta);
    }
    arg0[0x38] = arg1;
}

void func_020c8ec0(u8 *arg0, s32 arg1) {
    func_020c8dc0(arg0, arg1, *(s16 *)(arg0 + 0x36));
}

extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_020a9830(void *, void *, s32, s32, s32, s32);
void func_020c8ed0(u8 *arg0, s32 arg1) {
    func_020c8dc0(arg0, *(s16 *)(arg0 + 0x34), arg1);
}

extern void func_020c9610(u8 *);
void func_020c8ee4(u8 *arg0, u16 *arg1)
{
  u16 v0 = arg1[0];
  u16 v1 = arg1[1];
  u16 new_var;
  u16 v2 = arg1[2];
  u16 v3 = arg1[3];
  u16 v4 = arg1[4];
  u16 v5 = arg1[5];
  u16 *new_var2;
  *((u16 *) (arg0 + 0x4c)) = v3;
  *((u16 *) (arg0 + 0x46)) = v0;
  *((u16 *) (arg0 + 0x48)) = v1;
  *((u16 *) (arg0 + 0x4a)) = v2;
  new_var2 = (u16 *) (arg0 + 0x50);
  *((u16 *) (arg0 + 0x4c)) = v3;
  new_var = v4;
  *((u16 *) (arg0 + 0x4e)) = new_var;
  *new_var2 = v5;
  func_020c8f20(arg0);
}

void func_020c8f20(u8 *arg0) {
u16 vals[6];
u16 *ptrs[3];
u16 *ids = vals;
u16 i;
vals[0]=data_02144600[0]; vals[1]=data_02144600[1]; vals[2]=data_02144600[2]; vals[3]=data_02144600[3]; vals[4]=data_02144600[4]; vals[5]=data_02144600[5];
ptrs[0]=(u16 *)(arg0+0x46); ptrs[1]=(u16 *)(arg0+0x4a); ptrs[2]=(u16 *)(arg0+0x4e);
for(i=0;i<3;i++) {
u8 *obj=func_020c9c10(*(void **)(arg0+0x30),ids[i*2]);
u16 *p=ptrs[i];
if ((func_020c73d8(obj) != 0 || func_020c7420(obj) != 0) && (i==2 || func_020c73f0(obj) != 0)) *(u16 *)(obj+0x30)=p[1];
else *(u16 *)(obj+0x30)=p[0];
}
}

void func_020c9000(u8 *p) {
Table_020c9000 t=data_0214460c;
u8 action=0;
u16 count=*(u16 *)(p+0x42),i;
u8 *obj;
for(i=0;i<2;i++) {
Row_020c9000 *row=&((Row_020c9000 *)&t)[i];
if(func_020c70c0(func_020c9c10(*(void **)(p+0x30),row->id),row->mask)) {
s16 pos,old; old=*(u16 *)(p+0x3e); pos=*(s16 *)(p+0x3a);
if((s16)row->dir==1) ++*(u16 *)(p+0x3e);
else if((s16)row->dir==2 && *(u16 *)(p+0x3e)) --*(u16 *)(p+0x3e);
p[0x45]=1; func_020c9404(p);
if(old!=*(u16 *)(p+0x3e)) *(s16 *)(p+0x3a)=pos+(s16)(*(u16 *)(p+0x3e)-old);
func_020c9610(p);
}
}
obj=func_020c9c10(*(void **)(p+0x30),2);
p[0x45]=0;
if(data_021628fa[0] && func_020c7420(obj)) {
func_020c738c(obj,0,8); func_020c8f20(p); func_020c9610(p);
}
if(((u16 *)data_02162908)[2]) {
if(data_021628f8) {
if(!func_020c6fe4(obj)) {
func_020c738c(obj,8,8);
*(u16 *)(p+0x5c)=((u16 *)data_02162908)[0]; *(u16 *)(p+0x5e)=((u16 *)data_02162908)[1];
*(s16 *)(p+0x58)=*(s16 *)(obj+0x3a); *(s16 *)(p+0x5a)=*(s16 *)(obj+0x3c);
}
} else if(func_020c7420(obj)) {
u16 delta=0,newpos;
func_020c96b4(p,obj); newpos=func_020c9744(p,obj);
p[0x45]=1;
if(*(u16 *)(p+0x3a)>=*(u16 *)(p+0x3e)) delta=*(u16 *)(p+0x3a)-*(u16 *)(p+0x3e);
*(u16 *)(p+0x3e)=newpos;
*(u16 *)(p+0x3a)=newpos+delta;
}
}
if(data_021626a6&0x40) {obj=func_020c9c10(*(void **)(p+0x30),1); action=2; func_020c7090(obj,action);}
if(data_021626a6&0x80) {obj=func_020c9c10(*(void **)(p+0x30),0); action=1; func_020c7090(obj,action);}
p[0x56]=action; p[0x44]=0;
if(action==1) {
++*(u16 *)(p+0x3a);
if(count) {if(*(u16 *)(p+0x3a)>=count) {*(u16 *)(p+0x3a)=count-1; p[0x44]|=1;}}
else *(u16 *)(p+0x3a)=0;
} else if(action==2) {
if(*(u16 *)(p+0x3a)) --*(u16 *)(p+0x3a);
else {*(u16 *)(p+0x3a)=0; p[0x44]|=1;}
}
p[0x44]|=(u8)(*(u16 *)(p+0x3c)!=*(u16 *)(p+0x3a));
if(p[0x44]) func_020c9348(p,*(u16 *)(p+0x3c)>*(u16 *)(p+0x3a));
*(u16 *)(p+0x3c)=*(u16 *)(p+0x3a);
}

void func_020c9348(u8 *arg0, s32 arg1) {
u32 limit;
u32 step;
s16 val;
u16 cur=*(u16 *)(arg0+0x3e);
u16 end=*(u16 *)(arg0+0x3a);
step=*(u16 *)(arg0+0x40);
val=(s16)cur;
limit=*(u16 *)(arg0+0x42);
if(end<cur){switch(arg1){case 0:val=end-step+1;break;case 1:val=end;break;}}
if(end>=(s32)(cur+step)){switch(arg1){case 0:val=end-step+1;break;case 1:val=end;break;}}
if(val<0)val=0;
if(limit>=step){s32 max=limit-step;if(val>max)val=max;}
*(u16 *)(arg0+0x3e)=val;
func_020c9610(arg0);
}

