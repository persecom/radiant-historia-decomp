/* 6 functions from 0x020D655C to 0x020D708C (main), found by ds-decomp. */
#include "common.h"
typedef struct { u8 pad0[0x8c]; u16 id, type; u8 pad90[0x88]; u8 *info; u8 *list; u8 pad120[0x84]; u8 *object; } D67Actor;
extern char data_021513c0[];
void func_021167ac(void *,int);
void func_021168f8(void *,void *);
u8 *func_020de160(void);
void func_020de190(void *,u16);
u8 *func_0202ffb0(u8);
u8 *func_02064be8(void);
u8 *func_02021f10(int);
void func_02064fd0(void *,int,u8,s16,void *);
extern const char data_021513dc[];
extern s32 func_02092ab0(void *,s32);
extern u8 *func_020dce1c(u16,s32,s32);
extern void func_020ddd5c(void *);
extern s32 func_020d413c(void);

extern const char data_021513a8[];
extern u8 *data_02160204;

extern void func_02005e80(char *, const char *, ...);
extern void *func_021092d8(char *);
extern s32 func_02092994(void *, s32);
extern void func_020bd2fc(u32, u16, u8, u8);
extern void func_021093b0(void *);
extern void func_020bd574(void);

extern u8 *data_02160248;
extern u8 *data_02160a6c;
extern u16 func_020bd490(s32, u8);
extern void func_020d6f58(s32);
extern void func_020dd810(void *, s32, s32);
extern void *func_0202fb50(s32, s32);
extern void func_021167f0(void *, void *);
#pragma optimization_level 0
void func_020d67f8(void) {
D67Actor *p=0;u8 *info=0;u8 i;u8 *unused=0;u8 *node=0;u8 *next=0;u8 *list=0;u16 id;u8 j;void *file=0;u8 temp[12];int unused2;u16 index;u8 found;
func_021167ac(temp,0x30);
file=func_021092d8(data_021513c0);
for(j=0;j<3;j++){
if(!func_020bd490(0,j))continue;
*(u16 *)&data_02160248=(u16)(s32)j;*(int *)((u8 *)&data_02160248+12)=1;
id=func_020bd490(1,j);
func_020d6f58(id);
p=*(D67Actor **)((u8 *)&data_02160248+4);
p->id=id;
p->object=func_020de160();
func_020de190(p->object,p->type);
if(func_020bd490(2,j)==0)p->info=func_0202ffb0((u8)func_020bd490(3,j));
else p->info=func_0202ffb0((u8)(id-1));
if(func_020bd490(4,j)){func_020dd810(p,6,0);*(int *)(p->info+0x70)=0;*(int *)(p->info+4)=0;}
*(u16 *)(p->info+0x56)=*(u16 *)((u8 *)&data_02160248+2);
*p->info=0;
p->list=func_02064be8();
unused2=0;
if(id<99){
if(func_020bd490(2,j)==0)info=func_02021f10(func_020bd490(3,j));
else info=func_02021f10((u8)(id-1));
if(info){
for(i=0;i<30;i++){
if((info+i)[0x4e]){
if((info+i)[0x4e]==11)func_02064fd0(p->list,id,(info+i)[0x4e],-1,file);
else func_02064fd0(p->list,id,(info+i)[0x4e],i,file);
}}
for(i=0;i<15;i++){if((info+i)[0x6c])func_02064fd0(p->list,id,(info+i)[0x6c],(s16)(i+100),file);}
}else func_02064fd0(p->list,id,11,-1,file);
if(info){
for(i=0;i<30;i++){if((info+i)[0x4e])++(*p->list);}
for(i=0;i<15;i++){if((info+i)[0x6c])++(p->list)[2];}
}else *p->list=1;
func_02064fd0(p->list,id,3,-1,file);
func_02064fd0(p->list,id,4,-1,file);
list=p->list;index=0;
while(*(u16 *)(list+12)){
found=0;node=*(u8 **)(list+4);
while(node){next=*(u8 **)(node+0x34);
if(*(s16 *)(node+0x26)==index){func_021168f8(list+4,node);func_021167f0(temp,node);found=1;break;}
node=next;}
if(!found)index++;
}
node=*(u8 **)temp;
while(*(u16 *)(temp+8)){
next=*(u8 **)(node+0x34);func_021168f8(temp,node);func_021167f0(list+4,node);node=next;
}
if(*(u16 *)(temp+8)) { (void)0; }
}
func_021167f0(data_02160a6c+0xac,p);
}
if(file){func_021093b0(file);file=0;}
}
#pragma optimization_level 4

