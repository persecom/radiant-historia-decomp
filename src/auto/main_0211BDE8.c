/* 30 functions from 0x0211BDE8 to 0x0211CDC8 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s32 a,b,c,d; } Mat22_0211bd;
typedef struct { s32 x,y; } Vec2_0211bd;
typedef struct { u32 tile:10; u32 rest:22; } Tile_0211bd;
extern const s32 data_02144ed0[6];
extern void func_0211bb3c(void *,void *,void *);
extern const u16 data_02144d84[3][4], data_02144d6c[3][4];
extern void func_02002bd8(void *);
extern void func_0211ab48(s32, s32, s32, void *, void *, u32, u32);
typedef struct { u32 y:8; u32 flags:8; u32 x:9; u32 rest:3; u32 flipx:1; u32 flipy:1; u32 size:2; } Obj_0211c1f8;
static inline s16 ObjX_0211c1f8(const Obj_0211c1f8 *a) { s16 x=a->x; if(x>255)x |= 0xff00; return x; }
static inline s16 ObjY_0211c1f8(const Obj_0211c1f8 *a) { s16 y=a->y; if(y>127)y |= 0xff00; return y; }
typedef struct Unk_0211c424 { u16 x, y, z; } Unk_0211c424;
typedef struct State_0211c424 { u8 pad[0x30]; s32 enabled; u32 unk34; u16 x, y, z; } State_0211c424;
typedef struct List_0211c424 { u16 count; u16 pad; Unk_0211c424 *entries; } List_0211c424;
typedef struct Callbacks_0211c424 { u8 pad[0x20]; void (*before)(void *, void *, u16); void (*after)(void *, void *, u16); } Callbacks_0211c424;

extern void func_02008df0(s32, void *, s32);
extern u8 *data_021701f8;
s32 func_0211c5d4(u8 *);
static inline u16 FlipX_0211c1f8(u32 *p, s32 shape) {
    u16 x;
        if(func_0211c5d4(data_021701f8)) {
            s16 tx=ObjX_0211c1f8((Obj_0211c1f8 *)p);
            x=(u16)-(tx+data_02144d84[(shape&0xc000)>>14][(shape&0xc0000000)>>30]);
        }
        else x=(u16)ObjX_0211c1f8((Obj_0211c1f8 *)p);

    return x;
}
extern s32 func_0211ccb0(u8 *, u8 *);

typedef struct Unk_02155ef8 {
    u8 code;
    u8 pad[1];
    u16 id;
    u32 pad2;
} Unk_02155ef8;

typedef struct Unk_02155efc {
    void (*func)(void);
    u32 pad;
} Unk_02155efc;

extern s32 data_02155ed4;
extern Unk_02155ef8 data_02155ef8[];
extern Unk_02155efc data_02155efc[];
extern void func_02008e24(s32, void *, s32);
extern u32 data_02155ef4;
extern u32 data_02155ef0;
extern u32 data_02155eec;
extern void func_0211c424(void *, void *);
extern void func_0211bde8(void *, void *);
extern const u32 data_02144ee8[8];

extern void func_0211c1f8(void *);
s32 func_0211c5d4(u8 *);
s32 func_0211c5e8(u8 *);
void func_0211bde8(void *arg0,void *arg1){
Mat22_0211bd baseMat,flipMat;
Vec2_0211bd delta;
u8 *state=data_021701f8;
const s32 *base=*(s32 **)(state+0x2c);
u8 *input=arg0;
u16 i;
u8 *cache;u32 flip;
List_0211c424 *list=arg1;
u32 tile;
u32 idx;
u32 fx,fy;
s32 affine;
if(!base)base=data_02144ed0;
{s32 x=*(s32 *)input; s32 y=*(s32 *)(input+4); s32 by;
delta.x=base[4];by=base[5];delta.x-=x;delta.y=by-y;}
{u8 *ctx=*(u8 *volatile *)&data_021701f8;
tile=*(u32 *)(ctx+0x10);
if(*(u32 *)(ctx+0x24)==0 && *(u32 *)(ctx+0x28)!=0)affine=1;else affine=0;}
i=0;while(i<list->count){
Unk_0211c424 *entry;
void (*cb)(void *,void *,u16);
*(s32 *)(data_021701f8+0x30)=1;
cb=((Callbacks_0211c424 *)input)->before;
entry=list->entries+i;
*(u16 *)(state+0x38)=entry->x;
*(u16 *)(state+0x3a)=entry->y;
*(u16 *)(state+0x3c)=entry->z;
if(cb)cb(data_021701f8,list,i);
if(!*(s32 *)(data_021701f8+0x30))goto next;
((Tile_0211bd *)(state+0x3c))->tile+=tile;
if(affine){
flip=(((Obj_0211c1f8 *)(state+0x38))->flipy<<1) | ((Obj_0211c1f8 *)(state+0x38))->flipx;
cache=*(u8 **)(data_021701f8+0x28);
idx=*(u16 *)(cache+flip*4+*(s32 *)(input+0x14)*2+14);
if(idx==0xffff){
if(!flip)idx=((u32 (*)(void *))*(void **)(data_021701f8+0x20))(cache);
else{
flipMat=*(Mat22_0211bd *)cache;
if(flip&1){flipMat.a=-flipMat.a;flipMat.b=-flipMat.b;}
if(flip&2){flipMat.c=-flipMat.c;flipMat.d=-flipMat.d;}
idx=((u32 (*)(void *))*(void **)(data_021701f8+0x20))(&flipMat);
}
*(u16 *)((u32)cache+flip*4+*(s32 *)(input+0x14)*2+14)=idx;
}
{baseMat.a=base[0];baseMat.b=base[1];baseMat.c=base[2];baseMat.d=base[3];
func_0211bb3c(&baseMat,state+0x38,&delta);}
}else{
idx=0xfffe;
if(*(s32 *)(data_021701f8+0x24)){
s32 shape=*(u32 *)(state+0x38)&0xc000c000;
fx=((Obj_0211c1f8 *)(state+0x38))->flipx;

fx=func_0211c5d4(data_021701f8)^fx;
fy=((Obj_0211c1f8 *)(state+0x38))->flipy;
fy=func_0211c5e8(data_021701f8)^fy;
*(u32 *)(state+0x38)=(*(u32 *)(state+0x38)&~0x10000000)|(fx<<28);
*(u32 *)(state+0x38)=(*(u32 *)(state+0x38)&~0x20000000)|(fy<<29);
if(func_0211c5d4(data_021701f8)){
u32 width=data_02144d84[(shape&0xc000)>>14][(shape&0xc0000000)>>30];
{u32 a=*(u32 *)(state+0x38);*(u32 *)(state+0x38)=(a&0xfe00ffff)|(((-(width+((a>>16)&511)))&511)<<16);}
}
if(func_0211c5e8(data_021701f8)){
u32 height=data_02144d6c[(shape&0xc000)>>14][(shape&0xc0000000)>>30];
((Obj_0211c1f8 *)(state+0x38))->y=-(((Obj_0211c1f8 *)(state+0x38))->y+data_02144d6c[(shape&0xc000)>>14][(u32)shape>>30]);
}
}
((Obj_0211c1f8 *)(state+0x38))->x+=(delta.x>>12);
((Obj_0211c1f8 *)(state+0x38))->y+=(delta.y>>12);
}
if(((s32 (*)(void *,u32,s32))*(void **)(data_021701f8+0x1c))(state+0x38,idx,0)!=1)return;
cb=((Callbacks_0211c424 *)input)->after;
if(cb)cb(data_021701f8,list,i);
next:i++;
}
}

void func_0211c1f8(void *arg) {
    s32 shape;
    s16 x;
    u16 y;
    u32 *p=arg;
    func_02002bd8(data_021701f8+0x40);
    if (*(s32 *)(data_021701f8+0x24)) {
        shape=*p & 0xc000c000;
        u32 flipx,flipy;
        x=FlipX_0211c1f8(p,shape);
        if(func_0211c5e8(data_021701f8)) {
            s16 ty=ObjY_0211c1f8((Obj_0211c1f8 *)p);
            y=(u16)-(ty+data_02144d6c[(shape&0xc000)>>14][(shape&0xc0000000)>>30]);
        }
        else y=(u16)ObjY_0211c1f8((Obj_0211c1f8 *)p);
        flipx=((Obj_0211c1f8 *)p)->flipx;
        flipx = func_0211c5d4(data_021701f8) ^ flipx;
        flipy=((Obj_0211c1f8 *)p)->flipy;
        flipy = func_0211c5e8(data_021701f8) ^ flipy;
        *p=(*p&~0x10000000)|(flipx<<28);
        *p=(*p&~0x20000000)|(flipy<<29);
        func_0211ab48((s16)x,(s16)y,-1,p,*(u8 **)(data_021701f8+8)+12,*(u32 *)(data_021701f8+0x14),*(u32 *)(data_021701f8+0x18));
    } else {
        func_0211ab48(ObjX_0211c1f8((Obj_0211c1f8 *)p),ObjY_0211c1f8((Obj_0211c1f8 *)p),-1,p,*(u8 **)(data_021701f8+8)+12,*(u32 *)(data_021701f8+0x14),*(u32 *)(data_021701f8+0x18));
    }
}

void func_0211c424(void *arg0, void *arg1) {
 State_0211c424 *p=(State_0211c424 *)data_021701f8;
 u16 i;
 for(i=0;i<((List_0211c424 *)arg1)->count;i++) {
  Unk_0211c424 *entry;

  void (*callback)(void *,void *,u16);
  ((State_0211c424 *)data_021701f8)->enabled=1;
 entry=((List_0211c424 *)arg1)->entries+i;
  p->x=entry->x;
  p->y=entry->y;
  p->z=entry->z;
  callback=((Callbacks_0211c424 *)arg0)->before;
  if(callback) callback(data_021701f8,arg1,i);
  if(((State_0211c424 *)data_021701f8)->enabled) func_0211c1f8(&p->x);
  callback=((Callbacks_0211c424 *)arg0)->after;
  if(callback) callback(data_021701f8,arg1,i);
 }
}

void func_0211c4ec(u8 *arg0) {
    func_02008df0(0, arg0, 0x70);
    *(s32 *)(arg0 + 0x0) = 0;
    *(s32 *)(arg0 + 0x4) = 2;
    *(s32 *)(arg0 + 0x8) = 0;
    *(s32 *)(arg0 + 0xc) = 0;
    *(s32 *)(arg0 + 0x24) = 0;
    *(s32 *)(arg0 + 0x30) = 1;
    *(s32 *)(arg0 + 0x28) = 0;
}

void func_0211c52c(u8 *arg0, s32 arg1, s32 arg2) {
    *(s32 *)(arg0 + 0x8) = arg1;
    *(s32 *)(arg0 + 0xc) = arg2;
}

void func_0211c538(u8 *arg0, s32 arg1, s32 arg2) {
    *(s32 *)(arg0 + 0x1c) = arg1;
    *(s32 *)(arg0 + 0x20) = arg2;
}

void func_0211c544(s32 *arg0) {
    u8 *ptr = data_021701f8;
    s32 a = arg0[0], b = arg0[1];
    *(s32 **)(ptr + 0x2c) = arg0;
    *(s32 *)(ptr + 0x40) = a;
    *(s32 *)(ptr + 0x44) = b;
    {
        s32 c = arg0[2];
        s32 z = 0;
        *(s32 *)(ptr + 0x48) = z;
        *(s32 *)(ptr + 0x4c) = c;
        s32 d = arg0[3];
        *(s32 *)(ptr + 0x50) = d;
        *(s32 *)(ptr + 0x54) = z;
        *(s32 *)(ptr + 0x58) = z;
        *(s32 *)(ptr + 0x5c) = z;
        {
            s32 e = arg0[4];
            s32 big = 0x1000;
            *(s32 *)(ptr + 0x60) = big;
            *(s32 *)(ptr + 0x64) = e;
            *(s32 *)(ptr + 0x68) = arg0[5];
            *(s32 *)(ptr + 0x6c) = *(s32 *)(ptr + 0x34);
        }
    }
}

void func_0211c5ac(s32 arg0, s32 arg1) {
    u8 *ptr = data_021701f8;
    *(s32 *)(ptr + 0x2c) = arg0;
    *(s32 *)(ptr + 0x28) = arg1;
}

void func_0211c5c4(u8 *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0x34) = arg1;
}

extern u8 *data_021701f8;
void func_0211c5cc(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

s32 func_0211c5d4(u8 *arg0) {
    return (*(s32 *)(arg0 + 0x24) & 1) ? 1 : 0;
}

s32 func_0211c5e8(u8 *arg0) {
    return (*(s32 *)(arg0 + 0x24) & 2) ? 1 : 0;
}

void func_0211c5fc(u8 *arg0, s32 arg1, s32 arg2) {
    if (arg1 != 0) {
        *(u32 *)(arg0 + 0x24) |= 1;
    } else {
        *(u32 *)(arg0 + 0x24) &= ~1;
    }
    if (arg2 != 0) {
        *(u32 *)(arg0 + 0x24) |= 2;
    } else {
        *(u32 *)(arg0 + 0x24) &= ~2;
    }
}

extern s32 func_021185c0(void *, s32);
extern u32 func_021185b8(void *, s32);
extern s32 func_0211860c(void *, s32);
extern u32 func_02118600(void *, s32);
void func_0211c624(u8 *p) {
 u8 *texture;
 s32 mode;
 data_021701f8=p;
 mode=*(s32 *)(*(u8 **)p+0x14);
 if (mode==0) {
  volatile s32 *regs=(volatile s32 *)0x04000440;
  s32 x,y;
  u8 *a;
  u32 value=0;
  regs[0]=0;
  regs[1]=0;
  x=(*(s32 **)p)[0]; y=(*(s32 **)p)[1];
  regs[12]=-x; regs[12]=-y; regs[12]=0;
  regs[0]=1;
  a=*(u8 **)(data_021701f8+8);
  if (func_021185c0(a,0)) value=func_021185b8(a,0);
  *(u32 *)(p+0x14)=value;
  {u8 *b=*(u8 **)(data_021701f8+12);
  u32 value2=0;
  if (func_0211860c(b,0)) value2=func_02118600(b,0);
  *(u32 *)(p+0x18)=value2; }
 } else {
  u32 value;
  texture=*(u8 **)(p+8);
  if (!func_021185c0(texture,mode)) value=0;
  else {
   value=func_021185b8(texture,mode);
   value >>= ((*(s32 *)(texture+0x20)&0x700000)>>20)+5;
  }
  *(u32 *)(data_021701f8+16)=value;
 }
}

void func_0211c738(void) {
    if (*(s32 *)(*(u8 **)data_021701f8 + 0x14) == 0) {
        *(volatile u32 *)0x04000440 = 0;
        *(volatile u32 *)0x04000448 = 1;
        *(volatile u32 *)0x04000440 = 1;
    } else {
        *(u32 *)(data_021701f8 + 0x10) = 0;
        *(u32 *)(data_021701f8 + 0x2C) = 0;
        *(u32 *)(data_021701f8 + 0x28) = 0;
    }
    data_021701f8 = NULL;
}

void func_0211c79c(void *arg0) {
    u8 *r4 = *(u8 **)data_021701f8;
    if (*(s32 *)(r4 + 0x10) == 0) {
        return;
    }
    *(s32 *)(data_021701f8 + 0x30) = 1;
    if (*(void (**)(void *, void *))(r4 + 0x18) != NULL) {
        (*(void (**)(void *, void *))(r4 + 0x18))(data_021701f8, arg0);
    }
    if (*(s32 *)(data_021701f8 + 0x30) != 0) {
        switch (*(u32 *)(r4 + 0x14)) {
            case 0:
                func_0211c424(r4, arg0);
                break;
            case 1:
            case 2:
                func_0211bde8(r4, arg0);
                break;
            case 3:
                break;
        }
    }
    if (*(void (**)(void *, void *))(r4 + 0x1c) != NULL) {
        (*(void (**)(void *, void *))(r4 + 0x1c))(data_021701f8, arg0);
    }
}

u8 *func_0211a5e4(s32);
void func_0211c850(void *arg0, s32 arg1) {
 u32 bit;
 u8 *p=*(u8 **)data_021701f8;
 if(*(s32 *)(p+0x10)==0) return;
 *(s32 *)(data_021701f8+0x30)=1;
 if(*(void (**)(void *,void *))(p+0x18)) (*(void (**)(void *,void *))(p+0x18))(data_021701f8,arg0);
 if(*(s32 *)(data_021701f8+0x30)) {
 if(arg1!=-1) {
 bit=*(u32 *)(p+0x14);
 u8 *q=func_0211a5e4(arg1);
 *(u32 *)(q+0x20)=(*(u32 *)(q+0x20)&~(1<<bit))|(1<<bit);
 }
 switch(*(u32 *)(p+0x14)) {
 case 0:func_0211c424(p,arg0);break;
 case 1:case 2:func_0211bde8(p,arg0);break;
 case 3:break;
 }
 }
 if(*(void (**)(void *,void *))(p+0x1c)) (*(void (**)(void *,void *))(p+0x1c))(data_021701f8,arg0);
}

void func_0211c934(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 bg = arg2 & 3;
    s32 size = (*(volatile u16 *)data_02144ee8[arg2] & 0xc000) >> 14;
    s32 mode = (arg2 <= 3 ? *(volatile u32 *)0x04000000 : *(volatile u32 *)0x04001000) & 7;
    if ((bg == 2 && (mode == 2 || mode >= 4)) || (bg == 3 && mode >= 1)) {
        s32 v = 0x10 << size;
        *arg0 = v;
        *arg1 = v;
    } else {
        *arg0 = (size & 1) ? 0x40 : 0x20;
        *arg1 = (size & 2) ? 0x40 : 0x20;
    }
}

s32 func_0211c9c8(u8 *arg0, u8 *arg1) {
    if (arg0 == NULL || arg1 == NULL) {
        return 0;
    }
    switch (*arg0) {
        case 'M':
            return (((arg1[0x18] << 1) + 0x1c) & ~3);
        case 'J':
        case 'V':
            return (((arg1[0x17] << 1) + 0x1c) & ~3);
        default:
            return 0;
    }
}

void func_0211ca28(u8 *arg0, u8 *arg1, u32 arg2, s32 arg3) {
    u32 i;
    *(u32 *)(arg0 + 0x0) = 0;
    *(u32 *)(arg0 + 0x8) = (u32)arg1;
    *(u32 *)(arg0 + 0x10) = 0;
    arg0[0x18] = 0x7f;
    *(u32 *)(arg0 + 0x4) = 0x1000;
    *(u32 *)(arg0 + 0x14) = arg3;
    arg0[0x19] = 0;
    *(u32 *)(arg0 + 0xc) = 0;
    if ((s32)data_02155ed4 <= 0) {
        return;
    }
    for (i = 0; i < (u32)data_02155ed4; i++) {
        if (arg1[0] == data_02155ef8[i].code && *(u16 *)(arg1 + 2) == data_02155ef8[i].id) {
            if (data_02155efc[i].func != NULL) {
                data_02155efc[i].func();
            }
            return;
        }
    }
}

void func_0211cac0(u8 *arg0, u32 arg1) {
    func_02008e24(0, arg0, 0x54);
    *(u32 *)(arg0 + 0xc) = data_02155ef4;
    *(u32 *)(arg0 + 0x14) = data_02155ef0;
    *(u32 *)(arg0 + 0x1c) = data_02155eec;
    *(u32 *)(arg0 + 0x4) = arg1;
}

void func_0211cb14(u8 **arg0, u8 *arg1) {
    u8 *head = *arg0;
    u8 *prev, *cur, *tail;
    if (head == NULL) {
        *arg0 = arg1;
        return;
    }
    cur = *(u8 **)(head + 0x10);
    if (cur == NULL) {
        if (head[0x18] > arg1[0x18]) {
            tail = arg1;
            while (*(u8 **)(tail + 0x10) != NULL) {
                tail = *(u8 **)(tail + 0x10);
            }
            *(u8 **)(tail + 0x10) = head;
            *arg0 = arg1;
        } else {
            *(u8 **)(head + 0x10) = arg1;
        }
        return;
    }
    prev = head;
    while (cur != NULL) {
        if (cur[0x18] >= arg1[0x18]) {
            tail = arg1;
            while (*(u8 **)(tail + 0x10) != NULL) {
                tail = *(u8 **)(tail + 0x10);
            }
            *(u8 **)(prev + 0x10) = arg1;
            *(u8 **)(tail + 0x10) = cur;
            return;
        }
        prev = cur;
        cur = *(u8 **)(cur + 0x10);
    }
    *(u8 **)(prev + 0x10) = arg1;
}

void func_0211cbcc(u32 *arg0, u8 *arg1) {
    while (arg1 != NULL) {
        s32 i;
        for (i = 0; i < *(u8 *)(arg1 + 0x19); i++) {
            if (*(u16 *)(arg1 + 0x1A + i * 2) & 0x100) {
                arg0[i >> 5] |= 1 << (i & 0x1F);
            }
        }
        arg1 = *(u8 **)(arg1 + 0x10);
    }
}

void func_0211cc30(u8 *arg0, u8 *arg1) {
    u8 *p;
    if (arg1 == NULL) {
        return;
    }
    p = *(u8 **)(arg1 + 8);
    if (p == NULL) {
        return;
    }
    switch (*p) {
    case 0x4d:
        func_0211cbcc((u32 *)(arg0 + 0x3c), arg1);
        func_0211cb14((u8 **)(arg0 + 8), arg1);
        break;
    case 0x4a:
        func_0211cbcc((u32 *)(arg0 + 0x44), arg1);
        func_0211cb14((u8 **)(arg0 + 0x10), arg1);
        break;
    case 0x56:
        func_0211cbcc((u32 *)(arg0 + 0x4c), arg1);
        func_0211cb14((u8 **)(arg0 + 0x18), arg1);
        break;
    }
}

s32 func_0211ccb0(u8 *arg0, u8 *arg1) {
    u8 *cur;
    u8 *prev = *(u8 **)arg0;
    if (prev == NULL) {
        return 0;
    }
    if (prev == arg1) {
        *(void **)arg0 = *(void **)(prev + 0x10);
        *(void **)(arg1 + 0x10) = NULL;
        return 1;
    }
    while ((cur = *(u8 **)(prev + 0x10)) != NULL) {
        if (cur == arg1) {
            *(void **)(prev + 0x10) = *(void **)(cur + 0x10);
            *(void **)(cur + 0x10) = NULL;
            return 1;
        }
        prev = cur;
    }
    return 0;
}

void func_0211cd24(u8 *arg0, u8 *arg1) {
    if (func_0211ccb0(arg0 + 8, arg1) == 0 &&
        func_0211ccb0(arg0 + 0x10, arg1) == 0 &&
        func_0211ccb0(arg0 + 0x18, arg1) == 0) {
        return;
    }
    *(u32 *)arg0 |= 0x10;
}

void func_0211cd78(u8 *arg0) {
    *(s32 *)(arg0 + 0x20) = 0;
    arg0[0x24] = 0;
    arg0[0x25] = 0;
}

u32 func_0211cd8c(u8 *arg0) {
    if (arg0 != NULL) {
        return (u32)*(u16 *)(arg0 + 0xc) << 3;
    }
    return 0;
}

u32 func_0211cda0(u8 *arg0) {
    if (arg0 != NULL) {
        return (u32)*(u16 *)(arg0 + 0x1c) << 3;
    }
    return 0;
}

void func_0211cdb4(u8 *arg0, s32 arg1, s32 arg2) {
    if (arg1 != 0) {
        *(s32 *)(arg0 + 0x8) = arg1;
    }
    if (arg2 != 0) {
        *(s32 *)(arg0 + 0x18) = arg2;
    }
}

