/* 31 functions from 0x020AA464 to 0x020AB250 (main), found by ds-decomp. */
#include "common.h"
extern s32 (*const data_02143898[])(u8 *);
extern s32 (*const data_021438b0[])(u8 *);
extern s32 (*const data_0214388c[])(u8 *);
extern s32 (*const data_02143880[])(u8 *);
extern void *func_020abf3c(void);

typedef struct {
    u16 unk[10];
} Unk20;

typedef struct {
    u8 unk0[8];
    u32 count;
    u8 flag;
} UnkAae98;
extern const Unk20 data_0214386c;
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
extern u8 *func_020ade60(s32);
extern s32 func_020aab60(void *, s32, s32, s32, s32, s32);

extern void func_021168f8(void *, void *);
extern void func_020aa3e0(void *);
extern void *func_0210c594(u32, void *);
extern void func_021167ac(void *, s32);
extern void **data_021601d8;
extern void *data_021601dc;
extern void *data_02155c3c;
extern void *func_020a5f14(u8 *, u16);
extern s32 _s32_div_f(s32, s32);

extern void func_0210c5dc(void *);
extern u8 data_021500a8[32];
extern void *func_021092d8(void *);
extern s32 func_020f685c(void *, s32);
extern u8 *func_020aa3b0(void);
extern s32 func_02109444(void *);
extern u8 *func_020aa380(void);
extern void func_021167f0(void *, void *);
extern void func_021093b0(void *);
extern u16 data_021626a6;
extern u16 data_021626a8;
extern void func_0210d27c(s32);
extern void func_020ade8c(s32);
extern void func_020ade30();
extern s32 *func_020b442c(void);
extern void func_020aed5c(s32);
void func_020aa464(void) {
    void **list = data_021601d8;
    void *node;
    if (list == NULL) {
        return;
    }
    node = *list;
    while (node != NULL) {
        void *next = *(void **)((u8 *)node + 4);
        func_021168f8(list, node);
        func_020aa3e0(node);
        node = next;
    }
    if (data_021601d8 != NULL) {
        func_0210c5dc(data_021601d8);
    }
    data_021601d8 = NULL;
}

void *func_020aa4d0(s32 arg0) {
    u8 *node = (u8 *)*data_021601d8;
    while (node != NULL) {
        if (*(s16 *)(node + 0x14) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 4);
    }
    return NULL;
}

s32 func_020aa50c(void) {
    void *list = data_021601d8;
    void *file;
    if (list == NULL) {
        return 1;
    }
    file = func_021092d8(data_021500a8);
    if (file != NULL) {
        do {
            s16 a = func_020f685c(file, 0);
            s16 count = func_020f685c(file, 0);
            if (a != 0 && count != 0) {
                u8 *node = func_020aa3b0();
                s16 i;
                *(s16 *)(node + 0x14) = a;
                for (i = 0; i < count; i++) {
                    s32 v1;
                    s32 v2;
                    u8 *item;
                    func_02109444(file);
                    v1 = func_020f685c(file, 0);
                    v2 = func_020f685c(file, 1);
                    item = func_020aa380();
                    *(s16 *)(item + 8) = v1;
                    *(s16 *)(item + 0xa) = v2;
                    func_021167f0(node + 8, item);
                }
                func_021167f0(list, node);
            }
        } while (func_02109444(file) != 0);
    }
    if (file != NULL) {
        func_021093b0(file);
    }
    return 0;
}

void *func_020aa61c(void) {
    void **p = &data_021601dc;
    if (*p != NULL) {
        return *p;
    }
    *p = func_0210c594(0xC, data_02155c3c);
    func_021167ac(*p, 4);
    return *p;
}

extern void func_020aa710(void *);
void func_020aa65c(void) {
    void *node;
    if (data_021601dc == NULL) {
        return;
    }
    while ((node = *(void **)data_021601dc) != NULL) {
        func_021168f8(data_021601dc, node);
        func_020aa710(node);
    }
    if (data_021601dc == NULL) {
        return;
    }
    func_0210c5dc(data_021601dc);
    data_021601dc = NULL;
}

void *func_020aa6bc(void *arg0) {
    void **node;
    if (data_021601dc == NULL) {
        func_020aa61c();
    }
    node = func_0210c594(0xC, data_02155c3c);
    *node = arg0;
    func_021167f0(data_021601dc, node);
    return node;
}

