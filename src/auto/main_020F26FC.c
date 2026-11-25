/* 2 functions from 0x020F26FC to 0x020F36B0 (main), found by ds-decomp. */
#include "common.h"
typedef struct {void *model,*modelData,*animation,*animationData,*pack,*texture;} Resource_020f2a5c;
typedef struct {u8 flags,pad;u16 index;} Frame_020f2a5c;

extern char data_02151df8[];
extern char data_02151e18[];
extern u32 data_02160c14[3];
extern char data_02151e38[];
extern char data_02151e54[];
extern char data_02151e74[];
extern char data_02151e98[];
extern char data_02151eb4[];
extern char data_02151ed4[];
extern void *data_02155c3c;

extern char data_02151ef8[],data_02151f18[],data_02151f38[],data_02151f48[],data_02151f58[];
extern char data_02151f68[],data_02151f6c[],data_02151f74[],data_02151f7c[],data_02151fa4[];
extern u8 *data_02160a6c;
extern void func_021167f0(void *,void *);
extern void *func_0210a7b4(void);
extern s32 func_0210a7e4(void *,char *,s32);
extern void func_0210c5dc(void *);
extern u8 *func_0210835c(void);
extern void *func_0210abb8(void *,char *,void *);
extern void *func_0210ac2c(void *,char *,void *);
extern s32 func_02109f84(void *);
extern void func_020f36b0(u8 *,s32,s32);
extern void *func_02117630(void *,s32);
extern void func_02119000(void *,void *,void *);
extern void func_02108680(void *,s32,s32);
extern void *func_020eaa24(void *,void *);
#pragma optimization_level 0
extern void func_02005e80(char *, const char *, ...);
extern void *func_021092d8(char *);
extern s32 func_02092ab0(void *, u16);
extern u32 func_0210cd20(void *, s32);
extern s32 func_02108620(void *, char *, char *, char *, s32);
extern void func_021093b0(void *);
extern u8 *func_02109f3c(void *);
extern s32 func_020020bc(u16, s32);
extern s32 func_02002080(u16, s32);
extern u8 *func_0210c594(u32, void *);
extern s32 func_021086d4(void *, u16);
#pragma optimization_level 0
s32 func_020f26fc(u8 *arg0, u16 arg1, u8 arg2) {
    char buf0[64];
    char buf1[60];
    char buf2[50];
    char buf3[50];
    s32 line;
    u8 *mem;
    u16 n;
    u16 count;
    void *csv = 0;
    u8 *cur;
    u8 *r7;
    s32 idx;
    s32 i;
    s32 j;

    switch (arg2) {
    case 0:
        func_02005e80(buf0, data_02151df8);
        break;
    case 1:
        func_02005e80(buf0, data_02151e18);
        break;
    }

    data_02160c14[0] = 0;
    data_02160c14[1] = 0;
    data_02160c14[2] = 0;

    csv = func_021092d8(buf0);
    if (csv == 0) {
        (void)csv;
    }

    line = func_02092ab0(csv, arg1);
    if (line != -1) {
        data_02160c14[0] = func_0210cd20(csv, 0);
        data_02160c14[1] = func_0210cd20(csv, 0);
        data_02160c14[2] = func_0210cd20(csv, 0);
    }

    if (data_02160c14[0] != 0 && data_02160c14[1] != 0 && data_02160c14[2] != 0) {
        switch (arg2) {
        case 0:
            func_02005e80(buf1, data_02151e38, data_02160c14[0]);
            func_02005e80(buf2, data_02151e54, data_02160c14[1]);
            func_02005e80(buf3, data_02151e74, data_02160c14[2]);
            break;
        case 1:
            func_02005e80(buf1, data_02151e98, data_02160c14[0]);
            func_02005e80(buf2, data_02151eb4, data_02160c14[1]);
            func_02005e80(buf3, data_02151ed4, data_02160c14[2]);
            break;
        }
        if (func_02108620(*(void **)arg0, buf1, buf2, buf3, 0) == 0) {
            return 0;
        }
    }

    if (csv != 0) {
        func_021093b0(csv);
        csv = 0;
    }

    r7 = func_02109f3c(*(void **)(*(u8 **)(*(u8 **)arg0 + 0x58) + 8));
    if (*(void **)(r7 + 0x10) == 0) {
        n = *(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)arg0 + 0x58) + 0xc));
        count = (func_020020bc(n, 2) ? 1 : 0) + func_02002080(n, 2);
        mem = func_0210c594(count * 4, data_02155c3c);
        cur = mem;
        for (i = 0; i < count; i++, cur += 4) {
            idx = i * 2;
            *(u16 *)(cur + 2) = idx;
            cur[0] = 0;
            for (j = 0; j < 2; j++, idx++) {
                if (n <= idx) {
                    break;
                }
                if ((func_021086d4(*(void **)arg0, idx) == 0) == 0) {
                    cur[0] |= (u8)(1 << j);
                }
            }
        }
        *(void **)(r7 + 0x10) = mem;
    }

    *(void **)(arg0 + 0x10) = *(void **)(r7 + 0x10);
    return 1;
}

