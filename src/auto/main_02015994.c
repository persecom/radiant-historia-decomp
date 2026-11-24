/* 6 functions from 0x02015994 to 0x02016018 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u32 field_0;
    u8 *field_4;
    u32 field_8;
    u32 field_c;
} Unk_02015994;

typedef struct {
    u8 *field_0;
    u32 field_4;
    u32 field_8;
} Unk_02015950;

extern s32 func_020150a4(s32 (*)(Unk_02015950 *, void *, u32), Unk_02015950 *, const char *, char *);
extern s32 func_02015950(Unk_02015950 *, void *, u32);
extern s32 func_02015994(u8 *, s32, const char *, char *);

s32 func_02015994(u8 *buf, s32 maxlen, const char *fmt, char *vlist) {
    Unk_02015994 s;
    s32 ret;
    s.field_4 = buf;
    s.field_8 = maxlen;
    s.field_c = 0;
    s.field_0 = 0;
    ret = func_020150a4(func_02015950, (Unk_02015950 *)&s.field_4, fmt, vlist);
    if (buf == NULL) return ret;
    if ((u32)ret < (u32)maxlen) {
        buf[ret] = 0;
        return ret;
    }
    if (maxlen != 0) *(buf + maxlen - 1) = 0;
    return ret;
}

void func_020159f8(s32 arg0, const char *arg1, char *arg2) {
    ((void (*)(s32, s32, const char *, char *))func_02015994)(arg0, -1, arg1, arg2);
}

void func_02015a10(s32 arg0, const char *arg1, ...) {
    char *vlist = (char *)((u32)&arg1 & ~3) + 4;
    func_02015994((u8 *)arg0, -1, arg1, vlist);
}

