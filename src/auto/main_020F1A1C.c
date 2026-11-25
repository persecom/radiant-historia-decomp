/* 19 functions from 0x020F1A1C to 0x020F26FC (main), found by ds-decomp. */
#include "common.h"
typedef struct { u32 type:8; u32 size:24; } Header_020f1b70;
typedef struct { u32 unknown; Header_020f1b70 header; } Info_020f1b70;
static inline u32 Size_020f1b70(Header_020f1b70 header, u32 size) { header.size = size; return header.size; }
static inline void Extension_020f1b70(char *path, char *ext, u16 n) {
    u16 i;
    for(i=0;i<32;i++) {
        if(path[i]==0) { u16 len=i; i=len-n; while(i<len) { ext[n-(len-i)]=path[i]; i++; } ext[n-(len-i)]=0; break; }
    }
}
extern void func_02005e80(char *, const char *, ...);
extern char data_02151dc8[], data_02151dd0[];
extern void *func_0210aad0(void **,char *,s32 *);
extern void *func_0210aca0(void **,char *,s32 *);
extern s32 func_020f2198(void *,void *);
extern char data_02151de0[],data_02151de8[];
extern void *func_02109c60(char *,u32 *);
extern void func_021177c0(void *,u8 **),func_02117774(void *,u8 **);
extern s32 func_0210ae0c(void *,void *,char *);
extern s32 func_0210ad88(void *,void *,s32);

extern s32 func_020f1ffc();
extern void func_0210b198(s32, u16, s32, s32, s32);
extern u32 *func_020f0a5c(s32);
extern u8 *data_02160c10;
extern s32 data_02160aec;
extern void func_021168f8(void *, void *);
extern void func_020e97ec(void *);
extern u32 *func_020efb74(u8, u8);
extern void func_0210c5dc(void *);
extern void func_020f1f28(u8 *);
extern void func_020f1fa4(u8 *);
extern void func_0210da14(void *);
extern void func_0210db10(void *);
extern void func_020e972c(void *);
extern u32 data_02160af0[];
extern const char data_02151db4[], data_02151db8[], data_02151dbc[], data_02151dc0[];
extern s32 data_02155bac, data_02155c3c;
extern void **func_0210c594(s32, s32);
extern void func_02009230(void *, void *);
extern const char data_02151d9c[];
extern const char data_02151da0[];
extern const char data_02151da4[];
extern const char data_02151dac[];
extern s32 func_02109cf0(const char *);
extern s32 func_020123f0(const char *, const char *);
extern void *func_02109b14(const char *, s32);
extern void func_0210b0c8(void *, void *);
extern void func_0210b130(void *, void *);
s32 func_020f1a1c(void *arg0, s32 arg1) {
    char path[0x20];
    char ext[8];
    s32 ret = 0;

    if (arg1 == 0) {
        func_02005e80(path, data_02151d9c, data_02160af0[3]);
    } else {
        func_02005e80(path, data_02151da0, data_02160af0[4]);
    }

    if (func_02109cf0(path) != 0) {
        u16 i;
        for (i = 0; i < 0x20; i++) {
            if (path[i] == 0) {
                u16 len = i;
                for (i = len - 5; i < len; i++) {
                    ext[5 - (len - i)] = path[i];
                }
                ext[5 - (len - i)] = 0;
                break;
            }
        }

        if (func_020123f0(data_02151da4, ext) == 0 || func_020123f0(data_02151dac, ext) == 0) {
            if (arg1 == 0) {
                func_0210b0c8(arg0, func_02109b14(path, 0));
            } else {
                func_0210b130(arg0, func_02109b14(path, 0));
            }
            ret = 1;
        }
    }

    return ret;
}

