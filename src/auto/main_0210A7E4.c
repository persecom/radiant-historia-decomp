/* 25 functions from 0x0210A7E4 to 0x0210B7A4 (main), found by ds-decomp. */
#include "common.h"
typedef struct { u32 flags; u8 pad4[0x30]; u32 field34, field38; } Header_0210b4cc;
static inline void Set34_0210b4cc(Header_0210b4cc *p, u32 value) {
p->field34=value;
if(!p->field38)p->flags &= ~1;
}
static inline void Set38_0210b4cc(Header_0210b4cc *p, u32 value) {
p->field38=value;
if(!p->field38)p->flags &= ~1;
}
extern u8 data_02155c00[];
extern void (*data_02156154)(u32);
extern void func_02005e80(void *,void *,...);
extern void *func_0210ab44(void *,s32,s32);
extern u32 func_0210f20c(void *,u32,u32,u32);
extern void func_0210e3dc(void);
extern s32 func_0211860c(void *,s32);
extern u32 func_02118600(void *,s32);

extern u8 data_02155c08[8];
extern u8 data_02155c10[8];
extern void *data_0215615c;
extern void func_0210c5dc(void *);
extern void *func_02109b14(s32, s32);
extern s32 func_02109f84(void *);
extern s32 func_02117774(void *, void *);
extern s32 func_021178d4(void *, void *);
extern void *func_02117904(void *, u32);
extern void *func_0210eb98(void *, s32);
extern s32 func_0210f3ec(void *, s32);
extern void *func_0210a7b4(void);
extern s32 func_0210a7e4(void *, s32, s32);
extern void func_0210f3ac(void *, void *, s32);
extern u32 data_02155c3c;
extern void *func_0210c518(u32, u32);
void func_0210b0ac(u8 *);
extern void func_0210b848(void *);
extern void func_02006dc4(u32, u32);
extern u32 *func_0210a4b4(void);
extern u32 *func_0210a4c0(void);
extern void func_0211883c(void *, u32, s32, u32);
extern void func_02118624(void *, u32, s32, u32);
extern s32 func_02117878(void *, u32 *);
extern void func_02118d0c(void *, u32, s32, s32, u32);
extern void func_02118c14(void *, s32, s32, u32);
extern void func_02008e68(s32, void *, u32);
extern void func_0210afcc(void *);
extern void func_021167ac(void *, s32);
extern void func_0210dae0(void *);
extern u32 data_02155c18[];
extern u8 data_02162618[];
extern u8 data_02162624[];
extern u8 data_02162648[];
extern void func_02120bb0(void *);
static inline void call_bb0_0210b27c(u8 *field, void *data) { func_02120bb0(data); }
extern u8 *func_02120fe4(s32, s32);
extern u8 *func_02120b8c(void *, u8 *, u32);

typedef struct {
    u16 bit0 : 1;
    u16 bit1 : 1;
    u16 bit2 : 1;
    u16 bit3 : 1;
    u16 bit4 : 1;
    u16 bit5 : 1;
    u16 bit6 : 1;
    u16 bit7 : 1;
    u16 bit8 : 1;
    u16 pad9 : 7;
} Flags_0210afcc;

typedef struct {
    u8 pad[0x80];
    u16 arr[0x10];
    u16 pad_a0;
    u16 unkA2;
    Flags_0210afcc flags;
} Unk_0210afcc;
typedef struct { u8 pad[0x100]; Unk_0210afcc sub; } Unk_0210b300;

