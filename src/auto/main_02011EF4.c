/* 14 functions from 0x02011EF4 to 0x02012E3C (main), found by ds-decomp. */
#include "common.h"

extern s32 func_02012634(s32, const char *, char *);
extern int strlen(const char *);
extern int strcmp(const char *, const char *);
void func_02011ef4(u32 *ctx) {
u32 w[16]; u32 a,b,c,d,e,t,i,v;
for(i=0;i<16;i++){v=ctx[i+5]; w[i]=(v>>24)|((v>>8)&0xff00)|((v<<8)&0xff0000)|(v<<24);}
a=ctx[0];b=ctx[1];c=ctx[2];d=ctx[3];e=ctx[4];
for(i=0;i<16;i++) {t=((b&c)|(~b&d))+0x5a827999+e+w[i&15]+((a<<5)|(a>>27)); e=d;d=c;c=(b>>2)|(b<<30);b=a;a=t;}
for(i=16;i<20;i++) {v=w[(i-16)&15]^w[(i-14)&15]^w[(i-8)&15]^w[(i-3)&15]; w[i&15]=(v<<1)|(v>>31);t=((b&c)|(~b&d))+0x5a827999+e+w[i&15]+((a<<5)|(a>>27)); e=d;d=c;c=(b>>2)|(b<<30);b=a;a=t;}
for(i=20;i<40;i++) {v=w[(i-16)&15]^w[(i-14)&15]^w[(i-8)&15]^w[(i-3)&15]; w[i&15]=(v<<1)|(v>>31);t=(b^c^d)+0x6ed9eba1+e+w[i&15]+((a<<5)|(a>>27)); e=d;d=c;c=(b>>2)|(b<<30);b=a;a=t;}
for(i=40;i<60;i++) {v=w[(i-16)&15]^w[(i-14)&15]^w[(i-8)&15]^w[(i-3)&15]; w[i&15]=(v<<1)|(v>>31);t=((b&c)|(b&d)|(c&d))+0x8f1bbcdc+e+w[i&15]+((a<<5)|(a>>27)); e=d;d=c;c=(b>>2)|(b<<30);b=a;a=t;}
for(i=60;i<80;i++) {v=w[(i-16)&15]^w[(i-14)&15]^w[(i-8)&15]^w[(i-3)&15]; w[i&15]=(v<<1)|(v>>31);t=(b^c^d)+0xca62c1d6+e+w[i&15]+((a<<5)|(a>>27)); e=d;d=c;c=(b>>2)|(b<<30);b=a;a=t;}
ctx[0]+=a;ctx[1]+=b;ctx[2]+=c;ctx[3]+=d;ctx[4]+=e;
}

char *func_02012210(char *dst, const char *src) {
    char *p = dst;
    while (*src != 0) {
        *dst++ = *src++;
    }
    *dst = 0;
    return p;
}

