/* 12 functions from 0x02017F74 to 0x02018C20 (main), found by ds-decomp. */
#include "common.h"
extern const u16 data_0213eb14[];
extern const u8 data_0213ea94[];

extern s32 func_02018378(const char *, char **, s32);
typedef struct { const char *p; s32 n; } Input_02018378;
extern s32 func_02017f74(s32, s32, void *, void *, s32 *, s32 *, s32 *);
extern void func_02016c84(void);
extern s32 data_02160034;

typedef struct UnkNum_02018844 {
    u8 unk00[2];
    s16 unk02;
    u8 unk04;
    u8 digits[1];
} UnkNum_02018844;

#pragma opt_propagation off
extern u32 func_0201fd28(u32, u32);
#pragma opt_lifetimes off
s32 func_02017f74(s32 base,s32 width,void *reader,void *ctx,s32 *scanned,s32 *negative,s32 *overflow) {
u32 value; s32 spaces,state,used; long c; u32 limit;
*overflow=0; limit=0; *negative=0; spaces=0; used=0;value=0;state=1;
if(base<0 || base==1 || base>36 || width<1) state=64;
else {used++;c=((s32 (*)(void *,s32,s32))reader)(ctx,0,0);}
if(base) limit=func_0201fd28(0xffffffffU,(u32)base);
while(used<=width && c!=-1 && !(state&96)) {
switch(state) {
case 1:
if((u32)c>=128 ? 0 : data_0213eb14[c]&256) {c=((s32 (*)(void *,s32,s32))reader)(ctx,0,0);spaces++;break;}
if(c=='+') {used++; c=((s32 (*)(void *,s32,s32))reader)(ctx,0,0);}
else if(c=='-') {used++;c=((s32 (*)(void *,s32,s32))reader)(ctx,0,0);*negative=1;}
state=2;break;
case 2:
if(base==0 || base==16) {if(c=='0') {state=4;used++;c=((s32 (*)(void *,s32,s32))reader)(ctx,0,0);break;}}
state=8;break;
case 4:
if(c=='X' || c=='x') {base=16;state=8;used++;c=((s32 (*)(void *,s32,s32))reader)(ctx,0,0);break;}
if(base==0) base=8;state=16;break;
case 8: case 16:
if(base==0) base=10;
if(limit==0) limit=func_0201fd28(0xffffffffU,(u32)base);
if((u32)c>=128 ? 0 : data_0213eb14[c]&8) {
c-='0'; if(c>=base) {state=state==16?32:64; c+='0';break;}
} else {
if(!((u32)c>=128 ? 0 : data_0213eb14[c]&1) || ((u32)c>=128?c:data_0213ea94[c])-55>=base) {state=state==16?32:64;break;}
if(c>=0 && c<128) c=data_0213ea94[c]; c-=55;
}
state=16;
if(value>limit) *overflow=1;
value*=base;
if((u32)c>0xffffffffU-value) *overflow=1;
value+=c;
advance:
used++;c=((s32 (*)(void *,s32,s32))reader)(ctx,0,0);
break;
}
}
if(!(state&52)) {*scanned=0;value=0;} else *scanned=used-1+spaces;
((s32 (*)(void *,s32,s32))reader)(ctx,c,1);
return value;
}
#pragma opt_lifetimes on
s32 func_020182e4(const char *str, char **endptr, s32 base) {
 s32 result, chars_scanned, negative, overflow;
 struct { const char *p; s32 n; } isc;
 isc.p=str; isc.n=0;
 result=func_02017f74(base,0x7fffffff,(void *)func_02016c84,&isc,&chars_scanned,&negative,&overflow);
 if(endptr) *endptr=(char *)str+chars_scanned;
 if(overflow) {
  s32 ret = -1;
  data_02160034=0x22;
  return ret;
 }
 return negative ? -result : result;
}
#pragma opt_propagation on
s32 func_02018378(const char *str, char **endptr, s32 base) {
 u32 result;
 s32 chars_scanned,negative,overflow;
 Input_02018378 isc;
 isc.p=str;isc.n=0;
 result=func_02017f74(base,0x7fffffff,(void *)func_02016c84,&isc,&chars_scanned,&negative,&overflow);
 if(endptr) *endptr=(char *)str+chars_scanned;
 if(overflow || (!negative && result>0x7fffffff) || (negative && result>0x80000000)) {
 result=negative ? (s32)0x80000000 : 0x7fffffff;
 data_02160034=0x22;
 return result;
 }
 return negative ? -result : result;
}

