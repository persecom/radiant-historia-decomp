/* 1 function from 0x02037D1C to 0x0203909C (main), found by ds-decomp. */
#include "common.h"
typedef struct {s32 x,y,z;} Vec_02037D1C;
typedef struct {u16 state; volatile s16 timer, timer2, timer3;u16 flags;u8 pad[14];Vec_02037D1C pos;u8 pad24[12];s16 timer30;} State_02037D1C;
typedef struct {Vec_02037D1C pos;u8 pad0c[0x6c];s32 speed;u32 pad7c,flags;u8 pad84[0x74];s32 visible;u8 padfc[8];u8 anim;u8 pad105[0x23];u8 *extra;u8 pad12c[0x66];u8 alpha;} Actor_02037D1C;
typedef struct {u8 *object;u8 pad04[0x14];s32 y;u32 pad1c;s32 sx,sy;u8 pad28[0x10];s32 flag38;} Effect_02037D1C;
typedef struct {Vec_02037D1C pos;u8 type;u8 pad0d;u16 a;u8 b;u8 pad11;u16 c;u8 d;} EffectParam_02037D1C;
extern u8 *data_02160a74,*data_02160244,*data_02160204;
extern Vec_02037D1C *data_02160258;
extern Vec_02037D1C func_020332e8(void);
static inline void setpos_02037D1C(Vec_02037D1C *v,int x,int y,int z){v->x=x;v->y=y;v->z=z;}
static inline void offset_02037D1C(Vec_02037D1C *out, int dx,int dy,int dz){
int y=data_02160258->y,z=data_02160258->z,x=data_02160258->x;
out->y=y+dy;out->z=z+dz;out->x=x+dx;
}
extern Effect_02037D1C *func_020ec950(int);
extern Effect_02037D1C *func_020c1370(int,void *,int,int,int);
extern u8 *func_020f0a5c(int);


