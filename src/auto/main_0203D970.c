/* 6 functions from 0x0203D970 to 0x0203E8C0 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s32 x,y,z; } Vec_0203d970;
static inline void adjust_vec_d970(Vec_0203d970 *v,Vec_0203d970 *p,s16 sine,s16 cosine) {
 s32 dx=v->x-p->x,dz=v->z-p->z;
 dx-=sine*10;dz-=cosine*10;
 v->x-=dx;v->z-=dz;
}
static inline void set_vec_d970(Vec_0203d970 *v,s32 x,s32 y,s32 z) { v->x=x;v->y=y;v->z=z; }
extern u8 *data_02160aec, *data_02160204, *data_02155984;
extern u8 *data_02160098[2];
extern const s16 data_0213a394[];
typedef struct { u16 v[32]; } Table_0203d970_32;
typedef struct { u16 v[48]; } Table_0203d970_48;
extern const Table_0203d970_32 data_0213eef0;
extern const Table_0203d970_48 data_0213ef30;
extern s32 data_02151fcc;
extern u16 data_02151fca, data_02151fc8;
extern s32 func_020dddf0(void *,void *);
extern s32 func_020ddc8c(void *,void *);
extern void func_0203d864(void *);
void func_020ec548(void *);
u8 *func_020ec294(u32,u32,int,int);
void func_020ec88c(void *,int,int);
void func_020ec8cc(void *,int,int);
void func_021167f0(void *,void *);

typedef struct {
    s32 field_0;
    s32 field_4;
} Vec_0203e5a8;

typedef struct {
    void *field_0;
    u32 field_4;
    u8 pad[0x20];
    void *field_28;
    u8 pad2[0x8];
    u16 field_34;
    u16 field_36;
    u16 field_38;
    u16 field_3a;
    u16 field_3c;
    u16 field_3e;
} Unk_0203e61c;

typedef struct {
    u32 field_0;
    Unk_0203e61c *field_4;
} Global_020600a0;

typedef struct {
    u8 pad[0x30];
    u16 *field_30;
    u8 pad2[0xc];
    s32 field_40;
    s32 field_44;
    u16 field_48;
    u16 field_4a;
    u16 field_4c;
    u16 field_4e;
    s32 field_50;
    s32 field_54;
    s32 field_58;
    s32 field_5c;
} State_0203df40;

extern Global_020600a0 data_021600a0;
extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern void func_021167ac(void *, u32);
extern void func_0210d9e4(void *);
extern void func_021168f8(void **, void *);
extern void func_0210da14(void);
extern void func_0210c5dc(void *);
extern void func_0203e8c0(void);
extern s32 _s32_div_f(s32, s32);
extern u32 _dflt(s32);
extern void func_02020058(void);
extern void func_0201ff80(void);

void func_0203d970(Vec_0203d970 *pos,s32 unused,s32 index) {
s32 x=pos->x/65536,z=pos->z/65536;
u8 *map=data_02160aec;
u8 *state=data_02160098[1];
Vec_0203d970 v;
u32 tile;

s32 zero=0;
s32 distance,angle;
if(!map) tile=0;
else tile=*(u8 *)(map+(z* *(s16 *)(map+0x58d36)+x)*12+0xbcd);
if(*(u16 *)(state+0x60)==0 && data_02160204[0x84]==9) {
set_vec_d970(&v,*(s32 *)(data_02155984+0x20),pos->y-0x4000,*(s32 *)(data_02155984+0x28));
distance=func_020dddf0(&v,pos);
angle=func_020ddc8c(pos,&v);
if(distance>0xa000) {
s32 a=(angle%65536)>>4;
s32 sine=data_0213a394[a*2], cosine=data_0213a394[a*2+1];
s32 dx=v.x-pos->x, dz=v.z-pos->z;
sine*=10;cosine*=10;
sine=dx-sine;cosine=dz-cosine;
sine=v.x-sine;cosine=v.z-cosine;
v.x=sine;v.z=cosine;
}
func_0203d864(&v);
}else if(*(u16 *)(state+0x60)==1) {
Table_0203d970_32 table=data_0213eef0;
if(tile!=255 && (index=(tile-1)*4, *(s32 *)(state+0x1c)!=tile)) {
*(s32 *)(state+0x1c)=tile;
*(s32 *)(state+0x20)=0;
*(s32 *)(state+0x28)=*(s32 *)(state+0x24);
*(s32 *)(state+0x2c)=table.v[index];
data_02151fcc=0xe8000;data_02151fca=0x2000;
}
if(*(u32 *)(state+0x20)!=255) {
s32 a=*(s32 *)(state+0x24)+(*(s32 *)(state+0x2c)-*(s32 *)(state+0x28))/15;
*(s32 *)(state+0x24)=a;
data_02151fc8=a%65536;
++*(u32 *)(state+0x20);
if(*(u32 *)(state+0x20)>15) {
*(s32 *)(state+0x20)=255;
data_02151fc8=*(s32 *)(state+0x2c);
*(s32 *)(state+0x24)=(u16)*(s32 *)(state+0x2c);
}
}
func_0203d864(pos);
}else if(*(u16 *)(state+0x60)==2) {
Table_0203d970_48 table=data_0213ef30;
if(tile!=255 && (index=(tile-1)*6,*(s32 *)(state+0x1c)!=tile)) {
*(s32 *)(state+0x1c)=tile;
*(s32 *)(state+0x20)=255;
data_02151fcc=0xe8000;data_02151fca=0x1900;
}
data_02151fc8=*(s32 *)(state+0x24);
s32 minx=table.v[index+2], minz=table.v[index+3];
s32 vx=minx<<12;
vx-=vx-pos->x;
set_vec_d970(&v,vx,zero,minz<<12);
if(v.x<=(minx<<12)) v.x=minx<<12;
if(v.x>(table.v[index+4]<<12)) v.x=table.v[index+4]<<12;
v.z-=v.z-pos->z;
if(v.z<=(minz<<12)) v.z=minz<<12;
if(v.z>(table.v[index+5]<<12)) v.z=table.v[index+5]<<12;
func_0203d864(&v);
}else if(*(u16 *)(state+0x60)==5 || data_02160204[0x84]==0) {
if(data_02160204[0x85]==2) {
*(s32 *)(data_02155984+0x28)+=*(s32 *)(data_02160204+0x80);
data_02160204[0x85]=3;
}else if(data_02160204[0x85]==6) {
*(s32 *)(data_02155984+0x28)+=*(s32 *)(data_02160204+0x80);
data_02160204[0x85]=zero;
}
set_vec_d970(&v,*(s32 *)(data_02155984+0x20),pos->y-0x4000,*(s32 *)(data_02155984+0x28));
distance=func_020dddf0(&v,pos);
angle=func_020ddc8c(pos,&v);
if(distance>0xa000) v.x-=(v.x-pos->x)-data_0213a394[((angle%65536)>>4)*2]*10;
func_0203d864(&v);
}else if(*(u16 *)(state+0x60)==6 || data_02160204[0x84]==1) {
if(data_02160204[0x85]==2) {
*(s32 *)(data_02155984+0x20)+=*(s32 *)(data_02160204+0x80);
data_02160204[0x85]=3;
}else if(data_02160204[0x85]==6) {
*(s32 *)(data_02155984+0x20)+=*(s32 *)(data_02160204+0x80);
data_02160204[0x85]=zero;
}
set_vec_d970(&v,*(s32 *)(data_02155984+0x20),pos->y-0x4000,*(s32 *)(data_02155984+0x28));
distance=func_020dddf0(&v,pos);
angle=func_020ddc8c(pos,&v);
if(distance>0xa000) v.z-=(v.z-pos->z)-data_0213a394[((angle%65536)>>4)*2+1]*10;
func_0203d864(&v);
}
set_vec_d970(&v,*(s32 *)(data_02155984+0x20),pos->y-0x4000,*(s32 *)(data_02155984+0x28));
if(func_020dddf0(&v,pos)<=0xf000) {
data_02160204[0x84]=9;*(s32 *)(data_02160204+0x80)=0;
}
}

void func_0203df40(void *arg0) {
    if (data_02160aec == NULL) return;
}

s32 func_0203e5a8(Vec_0203e5a8 *a, Vec_0203e5a8 *b, Vec_0203e5a8 *c) {
    s32 r4 = c->field_4 - b->field_4;
    s32 r3 = a->field_4 - b->field_4;
    s32 r12 = r4 * r3;
    s32 r3b = r4 * r4;
    s32 r2 = c->field_0 - b->field_0;
    s32 r5 = a->field_0 - b->field_0;
    s32 v0 = r2 * r5 + r12;
    s32 v1 = r2 * r2 + r3b;
    s32 ret = _s32_div_f(v0, v1);
    if (ret < 0) {
        s32 t = r4 * ret;
        _dflt((t - r5) * (t - r5));
        func_02020058();
        func_0201ff80();
        return ret;
    }
    return -1;
}

void func_0203e61c(void) {
    Global_020600a0 *g = &data_021600a0;
    if (g->field_4 != NULL) return;
    g->field_4 = (Unk_0203e61c *)func_0210c594(0x58, data_02155c3c);
    func_021167ac(&g->field_4->field_28, 0x20);
    g->field_4->field_0 = func_0203e8c0;
    g->field_4->field_4 = 0x3f3;
    func_0210d9e4(g->field_4);
    g->field_4->field_34 = 0xff;
    g->field_4->field_3a = 0xff;
    g->field_4->field_36 = 0xff;
    g->field_4->field_3c = 0xff;
    g->field_4->field_38 = 0;
    g->field_4->field_3e = 0;
}

void func_0203e6bc(void) {
    Global_020600a0 *g;
    Unk_0203e61c *ptr;
    if (data_021600a0.field_4 != NULL) {
        void *node = data_021600a0.field_4->field_28;
        if (node != NULL) {
            do {
                func_021168f8(&data_021600a0.field_4->field_28, node);
                if (node != NULL) func_0210c5dc(node);
                node = data_021600a0.field_4->field_28;
            } while (node != NULL);
        }
        func_0210da14();
    }
    g = &data_021600a0;
    ptr = g->field_4;
    if (ptr == NULL) return;
    func_0210c5dc(ptr);
    g->field_4 = NULL;
}

void *func_0203e730(u32 a,u32 b,int mode,u32 d) {
int x,y; u8 *obj; u8 *out; u8 *p; int zero=0;
out=func_0210c594(0x28,data_02155c3c);
if(mode==0) {x=0x4000;y=zero;} else if(mode==1) {x=0x4000;y=x;}
out[0x18]=0x28;
*(u32 *)(out+0x1c)=d;
p=data_021600a0.field_4->field_28;
while(p) {
if(*(u16 *)(p+6)==b) {
func_021168f8(&data_021600a0.field_4->field_28,p);
func_020ec548(*(void **)p);
if(p) func_0210c5dc(p);
if(mode==0) data_021600a0.field_4->field_36=zero;
else if(mode==1) data_021600a0.field_4->field_3c=zero;
break;
}
p=*(u8 **)(p+0x24);
}
obj=func_020ec294(a,b,x,y);
*(u16 *)(obj+0x10)=zero;
if(mode==0) {
*(u32 *)(out+0xc)=128;*(u32 *)(out+0x10)=64;
(*(u8 **)(*(u8 **)obj+8))[0x70]|=2;
} else if(mode==1) {*(u32 *)(out+0xc)=152;*(u32 *)(out+0x10)=64;}
*(u32 *)(obj+0x18)=0x40000;*(u32 *)(obj+0x1c)=0x244000;
func_020ec88c(obj,zero,zero);func_020ec8cc(obj,zero,1);
*(u32 *)(out+8)=zero;*(u16 *)(out+4)=a;*(u16 *)(out+6)=b;*(void **)out=obj;
func_021167f0(&data_021600a0.field_4->field_28,out);
return out;
}