s32 func_020f1b70(void *obj, s32 mode) {
    char path[32];
    char ext3[8];
    char ext5[8];
    Header_020f1b70 header;
    s32 info;
    s32 ret = 0;
    void *compressed = NULL, *buffer = NULL;
    u16 i;
    if (!mode) func_02005e80(path, data_02151db4, data_02160af0[3]);
    else func_02005e80(path, data_02151db8, data_02160af0[4]);
    if (path[0] == '-') return 0;
    for (i=0; i<32; i++) {
        if (path[i] == 0) {
            u16 len=i;
            i-=3;
            while (i<len) { ext3[3-(len-i)]=path[i]; i++; }
            ext3[3-(len-i)]=0;
            break;
        }
    }
    if (func_020123f0(data_02151dbc, ext3)==0) {
        data_02155bac=0;
        compressed=func_02109b14(path,(s32)&info);
        data_02155bac=1;
        header.size=*(u32 *)compressed >> 8;
        buffer=func_0210c594(header.size,data_02155c3c);
        func_02009230(compressed,buffer);
        if(compressed)func_0210c5dc(compressed);
        if(!mode)func_0210b0c8(obj,buffer);
        else func_0210b130(obj,buffer);
        ret=1;
    } else {
        for (i=0; i<32; i++) {
            if (path[i] == 0) {
                u16 len=i;
                i-=5;
                while(i<len) { ext5[5-(len-i)]=path[i]; i++; }
                ext5[5-(len-i)]=0;
                break;
            }
        }
        if(func_020123f0(data_02151dc0,ext5)==0) {
            if(!mode)func_0210b0c8(obj,func_02109b14(path,0));
            else func_0210b130(obj,func_02109b14(path,0));
            ret=1;
        }
    }
    return ret;
}

void func_020f1dd4(s32 *arg0, s32 arg1) {
    func_0210b198(*arg0, (u16)(arg1 + 1), 0, 1, 0);
}

void func_020f1dfc(s32 arg0, s32 arg1) {
    u32 *ptr = func_020f0a5c(arg0);
    if (ptr == NULL) {
        return;
    }
    if (arg1 != 0) {
        ptr[5] |= 1;
    } else {
        ptr[5] &= ~1;
    }
}

