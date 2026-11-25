/* 4 functions from 0x02026F38 to 0x020279B8 (main), found by ds-decomp. */
#include "common.h"
extern u8 data_0216007c[];
extern char data_021460f4[],data_02146110[],data_02146114[],data_02146118[],data_0214611c[],data_02146120[];
extern char data_02146124[],data_02146128[],data_02146130[],data_02146138[],data_0214613c[];
extern char data_02146140[],data_02146144[],data_02146148[],data_0214614c[],data_02146150[];
extern char data_02146154[],data_02146158[];
extern u32 data_0216263c[3];
extern s32 _s32_div_f(s32, s32);
extern s32 func_02026e9c(s32, char *, char *);
extern s32 func_02092994(u8 *, s32);
extern s32 func_0202af90(u16, s16, s16, u8 *);
extern s32 func_02029790(u16, s16, s16, u8 *);
extern s32 func_0202a5a4(u16, s16, s16, u8 *);
extern s32 func_0202aa68(u16, s16, s16, u8 *);
extern s32 func_0202aec4(u16, s16, s16, u8 *);
void *func_021092d8(void *);
char *func_020929f4(void *,int);
int func_02092a28(void *,void *);
void func_021093f0(void *);
int func_020274c0(void *,void *);
int func_020279b8(void *,void *,void *);
int func_02029704(void *,void *);
int func_02028420(void *,void *);
int func_020295f0(void *,void *);
int func_02029130(void *,void *);
int func_02109444(void *);
void func_021093b0(void *);
u8 *func_02064cb8(void *,int);
void func_02065298(void *,u16,int,int,int);

extern u8 *data_02160a6c;
extern char data_021460f0[];
extern void func_02005e80(char *, const char *, ...);

extern u8 *data_02160a6c;
extern char data_021460f0[];
extern void func_02005e80(char *, const char *, ...);
s16 func_02026f38(char *arg) {
    u8 i;
    s16 result;
    u8 buf[32];
    for (i = 0; i < 32; i++) buf[i] = 0;
    result = 0;
    func_02005e80((char *)buf, data_021460f0, arg);
    for (i = result; i < 32; i++) {
        s8 c = buf[i];
        if (c >= '0' && c <= '9') {
            result = (s16)(result * 10 + (c - '0'));
        }
    }
    return result;
}

void func_02026fbc(void) {
    void *p = *(void **)(data_02160a6c + 0xb8);
    if (p == NULL) return;
    do {
        void *q = *(void **)((u8 *)p + 0x12c);
        u16 *c = (u16 *)((u8 *)q + 0xe);
        *c = *c + 1;
        if (*c > 30) *c = 0;
        p = *(void **)((u8 *)p + 0x174);
    } while (p != NULL);
}

void func_02027004(u8 *p,u8 *a){
void *value=0;char *word;int result;u8 *ctx=*(u8 **)(p+0x12c);int id;int update,create;int zero;u8 *global;char buf[32];
if(a)*(u8 **)(ctx+0x1c)=a;
global=data_0216007c;update=0;ctx[0x22]=0;*(s16 *)global=1;
create=0;
if(*(u16 *)ctx){
func_02005e80(buf,data_021460f4,*(u16 *)ctx);
*(void **)(ctx+4)=func_021092d8(buf);
do{
word=func_020929f4(*(void **)(ctx+4),0);if(!word)break;
if(func_02092a28(word,data_02146110)&&(**(u16 **)(data_0216007c+4)&2)){
func_021093f0(*(void **)(ctx+4));func_020274c0(p,*(void **)(ctx+4));break;
}else if(func_02092a28(word,data_02146114)&&!(*(u32 *)(ctx+0x10)&1)&&(**(u16 **)(data_0216007c+4)&1)){
func_021093f0(*(void **)(ctx+4));
if(!func_020274c0(p,*(void **)(ctx+4)))goto next;
if(!func_020274c0(p,*(void **)(ctx+4)))goto next;
if(!func_020274c0(p,*(void **)(ctx+4)))goto next;
if(!func_020279b8(p,*(void **)(ctx+4),a))goto next;
create=1;break;
}else if(func_02092a28(word,data_02146118)&&(**(u16 **)(data_0216007c+4)&1)){
func_021093f0(*(void **)(ctx+4));
if(!func_020274c0(p,*(void **)(ctx+4)))goto next;
if(!func_020274c0(p,*(void **)(ctx+4)))goto next;
if(!func_020274c0(p,*(void **)(ctx+4)))goto next;
if(!func_02029704(p,*(void **)(ctx+4)))goto next;
value=(void *)func_02028420(p,*(void **)(ctx+4));
if(value){
id=func_020295f0(p,*(void **)(ctx+4));
if(id>=0){if(id==14)(*(u8 **)(data_0216007c+4))[0x40]=1;}
set_update:update=1;break;
}else{
result=func_02029130(p,*(void **)(ctx+4));if(result==-1)goto next;
a[0x43]=result;id=func_020295f0(p,*(void **)(ctx+4));
goto set_update;
}
}else if(func_02092a28(word,data_0214611c)&&(**(u16 **)(data_0216007c+4)&4)){
*(void **)(ctx+0x18)=*(void **)(a+8);
func_021093f0(*(void **)(ctx+4));
if(!func_020274c0(p,*(void **)(ctx+4)))goto next;
if(!func_020274c0(p,*(void **)(ctx+4)))goto next;
if(!func_020274c0(p,*(void **)(ctx+4)))goto next;
if(!func_02029704(p,*(void **)(ctx+4)))goto next;
if(**(u8 **)(ctx+0x18)!=1){
if((*(u8 **)(ctx+0x18))[7]!=8){
value=func_02028420(p,*(void **)(ctx+4));id=func_020295f0(p,*(void **)(ctx+4));
if((*(u8 **)(ctx+0x18))[1]==id)break;
if(!value)goto next;
}else{
result=func_02029130(p,*(void **)(ctx+4));id=func_020295f0(p,*(void **)(ctx+4));
if((*(u8 **)(ctx+0x18))[1]==id)break;
if(result==-1)goto next;
}
goto set_update;
}else{if(func_020279b8(p,*(void **)(ctx+4),a))break;}
}else func_02092a28(word,data_02146120);
next:
++*(s16 *)data_0216007c;
}while(func_02109444(*(void **)(ctx+4)));
}
zero=0;if(*(void **)(ctx+4)){func_021093b0(*(void **)(ctx+4));*(void **)(ctx+4)=(void *)zero;}
if(create){
*(void **)(a+4)=value;
if(!func_02064cb8(*(void **)(p+0x11c),1))func_02065298(*(void **)(p+0x11c),*(u16 *)(*(u8 **)(p+0x118)+0x4c),1,1,zero);
*(u8 **)(a+8)=func_02064cb8(*(void **)(p+0x11c),1);
*(u32 *)(ctx+0x10)|=1;
if((*(u8 **)(a+8))[0x14]==1)*(u16 *)(a+0xe)|=2;else *(u16 *)(a+0xe)&=0xfffd;
}
if(update){
*(void **)(a+4)=value;
*(u8 **)(a+8)=func_02064cb8(*(void **)(p+0x11c),(u16)id);
if((*(u8 **)(a+8))[0x14]==1)*(u16 *)(a+0xe)|=2;else *(u16 *)(a+0xe)&=0xfffd;
}
if(create||update)*(u16 *)(a+0xe)|=0x100;
}

