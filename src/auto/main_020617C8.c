/* 7 functions from 0x020617C8 to 0x02062578 (main), found by ds-decomp. */
#include "common.h"

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
void func_020617c8(u8 *obj) {
 u8 *data;
 u8 *selected;
 u8 *child;
 u8 *base;
 u8 *node;
 u16 i;
 s32 empty;
 s32 value;
 s32 mode;
 s32 flags;
 base = *(u8 **)(obj+0x128);
 mode=0;
 selected=0;
 flags=func_0205bcb0(obj,(u16)*(u32 *)(base+0x34));
 if ((flags&1) && *(s16 *)(base+0x1c)==0) {
  *(s16 *)(base+0x1c)=1;
  if (!(base[0x76]&1)) {
   node=func_0205bad4(base);
   value=*(s32 *)(base+8);
   selected=*(u8 **)base;
  } else {
   u8 *p=*(u8 **)(base+0x78);
   mode=1;
   node=*(u8 **)(*(u8 **)(p+0xc)+0x28);
   value=*(s32 *)(p+4);
  }
  for(i=0;node; i++,node=*(u8 **)(node+0x18)) {
   data=*(u8 **)node;
   child=func_020d56d8(obj,data,0,1);
   if(child) {

    *(u16 *)(child+0x90)=i+0x276+(*(u16 *)(obj+0x90)-0x65)*10;
    *(u32 *)child=*(u32 *)data;
    *(u32 *)(child+4)=*(u32 *)(data+4);
    *(u32 *)(child+8)=*(u32 *)(data+8);
    if(*(s32 *)(base+0x30)==0) {
     empty=1;
     *(u16 *)(node+4)|=0x10;
    } else empty=0;
    if(*(s16 *)(base+0x90)) {
     func_0210d27c(*(s16 *)(base+0x90));
     *(s16 *)(base+0x90)=0;
    }
    { s32 callMode=mode; s32 callValue=value; func_0202f41c(child,obj,data,callValue,node,callMode,empty); }
    *(s32 *)(child+0x28)+=0x10000;
    if(*(s32 *)(child+4)!=*(s32 *)(child+0x28)) func_0205baf8(child);
    if(selected==data && func_020d9df4()==*(u16 *)(obj+0x90)) {
     func_020d9e48(child,selected);
     func_020d9dc8(child,*(u16 *)(child+0x90),10,1);
     func_020d9da8(0x20);
     func_020d9ea8(8,0);
    }
    func_020d56d8(obj,data,child,2);
   }
  }
  func_020d5fd0(obj);
 }
 if(flags&2) func_020d4eb8(obj);
}

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

void func_02061a20(void)
{
}

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
