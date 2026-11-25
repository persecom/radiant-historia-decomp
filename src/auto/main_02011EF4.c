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
    t = ((((((((x & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & mask) + (u32)mask;
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

int func_020124a8(const u8 *a, const u8 *b, s32 n) {
    u32 aa, ba, mask;
    s32 i, limit;

    if (n == 0) goto done;
    aa = (u32)a & 3;
    ba = (u32)b & 3;
    i = 0;
    mask = 0x7f7f7f7f;
    if ((aa ^ ba) != 0) goto bytes;
    if (aa == 0) goto words;
    while (((i + aa) < 4) && (i < n)) {
        u8 x = a[i];
        u8 y = b[i];
        if ((x != y) || (x == 0)) return x - y;
        i++;
    }
words:
    limit = n - 4;
    if (i > limit) goto bytes;
    do {
        u32 x = *(const u32 *)(a + i);
        u32 y = *(const u32 *)(b + i);
        u32 t, z;
        if (x != y) break;
        t = (x & mask) + mask;
        t |= x;
        t |= mask;
        z = ~t;
        if (z != 0) break;
        i += 4;
    } while (i <= limit);
bytes:
    if (i >= n) goto done;
    do {
        u8 x = a[i];
        u8 y = b[i];
        if ((x != y) || (x == 0)) return x - y;
        i++;
    } while (i < n);
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
    s32 c = *fmt;
    s32 flags = 0;
    s32 width = 0;
    s32 ch;
    const char *f = fmt;
    const char *s = (const char *)arg0;
    s64 val = 0;
    struct ScanState st;
    u32 bits[8];
    s32 n;
    char *dst;
    char *dst0;
    u32 digit;
    u32 k;

    st.ap = (char **)args;
    st.count = 0;
    st.inv = 1;
    st.got = 0;
    st.start = s;
    if (c == 0) goto finish;
loop:
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
        if (c != *s) goto finish;
        if ((u32)(((u8)c ^ 0x20) - 0xa1) < 0x3c) {
            ch = *++s;
            if (c != ch) goto finish;
        }
        s++;
        f++;
        goto next;
    }
    if (f[1] == '%') {
        if (c != *s) goto finish;
        f += 2;
        goto next;
    }
    ch = *++f;
    if (ch == '*') { flags |= 0x2000; ch = *++f; }
    while (ch >= '0' && ch <= '9') {
        width = width * 10 + ch - '0';
        ch = *++f;
    }
    switch (ch) {
    case 'h':
        ch = *++f;
        if (ch == 'h') { flags |= 0x100; ch = *++f; }
        else flags |= 0x40;
        break;
    case 'l':
        ch = *++f;
        if (ch == 'l') { flags |= 0x80; ch = *++f; }
        else flags |= 0x20;
        break;
    }
    if (ch == 'i') goto case_i;
    if (ch == 'd') goto case_d;
    if (ch == 'X') goto case_x;
    if (ch == '[') goto parse_set;
    if (ch == 'c') goto parse_str;
    if (ch == 'n') goto parse_count;
    switch (ch) {
    case 'o': c = 8; goto parse_num;
    case 'p': flags |= 0x1000; c = 16; goto parse_num;
    case 'q': goto finish;
    case 'r': goto finish;
    case 's': goto parse_str;
    case 't': goto finish;
    case 'u': flags |= 0x1000; c = 10; goto parse_num;
    case 'v': goto finish;
    case 'w': goto finish;
    case 'x': flags |= 0x1000; c = 16; goto parse_num;
    default: goto finish;
    }
case_i:
    c = -1;
    goto parse_num;
case_d:
    flags |= 0x1000;
    c = 10;
    goto parse_num;
case_x:
    flags |= 0x1000;
    c = 16;
    goto parse_num;

parse_count:
    if (!(flags & 0x2000)) st.count--;
    f++;
    val = s - st.start;
    goto store_val;

parse_num:
    f++;
    ch = *s;
    if (func_020125b8(ch) != 0) {
        do { ch = *++s; } while (func_020125b8(ch) != 0);
    }
again_sign:
    if (ch == '+') { flags |= 0x2; ch = *++s; goto again_sign; }
    if (ch == '-') { flags |= 0x8; ch = *++s; goto again_sign; }
    if (c == -1) {
        if (ch != '0') c = 10;
        else {
            if (s[1] == 'x' || s[1] == 'X') c = 16;
            else c = 8;
        }
    }
    if (c == 16 && ch == '0') {
        if (s[1] == 'x' || s[1] == 'X') { s += 2; ch = *s; }
    }
    if (width == 0) width = (s32)0x80000000;
    n = 0;
    val = 0;
    if (width > 0) {
        do {
            digit = ch - '0';
            if (digit >= 10) {
                k = digit - 0x31;
                if (k < 6) digit -= 0x27;
                else {
                    k = digit - 0x11;
                    if (k < 6) digit = k + 0xa;
                }
            }
            if (digit >= (u32)c) break;
            ch = *++s;
            n++;
            val = val * c + digit;
        } while (n < width);
    }
    if (n == 0) goto finish;
    if (flags & 0x8) val = -val;
    st.got = 1;
store_val:
    if (flags & 0x2000) goto next;
    st.count++;
    if (flags & 0x100) {
        st.ap++;
        *(u8 *)st.ap[-1] = (u8)val;
    } else if (flags & 0x40) {
        st.ap++;
        *(u16 *)st.ap[-1] = (u16)val;
    } else if (flags & 0x80) {
        st.ap++;
        *(s64 *)st.ap[-1] = val;
    } else {
        st.ap++;
        *(s32 *)st.ap[-1] = (s32)val;
    }
    goto next;

parse_str:
    dst = 0;
    dst0 = dst;
    if (!(flags & 0x2000)) {
        st.ap++;
        dst = st.ap[-1];
        dst0 = dst;
    }
    f++;
    if (ch == 's') {
        ch = *s;
        if (width == 0) width = (s32)0x80000000;
        if (func_020125b8(ch) != 0) {
            while (func_020125b8(*++s) != 0) { }
        }
        if (ch == 0 || func_020125b8(ch) != 0) goto str_end;
        do {
            if (dst != 0) *dst++ = ch;
            ch = *++s;
            width--;
            if (ch == 0 || func_020125b8(ch) != 0) break;
        } while (width > 0);
str_end:
        if (dst == dst0) goto next;
        *dst = 0;
        st.count++;
        st.got = 1;
        goto next;
    }
    if (width == 0) width = 1;
    ch = *s;
    do {
        if (dst != 0) *dst++ = ch;
        ch = *++s;
        width--;
        if (ch == 0) break;
    } while (width > 0);
    if (dst == dst0) goto next;
    st.count++;
    st.got = 1;
    if (width > 0) *dst = 0;
    goto next;

parse_set:
    {
        s32 i = 0;
        s32 neg = 0;
        func_02008e24(0, bits, 0x20);
        ch = *++f;
        st.inv = 1;
        if (ch == '^') { f++; ch = *f; st.inv = 0; }
        if (ch == ']') { bits[(u32)(u8)ch >> 5] |= 1U << (ch & 31); f++; }
        while (*f != 0 && *f != ']') {
            ch = *f;
            if (ch == '-' && i != 0 && f[1] != ']') {
                f++;
                ch = *f;
                func_020125e0(bits, i, ch);
                neg = 1;
                f++;
            } else {
                bits[(u32)(u8)ch >> 5] |= 1U << (ch & 31);
                i = ch;
                f++;
            }
        }
        if (*f == ']') f++;
        st.got = 1;
        if (flags & 0x2000) goto next;
        st.ap++;
        dst = st.ap[-1];
        st.count++;
        if (width == 0) width = (s32)0x80000000;
        ch = *s;
    set_loop:
        if (((bits[(u32)(u8)ch >> 5] >> ((u8)ch & 31)) & 1) != st.inv) goto set_end;
        if (dst != 0) *dst++ = ch;
        ch = *++s;
        width--;
        if (ch == 0) goto set_end;
        if (width > 0) goto set_loop;
    set_end:
        if (dst != 0) *dst = 0;
    }
    goto next;

next:
    c = *f;
    if (c != 0) goto loop;
finish:
    if (*s == 0) {
        st.count = st.got;
        if (st.got == 0) st.count = -1;
    }
    return st.count;
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

