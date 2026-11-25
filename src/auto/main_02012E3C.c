/* 16 functions from 0x02012E3C to 0x020139A4 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02145c2c;
extern u32 data_02145c8c[];
extern s32 func_0201f800(u32);
extern void func_02012d64(u32 *, s32);
extern void func_02012d90(u32 *, s32, s32);
extern void func_02012de4(u32 *, const s8 *, s32);

#pragma push
#pragma opt_common_subs off
s32 func_02012e3c(s8 *dst, u32 size, const s8 *fmt, u8 *ap) {
    s8 digits[24];
    u32 out[3];
    s8 prefix[4];
    out[0] = size;
    out[2] = (u32)dst;
    out[1] = (u32)dst;
    if (*fmt != 0) do {
        s32 c = *fmt;
        if ((((u32)(u8)c ^ 0x20) - 0xa1) < 0x3c) {
            func_02012d64(out, c);
            c = *++fmt;
            if (c == 0) continue;
            func_02012d64(out, *fmt++);
            continue;
        }
        if (c != '%') {
            fmt++;
            func_02012d64(out, c);
            continue;
        }
        {
            s32 prefixes;
            s32 flags, width, precision;
            flags = 0; width = 0; precision = -1;
            const s8 *start = fmt;
            s32 base = 10;
            s32 hex = 0x57;
            s32 count;
            u64 value;
            for (;;) {
                c = *++fmt;
                switch (c) {
                case '+':
                    if (fmt[-1] != ' ') goto flags_done;
                    flags |= 2;
                    break;
                case ' ': flags |= 1; break;
                case '-': flags |= 8; break;
                case '0': flags |= 16; break;
                default: goto flags_done;
                }
            }
flags_done:
            if (c == '*') {
                width = (s32)*(u32 *)((ap += 4) - 4);
                fmt++;
                if (width < 0) {
                    width = -width;
                    flags |= 8;
                }
            } else {
                while (*fmt >= '0' && *fmt <= '9') {
                    width = width * 10 + *fmt++ - '0';
                }
            }
            if (*fmt == '.') {
                ++fmt;
                precision = 0;
                if (*fmt == '*') {
                    precision = (s32)*(u32 *)((ap += 4) - 4);
                    fmt++;
                    if (precision < 0) precision = -1;
                } else {
                    while (*fmt >= '0' && *fmt <= '9')
                        precision = precision * 10 + *fmt++ - '0';
                }
            }
            switch (*fmt) {
            case 'h':
                if (*++fmt != 'h') flags |= 0x40;
                else { fmt++; flags |= 0x100; }
                break;
            case 'l':
                if (*++fmt != 'l') flags |= 0x20;
                else { fmt++; flags |= 0x80; }
                break;
            }
            switch (*fmt) {
            case 'o': flags |= 0x1000; base = 8; break;
            case 'u': flags |= 0x1000; break;
            case 'X': hex = 0x37; goto hexadecimal;
            case 'p': flags |= 4; precision = 8; goto hexadecimal;
            case 'd': case 'i': break;
            case 'c':
                if (precision >= 0) goto invalid;
                {
                    s32 c = (s32)*(u32 *)((ap += 4) - 4);
                    if (flags & 8) {
                        func_02012d64(out, (s8)c);
                        func_02012d90(out, ' ', width - 1);
                    } else {
                        func_02012d90(out, (s8)((flags & 16) ? '0' : ' '), width - 1);
                        func_02012d64(out, (s8)c);
                    }
                }
                fmt++;
                continue;
            case 's':
                {
                    s32 len;
                    const s8 *str = (const s8 *)*(u32 *)((ap += 4) - 4);
                    len = 0;
                    if (precision < 0) {
                        while (str[len]) len++;
                    } else {
                        while (len < precision && str[len]) len++;
                    }
                    width -= len;
                    if (flags & 8) {
                        func_02012de4(out, str, len);
                        func_02012d90(out, ' ', width);
                    } else {
                        func_02012d90(out, (s8)((flags & 16) ? '0' : ' '), width);
                        func_02012de4(out, str, len);
                    }
                }
                fmt++;
                continue;
            case '%':
                if (start + 1 == fmt) {
                    func_02012d64(out, *fmt++);
                    continue;
                }
            default:
invalid:
                func_02012de4(out, start, fmt-start);
                continue;
            case 'x':
hexadecimal:
                flags |= 0x1000; base = 16; break;
            }
            prefixes = 0;
            if (flags & 8) flags &= ~16;
            if (precision >= 0) flags &= ~16;
            else precision = 1;
            if (flags & 0x1000) {
                if (flags & 0x100) value = (u8)*(u32 *)((ap += 4) - 4);
                else if (flags & 0x40) value = (u16)*(u32 *)((ap += 4) - 4);
                else if (flags & 0x80) { value = *(u64 *)((ap += 8) - 8); }
                else value = *(u32 *)((ap += 4) - 4);
                flags &= ~3;
                if (flags & 4) {
                    if (base == 16) {
                        if (value) {
                            prefix[0] = hex + 0x21;
                            prefix[1] = '0';
                            prefixes = 2;
                        }
                    } else if (base == 8) {
                        prefix[0] = '0';
                        prefixes = 1;
                    }
                }
            } else {
                if (flags & 0x100) value = (s64)(s8)*(u32 *)((ap += 4) - 4);
                else if (flags & 0x40) value = (s64)(s16)*(u32 *)((ap += 4) - 4);
                else if (flags & 0x80) { value = *(u64 *)((ap += 8) - 8); }
                else value = (s64)(s32)*(u32 *)((ap += 4) - 4);
                if (((value >> 32) & 0x80000000) != 0) {
                    value = ~value;
                    prefix[0] = '-';
                    value += 1;
                    prefixes = 1;
                } else if (value != 0 || precision != 0) {
                    if (flags & 2) {
                        prefix[0] = '+';
                        prefixes = 1;
                    } else if (flags & 1) {
                        prefix[0] = ' ';
                        prefixes = 1;
                    }
                }
            }
            count = 0;
            switch (base) {
            case 8:
                while (value != 0) {
                    s32 digit = value & 7;
                    value >>= 3;
                    digits[count++] = digit + '0';
                }
                break;
            case 10:
                if ((value >> 32) == 0) {
                    u32 v = (u32)value;
                    while (v != 0) {
                        u32 q = v / 10;
                        u32 rem = v - q*10;
                        v = q;
                        digits[count++] = '0' + rem;
                    }
                } else {
                    while (value != 0) {
                        u64 q = value / 10;
                        digits[count++] = '0' + (u32)(value - q*10);
                        value = q;
                    }
                }
                break;
            case 16:
                while (value != 0) {
                    s32 digit = value & 15;
                    value >>= 4;
                    digits[count++] = digit < 10 ? digit + '0' : digit + hex;
                }
                break;
            }
            {
            s8 *buffer = digits;
            u32 *output = out;
            if (prefixes > 0 && prefix[0] == '0') {
                buffer[count++] = '0';
                prefixes = 0;
            }
            precision -= count;
            if ((flags & 16) && precision < width-count-prefixes)
                precision = width-count-prefixes;
            if (precision > 0) width -= precision;
            width -= prefixes + count;
            s32 left = flags & 8;
            if (!left) func_02012d90(out, ' ', width);
            while (prefixes > 0) func_02012d64(output, prefix[--prefixes]);
            func_02012d90(out, '0', precision);
            while (count > 0) func_02012d64(out, digits[--count]);
            if (left) func_02012d90(out, ' ', width);
            }
        }
next:
        fmt++;
    }
    while (*fmt != 0);
    if (out[0] != 0) *(s8 *)out[1] = 0;
    else if (size != 0) *((s8 *)out[2] + size - 1) = 0;
    return (s8 *)out[1] - (s8 *)out[2];
}
#pragma pop
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

u8 *func_02013858(u8 *dst, const u8 *src, u32 n) {
    u8 *p = dst;
    if (n == 0) {
        return dst;
    }
    do {
        *p++ = *src++;
    } while (--n != 0);
    return dst;
}

extern void func_020138f8(void *, s32, u32);
void *func_02013878(void *arg0, s32 arg1, u32 arg2) {
    func_020138f8(arg0, arg1, arg2);
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

void func_020138f8(void *dst, s32 val, u32 n) {
    u32 v = (u8)val;
    u32 i;
    u8 *p = (u8 *)dst;

    if (n >= 32) {
        i = (-(u32)p) & 3;
        if (i) {
            n -= i;
            do {
                *p++ = v;
            } while (--i);
        }
        if (v) {
            v |= (v << 24) | (v << 16) | (v << 8);
        }
        i = n >> 5;
        if (i) {
            do {
                ((u32 *)p)[0] = v;
                ((u32 *)p)[1] = v;
                ((u32 *)p)[2] = v;
                ((u32 *)p)[3] = v;
                ((u32 *)p)[4] = v;
                ((u32 *)p)[5] = v;
                ((u32 *)p)[6] = v;
                ((u32 *)p)[7] = v;
                p += 32;
            } while (--i);
        }
        i = (n & 31) >> 2;
        if (i) {
            do {
                *(u32 *)p = v;
                p += 4;
            } while (--i);
        }
        n &= 3;
    }
    if (n) {
        do {
            *p++ = v;
        } while (--n);
    }
}

