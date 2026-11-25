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

#pragma scheduling off

#pragma push
#pragma opt_propagation off

void func_0211c544(s32 *arg0) {
    s32 *ptr=(s32 *)data_021701f8;
    u32 a=arg0[0], b=arg0[1];
    ptr[0x2c/4]=(u32)arg0;
    ptr[0x40/4]=a; ptr[0x44/4]=b;
    { u32 c=arg0[2];
    ptr[0x48/4]=0;
    u32 d=arg0[3];
    ptr[0x4c/4]=c; ptr[0x50/4]=d;
    ptr[0x54/4]=0; ptr[0x58/4]=0; ptr[0x5c/4]=0;
    }
    { u32 e=arg0[4];
    ptr[0x60/4]=0x1000;
    u32 f=arg0[5];
    ptr[0x64/4]=e; ptr[0x68/4]=f;
    }
    ptr[0x6c/4]=ptr[0x34/4];
}
#pragma pop
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
