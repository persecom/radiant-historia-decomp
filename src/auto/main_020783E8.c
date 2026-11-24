/* 9 functions from 0x020783E8 to 0x02079374 (main), found by ds-decomp. */
#include "common.h"
extern s32 data_02170248[], data_02170204[];
extern void func_02002028(s32);
extern s64 func_02001fd0(void);
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

extern u32 data_0216242c[];
void func_0210d27c(s32);
u32 func_02052a54(void *, s32);
s32 func_02078d8c(Obj_02078d8c *, s32);
void func_0207ae48(s32, s32);
void func_02078a40(void) {
    u8 *node = (u8 *)data_021600bc->unk_7c;
    Obj_02078d8c *target_obj = data_021600ac->unk_68;
    if (node == NULL) {
        return;
    }
    do {
        u8 *obj = *(u8 **)(node + 0x28);
        if (obj != NULL) {
            if (node[0x1c] & 1) {
                u32 v = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
                data_0216263c[0] = v;
                if ((u16)(((v >> 16) * 0x80) >> 16) == 0) {
                    func_020477dc(obj, 0xd, 0);
                    *(Vec3_02078d8c *)obj = *(Vec3_02078d8c *)data_0216244c;
                    *(s32 *)(obj + 0x0) += (s32)(random_02078e1c(0x200000) - 0x100000);
                    *(s32 *)(obj + 0x8) += (s32)(random_02078e1c(0x200000) - 0x100000);
                    *(s32 *)(obj + 0x4) += 0xc0000;
                    obj[0x9d] = 1;
                    *(u16 *)(obj + 0x9a) = 0x1f;
                    node[0x1c] = (node[0x1c] | 2) & 0xfe;
                    *(u32 *)(obj + 0x80) |= 2;
                    func_0210d27c(0x69);
                }
            }
            if (node[0x1c] & 2) {
                *(s32 *)(obj + 0x4) -= 0xa000;
                if (!(node[0x1c] & 4)) {
                    s32 y = *(s32 *)(obj + 0x4) >> 12;
                    if (y >= 200) {
                        y = 200;
                    }
                    obj[0x9d] = 6 - (y * 6) / 200;
                    if (obj[0x9d] == 0) {
                        obj[0x9d] = 1;
                    } else if (obj[0x9d] >= 6) {
                        obj[0x9d] = 6;
                    }
                } else {
                    obj[0x9d] = 0;
                }
                if (*(s32 *)(obj + 0x4) <= 0) {
                    *(s32 *)(obj + 0x4) = 0;
                    if ((node[0x1c] & 4) && (func_02052a54(obj, 0) & 2)) {
                        *(u16 *)(obj + 0x9a) = 0;
                        node[0x1c] = 0;
                        node[0x1c] |= 1;
                        *(s32 *)(obj + 0x4) = data_0216242c[9] + 0x100000;
                        *(u32 *)(obj + 0x80) &= ~2;
                    }
                    if (!(node[0x1c] & 4) && (*(u32 *)(obj + 0x80) & 2)) {
                        func_0206e8f0(0x7c, obj, 2);
                        func_020477dc(obj, 0x10, 0);
                        obj[0x9d] = 0;
                        node[0x1c] |= 4;
                        if (func_0210c2f4(target_obj, (Vec3_02078d8c *)obj) <= 0x78000) {
                            func_0210d27c(0x32);
                        }
                    }
                }
                if (func_02078d8c((Obj_02078d8c *)obj, 0x10) != 0 && (*(u16 *)((u8 *)data_021600ac + 0x36e) & 1) && !(node[0x1c] & 4)) {
                    if (!(*(u32 *)(obj + 0xac) & 0x2000)) {
                        func_0207ae48(0, 0x32);
                        func_0206e8f0(8, obj, 2);
                        func_0210d27c(0x70);
                    }
                    *(u16 *)(obj + 0x9a) = 0;
                    node[0x1c] = 0;
                    node[0x1c] |= 1;
                    *(u32 *)(obj + 0x80) &= ~2;
                }
            }
        }
        node = *(u8 **)(node + 0x30);
    } while (node != NULL);
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


void func_02079174(void) {
u32 seed=data_0216263c[1]*data_0216263c[0]+data_0216263c[2];
u16 r;
Vec3_02078d8c pos;
s32 x,y,z,sx,sy,w;
s64 inv;
s32 screenX,screenY;
const s32 *m;
const s32 *p;
data_0216263c[0]=seed;
r=((seed>>16)*16)>>16;
if(r!=0) return;
m=data_02170248;
 pos=*(Vec3_02078d8c *)data_0216244c;
y=m[10]+(s32)(((s64)pos.x*m[1]+(s64)pos.y*m[4]+(s64)pos.z*m[7])>>12);
x=m[9]+(s32)(((s64)pos.x*m[0]+(s64)pos.y*m[3]+(s64)pos.z*m[6])>>12);
z=m[11]+(s32)(((s64)pos.x*m[2]+(s64)pos.y*m[5]+(s64)pos.z*m[8])>>12);
p=data_02170204;
w=p[15]+(s32)(((s64)x*p[3]+(s64)y*p[7]+(s64)z*p[11])>>12);
func_02002028(w);
sx=p[12]+(s32)(((s64)x*p[0]+(s64)y*p[4]+(s64)z*p[8])>>12);
sy=p[13]+(s32)(((s64)x*p[1]+(s64)y*p[5]+(s64)z*p[9])>>12);
inv=func_02001fd0();
screenX=(s32)((inv*sx+0x80000000LL)>>32);
screenY=(s32)((inv*sy+0x80000000LL)>>32);
pos.z=0;
sy=(screenY+4096)>>1;
sy=(sy<<7)+(sy<<6);
pos.y=((192-((sy+2048)>>12))/2)<<13;
pos.x=(((((screenX+4096)>>1)*256+2048)>>12)/2)<<13;
func_0206e8f0(126,&pos,3);
}

