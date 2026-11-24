/* 11 functions from 0x02064590 to 0x02065298 (main), found by ds-decomp. */
#include "common.h"
void *func_02022ee0(void);
void func_02022f0c(void *, u16, s16, s32);

typedef struct {
    s16 x;
    s16 y;
    u16 touch;
    u16 validity;
} TouchData_02064aac;

extern u8 *data_02160a6c;
extern char data_02146654[];
extern void *func_021092d8(void *);
extern void func_02005e80(void *, const char *, ...);
extern TouchData_02064aac data_02162908;
extern void *data_02155c3c;
extern u16 data_021628f8;
extern void *func_0210c594(s32, void *);
extern void func_021167ac(void *, s32);
extern void func_021168f8(void *, void *);
extern void func_02022f60(void **);
extern void func_0210c5dc(void *);

void func_02064a30(void) {
    u8 *p = data_02160a6c;
    u8 *node;
    if (p == NULL) {
        return;
    }
    node = *(u8 **)(p + 0x70);
    if (node == NULL) {
        return;
    }
    do {
        u8 *sub = *(u8 **)(node + 0x1a4);
        if (sub == NULL) {
            *(s32 *)(node + 0x1a8) = *(s32 *)(node + 0x0);
            *(s32 *)(node + 0x1ac) = *(s32 *)(node + 0x4);
            *(s32 *)(node + 0x1b0) = *(s32 *)(node + 0x8);
        } else {
            *(s32 *)(node + 0x1a8) = *(s32 *)(node + 0x0) + *(s32 *)(sub + 0x18);
            *(s32 *)(node + 0x1ac) = *(s32 *)(node + 0x4) + *(s32 *)(sub + 0x1c);
            *(s32 *)(node + 0x1b0) = *(s32 *)(node + 0x8) + *(s32 *)(sub + 0x20);
        }
        node = *(u8 **)(node + 0x13c);
    } while (node != NULL);
}

s32 func_02064aac(s32 *rect) {
    TouchData_02064aac tp = data_02162908;
    if (tp.touch == 1) {
        s32 y = tp.y;
        s32 x = tp.x;
        s32 hit;
        if (x >= rect[0] && x <= rect[2] && y >= rect[1] && y <= rect[3]) {
            hit = 1;
        } else {
            hit = 0;
        }
        if (hit) {
            return 1;
        }
    }
    return 0;
}

s32 func_02064b3c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 rect[4] = { 0, 0, 0, 0 };
    rect[0] = arg0;
    rect[1] = arg1;
    rect[2] = arg0 + arg2;
    rect[3] = arg1 + arg3;
    return func_02064aac(rect);
}

s32 func_02064b84(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 rect[4] = { 0, 0, 0, 0 };
    rect[0] = arg0;
    rect[1] = arg1;
    rect[2] = arg0 + arg2;
    rect[3] = arg1 + arg3;
    return (func_02064aac(rect) != 0 && data_021628f8 != 0) ? 1 : 0;
}

void *func_02064be8(void) {
    u8 *ptr = (u8 *)func_0210c594(0x10, data_02155c3c);
    func_021167ac(ptr + 0x4, 0x30);
    return ptr;
}

void func_02064c18(u8 **arg0) {
    u8 *base = (u8 *)arg0;
    u8 *node = *(u8 **)(base + 4);
    while (node != NULL) {
        if (*(u8 **)(node + 0x2c) != NULL) {
            func_02022f60((void **)*(u32 *)(node + 0x2c));
            *(u32 *)(node + 0x2c) = 0;
        }
        func_021168f8(base + 4, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
        node = *(u8 **)(base + 4);
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_02064c80(u8 *arg0) {
    if (arg0 == NULL) {
        return;
    }
    if (*(u8 **)(arg0 + 0x2c) != NULL) {
        func_02022f60((void **)*(u32 *)(arg0 + 0x2c));
        *(u32 *)(arg0 + 0x2c) = 0;
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_02064cb8(u8 *arg0, s32 arg1) {
    u8 *node = *(u8 **)(arg0 + 4);
    while (node != NULL) {
        if (node[1] == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x34);
    }
    return NULL;
}

void *func_02022ee0(void);
void func_02022f0c(void *, u16, s16, s32);
void *func_02064fd0(u8 *list, u16 kind, s32 index, u16 arg3, void *file) {
u8 *p = 0;
s32 id, value;
u16 sound;
s16 variant;
s32 extra;
((u32 *)file)[2]=((u32 *)file)[0];
id=func_02092ab0(file,kind);
if(id!=-1) {
value=func_02092994(file,0);
while(value!=index) {
func_02109444(file);
id=func_02092ab0(file,kind);
if(id==-1) break;
value=(u16)func_02092994(file,0);
}
}
if(id==kind && value==index) {
p=(u8 *)func_0210c594(0x40,data_02155c3c);
*(u8 *)(p+0)=func_02092994(file,0);
*(u16 *)(p+2)=func_02092994(file,0);
*(u16 *)(p+4)=func_02092994(file,0);
*(u8 *)(p+6)=func_02092994(file,0);
*(u8 *)(p+7)=func_02092994(file,0);
*(u16 *)(p+22)=func_02092994(file,0);
*(u16 *)(p+24)=func_02092994(file,0);
*(u8 *)(p+26)=func_02092994(file,0);
*(u16 *)(p+28)=func_02092994(file,0);
*(u8 *)(p+20)=func_02092994(file,0);
*(u32 *)(p+8)=func_02092994(file,0);
sound=func_02092994(file,0);variant=func_02092994(file,0);extra=(u16)func_02092994(file,0);
*(u8 *)(p+30)=func_02092994(file,0);
*(u8 *)(p+36)=func_02092994(file,0);
*(u16 *)(p+56)=func_02092994(file,0);
*(u8 *)(p+58)=func_02092994(file,0);
*(u16 *)(p+32)=func_02092994(file,0);
*(u16 *)(p+34)=func_02092994(file,0);
*(u16 *)(p+38)=func_02092994(file,0);
*(u8 *)(p+40)=func_02092994(file,0);
p[1]=index;*(u16 *)(p+60)=arg3;
if(list)func_021167f0(list+4,p);
{void *v=func_02022ee0();*(void **)(p+44)=v;func_02022f0c(v,sound,variant,0);}
if(extra)func_02022f0c(*(void **)(p+44),(u8)(extra/10)+210,(u8)(extra%10),5);
}
return p;
}

