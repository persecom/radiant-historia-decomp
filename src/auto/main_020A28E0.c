/* 25 functions from 0x020A28E0 to 0x020A3814 (main), found by ds-decomp. */
#include "common.h"
typedef struct {u32 words[156];} Table_020a3244;
extern const Table_020a3244 data_021430e0;
extern u8 data_0214e304[],data_0214f1f0[],data_0214fd14[],data_0214fcf8[],data_0214fcdc[],data_0214fcc0[],data_0214fca4[],data_0214fd30[],data_0214fd4c[],data_0214fd68[],data_0214fd84[],data_02149d64[],data_02149e18[],data_0214d508[],data_02149da0[],data_02149dc8[],data_0214eb24[],data_0214d738[],data_0214dff8[],data_0214da1c[],data_0214e624[],data_0214dd00[],data_0214d3e0[],data_0214d430[],data_0214d490[],data_02149df0[],data_02149d78[],data_0214fda0[],data_0214fdb8[],data_0214fdd0[],data_0214fde8[],data_0214fe00[];
extern u8 data_02148b08[], data_02148b1c[], data_02148b28[], data_02148b34[];
extern void *func_02092a40(void *, int);
extern u32 *func_02107390(void);
extern int func_02107594(void *, void *, void *, void *);
extern void func_021073d0(void *);
extern void func_0211b96c(u32, u32, u32, u32, u32, u32, u32, u32);
extern u8 data_02148ac8[];
extern u8 data_02148ae4[];
extern u8 data_02148aec[];
extern s32 func_02092ab0(void *, u16);
extern s32 func_02092994(void *, s32);
extern s32 func_020bdba0(u16);
extern void func_02005e80(void *, void *, ...);

typedef struct {
    u32 data[0x294 / 4];
} UnkStruct_02142e34;

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    u32 unk18;
} UnkStruct_020a3128;

extern u32 data_02155c3c;
extern u32 data_02160128;
extern u32 data_021600b0[2];
extern u8 data_02148ee0[];
extern u8 data_02149174[];
extern u8 data_02149188[];
extern void *func_021092d8(void *);
extern s32 func_020f685c(void *, s32);
extern s32 func_02109444(void *);
extern void func_021093b0(void *);
extern const UnkStruct_02142e34 data_02142e34;
extern s32 func_020a2f34(void);
extern s32 func_020a2fe4(void);
extern void *func_020a36ac(void *, s32);
extern void *func_020a3814(void *, s32, void *);
extern void func_021167ac(void *, u32);
extern void *func_0210c594(u32, u32);
extern void func_021167f0(void *, void *);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern u16 func_020a30d4(u16);
extern void func_020a2eb4(void);
extern void func_020a2ee4(void);
extern void func_0203be4c(void *);
extern void func_020a3128(u16);
void func_020a28e0(void) {
u8 path[32],buf[32];
u8 *base=(u8 *)data_021600b0[0];
u8 *node;
void *file;
s32 flag=0;
func_02005e80(path,data_02148ac8);
node=*(u8 **)(base+0x134);
while(node){
file=func_021092d8(path);
if(func_02092ab0(file,*(u16 *)node)!=-1){
*(u16 *)(node+2)=func_02092994(file,0);
*(u16 *)(node+6)=func_02092994(file,0);
*(u16 *)(node+8)=func_02092994(file,0);
func_02005e80(buf,data_02148ae4,*(u16 *)node);
if(*(u16 *)node!=32) flag=*(u16 *)node+0x19f;
if(func_020bdba0((u16)flag)==1) node[4]|=1;
}
if(file) func_021093b0(file);
node=*(u8 **)(node+16);
}
}

void func_020a29dc(u16 arg0) {
    void *p = func_0210c594(0x20, data_02155c3c);
    *(u16 *)p = arg0;
    *(u8 *)((u8 *)p + 0xc) = 0;
}

void func_020a2a08(void) {
    u16 i;
    u8 *base = (u8 *)data_021600b0[0];
    for (i = 0; i < 0x3d; i++) {
        func_021167f0(base + 0x140, ((void *(*)(u16))func_020a29dc)((u16)(i + 1)));
    }
}

void func_020a2a50(void) {
 u8 *base=(u8*)data_021600b0[0];
 void *node;
 while ((node=*(void**)(base+0x140)) != NULL) {
 func_021168f8(base+0x140,node);
 if(node != NULL) func_0210c5dc(node);
 }
}

