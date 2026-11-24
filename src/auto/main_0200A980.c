/* 20 functions from 0x0200A980 to 0x0200B8FC (main), found by ds-decomp. */
#include "common.h"
typedef struct CmdPair_0200a980 { u32 a,b; } CmdPair_0200a980;
typedef struct CmdTriple_0200a980 { u32 a,b,c; } CmdTriple_0200a980;
extern s32 func_0200a85c(s32);
extern s32 func_0200a928(void *, s32);

void func_0200b888(u32 *arg0);
u8 *func_0200b6b8(u8 *arg0);
extern s32 func_0200a980(void *, s32);
extern u32 func_02008128(void);
extern void func_02006560(void *);
extern void func_0200813c(u32);
extern void func_0200a884();
extern s32 func_0200ad00(void *, s32);
extern void func_0200aeac();
extern void func_02008f74(void *, s32, s32);
extern s32 func_020124a8(s32, u8 *, s8 *);
extern u8 *data_0215ed68;
extern char data_02145c00[];
s32 func_0200b810(const char *str, s32 pos);
s32 func_0200b844(char *str);
extern s8 data_0215ed78[0x100];
extern s32 func_02012348(const char *);
s32 func_0200b77c(const char *str, s32 pos);

s32 func_0200ad00(void *arg0, s32 arg1) {
    u8 *arc = arg0;
    u8 *ret = NULL;
    u32 irq;

    irq = func_02008128();
    if (*(u32 *)(arc + 0x14) & 0x20) {
        u8 *cur;
        *(u32 *)(arc + 0x14) &= ~0x20;
        cur = *(u8 **)(arc + 8);
        while (cur != NULL) {
            u8 *next = *(u8 **)cur;
            s32 flag = (*(volatile u32 *)(cur + 0xc) & 2) ? 1 : 0;
            if (flag && !(*(volatile u32 *)(cur + 0xc) & 0x40)) {
                func_0200a884(cur, 3);
                if (next == NULL) {
                    next = *(u8 **)(arc + 8);
                }
            }
            cur = next;
        }
    }
    func_0200813c(irq);

    irq = func_02008128();
    if (!(*(u32 *)(arc + 0x14) & 0x40) && !(*(u32 *)(arc + 0x14) & 8) && *(u8 **)(arc + 8) != NULL) {
        s32 do_activate = (arg1 != 0 && !(*(u32 *)(arc + 0x14) & 0x10));
        if (do_activate) {
            *(u32 *)(arc + 0x14) |= 0x10;
        }
        func_0200813c(irq);
        if (do_activate) {
            func_0200a980(*(u8 **)(arc + 8), 9);
        }
        irq = func_02008128();
        if (arg1 != 0 || do_activate != 0) {
            ret = *(u8 **)(arc + 8);
            *(u32 *)(ret + 0xc) |= 0x40;
        }
        if (arg1 != 0 && (*(volatile u32 *)(ret + 0xc) & 4)) {
            func_02006560(ret + 0x18);
            ret = NULL;
        }
    } else if (arg1 != 0) {
        if (*(u32 *)(arc + 0x14) & 0x10) {
            u32 tmp[0x48 / 4];
            func_0200b888(tmp);
            tmp[2] = (u32)arc;
            *(u32 *)(arc + 0x14) &= ~0x10;
            func_0200a980(tmp, 10);
        }
        if (*(u32 *)(arc + 0x14) & 0x40) {
            *(u32 *)(arc + 0x14) = (*(u32 *)(arc + 0x14) & ~0x40) | 8;
            func_02006560(arc + 0xc);
        }
    }
    func_0200813c(irq);
    return (s32)ret;
}