#pragma optimization_level 2
void func_020f1e2c(void) {
 s32 i;
 s32 off;
 s32 off2;
 s32 j;
 if(data_02160c10==NULL) return;
 i=0;
 goto test1;
 loop1:
 off=i*12;
 if(*(u16 *)(data_02160c10+off+8)!=0) {
 do {func_020f1f28(*(u8 **)((off+(u32)data_02160c10)));}
 while(*(u16 *)((off+(u32)data_02160c10)+8)!=0);
 }
 i++;
 test1:
 if(i<6) goto loop1;
 j=0;
 goto test2;
 loop2:
 off2=j*12;
 if(*(u16 *)(data_02160c10+off2+0x50)!=0) {
 do {func_020f1fa4(*(u8 **)((off2+(u32)data_02160c10)+0x48));}
 while(*(u16 *)((off2+(u32)data_02160c10)+0x50)!=0);
 }
 j++;
 test2:
 if(j<6) goto loop2;
 func_0210da14(data_02160c10+0x9c);
 func_0210dba0(data_02160c10+0xb0);
 func_0210db10(data_02160c10+0xc4);
 func_020e972c(*(void **)(data_02160c10+0xd8));
 if(data_02160c10==NULL) return;
 func_0210c5dc(data_02160c10);
 data_02160c10=NULL;
}
#pragma optimization_level 4
void func_020f1f28(u8 *arg0) {
    func_021168f8(data_02160c10 + arg0[0x20] * 0xc, arg0);
    if (*(void **)(arg0 + 0x1c) != NULL) {
        func_020e97ec(*(void **)(arg0 + 0x1c));
        *(void **)(arg0 + 0x1c) = NULL;
    }
    if (data_02160aec != 0) {
        func_020efb74(arg0[0x21], arg0[0x22])[2] = 0;
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020f1fa4(u8 *arg0) {
    func_021168f8(data_02160c10 + 0x48 + arg0[0xc] * 0xc, arg0);
    if (data_02160aec != 0) {
        func_020efb74(arg0[0xd], arg0[0xe])[2] = 0;
    }
}

s32 func_020f1ffc(void *a,s32 id,s32 mode,void *extra) {
 char buf[256]; void *data; s32 size; void *mem;
 if(mode==0) {
 func_02005e80(buf,data_02151dc8,id);
 mem=func_0210aad0(&data,buf,&size);
 if(!mem)return 0;
 if(extra)func_020f2198(data,extra);
 if(!func_0210ae0c(a,data,buf))return 0;
 } else {
 func_02005e80(buf,data_02151dd0,id);
 mem=func_0210aca0(&data,buf,&size);
 if(!mem)return 0;
 if(extra)func_020f2198(data,extra);
 if(!func_0210ad88(a,data,mode))return 0;
 }
 if(mem)func_0210c5dc(mem);
 return 1;
}

extern u8 data_02151dd8[8];
extern s32 data_02155c3c;
extern void func_02005e80(char *, const char *, ...);
extern s32 func_0210ab44(void **, char *, s32 *);
extern BOOL func_020f242c(void *, void *);
extern s32 func_0210aee0(void *, void *, s32, s32);
extern void **func_0210c594(s32, s32);
extern void func_0210a4a0(void);
extern void func_020f4870(void);
extern void *func_0210a4cc(void);
extern void *func_0210a7b4(void);
extern void func_020f4860(void *);
BOOL func_020f2104(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    char buf[0x100];
    void *sp4 = NULL;
    s32 sp0;
    s32 r4;

    func_02005e80(buf, (const char *)data_02151dd8, arg1);
    r4 = func_0210ab44(&sp4, buf, &sp0);
    if (r4 == 0) {
        return 0;
    }
    if (arg3 != NULL) {
        func_020f242c(sp4, arg3);
    }
    if (func_0210aee0(arg0, sp4, arg2, r4) == 0) {
        return 0;
    }
    return 1;
}

s32 func_020f2198(void *arg0,void *arg1) {
char path[256];
u8 *src;
u32 size;
s32 total;
u8 *dst;
register u16 w;
u16 col;
register u16 x;
u16 y,h;
u16 sx,sy;
u8 *obj=arg0;
u16 width=*(u16 *)(obj+2);
u16 height=*(u16 *)obj;
u8 *node=*(u8 **)arg1;
while(node) {
x=*(u16 *)(node+0x100);
y=*(u16 *)(node+0x102);
sx=*(u16 *)(node+0x104);
sy=*(u16 *)(node+0x106);
w=*(u16 *)(node+0x108);
h=*(u16 *)(node+0x10a);
col=0;
dst=*(u8 **)(obj+0x14);
if(*(s8 *)node){
void *buf;
s32 stride;
s32 sw,sh;
u16 i;
u8 *pixels;
if(*(u16 *)(node+0x10c)==0)func_02005e80(path,data_02151de0,node);
else func_02005e80(path,data_02151de8,node);
buf=func_02109c60(path,&size);
if(!buf)return 0;
if(*(u16 *)(node+0x10c)==0)func_021177c0(buf,&src);else func_02117774(buf,&src);
pixels=*(u8 **)(src+0x14);
sw=*(u16 *)(src+2);sh=*(u16 *)src;
if(*(u32 *)(obj+4)==3 && *(u32 *)(src+4)==3)stride=32;
else if(*(u32 *)(obj+4)==4 && *(u32 *)(src+4)==4)stride=64;
else if(*(u32 *)(obj+4)==4 && *(u32 *)(src+4)==3)stride=32;
else return 0;
if(x>width || y>height || x+w>(s32)width || y+h>(s32)height)return 0;
if(w==0)w=sw-sx;
if(h==0)h=sh-sy;
if(*(u16 *)(node+0x10c)==0){
dst+=stride*(x+y*width);
pixels+=stride*(sx+sy*sw);
}else{
dst+=y*(stride*width)+(x<<2);
pixels+=sy*(stride*sw)+(sx<<2);
}
for(i=0;i<(w*h)*stride;i++){
if(*(u16 *)(node+0x10c)==0){
if(col>=w*stride){col=0;dst+=stride*(width-w);pixels+=stride*(sw-w);}
}else{
if(col>=w*4){col=0;dst+=(width-w)*4;pixels+=(sw-w)*4;}
}
*dst=*pixels;
col++;
dst++;
pixels++;
}
if(buf)func_0210c5dc(buf);
}
node=*(u8 **)(node+0x118);
}
return 1;
}

extern char data_02151df0[];
s32 func_020f242c(void *arg0, void *arg1)
{
  u8 *node = *((u8 **) arg1);
  while (node != NULL)
  {
    u8 *dst = *((u8 **) (((u8 *) arg0) + 0xc));
    u16 idx1 = *((u16 *) (node + 0x102));
    u16 idx2 = *((u16 *) (node + 0x106));
    char buf[0x100];
    void *pal;
    s32 size;
    s32 ptr;
    u8 *d;
    u8 *s;
    u32 i;
    i = idx2;
    if ((idx1 > 0xf) || (idx2 > 0xf))
    {
      return 0;
    }
    func_02005e80(buf, data_02151df0, node);
    ptr = func_0210ab44(&pal, buf, &size);
    if (ptr == 0)
    {
      return 0;
    }
    d = dst + (idx1 * 0x20);
    s = (*((u8 **) (((u8 *) pal) + 0xc))) + (i * 0x20);
    for (i = 0; i < 0x20; i++)
    {
      *(d++) = *(s++);
    }

    if (ptr != 0)
    {
      func_0210c5dc((void *) ptr);
    }
    node = *((u8 **) (node + 0x118));
  }

  return 1;
}

BOOL func_020f24f4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    return func_020f1ffc(arg0, arg1, arg2, arg3) != 0;
}

extern BOOL func_020f2104(void *, s32, s32, void *);
BOOL func_020f250c(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    return func_020f2104(arg0, arg1, arg2, arg3) != 0;
}

BOOL func_020f2524(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4) {
    void **r4 = func_0210c594(8, data_02155c3c);
    func_0210a4a0();
    func_020f4870();
    r4[0] = func_0210a4cc();
    if (!func_020f24f4(r4[0], arg0, arg2, arg3)) {
        return 0;
    }
    r4[1] = func_0210a7b4();
    if (!func_020f250c(r4[1], arg1, arg2, arg4)) {
        return 0;
    }
    func_020f4860(r4);
    return 1;
}

extern u32 data_02160c14[];
extern u8 data_02160c20[];
extern void func_020f37d0(void);
extern void func_0210db70(void *);
extern void *func_0210853c(void);
extern void func_0210aa14(void *);
void func_020f25b0(u32 arg0) {
    data_02160c14[3] = (u32)func_020f37d0;
    data_02160c14[4] = arg0;
    func_0210db70(data_02160c20);
}

extern u8 data_02160c20[20];
extern s32 func_0210dba0(void *);
s32 func_020f25dc(void) {
    return func_0210dba0(&data_02160c20);
}

void *func_020f25f0(void) {
    u8 *r4 = (u8 *)func_0210c594(0x1c, data_02155c3c);
    *(u32 *)(r4 + 8) = 1;
    *(u16 *)(r4 + 0xc) = 0xffff;
    *(u32 *)(r4 + 0x10) = 0;
    *(u16 *)(r4 + 0x18) = 0;
    *(void **)(r4 + 0) = func_0210853c();
    return r4;
}

extern void func_02108594(void *);
void func_020f2638(void **arg0) {
    func_02108594(*arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020f265c(void **arg0) {
    if (arg0 != NULL) {
        u8 *r4 = (u8 *)*arg0;
        if (*(u8 **)(r4 + 0x58) != NULL) {
            func_0210aa14(*(void **)(*(u8 **)(r4 + 0x58) + 0x14));
            if (*(void **)(*(u8 **)(r4 + 0x58) + 0) != NULL) {
                func_0210c5dc(*(void **)(*(u8 **)(r4 + 0x58) + 0));
                *(void **)(*(u8 **)(r4 + 0x58) + 0) = NULL;
            }
            if (*(void **)(*(u8 **)(r4 + 0x58) + 8) != NULL) {
                func_0210c5dc(*(void **)(*(u8 **)(r4 + 0x58) + 8));
                *(void **)(*(u8 **)(r4 + 0x58) + 8) = NULL;
            }
            if (*(void **)(r4 + 0x58) != NULL) {
                func_0210c5dc(*(void **)(r4 + 0x58));
                *(void **)(r4 + 0x58) = NULL;
            }
        }
        if (r4 != NULL) {
            func_0210c5dc(r4);
        }
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

