/* 5 functions from 0x0205D644 to 0x0205DF48 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160244;
extern u8 *func_0205bad4(u8 *);
extern void func_020d3fe8(u8 *,u8 *,u8 *);
extern u32 func_020d3160(s32,u8,void *,u8);
extern void func_02030468(void *,s32);
extern void func_0210d27c(void);
extern void func_0206e7a0(s32,void *,void *,s32);
extern void func_020d9e1c(u8 *);
extern void func_020daefc(u8 *,u8 *,u8 *,s32,u8 *,s32,s32);
extern void func_02060110(u8 *,u8 *,u8 *,s32,u8 *);


extern u8 *data_02160a6c;
extern u32 func_0205bcb0(u8 *, u16);
extern void func_020d56d8(u8 *, s32, s32, s32);
extern void func_020d5fd0(u8 *);
extern void func_020d4eb8(u8 *);
extern s32 func_02032c14(u8 *, u8 *);
extern void func_020de0a8(u8 *);
extern void func_020db35c(u8 *, s32);
void func_0205db90(u8 *self,u8 *target,u16 mode,u16 kind) {
u8 effect[24];
s32 pos[3];
u8 *obj;
u8 *p=*(u8 **)(self+0x128);
u8 *node,*info;
void *arg;
u16 count;
*(s16 *)(p+0x1c)=1;
node=func_0205bad4(p);
info=*(u8 **)(p+8);
arg=*(void **)(p+12);
func_020d3fe8(self,node,info);
func_020d3160(1,(u8)*(s16 *)(info+0x16),arg,(u8)*(u16 *)(self+0x90));
if((u16)func_020d3160(8,0,0,0)>=2)func_02030468(*(void **)(self+0x118),5);
count=0;
while(node) {
obj=*(u8 **)node;
if(!*(u32 *)(p+0x30))*(u16 *)(node+4)|=16;
if(*(s16 *)(p+0x90) && count==0) {
func_0210d27c();*(s16 *)(p+0x90)=0;
}
if(obj==target && mode==3 && (kind==0 || kind==8)) {
effect[12]=2;
*(u16 *)(effect+14)=0;effect[16]=0;effect[20]=0;
*(s32 *)(effect)=0;*(s32 *)(effect+4)=0;*(s32 *)(effect+8)=0;
pos[0]=*(s32 *)target+*(s32 *)(p+0x98);
pos[1]=*(s32 *)(target+4)+*(s32 *)(p+0x9c);
pos[2]=*(s32 *)(target+8)+*(s32 *)(p+0xa0);
func_0206e7a0(1,pos,effect,0);
}
if(mode==2) {
func_020d9e1c(obj);
func_020daefc(self,obj,info,0,node,0,mode);
*(u32 *)(obj+0x80)|=128;
} else if(mode==3) {
func_020daefc(self,obj,info,0,node,0,mode);
} else if(mode==4) {
func_020daefc(self,obj,info,0,node,0,mode);
if(**(u8 **)(obj+0x118)==1)func_02060110(obj,info,node,1,p);
*(s16 *)(obj+0x1c6)=0;
}
count++;
node=*(u8 **)(node+24);
}
if(!*(u32 *)(p+0x30) && count)func_02030468(*(void **)(self+0x118),1);
data_02160244[0x14d]=0;
}

void func_0205de08(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 0x128);
    u32 res = func_0205bcb0(arg0, (u16)*(u32 *)(p + 0x34));
    if ((res & 1) && *(s16 *)(p + 0x1c) == 0) {
        *(s16 *)(p + 0x1c) = 1;
        func_020d56d8(arg0, 0, 0, 1);
        func_020d5fd0(arg0);
    }
    if (res & 2) {
        func_020d4eb8(arg0);
    }
}

s16 func_0205de70(void) {
    s16 count = 0;
    u8 *node = *(u8 **)(data_02160a6c + 0xb8);
    while (node != NULL) {
        if (*(u32 *)(*(u8 **)(node + 0x118) + 0x70) != 0) {
            count++;
        }
        node = *(u8 **)(node + 0x174);
    }
    return count;
}

void func_0205deb4(u8 *arg0) {
    u8 *node;
    if (func_0205de70() < 2) {
        return;
    }
    node = *(u8 **)(data_02160a6c + 0xb8);
    while (node != NULL) {
        if (*(u32 *)(*(u8 **)(node + 0x118) + 0x70) != 0 && func_02032c14(arg0, node) != 0) {
            if (*(s32 *)(*(u8 **)(node + 0x118) + 4) <= 0) {
                func_020db35c(node, 0);
            } else {
                func_020de0a8(node);
            }
        }
        if (func_0205de70() <= 1) {
            return;
        }
        node = *(u8 **)(node + 0x174);
    }
}

