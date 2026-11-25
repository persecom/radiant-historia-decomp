/* 6 functions from 0x02051344 to 0x02052328 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160aec;
extern s16 data_0213a394[];
extern u32 data_02162908[2];
extern s32 func_0210c2f4(u8 *, u8 *);
extern s32 func_020ef4c8();
extern u8 *data_021600bc, *data_021600ac;
extern u8 *func_02047820(u16);
extern void func_020477dc(void *, s32, s32);
void func_02051ef4(void){
u8 *node,*obj;u32 size;
*(volatile u32 *)0x40004a4=0x31f00c0;
for(node=*(u8 **)(data_021600bc+0x7c);node;node=*(u8 **)(node+0x30)){
obj=*(u8 **)(node+0x28);
if(*(u32 *)(obj+0x80)&2){
*(volatile u32 *)0x40004a4=((data_021600bc[0x29]==0?10:31)<<16)|0x80;
func_020a3bbc(0);
if(data_021600bc[0x29]==0) *(volatile u32 *)0x4000480=0;
else *(volatile u32 *)0x4000480=0x294a;

*(volatile u32 *)0x4000444=0;
*(volatile u32 *)0x4000500=1;
size=obj[0x9d];
*(volatile u32 *)0x4000470=*(u32 *)obj;
*(volatile u32 *)0x4000470=func_020ef4c8(obj);
*(volatile u32 *)0x4000470=*(u32 *)(obj+8);
*(volatile u32 *)0x400046c=size<<12;
*(volatile u32 *)0x400046c=0x1000;
*(volatile u32 *)0x400046c=size<<12;
*(volatile u32 *)0x4000488=0;
*(volatile u32 *)0x4000490=0x3c0003c0;
*(volatile u32 *)0x4000488=0xf00000;
*(volatile u32 *)0x4000490=0x040003c0;
*(volatile u32 *)0x4000488=0xf000f0;
*(volatile u32 *)0x4000490=0x04000040;
*(volatile u32 *)0x4000488=0xf0;
*(volatile u32 *)0x4000490=0x3c000040;
*(volatile u32 *)0x4000504=0;
*(volatile u32 *)0x4000448=1;
}}
*(volatile u32 *)0x40004a4=0x31f00c0;
for(node=*(u8 **)(data_021600ac+0x384);node;node=*(u8 **)(node+0x38)){
obj=func_02047820((u16)(*(u16 *)(node+4)+0x2ee1));
if(obj){
*(volatile u32 *)0x40004a4=((data_021600bc[0x29]==0?10:31)<<16)|0x80;
func_020a3bbc(0);
if(data_021600bc[0x29]==0) *(volatile u32 *)0x4000480=0;
else *(volatile u32 *)0x4000480=0x294a;

size=obj[0x9d];
if(size){
*(volatile u32 *)0x4000444=0;
*(volatile u32 *)0x4000500=1;
*(volatile u32 *)0x4000470=*(u32 *)obj;
*(volatile u32 *)0x4000470=func_020ef4c8(obj);
*(volatile u32 *)0x4000470=*(u32 *)(obj+8);
*(volatile u32 *)0x400046c=size<<12;
*(volatile u32 *)0x400046c=0x1000;
*(volatile u32 *)0x400046c=size<<12;
*(volatile u32 *)0x4000488=0;
*(volatile u32 *)0x4000490=0x3c0003c0;
*(volatile u32 *)0x4000488=0xf00000;
*(volatile u32 *)0x4000490=0x040003c0;
*(volatile u32 *)0x4000488=0xf000f0;
*(volatile u32 *)0x4000490=0x04000040;
*(volatile u32 *)0x4000488=0xf0;
*(volatile u32 *)0x4000490=0x3c000040;
*(volatile u32 *)0x4000504=0;
*(volatile u32 *)0x4000448=1;
}
}
}
}

void func_02052240(u8 *arg0) {
    s32 val = func_020ef4c8();
    *(s32 *)(arg0 + 0x7c) = 0;
    *(s32 *)(arg0 + 0x4) = val;
    *(s32 *)(arg0 + 0x50) = val;
    if (data_02160aec != NULL && *(u8 **)(data_02160aec + 0x58be0) != NULL) {
        *(s32 *)(arg0 + 0x7c) = (*(u8 **)(data_02160aec + 0x58be0))[3];
    }
}

void func_02052284(void *arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        func_020477dc(arg0, 2, 0);
        break;
    case 1:
        func_020477dc(arg0, 0, 0);
        break;
    case 2:
        func_020477dc(arg0, 1, 0);
        break;
    }
}

void func_020522d4(u8 *arg0, s32 arg1, s32 arg2) {
    if (arg1 != 0) {
        if (arg2 != 0) {
            if (arg0[0x9e] == 0) {
                *(s32 *)(arg0 + 0x78) = 6;
            }
            func_02052284(arg0, 2);
        } else {
            if (arg0[0x9e] == 0) {
                *(s32 *)(arg0 + 0x78) = 3;
            }
            func_02052284(arg0, 1);
        }
    } else {
        func_02052284(arg0, 0);
    }
}