void func_020d6c9c(void) {
    s32 i;
    for (i = 0; i < 3; i++) {
        if (func_020bd490(0, (u8)i) != 0) {
            u8 *node;
            u8 *p;
            *(u16 *)((u8 *)&data_02160248 + 0) = i;
            *(u32 *)((u8 *)&data_02160248 + 0xc) = 0;
            func_020d6f58(func_020bd490(1, (u8)i));
            node = *(u8 **)((u8 *)&data_02160248 + 4);
            *(u16 *)(node + 0x92) = 0;
            *(u32 *)(node + 0) = i * 20 + 0x80;
            *(u32 *)(node + 4) = i * 0x39 + 0x3e;
            *(u32 *)(node + 8) = 0;
            *(u16 *)(node + 0x8c) = func_020bd490(1, (u8)i);
            *(u32 *)(node + 0x64) = 0x2bc;
            *(u8 *)(node + 0xa1) |= 1;
            *(u16 *)(node + 0x9a) = 0x1f;
            func_020dd810(node, 1, 0);
            p = func_0202fb50(func_020bd490(1, (u8)i), 0);
            *(u8 **)(node + 0x118) = p;
            *p = 0;
            func_021167f0(*(u8 **)&data_02160a6c + 0xac, node);
        }
    }
}

void func_020d6d88(void) {
    s32 pos = 0;
    s32 count = 0;
    s32 i = 0;
    s32 zero = 0;
    s32 c96 = 0x96;
    s32 c2bc = 0x2bc;
    u8 *node;
    u8 *p;

    for (i = 0; i < 3; i++) {
        if (func_020bd490(zero, (u8)i) != 0) {
            count++;
        }
    }
    {
        s32 j;
        for (j = 0; j < 3; j++) {
            if (func_020bd490(zero, (u8)j) == 0) {
                continue;
            }
            *(u16 *)((u8 *)&data_02160248 + 0) = j;
            *(u32 *)((u8 *)&data_02160248 + 0xc) = zero;
            func_020d6f58(func_020bd490(1, (u8)j));
            node = *(u8 **)((u8 *)&data_02160248 + 4);
            *(u16 *)(node + 0x92) = zero;
            *(u32 *)(node + 0) = zero;
            *(u32 *)(node + 4) = c96;
            *(u32 *)(node + 8) = zero;
            *(u32 *)(node + 0) += (0x180 / (count + 1)) * (pos + 1) - 0x40;
            switch (*(u16 *)(node + 0x8e)) {
            case 1:
                *(u32 *)(node + 4) += 0xc;
                break;
            case 21: 
                *(u32 *)(node + 4) += 0x10;
                break;
            case 31: case 32:
                *(u32 *)(node + 4) += 0x10;
                break;
            case 61: 
                *(u32 *)(node + 4) += 0x10;
                break;
            case 81: 
                *(u32 *)(node + 4) += 0x10;
                break;
            case 91: 
                *(u32 *)(node + 4) += 0x10;
                break;
            case 11:
                *(u32 *)(node + 4) += 0x10;
                break;
            case 71:
                *(u32 *)(node + 4) += 0x10;
                break;
            case 41:
                *(u32 *)(node + 4) += 0x10;
                break;
            case 51:
                *(u32 *)(node + 0) -= 2;
adjust_y:
                *(u32 *)(node + 4) += 0x10;
                break;
            }
            *(u32 *)(node + 0x64) = c2bc;
            *(u8 *)(node + 0xa1) |= 1;
            *(u16 *)(node + 0x9a) = 0x1f;
            func_020dd810(node, 6, zero);
            p = func_0202fb50(func_020bd490(1, (u8)j), zero);
            *(u8 **)(node + 0x118) = p;
            *(u8 *)p = zero;
            func_021167f0(*(u8 **)&data_02160a6c + 0xac, node);
            pos++;
        }
    }
}

void func_020d6f58(s32 arg0) {
 char path[32]; void *file; s32 i,a,b,c,d; u8 *p; s32 zero=0;
 if((u32)arg0>0 && (u32)arg0<9) func_02005e80(path,data_021513dc);
 file=func_021092d8(path);
 if(func_02092ab0(file,arg0)!=-1) {
 for(i=0;i<19;i++) func_02092994(file,zero);
 a=func_02092994(file,zero); b=func_02092994(file,zero);
 c=func_02092994(file,zero); d=func_02092994(file,zero);
 *(s32 *)((u8 *)&data_02160248+4)=zero;
 p=func_020dce1c((u16)c,a<<5,zero);
 *(u16 *)(p+0x90)=*(u16 *)&data_02160248;
 *(s32 *)(p+0x1c0)=d;
 *(u16 *)(p+0x92)=zero;
 *(s32 *)(p+0)=0x1000; *(s32 *)(p+4)=0x20000; *(s32 *)(p+8)=0x1000;
 *(u16 *)((u8 *)&data_02160248+2)=b;
 *(s32 *)(p+0x78)=0x8fc;
 func_020ddd5c(p);
 func_020dd810(p,zero,zero);
 *(s32 *)(p+0x128)=func_020d413c();
 *(u8 **)((u8 *)&data_02160248+4)=p;
 }
 if(file) func_021093b0(file);
}