void func_020a2a98(void) {
u8 path[32];
u8 *base=(u8 *)data_021600b0[0];
u8 *node;
void *file;
u32 id;
func_02005e80(path,data_02148aec);
node=*(u8 **)(base+0x140);
while(node){
file=func_021092d8(path);
if(func_02092ab0(file,*(u16 *)node)!=-1){
*(u16 *)(node+2)=func_02092994(file,0);
*(u16 *)(node+4)=func_02092994(file,0);
*(u16 *)(node+6)=func_02092994(file,0);
*(u16 *)(node+8)=func_02092994(file,0);
*(u16 *)(node+10)=func_02092994(file,0);
*(u16 *)(node+14)=func_02092994(file,0);
*(u16 *)(node+16)=func_02092994(file,0);
*(u16 *)(node+18)=func_02092994(file,0);
*(u16 *)(node+20)=func_02092994(file,0);
id=*(u16 *)node;
if(func_020bdba0((u16)((id>=65 && id<=75)?id+0x480:id+0x11f))==1) node[12]|=1;
id=*(u16 *)node;
if(func_020bdba0((u16)((id>=65 && id<=75)?id+0x4e0:id+0x15f))==1) node[12]|=2;
}
if(file) func_021093b0(file);
node=*(u8 **)(node+28);
}
}

void func_020a2c20(void) {
    u16 *p = (u16 *)0x05000000;
    *p = 0;
    *(p + 0x200) = 0;
}

void func_020a2c38(u16 arg0, u32 arg1) {
    if (arg1 == 0) {
        *(u16 *)0x05000000 = arg0;
        return;
    }
    if (arg1 == 1) {
        *(u16 *)0x05000400 = arg0;
    }
}

int func_020a2c5c(u32 arg0, u32 arg1, u32 arg2, int id, u16 flags) {
u8 path[32], a[64], b[64], c[64];
void *file; u32 *obj;
func_02005e80(path,data_02148b08);
file=func_021092d8(path);
if(func_02092ab0(file,(u16)id)==-1) {
if(file){func_021093b0(file);file=NULL;}
} else {
if(flags&4)func_02005e80(a,data_02148b1c,func_02092a40(file,0));
if(flags&1)func_02005e80(b,data_02148b28,func_02092a40(file,0));
if(flags&2)func_02005e80(c,data_02148b34,func_02092a40(file,0));
}
obj=func_02107390();
if(func_02107594(obj,a,b,c)==0) {
func_021073d0(obj);
if(file)func_021093b0(file);
return 0;
}
func_0211b96c(arg0,obj[3],obj[4],obj[5],obj[6],obj[7],arg1,arg2);
func_021073d0(obj);
if(file)func_021093b0(file);
return 1;
}

s32 func_020a2dd0(void) {
    u32 *ptr = &data_02160128;
    void *p;
    if (*ptr != 0) {
        return 1;
    }
    p = func_0210c594(0x10, data_02155c3c);
    *ptr = (u32)p;
    if (p == NULL) {
        return 2;
    }
    func_021167ac((u8 *)p + 4, 8);
    return 0;
}

void func_020a2e24(void) {
    u32 *p = &data_02160128;
    if (*p == 0) {
        return;
    }
    func_020a2eb4();
    func_020a2ee4();
    if (*p != 0) {
        func_0210c5dc((void *)*p);
    }
    data_02160128 = 0;
}

s32 func_020a2e64(void) {
    if (func_020a2f34() == 0) {
        if (func_020a2fe4() == 0) {
            return 0;
        }
    }
    return 1;
}

extern s32 func_020a2fa0(void);
s32 func_020a2e8c(void) {
    if (func_020a2fa0() == 0) {
        if (func_020a2fe4() == 0) {
            return 0;
        }
    }
    return 1;
}

void func_020a2eb4(void) {
    void **p = (void **)data_02160128;
    if (p != NULL && *p != NULL) {
        func_0203be4c(*p);
        *p = NULL;
    }
}

void func_020a2ee4(void) {
    u8 *p = (u8 *)data_02160128;
    if (p != NULL) {
        u8 *node = *(u8 **)(p + 4);
        while (node != NULL) {
            u8 *next = *(u8 **)(node + 0xc);
            func_021168f8(p + 4, node);
            if (node != NULL) {
                func_0210c5dc(node);
            }
            node = next;
        }
    }
}

s32 func_020a2f34(void) {
    UnkStruct_02142e34 buf;
    void **p = (void **)data_02160128;
    if (p == NULL) {
        return 1;
    }
    func_020a2eb4();
    buf = data_02142e34;
    *p = func_020a36ac(&buf, 0x21);
    return 0;
}