#pragma push
#pragma opt_propagation on
u64 func_0201843c(s32 base,s32 width,void *reader,void *ctx,s32 *scanned,s32 *negative,s32 *overflow) {
s32 state = 1;
s32 spaces;
s32 used;
u64 value;
u64 limit;
s32 c;
*overflow=0;
spaces=0;
*negative=0;
value=0;
used=0;
limit=0;
if(base<0 || base==1 || base>36 || width<1) state=64;
else {used++;c=((s32 (*)(void *,s32,s32))reader)(ctx,0,0);}
if(base) limit=0xffffffffffffffffULL/base;
while(used<=width && c!=-1 && !(state&96)) {
switch(state) {
case 1:
if((u32)c>=128 ? 0 : data_0213eb14[c]&256) {c=((s32 (*)(void *,s32,s32))reader)(ctx,0,0);spaces++;break;}
if(c=='+') {used++; c=((s32 (*)(void *,s32,s32))reader)(ctx,0,0);}
else if(c=='-') {used++;c=((s32 (*)(void *,s32,s32))reader)(ctx,0,0);*negative=1;}
state=2;break;
case 2:
if(base==0 || base==16) {if(c=='0') {state=4;used++;c=((s32 (*)(void *,s32,s32))reader)(ctx,0,0);break;}}
state=8;break;
case 4:
if(c=='X' || c=='x') {base=16;state=8;used++;c=((s32 (*)(void *,s32,s32))reader)(ctx,0,0);break;}
if(base==0) base=8;state=16;break;
case 8: case 16:
if(base==0) base=10;
if(limit==0) limit=0xffffffffffffffffULL/base;
if((u32)c>=128 ? 0 : data_0213eb14[c]&8) {
c-='0'; if(c>=base) {if(state==16) state=32; else state=64; c+='0';break;}
} else {
if(!((u32)c>=128 ? 0 : data_0213eb14[c]&1) || ((u32)c>=128?c:data_0213ea94[c])-55>=base) {if(state==16) state=32; else state=64;break;}
if(c>=0 && c<128) c=data_0213ea94[c]; c-=55;
}
if(value>limit) *overflow=1;
value*=base;
if((u64)c>0xffffffffffffffffULL-value) *overflow=1;
value+=c;
state=16;
used++;c=((s32 (*)(void *,s32,s32))reader)(ctx,0,0);
break;
}
}
if(!(state&52)) {*scanned=0;value=0;} else *scanned=used-1+spaces;
((s32 (*)(void *,s32,s32))reader)(ctx,c,1);
return value;
}
#pragma pop
void func_02018830(void *arg0) {
    func_02018378(arg0, 0, 0xa);
}

s32 func_02018844(u8 *arg0, s32 arg1)
{
  u8 *p;
  u8 *data = arg0 + 5;
  u8 digit = data[arg1];
  if (digit > 5)
  {
    return 1;
  }
  if (digit < 5)
  {
    return -1;
  }
  p = (data + arg1) + 1;
  while (p < ((arg0 + 5) + arg0[4]))
  {
    if ((*p) != 0)
    {
      return 1;
    }
    p++;
  }

  {
    s32 prev = arg1 - 1;
    u8 *prevPtr = arg0 + prev;
    return (prevPtr[5] & 1) ? (1) : (-1);
  }
}

void func_020188b0(UnkNum_02018844 *arg0, s32 arg1) {
    u8 *p = arg0->digits + arg1;
    p--;
    do {
        if (*p < 9) {
            *p = *p + 1;
            return;
        }
        if (p == arg0->digits) {
            *p = 1;
            arg0->unk02++;
            return;
        }
        *p-- = 0;
    } while (1);
    while (1) {}
}

void func_020188fc(void) {
}

void func_02018900(u8 *arg0, s32 arg1) {
    s32 ret;
    if (arg1 <= 0 || arg1 >= arg0[4]) {
        return;
    }
    ret = func_02018844(arg0, arg1);
    arg0[4] = arg1;
    if (ret < 0) {
        return;
    }
    func_020188b0((void *)arg0, arg1);
}

void func_02018940(UnkNum_02018844 *p, unsigned long long n)
{
  u8 *a;
  u8 *b;
  p->unk00[0] = 0;
  p->unk04 = 0;
  while (n)
  {
    p->digits[p->unk04++] = n % 10;
    n /= 10;
  }

  a = p->digits;
  b = (a + p->unk04) - 1;
  while (a < b)
  {
    u8 x = *a;
    u8 y = *b;
    *a = y;
    *b = x;
    a++;
    b--;
  }

  p->unk02 = p->unk04 - 1;
}

#pragma opt_propagation off
void func_02018a04(UnkNum_02018844 *out, const UnkNum_02018844 *a, const UnkNum_02018844 *b) {
    u8 buf[64];
    u32 carry = 0;
    s32 k = a->unk04 + b->unk04 - 1;
    u8 *end = buf + k + 1;
    u8 *p = end;
    s32 n, i, j;
    const u8 *y, *x;
    out->unk00[0] = 0;
    while (k > 0) {
        s32 max_n;
        j = b->unk04 - 1;
        i = k - j - 1;
        if (i < 0) {
            i = 0;
            j = k - 1;
        }
        n = j + 1;
        max_n = a->unk04 - i;
        if (n > max_n) n = max_n;
        x = a->digits + i;
        y = b->digits + j;
        while (n > 0) {
            u32 digit = *x++;
            carry += digit * *y--;
            n--;
        }
        *--p = carry % 10;
        carry /= 10;
        k--;
    }
    out->unk02 = a->unk02 + b->unk02;
    if (carry) {
        *--p = carry;
        out->unk02++;
    }
    i = 0;
    while (i < 32 && p < end) {
        out->digits[i++] = *p++;
    }
    out->unk04 = i;
    if (p >= end) return;
    if (*p < 5) return;
    if (*p == 5) {
        u8 *q = p + 1;
        while (q < end) {
            if (*q) goto round_up;
            q++;
        }
        if (!(p[-1] & 1)) return;
    }
round_up:
    func_020188b0(out, out->unk04);
}
#pragma opt_propagation on
void func_02018b84(u8 *arg0, u8 *arg1, u16 arg2) {
    s32 i = 0;
    u8 c;
    *(u16 *)(arg0 + 2) = arg2;
    arg0[0] = 0;
    while (i < 0x20 && *arg1 != 0) {
        (arg0 + 5)[i] = *arg1++ - '0';
        i++;
    }
    c = *arg1;
    arg0[4] = i;
    if (c == 0) return;
    if (c < 5) return;
    if (c <= 5) {
        c = arg1[1];
        arg1++;
        while (c != 0) {
            if (c != '0') goto round_up;
            c = *++arg1;
        }
        if (((arg0 + 5)[i - 1] & 1) == 0) return;
    }
round_up:
    func_020188b0((void *)arg0, arg0[4]);
}

