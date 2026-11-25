/* 33 functions from 0x021098AC to 0x0210A7E4 (main), found by ds-decomp. */
#include "common.h"
extern u8 data_02155be0[], data_02155be8[];
extern u32 func_02016da4(const char *);
extern void func_02005e80(void *, void *, ...);
extern void *func_0210aad0(u32 **, void *, u32 *);
extern void *func_0210aca0(u32 **, void *, u32 *);
extern u32 func_0210f170(void *, u32, u32, u32);
extern void func_0210e3dc(u32);
extern void func_0211883c(u32 *, u32, u32, u32 *);
extern void func_02118624(u32 *, u32, u32, u32 *);
extern u32 func_021185c0(u32 *, u32);
extern u32 func_021185b8(u32 *, u32);

extern u8 data_02162610[64];

extern s32 func_0210a38c();
extern void func_0210a014(void);
extern u32 data_0216256c[];
extern void func_021167ac(void *, s32);
extern void func_0210a2f0(u8 *);
extern s32 func_0210a348(u8 *, s32);
extern s32 func_0210a30c(u32 *, u32, s32);
extern s32 func_0210a3d8(u8 *, u8 *, s32);
extern void *func_0210c518(u32, void *);
extern void func_02006dc4(void *, u32);
extern void func_021168f8(void *, void *);
extern void func_0210c674(void *);
extern void func_0210c5dc(void *);
extern void *func_02109f3c(void);
extern void func_02109ea8(void *);
extern void *data_02155c3c;
extern u32 data_02162564[];
extern u32 func_0210a498(u32 *);

extern void func_02109c54(u8 *);
extern void func_0200b888(void *);
extern void func_0200bc08(void *, void *);
extern u32 func_0200bc18(void *);
extern void func_0200bb3c(void *, void *, u32);
extern void func_0200baa4(void *);
extern void *func_0210c594(u32, void *);
extern void func_02118594(void);
extern void *func_02109fac(void *);
extern u8 data_02155bb0[];
extern u8 data_02155bc0[];
extern u8 data_02155bd0[];
extern u8 data_02162578[];
extern u8 data_02162580[];
extern u8 data_021625c8[];
extern void func_021185d4(void *);
extern s32 func_0210a0f4(s32, void *, void *);
extern u32 func_02007904(void);
extern void func_0200bb10(void *, u32, u32);
extern void func_021091b4(void);
typedef struct Unk_0210a39c {
    u32 field_0;
    u32 field_4;
    u32 field_8;
} Unk_0210a39c;
extern s32 func_0210a39c(u32 *, s32, u32 *);

void *func_02109fac(void *arg0) {
    register u8 *buf asm("r5");
    register void *src asm("r4") = arg0;
    u8 stack[0x48];
    u32 size;
    void *p;
    buf = stack;
    func_0200b888(buf);
    func_0200bc08(buf, src);
    size = func_0200bc18(buf);
    p = func_0210c594(size, data_02155c3c);
    func_0200bb3c(buf, p, size);
    func_0200baa4(buf);
    return p;
}

void func_0210a014(void) {
    void *p = ((void *(*)(void *, u32))func_02109fac)(data_02155bb0, 0);
    void *a;
    *(u32 *)(data_02162578 + 4) = (u32)p;
    *(u32 *)(data_02162578 + 0) = *(u32 *)p;
    a = data_021625c8;
    func_0200b888(a);
    func_0200bc08(a, data_02155bc0);
    a = data_02162580;
    func_0200b888(a);
    func_0200bc08(a, data_02155bd0);
}

u32 func_0210a080(const s8 *s, u32 mask) {
 u32 ch;
 u32 c=*s++;
 if(c==92) c=47;
 if(c>=65 && c<=90) c+=32;
 if(c==47) c=0;
 while(*s) {
 ch=*s++;
 if(ch==92) ch=47;
 if(ch>=65 && ch<=90) ch+=32;
 c=37*c+ch;
 }
 return c&(mask-1);
}