s32 func_020a2fa0(void) {
    void **p = (void **)data_02160128;
    if (p == NULL) {
        return 1;
    }
    func_020a2eb4();
    *p = func_020a3814(data_02148ee0, 0x21, data_02149174);
    return 0;
}

s32 func_020a2fe4(void) {
 void *file;
 func_020a2ee4();
 file=func_021092d8(data_02149188);
 if(file) {
 do {
 u16 a=func_020f685c(file,0);
 u16 b=func_020f685c(file,0);
 u16 c=func_020f685c(file,0);
 if(a!=0 && b!=0) {
 u16 *entry=func_0210c594(16,data_02155c3c);
 entry[0]=a;entry[1]=b;entry[2]=c;
 func_021167f0((u8 *)data_02160128+4,entry);
 }
 } while(func_02109444(file));
 if(file) func_021093b0(file);
 return 0;
 }
 if(file) func_021093b0(file);
 return 1;
}

void func_020a30c4(u16 arg0) {
    func_020a3128(func_020a30d4(arg0));
}

u16 func_020a30d4(u16 arg0) {
    u8 *p = (u8 *)data_02160128;
    u8 *node;
    if (p == NULL) {
        return 1;
    }
    node = *(u8 **)(p + 4);
    while (node != NULL) {
        if (arg0 >= *(u16 *)node && arg0 <= *(u16 *)(node + 2)) {
            return *(u16 *)(node + 4);
        }
        node = *(u8 **)(node + 0xc);
    }
    return 0;
}

void func_020a3128(u16 arg0) {
UnkStruct_020a3128 *d; u32 idx; s32 shift;
if(arg0==0)return;
d=*(UnkStruct_020a3128 **)data_02160128;
idx=arg0-1;
*(volatile u32 *)0x040004a8=(d[idx].unk18<<26)|(d[idx].unk4>>3)|0x40000000|(d[idx].unk10<<20)|(d[idx].unk14<<23)|0x20000000;
if(d[idx].unk18==2) shift=1;else shift=0;
*(volatile u32 *)0x040004ac=d[idx].unkC>>(4-shift);
*(volatile u32 *)0x04000480=0x7fff;
}

extern u32 *data_0216012c;
extern void func_02108ffc(void);
extern u32 func_0203c0d8(void);
extern void func_020a3244(s32);
extern void func_0203c1c0(u32, u32, u32);
extern void func_020a3bb8(void);
extern void *func_0203be10(s32);
extern void func_0203be60(void *, s32, s32);
extern void func_0203bef0();
extern void func_0203bfdc();
void func_020a31c8(s32 arg0) {
    if (data_0216012c != 0) {
        return;
    }
    data_0216012c = func_0210c594(4, data_02155c3c);
    func_02108ffc();
    *data_0216012c = func_0203c0d8();
    **(u32 **)data_0216012c = (u32)func_020a3bb8;
    func_020a3244(arg0);
    func_0203c1c0(*data_0216012c, 0x3f3, 0x3e9);
}

