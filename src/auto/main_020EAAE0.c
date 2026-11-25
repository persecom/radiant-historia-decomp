/* 10 functions from 0x020EA188 to 0x020EB180 (main), found by ds-decomp. */
#include "common.h"
typedef struct {s32 x,y,z;} Vec_EAAE0;
static inline u32 GetRenderId(const u8 *node) {return node[0x104];}
extern u8 *data_02160a80;

extern u32 data_02160a90[5];
extern u8 data_021518c0[8];
extern s32 func_0210dba0(void *);
extern s32 func_021086d4();
extern char data_02151784[],data_0215179c[],data_021517b4[],data_021517c8[],data_021517e4[],data_02151800[],data_0215181c[],data_0215183c[],data_02151860[],data_0215187c[],data_0215189c[];
extern u32 data_02155c3c;
extern void *func_0210957c(s32);
extern void func_0210950c(void *);
extern void func_02005e80(char *,const char *,...);
extern void *func_021092d8(char *);
extern s32 func_02092ab0(void *,s32);
extern s32 func_0210cd20(void *,s32);
extern void func_021091b4(void);
extern s32 func_02108620(void *,char *,char *,char *,s32);
extern void func_021093b0(void *);
extern u8 *func_02109f3c(void *);
extern s32 func_020020bc(u32,u32);
extern s32 func_02002080(u32,u32);
extern u8 *func_0210c594(u32,u32);
extern void func_02108680(void *, u32, s32);
extern void *func_0210a4cc(void);
extern s32 func_020f1ffc(void *, s32, s32, s32);
extern void func_0210c5dc(void *);
extern void *func_0210eb98(void *, s32);
extern void func_0210f3ac(void *, void *, s32);
extern s32 func_0210db70(void *);
extern void func_020eaae0(void);
extern s32 data_02170248[],data_02170204[];
extern void func_02001134(void *,void *);
extern void func_02002028(s32);
extern s64 func_02001fd0(void);
static inline void ProjectRenderPosition(const Vec_EAAE0 *pos,s32 *outX,s32 *outY){
const s32 *m=data_02170248,*p=data_02170204;
register s32 z,y;
s32 x,py,px,sy,sx;
s64 inv;
x=m[9]+(s32)(((s64)pos->x*m[0]+(s64)pos->y*m[3]+(s64)pos->z*m[6])>>12);
y=m[10]+(s32)(((s64)pos->x*m[1]+(s64)pos->y*m[4]+(s64)pos->z*m[7])>>12);
z=m[11]+(s32)(((s64)pos->x*m[2]+(s64)pos->y*m[5]+(s64)pos->z*m[8])>>12);
func_02002028(p[15]+(s32)(((s64)x*p[3]+(s64)y*p[7]+(s64)z*p[11])>>12));
px=p[12]+(s32)(((s64)x*p[0]+(s64)y*p[4]+(s64)z*p[8])>>12);
py=p[13]+(s32)(((s64)x*p[1]+(s64)y*p[5]+(s64)z*p[9])>>12);
inv=func_02001fd0();
sy=(s32)((inv*py+0x80000000LL)>>32);
sy=(sy+4096)>>1;
sy=((sy<<7)+(sy<<6)+2048)>>12;
sx=(s32)((inv*px+0x80000000LL)>>32);
sx=((((sx+4096)>>1)<<8)+2048)>>12;
sy=192-sy;
*outX=sx;*outY=sy;
}
extern s32 func_020ebddc(void *, s32);
extern void func_020dd810(void *, s32, s32);
extern u8 *data_02160a6c;

extern void func_0211a4c0(void *, s32, s32);
extern void func_0211ad90(void (*)(void));
extern void func_0211a4d4(void *, void *, void *);
extern void func_02119da4(void *);
extern void func_02119f1c(void);
extern void func_0211a178(s32, s32, s32);
extern void func_0211a3ac(s32, s32);
extern void func_0211a26c(s32, s32, s32);
extern void func_02119eb8(void *);
extern void func_0211a128(void);
extern void func_02119e4c(void);
extern void func_0211ada0(void);
extern void func_02117be0(void *, s32);
extern void *func_021176b0(void *, u32);
extern void func_02118eec(void *, s32);
extern void func_02118ed0(void *, s32, s32);
extern void func_02118eb4(void *, s32);
extern void func_02118e94(void *, s16, s16);
extern void func_02107aec(void);
extern u8 data_021612c8[];
extern u32 data_02162860;
extern s16 data_0213a394[];
extern s32 data_02162834[];
#pragma push
#pragma opt_propagation off

#pragma pop
extern u8 *data_02160a80;

#pragma opt_propagation off

#pragma opt_propagation on