s32 func_020f2a5c(u8 *arg0,u16 id,u8 type) {
 u8 *node=0;
 void *texture=0;
 void *csv=0;
 char iconName[256]={0};
 char texName[256]={0};
 char modelName[256]={0};
 char path[256];
 char packName[256];
 char csvName[64];
 s32 line;
 s32 needIcon,needSpecial;
 s32 size;
 u8 *info;
 s32 i,j,idx;
 u8 *mem;
 void *pack0,*pack1,*pack2;
 u16 n,count;
 u16 index=0;
 Frame_020f2a5c *cur;
 func_02005e80(csvName,data_02151ef8,id);
 func_02005e80(csvName,data_02151f18);
 data_02160c14[0]=0;data_02160c14[1]=0;data_02160c14[2]=0;
 csv=func_021092d8(csvName);
 if(!csv){(void)csv;}
 line=func_02092ab0(csv,id);
 if(line!=-1){data_02160c14[0]=func_0210cd20(csv,0);data_02160c14[1]=func_0210cd20(csv,0);data_02160c14[2]=func_0210cd20(csv,0);}
 func_02005e80(iconName,data_02151f38,data_02160c14[1]);
 func_02005e80(texName,data_02151f48,data_02160c14[2]);
 func_02005e80(modelName,data_02151f58,data_02160c14[0]);
 if(id>=0xbba && id<=0xbc5)id=0x443;
 needIcon=1;needSpecial=1;
if(type==0){
index=data_02160a6c[0x11c];node=(*(u8 **)(data_02160a6c+0xd0));
for(;node;node=(*(u8 **)(node+0x118))){if((*(u16 *)(node+0x10e))==id){(*(u16 *)(arg0+0x18))=(u8)(*(u16 *)(node+0x110));needIcon=0;break;}}
node=(*(u8 **)(data_02160a6c+0xd0));
for(;node;node=(*(u8 **)(node+0x118))){if((*(u16 *)(node+0x10e))==9999){needSpecial=0;break;}}
}
else if(type==1){
index=data_02160a6c[0x11e];node=(*(u8 **)(data_02160a6c+0xdc));
for(;node;node=(*(u8 **)(node+0x118))){if((*(u16 *)(node+0x10e))==id){(*(u16 *)(arg0+0x18))=(u8)(*(u16 *)(node+0x110));needIcon=0;break;}}
node=(*(u8 **)(data_02160a6c+0xdc));
for(;node;node=(*(u8 **)(node+0x118))){if((*(u16 *)(node+0x10e))==9999){needSpecial=0;break;}}
}
else if(type==2){
index=data_02160a6c[0x120];node=(*(u8 **)(data_02160a6c+0xe8));
for(;node;node=(*(u8 **)(node+0x118))){if((*(u16 *)(node+0x10e))==id){(*(u16 *)(arg0+0x18))=(u8)(*(u16 *)(node+0x110));needIcon=0;break;}}
node=(*(u8 **)(data_02160a6c+0xe8));
for(;node;node=(*(u8 **)(node+0x118))){if((*(u16 *)(node+0x10e))==9999){needSpecial=0;break;}}
}
if(data_02160c14[1] && needIcon){
 node=func_0210c594(0x11c,data_02155c3c);
 func_02005e80((char *)node,data_02151f68,iconName);
 (*(u16 *)(node+0x100))=(u16)((index%2)*16);
(*(u16 *)(node+0x102))=(u16)((index/2)*16);
(*(u16 *)(node+0x104))=0;(*(u16 *)(node+0x106))=0;(*(u16 *)(node+0x108))=16;(*(u16 *)(node+0x10a))=16;(*(u16 *)(node+0x10c))=1;(*(u16 *)(node+0x10e))=id;(*(u16 *)(node+0x110))=index;
 (*(u16 *)(arg0+0x18))=index;
 if(type==0){func_021167f0(data_02160a6c+0xd0,node);data_02160a6c[0x11c]++;}
 else if(type==1){
 func_021167f0(data_02160a6c+0xdc,node);data_02160a6c[0x11e]++;
 if(id==0x443){node=func_0210c594(0x11c,data_02155c3c);node[0]=0;(*(u16 *)(node+0x100))=(u16)((index%2)*16);
(*(u16 *)(node+0x102))=(u16)((index/2)*16);
(*(u16 *)(node+0x104))=0;(*(u16 *)(node+0x106))=0;(*(u16 *)(node+0x108))=16;(*(u16 *)(node+0x10a))=16;(*(u16 *)(node+0x10c))=1;(*(u16 *)(node+0x10e))=0xbba;(*(u16 *)(node+0x110))=index;func_021167f0(data_02160a6c+0xdc,node);}
 }else if(type==2){func_021167f0(data_02160a6c+0xe8,node);data_02160a6c[0x120]++;}
 }
 if(data_02160c14[2]){
 texture=func_0210a7b4();
 if(!func_0210a7e4(texture,texName,0)){
 if(texture){func_0210c5dc(texture);texture=0;}
 if(csv){func_021093b0(csv);csv=0;}
 return 0;
 }}
 if(data_02160c14[0]){
 Resource_020f2a5c *resource=0;
 (*(u8 **)((*(u8 **)arg0)+0x58))=func_0210835c();resource=(Resource_020f2a5c *)(*(u8 **)((*(u8 **)arg0)+0x58));
 func_02005e80(path,data_02151f6c,modelName);
 resource->model=func_0210abb8(&resource->modelData,path,&size);
 if(resource->model){if(!func_02109f84(resource->model))needIcon=1;}
 else {if(csv){func_021093b0(csv);csv=0;}return 0;}
 if(needIcon)func_020f36b0(arg0,(u16)(((*(u16 *)(arg0+0x18))%2)*16),(u16)(((*(u16 *)(arg0+0x18))/2)*16));
 func_02005e80(path,data_02151f74,modelName);
 resource->animation=func_0210ac2c(&resource->animationData,path,&size);
 if(!resource->animation){if(csv){func_021093b0(csv);csv=0;}return 0;}
 if(!func_02117630((*(u8 **)((*(u8 **)((*(u8 **)arg0)+0x58))+0xc)),0)){(void)csv;}
 func_02119000((*(u8 **)arg0),func_02117630((*(u8 **)((*(u8 **)((*(u8 **)arg0)+0x58))+0xc)),0),(*(u8 **)((*(u8 **)((*(u8 **)arg0)+0x58))+0x4)));
 func_02108680((*(u8 **)arg0),0,1);
 *(void **)((*(u8 **)((*(u8 **)arg0)+0x58))+20)=texture;
 }
 info=func_02109f3c((*(u8 **)((*(u8 **)((*(u8 **)arg0)+0x58))+0x8)));
 if(!*(void **)(info+16)){
 n=*(u16 *)(*(u8 **)((*(u8 **)((*(u8 **)arg0)+0x58))+0xc));
 count=(func_020020bc(n,2)?1:0)+func_02002080(n,2);
 mem=func_0210c594(count*4,data_02155c3c);
 cur=(Frame_020f2a5c *)mem;
 for(i=0;i<count;i++,cur++){
 idx=i*2;cur->index=idx;cur->flags=0;
 for(j=0;j<2;idx++,j++){
 if(n<=idx)break;
 if((func_021086d4((*(u8 **)arg0),idx)==0)==0)cur->flags|=(u8)(1<<j);
 }}
 *(void **)(info+16)=mem;
 }
 *(void **)(arg0+16)=*(void **)(info+16);
if(type==0){
 if(data_02160a6c[0x11c]>=data_02160a6c[0x11d]){
 node=(*(u8 **)(data_02160a6c+0xd0));
 if(!(*(u8 **)(data_02160a6c+0x110))){
 pack0=0;
 func_02005e80(packName,data_02151f7c);
 pack0=func_020eaa24(packName,data_02160a6c+0xd0);
 *(void **)(data_02160a6c+0x110)=pack0;*(void **)((*(u8 **)((*(u8 **)arg0)+0x58))+16)=pack0;
 }else *(void **)((*(u8 **)((*(u8 **)arg0)+0x58))+16)=(*(u8 **)(data_02160a6c+0x110));
 }}
else if(type==1){
 if(data_02160a6c[0x11e]>=data_02160a6c[0x11f]){
 node=(*(u8 **)(data_02160a6c+0xdc));
 if(!(*(u8 **)(data_02160a6c+0x114))){
 pack1=0;
 
 pack1=func_020eaa24(node,data_02160a6c+0xdc);
 *(void **)(data_02160a6c+0x114)=pack1;*(void **)((*(u8 **)((*(u8 **)arg0)+0x58))+16)=pack1;
 }else *(void **)((*(u8 **)((*(u8 **)arg0)+0x58))+16)=(*(u8 **)(data_02160a6c+0x114));
 }}
else if(type==2){
 if(data_02160a6c[0x120]>=data_02160a6c[0x121]){
 node=(*(u8 **)(data_02160a6c+0xe8));
 if(!(*(u8 **)(data_02160a6c+0x118))){
 pack2=0;
 func_02005e80(packName,data_02151fa4);
 pack2=func_020eaa24(packName,data_02160a6c+0xe8);
 *(void **)(data_02160a6c+0x118)=pack2;*(void **)((*(u8 **)((*(u8 **)arg0)+0x58))+16)=pack2;
 }else *(void **)((*(u8 **)((*(u8 **)arg0)+0x58))+16)=(*(u8 **)(data_02160a6c+0x118));
 }}
if(csv){func_021093b0(csv);csv=0;}return 1;
}