s32 func_0210a0f4(s32 arg0, void *out1, void *out2) {
    u8 buf[8];
    u8 *e = buf;
    const u8 *name = (const u8 *)arg0;
    u32 len, idx, w0, flag;
    u8 *table, *ent;
    u32 result = 0;

    e[6] = 0;
    e[7] = 0;
    len = func_02016da4((const char *)name);
    idx = func_0210a080((const s8 *)name, *(u32 *)data_02162578);
    table = *(u8 **)(data_02162578 + 4);
    ent = table + 8 + idx * 6;
    e[0] = ent[0];
    e[1] = ent[1];
    e[2] = ent[2];
    e[3] = ent[3];
    e[4] = ent[4];
    e[5] = ent[5];
    w0 = *(u32 *)e;
    flag = (w0 << 31) >> 31;
    if (flag == 0) {
        u32 w1 = *(u32 *)(e + 4);
        u32 a = (w0 << 6) >> 7;
        u32 b = w1 << 16;
        *(u32 *)out2 = a << 2;
        *(u32 *)out1 = (b >> 10) + (w0 >> 26);
        goto done;
    }
    {
        u8 *list = table + ((w0 << 6) >> 7);
        s32 count = *list;
        u32 w1 = *(u32 *)(e + 4);
        u32 offset = ((w1 << 16) >> 10) + (w0 >> 26);
        s32 i = result;
        u8 *p = list + 1;
        s32 matched = 0;
        if (count > 0) {
            for (;;) {
                u8 *data = p;
                u8 *pat = p + 4;
                if (i != 0) pat += 4;
                {
                    u8 c = *pat;
                    s32 ok = 1;
                    while (c != 0) {
                        u8 j = pat[1];
                        if (len <= j) {
                            ok = 0;
                        } else {
                            u8 ch = name[j];
                            if (ch == '\\') ch = '/';
                            if (ch >= 'A' && ch <= 'Z') ch = (ch + 0x20) & 0xff;
                            if (ch != c) ok = 0;
                        }
                        pat += 2;
                        c = *pat;
                    }
                    matched = ok;
                }
                if (matched != 0) {
                    u32 a = data[0] + (data[1] << 8) + (data[2] << 16) + (data[3] << 24);
                    if (i != 0) {
                        offset = data[4] + (data[5] << 8) + (data[6] << 16) + (data[7] << 24);
                    }
                    *(u32 *)out2 = a << 2;
                    *(u32 *)out1 = offset;
                    break;
                }
                p = pat + 1;
                i += 1;
                if (i >= count) break;
            }
            if (matched == 0) result = 1;
        }
    }
done:
    return result;
}

void func_0210a2f0(u8 *p) {
    u32 zero = 0;
    *(u32 *)p = ~zero;
    *(u32 *)(p + 4) = zero;
    *(u32 *)(p + 8) = zero;
    p[0xc] = zero;
}

s32 func_0210a30c(u32 *arg0,u32 arg1,s32 arg2) {
 switch(arg2) {
 case 1: arg0[0]+=arg1; break;
 case 0: arg0[0]=arg1; break;
 case 2: arg0[0]=arg0[2]-arg1; break;
 }
 return 1;
}

s32 func_0210a348(u8 *arg0, s32 arg1) {
    s32 result = 0;
    *(u32 *)arg0 = result;
    arg0[0xc] = result;
    if (func_0210a0f4(arg1, arg0 + 8, arg0 + 4) == 1) {
        return 0;
    }
    if (*(u32 *)(arg0 + 8) != 0) {
        result = 1;
    }
    return result;
}

s32 func_0210a38c(u8 *arg0) {
    *(s32 *)arg0 = -1;
    return 1;
}

s32 func_0210a39c(u32 *arg0, s32 arg1, u32 *arg2) {
    Unk_0210a39c *p = (Unk_0210a39c *)arg0;
    s32 ret = arg1;
    u32 sum = p->field_4 + p->field_0;
    *arg2 = sum;
    {
        u32 max = p->field_8;
        u32 cur = p->field_0;
        if (cur >= max) {
            ret = 0;
        } else {
            u32 next = cur + arg1;
            if (next > max) {
                p->field_0 = max;
                ret = max - cur;
            } else {
                p->field_0 = next;
            }
        }
    }
    return ret;
}

