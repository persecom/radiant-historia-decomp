/* 22 functions from 0x02021C48 to 0x02022A48 (main), found by ds-decomp. */
#include "common.h"

typedef union {
    u32 w;
    u8 b;
} Byte021f54;

extern u32 data_02160078;
extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_02005e80(char *, const char *, ...);
extern const char data_02145fdc[];
extern u32 func_021092d8(char *);
extern u32 func_02092994(u32, u32);
extern void func_02022088(s32, s32, ...);
extern void *func_02021f54(s32);
extern s32 func_02109444(void *);
extern void func_0210c970(void *);
extern void func_021167f0(void *, void *);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);

void func_02021e78(void) {
    char buf[0x14];
    void *p;
    u32 res, a, b;
    func_02005e80(buf, data_02145fdc);
    p = func_0210c594(0x60, data_02155c3c);
    res = func_021092d8(buf);
    *(u32 *)p = res;
    if (res == 0) return;
    a = func_02092994(*(u32 *)p, 0);
    b = func_02092994(*(u32 *)p, 0);
    func_02022088(a, b);
    if (func_02109444(*(void **)p) == 0) {
        func_0210c970(p);
    }
}

void *func_02021f10(s32 arg0) {
    if (arg0 == 0x3e7) goto fail;
    if (arg0 < 0) goto fail;
    if (arg0 > 7) goto fail;
    return (void *)((u8 *)data_02160078 + 0x38 + arg0 * 0x128);
fail:
    return NULL;
}

#pragma optimization_level 0
void *func_02021f54(s32 arg0){
u8 *p;
s32 index;
if(arg0>=1 && arg0<=271) p=(u8 *)data_02160078+0x978+arg0*3;
else if(arg0>=301 && arg0<=620){index=arg0-301;p=(u8 *)data_02160078+0xd00+index*3;}
else if(arg0>=701 && arg0<=798){index=arg0-701;p=(u8 *)data_02160078+0x11b0+index*4;}
else if(arg0>=801 && arg0<=900){index=arg0-801;p=(u8 *)data_02160078+0x1340+index*4;}
else if(arg0==0)p=(u8 *)data_02160078+0x978;
return p;
}
#pragma optimization_level 4
s32 func_02022068(s32 arg0, ...) {
    return *(u8 *)func_02021f54(((s32 *)&arg0)[0]);
}

#pragma peephole off
void func_02022088(s32 arg0, s32 arg1, ...) {
    s32 *args = &arg0;
    u8 *p = func_02021f54(args[0]);
    *p = (u8)(args[1] & 0xff);
}
#pragma optimization_level 0
void func_020220b0(s32 arg0, s32 arg1, ...)
{
    u8 *p = func_02021f54(((s32 *)&arg0)[0]);
    s32 value = p[0];

    value += ((s32 *)&arg0)[1];

    if (value > 99) {
        value = 99;
    } else if (value < 0) {
        value = 0;
    }

    p[0] = value & 0xff;
}
#pragma optimization_level 4
void func_02022100(s32 arg0) {
    u32 *base = (u32 *)data_02160078;
    *(u32 *)((u8 *)base + 0x28) += arg0;
    base = (u32 *)data_02160078;
    if (arg0 > 0) {
        if (*(u32 *)((u8 *)base + 0x28) > 0x98967f) {
            *(u32 *)((u8 *)base + 0x28) = 0x98967f;
        }
    } else {
        if (*(u32 *)((u8 *)base + 0x28) > 0x98967f) {
            *(u32 *)((u8 *)base + 0x28) = 0;
        }
    }
}

void *func_0202214c(void) {
    return *(void **)((u8 *)data_02160078 + 0x28);
}

void func_02022160(u32 arg0) {
    *(u32 *)((u8 *)data_02160078 + 0x28) = arg0;
    if (*(u32 *)((u8 *)data_02160078 + 0x28) > 0x98967f) {
        *(u32 *)((u8 *)data_02160078 + 0x28) = 0x98967f;
    }
}

void func_020223bc(u8 *arg0, void *arg1, u16 arg2) {
    u8 *p = func_0210c594(0x10, data_02155c3c);
    *(u16 *)p = arg2;
    *(void **)(p + 4) = arg1;
    func_021167f0(arg0 + 0x64, p);
}

void func_020223f8(u8 *arg0, u16 arg1) {
    u8 *node = *(u8 **)(arg0 + 0x64);
    u16 i = 0;
    while (node != NULL) {
        if (arg1 == i) {
            break;
        }
        i++;
        node = *(u8 **)(node + 0xc);
    }
    if (node != NULL) {
        func_021168f8(arg0 + 0x64, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

void func_02022454(u8 *arg0) {
    void *ptr;
    while ((ptr = *(void **)(arg0 + 0x64)) != NULL) {
        func_021168f8(arg0 + 0x64, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
}

void *func_02022494(u8 *arg0, u16 arg1) {
    u8 *node = *(u8 **)(arg0 + 0x64);
    u16 i = 0;
    if (node != NULL) {
        do {
            if (i == arg1) {
                return node;
            }
            node = *(u8 **)(node + 0xc);
            i++;
        } while (node != NULL);
    }
    return NULL;
}

extern void func_021167ac(void *, u32);
void *func_020224cc(void) {
    u16 *node = func_0210c594(0x10, data_02155c3c);
    func_021167ac((u8 *)node + 4, 0x10);
    *node = 0;
    return node;
}

void func_02022508(u8 *arg0) {
    u8 *node = *(u8 **)(arg0 + 4);
    while (node != NULL) {
        func_021168f8(arg0 + 4, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
        node = *(u8 **)(arg0 + 4);
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_02022558(u8 *arg0, u16 arg1) {
    u8 *node = *(u8 **)(arg0 + 4);
    while (node != NULL) {
        if (*(u16 *)node == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x14);
    }
    return NULL;
}

void func_02022584(u8 *list,u16 id,u8 kind,s16 a,s16 b,s16 c,s16 duration){
s8 *node=func_0210c594(0x18,data_02155c3c);
*(u16 *)node=id;
node[2]=kind;
*(s16 *)(node+4)=a;
*(s16 *)(node+6)=b;
*(s16 *)(node+8)=c;
node[10]=0;
switch(id){
case 140:
case 141:
case 142:
case 143:
case 144:
case 145:
case 146:
case 147:
case 148:
case 149:
case 150:
case 151:
case 152:
case 153:
case 154:
case 155:
case 156:
case 157:
case 158:
case 162:
case 163:
case 164:
case 165:
case 167:
case 168:
case 169:
case 173:
case 174:
if(duration!=-1)node[10]=duration;
else {node[10]=-1;((u8 *)node)[14]|=1;}
break;
case 159:case 160:case 161:
if(duration!=-1)node[10]=*(s16 *)(node+8);
else {node[10]=-1;((u8 *)node)[14]|=1;}
break;
}
++*(u16 *)list;
func_021167f0(list+4,node);
}

void func_020226c0(u8 *arg0, void *arg1) {
    (*(u16 *)arg0)--;
    func_021168f8(arg0 + 4, arg1);
    if (arg1 != NULL) {
        func_0210c5dc(arg1);
    }
}