void func_02037d1c(Actor_02037D1C *a){
State_02037D1C *s=*(State_02037D1C **)(a->extra+0x8c);
u16 next=0; u16 i; Vec_02037D1C pos;
EffectParam_02037D1C ep;
switch(s->state){
case 0:func_020d9ea8(40,0);*(s16 *)(data_02160a74+0x1e0)=0;
s->pos.x=a->pos.x;s->pos.y=a->pos.y;s->pos.z=a->pos.z;func_020d907c(&s->pos);
(*(u8 **)data_02160244)[0x6c]=1;func_020d9ea8(0x80000000,0);func_020d9ea8(8,48);s->timer=0;next=1;break;
case 1: s->timer=(s16)(s->timer+1);if(s->timer>10){s->timer=0;next=2;}break;
case 2:
if(!(s->flags&1)){func_020331d0(s,1,1);func_020dd810(a,14,0);a->speed=0x8fc;func_02033274(a,a->pos.x,a->pos.y+0xa0000,a->pos.z);a->alpha=100;func_0210d27c(96);}
if(!(s->flags&2) && func_020331f0(a)) {func_020331d0(s,2,1);}
if(!(s->flags&4) && func_020d2af4(0,1,31,1,300)){
u8 *p=func_020f0a5c(*(u16 *)(data_02160204+0x7c));*(u32 *)(p+0x14)&=~1;
func_020df3f4(a,1);func_020df56c(0,1);func_02036348(0);func_020331d0(s,4,1);
}
if((s->flags&2)&&(s->flags&4)){Vec_02037D1C *v=data_02160258;v[1]=func_020332e8();v[1].y+=0xa000;v=data_02160258;v[0]=v[1];(*(u8 **)data_02160244)[0x6c]=8;next=3;}break;
case 3:
if(!(s->flags&1)){func_020331d0(s,1,1);pos.x=524288;pos.y=393216;pos.z=2052096;func_020ec8cc(func_020c1370(25,&pos,2043,19,3328),0,0);
a->pos=*data_02160258;a->speed=0x8fc;a->pos.y-=0x64000;func_02033274(a,a->pos.x,data_02160258->y+0xa000,a->pos.z);}
if(!(s->flags&2)){a->speed-=120;if(a->speed<100)a->speed=100;func_020ddd5c(a);func_020ddd8c(a);func_0205baf8(a);
if(func_020331f0(a)){func_020dd810(a,15,0);a->pos.y-=0x14000;func_020331d0(s,2,1);s->timer30=0;}}
if(a->anim==15 && (func_0205bcb0(a,4)&1))func_0210d27c(96);
if((s->flags&2)&&!(s->flags&4)&&(func_0205bcb0(a,0)&2)){func_020dd810(a,16,0);func_020331d0(s,4,1);}
if((s->flags&4)){s->timer30=0;next=4;}break;
case 4:
if(!(s->flags&1)){func_020ec8cc(func_020ec950(25),1,0);func_020331d0(s,1,1);}
if(!(s->flags&2)){func_020331d0(s,2,1);}
for(i=0;i<5;i++){Effect_02037D1C *e=func_020ec950(i+21);if(e && *(int *)(e->object+0x20)){func_020ec548(e);s->timer=(s16)(s->timer+1);}}
if(!(s->flags&4)){
if(func_0205bcb0(a,0)&1)func_0210d27c(118);
if(func_0205bcb0(a,6)&1)func_0210d27c(118);
if(func_0205bcb0(a,12)&1)func_0210d27c(118);
if(func_0205bcb0(a,23)&1){a->visible=1;func_0210d27c(130);func_020331d0(s,4,1);}}
if((s->flags&4)&&!(s->flags&8)){s->timer3=(s16)(s->timer3+1);if(s->timer3>3){a->speed=0x8fc;func_02033274(a,a->pos.x,data_02160258->y-0x64000,a->pos.z);func_020331d0(s,8,1);}}
if((s->flags&8)&&!(s->flags&16)&&func_020331f0(a)){a->flags&=~2;a->visible=0;func_020331d0(s,16,1);}
if((s->flags&16)&&s->timer>=1)next=9;break;
case 9:
if(!(s->flags&1)){pos.x=524288;pos.y=393216;pos.z=2211840;func_020c1370(3,&pos,2043,3,1280);func_020331d0(s,1,1);}
for(i=0;i<5;i++){Effect_02037D1C *e=func_020ec950(i);if(e){
if(i==0){if(func_020ec9a0(e->object,0)&1)func_0210d27c(129);}
else if(i==1){if(func_020ec9a0(e->object,0)&1)func_0210d27c(129);}
if(*(int *)(e->object+0x20)){if(i==3&&!(s->flags&2)){func_020331d0(s,2,1);}else {func_020ec548(e);s->timer=(s16)(s->timer+1);}}
}}
if(s->timer>=1)next=10;break;
case 10:
if(!(s->flags&1)){pos.x=524288;pos.y=393216;pos.z=2334720;func_020ec8cc(func_020c1370(8,&pos,2045,8,1920),0,0);pos.x=524288;pos.y=-49152;pos.z=2375680;func_020c1370(26,&pos,2043,24,5760);func_020331d0(s,1,1);}
if(!(s->flags&2)){Effect_02037D1C *e=func_020ec950(26);if(e){int dy;s->timer=(s16)(s->timer+1);dy=(15-s->timer)<<12;if(dy<4096)dy=4096;e->y+=dy;if(e->y>=0x60000){e->y=0x60000;func_020331d0(s,2,1);}}}
if((s->flags&2))next=11;break;
case 11:{
Effect_02037D1C *e;
if(!(s->flags&1)){func_020ec8cc(func_020ec950(5),1,0);func_020ec8cc(func_020ec950(6),1,0);func_020ec8cc(func_020ec950(7),1,0);func_020331d0(s,1,1);}
e=func_020ec950(26);if(e){e->sx-=16;e->sy-=16;}
if(!(s->flags&2)){func_020331d0(s,2,1);}if(!(s->flags&4)){func_020331d0(s,4,1);}if(!(s->flags&8)){func_020331d0(s,8,1);}
if((s->flags&2)&&(s->flags&4)&&(s->flags&8))next=12;break;}
case 12:
if(!(s->flags&1)){func_020ec548(func_020ec950(26));func_020ec8cc(func_020ec950(8),1,0);func_020331d0(s,1,1);}
if(!(s->flags&2)){Effect_02037D1C *e=func_020ec950(8);if(e&&func_020332c8(e)==2){func_0210d27c(116);e->flag38=1;func_020331d0(s,2,1);}}
if((s->flags&2)&&!(s->flags&4)){Effect_02037D1C *e=func_020ec950(8);if(e){s->timer2=(s16)(s->timer2+1);if(s->timer2==1)func_0210d27c(117);if(s->timer2>15){e->y+=(15-s->timer2)<<12;if(e->y<=-0x3c000){func_020ec548(e);func_020331d0(s,4,1);}}}}
if((s->flags&4))next=13;break;
case 13:
if(!(s->flags&1)){pos.x=524288;pos.y=393216;pos.z=2256896;func_020ec8cc(func_020c1370(12,&pos,2043,13,128),0,0);pos.x=524288;pos.y=393216;pos.z=2375680;func_020ec8cc(func_020c1370(14,&pos,2045,15,1664),0,0);func_020331d0(s,1,1);}
if(!(s->flags&2)){s->timer=(s16)(s->timer+1);if(s->timer>15){s->timer=0;func_020ec8cc(func_020ec950(12),1,0);func_020331d0(s,2,1);}}
if((s->flags&1)&&(s->flags&2)){s->timer=(s16)(s->timer+1);if(s->timer>30)next=14;}break;
case 14:{
Effect_02037D1C *e;
if(!(s->flags&1)){func_020ec8cc(func_020ec950(14),1,0);func_020331d0(s,1,1);}
e=func_020ec950(14);if(e){if(func_020ec9a0(e->object,1)&1)func_0210d27c(127);if(func_020ec9a0(e->object,14)&1)func_0210d27c(127);if(func_020ec9a0(e->object,26)&1)func_0210d27c(127);if(func_020ec9a0(e->object,38)&1)func_0210d27c(127);}
if(!(s->flags&2)){s->timer=(s16)(s->timer+1);if(s->timer>26&&func_020d2af4(1,1,31,0,700)){func_020331d0(s,2,1);}}
if((s->flags&1)&&(s->flags&2)){func_020ec548(func_020ec950(11));func_020ec548(func_020ec950(12));func_020ec548(func_020ec950(13));func_020ec548(func_020ec950(14));next=19;}break;}
case 19:
if(!(s->flags&1)){u8 *p=func_020f0a5c(*(u16 *)(data_02160204+0x7c));*(u32 *)(p+0x14)|=1;func_020df3f4(0,0);a->flags&=~2;func_020df56c(0,0);func_02036348(1);func_020d2af4(0,-31,0,0,300);pos.x=524288;pos.y=0;pos.z=2580480;func_020ec8cc(func_020c1370(15,&pos,2045,18,0),0,0);func_020331d0(s,1,1);}
if(!(s->flags&2)&&func_020d2af4(1,-1,0,0,700)){func_020331d0(s,2,1);}
s->timer=(s16)(s->timer+1);
for(i=0;i<4;i++){
int delay,speed,height;u16 flag;
switch(i){
case 0:setpos_02037D1C(&pos,data_02160258->x-0xa000,data_02160258->y-0xa000,data_02160258->z);delay=36;speed=15;height=0x3d000;break;
case 1:setpos_02037D1C(&pos,data_02160258->x+0x37000,data_02160258->y-0xf000,data_02160258->z);delay=15;speed=15;height=0x42000;break;
case 2:setpos_02037D1C(&pos,data_02160258->x-0x32000,data_02160258->y-0x19000,data_02160258->z);delay=24;speed=16;height=0x56000;break;
case 3:setpos_02037D1C(&pos,data_02160258->x+0xa000,data_02160258->y-0x37000,data_02160258->z);delay=30;speed=18;height=0x88000;break;
}
flag=4<<i;if(!(s->flags&flag)&&s->timer>delay){Effect_02037D1C *e=func_020ec950(i);func_020ec8cc(e,1,0);if(e){e->y+=speed<<12;if(e->y>=height){
ep.type=2;ep.a=0;ep.b=0;ep.c=0;ep.d=1;ep.pos.x=0;ep.pos.y=0;ep.pos.z=0;func_0206e7a0(18,&pos,&ep,0);func_020ec548(e);func_020331d0(s,flag,1);}} else func_020331d0(s,flag,1);}
}
if((s->flags&2)&&(s->flags&4)&&(s->flags&8)&&(s->flags&16)&&(s->flags&32)){
s->timer2=(s16)(s->timer2+1);if(s->timer2>5){Effect_02037D1C *e;
pos.x=524288;pos.y=475136;pos.z=2580480;func_020ec8cc(func_020c1370(19,&pos,2044,1,2176),0,0);
pos.x=0x80000;pos.y=0x74000;pos.z=0x276000;e=func_020c1370(20,&pos,0x7fc,2,0x10c0);func_020ec8cc(e,0,0);e->sx=0x800;e->sy=0x800;next=20;
}}break;
case 20:
if(!(s->flags&1)){Effect_02037D1C *e=func_020ec950(15);func_020ec8cc(e,1,0);if(e){e->y+=0xf000;if(e->y>=0x74000){func_020ec548(e);func_020ec8cc(func_020ec950(19),1,0);func_020ec8cc(func_020ec950(20),1,0);data_02160244[0x10d]=0;func_0205db90(a,0,4,0);func_0210d27c(144);func_020331d0(s,1,1);}}}
if((s->flags&1)){Effect_02037D1C *e=func_020ec950(19);if(e){e->sx+=0x100;e->sy+=0x200;if(e->sy>0x2000){u8 *p=*(u8 **)(e->object+8);p[0x71]-=3;p=*(u8 **)(e->object+8);if(p[0x71]<2){p[0x71]=0;func_020ec548(e);func_020331d0(s,2,1);}}}
e=func_020ec950(20);if(e){e->sx+=0x200;e->sy+=0x200;if(e->sx>0x2000){u8 *p=*(u8 **)(e->object+8);p[0x71]-=3;p=*(u8 **)(e->object+8);if(p[0x71]<2){p[0x71]=0;func_020ec548(e);func_020331d0(s,4,1);}}}
}
if((s->flags&2)&&(s->flags&4))next=21;break;
case 21:
if(!(s->flags&1)){pos=s->pos;pos.x+=0x1e000;func_020d9058(&pos);func_020331d0(s,1,1);}
if(!(s->flags&2)){s->timer=(s16)(s->timer+1);if(s->timer>15){a->pos=s->pos;a->pos.y+=0x3c000;func_020dd810(a,8,0);a->flags|=2;a->alpha=0;func_020331d0(s,2,1);}}
if((s->flags&2)&&!(s->flags&4)){a->pos.y-=0xf000;if(a->pos.y<=s->pos.y){a->pos.y=s->pos.y;func_020dd810(a,8,0);func_0210d27c(96);func_020331d0(s,4,1);}}
if((s->flags&4)){s->timer=(s16)(s->timer+1);if(s->timer>1&&(func_0205bcb0(a,0)&2))next=26;}break;
}
if(next)func_020331b0(s,next);
}
