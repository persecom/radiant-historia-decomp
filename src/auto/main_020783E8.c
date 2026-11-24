/* 9 functions from 0x020783E8 to 0x02079374 (main), found by ds-decomp. */
#include "common.h"
extern const s16 data_0213a394[];
extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern void *func_02046f90(u32, u16);
extern void func_020477dc(void *, u32, u32);
extern void func_021167f0(void *, void *);
extern u64 data_02162658[3];
static inline u32 random_02078e1c(u32 limit) {
    u64 value = data_02162658[1] * data_02162658[0] + data_02162658[2];
    data_02162658[0] = value;
    return (u32)(((u64)(u32)(value >> 32) * limit) >> 32);
}
extern u32 data_0216263c[3];
extern u32 data_0216244c[43];
extern u64 data_02162658[3];
extern void func_0206e8f0(u32, void *, u32);
extern u32 data_0216263c[3];
extern u32 data_0216244c[43];
extern u64 data_02162658[3];
extern void func_0206e8f0(u32, void *, u32);

typedef struct Vec3_02078d8c {
    s32 x;
    s32 y;
    s32 z;
} Vec3_02078d8c;

typedef struct Obj_02078d8c {
    Vec3_02078d8c pos;
    u8 pad_0c[0x91];
    u8 unk_9d;
} Obj_02078d8c;

typedef struct Mgr_02078d8c {
    u8 pad_00[0x68];
    Obj_02078d8c *unk_68;
} Mgr_02078d8c;

typedef struct Node_020789ec {
    u8 pad_00[0x28];
    void *unk_28;
} Node_020789ec;

typedef struct Mgr_020789ec {
    u8 pad_00[0x7c];
    Node_020789ec *unk_7c;
} Mgr_020789ec;

extern Mgr_020789ec *data_021600bc;
extern Mgr_02078d8c *data_021600ac;

void func_021168f8(Node_020789ec **, Node_020789ec *);
void func_02047490(void *);
void func_0210c5dc(void *);
s32 func_0210c2f4(Obj_02078d8c *, Vec3_02078d8c *);

void func_0207884c(s32 arg0) {
s16 z,x;
u8 *p;
u8 *obj=0;
s32 i;
u32 v;
u16 r;
if(*(u16 *)((u8 *)data_021600bc+0x84)!=0) return;
x=data_0213a394[1];z=data_0213a394[0];
for(i=0;i<24;i++) {
p=func_0210c594(0x34,data_02155c3c);
v=data_0216263c[1]*data_0216263c[0]+data_0216263c[2];
data_0216263c[0]=v;
r=((v>>16)*29)>>16;
*(s32 *)(p)=((r*32)+16)<<12;
*(s32 *)(p+4)=4096;
v=data_0216263c[1]*data_0216263c[0]+data_0216263c[2];
data_0216263c[0]=v;
r=((v>>16)*69)>>16;
*(s32 *)(p+8)=((r*32)+16)<<12;
p[0x1c]|=1;
*(s32 *)(p+0x18)=0xa000;
*(s32 *)(p+0x20)=0;
if(arg0==0) obj=func_02046f90(0x157e,(u16)(i+0x1b58));
else if(arg0==1) obj=func_02046f90(0x1587,(u16)(i+0x1b58));
{ s32 px=*(s32 *)p, py=*(s32 *)(p+4), pz=*(s32 *)(p+8);
px+=x<<7; py+=0x80000;
*(s32 *)obj=px;
*(s32 *)(obj+4)=py;
pz+=z<<7;
*(s32 *)(obj+8)=pz;
}
*(s32 *)(obj+0x58)=4096;
*(u32 *)(obj+0x80)&=~2;
if(arg0==0) func_020477dc(obj,11,0);
else func_020477dc(obj,0,0);
*(void **)(p+0x28)=obj;
func_021167f0((u8 *)data_021600bc+0x7c,p);
}
}

void func_020789ec(void) {
    while (data_021600bc->unk_7c != NULL) {
        Node_020789ec *node = data_021600bc->unk_7c;
        func_021168f8(&data_021600bc->unk_7c, node);
        func_02047490(node->unk_28);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

s32 func_02078d8c(Obj_02078d8c *obj, s32 arg1) {
    Obj_02078d8c *target = data_021600ac->unk_68;
    Vec3_02078d8c pos = obj->pos;
    pos.z -= ((u32)obj->unk_9d >> 1) << 12;

    if (obj != NULL && target != NULL) {
        if (func_0210c2f4(target, &pos) <= ((target->unk_9d + arg1) << 12) &&
            obj->pos.y <= target->pos.y + 0x10000) {
            if (obj->pos.y >= target->pos.y) {
                return 1;
            }
        }
    }
    return 0;
}

void func_02078e1c(void) {
u8 i;
for(i=0;i<8;i++) {
u32 x=data_0216263c[1]*data_0216263c[0]+data_0216263c[2];
u16 r;
data_0216263c[0]=x;
r=((x>>16)*8)>>16;
if(r-4==0) {
Vec3_02078d8c v=*(Vec3_02078d8c *)data_0216244c;
u32 offset=random_02078e1c(0x180000);
v.y=0;
v.x+=offset-0xc0000;
v.z+=random_02078e1c(0x200000)-0x100000;
v.z-=0x10000;
func_0206e8f0(0x77,&v,2);
}
}
}

void func_02078f58(void) {
u8 i;
for(i=0;i<8;i++) {
u32 x=data_0216263c[1]*data_0216263c[0]+data_0216263c[2];
u16 r;
Vec3_02078d8c v;
data_0216263c[0]=x;
r=((x>>16)*4)>>16;
switch((s32)r-2) {
case 0:
v=*(Vec3_02078d8c *)data_0216244c;
data_02162658[0]=data_02162658[1]*data_02162658[0]+data_02162658[2];
v.y=0;
v.x+=(s32)(((u64)(u32)(data_02162658[0]>>32)*0x1c0000)>>32)-0x120000;
data_02162658[0]=data_02162658[1]*data_02162658[0]+data_02162658[2];
v.z+=(s32)(((u64)(u32)(data_02162658[0]>>32)*0x200000)>>32)-0x100000;
v.z-=0x40000;
func_0206e8f0(0x78,&v,2);
break;
}
}
}

extern u32 data_0216263c[3];
extern u32 data_0216244c[43];
extern u64 data_02162658[3];
extern void func_0206e8f0(u32, void *, u32);
void func_02079094(void) {
    u32 x = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
    u16 r;
    struct {
        s32 x;
        s32 y;
        s32 z;
    } v;
    u64 a, b, c, t, res;
    u32 r1, r2;
    data_0216263c[0] = x;
    r = ((x >> 16) * 5) >> 16;
    if (r != 0) {
        return;
    }
    v = *(typeof(v) *)data_0216244c;
    a = data_02162658[0];
    b = data_02162658[1];
    c = data_02162658[2];
    t = b * a + c;
    res = b * t + c;
    v.y = 0;
    r1 = (u32)(((u64)(u32)(t >> 32) * 0x180000u) >> 32);
    data_02162658[0] = res;
    r2 = (u32)(((u64)(u32)(res >> 32) * 0x180000u) >> 32);
    v.x += r1 - 0x100000;
    v.z += r2 - 0xc0000;
    v.z -= 0x40000;
    func_0206e8f0(0x7d, &v, 2);
}

