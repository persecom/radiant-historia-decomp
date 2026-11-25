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
void func_0211bde8(void *__restrict arg0,void *arg1){
Mat22_0211bd baseMat,flipMat;
Vec2_0211bd delta;
u8 *state=data_021701f8;
const s32 *base=*(s32 **)(state+0x2c);
u16 i;
u8 *cache;u32 flip;
u32 tile;
u32 idx;
u32 fx,fy;
s32 affine;
if(!base)base=data_02144ed0;
{s32 x=*(s32 *)arg0; s32 y; s32 by;
delta.x=base[4]; y=*(s32 *)((u8 *)arg0+4); by=base[5];delta.x-=x;delta.y=by-y;}
{u8 *ctx=*(u8 *volatile *)&data_021701f8;
tile=*(u32 *)(ctx+0x10);
if(*(u32 *)(ctx+0x24)==0 && *(u32 *)(ctx+0x28)!=0)affine=1;else affine=0;}
for(i=0;((List_0211c424 *)arg1)->count>i;i++){
Unk_0211c424 *entry;
void (*cb)(void *,void *,u16);
*(s32 *)(data_021701f8+0x30)=1;
cb=((Callbacks_0211c424 *)arg0)->before;
entry=((List_0211c424 *)arg1)->entries+i;
*(u16 *)(state+0x38)=entry->x;
*(u16 *)(state+0x3a)=entry->y;
*(u16 *)(state+0x3c)=entry->z;
if(cb)cb(data_021701f8,arg1,i);
if(!*(s32 *)(data_021701f8+0x30))continue;
((Tile_0211bd *)(state+0x3c))->tile+=tile;
if(affine){
flip=(((Obj_0211c1f8 *)(state+0x38))->flipy<<1) | ((Obj_0211c1f8 *)(state+0x38))->flipx;
cache=*(u8 **)(data_021701f8+0x28);
idx=*(u16 *)(cache+flip*4+*(s32 *)((u8 *)arg0+0x14)*2+14);
if(idx==0xffff){
if(!flip)idx=((u32 (*)(void *))*(void **)(data_021701f8+0x20))(cache);
else{
flipMat=*(Mat22_0211bd *)cache;
if(flip&1){flipMat.a=-flipMat.a;flipMat.b=-flipMat.b;}
if(flip&2){flipMat.c=-flipMat.c;flipMat.d=-flipMat.d;}
idx=((u32 (*)(void *))*(void **)(data_021701f8+0x20))(&flipMat);
}
*(u16 *)((u32)cache+flip*4+*(s32 *)((u8 *)arg0+0x14)*2+14)=idx;
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
{u32 a=*(u32 *)(state+0x38);*(u32 *)(state+0x38)=(a&0xfe00ffff)|(((-(width+((a<<7)>>23)))&511)<<16);}
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
cb=((Callbacks_0211c424 *)arg0)->after;
if(cb)cb(data_021701f8,arg1,i);
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

#pragma push
#pragma optimization_level 3
void func_0211c424(void *arg0, void *arg1) {
 State_0211c424 *p=(State_0211c424 *)data_021701f8;
 u16 i;
 for(i=0;i<((List_0211c424 *)arg1)->count;i++) {
  Unk_0211c424 *entry;
  void (*callback)(void *,void *,u16);
  ((State_0211c424 *)data_021701f8)->enabled=1;
  entry=((List_0211c424 *)arg1)->entries+i;
  p->x=entry->x;
  callback=((Callbacks_0211c424 *)arg0)->before; p->y=entry->y; p->z=entry->z;
  if(callback) callback(data_021701f8,arg1,i);
  if(((State_0211c424 *)data_021701f8)->enabled) func_0211c1f8(&p->x);
  callback=((Callbacks_0211c424 *)arg0)->after;
  if(callback) callback(data_021701f8,arg1,i);
 }
}
#pragma pop
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

#pragma push
#pragma opt_propagation off
