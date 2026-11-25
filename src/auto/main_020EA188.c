/* 10 functions from 0x020EA188 to 0x020EB180 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160a80;

extern u32 data_02160a90[5];
extern u8 data_021518c0[8];
extern s32 func_0210dba0(void *);
extern s32 func_021086d4();
static inline s32 ResourceFrameAbsent(void *resource, u16 index) {
    return func_021086d4(resource, index) == 0 ? 1 : 0;
}
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
extern s32 func_020eaae0(void);
extern s32 func_020ebddc(void *, s32);
extern void func_020dd810(void *, s32, s32);
extern u8 *data_02160a6c;
s32 func_020ea188(u8 *arg0,s32 id,u8 type) {
 char filename[40],pathA[50],pathB[50],pathC[50];
 void *file=0;
 u8 cached=0;
 s32 zero=0;
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
 s32 total=*(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)arg0+0x58)+0xc));
 s32 extra=func_020020bc(total,2)!=0;
 s32 count=(u16)(extra+func_02002080(total,2));
 u8 *allocation=func_0210c594(count*4,data_02155c3c);
 u8 *p=allocation;
 s32 i;
 s32 yes=1,no=0,bit=1;
 for(i=0;i<count;i++){
 s32 j;
 s32 index=i*2;
 *(u16 *)(p+2)=index;p[0]=0;
 for(j=0;j<2;j++,index++){
 if(total>index){
 s32 absent=func_021086d4(*(void **)arg0,(u16)index)==0 ? yes : no;
 if(!absent)p[0]|=(u8)(bit<<j);
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

s32 func_020ea574(u8 *arg0, u32 arg1, s32 arg2) {
    u8 *r0 = *(u8 **)arg0;
    u32 count = *(u16 *)(*(u8 **)(*(u8 **)(r0 + 0x58) + 0xc));
    s32 res;
    if (count <= arg1) {
        return 0;
    }
    res = (func_021086d4(r0) == 0) ? 1 : 0;
    if (res != 0) {
        return 0;
    }
    func_02108680(*(u8 **)arg0, arg1, arg2);
    return 1;
}

s32 func_020ea5d4(u8 *arg0, s32 arg1) {
    u8 *r2 = *(u8 **)arg0;
    u8 *r3 = *(u8 **)(arg0 + 0xc);
    if (*(u16 *)(*(u8 **)(*(u8 **)(r2 + 0x58) + 0xc)) <= arg1 * 2) {
        return 0;
    }
    switch (r3[arg1 * 4]) {
    case 0:
        return 0;
    case 1:
        return func_020ea574(arg0, *(u16 *)(r3 + arg1 * 4 + 2), 1);
    case 3:
        return func_020ea574(arg0, *(u16 *)(r3 + arg1 * 4 + 2), 1);
    default:
        return 0;
    }
}

extern u8 *data_02160a80;
void func_020eaa10(u32 arg0) {
    *(u32 *)(data_02160a80 + 0x54) = arg0;
}

void *func_020eaa24(s32 arg0, s32 arg1) {
    void *r5 = func_0210a4cc();
    if (r5 == NULL) {
        return NULL;
    }
    if (!func_020f1ffc(r5, arg0, 0, arg1)) {
        if (r5 != NULL) {
            func_0210c5dc(r5);
        }
        return NULL;
    }
    func_0210f3ac(func_0210eb98(&data_021518c0, arg0), r5, 0);
    *(s32 *)((u8 *)r5 + 0x30) = 1;
    return r5;
}

#pragma opt_propagation off
void func_020eaaa0(u32 arg0) {
    data_02160a90[0] = (u32)func_020eaae0;
    data_02160a90[1] = arg0;
    func_0210db70(data_02160a90);
}
#pragma opt_propagation on
s32 func_020eaacc(void) {
    return func_0210dba0(&data_02160a90);
}

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

