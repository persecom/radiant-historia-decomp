/* 13 functions from 0x02065E78 to 0x02066D84 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160204;

typedef struct {s32 x,y,z;} Vec_6662c;
extern const s16 data_0213a394[];
extern void func_020c55bc(void),func_02066d84(void),func_020c627c(void);
extern s32 func_0210c2f4(void *,void *);
extern s32 func_02002404(s32,s32);
extern void func_020a6ed0(s32),func_020669e0(s32);
extern void func_020a779c(void),func_020a7834(void),func_02066ce8(void),func_020aa8e8(void);

typedef struct { s16 v[10]; } Params_02066868;
extern const Params_02066868 data_0213fc60;

extern u32 data_02155c3c;
extern u8 *data_02160204;
extern u32 data_02162834[],data_0216bf84,data_02162830,data_0216281c,data_02162820[];
extern u8 *data_021600e0[];
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void func_020a3b84(void);
extern void func_020e9f44(void);
extern void func_020a7494(void *);
extern void func_020a62d8(void *);
extern void func_020a5ed4(void *);
extern void func_020665e0(void);
extern void func_020a5858(void *);
extern void func_020aa464(void);
extern void func_020aa0f0(void);
extern void func_020aa76c(void *);
extern void func_02066c8c(void);
extern void func_020a78f0(void);
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_02066594(void);
extern void func_020a6e90(void *);
extern void func_020f4a24(void);
extern void func_0210f138(void);
extern void *func_02003454(void);
extern void func_02008e68(s32, void *, s32);
extern void *func_020031bc(void);
void *func_0210c594(u32,u32);
void func_0206662c(void);
void func_02066868(void);
void func_02066c28(void);
u8 *func_020a5f14(void *,u16);
void *func_020a583c(void);
void func_02065e78(void){
u32 zero=0,one=1;
u8 *v,*node,*new_var;
func_020a2c20();
{u32 bits=*(volatile u16 *)0x04000304;bits &= ~0x8000U;*(volatile u16 *)0x04000304=bits;}
func_0210fb24();func_020a31c8(2);func_020e9eb0();func_020f4928();func_02120524(one);
v=func_0210c594(0x13f8,data_02155c3c);
data_021600e0[1]=v;
*(s32 *)(v+0x3c)=zero;
*(void **)(*(u8 *volatile *)&data_021600e0[1])=func_0210c594(8,data_02155c3c);
**(s32 **)(*(u8 *volatile *)&data_021600e0[1])=zero;
(*(s32 **)(*(u8 *volatile *)&data_021600e0[1]))[1]=zero;
*(void (**)(void))((*(u8 *volatile *)&data_021600e0[1])+8)=func_0206662c;
*(s32 *)((*(u8 *volatile *)&data_021600e0[1])+12)=1011;
func_0210d9e4(data_021600e0[1]+8);
*(void (**)(void))((*(u8 *volatile *)&data_021600e0[1])+0x1c)=func_02066868;
*(s32 *)((*(u8 *volatile *)&data_021600e0[1])+0x20)=1001;
func_0210db70(data_021600e0[1]+0x1c);
func_021167ac(data_021600e0[1]+268,108);
func_021167ac(data_021600e0[1]+280,16);
func_021167ac(data_021600e0[1]+292,160);
func_021167ac(data_021600e0[1]+416,8);
func_021167ac(data_021600e0[1]+328,4);
func_021167ac(data_021600e0[1]+5064,4);
func_021167ac(data_021600e0[1]+5076,52);
func_021167ac(data_021600e0[1]+5088,52);
*(s32 *)((*(u8 *volatile *)&data_021600e0[1])+48)=zero;
*(s32 *)((*(u8 *volatile *)&data_021600e0[1])+52)=zero;
*(s32 *)((*(u8 *volatile *)&data_021600e0[1])+56)=one;
*(s32 *)((*(u8 *volatile *)&data_021600e0[1])+384)=128;
*(s32 *)((*(u8 *volatile *)&data_021600e0[1])+388)=1185;
*(u8 *)((*(u8 *volatile *)&data_021600e0[1])+104)=one;
*(s32 *)((*(u8 *volatile *)&data_021600e0[1])+108)=4096;
*(s32 *)((*(u8 *volatile *)&data_021600e0[1])+116)=256;
*(s32 *)((*(u8 *volatile *)&data_021600e0[1])+64)=one;
*(s32 *)((*(u8 *volatile *)&data_021600e0[1])+148)=101;
if(*(s16 *)(data_02160204+0xf6)!=-1){
*(s16 *)(data_02160204+0x72)=*(s16 *)(data_02160204+0xf6);
*(s16 *)(data_02160204+0xf6)=-1;
}
*(s32 *)((*(u8 *volatile *)&data_021600e0[1])+0x98)=(*(u16 *)(data_02160204+0x72)-1)/20+101;
*(s16 *)((*(u8 *volatile *)&data_021600e0[1])+0x198)=100;*(s16 *)((*(u8 *volatile *)&data_021600e0[1])+0x19a)=zero;
{Vec_6662c *v=(Vec_6662c *)((*(u8 *volatile *)&data_021600e0[1])+68);v->x=zero;v->y=zero;v->z=zero;}
{Vec_6662c *v=(Vec_6662c *)((*(u8 *volatile *)&data_021600e0[1])+80);v->x=-228;v->y=-52;v->z=zero;}
{Vec_6662c *v=(Vec_6662c *)((*(u8 *volatile *)&data_021600e0[1])+92);v->x=-256;v->y=-240;v->z=zero;}
{Vec_6662c *v=(Vec_6662c *)((*(u8 *volatile *)&data_021600e0[1])+156);v->x=zero;v->y=zero;v->z=zero;}
{Vec_6662c *v=(Vec_6662c *)((*(u8 *volatile *)&data_021600e0[1])+168);v->x=zero;v->y=zero;v->z=zero;}
{Vec_6662c *v=(Vec_6662c *)((*(u8 *volatile *)&data_021600e0[1])+180);v->x=zero;v->y=zero;v->z=zero;}
*(s32 *)((*(u8 *volatile *)&data_021600e0[1])+0xc0)=zero;*(s32 *)((*(u8 *volatile *)&data_021600e0[1])+0xc4)=zero;
func_020a6ed0(zero);func_020a6ed0(2);func_020669e0(zero);
new_var=data_02160204;
func_020a6184(data_021600e0[1]+0x118,zero);
func_020a5d68(data_021600e0[1]+0x124,zero);
if(*(u16 *)(new_var+0x72)==0)*(u16 *)(new_var+0x72)=one;
func_020c6208();
v=func_020a5f14((*(u8 *volatile *)&data_021600e0[1])+0x124,*(u16 *)(new_var+0x72));
if(v){
*(s32 *)((*(u8 *volatile *)&data_021600e0[1])+0xc8)=*(s16 *)(v+6)<<12;
*(s32 *)((*(u8 *volatile *)&data_021600e0[1])+0xd0)=*(s16 *)(v+8)<<12;
}
*(u16 *)((*(u8 *volatile *)&data_021600e0[1])+0xd4)=*(u16 *)(data_02160204+0x72);
func_020a73e8(50);
*(void **)((*(u8 *volatile *)&data_021600e0[1])+0x190)=func_020a583c();
*(void **)((*(u8 *volatile *)&data_021600e0[1])+0x194)=func_020a583c();
func_020a58d8(*(void **)(data_021600e0[1]+0x190),zero,zero);
func_020a58d8(*(void **)(data_021600e0[1]+0x194),1,zero);
func_021167ac(data_021600e0[1]+0x130,16);
{u8 *p=(*(u8 *volatile *)&data_021600e0[1]);func_020a74d4(func_020a5f14(p+0x124,*(u16 *)(p+0xd4)));}
func_020a7598(data_021600e0[1]+0x130);func_020a76cc();
*(s32 *)((*(u8 *volatile *)&data_021600e0[1])+0x7c)=1534;*(s32 *)((*(u8 *volatile *)&data_021600e0[1])+0x80)=1534;
{u8 *p=(*(u8 *volatile *)&data_021600e0[1]);*(s32 *)(p+0x50)=-*(s32 *)(p+0xc8)>>12;}
{u8 *p=(*(u8 *volatile *)&data_021600e0[1]);*(s32 *)(p+0x54)=-*(s32 *)(p+0xd0)>>12;}
{u8 *p=(*(u8 *volatile *)&data_021600e0[1]);*(s32 *)(p+0xf0)=*(s32 *)(p+0x50)<<12;}
{u8 *p=(*(u8 *volatile *)&data_021600e0[1]);*(s32 *)(p+0xf8)=*(s32 *)(p+0x54)<<12;}
{u8 *p=(*(u8 *volatile *)&data_021600e0[1]);*(Vec_6662c *)(p+0xe4)=*(Vec_6662c *)(p+0xc8);}
*(void **)((*(u8 *volatile *)&data_021600e0[1])+0x18c)=func_020a583c();
func_020a58d8(*(void **)(data_021600e0[1]+0x18c),6,zero);
v=(*(u8 *volatile *)&data_021600e0[1]);
node=*(u8 **)(v+0x10c);
if(node){s32 id=*(s32 *)(v+0x98);do {if(*(s32 *)(node+0x18)==id)break;node=*(u8 **)(node+0x70);}while(node);}
if(node){s32 x=*(s32 *)(node+8),y=*(s32 *)(node+12);*(s32 *)(v+0x50)=-x>>12;*(s32 *)(v+0x54)=-y>>12;*(s32 *)(v+0x58)=zero;}
if(data_02160204[0x136]==1){
*(u16 *)(data_02160204+0xf8)=0;
func_020a6888(0,0,data_021600e0[1]+0x118);
node=*(u8 **)((*(u8 *volatile *)&data_021600e0[1])+0x124);
while(node){*(s32 *)(node+0xa8)=one;*(s32 *)(node+0xac)=one;node=*(u8 **)(node+0xa4);}
}else func_020a6a20((*(u8 *volatile *)&data_021600e0[1])+0x118);
*(u16 *)((*(u8 *volatile *)&data_021600e0[1])+0x19c)=zero;
{u8 *p=(*(u8 *volatile *)&data_021600e0[1]);func_020a6b88(p+0x118,p+0x124);}
func_02066d84();func_020aa430();func_020aa50c();func_02066c28();func_020a9f08();func_020aa144();func_020aa850();func_020a773c();func_020c6124();func_020bd574();
data_02162830=30;data_02162834[0]=one;data_0216281c=2;data_02162820[0]=2;data_0216bf84=one;
}
