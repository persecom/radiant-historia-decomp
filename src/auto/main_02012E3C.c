/* 16 functions from 0x02012E3C to 0x020139A4 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02145c2c;
extern u32 data_02145c8c[];
extern s32 func_0201f800(u32);

s32 func_02013618(void) {
    return func_0201f800(data_02145c2c);
}

s32 func_02013630(s32 x) {
    return x < 0 ? -x : x;
}

unsigned int func_0201363c(u64 x)
{
  x = x - ((x >> 1) & 0x5555555555555555ull);
  x = (x & 0x3333333333333333ull) + ((x >> 2) & 0x3333333333333333ull);
  x = (x + (x >> 4)) & 0x0f0f0f0f0f0f0f0full;
  x += x >> 8;
  x += x >> 16;
  x += x >> 32;
  if (x)
  {
  }
  return x & 0xff;
}

s32 func_020136d0(s32 arg0, ...) {
    s32 *args = &arg0;
    return (args[1] & 0x80000000) != 0;
}

s32 func_020136ec(s32 arg0, ...) {
    u32 hi = ((u32 *)&arg0)[1];
    switch (hi & 0x7ff00000) {
        case 0x7ff00000:
            if ((hi & 0x000fffff) || ((u32 *)&arg0)[0]) {
                return 1;
            }
            return 2;
        case 0:
            if ((hi & 0x000fffff) || ((u32 *)&arg0)[0]) {
                return 5;
            }
            return 3;
        default:
            return 4;
    }
}

s32 func_0201375c(s32 a, s32 b, s32 c) {
    return ((s32 (*)(s32, s32, s32))(*(u32 *)data_02145c8c[2]))(a, b, c);
}

s32 func_02013778(u16 *pwc, const u8 *s, u32 n) {
    if (!s) {
        return 0;
    }
    if (!n) {
        return -1;
    }
    if (pwc) {
        *pwc = *s;
    }
    if (*s == 0) {
        return 0;
    }
    return 1;
}

extern u32 data_02145c8c[];
s32 func_020137b0(u8 *arg0, u8 arg1) {
    if (arg0 == 0) {
        return 0;
    }
    *arg0 = arg1;
    return 1;
}

u32 func_020137c4(u32 *out, u16 code) {
    u32 **fn = (u32 **)(data_02145c8c[2] + 4);
    return ((u32 (*)(u32 *, u16))*fn)(out, code);
}

u32 func_020137e0(u8 *dst, u16 *src, u32 maxLen) {
    u32 pos;
    u32 tmp;
    u16 code;
    u32 len;

    pos = 0;
    if (dst == 0 || src == 0) {
        return 0;
    }
    for (;;) {
        if (*src == 0) {
            dst[pos] = 0;
            break;
        }
        code = *src++;
        len = func_020137c4(&tmp, code);
        if (pos + len > maxLen) {
            break;
        }
        func_02016e88((char *)dst + pos, (const char *)&tmp, len);
        pos += len;
        if (pos > maxLen) {
            break;
        }
    }
    return pos;
}

void func_02013858(u8 *dst, const u8 *src, u32 n) {
    u8 *p = dst;
    if (n == 0) {
        return;
    }
    do {
        *p++ = *src++;
    } while (--n != 0);
}

extern void func_020138f8(void *);
void *func_02013878(void *arg0) {
    func_020138f8(arg0);
    return arg0;
}

void *func_0201388c(const void *src, s32 val, u32 n) {
    const u8 *p = (const u8 *)src;
    u8 v = val;
    while (n) {
        if (*p++ == v) {
            return (void *)(p - 1);
        }
        n--;
    }
    return 0;
}

s32 func_020138b8(const void *src1, const void *src2, u32 n) {
    const u8 *p1 = (const u8 *)src1;
    const u8 *p2 = (const u8 *)src2;
    while (n) {
        if (*p1++ != *p2++) {
            return *--p1 < *--p2 ? -1 : 1;
        }
        n--;
    }
    return 0;
}