void func_020ebc94(void *,u16,s32);
#pragma opt_propagation off

void func_020eaae0(void){
Vec_EAAE0 pos;
s32 matrix[12];
u8 *sub,*node,*obj,*next;
u8 visible,culled;
func_02001134(data_02170248,matrix);
if(!data_02160a6c)return;
func_020e9dc0();
node=*(u8 **)(data_02160a6c+0x7c);
if(!node)return;
do{
sub=*(u8 **)(node+0x108);obj=*(u8 **)(sub+8);
pos=*(Vec_EAAE0 *)node;
next=*(u8 **)(node+0x15c);
if((*(u32 *)(node+0x80)&2)==0){*(u32 *)(node+0x80)&=~4;visible=0;}else visible=1;
if(*(s32 *)(node+0x64)==0)
{
s32 sx,sy;
ProjectRenderPosition(&pos,&sx,&sy);
*(s32 *)(node+0xfc)=sx;*(s32 *)(node+0x100)=sy;
if(sx < -48 || sx > 304 || sy < -16 || sy > 240){*(u32 *)(node+0x80)&=~4;culled=1;}
else{*(u32 *)(node+0x80)|=4;culled=0;}
}
else
{
s32 sx,sy;
ProjectRenderPosition(&pos,&sx,&sy);
*(s32 *)(node+0xfc)=sx;*(s32 *)(node+0x100)=sy;
*(u32 *)(node+0x80)|=4;culled=0;
}
if(node[0xa1]&1){
*(s32 *)(node+0x54)=4096;
*(s32 *)(node+0xfc)=*(s32 *)node;
*(s32 *)(node+0x100)=*(s32 *)(node+4);culled=0;
}
if(visible && !culled){
if(*(s32 *)(sub+0x18) && GetRenderId(node)!=999){
u32 mode=1;u8 *seq=*(u8 **)(sub+0xc);
if(*(u16 *)(node+0x94))mode=3;
if(*(u16 *)(sub+0x1c)!=mode){
u16 id;
*(u16 *)(sub+0x1c)=mode;
id=*(u16 *)(seq+2);
if(*(u16 *)(node+0x94))id++;
func_020ebc94(sub,id,0);
}
}
{
s32 scale=*(s32 *)(node+0x54);
u32 cull=2,flag=0;
s32 x,y,z;
u32 flags;
if(((u32)obj[0x70]<<30)>>31){scale*=-1;cull=3;}
if(*(u32 *)(node+0x80)&0x1000)flag=0x8000;
*(volatile u32 *)0x040004a4=flag|(cull<<6)|(*(s16 *)(node+0x9a)<<16);
if(*(u32 *)(node+0x80)&0x20000)*(u16 *)(node+0x88)=31;
*(volatile u32 *)0x04000480=*(u16 *)(node+0x88);
func_0211a4c0(data_021612c8,0,0);
func_0211a4d4(data_021612c8,*(void **)(*(u8 **)(obj+0x58)+0x10),*(void **)(*(u8 **)(obj+0x58)+0x14));
func_02119da4(data_021612c8);func_02119f1c();
flags=*(u32 *)(node+0x80);x=*(s32 *)(node+0xfc);y=*(s32 *)(node+0x100);
if(flags&0x80){x+=*(s32 *)(node+0x3c);y+=*(s32 *)(node+0x40);}
if(flags&0x8000){x+=*(s32 *)(node+0x68);y+=*(s32 *)(node+0x70);}
z=*(s32 *)(node+0x64);
if(!z){z=*(s32 *)(node+0x74)<<12;if(node[0x192])z=(node[0x192]+0x212)<<12;func_0211a178(x<<12,y<<12,z);}else func_0211a178(x<<12,y<<12,z<<12);
func_0211a26c(scale,*(s32 *)(node+0x54),4096);
func_02119eb8(obj);func_0211a128();func_02119e4c();
}
}
node=next;
}while(node);
}
#pragma opt_propagation on
void func_020eb0f8(void) {
    u8 *node = data_02160a6c;
    u8 *obj = *(u8 **)(node + 0x7c);
    s32 zero = 0;
    s32 one = 1;
    s32 arg = zero;
    if (obj == NULL) return;
    while (obj != NULL) {
        u8 *sub = *(u8 **)(obj + 0x108);
        func_020ebddc(sub, *(u32 *)(obj + 0xf8) == 0 ? one : zero);
        if (*(u32 *)(obj + 0xa8) == 0 && *(u32 *)(sub + 0x20) == 1) {
            u8 v = *(u8 *)(obj + 0x104);
            if (v == 3 || v == 8) {
                func_020dd810(obj, arg, arg);
            }
        }
        obj = *(u8 **)(obj + 0x15c);
    }
}

