/* 20 functions from 0x0200A980 to 0x0200B8FC (main), found by ds-decomp. */
#include "common.h"

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
extern s32 func_02012348(const char *);
s32 func_0200b77c(const char *str, s32 pos);

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
    func_0200a884(s, func_0200a980(s, (*(u32 *)(s + 0xc) >> 8) & 0xff));
    s32 next = func_0200ad00(*(u8 **)(s + 8), 1);
    if (next == 0) {
        return;
    }
    func_0200aeac((void *)next);
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

void func_0200b594(u8 *arg0) {
    u32 r4 = 0;
    u8 *r5 = arg0;
    func_02008f74(arg0, r4, 0x5c);
    *(u32 *)(r5 + 0x10) = r4;
    *(u32 *)(r5 + 0xc) = r4;
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