void func_020aa710(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_020aa724(void) {
    void *p = data_021601dc;
    if (p == NULL) {
        return NULL;
    }
    return *(void **)p;
}

void *func_020aa740(void) {
    void *ptr = func_0210c594(0xc, data_02155c3c);
    func_021167ac(ptr, 0x14);
    return ptr;
}

extern void func_021168f8(void *, void *);
extern void func_020aa3e0(void *);
extern void *func_0210c594(u32, void *);
extern void func_021167ac(void *, s32);
extern void **data_021601d8;
extern void *data_021601dc;
extern void *data_02155c3c;
void func_020aa76c(void **arg0) {
    void *ptr;
    if (arg0 == NULL) {
        return;
    }
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_020aa7c0(void *arg0, u16 arg1) {
    u16 *node = (u16 *)func_0210c594(0x1c, data_02155c3c);
    *node = arg1;
    func_021167f0(arg0, node);
    return node;
}

extern u8 *data_021600e4;
extern s32 func_020bdd40(void);
extern u16 *func_02103c6c(void *, s32);
extern void func_020aa894(void *);
void *func_020aa7fc(void **arg0) {
    if (arg0 == NULL) {
        return NULL;
    }
    if (*arg0 == NULL) {
        return NULL;
    }
    return *arg0;
}

u8 *func_020aa818(u8 **arg0, u16 arg1) {
    u8 *node;
    if (arg0 == NULL) {
        return NULL;
    }
    node = *arg0;
    while (node != NULL) {
        if (*(u16 *)node == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x18);
    }
    return NULL;
}

void func_020aa850(void) {
    u32 local;
    u8 *p = data_021600e4;
    u16 *r4 = func_02103c6c(&local, func_020bdd40());
    if (r4 != NULL) {
        void *list = func_020aa740();
        *(void **)(p + 0x13f4) = list;
        func_020aa894(func_020aa7c0(list, *r4));
    }
}

void func_020aa894(void *arg0) {
    u8 *p = data_021600e4;
    u8 *node = func_020aa7fc(*(void **)(p + 0x13f4));
    while (node != NULL) {
        u8 *src = func_020a5f14(p + 0x124, *(u16 *)node);
        if (src != NULL) {
            *(s32 *)(node + 4) = *(s16 *)(src + 6);
            *(s32 *)(node + 8) = *(s16 *)(src + 8);
        }
        node = *(u8 **)(node + 0x18);
    }
}

void func_020aa8e8(void)
{
    u8 *p = data_021600e4;
    u8 *node = func_020aa7fc(*(void **)(p + 0x13f4));
    if (node == NULL) return;
    do {
        s32 scale = *(s32 *)(p + 0x70);
        s32 a = scale * *(s32 *)(node + 4);
        s32 b = scale * *(s32 *)(node + 8);
        *(u16 *)(node + 0x10) = *(s32 *)(p + 0x44) + (a - 0x20);
        *(u16 *)(node + 0x12) = *(s32 *)(p + 0x48) + (b + 0xc);
        node = *(u8 **)(node + 0x18);
    } while (node != NULL);
}

void func_020aa94c(void) {
    u8 *p = data_021600e4;
    Unk20 buf = data_0214386c;
    u8 *node;

    *(volatile u32 *)0x040004A4 = 0x001F00C0;
    func_020a3bbc(0xa);
    node = func_020aa7fc(*(void **)(p + 0x13f4));
    while (node != NULL) {
        buf.unk[1] = 0;
        buf.unk[2] = 0;
        buf.unk[3] = 0x13;
        buf.unk[4] = 0x15;
        buf.unk[5] = *(s16 *)(node + 0x10) - 9;
        buf.unk[6] = *(s16 *)(node + 0x12) - 26;
        buf.unk[8] = 0x13;
        buf.unk[9] = 0x15;
        buf.unk[7] = 10;
        func_021098ac(&buf);
        node = *(u8 **)(node + 0x18);
    }
}

s32 func_020aaa20(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 ret;
    if (arg2 == 0) {
        return arg1;
    }
    if (arg3 <= 0) {
        return arg0;
    }
    if (arg3 >= arg2) {
        return arg1;
    } else {
        s32 delta = arg1 - arg0;
        ret = _s32_div_f(delta * arg3, arg2);
        ret += arg0;
        return ret;
    }
}

s32 func_020aaa60(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 done = 0;
    *arg0 = func_020aaa20(arg1 * 100, arg2 * 100, arg3, arg4) / 100;
    if (arg4 == arg3) {
        done = 1;
    }
    if (arg2 - arg1 > 0) {
        if (*arg0 >= arg2) {
            done = 1;
        }
    } else {
        if (*arg0 <= arg2) {
            done = 1;
        }
    }
    if (done != 0) {
        *arg0 = arg2;
        return 1;
    }
    return 0;
}

s32 func_020aaaec(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 done = 0;
    *arg0 = func_020aaa20(arg1, arg2, arg3, arg4);
    if (arg4 == arg3) {
        done = 1;
    }
    if (arg2 - arg1 > 0) {
        if (*arg0 >= arg2) {
            done = 1;
        }
    } else {
        if (*arg0 <= arg2) {
            done = 1;
        }
    }
    if (done != 0) {
        *arg0 = arg2;
        return 1;
    }
    return 0;
}

extern f32 func_0201f884(s32);
extern f32 func_020201f4(f32,f32), func_02020888(f32,f32), func_02020604(f32,f32), func_020203d4(f32,f32);
extern f64 func_0201f800(f32);
extern f64 func_0201dea0(f64), func_0201e518(f64);
extern f32 func_0201f114(f64);
extern s32 func_0201ff0c(f32);
s32 func_020aab60(void *out,s32 start,s32 end,s32 duration,s32 time,s32 mode){
s32 delta=end-start;
f32 factor;
if(delta<0)delta=-delta;
if(time<duration){
f32 t=func_0201f884(time);
t=func_02020888(t,func_0201f884(duration));
if(mode)factor=func_0201f114(func_0201e518(func_0201f800(func_020201f4(1.57079637f,t))));
else factor=func_02020604(1.0f,func_0201f114(func_0201dea0(func_0201f800(func_020201f4(1.57079637f,t)))));
if(start<end){
f32 a=func_0201f884(start);
*(s32 *)out=func_0201ff0c(func_020203d4(a,func_020201f4(func_0201f884(delta),factor)));
if(*(s32 *)out>=end){*(s32 *)out=end;return 1;}
}else{
f32 a=func_0201f884(start);
*(s32 *)out=func_0201ff0c(func_02020604(a,func_020201f4(func_0201f884(delta),factor)));
if(*(s32 *)out<=end){*(s32 *)out=end;return 1;}
}
}else {*(s32 *)out=end;return 1;}
return 0;
}

void func_020aac90(void) {
s32 zero=0;
u8 *p=func_020ade60(zero);
if(p[13]==0){
if(func_020aab60(p,256,zero,30,*(s32 *)(p+8),1)){
*(s32 *)(p+8)=60;
p[13]=1;
}else {*(s32 *)(p+8)+=1;}
}else if(p[13]==1){
if(*(s32 *)(p+8)>0) *(s32 *)(p+8)-=1;
else {*(s32 *)(p+8)=zero; p[13]=2;}
}else if(p[13]==2){
if(func_020aab60(p,zero,zero-100,30,*(s32 *)(p+8),zero)){
p[13]=zero; *(s32 *)(p+8)=zero;
}else {*(s32 *)(p+8)+=1;}
}
}

extern void func_020ade8c(s32);
void func_020aad6c(void) {
    func_020ade8c(1);
}

extern s32 func_020aaa20(s32, s32, s32, s32);
extern u8 *func_020ade60(s32);
extern s32 func_020aae98(void);
s32 func_020aad7c(void) {
    u8 *p = func_020ade60(1);
    if (func_020aaaec((s32 *)(p + 4), 0x39, 0, 4, *(s32 *)(p + 8)) != 0) {
        *(s32 *)(p + 8) = 0;
        return 1;
    }
    *(s32 *)(p + 8) += 1;
    return 0;
}

extern void *func_020a5f14(u8 *, u16);
extern s32 _s32_div_f(s32, s32);
void func_020aadd8(void) {
    func_020ade8c(1);
    func_020ade8c(2);
    func_020ade8c(3);
}

s32 func_020aadf8(void) {
    u8 *p2 = func_020ade60(2);
    u8 *p1;
    func_020aaa60(p2 + 0xc, 1, 0x1f, 4, *(s32 *)(p2 + 8));
    p1 = func_020ade60(1);
    func_020aaaec((s32 *)(p1 + 4), 0x39, 0, 4, *(s32 *)(p1 + 8));
    if (func_020aae98() != 0) {
        *(s32 *)(p1 + 8) = 0;
        *(s32 *)(p2 + 8) = 0;
        *(u8 *)(p2 + 0xc) = 1;
        *(u8 *)(p2 + 0xd) = 0;
        return 1;
    }
    *(u8 *)(p2 + 0xd) = 1;
    *(s32 *)(p2 + 8) += 1;
    *(s32 *)(p1 + 8) = *(s32 *)(p2 + 8);
    return 0;
}

#pragma push
#pragma optimization_level 2
s32 func_020aae98(void) {
    s32 *p = func_020ade60(3);
    if (((u8 *)p)[0xd] == 0) {
        if (func_020aaaec(p, -220, 0, 4, p[2]) != 0) {
            ((u8 *)p)[0xd] = 1;
            p[2] = 0;
            return 1;
        }
    }
    p[2]++;
    return 0;
}
#pragma pop
s32 func_020aaf08(void) {
 u8 *p=func_020ade60(4);
 if(p[13]!=0) {
 if(func_020aaa60(p+12,1,31,4,*(s32*)(p+8))) {
 p[13]=0; *(s32*)(p+8)=0; return 1;
 }}
 p[13]=2;
 ++*(s32*)(p+8);
 return p[13]-2;
}

BOOL func_020aaf88(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 v = *arg0 + arg1;
    *arg0 = v;
    if (v < arg2) {
        if (arg4 == 1) {
            if (arg3 == arg2) {
                *arg0 = arg2;
            } else {
                v = arg3 - 1;
                *arg0 = v;
            }
        } else if (arg4 == 2) {
            *arg0 = arg3 - (arg2 - v);
        } else {
            *arg0 = arg2;
        }
        return TRUE;
    }
    if (v < arg3) {
        goto fail;
    }
    if (arg4 == 1) {
        *arg0 = arg2;
    } else if (arg4 == 2) {
        *arg0 = arg2 + (v - arg3);
    } else if (arg3 == arg2) {
        *arg0 = arg2;
    } else {
        v = arg3 - 1;
        *arg0 = v;
    }
    return TRUE;
fail:
    return FALSE;
}

s32 func_020ab024(u8 *arg0) {
    s32 dir = 0;
    if (data_021626a6 & 0x80) {
        dir = 1;
    } else if (data_021626a6 & 0x40) {
        dir = -1;
    } else if (data_021626a8 & 1) {
        if (*(s32 *)(arg0 + 0x3438) == 2) {
            func_0210d27c(5);
            return 3;
        }
        func_0210d27c(0xb);
        func_020ade8c(0);
        return 1;
    } else if (data_021626a8 & 2) {
        func_0210d27c(5);
        *(s32 *)(arg0 + 0x3438) = 2;
        func_020ade30(2);
        return 3;
    }
    if (dir != 0) {
        func_0210d27c(2);
        *func_020b442c() = -1;
        func_020aaf88((s32 *)(arg0 + 0x3438), dir, 0, 3, 1);
        if (*(s32 *)(arg0 + 0x3438) == 2) {
            func_020aed5c(0);
        }
    }
    return 0;
}

s32 func_020ab140(u8 *p, u8 *state) {
 u8 next = *state;
 s32 result;
 if (*(s32 *)(p+0x343c) == 0) {
  if (*(s32 *)(p+0x3438) == 0) {
   result = data_02143898[next](&next);
   if (result == 0) result = data_021438b0[next](&next);
  } else {
   result = data_0214388c[next](&next);
   if (result == 0) result = data_02143880[next](&next);
  }
  if (next != *state) {
   func_020abf3c();
   *state = next;
  }
 }
 if (result == 4) return 4;
 if (result == 3) {func_020ade8c(0); return 3;}
 if (result == 2) *(s32 *)(p+0x343c) = 6;
 if (*(s32 *)(p+0x343c) > 0) --*(s32 *)(p+0x343c);
 else *(s32 *)(p+0x343c)=0;
 return 0;
}

