/* 13 functions from 0x02016018 to 0x02016FC4 (main), found by ds-decomp. */
#include "common.h"

extern s32 func_02016cfc(s32, const char *, char *);
extern s32 func_02016018(void *, void *, const char *, void *, s32);
extern void (*data_02160038)(void);
extern void func_02016da0(void);
s32 func_02016c84(void *p, s32 ch, s32 act) {
    struct {
        u8 *str;
        s32 eof;
    } *isc = p;
    switch (act) {
        case 0: {
            u8 c = *isc->str;
            if (c == 0) {
                isc->eof = 1;
                return -1;
            } else {
                isc->str++;
                return c;
            }
        }
        case 1:
            if (isc->eof == 0) {
                isc->str--;
            } else {
                isc->eof = 0;
            }
            return ch;
        case 2:
            return isc->eof;
        default:
            return 0;
    }
}

s32 func_02016cfc(s32 s_arg, const char *fmt, char *arg) {
    const u8 *s = (const u8 *)s_arg;
    struct {
        const u8 *str;
        s32 eof;
    } isc;
    isc.str = s;
    if (s == NULL || *s == 0) {
        return -1;
    }
    isc.eof = 0;
    return func_02016018(func_02016c84, &isc, fmt, arg, 0);
}

void func_02016d50(s32 arg0, const char *arg1, ...) {
    char *vlist = (char *)((u32)&arg1 & ~3) + 4;
    func_02016cfc(arg0, arg1, vlist);
}

void func_02016d78(s32 a, s32 b, s32 c) {
    void (*fn)(s32, s32, s32) = (void (*)(s32, s32, s32))data_02160038;
    if (fn != NULL) {
        fn(a, b, c);
    } else {
        func_02016da0();
    }
}

void func_02016da0(void) {
}

extern s32 func_02016018(void *, void *, const char *, void *, s32);
extern void (*data_02160038)(void);
extern void func_02016da0(void);
u32 func_02016da4(const char *s) {
    u32 len = (u32)-1;
    const u8 *p = (const u8 *)s;
    do {
        len++;
    } while (*p++);
    return len;
}

char *func_02016e88(char *dst, const char *src, u32 n) {
    const u8 *p = (const u8 *)src;
    u8 *q = (u8 *)dst;
    while (n) {
        if (!(*q++ = *p++)) {
            while (--n) {
                *q++ = 0;
            }
            break;
        }
        n--;
    }
    return dst;
}

char *func_02016ed8(char *dst, const char *src) {
    const u8 *p = (const u8 *)src;
    u8 *q = (u8 *)dst;
    while (*q++) {}
    q--;
    while ((*q++ = *p++) != 0) {}
    return dst;
}

char *func_02016f08(char *dst, const char *src, u32 n) {
    const u8 *p = (const u8 *)src;
    u8 *q = (u8 *)dst;
    while (*q++) {}
    q--;
    while (n) {
        if (!(*q++ = *p++)) {
            q--;
            break;
        }
        n--;
    }
    *q = 0;
    return dst;
}