extern void *func_020a3730(void *,s32);
extern int func_020bd490(int,u8);
extern void *func_020a39ac(void *,int,void *);
void func_020a3244(s32 mode) {
Table_020a3244 local;
s32 count=0;
void *table=0;
void *extended=0;
if(mode==0) {count=40; table=data_0214e304;}
else if(mode==1) {
for(count=0;count<3;count++) {
if(func_020bd490(0,(u8)count)) {
switch(func_020bd490(1,(u8)count)) {
case 1: *(void **)(data_0214f1f0+count*20+0xa78)=data_0214fca4; break;
case 2: *(void **)(data_0214f1f0+count*20+0xa78)=data_0214fcc0; break;
case 3: *(void **)(data_0214f1f0+count*20+0xa78)=data_0214fcdc; break;
case 4: *(void **)(data_0214f1f0+count*20+0xa78)=data_0214fcf8; break;
case 5: *(void **)(data_0214f1f0+count*20+0xa78)=data_0214fd14; break;
case 7: *(void **)(data_0214f1f0+count*20+0xa78)=data_0214fd30; break;
case 8: *(void **)(data_0214f1f0+count*20+0xa78)=data_0214fd4c; break;
case 0: *(void **)(data_0214f1f0+count*20+0xa78)=data_0214fd68; break;
}
} else *(void **)(data_0214f1f0+count*20+0xa78)=data_0214fd84;
}
count=137; table=data_0214f1f0;
} else if(mode==2) {
local=data_021430e0;
count=26; extended=&local;
}
else if(mode==9) {count=1; table=data_02149d64;}
else if(mode==10) {count=3; table=data_02149e18;}
else if(mode==3) {count=28; table=data_0214d508;}
else if(mode==6) {count=2; table=data_02149da0;}
else if(mode==11) {count=2; table=data_02149dc8;}
else if(mode==4) {count=87; table=data_0214eb24;}
else if(mode==12) {count=37; table=data_0214d738;}
else if(mode==13) {count=39; table=data_0214dff8;}
else if(mode==14) {count=37; table=data_0214da1c;}
else if(mode==15) {count=64; table=data_0214e624;}
else if(mode==16) {count=38; table=data_0214dd00;}
else if(mode==17) {count=3; table=data_0214d3e0;}
else if(mode==18) {count=4; extended=data_0214d430;}
else if(mode==19) {count=6; table=data_0214d490;}
else if(mode==20) {count=2; table=data_02149df0;}
else if(mode==21) {count=2; table=data_02149d78;}
if(mode==2) *(void **)(*(u8 **)data_0216012c+0x30)=func_020a3730(extended,(u16)count);
else if(mode==18) *(void **)(*(u8 **)data_0216012c+0x30)=func_020a3730(extended,(u16)count);
else if(mode==12) { *(void **)(*(u8 **)data_0216012c+0x30)=func_020a3814(table,(u16)count,data_0214fda0);}
else if(mode==4) { *(void **)(*(u8 **)data_0216012c+0x30)=func_020a3814(table,(u16)count,data_0214fdb8);}
else if(mode==0) {func_02108ffc(); *(void **)(*(u8 **)data_0216012c+0x30)=func_020a3814(table,(u16)count,data_0214fdd0);}
else if(mode==15) { *(void **)(*(u8 **)data_0216012c+0x30)=func_020a3814(table,(u16)count,data_0214fde8);}
else if(mode==1) *(void **)(*(u8 **)data_0216012c+0x30)=func_020a39ac(table,(u16)count,data_0214fe00);
else *(void **)(*(u8 **)data_0216012c+0x30)=func_020a36ac(table,(u16)count);
}

void *func_020a36ac(void *arg0, s32 arg1) {
    s32 i;
    void *first;
    void *dst;
    first = func_0203be10(arg1);
    dst = first;
    i = 0;
    if (arg1 > 0) for (; i < arg1; i++) {
        u8 *src = (u8 *)arg0 + i * 0x14;
        s32 b = *(s32 *)(src + 4);
        if (b == 0) {
            s32 a = *(s32 *)src;
            func_0203be60(dst, a, a);
        } else {
            s32 a = *(s32 *)src;
            func_0203be60(dst, a, b);
        }
        *(u32 *)((u8 *)dst + 0x10) = *(u32 *)(src + 8);
        *(u32 *)((u8 *)dst + 0x14) = *(u32 *)(src + 0xc);
        *(u32 *)((u8 *)dst + 0x18) = *(u32 *)(src + 0x10);
        dst = (u8 *)dst + 0x1c;
    }
    return first;
}

void *func_020a3730(void *arg0, s32 arg1) {
    s32 i;
    void *first;
    void *dst;
    first = func_0203be10(arg1);
    dst = first;
    i = 0;
    if (arg1 > 0 && i < arg1) {
        do {
            u8 *src = (u8 *)arg0 + i * 0x18;
            s32 type = src[0x14];
            if (type == 1) {
                s32 a = *(s32 *)src;
                func_0203bef0(dst, a, a);
            } else if (type == 2) {
                s32 a = *(s32 *)src;
                func_0203bfdc(dst, a, a);
            } else {
                s32 b = *(s32 *)(src + 4);
                if (b == 0) {
                    s32 a = *(s32 *)src;
                    func_0203be60(dst, a, a);
                } else {
                    s32 a = *(s32 *)src;
                    func_0203be60(dst, a, b);
                }
            }
            *(u32 *)((u8 *)dst + 0x10) = *(u32 *)(src + 8);
            *(u32 *)((u8 *)dst + 0x14) = *(u32 *)(src + 0xc);
            *(u32 *)((u8 *)dst + 0x18) = *(u32 *)(src + 0x10);
            dst = (u8 *)dst + 0x1c;
            i++;
        } while (i < arg1);
    }
    return first;
}

extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern u32 data_021600b0[2];
extern void func_021167f0(void *, void *);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void func_020a2eb4(void);
extern void func_020a2ee4(void);
extern void func_0203be4c(void *);
u8 *func_020a37f0(u8 *dst, const s8 *src, s32 size) {
    u8 *p = dst;
    while (size > 0) {
        *p++ = *src++;
        size--;
    }
    return dst;
}

