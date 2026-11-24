/* 34 functions from 0x020B34D0 to 0x020B44CC (main), found by ds-decomp. */
#include "common.h"
extern u8 *func_020b3880(void);

extern u8 *func_020b3890(void);
extern u8 *func_020b3fd8(void);
extern void func_020b3a9c();
extern void func_02009008(void *, void *, s32);
extern u8 *func_020b4044(void);
extern u8 data_021601e0;
extern void func_020adfe8(s32, s32);
extern void func_02076380(void *);
extern void func_020ae004(s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_020ae3f8(s32, s32, s32, s32, s32, s32);
void func_020b34d0(u8 *p) {
    func_020adfe8(0x1f, 0);
    func_02076380(*(void **)(p + 0x94));
    func_020ae004(0x6a, 0, 0, 8, 0x11, 0x1c, 0x4b, 8, 0x11);
    func_020ae004(0x6a, 8, 0, 1, 0x11, 0x24, 0x4b, 0xb8, 0x11);
    func_020ae004(0x6a, 0x18, 0, 8, 0x11, 0xdc, 0x4b, 8, 0x11);
    func_020ae004(0x6b, 0, 0x11, 7, 0xd, 0x24, 0x4e, 7, 0xd);
    func_020ae3f8(6, 0x1e, 2, 0x30, 0x4e, 0x6c);
    func_020adfe8(0x1f, 0);
}

extern u8 *func_020adda8(void);
extern void func_020b0ca0(void);
extern void func_020b2aac(u8 *);
extern void func_020b33b8(u8 *);
extern void func_020b2520(u8 *,u32,u32);
extern void func_020b0e08(u8 *,u8 *);
extern void func_020b1254(u8 *);
extern void func_020b1790(u8 *,u32,u32);
extern void func_020b10f0(u8 *,u8 *);
void func_020b35e8(void) {
 u8 *p=func_020b3880();
 u8 *q=func_020adda8();
 func_020b3890();
 switch(*(u32 *)(p+0x3434)){
 case 0:case 1:case 2:func_020b0e08(p,q);func_020b10f0(p,q);break;
 case 3:case 4:
 if(*(u32 *)(p+0x3438)==0){
 switch(p[0x3442]){
 case 0:break;
 case 1:func_020b0ca0();func_020b2520(q,*(u32 *)(p+0x3438),p[0x3442]);break;
 case 2:func_020b0ca0();func_020b2aac(q);goto update;
 case 3:func_020b0ca0();func_020b33b8(q);break;
 case 4:func_020b0ca0();func_020b34d0(q);break;
 }
 }else {
 switch(p[0x3442]){
 case 0:break;
 case 1:
 select:func_020b0ca0();
 update:func_020b2520(q,*(u32 *)(p+0x3438),p[0x3442]);break;
 }
 }
 func_020b0e08(p,q);func_020b1254(q);
 func_020b1790(q,*(u32 *)(p+0x3438),p[0x3440]);break;
 case 5:
 simple:func_020b0e08(p,q);func_020b10f0(p,q);break;
 case 6:break;
 }
 if(*(s32 *)(q+0x6bc)!=*(s32 *)(q+0x6c0)){
 *(s32 *)(q+0x6c0)=*(s32 *)(q+0x6bc);*(s32 *)(q+0x6c4)=4;
 }
 if(*(s32 *)(q+0x6c4)!=0)--*(s32 *)(q+0x6c4);
 else {*(s32 *)(q+0x6c4)=0;*(s32 *)(q+0x6c0)=-1;*(s32 *)(q+0x6bc)=-1;}
}

void func_020b3744(u8 arg0) {
    data_021601e0 = arg0;
}

u8 func_020b3754(void) {
    return data_021601e0;
}

void func_020b3764(void) {
    data_021601e0 = 0;
}

extern u32 data_02162870,data_02162884,data_02162814;
extern u8 *data_02160204;
extern u16 data_021626a8;
extern void func_020b4564(void);
extern void func_020addb8(void);
extern void func_020b3cfc(void);
extern void func_020b3fec(void);
extern void func_020bc794(void);
extern void func_020bcf78(s32);
extern void func_020bd250(void);
extern void func_020a2dd0(void);
extern void func_020a2e8c(void);
extern void func_020b3dd0(u8);
extern void func_02108ffc(void);
extern void func_0210968c(s32,s32,s32);
extern void func_02109790(s32);
extern void func_0210dc88(void);
extern void func_020b45b0(void);
s32 func_020b3778(void) {
 data_02162870=1;
 func_020b4564();func_020addb8();func_020b3cfc();func_020b3fec();func_020bc794();func_020bcf78(127);func_020bd250();func_020a2dd0();func_020a2e8c();
 func_020b3dd0(func_020b3754());
 func_02108ffc();
 func_0210968c(3,0,16);func_02109790(3);
 for(;;) {
 if(*(u32 *)(*((u8 **)&data_021601e0+1)+0x3444)==1)break;
 if(data_021626a8&4)data_02160204[0x12a]^=1;
 func_0210dc88();
 }
 data_02162870=1;data_02162884=0;data_02162814=0;
 func_0210968c(3,-16,1);func_02109790(3);
 func_020b3764();func_020b45b0();func_0210dc88();func_02108ffc();
 return 2;
}

extern u8 *func_02021f10(u8);
u8 *func_020b3880(void) {
    return ((u8 **)&data_021601e0)[1];
}

u8 *func_020b3890(void) {
    return func_020b3880() + 0x708;
}

u8 *func_020b38a4(s32 arg0) {
    return func_02021f10((func_020b3890() + arg0)[0x25c]);
}

void func_020b38c0(s32 arg0) {
    u8 *p1 = func_020b3890();
    u8 *p2 = func_020b38a4(arg0);
    func_020b3a9c();
    func_02009008(p2, p1, 0x128);
    func_02009008(p2, p1 + 0x128, 0x128);
}

u8 *func_020b3908(void) {
    return func_020b3890();
}

u8 *func_020b3914(void) {
    return func_020b3890() + 0x128;
}

void func_020b3924(void) {
    u8 *r5 = func_020b3890();
    s32 i;
    for (i = 0; i < *(s32 *)(r5 + 0x254); i++) {
        u8 *r4 = func_020b38a4((u8)i);
        if (r4[0x42] == func_020b3908()[0x42]) {
            void *r6 = func_020b3914();
            func_02009008(r6, func_020b3908(), 0x128);
            func_02009008(func_020b3908(), r4, 0x128);
            func_020b3a9c(r4);
            if (*(u16 *)(r4 + 0x10) > *(u16 *)(r4 + 0x12) + *(s16 *)(r4 + 0x24)) {
                *(u16 *)(r4 + 0x10) = *(u16 *)(r4 + 0x12) + *(s16 *)(r4 + 0x24);
            }
            if (*(u16 *)(r4 + 0x14) > *(u16 *)(r4 + 0x16) + *(s16 *)(r4 + 0x26)) {
                *(u16 *)(r4 + 0x14) = *(u16 *)(r4 + 0x16) + *(s16 *)(r4 + 0x26);
            }
            func_02009008(r4, func_020b3908(), 0x128);
            return;
        }
    }
}

u16 func_020b39f4(u8 *arg0, u32 arg1) {
    u16 res = 0;
    if (arg1 < 5) {
        if (arg1 == 0) {
            res = *(u16 *)(arg0 + 0x38);
        } else if (arg1 == 1) {
            res = *(u16 *)(arg0 + 0x3a);
        } else {
            res = *(u16 *)(arg0 + 0x3c + (arg1 - 2) * 2);
        }
    }
    return res;
}

s32 func_020b3a28(void)
{
  int new_var;
  u8 *r4 = func_020b3880();
  u8 *r5 = func_020b3fd8();
  if ((((*((s32 *) (r4 + 0x3438))) == 0) && ((*((u32 *) (r5 + 0x2aa4))) <= 2)) && ((*((u16 *) (func_020b4044() + 4))) != 0))
  {
    new_var = 2;
    if ((*((s32 *) (r5 + 0x2aa4))) != 2)
    {
      return 1;
    }
    if ((*((u8 *) (r4 + 0x3442))) == new_var)
    {
      return 1;
    }
  }
  return 0;
}

void func_020b3a9c(u8 *p) {
 s32 v7=*(s16 *)(p+0x8a)+*(s16 *)(p+0xac)+*(s16 *)(p+0xce)+*(s16 *)(p+0xf0)+*(s16 *)(p+0x112);
 s32 v0=*(s16 *)(p+0x7c)+*(s16 *)(p+0x9e)+*(s16 *)(p+0xc0)+*(s16 *)(p+0xe2)+*(s16 *)(p+0x104);
 s32 v1=*(s16 *)(p+0x7e)+*(s16 *)(p+0xa0)+*(s16 *)(p+0xc2)+*(s16 *)(p+0xe4)+*(s16 *)(p+0x106);
 s32 v2=*(s16 *)(p+0x80)+*(s16 *)(p+0xa2)+*(s16 *)(p+0xc4)+*(s16 *)(p+0xe6)+*(s16 *)(p+0x108);
 s32 v3=*(s16 *)(p+0x82)+*(s16 *)(p+0xa4)+*(s16 *)(p+0xc6)+*(s16 *)(p+0xe8)+*(s16 *)(p+0x10a);
 s32 v4=*(s16 *)(p+0x84)+*(s16 *)(p+0xa6)+*(s16 *)(p+0xc8)+*(s16 *)(p+0xea)+*(s16 *)(p+0x10c);
 s32 v5=*(s16 *)(p+0x86)+*(s16 *)(p+0xa8)+*(s16 *)(p+0xca)+*(s16 *)(p+0xec)+*(s16 *)(p+0x10e);
 s32 v6=*(s16 *)(p+0x88)+*(s16 *)(p+0xaa)+*(s16 *)(p+0xcc)+*(s16 *)(p+0xee)+*(s16 *)(p+0x110);
 *(s16 *)(p+0x24)=v0;
 *(s16 *)(p+0x26)=v1;
 *(s16 *)(p+0x28)=v2;
 *(s16 *)(p+0x2c)=v3;
 *(s16 *)(p+0x2a)=v4;
 *(s16 *)(p+0x2e)=v5;
 *(s16 *)(p+0x30)=v6;
 *(s16 *)(p+0x32)=v7;
}

extern s32 func_020b3f14(u32);
extern s32 func_020b3ef4(s32);
extern u8 *func_020bd058(u32);
s32 func_020b3be8(u32 id,u32 slot) {
 u8 *dst;
 s32 result=0;
 dst=func_020b3914();
 s32 type=func_020b3f14(id);
 func_02009008(func_020b3908(),dst,0x128);
 if(type!=-1 && func_020b3ef4(id)) {
 u8 *item;
 result=1;
 item=func_020bd058(id);
 u8 *base=func_020b3890();
 u8 *other=func_020b3890();
 if(item[8] & (1 << ((u8 *)(*(u32 *)(base+0x250)+(u32)other))[0x25c])) {
 if(type==1){u8 *src=func_020bd058(id);*(u16 *)(dst+0x38)=id;func_02009008(src+0x14,dst+0x7c,0x22);}
 else if(type==2){u8 *src=func_020bd058(id);*(u16 *)(dst+0x3a)=id;func_02009008(src+0x14,dst+0x9e,0x22);}
 else if(type==3 && slot<=2){u8 *src=func_020bd058(id);*(u16 *)(dst+0x3c+slot*2)=id;func_02009008(src+0x14,dst+0xc0+slot*0x22,0x22);}
 func_020b3a9c(dst);
 result=2;
 }
 }
 return result;
}

void func_020b3cfc(void) {
    s32 count = 0;
    u8 *base = func_020b3890();
    func_02008f74(base, 0, 0x264);
    {
        u8 i;
        for (i = 0; i < 7; i++) {
            u8 *node = func_020bd438(i);
            if (node != NULL && (*(u16 *)node & 1) != 0) {
                if (func_02021f10(node[2]) != NULL) {
                    base[0x25c + count] = node[2];
                    count++;
                }
            }
        }
    }
    *(u32 *)(base + 0x254) = count;
    *(u32 *)(base + 0x250) = 0;
    *(u32 *)(base + 0x258) = (u32)func_0202214c();
    func_020b38c0(*(u32 *)(base + 0x250) & 0xff);
}

s32 func_020b3d88(void) {
    s32 r = 0;
    u8 *base1 = func_020b3880();
    func_020b3890();
    u8 *base3 = func_020b3fd8();
    if (*(u32 *)(base1 + 0x3438) == 0) {
        if (*(u8 *)(base1 + 0x3440) != 0) {
            if (*(u32 *)(base3 + 0x2aa4) != 3) {
                r = 1;
            }
        }
    }
    return r;
}

extern char data_02150c9c[];
extern char data_02150cb4[];
extern u8 *func_020b3880(void);
extern void *func_021092d8(const char *);
extern u32 func_020f685c(void *, s32);
extern s32 func_02109444(void *);
extern void func_021093b0(void *);
extern void func_02005e80(char *, const char *, ...);
void func_020b3dd0(u8 arg0) {
    char buf[0x40];
    u8 *b;
    s32 count = 0;
    u8 *a = func_020b3880();
    void *fp;
    u16 id;
    u8 *info;

    b = func_020b3fd8();
    fp = func_021092d8(data_02150c9c);
    do {
        u8 v = func_020f685c(fp, 0);
        if (v == arg0) {
            a[0x3440] = (u8)func_020f685c(fp, 0);
            a[0x3441] = arg0;
            break;
        }
    } while (func_02109444(fp) != 0);
    if (fp != NULL) {
        func_021093b0(fp);
    }

    func_02005e80(buf, data_02150cb4, arg0);
    fp = func_021092d8(buf);
    do {
        id = (u16)func_020f685c(fp, 0);
        if (id != 0) {
            info = func_020bd058(id);
            if (info != NULL && info[7] == 1) {
                *(u16 *)(b + 0x2a48 + count * 2) = id;
                count++;
            }
        }
    } while (func_02109444(fp) != 0);
    *(s32 *)(b + 0x2a9c) = count;
    if (fp != NULL) {
        func_021093b0(fp);
    }
}

s32 func_020b3ef4(s32 arg0) {
    s32 r = 0;
    if ((u32)(func_020b3f14(arg0) - 1) <= 2) {
        r = 1;
    }
    return r;
}

s32 func_020b3f14(u32 arg0) {
    s32 res = -1;
    if (arg0 != 0 && arg0 < 0x385) {
        if (arg0 >= 1 && arg0 < 0x33) {
            res = 0;
        } else if (arg0 >= 0xc9 && arg0 < 0x10f) {
            res = 4;
        } else if (arg0 >= 0x12d && arg0 < 0x1a9) {
            res = 1;
        } else if (arg0 >= 0x208 && arg0 < 0x26c) {
            res = 2;
        } else if (arg0 >= 0x2bd && arg0 < 0x31e) {
            res = 3;
        }
    }
    return res;
}

void func_020b3fb4(u32 arg0, s32 *arg1, s32 *arg2) {
    if (arg0 & 1) {
        *arg2 = 0;
    } else {
        *arg2 = 3;
    }
    if (arg0 & 8) {
        *arg1 = 4;
    } else {
        *arg1 = 3;
    }
}


extern void func_02009008(void *, void *, s32);
extern u8 *func_020b4044(void);