extern void func_0210b300();
extern u8 data_02170248[];
extern void func_02120754(void *,s32,s32,u32);
extern void func_021205ec(u32,const void *,u32);
extern void func_0211e078(void *);
s32 func_0210a7e4(void *arg0,s32 arg1,s32 arg2) {
void *allocation; u32 *p=arg0; u32 zero; u32 *info; u32 extra; u32 size; u8 name[256];
func_02005e80(name,data_02155c00,arg1);
zero=0;info=0;extra=0;
allocation=func_0210ab44(&info,(s32)name,(s32)&size);
if(!allocation)return zero;
if(!func_02117878(allocation,&extra))extra=zero;
func_02006dc4(info[3],info[2]);
if(arg2==0) {
p[5]=func_0210f20c(name,(size+3)&~3,size<=8,zero);
if(p[5]==0) {
data_02156154(p[5]);
if(allocation)func_0210c5dc(allocation);
return 0;
}
p[6]=(u16)p[5]*8;
func_0210e3dc();
if(extra)func_02118d0c(info,extra,p[6],zero,(u32)p);
else func_02118c14(info,p[6],zero,(u32)p);
if(func_0211860c(p,zero))p[7]=func_02118600(p,zero);
} else {
if(extra)func_02118d0c(info,extra,0,arg2,(u32)p);
else func_02118c14(info,0,arg2,(u32)p);
}
if(allocation)func_0210c5dc(allocation);
return 1;
}

void *func_0210a984(s32 arg0, s32 arg1) {
    void *p;
    void *obj;
    s32 ret;
    obj = func_0210eb98(data_02155c08, arg0);
    ret = func_0210f3ec(obj, arg1);
    if (ret != 0) {
        goto done;
    }
    p = func_0210a7b4();
    if (p == NULL) {
        ret = 0;
        goto done;
    }
    if (func_0210a7e4(p, arg0, 0) == 0) {
        if (p != NULL) {
            func_0210c5dc(p);
        }
        ret = 0;
        goto done;
    }
    func_0210f3ac(func_0210eb98(data_02155c10, arg0), p, arg1);
    *(s32 *)((u8 *)p + 0x20) = arg1;
    ret = (s32)p;
done:
    return (void *)ret;
}

