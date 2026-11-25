/* 7 functions from 0x020617C8 to 0x02062578 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160080;
void func_020612d0(void *);
void func_02060f0c(void *);
void func_02060ec8(void *);
void func_0205d204(void *);
void func_02060b4c(void *);
void func_02060ff8(void *);
void func_02061214(void *);
void func_02060cc4(void *);
void func_02060db4(void *);
void func_020606bc(void *);
void func_020607f4(void *);
void func_0206158c(void *);
void func_02061628(void *);
void func_020614e0(void *);
void func_020da2c8(void *);
void func_020da3e4(void *);
void func_020d626c(void *);
void func_020d64c8(void *);
s32 func_020624c8(void);
void func_020d0a40(s32);
s32 func_020ddb00(s32);
void func_0205b710(void *,s32);
u8 *func_02064cb8(void *,s32);
u8 *func_02022494(void *,s32);
u8 *func_0202b4d8(s32,void *);
s32 func_02065840(s32,s32);
void func_020263b4(void *,s32);
void func_020d60b8(u16);
void func_020d622c(void);
void func_0205ee3c(void *,s32);
u8 *func_020dde4c(u16);
u8 *func_0202f484(s32,void *);


extern u8 *data_02160a6c;
extern u8 *data_02160244;
extern void func_02030b7c(void *, s32, s32);

extern s32 func_0205bcb0(void *, u16);
extern u8 *func_0205bad4(void *);
extern u8 *func_020d56d8(void *, void *, void *, s32);
extern void func_0210d27c(s32);
extern void func_0202f41c(void *,void *,void *,s32,void *,s32,s32);
extern void func_0205baf8(void *);
extern s32 func_020d9df4(void);
extern void func_020d9e48(void *,void *);
extern void func_020d9dc8(void *,u16,s32,s32);
extern void func_020d9da8(s32);
extern void func_020d9ea8(s32,s32);
extern void func_020d5fd0(void *);
extern void func_020d4eb8(void *);
#pragma scheduling off

#pragma scheduling on

void func_020619c8(s32 arg0) {
    u8 *node = *(u8 **)(data_02160a6c + 0xb8);
    while (node != NULL) {
        s32 val = *(s32 *)(node + 4);
        u8 *sub = *(u8 **)(node + 0x128);
        if (val == 0x20000) {
            func_02030b7c(node, 1, arg0);
            sub[0x7c] = 1;
        }
        node = *(u8 **)(node + 0x174);
    }
}

void func_02061540(void *);
#pragma push
#pragma scheduling off
void func_02061a20(void) {
 u8 *p=(*(u8 * *)(data_02160a6c + 0xb8)), *next, *s, *q, *v, *n;
 s32 active;
 register s32 state;
 while(p) {
 next=(*(u8 * *)(p + 0x174)); s=(*(u8 * *)(p + 0x128));
 active=1;
 if(!(*(s32 *)((*(u8 * *)(p + 0x118)) + 0x70))) active=0;
 if(active && !(*(s32 *)(s + 0x24))) {func_02061540(p);active=0;}
 if(active) switch((*(u32 *)(s + 0x24))) {
 case 9998:
 if(!func_020624c8() && !data_02160244[0x145]) {
 (*(u16 *)((*(u8 * *)(data_02160244 + 0)) + 2))=9;func_020d0a40(13);data_02160244[0x145]=1;
 }break;
 case 1000:
 if(!func_020ddb00(0)) {(*(s32 *)(s + 0x24))=9998;break;}
 func_020d64c8(s);
 if((*(u16 *)((*(u8 * *)(data_02160244 + 0)) + 0x3e))!=(*(s16 *)(s + 0x52))-1 || (*(s16 *)((*(u8 * *)(data_02160244 + 0)) + 0x40))!=0) break;
 (*(s32 *)(s + 0x98))=0;(*(s32 *)(s + 0x9c))=0;(*(s32 *)(s + 0xa0))=0;
 q=(*(u8 * *)(p + 0x12c));
 if(q) {(*(volatile u16 *)(q + 0x20))++;(*(volatile u16 *)(q + 0x20))=(s32)(*(volatile u16 *)(q + 0x20))%10;(*(volatile u16 *)(q + 0x24))++;if((*(volatile u16 *)(q + 0x24))>30) (*(volatile u16 *)(q + 0x24))=30;}
 func_0205b710(p,0x98);func_0205b710(p,0x99);
 if((u16)((*(u16 *)(p + 0x8e))+0xfd93)<=1 && ((*(s32 *)((*(u8 * *)(p + 0x118)) + 0x78))&4)) {
 s=(*(u8 * *)(p + 0x128));
 v=func_02064cb8((*(u8 * *)(p + 0x11c)),11);
 n=(*(u8 * *)(func_02022494(s,0) + 4));
 (*(u8 * *)(n + 8))=v;(*(u8 * *)(n + 4))=func_0202b4d8(2,p);(*(u8 * *)(s + 8))=v;
 (*(u8 * *)(data_02160244 + 0))[0x6c]=2;
 func_020d626c(p);
 }
 q=(*(u8 * *)(s + 0xc));
 if(((*(s32 *)((*(u8 * *)(p + 0x118)) + 0x78))&0x30) || ((*(u16 *)(q + 0xe))&0x200)) (*(s32 *)(s + 0x18))|=8;
 if(!((*(s32 *)(s + 0x18))&8)) {
 v=(*(u8 * *)(s + 8));q=(*(u8 * *)(s + 0xc));
 if(func_02065840(0,v[0]) && ((*(u8 * *)(s + 0))=(*(u8 * *)(q + 4))) && func_02065840(0,v[0]) && v[7]!=8 && v[7]!=10) func_020d9e48(p,(*(u8 * *)(s + 0)));
 (*(s32 *)(s + 0x14))=0;(*(u16 *)(s + 0x10))=0;(*(u16 *)(s + 0x1c))=0;
 if(v[0]==7) {(*(s32 *)(s + 0x24))=6000;q=(*(u8 * *)(s + 8));if(q)(*(u16 *)(data_02160080 + 0x42))=(*(volatile u16 *)(q + 0x20));}
 else if(v[0]==8) (*(s32 *)(s + 0x24))=6002;
 else {(*(s32 *)(s + 0x24))=1010;(*(u16 *)((*(u8 * *)(data_02160244 + 0)) + 0x3e))++;(*(u16 *)((*(u8 * *)(data_02160244 + 0)) + 0x40))=10;}
 if((*(s32 *)((*(u8 * *)(p + 0x118)) + 0x8c))&0x20)func_020263b4(p,0xa6);
 if((*(s32 *)((*(u8 * *)(p + 0x118)) + 0x8c))&0x200)func_020263b4(p,0xaa);
 } else {
 if(!((*(s32 *)((*(u8 * *)(p + 0x118)) + 0x78))&0x20))func_02030b7c(p,3,511);
 (*(s32 *)(s + 0x24))=1609;(*(u16 *)((*(u8 * *)(data_02160244 + 0)) + 0x3e))++;(*(u16 *)((*(u8 * *)(data_02160244 + 0)) + 0x40))=10;
 }break;
 case 6000:func_020da2c8(p);break;
 case 6001:(*(u16 *)(data_02160080 + 0x14))=2;break;
 case 6004:
 (*(u8 * *)(s + 8))=func_02064cb8((*(u8 * *)(p + 0x11c)),11);(*(u8 * *)(s + 0))=func_0202b4d8(2,p);
 (*(s32 *)(s + 0x24))=1010;(*(u16 *)((*(u8 * *)(data_02160244 + 0)) + 0x3e))++;(*(u16 *)((*(u8 * *)(data_02160244 + 0)) + 0x40))=10;break;
 case 6002:func_020da3e4(p);break;
 case 6003: (*(u16 *)(data_02160080 + 0x14))=2;break;
 case 1603:if(++(*(s32 *)(s + 0x14))>(*(s32 *)(s + 0x30)))(*(s32 *)(s + 0x24))=1609;break;
 case 1602:if(++(*(s32 *)(s + 0x14))>(*(s32 *)(s + 0x30)))func_020d4eb8(p);break;
 case 7001:
 if((*(s32 *)(s + 0x30))==0) {func_020d60b8((u16)(*(s32 *)(s + 0x34)));(*(s32 *)(s + 0x30))=1;(*(s32 *)(s + 0x14))=0;}
 else if((*(s32 *)(s + 0x30))==1 && ++(*(s32 *)(s + 0x14))>(*(s32 *)(s + 0x38))) {func_020d622c();{state=9999;
store_state: (*(s32 *)(s + 0x24))=state;}}break;
case 1010:func_020612d0(p);break;
case 1060:func_02060f0c(p);break;
case 1070:func_02060ec8(p);break;
case 1020:func_0205d204(p);break;
case 1030:func_02060b4c(p);break;
case 1031:func_02060ff8(p);break;
case 1032:func_02061214(p);break;
case 1040:func_02060cc4(p);break;
case 1050:func_02060db4(p);break;
case 5100:case 5102:func_020606bc(p);break;
case 5101:func_020607f4(p);break;
case 1033:func_020617c8(p);break;
case 1080:func_0205ee3c(p,0);break;
 case 1081:func_0205ee3c(p,1);break;
 case 1608:(*(u16 *)(s + 0x1e))&=0xfff7;state=1300;goto store_state;
 case 1609:(*(s32 *)(s + 0x24))=9999;break;
case 1607:break;
case 1400:func_0206158c(p);break;
case 1401:func_02061628(p);break;
case 9999:func_020614e0(p);break;
 case 1604:
 if(func_020d9df4()==-1) {
 v=func_020dde4c((u16)(((*(u16 *)(p + 0x90))-101)*10+630));
 q=(*(u8 * *)(func_0202f484(0,v) + 8));
 if(v&&q) {func_020d9e48(v,q);func_020d9dc8(v,(*(u16 *)(v + 0x90)),10,1);func_020d9da8(32);func_020d9ea8(8,0);}
 }break;
 }
 if(!data_02160244[0x10c]) {
 q=(*(u8 * *)(p + 0x1a4));
 if(q) {(*(s32 *)(p + 0x1a8))=(*(s32 *)(p + 0))+(*(s32 *)(q + 0x18));(*(s32 *)(p + 0x1ac))=(*(s32 *)(p + 4))+(*(s32 *)(q + 0x1c));(*(s32 *)(p + 0x1b0))=(*(s32 *)(p + 8))+(*(s32 *)(q + 0x20));}
 else {(*(s32 *)(p + 0x1a8))=(*(s32 *)(p + 0));(*(s32 *)(p + 0x1ac))=(*(s32 *)(p + 4));(*(s32 *)(p + 0x1b0))=(*(s32 *)(p + 8));}
 }
 p=next;
 }
}
#pragma pop
s32 func_020624c8(void) {
    u8 *node = *(u8 **)(data_02160a6c + 0xb8);
    while (node != NULL) {
        u8 *sub = *(u8 **)(node + 0x128);
        if (node != NULL && *(u8 **)(node + 0x118) != NULL && *(s32 *)(*(u8 **)(node + 0x118) + 4) >= 1) {
            s32 val = *(s32 *)(sub + 0x24);
            if (val != 0 && val != 0x270e) {
                return 1;
            }
        }
        node = *(u8 **)(node + 0x174);
    }
    return 0;
}

void func_02062530(void) {
    u8 *ptr = *(u8 **)data_02160244;
    s32 i;
    for (i = 0; i < 10; i++) {
        *(s32 *)(ptr + 0x10 + i * 4) = 0;
    }
    *(s32 *)(ptr + 4) = 0;
    *(u16 *)(ptr + 0x3e) = 0;
}

void *func_02062568(void **arg0) {
    return *arg0;
}

s32 func_02062570(s32 *arg0) {
    return arg0[1];
}
