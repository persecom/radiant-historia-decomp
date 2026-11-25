/* 1 function from 0x02104F68 to 0x02106928 (main), found by ds-decomp. */
#include "common.h"
typedef struct {
u8 pad0[106];
u16 f6a;
u8 pad6c[4];
u16 f70;
u16 f72;
u16 f74;
u16 f76;
u16 f78;
u8 f7a;
u8 pad7b[3];
u8 f7e;
u8 pad7f[6];
u8 f85;
u8 pad86[3];
u8 f89;
u16 f8a;
u8 pad8c[72];
u16 fd4;
u8 padd6[1];
u8 fd7;
u8 fd8;
u8 padd9[1];
u16 fda;
u16 fdc;
u8 fde;
u8 paddf[1];
u8 fe0;
u8 pade1[21];
u16 ff6;
u8 padf8[4];
u16 ffc;
u8 ffe;
u8 fff;
u8 f100;
u8 pad101[15];
u8 f110;
u8 pad111[9];
u16 f11a;
u8 pad11c[3];
u8 f11f;
u8 pad120[5];
u8 f125;
} State_02104F68;
extern State_02104F68 *data_02160204;
extern char data_021558ac[];
extern char data_021558b0[];
extern char data_021558b4[];
extern char data_021558d4[];
extern char data_021558dc[];
extern char data_021558f4[];
extern char data_02155900[];
extern char data_02155908[];
extern char data_02155910[];
extern u8 *data_021626e8;
extern char data_021557bc[];
extern u8 *data_02160260;
extern u8 *data_021600ac;
extern u8 *data_02160200;
extern u8 *data_021600b0;
extern char data_021557c4[];
extern char data_021557cc[];
extern char data_021557d4[];
extern char data_021557dc[];
extern char data_021557e4[];
extern char data_021557e8[];
extern char data_021557f0[];
extern char data_021557f4[];
extern char data_021557fc[];
extern char data_02155804[];
extern char data_0215580c[];
extern int data_02146330;
extern char data_02155818[];
extern char data_02155820[];
extern char data_02155824[];
extern u8 *data_02160078;
extern char data_0215582c[];
extern char data_02155830[];
extern char data_02155834[];
extern char data_02155838[];
extern char data_0215583c[];
extern char data_02155844[];
extern char data_02155848[];
extern char data_02155850[];
extern u8 *data_021600c0;
extern char data_02155854[];
extern u8 *data_021600bc;
extern char data_0215585c[];
extern char data_02155860[];
extern char data_02155868[];
extern char data_02155874[];
extern char data_0215587c[];
extern char data_02155884[];
extern char data_0215588c[];
extern char data_02155894[];
extern char data_02155898[];
extern char data_021558a0[];
extern char data_021558a8[];
extern char data_021558bc[];
extern char data_021558f8[];
extern char data_02155918[];
extern char data_0215591c[];
extern char data_02155924[];
extern char data_02155928[];
extern char data_02155934[];
extern char data_02155940[];
extern char data_02155948[];
extern char data_0215594c[];
extern u8 *func_02047820(int);
extern u8 *func_020bd438(u8);
extern void func_020bd35c(u8,u16);
extern void func_020bbe20(u8,u8);
extern void func_020bd2fc(u8,u16,u8,u8);
extern u8 *func_02021f10(int);
extern u8 *func_021092d8(void *);
extern u8 *func_02106c9c(int);
extern char *func_0210cd50(void);

