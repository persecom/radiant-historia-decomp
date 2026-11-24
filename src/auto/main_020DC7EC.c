/* 9 functions from 0x020DC7EC to 0x020DD770 (main), found by ds-decomp. */
#include "common.h"
extern s32 data_02155c3c;
void func_020dd804(void),func_020dd808(void),func_020dd80c(void),func_020eb0f8(void);
u8 *func_0210c594(s32,s32);
void func_021167ac(void *,s32);
void func_0210d9e4(void *),func_0210dae0(void *),func_0210db70(void *),func_0210dc58(void *);
u8 *func_02001fb0(s32,s32);
extern u8 *data_0216025c[2];
extern u8 *data_02160204;
void func_020dcca4(void);
extern u8 *data_02160a68[];
extern void func_020d30a0(void);
extern void func_020dd770(void *);
extern void func_0210da14(void *), func_0210db10(void *), func_0210dba0(void *), func_0210dc70(void *);
extern void func_0210a76c(void *), func_0210c5dc(void *);
extern void func_021168f8(void *, void *);

void func_020dc7ec(void){
s32 zero;
func_02063f20();func_0202f3c4();func_020bc844();func_020b48bc();func_02092bac();func_020f4a24();func_020c0d68();func_020a3b84();func_020df824();func_020bf700();
func_020d8e5c(1);func_020eaacc();func_020f25dc();func_020d8f50();func_020dcca4();func_020ec218();
zero=0;
func_020f0090(zero);func_02065b80();func_02065c08();func_020d3dd8();func_020d069c();func_020eb344(zero,zero);func_02107104();func_02026d20();func_020de488();func_020a2e24();func_020e9d44();func_020972cc();func_020d8558();func_0203160c();func_0202f594();
func_020bb234(*(void**)(data_0216025c[1]+0x4c));
data_02160204[0x89]=zero;
if(data_0216025c[1]){
func_0210da14(data_0216025c[1]);func_0210dba0(data_0216025c[1]+0x14);func_0210db10(data_0216025c[1]+0x28);
if(data_0216025c[1]){func_0210c5dc(data_0216025c[1]);data_0216025c[1]=NULL;}
}
func_0210f138();
func_02008e68(0,func_02003454(),0xc000);
func_02008e68(0,func_020034a8(),0xc000);
func_02008e68(0,func_02003518(),0xc000);
func_02008e68(0,func_020035b0(),0xc000);
func_02008e68(0,func_020031bc(),0x4000);
func_02008e68(0,func_02003210(),0x4000);
func_02008e68(0,func_020032b4(),0x4000);
func_02008e68(0,func_020033ac(),0x4000);
}

void func_020dc994(void) {
}

void func_020dc998(void) {
}

void func_020dc99c(void) {
}

extern u8 *data_02160204;
extern u8 *data_0216025c[2];
extern u8 *data_02160a74;
extern void func_020f0154(s32);
extern void func_020dc4b8(void);
extern void func_020d914c(s32);
extern void func_020d0a40(s32);
extern void func_020d0cd4(s32, u32);
extern void func_020e26f0(s32, s32, s32);
void func_020dc9a0(s32 arg0, s32 arg1) {
    switch (arg0) {
    case 0:
        *(u16 *)(data_02160204 + 0x7c) = (u16)arg1;
        func_020f0154((u16)arg1);
        if (*(u16 *)(data_02160204 + 0x7c) == 0x18) {
            *(u16 *)(data_0216025c[1] + 0x8e) = 1;
        }
        return;
    case 1:
        *(u16 *)(data_0216025c[1] + 0x48) = arg1;
        return;
    case 2:
        func_020dc4b8();
        return;
    case 3:
        if (arg1 == 1) {
            func_020d914c(1);
            func_020d0a40(3);
            func_020e26f0(7, 0, 999);
        } else if (arg1 == 99) {
            func_020d0a40(1);
        }
        return;
    case 4:
        func_020d0cd4((u16)arg1, 1);
        return;
    case 5:
        func_020d0cd4((u16)arg1, 2);
        return;
    case 6:
        func_020d0cd4((u16)arg1, 8);
        func_020d0cd4(0, 4);
        data_02160a74[0x1c0] &= 0xfb;
        return;
    case 7:
        func_020d0a40((u16)arg1);
        return;
    }
}

void func_020dcad8(void) {
 u8 **g=data_02160a68;
 if(g[1]) return;
 g[1]=func_0210c594(0x12c,data_02155c3c);
func_021167ac(g[1]+100,304);
func_021167ac(g[1]+124,344);
func_021167ac(g[1]+136,352);
func_021167ac(g[1]+148,404);
func_021167ac(g[1]+112,312);
func_021167ac(g[1]+160,336);
func_021167ac(g[1]+172,360);
func_021167ac(g[1]+184,368);
func_021167ac(g[1]+196,320);
func_021167ac(g[1]+208,276);
func_021167ac(g[1]+220,276);
func_021167ac(g[1]+232,276);
func_021167ac(g[1]+244,24);
*(void (**)(void))(g[1]+0)=func_020dd804;
*(s32 *)(g[1]+4)=1005;
func_0210d9e4(g[1]+0);
*(void (**)(void))(g[1]+40)=func_020dd808;
*(s32 *)(g[1]+44)=1003;
func_0210dae0(g[1]+40);
*(void (**)(void))(g[1]+60)=func_020dd80c;
*(s32 *)(g[1]+64)=1002;
func_0210db70(g[1]+60);
*(void (**)(void))(g[1]+80)=func_020eb0f8;
*(s32 *)(g[1]+84)=1000;
func_0210dc58(g[1]+80);
*(s32 *)(g[1]+0x100)=1;
*(s32 *)(g[1]+0x10c)=4096;
g[0]=func_02001fb0(0x800,0x64000);
}

void func_020dcca4(void) {
u8 **g=data_02160a68;
u8 *list; void *node;
if(!g[1])return;
func_020d30a0();
while(*(void **)(g[1]+0xf4))func_020dd770(*(void **)(g[1]+0xf4));
func_0210da14(g[1]);
func_0210db10(g[1]+0x28);
func_0210dba0(g[1]+0x3c);
func_0210dc70(g[1]+0x50);
if(*(void **)(g[1]+0x110))func_0210a76c(*(void **)(g[1]+0x110));
if(*(void **)(g[1]+0x114))func_0210a76c(*(void **)(g[1]+0x114));
if(*(void **)(g[1]+0x118))func_0210a76c(*(void **)(g[1]+0x118));
list=g[1]+0xd0;
if(list) {while((node=*(void **)list)!=NULL){func_021168f8(list,node);if(node)func_0210c5dc(node);}}
list=g[1]+0xdc;
if(list) {while((node=*(void **)list)!=NULL){func_021168f8(list,node);if(node)func_0210c5dc(node);}}
list=g[1]+0xe8;
if(list) {while((node=*(void **)list)!=NULL){func_021168f8(list,node);if(node)func_0210c5dc(node);}}
if(g[1]){func_0210c5dc(g[1]);g[1]=NULL;}
}