void func_0200aeac(u8 *arg0) {
    u8 *r4;
    u8 *cur;
    s32 r6;
    u8 *next;
    cur = arg0;
    r4 = *(u8 **)(cur + 8);
    if (cur == NULL) {
        return;
    }
    next = NULL;
    r6 = 1;
    for (;;) {
        u32 r8 = func_02008128();
        u32 t = *(u32 *)(cur + 0xc);
        t |= 0x40;
        *(u32 *)(cur + 0xc) = t;
        if (t & 4) {
            func_02006560(cur + 0x18);
            cur = next;
        }
        func_0200813c(r8);
        if (cur == NULL) {
            return;
        }
        if (func_0200a980(cur, (*(u32 *)(cur + 0xc) >> 8) & 0xff) == 0x100) {
            return;
        }
        cur = (u8 *)func_0200ad00(r4, r6);
        if (cur == NULL) {
            return;
        }
    }
}

void func_0200af30(u8 *s) {
    u32 r4 = func_02008128();
    while (!(*(u32 *)(s + 0xc) & 0x40) && (*(u32 *)(s + 0xc) & 1)) {
        func_02006510(s + 0x18);
    }
    func_0200813c(r4);
    if (!(*(u32 *)(s + 0xc) & 0x40)) {
        return;
    }
    u8 *r4b = *(u8 **)(s + 8);
    func_0200a884(s, func_0200a980(s, (*(volatile u32 *)(s + 0xc) >> 8) & 0xff));
    s32 next = func_0200ad00(r4b, 1);
    if (next == 0) {
        return;
    }
    func_0200aeac((void *)next);
}

s32 func_0200afb4(void *arg0,s32 arg1,s32 arg2) {
u8 *p=arg0;
u8 *arc;
u32 irq;
u32 zero=0;
s32 ret=zero;
arc=*(u8 **)(p+8);
u32 busy=(*(u32 *)(p+12)&1)?1:ret;
u8 *next;
if(busy) func_02008414();
if(!arc){*(s32 *)(p+20)=6; return 0;}
*(s32 *)(p+20)=2;
*(u32 *)(p+12)=(*(u32 *)(p+12)&~0xff00)|(arg1<<8);
*(u32 *)(p+12)|=1;
*(u32 *)p=zero;
if(arg2) *(u32 *)(p+12)|=4;
irq=func_02008128();
if(*(u32 *)(arc+20)&0x80) func_0200a884(p,3);
else {
u8 **tail=(u8 **)(arc+8);
while(*tail) tail=(u8 **)*tail;
*tail=p;
}
zero=0;
if(*(u8 **)(arc+8)==p && !(*(u32 *)(arc+20)&0x10)) zero=1;
func_0200813c(irq);
if(*(s32 *)(p+20)!=3) {
next=(u8 *)func_0200ad00(arc,zero);
if(arg2) {
func_0200af30(p);
ret=1;
if(*(s32 *)(p+20)!=0) ret=0;
} else {
if(next) func_0200aeac(next);
ret=1;
}
}
return ret;
}

u8 *func_0200b0ec(u8 *arg0, s8 *arg1) {
    u32 r6 = func_02008128();
    u8 *r7 = data_0215ed68;
    u32 r4 = 0;
    u32 r5 = 1;
    while (r7 != NULL) {
        u32 hit = (*(u32 *)(r7 + 0x14) & 2) ? r5 : r4;
        if (hit != 0) {
            s32 r10 = (s32)func_0200b6b8(r7);
            if (func_020124a8(r10, arg0, arg1) == 0 && arg1[r10] == 0) {
                break;
            }
        }
        r7 = *(u8 **)(r7 + 4);
    }
    func_0200813c(r6);
    return r7;
}