int func_02104f68(void){
u8 *ctx=*(u8 **)(data_021626e8+16);
if(func_0210cc54(data_021557bc)){
switch(data_02160204->fd7){case 18:if(!((*(u32 *)(data_02160200+0x15c))&0x80000000)){func_0210d27c(117);data_02160204->fd7=38;data_02160204->f11f=3;(*(u32 *)(data_021600ac+0xc))=1;}
else if(!((*(u32 *)(data_02160200+0x15c))&0x4000000)){
if((*(u16 *)(data_021600b0+0xe0)))func_02044fb0(func_020a2814(func_020a18c8(5)),0);
else {int n=0;if((*(s16 *)(data_021600b0+0x1ea))>=17){n=func_020a0e08(data_021600b0+0x1d4);n=func_020a27a8((data_021600b0+(s16)n*40)[0x248]);}
else if((*(s16 *)(data_021600b0+0x1ea))==9)n=1;else if((*(s16 *)(data_021600b0+0x1ea))==15)n=2;func_02044fb0(n,1);}
}else {(*(u32 *)(data_02160200+0x15c))&=~0x4000000;func_02044f80();}break;case 2:(*(u32 *)(data_021600ac+0xc))=1;break;case 1:(*(u32 *)(data_02160260+0x60))|=64;break;case 7:(*(u32 *)(data_021600ac+0xc))=1;if(!data_02160204->f125){data_02160204->fd8=5;return 1;}data_02160204->fd8=2;break;default:return 0;}
data_02160204->fd8=data_02160204->fd7;data_02160204->fd4=(u8)func_0210ce5c();data_02160204->fda=func_0210ce5c();data_02160204->f70=data_02160204->fda;data_02160204->fdc=func_0210ce5c();data_02160204->f72=func_0210ce5c();return 1;}
if(func_0210cc54(data_021557c4)){switch(data_02160204->fd7){case 18:data_02160204->fd7=2;case 2:(*(u32 *)(data_021600ac+0xc))=1;break;case 1:(*(u32 *)(data_02160260+0x60))|=64;break;case 7:(*(u32 *)(data_021600ac+0xc))=1;if(!data_02160204->f125){data_02160204->fd8=5;return 1;}data_02160204->fd8=2;break;default:return 0;}data_02160204->fd8=data_02160204->fd7;data_02160204->fd4=(u8)func_0210ce5c();data_02160204->fda=func_0210ce5c();data_02160204->f70=data_02160204->fda;data_02160204->f72=func_0210ce5c();data_02160204->fde=1;data_02160204->f7a=0;return 1;}
if(func_0210cc54(data_021557cc)){switch(data_02160204->fd7){case 2:(*(u32 *)(data_021600ac+0xc))=1;break;case 1:(*(u32 *)(data_02160260+0x60))|=64;break;case 7:(*(u32 *)(data_021600ac+0xc))=1;if(!data_02160204->f125){data_02160204->fd8=5;return 1;}data_02160204->fd8=2;break;default:return 0;}data_02160204->fd8=2;{u8 *p=func_02047820(0);if(p){data_02160204->f74=(*(s32 *)p)>>12;data_02160204->f76=(*(s32 *)(p+8))>>12;data_02160204->f78=(*(u16 *)(p+0x92));(*(u32 *)(p+0xac))&=~0x800;(*(u32 *)(p+0xac))&=~0x400;}}data_02160204->f72=func_0210ce5c();return 1;}
if(func_0210cc54(data_021557d4)){switch(data_02160204->fd7){case 2:(*(u32 *)(data_021600ac+0xc))=1;break;case 1:(*(u32 *)(data_02160260+0x60))|=64;break;case 7:(*(u32 *)(data_021600ac+0xc))=1;if(!data_02160204->f125){data_02160204->fd8=5;return 1;}data_02160204->fd8=2;break;default:return 0;}data_02160204->fd8=2;{u8 *p=func_02047820(0);if(p){data_02160204->f74=(*(s32 *)p)>>12;data_02160204->f76=(*(s32 *)(p+8))>>12;data_02160204->f78=(*(u16 *)(p+0x92));(*(u32 *)(p+0xac))&=~0x800;(*(u32 *)(p+0xac))&=~0x400;}}data_02160204->f72=func_020f5704(0);return 1;}
if(func_0210cc54(data_021557dc)){switch(data_02160204->fd7){case 2:case 7:func_020a4c98(0);(*(u32 *)(data_021600ac+0x10))=10;break;case 1:(*(u32 *)(data_02160260+0x60))|=64;data_02160204->fd8=1;break;default:return 0;}
{u8 *p=func_02047820(0);if(p){data_02160204->f74=(*(s32 *)p)>>12;data_02160204->f76=(*(s32 *)(p+8))>>12;data_02160204->f78=(*(u16 *)(p+0x92));}}data_02160204->fe0=1;data_02160204->f89=1;data_02160204->fd4=func_0210ce5c();data_02160204->f8a=func_0210ce5c();return 1;}
if(func_0210cc54(data_021557e4)){switch(data_02160204->fd7){case 2:case 7:func_020a4c98(0);(*(u32 *)(data_021600ac+0x10))=10;break;case 1:data_02160204->fd8=1;(*(u32 *)(data_02160260+0x60))|=64;break;default:return 0;}
{u8 *p=func_02047820(0);if(p){data_02160204->f74=(*(s32 *)p)>>12;data_02160204->f76=(*(s32 *)(p+8))>>12;data_02160204->f78=(*(u16 *)(p+0x92));}}data_02160204->fe0=1;data_02160204->f89=0;data_02160204->f6a=func_0210ce5c();return 1;}
if(func_0210cc54(data_021557e8)){data_02160204->ffc=func_0210ce5c();data_02160204->ffe=func_0210ce5c()/8;data_02160204->fff=func_0210ce5c()/8;data_02160204->f100=func_0210ce5c()/8;return 1;}
if(func_0210cc54(data_021557f0)){switch(data_02160204->fd7){case 2:case 7:(*(u32 *)(data_021600ac+0xc))=1;break;case 1:(*(u32 *)(data_02160260+0x60))|=64;break;case 18:(*(u32 *)(data_021600ac+0xc))=1;break;default:return 0;}data_02160204->f72=2000;data_02160204->fd8=18;data_02160204->fd4=(u8)func_0210ce5c();data_02160204->f70=func_0210ce5c();data_02160204->f74=100;data_02160204->f76=100;data_02160204->f110=1;return 1;}
if(func_0210cc54(data_021557f4)){int done=0;if(func_0210cc54(data_021557fc)){func_020cea64(0);done=1;}if(func_0210cc54(data_02155804)){done=1;func_020cea64(1);}if(done){switch(data_02160204->fd7){case 2:case 7:(*(u32 *)(data_021600ac+0xc))=1;break;case 1:(*(u32 *)(data_02160260+0x60))|=64;break;case 18:(*(u32 *)(data_021600ac+0xc))=1;break;default:return 0;}data_02160204->fd8=29;}return done;}
if(func_0210cc54(data_0215580c)){data_02160204->f7a=1;data_02160204->f11a=2;data_02146330=29;func_020cea64(0);(*(u32 *)(data_021600ac+0xc))=1;(*(u32 *)(data_02160200+0x160))|=128;return 1;}
if(func_0210cc54(data_02155818)){if(data_02160204->fd7==2||data_02160204->fd7==7){(*(u32 *)(data_021600ac+0xc))=1;}func_020bac70((u8)func_0210ce5c());data_02160204->fd8=37;data_02160204->fd4=(u8)func_0210ce5c();data_02160204->fda=func_0210ce5c();data_02160204->f70=data_02160204->fda;data_02160204->fdc=func_0210ce5c();data_02160204->f72=func_0210ce5c();return 1;}
if(func_0210cc54(data_02155820)){int n=func_0210ce5c();switch(n){case 0:data_02160204->fd8=4;break;default:data_02160204->f72=n;data_02160204->fd8=2;break;}data_02160204->f85=1;(*(u32 *)(data_021600ac+0xc))=1;data_02160204->f74=func_020f5948()>>12;data_02160204->f76=func_020f5948()>>12;data_02160204->f7a=0;return 1;}
if(func_0210cc54(data_02155824)){int x,z,rot;u8 *p;data_02160204->f72=func_0210ce5c();data_02160204->f85=1;x=func_020f5948();z=func_020f5948();rot=func_020f5948();if(data_021600ac&&(p=*(u8 **)(data_021600ac+0x68))!=0){*(int *)p=x;*(int *)(p+8)=z;(*(u16 *)(p+0x92))=rot;}
data_02160204->f74=x>>12;data_02160204->f76=z>>12;data_02160204->f78=rot>>12;{u16 x=data_02160204->f74,z=data_02160204->f76;u8 *save=data_02160078;(*(u16 *)(save+0x1692))=x;(*(u16 *)(save+0x1694))=z;}(*(u32 *)(data_02160200+0x160))|=128;return 1;}
if(func_0210cc54(data_0215582c)){
if(!data_021600ac)return 0;
if(func_0210cc54(data_02155830)){int n=func_0210ce5c();data_021600ac[0x3ac]|=(u8)(1<<n);if(n!=4)return 1;{char path[64];func_02015a10(path,data_02155834,func_0210cd50());func_020a957c(data_021600ac+0xb0);(*(u32 *)(data_021600ac+0xb0))=func_020a94b8(path);data_021600ac[0x640]=1;(*(u32 *)(data_021600ac+0x644))=1;}return 1;}
if(func_0210cc54(data_02155838)){data_021600ac[0x3ac]&=(u8)~(1<<func_0210ce5c());return 1;}
if(func_0210cc54(data_0215583c)){if(func_0210ce5c()!=0)return 0;func_02057ae4();return 1;}
if(func_0210cc54(data_02155844)){if(func_0210cc54(data_02155848)){func_02055804((data_02160204->f72-1)/20+1);return 1;}if(func_0210cc54(data_02155850)){if(!data_021600c0)return 0;data_021600c0[0]=1;return 1;}return 0;}return 0;
}
if(func_0210cc54(data_02155854)){if(!data_021600bc)return 0;data_021600bc[0x29]=func_0210ce5c();return 1;}
if(func_0210cc54(data_0215585c)){
if(func_0210cc54(data_02155860)){int a=func_0210ce5c();int b=func_0210ce5c();func_020bd2fc((u8)a,1,(u8)b,0);return 1;}
if(func_0210cc54(data_02155868)){func_020bd35c((u8)func_0210ce5c(),1);return 1;}
if(func_0210cc54(data_02155874)){int a=func_0210ce5c();int b=func_0210ce5c();func_020bd2fc((u8)a,3,0,(u8)b);return 1;}
if(func_0210cc54(data_0215587c)){int a=func_0210ce5c();int b=func_0210ce5c();func_020bbe20((u8)(a+6),(u8)b);func_020bd2fc((u8)func_0210ce5c(),1,(u8)(a+6),0);return 1;}
if(func_0210cc54(data_02155884)){int id=func_0210ce5c();int empty=0,i;for(i=1;i<7;i++){u8 *p=func_020bd438((u8)i);if(p){if(!((*(u16 *)(p+0x0))&1)){if(!empty)empty=i;}else if(p[2]==id)return 1;}}if(empty){func_020bd2fc((u8)empty,1,(u8)id,0);func_020bd574();}return 1;}
if(func_0210cc54(data_0215588c)){int id=func_0210ce5c();int i;for(i=0;i<7;i++){u8 *p=func_020bd438((u8)i);if(p&&((*(u16 *)(p+0x0))&1)&&p[2]==id){int j;func_020bd35c((u8)i,1);func_020bd574();for(j=i;j<6;j++,i++){p=func_020bd438((u8)(j+1));if(p&&((*(u16 *)(p+0x0))&1)){func_020bd2fc((u8)i,1,data_02160078[j*4+0x14d6],data_02160078[j*4+0x14d7]);func_020bd35c((u8)(j+1),1);func_020bd574();}}return 1;}}return 1;}
if(func_0210cc54(data_02155894)){func_020bd574();return 1;}

if(func_0210cc54(data_02155898)){
if(func_0210cc54(data_021558a0)){
if(func_0210cc54(data_021558a8)){u8 i;for(i=0;i<8;i++){u8 *p=func_02021f10(i);if(p){(*(u16 *)(p+0x10))=(*(u16 *)(p+0x12))+(*(s16 *)(p+0x24));(*(u16 *)(p+0x14))=(*(u16 *)(p+0x16))+(*(s16 *)(p+0x26));}}return 1;}
if(func_0210cc54(data_021558ac)){u8 *p=func_02021f10(func_0210ce5c());if(p){(*(u16 *)(p+0x10))=(*(u16 *)(p+0x12))+(*(s16 *)(p+0x24));(*(u16 *)(p+0x14))=(*(u16 *)(p+0x16))+(*(s16 *)(p+0x26));return 1;}}
}
if(func_0210cc54(data_021558b0)){
if(func_0210cc54(data_021558b4)){u8 id=func_0210ce5c();u8 level=func_0210ce5c();u8 *p=func_02021f10(id);if(p){if(p[0x43]<level){
char name[32];u8 remaining=level-p[0x43];u8 *table;
func_02005e80(name,data_021558bc,id+1);
table=func_021092d8(name);if(table){
for(;;){if(func_020f685c(table,0)==p[0x43]+1)break;if(!func_02109444(table)){func_021093b0(table);return 0;}}
for(;;){
(*(u16 *)(p+0x12))+=(u16)func_020f685c(table,0);
(*(u16 *)(p+0x16))+=(u16)func_020f685c(table,0);
(*(u16 *)(p+0x18))+=(u16)func_020f685c(table,0);
(*(u16 *)(p+0x1a))+=(u16)func_020f685c(table,0);
(*(u16 *)(p+0x1c))+=(u16)func_020f685c(table,0);
(*(u16 *)(p+0x1e))+=(u16)func_020f685c(table,0);
(*(u16 *)(p+0x20))+=(u16)func_020f685c(table,0);
(*(u16 *)(p+0x22))+=(u16)func_020f685c(table,0);
{u16 skill=func_020f685c(table,0);if(skill)func_020bc2c4(p,skill);}
(*(u32 *)(p+0x4))+=func_020f685c(table,0);remaining--;
if(!remaining || !func_02109444(table))break;func_021093f0(table);
}
p[0x43]=level;func_021093b0(table);return 1;}return 0;
}return 1;}return 0;}
if(func_0210cc54(data_021558d4)){u8 remaining;u8 *table;u8 level;u8 count=0; s16 sum=0;int i;u8 id=func_0210ce5c();s16 add=func_0210ce5c();u8 *p;
for(i=0;i<7;i++){p=func_020bd438((u8)i);if(p&&((*(u16 *)(p+0x0))&1)&&id!=p[2]){p=func_02021f10(p[2]);{int lv=p[0x43];count++;sum+=lv;}}}
level=sum/count+add;if(level>99)level=99;p=func_02021f10(id);if(p){if(p[0x43]<level&&p[0x43]==1){
char name[32];remaining=level-p[0x43];
func_02005e80(name,data_021558dc,id+1);
table=func_021092d8(name);if(table){
for(;;){if(func_020f685c(table,0)==p[0x43]+1)break;if(!func_02109444(table)){func_021093b0(table);return 0;}}
for(;;){
(*(u16 *)(p+0x12))+=(u16)func_020f685c(table,0);(*(u16 *)(p+0x10))=(*(volatile u16 *)(p+0x12));
(*(u16 *)(p+0x16))+=(u16)func_020f685c(table,0);(*(u16 *)(p+0x14))=(*(volatile u16 *)(p+0x16));
(*(u16 *)(p+0x18))+=(u16)func_020f685c(table,0);
(*(u16 *)(p+0x1a))+=(u16)func_020f685c(table,0);
(*(u16 *)(p+0x1c))+=(u16)func_020f685c(table,0);
(*(u16 *)(p+0x1e))+=(u16)func_020f685c(table,0);
(*(u16 *)(p+0x20))+=(u16)func_020f685c(table,0);
(*(u16 *)(p+0x22))+=(u16)func_020f685c(table,0);
{u16 skill=func_020f685c(table,0);if(skill)func_020bc2c4(p,skill);}
(*(u32 *)(p+0x4))+=func_020f685c(table,0);remaining--;
if(!remaining || !func_02109444(table))break;func_021093f0(table);
}
p[0x43]=level;func_021093b0(table);return 1;}return 0;
}return 1;}return 1;
}
}
}return 0;
}
if(func_0210cc54(data_021558f4)){
if(func_0210cc54(data_021558f8)){func_02106928();return 1;}
if(func_0210cc54(data_02155900)){func_021069c4();return 1;}
if(func_0210cc54(data_02155908))return func_02106ce4((u16)func_0210ce5c());
if(func_0210cc54(data_02155910)){u16 v[12];v[0]=func_0210ce5c();v[1]=func_0210ce5c();v[2]=func_0210ce5c();v[3]=func_0210ce5c();v[4]=func_0210ce5c();v[5]=func_0210ce5c();v[6]=func_0210ce5c();v[7]=func_0210ce5c();v[8]=func_0210ce5c();v[9]=func_0210ce5c();v[10]=func_0210ce5c();v[11]=func_0210ce5c();func_02106bec(v);return 1;}
if(func_0210cc54(data_02155918)){u8 *p=func_02106c9c((u16)func_0210ce5c());if(p){switch(func_0210ce5c()){case 1:(*(u32 *)(p+0x14))=func_0210ce5c();(*(u32 *)(p+0x18))=func_0210ce5c();return 1;case 2:(*(u32 *)(p+0x1c))=func_0210ce5c();(*(u32 *)(p+0x20))=func_0210ce5c();return 1;case 3:(*(u16 *)(p+0xc))=func_0210ce5c();(*(u16 *)(p+0xe))=func_0210ce5c();return 1;case 4:(*(u16 *)(p+0x10))=func_0210ce5c();(*(u16 *)(p+0x12))=func_0210ce5c();return 1;}return 0;}return 0;}
}
if(func_0210cc54(data_0215591c)){switch(data_02160204->fd7){case 2:(*(u32 *)(data_021600ac+0xc))=1;break;case 1:(*(u32 *)(data_02160260+0x60))|=64;break;case 7:(*(u32 *)(data_021600ac+0xc))=1;if(!data_02160204->f125){data_02160204->fd8=5;return 1;}break;default:return 0;}data_02160204->f7a=0;data_02146330=31;return 1;}
if(func_0210cc54(data_02155924)){if(func_0210cc54(data_02155928)){ctx[0x1c1]=11;return 1;}if(!func_0210cc54(data_02155934))return 0;(*(u32 *)(data_021600ac+0x10))=3;data_02160204->f7e=1;return 1;}
if(func_0210cc54(data_02155940))return 1;
if(func_0210cc54(data_02155948)){u8 r=func_0210ce5c();u8 g=func_0210ce5c();u8 b=func_0210ce5c();func_02002fb0((u16)(r|(g<<5)|(b<<10)),31,0x7fff,0,0);return 1;}
if(func_0210cc54(data_0215594c)){(*(s16 *)&data_02160204->ff6)=-1;return 1;}return 0;
}