int func_02012348(const char *);
int func_02012244(char *dst,const char *src,int n) {
 u32 align=(u32)dst&3;
 u32 other=(u32)src&3;
 const char *p=src;
 int i=0;
 if((align^other)==0) {
 if(align!=0) {
 while(i+align<4 && i<n-1) {
 dst[i]=*p;
 if(*p==0) goto done;
 p++; i++;
 }
 }
 while(i<n-4) {
 u32 word=*(const u32 *)(src+i);
 u32 mask=0x7f7f7f7f;
 u32 test=(word&mask)+mask;
 test|=word;
 test|=mask;
 if(~test) break;
 *(u32 *)(dst+i)=word;
 i+=4;
 }
 p=src+i;
 }
 while(i<n-1) {
 dst[i]=*p;
 if(*p==0) goto done;
 i++; p++;
 }
done:
 if(i>=n-1 && n>0) dst[i]=0;
 if(*p) i+=func_02012348(p);
 return i;
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

int func_020123f0(const u8 *a, const u8 *b)
{
  register u32 aa = ((u32) a) & 3;
  u32 ba = ((u32) b) & 3;
  u32 i = 0;
  u32 mask = 0x7f7f7f7f;
  if ((aa ^ ba) != 0)
  {
    goto bytes;
  }
  if (aa == 0)
  {
    goto words;
  }
  if (aa >= 4)
  {
    goto words;
  }
  do
  {
    u8 x = a[i];
    u8 y = b[i];
    if ((x != y) || (x == 0))
    {
      return x - y;
    }
    i++;
  }
  while ((i + aa) < 4);
  words:
  for (;;)
  {
    u32 x = *((const u32 *) (a + i));
    u32 y = *((const u32 *) (b + i));
    u32 t;
    u32 z;
    if (x != y)
    {
      break;
    }
    t = ((((((((x & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & mask) + mask;
    t |= x;
    t |= mask;
    z = ~t;
    if (z == 0)
    {
      i += 4;
    }
    else
    {
      break;
    }
  }


  bytes:
  for (;;)
  {
    u8 x = a[i];
    u8 y = b[i];
    if ((x != y) || (x == 0))
    {
      return x - y;
    }
    i++;
  }


}

int func_020124a8(const u8 *a, const u8 *b, s32 n)
{
  u32 aa;
  u32 ba;
  s32 i;
  u32 mask;
  if (n == 0)
  {
    goto done;
  }
  aa = ((u32) a) & 3;
  ba = ((u32) b) & 3;
  i = 0;
  mask = 0x7f7f7f7f;
  if ((aa ^ ba) != 0)
  {
    goto bytes;
  }
  if (aa == 0)
  {
    goto words;
  }
  while ((((u32)i + aa) < 4) && (i < n))
  {
    u8 x = a[i];
    u8 y = b[i];
    if ((x != y) || (x == 0))
    {
      return x - y;
    }
    i++;
  }

  words:
  if (i > n - 4)
  {
    goto bytes;
  }
  do
  {
    u32 x = *((const u32 *) (a + i));
    u32 y = *((const u32 *) (b + i));
    u32 t;
    u32 z;
    if (x != y)
    {
      break;
    }
    t = (x & mask) + mask;
    t |= x;
    t |= mask;
    z = ~t;
    if (z != 0)
    {
      break;
    }
    i += 4;
  }
  while (i <= n - 4);
  bytes:
  if (i >= n)
  {
    goto done;
  }

  do
  {
    u8 x = a[i];
    u8 y = b[i];
    if ((x != y) || (x == 0))
    {
      return x - y;
    }
    i++;
  }
  while (i < n);
  done:
  return 0;
}

void func_02012590(s32 arg0, const char *arg1, ...) {
    char *vlist = (char *)((u32)&arg1 & ~3) + 4;
    func_02012634(arg0, arg1, vlist);
}

s32 func_020125b8(s32 c) {
    u32 d = c - 9;
    s32 ret = 0;
    if (d > 0x17) {
        return ret;
    }
    if (0x80001f & (1 << d)) {
        ret = 1;
    }
    return ret;
}

#pragma scheduling off
void func_020125e0(u32 *bits, u32 start, u32 end)
{
  if (start >= end)
  {
    return;
  }
  do
  {
    u32 word = start >> 5;
    u32 mask = (~0U) << (start & 0x1f);
    u32 endMask = (1U << (end & 0x1f)) - 1;
    u32 next = (word + 1) << 5;
    if (end < next)
    {
      mask &= endMask;
    }
    bits[word] |= mask;
    start = next;
  }
  while (start < end);
}
#pragma scheduling on
extern void func_02008e24(u32, void *, u32);
struct ScanState {
    char **ap;
    s32 count;
    s32 inv;
    s32 got;
    const char *start;
    u32 bits[8];
};
s32 func_02012634(s32 arg0, const char *fmt, char *args)
{
    const char *s = (const char *)arg0;
    const char *start = s;
    const char *f = fmt;
    char **ap = (char **)args;
    s32 got = 0;
    u32 inv;
    u32 bits[8];
    s32 c = *f;
    s32 base;
    s32 flags;
    s32 width;
    s32 ch;
    s64 val;
    s32 n;
    char *dst;
    char *dst0;
    u32 digit;
    u32 k;
    s32 count = 0;

    while (c != 0) {
        if (func_020125b8(c) != 0) {
            if (func_020125b8(*f) != 0) {
                while (func_020125b8(*++f) != 0) { }
            }
            if (func_020125b8(*s) != 0) {
                while (func_020125b8(*++s) != 0) { }
            }
            goto next;
        }
        if (c != '%') {
            if (c != *s) break;
            if ((u32)(((u8)c ^ 0x20) - 0xa1) < 0x3c) {
                ch = *++s;
                if (c != ch) break;
            }
            s++;
            f++;
            goto next;
        }
        if (f[1] == '%') {
            if (c != *s) break;
            f += 2;
            goto next;
        }
        ch = *++f;
        val = 0;
        flags = 0;
        width = 0;
        if (ch == '*') { flags |= 0x2000; ch = *++f; }
        while (ch >= '0' && ch <= '9') {
            width = width * 10 + ch - '0';
            ch = *++f;
        }
        switch (ch) {
        case 'h':
            ch = *++f;
            if (ch != 'h') flags |= 0x40;
            else { flags |= 0x100; ch = *++f; }
            break;
        case 'l':
            ch = *++f;
            if (ch != 'l') flags |= 0x20;
            else { ch = *++f; flags |= 0x80; }
            break;
        }
        switch (ch) {
        case 'd': base = 10; goto parse_num;
        case 'i': base = -1; goto parse_num;
        case 'o': base = 8; goto parse_num;
        case 'u': flags |= 0x1000; base = 10; goto parse_num;
        case 'X': case 'p': case 'x': flags |= 0x1000; base = 16; goto parse_num;
        case 'n': goto parse_count;
        case 'c': case 's': goto parse_str;
        case '[': goto parse_set;
        default: goto finish;
        }

parse_count:
        if (!(flags & 0x2000)) count--;
        f++;
        val = s - start;
        goto store_val;

parse_num:
        f++;
        ch = *s;
        if (func_020125b8(ch) != 0) {
            do { ch = *++s; } while (func_020125b8(ch) != 0);
        }
again_sign:
        if (ch == '+') { flags |= 0x2; goto next_sign; }
        if (ch == '-') { flags |= 0x8; goto next_sign; }
        goto after_sign;
next_sign:
        ch = *++s;
        goto again_sign;
after_sign:
        if (base == -1) {
            if (ch != '0') base = 10;
            else {
                if (s[1] == 'x' || s[1] == 'X') base = 16;
                else base = 8;
            }
        }
        if (base == 16 && ch == '0') {
            if (s[1] == 'x' || s[1] == 'X') { s += 2; ch = *s; }
        }
        if (width == 0) width = 0x7fffffff;
        n = 0;
        if (width > 0) {
            do {
                digit = ch - '0';
                if (digit >= 10) {
                    k = digit - 0x31;
                    if (k < 6) digit -= 0x27;
                    else {
                        digit -= 0x11;
                        if (digit < 6) digit += 0xa;
                    }
                }
                if (digit >= (u32)base) break;
                ch = *++s;
                n++;
                val = val * base + digit;
            } while (n < width);
        }
        if (n == 0) break;
        if (flags & 0x8) val = -val;
        got = 1;
store_val:
        if (flags & 0x2000) goto next;
        count++;
        if (flags & 0x100) {
            ap++;
            *(u8 *)ap[-1] = (u8)val;
        } else if (flags & 0x40) {
            ap++;
            *(u16 *)ap[-1] = (u16)val;
        } else if (flags & 0x80) {
            ap++;
            *(s64 *)ap[-1] = val;
        } else {
            ap++;
            *(s32 *)ap[-1] = (s32)val;
        }
        goto next;

parse_str:
        f++;
        dst = 0;
        dst0 = dst;
        if (!(flags & 0x2000)) {
            ap++;
            dst = ap[-1];
            dst0 = dst;
        }
        if (ch == 's') {
            ch = *s;
            if (width == 0) width = 0x7fffffff;
            if (func_020125b8(ch) != 0) {
                do { ch = *++s; } while (func_020125b8(ch) != 0);
            }
            while (ch != 0 && func_020125b8(ch) == 0 && width > 0) {
                if (dst != 0) *dst++ = ch;
                ch = *++s;
                width--;
            }
            if (dst == dst0) goto next;
            *dst = 0;
            count++;
            got = 1;
            goto next;
        }
        if (width == 0) width = 1;
        ch = *s;
        while (ch != 0 && width > 0) {
            if (dst != 0) *dst++ = ch;
            ch = *++s;
            width--;
        }
        if (dst == dst0) goto next;
        count++;
        got = 1;
        if (width > 0) *dst = 0;
        goto next;

parse_set:
        {
            u32 previous;
            s32 range;
            dst = NULL;
            inv = 1;
            previous = 0;
            range = 0;
            func_02008e24(0, bits, 0x20);
            ch = *++f;
            if (ch == '^') { f++; inv = 0; }
            ch = *f;
            if (ch == ']') { bits[(u32)(u8)ch >> 5] |= 1U << ((u8)ch & 31); f++; }
            for (;;) {
                ch = *f;
                if (ch == 0 || ch == ']') {
                    if (range) {
                        bits[previous >> 5] |= 1U << (previous & 31);
                        bits[1] |= 0x2000;
                    }
                    if (*f == ']') f++;
                    break;
                }
                if (!range) {
                    if (previous != 0 && ch == '-') { range = 1; }
                    else {
                        bits[(u32)(u8)ch >> 5] |= 1U << ((u8)ch & 31);
                        previous = (u8)*f;
                    }
                } else {
                    u32 end = (u8)ch;
                    if (previous > end) {
                        bits[previous >> 5] |= 1U << (previous & 31);
                        bits[1] |= 0x2000;
                        bits[end >> 5] |= 1U << (end & 31);
                    } else {
                        func_020125e0(bits, previous, end + 1);
                    }
                    range = 0;
                    previous = 0;
                }
                f++;
            }
            got = 1;
            if (!(flags & 0x2000)) {
                ap++;
                dst = ap[-1];
                count++;
            }
            if (width == 0) width = 0x7fffffff;
            ch = *s;
            while (ch != 0 && width > 0) {
                u32 uc = (u8)ch;
                if (((bits[uc >> 5] >> (uc & 31)) & 1) != inv) break;
                if (dst) *dst++ = ch;
                ch = *++s;
                width--;
            }
            if (dst) *dst = 0;
        }
next:
        c = *f;
    }
finish:
    if (*s == 0) {
        if (got == 0) count = -1;
    }
    return count;
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

void func_02012de4(u32 *arg0, char *arg1, s32 arg2) {
    u32 i, n;
    if (arg2 <= 0) {
        return;
    }
    n = arg0[0];
    if (n > (u32)arg2) {
        n = (u32)arg2;
    }
    for (i = 0; i < n; i++) {
        ((u8 *)arg0[1])[i] = arg1[i];
    }
    arg0[0] -= n;
    arg0[1] += arg2;
}

