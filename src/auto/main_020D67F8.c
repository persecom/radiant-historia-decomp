/* 6 functions from 0x020D655C to 0x020D708C (main), found by ds-decomp. */
#include "common.h"
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
extern s32 func_020bd490(s32, u8);
extern void func_020d6f58(s32);
extern void func_020dd810(void *, s32, s32);
extern void *func_0202fb50(s32, s32);
extern void func_021167f0(void *, void *);
void func_020d6c9c(void) {
    u8 *base = (u8 *)&data_02160248;
    u8 *root = (u8 *)&data_02160a6c;
    s32 i = 0;
    s32 one = 1;
    u32 c2bc = 0x2bc;
    u16 c1f = 0x1f;
    u8 zero = 0;
    u8 *node;
    u8 *p;

    for (; i < 3; i++) {
        if (func_020bd490(zero, (u8)i) == 0) {
            continue;
        }
        *(u16 *)(base + 0) = i;
        *(u32 *)(base + 0xc) = zero;
        func_020d6f58(func_020bd490(one, (u8)i));
        node = *(u8 **)(base + 4);
        *(u16 *)(node + 0x92) = zero;
        *(u32 *)(node + 0) = (u32)i * 20 + 0x80;
        *(u32 *)(node + 4) = (u32)i * 0x39 + 0x3e;
        *(u32 *)(node + 8) = zero;
        *(u16 *)(node + 0x8c) = func_020bd490(one, (u8)i);
        *(u32 *)(node + 0x64) = c2bc;
        *(u8 *)(node + 0xa1) |= one;
        *(u16 *)(node + 0x9a) = c1f;
        func_020dd810(node, one, zero);
        p = func_0202fb50(func_020bd490(one, (u8)i), zero);
        *(u8 **)(node + 0x118) = p;
        *(u8 *)p = zero;
        func_021167f0(*(u8 **)root + 0xac, node);
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