extern u8 data_0215ee78[0x104];
extern u8 *func_0200b2ac(const char *, u32 *, u8 *);
extern void func_02012244(void *, void *, s32);
extern s32 func_0200afb4(void *, s32, s32);
s32 func_0200b178(const char *arg0) {
    s32 ret = 0;
    u8 path[0x104];
    u8 file[0x48];
    u32 sp4[4];
    u32 sp0 = 0;
    u8 *arc;

    arc = func_0200b2ac(arg0, &sp0, path);
    if (arc != NULL) {
        *(u8 **)((u8 *)&data_0215ed68 + 4) = arc;
        *(u16 *)((u8 *)&data_0215ed68 + 8) = 0;
        *(u16 *)((u8 *)&data_0215ed68 + 0xa) = 0;
        *(u32 *)((u8 *)&data_0215ed68 + 0xc) = 0;
        func_02012244(data_0215ee78, path, 0x104);
        if (*(u32 *)(*(u8 **)(arc + 0x24) + 0x10) != 0) {
            func_0200b888((u32 *)file);
            *(u8 **)(file + 8) = arc;
            *(u32 **)(file + 0x10) = sp4;
            sp4[0] = sp0;
            sp4[1] = (u32)path;
            sp4[3] = 1;
            if (func_0200afb4(file, 4, 1) != 0) {
                *(u16 *)((u8 *)&data_0215ed68 + 8) = sp4[2];
                func_02012244(data_0215ee78, path, 0x104);
            }
        }
        ret = 1;
    }
    return ret;
}

s32 func_0200b24c(char *dst, s32 dst_len, const char *src, s32 src_len, s32 *truncated) {
    s32 i;
    s32 max_len = (dst_len - 1 < src_len) ? (dst_len - 1) : src_len;
    for (i = 0; i < max_len && src[i] != '\0'; i++) {
        dst[i] = src[i];
    }
    if (i < src_len && src[i] != '\0') {
        *truncated = 1;
    }
    dst[i] = '\0';
    return i;
}

u8 *func_0200b2ac(const char *str, u32 *arg1, u8 *arg2) {
    s32 zero = 0;
    s32 one = 1;
    u32 *argp = arg1;
    u8 *buf = arg2;
    const char *p = str;
    s32 pos = 0;
    s32 zero2 = 0;
    s32 truncated = 0;
    u32 sp4;
    s32 c;
    s32 step;

    if (*(u32 *)((u8 *)data_0215ed68 + 4) == 0) {
        *(u32 *)((u8 *)data_0215ed68 + 4) = *(u32 *)data_0215ed68;
        *(u16 *)((u8 *)data_0215ed68 + 8) = 0;
        *(u32 *)((u8 *)data_0215ed68 + 0xc) = 0;
        *(u16 *)((u8 *)data_0215ed68 + 0xa) = 0;
        *(u8 *)data_0215ee78 = 0;
    }
    c = *(u8 *)p;
    if (c == '/' || c == '\\') {
        sp4 = *(u32 *)((u8 *)data_0215ed68 + 4);
        p++;
    } else {
        pos = 0;
        for (;;) {
            c = p[pos];
            if (c == 0 || c == '/' || c == '\\') {
                sp4 = *(u32 *)((u8 *)data_0215ed68 + 4);
                if (argp != 0) {
                    *argp = *(u32 *)((u8 *)data_0215ed68 + 8);
                }
                break;
            }
            if (c == ':') {
                sp4 = (u32)func_0200b0ec((u8 *)p, pos);
                pos++;
                c = p[pos];
                if (c == '/' || c == '\\') {
                    p++;
                }
                if (argp != 0) {
                    *argp = zero2;
                }
                break;
            }
            step = ((u32)(((u8)c ^ 0x20) - 0xa1) < 0x3c) ? one : zero2;
            pos += 1;
            pos += step;
        }
    }
    return (u8 *)sp4;
}

void func_0200b594(u8 *arg0) {
    u32 r4 = 0;
    u8 *r5 = arg0;
    func_02008f74(arg0, r4, 0x5c);
    *(u32 *)(r5 + 0x10) = r4;
    *(u32 *)(r5 + 0xc) = r4;
}

