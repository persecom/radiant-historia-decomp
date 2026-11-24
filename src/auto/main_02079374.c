/* 3 functions from 0x02079374 to 0x02079874 (main), found by ds-decomp. */
#include "common.h"
typedef struct {s32 x,y,z;} Vec3_B793;
typedef struct {u32 seed,mul,add;} Rng_B793;
static inline u16 RandomB793(void *ptr) { Rng_B793 r=*(Rng_B793 *)ptr;u32 s=r.mul*r.seed+r.add;((Rng_B793 *)ptr)->seed=s;return ((s>>16)*8)>>16; }
extern s32 data_02170248[], data_02170204[];
extern void func_02002028(s32);
extern s64 func_02001fd0(void);
static inline void ProjectTransformB793(const Vec3_B793 *v,const s32 *m,Vec3_B793 *o){
s32 x,y,z;
x=(s32)(((s64)v->x*m[0]+(s64)v->y*m[3]+(s64)v->z*m[6])>>12);
y=(s32)(((s64)v->x*m[1]+(s64)v->y*m[4]+(s64)v->z*m[7])>>12);
z=(s32)(((s64)v->x*m[2]+(s64)v->y*m[5]+(s64)v->z*m[8])>>12);
o->x=m[9]+x;o->y=m[10]+y;o->z=m[11]+z;
}
extern u8 *data_021600ac;
extern u32 func_020ddc8c(void *, void *);

extern u32 data_0216263c[3];
extern u32 data_0216244c[43];
extern u64 data_02162658[3];
extern void func_0206e8f0(u32, void *, u32);
void func_02079374(void) {
Vec3_B793 pos=*(Vec3_B793 *)data_0216244c;
s32 x,y,z,sx,sy,w;
s64 inv;
s32 screenX,screenY;
const s32 *m=data_02170248;
const s32 *p;
u32 seed;
u16 r;
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
sy=(screenY+4096)>>1;
sy=(sy<<7)+(sy<<6);
screenY=192-((sy+2048)>>12);
screenX=((((screenX+4096)>>1)*256+2048)>>12);
pos.z=0;
seed=data_0216263c[1]*data_0216263c[0]+data_0216263c[2];
data_0216263c[0]=seed;
r=((seed>>16)*8)>>16;
if(r==0){pos.x=(screenX/2)<<13;pos.y=(screenY/2)<<13;func_0206e8f0(128,&pos,3);}
seed=data_0216263c[1]*data_0216263c[0]+data_0216263c[2];
data_0216263c[0]=seed;
r=((seed>>16)*8)>>16;
if(r!=0)return;
{
Vec3_B793 v=*(Vec3_B793 *)data_0216244c;
u64 a=data_02162658[0], b=data_02162658[1], c=data_02162658[2];
u64 t=b*a+c, res=b*t+c;
data_02162658[0]=res;
v.y=0;
v.x+=(u32)(((u64)(u32)(t>>32)*0x1c0000u)>>32)-0xa0000;
v.z+=(u32)((res>>32)>>11)-0x140000;
func_0206e8f0(129,&v,2);
}
}

void func_0207963c(void) {
    u32 x = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
    u16 r;
    u32 v[3];
    u64 a, b, c, t, res;
    data_0216263c[0] = x;
    r = ((x >> 16) * 4) >> 16;
    if (r == 0) {
        return;
    }
    v[0] = data_0216244c[0];
    v[1] = data_0216244c[1];
    v[2] = data_0216244c[2];
    a = data_02162658[0];
    b = data_02162658[1];
    c = data_02162658[2];
    t = b * a + c;
    res = b * t + c;
    data_02162658[0] = res;
    v[0] += (u32)(((u64)(u32)(t >> 32) * 0x180000u) >> 32) - 0xc0000;
    v[2] += (u32)(u32)(res >> 32) >> 11;
    v[2] -= 0x110000;
    func_0206e8f0(0x7f, v, 2);
}

int func_02079720(void *arg) {
u8 *obj = *(u8 **)(data_021600ac + 0x68);
u32 angle = func_020ddc8c(obj,arg);
if ((angle < 0x2aaa || angle > 0xd556) && (*(u16 *)(obj+0x92) < 0x2000 || *(u16 *)(obj+0x92) > 0xe000)) return 0;
if (angle > 0x1556 && angle < 0x6aaa && *(u16 *)(obj+0x92) >= 0x2000 && *(u16 *)(obj+0x92) <= 0x6000) return 1;
if (angle > 0x5556 && angle < 0xaaaa && *(u16 *)(obj+0x92) >= 0x6000 && *(u16 *)(obj+0x92) <= 0xa000) return 2;
if (angle > 0x9556 && angle < 0xeaaa && *(u16 *)(obj+0x92) >= 0xa000 && *(u16 *)(obj+0x92) <= 0xe000) return 3;
if (*(u16 *)(obj+0x92) < 0x2000 || *(u16 *)(obj+0x92) > 0xe000) return 0;
if (*(u16 *)(obj+0x92) >= 0x2000 && *(u16 *)(obj+0x92) <= 0x6000) return 1;
if (*(u16 *)(obj+0x92) >= 0x6000 && *(u16 *)(obj+0x92) <= 0xa000) return 2;
if (*(u16 *)(obj+0x92) >= 0xa000 && *(u16 *)(obj+0x92) <= 0xe000) return 3;
return 4;
}

