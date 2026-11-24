/* 14 functions from 0x02011EF4 to 0x02012E3C (main), found by ds-decomp. */
#include "common.h"

extern void func_02012634(s32, const char *, char *);
extern int strlen(const char *);
extern int strcmp(const char *, const char *);
char *func_02012210(char *dst, const char *src) {
    char *p = dst;
    while (*src != 0) {
        *dst++ = *src++;
    }
    *dst = 0;
    return p;
}

int func_02012348(const char *s) {
    register u32 i = 0;
    const u32 *p;
    u32 mask = 0x7f7f7f7f;
    if (((u32)s & 3) != 0) {
        do {
            if (s[i] == 0) return i;
            i++;
        } while (((u32)(s + i) & 3) != 0);
    }
    p = (const u32 *)(s + i);
    for (;;) {
        u32 w = *p;
        u32 t = (w & mask) + mask;
        t |= w;
        t |= mask;
        u32 z = ~t;
        if (z == 0) { p++; i += 4; } else break;
    }
    if (s[i] == 0) goto done;
    do { i++; } while (s[i] != 0);
done:
    return i;
}

char *func_020123cc(char *dst, const char *src) {
    func_02012210(dst + func_02012348(dst), src);
    return dst;
}

int func_020123f0(const u8 *a, const u8 *b) {
    u32 aa = (u32)a & 3;
    u32 ba = (u32)b & 3;
    u32 i = 0;
    if (aa != ba) goto bytes;
    if (aa == 0) goto words;
    if (aa >= 4) goto words;
    do {
        if (a[i] != b[i]) return a[i] - b[i];
        if (a[i] == 0) return 0;
        i++;
    } while (i + aa < 4);
words:
    {
        u32 mask = 0x7f7f7f7f;
        for (;;) {
            u32 x = *(const u32 *)(a + i);
            u32 y = *(const u32 *)(b + i);
            u32 t;
            if (x != y) break;
            t = ((x & mask) + mask) | x | mask;
            if (t != 0xffffffff) break;
            i += 4;
        }
    }
bytes:
    for (;;) {
        if (a[i] != b[i]) return a[i] - b[i];
        if (a[i] == 0) return 0;
        i++;
    }
}

void func_02012590(s32 arg0, const char *arg1, ...) {
    char *vlist = (char *)((u32)&arg1 & ~3) + 4;
    func_02012634(arg0, arg1, vlist);
}

s32 func_020125b8(s32 c) {
    u32 d = c - 9;
    if (d > 0x17) {
        return 0;
    }
    return (0x80001f & (1 << d)) != 0;
}

void func_020125e0(u32 *bits, u32 start, u32 end) {
    u32 mask, endMask, word;
    if (start >= end) {
        return;
    }
    endMask = (1U << (end & 0x1f)) - 1;
    do {
        u32 next;
        word = start >> 5;
        mask = ~0U << (start & 0x1f);
        next = (word + 1) << 5;
        if (end < next) {
            mask &= endMask;
        }
        bits[word] |= mask;
        start = next;
    } while (start < end);
}

void func_02012d64(u32 *arg0, u8 arg1) {
    if (arg0[0] != 0) {
        *(u8 *)arg0[1] = arg1;
        arg0[0]--;
    }
    arg0[1]++;
}

void func_02012d90(u32 *arg0, u8 arg1, s32 arg2) {
    u32 i, n;
    if (arg2 <= 0) {
        return;
    }
    n = arg0[0];
    if (n > (u32)arg2) {
        n = (u32)arg2;
    }
    for (i = 0; i < n; i++) {
        ((u8 *)arg0[1])[i] = arg1;
    }
    arg0[0] -= n;
    arg0[1] += arg2;
}