s32 func_0210a3d8(u8 *arg0, u8 *arg1, s32 arg2) {
    u32 local;
    u32 start = func_02007904();
    s32 avail = func_0210a39c((u32 *)arg0, arg2, &local);
    s32 written;
    if (avail <= 0) {
        return avail;
    }
    written = 0;
    for (;;) {
        func_0200bb10(data_021625c8, local, written);
        {
            u32 elapsed = func_02007904() - start;
            elapsed *= 0x40;
            u32 ticks = (u32)(((u64)elapsed * 0x7d269b01ULL) >> 46);
            if (ticks > 0x28) {
                func_021091b4();
                if (avail == 0) {
                    break;
                }
                {
                    s32 chunk = avail;
                    if (avail >= 0x800) {
                        chunk = 0x800;
                        avail -= 0x800;
                    } else {
                        avail = written;
                    }
                    func_0200bb3c(data_021625c8, arg1, chunk);
                    arg1 += chunk;
                    written += chunk;
                }
            } else {
                avail = written;
            }
        }
    }
    return written;
}

u32 func_0210a498(u32 *arg) {
    return arg[2];
}

void func_0210a4a0(void) {
    *(u32 *)(data_02162610 + 4) = 0;
}

extern u8 data_02162610[64];
void *func_0210a4b4(void) {
    return data_02162610;
}

extern u8 data_02162614[64];
void *func_0210a4c0(void) {
    return data_02162614;
}

void *func_0210a4cc(void) {
    u8 *p = func_0210c594(0x34, data_02155c3c);
    func_02118594();
    *(u32 *)(p + 0x24) = 0;
    return p;
}

s32 func_0210a4fc(void *arg0, s32 arg1, s32 arg2) {
u32 *p=arg0; void *allocation; u32 offset; u32 *info; u32 unused; u8 name[256];
if(arg2==0) {
func_02005e80(name,data_02155be0,arg1);
allocation=func_0210aad0(&info,name,&unused);
if(!allocation) return 0;
func_02006dc4((void *)info[5],info[4]);
offset=0;
p[9]=func_0210f170(name,info[4],offset,offset);
if(!p[9]) { if(allocation) func_0210c5dc(allocation); return 0; }
p[10]=(u16)p[9]*8;
func_0210e3dc(p[10]);
if(info[2]==0) {
func_0211883c(info,p[10],offset,p);
if(func_021185c0(p,offset)) offset=func_021185b8(p,offset);
p[11]=(offset>>3)|(p[5]<<26)|0x40000000|(p[3]<<20)|(p[4]<<23)|(p[7]<<29);
} else func_02118624(info,p[10],offset,p);
} else {
u32 *next;
func_02005e80(name,data_02155be8,arg1);
allocation=func_0210aca0(&info,name,&unused);
if(!allocation) return 0;
func_02006dc4((void *)info[5],info[4]);
next=(u32 *)data_02162610;
if(arg2!=1) next=(u32 *)data_02162614;
if(info[2]==0) func_0211883c(info,*next,arg2,p);
else func_02118624(info,*next,arg2,p);
*next+=info[4];
}
if(allocation) func_0210c5dc(allocation);
return 1;
}

extern u8 data_02155bf0[8];
extern u8 data_02155bf8[8];
extern void *func_0210eb98(void *, s32);
extern void *func_0210f3ec(void *, s32);
extern s32 func_0210a4fc(void *, s32, s32);
extern void func_0210f3ac(void *, void *, s32);
void *func_0210a6d8(s32 arg0) {
    void *r5 = func_0210f3ec(func_0210eb98(&data_02155bf0, arg0), 0);
    if (r5 == NULL) {
        r5 = ((void *(*)(void))func_0210a4cc)();
        if (r5 == NULL) {
            return NULL;
        }
        if (!func_0210a4fc(r5, arg0, 0)) {
            if (r5 != NULL) {
                func_0210c5dc(r5);
            }
            return NULL;
        }
        func_0210f3ac(func_0210eb98(&data_02155bf8, arg0), r5, 0);
        *(s32 *)((u8 *)r5 + 0x30) = 1;
    }
    return r5;
}

extern void *data_02156154;
void func_0210a76c(void *arg0) {
    void *p;
    if (arg0 == NULL) {
        return;
    }
    if (*(s32 *)((u8 *)arg0 + 0x30) != 0) {
        return;
    }
    p = *(void **)((u8 *)arg0 + 0x24);
    if (p != NULL) {
        ((void (*)(void *))data_02156154)(p);
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_0210a7b4(void) {
    u8 *p = func_0210c594(0x24, data_02155c3c);
    func_021185d4(p);
    *(u32 *)(p + 0x14) = 0;
    return p;
}

