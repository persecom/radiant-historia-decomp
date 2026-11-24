/* 33 functions from 0x021098AC to 0x0210A7E4 (main), found by ds-decomp. */
#include "common.h"

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
    s32 c = (s8)*s++;
    if ((u32)c == '\\') {
        c = '/';
    }
    if ((u32)c >= 'A' && (u32)c <= 'Z') {
        c += 0x20;
    }
    if ((u32)c == '/') {
        c = 0;
    }
    if (*s != 0) {
        do {
            u32 ch = (s8)*s++;
            if (ch == '\\') {
                ch = '/';
            }
            if (ch >= 'A' && ch <= 'Z') {
                ch += 0x20;
            }
            c = 0x25 * c + ch;
        } while (*s != 0);
    }
    return (u32)c & (mask - 1);
}

void func_0210a2f0(u8 *p) {
    u32 zero = 0;
    *(u32 *)p = ~zero;
    *(u32 *)(p + 4) = zero;
    *(u32 *)(p + 8) = zero;
    p[0xc] = zero;
}

s32 func_0210a30c(u32 *arg0, u32 arg1, s32 arg2) {
    switch (arg2) {
        case 0:
            arg0[0] = arg1;
            break;
        case 1:
            arg0[0] += arg1;
            break;
        case 2:
            arg0[0] = arg0[2] - arg1;
            break;
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
    s32 start = func_02007904();
    s32 avail = func_0210a39c((u32 *)arg0, arg2, &local);
    s32 written = 0;
    if (avail <= 0) {
        return avail;
    }
    for (;;) {
        func_0200bb10(data_021625c8, local, written);
        {
            u32 elapsed = (func_02007904() - start) * 0x40;
            u32 ticks = (u32)(((u64)elapsed * 0x7d269b01u) >> 46);
            if (ticks > 0x28) {
                func_021091b4();
                if (avail == 0) {
                    break;
                }
                {
                    s32 chunk = (avail >= 0x800) ? 0x800 : avail;
                    if (avail >= 0x800) {
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
    return avail;
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

void func_0210a4cc(void) {
    void *ptr = func_0210c594(0x34, data_02155c3c);
    func_02118594();
    {
        u32 *field = (u32 *)((u8 *)ptr + 0x24);
        *field = 0;
    }
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

