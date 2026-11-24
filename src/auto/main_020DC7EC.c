/* 9 functions from 0x020DC7EC to 0x020DD770 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_0216025c[2];
extern u8 *data_02160204;
void func_020dcca4(void);
extern u8 *data_02160a68[];
extern void func_020d30a0(void);
extern void func_020dd770(void *);
extern void func_0210da14(void *), func_0210db10(void *), func_0210dba0(void *), func_0210dc70(void *);
extern void func_0210a76c(void *), func_0210c5dc(void *);
extern void func_021168f8(void *, void *);

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