s32 func_0200b5b8(u8 *arg0, s8 *arg1, u32 arg2) {
    u32 lock;
    s32 ret = 0;
    u32 a2 = arg2;
    s8 *a1 = arg1;
    u8 *a0 = arg0;
    lock = func_02008128();
    void *found = func_0200b0ec(a1, a2);
    if (found != NULL) goto fail;
    {
        u8 **slot = &data_0215ed68;
        u8 *cur = data_0215ed68;
        while (cur != NULL) {
            slot = (u8 **)(cur + 4);
            cur = *slot;
        }
        *slot = a0;
    }
    if (a2 <= 3) {
        *(u32 *)a0 = 0;
        func_02012244(a0, a1, a2 + 1);
        goto done;
    }
    if (a2 > 0xf) goto fail;
    {
        register s8 *table = data_0215ed78;
        ret = 0;
        while (ret < 0x10) {
            if (table[ret << 4] == 0) {
                u8 *p = (u8 *)table + (ret << 4);
                func_02012244(p, a1, a2 + 1);
                *(void **)a0 = p;
                goto done;
            }
            ret++;
        }
    }
fail:
    func_02008414();
    *(u32 *)(a0 + 0x14) |= 1;
    ret = 1;
done:
    func_0200813c(lock);
    return ret;
}

u8 *func_0200b6b8(u8 *arg0) {
    if (*(s8 *)(arg0 + 3) != 0) {
        return *(u8 **)(arg0 + 0);
    }
    return arg0;
}

s32 func_0200b6c8(u32 *arg0, u32 arg1, u32 arg2) {
    u32 sp[18];
    arg0[8] = arg1;
    arg0[9] = arg2;
    func_0200b888(sp);
    sp[2] = (u32)arg0;
    func_0200a980(sp, 0x11);
    arg0[5] |= 2;
    return 1;
}

void func_0200b710(u32 *arg0, u32 arg1) {
    u32 *arc = (u32 *)arg0[2];
    if (arc[3] & 4) {
        u32 bak = func_02008128();
        arc[3] |= 8;
        arc[5] = arg1;
        func_02006560(&arc[6]);
        func_0200813c(bak);
    } else {
        func_0200a884(arc);
        void *res = (void *)func_0200ad00(arg0, 1);
        if (res != 0) {
            func_0200aeac(res);
        }
    }
}

s32 func_0200b77c(const char *str, s32 pos) {
    s32 i = pos - 1;
    while (i > 0 && ((u32)(((u8)str[i - 1] ^ 0x20) - 0xa1) < 0x3c)) {
        i--;
    }
    return (pos - 1) - (((pos - 1) - i) & 1);
}

s32 func_0200b7bc(const char *str, s32 pos) {
    s32 c;
    while ((c = str[pos]) != '\0' && (u8)c != '/' && (u8)c != '\\') {
        s32 step = ((u32)(((u8)c ^ 0x20) - 0xa1) < 0x3c) ? 1 : 0;
        pos += 1;
        pos += step;
    }
    return pos;
}

s32 func_0200b810(const char *str, s32 pos) {
    for (;;) {
        pos = func_0200b77c(str, pos);
        if (pos < 0 || (u8)str[pos] == '/' || (u8)str[pos] == '\\') {
            break;
        }
    }
    return pos;
}

s32 func_0200b844(char *str) {
    s32 len = func_02012348(str);
    s32 pos = func_0200b77c(str, len);
    if (pos >= 0 && ((u8)str[pos] == '/' || (u8)str[pos] == '\\')) {
        str[pos] = '\0';
        len = pos;
    }
    return len;
}

void func_0200b888(u32 *arg0) {
    arg0[2] = 0;
    arg0[1] = 0;
    arg0[0] = 0;
    arg0[7] = 0;
    arg0[6] = 0;
    arg0[3] = 0;
    arg0[3] |= 0x2300;
    arg0[4] = 0;
    arg0[5] = 0;
}

void func_0200b8b4(u32 *arg0) {
    u32 bak = func_02008128();
    u32 flag = (u8)((arg0[3] & 1) != 0);
    if (flag) {
        u32 *arc = (u32 *)arg0[2];
        arg0[3] |= 2;
        arc[5] |= 0x20;
        func_0200813c(bak);
    }
}

