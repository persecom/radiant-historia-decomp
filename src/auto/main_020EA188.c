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
s32 func_020ea188(u8 *arg0,s32 id,u8 type) {
 char filename[40],pathA[50],pathB[50],pathC[50];
 s32 zero=0;
 void *file=0;
 s32 cached=0;
 u8 *resource;
 if(type==0)func_02005e80(filename,data_02151784);
 else if((u8)(type+255)<=1) {
 if(func_0210957c(0)) {file=func_0210957c(0);func_0210950c(file);cached=1;}
 else func_02005e80(filename,data_0215179c);
 }
 ((s32 *)&data_02160a80)[1]=zero;((s32 *)&data_02160a80)[2]=zero;((s32 *)&data_02160a80)[3]=zero;
 if(!cached)file=func_021092d8(filename);
 if(func_02092ab0(file,id)!=-1){
 ((s32 *)&data_02160a80)[1]=func_0210cd20(file,zero);
 ((s32 *)&data_02160a80)[2]=func_0210cd20(file,zero);
 ((s32 *)&data_02160a80)[3]=func_0210cd20(file,zero);
 func_021091b4();
 }
 if(((s32 *)&data_02160a80)[1] && ((s32 *)&data_02160a80)[2] && ((s32 *)&data_02160a80)[3]){
 if(type==0){
 func_02005e80(pathA,data_021517b4,((s32 *)&data_02160a80)[1]);
 func_02005e80(pathB,data_021517c8,((s32 *)&data_02160a80)[2]);
 func_02005e80(pathC,data_021517e4,((s32 *)&data_02160a80)[3]);
 } else if(type==1){
 func_02005e80(pathA,data_02151800,((s32 *)&data_02160a80)[1]);
 func_02005e80(pathB,data_0215181c,((s32 *)&data_02160a80)[2]);
 func_02005e80(pathC,data_0215183c,((s32 *)&data_02160a80)[3]);
 } else if(type==2){
 func_02005e80(pathA,data_02151860,((s32 *)&data_02160a80)[1]);
 func_02005e80(pathB,data_0215187c,((s32 *)&data_02160a80)[2]);
 func_02005e80(pathC,data_0215189c,((s32 *)&data_02160a80)[3]);
 }
 if(!func_02108620(*(void **)arg0,pathA,pathB,pathC,zero))return zero;
 }
 if(!cached && file)func_021093b0(file);
 resource=func_02109f3c(*(void **)(*(u8 **)(*(u8 **)arg0+0x58)+8));
 if(!*(u8 **)(resource+0x10)){
 if(type<=1){
 s32 i;
 u8 *allocation;
 s32 count;
 s32 j,index;
 s32 total=*(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)arg0+0x58)+0xc));
 s32 extra=func_020020bc(total,2)!=0;
 count=(u16)(extra+func_02002080(total,2));
 allocation=func_0210c594(count*4,data_02155c3c);
 u8 *p=allocation;
 for(i=0;i<count;i++){
 index=i*2;
 *(u16 *)(p+2)=index;p[0]=0;
 for(j=0;j<2;j++,index++){
 if(total>index){
 s32 absent=func_021086d4(*(void **)arg0,(u16)index) ? 0 : 1;
 if(absent==0)p[0]|=(u8)(1<<j);
 }
 }
 p+=4;
 }
 *(u8 **)(resource+0x10)=allocation;
 }else if(type==2){
 s32 total=*(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)arg0+0x58)+0xc));
 s32 extra=func_020020bc(total,4)!=0;
 s32 count=(u16)(extra+func_02002080(total,4));
 u8 *allocation=func_0210c594(count*4,data_02155c3c);
 u8 *p=allocation;
 s32 i;
 for(i=0;i<count;i++){*(u16 *)(p+2)=i;p[0]|=1;p+=4;}
 *(u8 **)(resource+0x10)=allocation;
 }
 }
 *(u8 **)(arg0+0xc)=*(u8 **)(resource+0x10);
 return 1;
}