void func_0210aa14(void *arg0) {
    void *p;
    if (arg0 == NULL) {
        return;
    }
    if (*(s32 *)((u8 *)arg0 + 0x20) != 0) {
        return;
    }
    p = *(void **)((u8 *)arg0 + 0x14);
    if (p != NULL) {
        ((void (*)(void *))data_0215615c)(p);
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_0210aa5c(void *arg0, s32 arg1, s32 arg2) {
    void *p;
    p = func_02109b14(arg1, arg2);
    if (p != NULL) {
        if (func_02109f84(p) == 0) {
            if (func_021178d4(p, arg0) == 0) {
                if (p != NULL) {
                    func_0210c5dc(p);
                    p = NULL;
                }
            }
        } else {
            *(void **)arg0 = (u8 *)func_02117904(p, 0x4e534352) + 8;
        }
    }
    return p;
}

void *func_0210aad0(void *arg0, s32 arg1, s32 arg2) {
    void *p;
    p = func_02109b14(arg1, arg2);
    if (p != NULL) {
        if (func_02109f84(p) == 0) {
            if (func_02117774(p, arg0) == 0) {
                if (p != NULL) {
                    func_0210c5dc(p);
                    p = NULL;
                }
            }
        } else {
            *(void **)arg0 = (u8 *)func_02117904(p, 0x43484152) + 8;
        }
    }
    return p;
}

void *func_0210ab44(void *arg0, s32 arg1, s32 arg2) {
    void *p;
    p = func_02109b14(arg1, arg2);
    if (p != NULL) {
        if (func_02109f84(p) == 0) {
            if (func_0211783c(p, arg0) == 0) {
                if (p != NULL) {
                    func_0210c5dc(p);
                    p = NULL;
                }
            }
        } else {
            *(void **)arg0 = (u8 *)func_02117904(p, 0x504c5454) + 8;
        }
    }
    return p;
}

void *func_0210abb8(void *arg0, s32 arg1, s32 arg2) {
    void *p;
    p = func_02109b14(arg1, arg2);
    if (p != NULL) {
        if (func_02109f84(p) == 0) {
            if (func_02117674(p, arg0) == 0) {
                if (p != NULL) {
                    func_0210c5dc(p);
                    p = NULL;
                }
            }
        } else {
            *(void **)arg0 = (u8 *)func_02117904(p, 0x4345424b) + 8;
        }
    }
    return p;
}

void *func_0210ac2c(void *arg0, s32 arg1, s32 arg2) {
    void *p;
    p = func_02109b14(arg1, arg2);
    if (p != NULL) {
        if (func_02109f84(p) == 0) {
            if (func_021174e4(p, arg0) == 0) {
                if (p != NULL) {
                    func_0210c5dc(p);
                    p = NULL;
                }
            }
        } else {
            *(void **)arg0 = (u8 *)func_02117904(p, 0x41424e4b) + 8;
        }
    }
    return p;
}

void *func_0210aca0(void *arg0, s32 arg1, s32 arg2) {
    void *p;
    p = func_02109b14(arg1, arg2);
    if (p != NULL) {
        if (func_02109f84(p) == 0) {
            if (func_02117774(p, arg0) == 0) {
                if (p != NULL) {
                    func_0210c5dc(p);
                    p = NULL;
                }
            }
        } else {
            *(void **)arg0 = (u8 *)func_02117904(p, 0x43484152) + 8;
        }
    }
    return p;
}

extern s32 func_021177c0(void *, void *);
void *func_0210ad14(void *arg0, s32 arg1, s32 arg2) {
    void *p;
    p = func_02109b14(arg1, arg2);
    if (p != NULL) {
        if (func_02109f84(p) == 0) {
            if (func_021177c0(p, arg0) == 0) {
                if (p != NULL) {
                    func_0210c5dc(p);
                    p = NULL;
                }
            }
        } else {
            *(void **)arg0 = (u8 *)func_02117904(p, 0x43484152) + 8;
        }
    }
    return p;
}

s32 func_0210ad88(u32 arg0, u32 *arg1, s32 arg2) {
    u32 *vram;
    if ((u32)(arg2 == 0) == 0) {
        func_02006dc4(arg1[5], arg1[4]);
        if (arg2 == 1) {
            vram = func_0210a4b4();
        } else {
            vram = func_0210a4c0();
        }
        if (arg1[2] == 0) {
            func_0211883c(arg1, *vram, arg2, arg0);
        } else {
            func_02118624(arg1, *vram, arg2, arg0);
        }
        *vram += arg1[4];
    }
    return 1;
}

extern u32 func_0210f170(void *, u32, s32, s32);
extern void func_0210e3dc(void);
extern s32 func_021185c0(void *, s32);
extern u32 func_021185b8(void *, s32);
s32 func_0210ae0c(u32 *arg0, u32 *arg1, void *arg2) {
    u32 val;
    func_02006dc4(arg1[5], arg1[4]);
    val = func_0210f170(arg2, arg1[4], 0, 0);
    arg0[9] = val;
    if (val == 0) {
        return 0;
    }
    arg0[10] = (u16)val << 3;
    func_0210e3dc();
    if (arg1[2] == 0) {
        u32 addr = 0;
        func_0211883c(arg1, arg0[10], 0, (u32)arg0);
        if (func_021185c0(arg0, 0) != 0) {
            addr = func_021185b8(arg0, 0);
        }
        arg0[11] = (addr >> 3) | (arg0[5] << 26) | 0x40000000 | (arg0[3] << 20) | (arg0[4] << 23) | (arg0[7] << 29);
    } else {
        func_02118624(arg1, arg0[10], 0, (u32)arg0);
    }
    return 1;
}

s32 func_0210aee0(u32 arg0, u32 *arg1, s32 arg2, void *arg3) {
    if ((u32)(arg2 == 0) == 0) {
        u32 sp4 = 0;
        if (func_02117878(arg3, &sp4) == 0) {
            sp4 = 0;
        }
        func_02006dc4(arg1[3], arg1[2]);
        if (sp4 != 0) {
            func_02118d0c(arg1, sp4, 0, arg2, arg0);
        } else {
            func_02118c14(arg1, 0, arg2, arg0);
        }
    }
    if (arg3 != NULL) {
        func_0210c5dc(arg3);
    }
    return 1;
}

void func_0210af80(void) {
    func_0210b300();
}

void *func_0210af8c(void) {
    void *p = func_0210c518(0x1bc, data_02155c3c);
    func_02008e68(0, p, 0x1bc);
    func_0210afcc(p);
    return p;
}

void func_0210afcc(void *arg) {
    u8 *arg0 = arg;
    Unk_0210afcc *s = (Unk_0210afcc *)(arg0 + 0x100);
    void *cb = func_0210af80;
    u32 v = 0x3e7;
    s32 i;
    s->flags.bit3 = 0;
    s->flags.bit1 = 0;
    s->flags.bit2 = s->flags.bit1;
    *(u32 *)(arg0 + 0x104) = 0x1000;
    *(u8 *)(arg0 + 0x128) = 0;
    s->flags.bit0 = 1;
    *(u32 *)(arg0 + 0x12c) = 0;
    *(u32 *)(arg0 + 0x130) = 2;
    *(u8 *)(arg0 + 0x134) = 0;
    *(u8 *)(arg0 + 0x135) = 0x1f;
    *(u32 *)(arg0 + 0x138) = 0;
    *(volatile u16 *)((u8 *)s + 0xa4) &= ~0x100;
    *(void **)(arg0 + 0x1a8) = cb;
    s->unkA2 = v;
    for (i = 0; i < 0x10; i++) {
        *(u16 *)(arg0 + 0x180 + i * 2) = v;
    }
}

void func_0210b080(u8 *arg0) {
    void **p;
    func_0210b0ac(arg0);
    p = func_0210c518(0xc, data_02155c3c);
    *p = arg0;
    func_0210b848(p);
}

extern void func_0211cac0(u8 *, u32);
extern void func_0211cd78(u8 *);
extern s32 func_0211783c(void *, void *);
extern s32 func_02117674(void *, void *);
extern s32 func_021174e4(void *, void *);
void func_0210b0ac(u8 *arg0) {
    func_0211cac0(arg0, *(u32 *)(arg0 + 0x54));
    func_0211cd78(arg0);
}

s32 func_0210b0c8(u8 *arg0, s32 arg1) {
    u8 *x;
    s32 ret;
    ret = 0;
    x = func_02120fe4(arg1, 0);
    if (x != NULL) {
        u8 *y = func_02120b8c(data_02162648, x, *(u32 *)(arg0 + 0x54));
        *(u8 **)(arg0 + 0xfc) = y;
        func_0211ca28(y, x, *(u32 *)(arg0 + 0x54), *(u32 *)(arg0 + 0x58));
        func_0211cc30(arg0, *(u8 **)(arg0 + 0xfc));
        *(u32 *)(arg0 + 0x120) = arg1;
        ret = 1;
    }
    return ret;
}

s32 func_0210b130(u8 *arg0, s32 arg1) {
    u8 *x;
    s32 ret;
    ret = 0;
    x = func_02120fe4(arg1, 0);
    if (x != NULL) {
        u8 *y = func_02120b8c(data_02162648, x, *(u32 *)(arg0 + 0x54));
        *(u8 **)(arg0 + 0x100) = y;
        func_0211ca28(y, x, *(u32 *)(arg0 + 0x54), *(u32 *)(arg0 + 0x58));
        func_0211cc30(arg0, *(u8 **)(arg0 + 0x100));
        *(u32 *)(arg0 + 0x124) = arg1;
        ret = 1;
    }
    return ret;
}

void func_0210b198(u8 *arg0, u16 arg1, u32 arg2, s32 arg3, s32 arg4) {
    if (*(u32 **)(arg0 + 0xfc) != NULL) {
        Unk_0210afcc *s = (Unk_0210afcc *)(arg0 + 0x100);
        if (!s->flags.bit3) {
            s->flags.bit3 = 1;
            s->flags.bit5 = (u16)arg3;
            s->unkA2 = arg1;
            s->flags.bit7 = (u16)arg4;
            **(u32 **)(arg0 + 0xfc) = arg2;
        }
    }
    if (*(u32 **)(arg0 + 0x100) != NULL) {
        Unk_0210afcc *s = (Unk_0210afcc *)(arg0 + 0x100);
        if (!s->flags.bit4) {
            *(u16 *)&s->flags |= 0x10;
            s->flags.bit3 = 1;
            s->flags.bit5 = (u16)arg3;
            s->unkA2 = arg1;
            s->flags.bit7 = (u16)arg4;
            **(u32 **)(arg0 + 0x100) = arg2;
        }
    }
}

extern void func_0211cd24(u8 *, u8 *);
extern void func_02120bb0(void *);
u8 *func_0210b27c(u8 *arg0, s32 arg1) {
    if (*(u8 **)(arg0 + 0xfc) != NULL) {
        func_0211cd24(arg0, *(u8 **)(arg0 + 0xfc));
    }
    if (*(u8 **)(arg0 + 0x100) != NULL) {
        func_0211cd24(arg0, *(u8 **)(arg0 + 0x100));
    }
    if (arg1 != 0) {
        if (*(u8 **)(arg0 + 0xfc) != NULL) {
            ((void (*)(void *, u8 *))func_02120bb0)(data_02162648, *(u8 **)(arg0 + 0xfc));
        }
        if (*(u8 **)(arg0 + 0x100) != NULL) {
            ((void (*)(void *, u8 *))func_02120bb0)(data_02162648, *(u8 **)(arg0 + 0x100));
        }
    }
    {
        u8 *p = arg0 + 0x100;
        *(volatile u16 *)(p + 0xa4) &= ~8;
        *(volatile u16 *)(p + 0xa4) &= ~0x10;
        return p;
    }
}

void func_0210b300(u8 *p) {
u32 zero=0; s32 *anim; u8 *model; u32 scale[3]; u32 attr;

if(!((Unk_0210b300 *)p)->sub.flags.bit0)return;
anim=(*(s32 ***)(p+0x140))[((Unk_0210b300 *)p)->sub.unkA2];
if(anim && ((Unk_0210b300 *)p)->sub.flags.bit3) {
if(*(void **)(p+0x1b0)) {(*(void (**)(u32))(p+0x1b0))(*(u32 *)(p+0x1ac));*(u32 *)(p+0x1b0)=zero;}
if(!((Unk_0210b300 *)p)->sub.flags.bit7) {
s32 end=(*(u16 *)((u8 *)anim[2]+4)<<12);
anim[0]+=*(s32 *)(p+0x104);
if(anim[0]>=end) {
if(((Unk_0210b300 *)p)->sub.flags.bit5)anim[0]=zero;
else {func_0210b27c(p,zero);if(*(void **)(p+0x1b4)) {(*(void (**)(u32))(p+0x1b4))(*(u32 *)(p+0x1ac));*(u32 *)(p+0x1b4)=zero;}}
}
} else {
anim[0]-=*(s32 *)(p+0x104);
if(anim[0]<=0) {
if(((Unk_0210b300 *)p)->sub.flags.bit5)anim[0]=*(u16 *)((u8 *)anim[2]+4)<<12;
else {func_0210b27c(p,zero);if(*(void **)(p+0x1b4)) {(*(void (**)(u32))(p+0x1b4))(*(u32 *)(p+0x1ac));*(u32 *)(p+0x1b4)=zero;}}
}
}
}
model=*(u8 **)(p+0x108);
if(model) {
func_02120754(model,0,0,*(u32 *)(p+0x10c));
scale[2]=scale[1]=scale[0]=*(u32 *)(*(u8 **)(model+4)+0x1c);
func_021205ec(0x1b,scale,3);
}
func_021205ec(0x17,data_02170248,12);
zero=*(u32 *)(p+0x130);
attr=((*(u32 *)(p+0x12c)<<4)|*(s8 *)(p+0x128)|(zero<<6)|*(u32 *)(p+0x138))|(*(s8 *)(p+0x134)<<24)|(*(s8 *)(p+0x135)<<16);
func_021205ec(0x29,&attr,1);
func_0211e078(p);
}

static inline void FreeArrays_0210b4cc(u8 *p, s32 count) { s32 i;
i=0;

for(;i<count;i++) {
if((*(void ***)(p+0x140))[i]) {((void (*)(void *,void *))func_02120bb0)(data_02162648,(*(void ***)(p+0x140))[i]);(*(void ***)(p+0x140))[i]=0;}
if((*(void ***)(p+0x144))[i]) {((void (*)(void *,void *))func_02120bb0)(data_02162648,(*(void ***)(p+0x144))[i]);(*(void ***)(p+0x144))[i]=0;}
if((*(void ***)(p+0x148))[i]) {((void (*)(void *,void *))func_02120bb0)(data_02162648,(*(void ***)(p+0x148))[i]);(*(void ***)(p+0x148))[i]=0;}
if((*(void ***)(p+0x14c))[i]) {((void (*)(void *,void *))func_02120bb0)(data_02162648,(*(void ***)(p+0x14c))[i]);(*(void ***)(p+0x14c))[i]=0;}
if((*(void ***)(p+0x150))[i]) {((void (*)(void *,void *))func_02120bb0)(data_02162648,(*(void ***)(p+0x150))[i]);(*(void ***)(p+0x150))[i]=0;}
if((*(void ***)(p+0x154))[i]) {func_0210c5dc((*(void ***)(p+0x154))[i]);(*(void ***)(p+0x154))[i]=0;}
if((*(void ***)(p+0x158))[i]) {func_0210c5dc((*(void ***)(p+0x158))[i]);(*(void ***)(p+0x158))[i]=0;}
if((*(void ***)(p+0x15c))[i]) {func_0210c5dc((*(void ***)(p+0x15c))[i]);(*(void ***)(p+0x15c))[i]=0;}
if((*(void ***)(p+0x160))[i]) {func_0210c5dc((*(void ***)(p+0x160))[i]);(*(void ***)(p+0x160))[i]=0;}
if((*(void ***)(p+0x164))[i]) {func_0210c5dc((*(void ***)(p+0x164))[i]);(*(void ***)(p+0x164))[i]=0;}
}
}
void func_0210b4cc(u8 *p)
{
  s32 count;
  long i;
  u8 *new_var;
  if ((*((void **) (p + 0x118))) && (!func_02109f84(*((void **) (p + 0x118)))))
  {
    s32 zero = 0;
    func_02120a68(*((void **) (p + 0x118)));
  }
  Set34_0210b4cc((Header_0210b4cc *) p, 0);
  Set38_0210b4cc((Header_0210b4cc *) p, 0);
  if (*((void **) (p + 0xfc)))
  {
    func_0211cd24(p, *((void **) (p + 0xfc)));
  }
  func_0211cd78(p);
  if (*((void **) (p + 0x100)))
  {
    func_0211cd24(p, *((void **) (p + 0x100)));
  }
  func_0211cd78(p);
  i = 0;
  count = p[0x13c];
  for (; i < count; i++)
  {
    if ((*((void ***) (p + 0x140)))[i])
    {
      ((void (*)(void *, void *)) func_02120bb0)(data_02162648, (*((void ***) (p + 0x140)))[i]);
      (*((void ***) (p + 0x140)))[i] = 0;
    }
    if ((*((void ***) (p + 0x144)))[i])
    {
      ((void (*)(void *, void *)) func_02120bb0)(data_02162648, (*((void ***) (p + 0x144)))[i]);
      (*((void ***) (p + 0x144)))[i] = 0;
    }
    if ((*((void ***) (p + 0x148)))[i])
    {
      ((void (*)(void *, void *)) func_02120bb0)(data_02162648, (*((void ***) (p + 0x148)))[i]);
      (*((void ***) (p + 0x148)))[i] = 0;
    }
    new_var = p;
    if ((*((void ***) (p + 0x14c)))[i])
    {
      ((void (*)(void *, void *)) func_02120bb0)(data_02162648, (*((void ***) (p + 0x14c)))[i]);
      (*((void ***) (p + 0x14c)))[i] = 0;
    }
    if ((*((void ***) (p + 0x150)))[i])
    {
      ((void (*)(void *, void *)) func_02120bb0)(data_02162648, (*((void ***) (p + 0x150)))[i]);
      (*((void ***) (p + 0x150)))[i] = 0;
    }
    if ((*((void ***) (p + 0x154)))[i])
    {
      func_0210c5dc((*((void ***) (p + 0x154)))[i]);
      (*((void ***) (p + 0x154)))[i] = 0;
    }
    if ((*((void ***) (new_var + 0x158)))[i])
    {
      func_0210c5dc((*((void ***) (p + 0x158)))[i]);
      (*((void ***) (p + 0x158)))[i] = 0;
    }
    if ((*((void ***) (p + 0x15c)))[i])
    {
      func_0210c5dc((*((void ***) (p + 0x15c)))[i]);
      (*((void ***) (p + 0x15c)))[i] = 0;
    }
    if ((*((void ***) (p + 0x160)))[i])
    {
      func_0210c5dc((*((void ***) (p + 0x160)))[i]);
      (*((void ***) (p + 0x160)))[i] = 0;
    }
    if ((*((void ***) (p + 0x164)))[i])
    {
      func_0210c5dc((*((void ***) (p + 0x164)))[i]);
      (*((void ***) (p + 0x164)))[i] = 0;
    }
  }

  if (*((void **) (p + 0x140)))
  {
    func_0210c5dc(*((void **) (p + 0x140)));
    *((void **) (p + 0x140)) = 0;
  }
  if (*((void **) (p + 0xfc)))
  {
    func_0210c5dc(*((void **) (p + 0xfc)));
    *((void **) (p + 0xfc)) = 0;
  }
  if (*((void **) (p + 0x100)))
  {
    func_0210c5dc(*((void **) (p + 0x100)));
    *((void **) (p + 0x100)) = 0;
  }
  if (*((void **) (p + 0x118)))
  {
    func_0210c5dc(*((void **) (p + 0x118)));
    *((void **) (p + 0x118)) = 0;
  }
  if (*((void **) (p + 0x11c)))
  {
    func_0210c5dc(*((void **) (p + 0x11c)));
    *((void **) (p + 0x11c)) = 0;
  }
  if (*((void **) (p + 0x120)))
  {
    func_0210c5dc(*((void **) (p + 0x120)));
    *((void **) (p + 0x120)) = 0;
  }
  if (*((void **) (p + 0x124)))
  {
    func_0210c5dc(*((void **) (p + 0x124)));
    *((void **) (p + 0x124)) = 0;
  }
  if (p)
  {
    func_0210c5dc(p);
  }
}

extern void func_021167ac(void *, s32);
extern void func_0210dae0(void *);
extern u32 data_02155c18[];
extern u8 data_02162618[];
extern u8 data_02162624[];
extern u8 data_02162648[];
extern u8 *func_02120fe4(s32, s32);
extern u8 *func_02120b8c(void *, u8 *, u32);
void func_0210b750(u32 arg0) {
    u32 f;
    func_021167ac(data_02162624 - 0xc, 4);
    f = data_02155c18[0];
    if (f == 0) {
        f = (u32)func_0210af80;
        data_02155c18[0] = f;
    }
    *(u32 *)(data_02162618 + 0xc) = f;
    *(u32 *)(data_02162618 + 0x10) = arg0;
    func_0210dae0(data_02162624);
}

