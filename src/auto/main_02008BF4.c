/* 52 functions from 0x02008BF4 to 0x02009B24 (main), found by ds-decomp. */
#include "common.h"
extern u8 data_0215d480[];
extern u8 data_0215e480[];
extern u32 data_0215ec68[];
extern u32 data_0215d200[];
extern u32 *data_0215ece0;
extern void func_02009e60(void);
extern void func_0200a08c(void);
extern void func_02009b24(s32);

extern u16 data_0215d1a0;
extern s32 data_0215d19c;
extern u32 *data_0215d1b8[9];
extern s32 func_02006afc(u16 *);
extern s32 func_02006b4c(u16 *);
typedef struct {
    u32 field_0;
    u32 field_4;
    u32 field_8;
    u32 field_c;
    u32 field_10;
    u32 field_14;
    u32 field_18;
    u32 field_1c;
} Data_215d17c;
extern Data_215d17c data_0215d17c;
extern void func_020058fc(u32, u32, u32);
extern void func_01ff845c(u32, u32, u32, u32, u32);
extern void func_02005a14(u32);
extern void func_020059e4(u32);
extern void func_020057e8(u32, u32);
extern void func_02008a28(u32, u32);
extern void func_02008ab4(u32, u32, u32, u32);
extern void func_0200893c(u32);
extern void func_02008ca8(void);
extern void func_02008dc4(void);
typedef void (*Fn_U32)(u32);
extern void func_02008558(s32);
extern void func_02008998(s32);
extern void func_020097a8(u32, s32, s32, s32);
extern void func_020097f0(u32, u32, u32, u32, u32);
extern u32 *func_02009a64(s32);
extern void func_02009aec(u32 *);
typedef struct { u32 a[8]; } Copy32B;
typedef struct { u32 a[9]; } Copy36B;
typedef struct { u32 a[12]; } Copy48B;
typedef struct { u32 f0, f4, f8, fc; } Queue;

void func_02008bf4(void) {
    u32 base;
    u32 size;
    u32 remaining;
    size = *(volatile u32 *)&data_0215d17c.field_c;
    if (size == 0) {
        return;
    }
    if (size >= 0x1d8) {
        size = 0x1d8;
    }
    base = data_0215d17c.field_8;
    remaining = data_0215d17c.field_c - size;
    data_0215d17c.field_c = remaining;
    data_0215d17c.field_8 = base + size;
    if (remaining == 0) {
        func_020058fc(data_0215d17c.field_4, (u32)func_02008ca8, 0);
        func_01ff845c(data_0215d17c.field_4, base, 0x4000400, 0xc4400000 | (size >> 2), 0);
        func_02005a14(0x200000);
        return;
    }
    func_01ff845c(data_0215d17c.field_4, base, 0x4000400, 0x84400000 | (size >> 2), 0);
    func_02005a14(0x200000);
}

void func_02008ca8(void) {
    Fn_U32 fn;
    u32 arg;
    func_020059e4(0x200000);
    *(volatile u32 *)0x04000600 = (data_0215d17c.field_18 << 30) | (*(volatile u32 *)0x04000600 & ~0xc0000000);
    func_020057e8(0x200000, data_0215d17c.field_1c);
    data_0215d17c.field_0 = 0;
    fn = (Fn_U32)data_0215d17c.field_10;
    arg = data_0215d17c.field_14;
    if (fn != NULL) {
        fn(arg);
    }
}

void func_02008d08(u32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
 if(arg2==0) { if(arg3) ((Fn_U32)arg3)(arg4); return; }
 while(*(volatile u32 *)&data_0215d17c.field_0) {}
 *(volatile u32 *)&data_0215d17c.field_0=1;
 *(volatile u32 *)&data_0215d17c.field_4=arg0;
 data_0215d17c.field_10=arg3;
 data_0215d17c.field_14=arg4;
 func_02008a28(arg0,0x38000000);
 func_02008ab4(arg0,arg1,arg2,0);
 func_0200893c(arg0);
 func_020058fc(arg0,(u32)func_02008dc4,0);
 func_01ff845c(arg0,arg1,0x4000400,(-0x3c00000)|(arg2>>2),0);
}

void func_02008dc4(void) {
    void (*cb)(u32);
    u32 arg;
    data_0215d17c.field_0 = 0;
    cb = (void (*)(u32))data_0215d17c.field_10;
    arg = data_0215d17c.field_14;
    if (cb != NULL) {
        cb(arg);
    }
}

void func_02008df0(u16 val, u8 *dst, s32 size) {
 s32 i=0;
again:
 if (i < size) { *(u16 *)(dst+i)=val; i+=2; goto again; }
}

void func_02008e08(u8 *src, u8 *dst, s32 size) {
 s32 i=0;
again:
 if(i<size) { *(u16 *)(dst+i)=*(u16 *)(src+i); i+=2; goto again; }
}

void func_02008e24(u32 value,u32 *dst,u32 bytes) { u32 *end=(u32*)((u8*)dst+bytes); again: if((s32)dst<(s32)end) { *dst++=value; goto again; } }

void func_02008e38(const u32 *src, u32 *dst, u32 size) { u32 *end=(u32 *)((u8 *)dst+size); again: if ((s32)dst < (s32)end) { *dst++=*src++; goto again; } }

void func_02008e50(u32 *src, u32 *dst, s32 size) {
    u32 *end = (u32 *)((u8 *)src + size);
    while (1) {
        if ((s32)src >= (s32)end) {
            return;
        }
        *dst = *src++;
    }
}

void func_02008e68(u32 value,u32 *start,u32 size) {
 s32 end=(s32)start+size;
 s32 end32=(s32)start+((size>>5)<<5);
 while((s32)start<end32){
 start[0]=value;start[1]=value;start[2]=value;start[3]=value;
 start[4]=value;start[5]=value;start[6]=value;start[7]=value;
 start+=8;
 }
 while((s32)start<end)*start++=value;
}

void func_02008eb4(u32 *src, u32 *dst, u32 bytes) {
    u32 *end = (u32 *)((u8 *)dst + bytes);
    while (dst < end) {
        *dst++ = *src++;
    }
}

void func_02008eec(const Copy32B *src, Copy32B *dst) {
    *dst = *src;
}

void func_02008f08(const Copy36B *src, Copy36B *dst)
{
    typedef struct {
        u32 words[3];
    } Copy12B;

    const Copy12B *s = (const Copy12B *)src;
    Copy12B *d = (Copy12B *)dst;

    *d++ = *s++;
    *d++ = *s++;
    *d++ = *s++;
}

void func_02008f24(const Copy48B *src, Copy48B *dst) {
    *dst = *src;
}

void func_02008f48(const void *src, void *dst) {
    typedef struct { u32 a[16]; } Copy64B;
    const Copy64B *s = (const Copy64B *)src;
    Copy64B *d = (Copy64B *)dst;
    *d = *s;
}

#pragma push
#pragma opt_tail_merge off
void func_02008f74(u8 *p, u32 value, u32 size) {
u32 count;
if(size==0) return;
if((u32)p&1) {
u32 old=*(u16 *)(p-1)&255;
*(u16 *)(p-1)=old|(value<<8);
p++; if(--size==0) return;
}
if(size>=2) {
value|=value<<8;
if((u32)p&2) {
*(u16 *)p=value; p+=2; size-=2; if(size==0) return;
}
value|=value<<16;
count=size&~3;
if(count) {
u8 *end;
size-=count;
end=count+p;
do { *(u32 *)p=value; p+=4; } while(p<end);
}
if(size&2) { *(u16 *)p=value; p+=2; }
}
if(!(size&1)) return;
{
u32 old=*(u16 *)p&0xff00;
value&=255;
*(u16 *)p=value|old;
}
}
#pragma pop
void func_02009008(u8 *src, u8 *dst, u32 size)
{
  u32 align;
  unsigned short new_var;
  u32 value;
  unsigned int new_var2;
  u32 n;
  u8 *new_var3;
  u8 *end;
  if (size == 0)
  {
    return;
  }
  if (((u32) dst) & 1)
  {
    value = (*((volatile u16 *) (dst - 1))) & 255;
    if (((u32) src) & 1)
    {
      *((volatile u32 *) dst) = value;
      size = ((u32) (*((volatile u16 *) (src - 1)))) >> 8;
    }
    else
    {
      size = *((volatile u16 *) src);
    }
    *((volatile u16 *) (dst - 1)) = value | (size << 8);
    src++;
    dst++;
    if ((--size) == 0)
    {
      return;
    }
  }
  align = ((u32) dst) ^ ((u32) src);
  new_var = 2;
  if (align & 1)
  {
    src = (u8 *) (((u32) src) & (~1));
    size = *((volatile u16 *) src);
    src += new_var;
    size >>= 8;
    while (size >= 2)
    {
      value = *((volatile u16 *) src);
      src += 2;
      new_var3 = (dst += new_var);
      value = (*((volatile u16 *) dst) = size | (value << 8));
      size = new_var3;
      size = value >> 16;
    }

    if (!(size & 1))
    {
      *((volatile u16 *) dst) = value;
      return;
    }
    *((volatile u16 *) dst) = ((*((volatile u16 *) dst)) & 0xff00) | size;
    return;
  }
  if (align & new_var)
  {
    n = size & (~1u);
    if (n == 0)
    {
      goto tail;
    }
    value = n;
    size -= n;
    end = (u8 *) (value + ((u32) dst));
    do
    {
      value = *((volatile u16 *) src);
      src += new_var;
      *((volatile u16 *) dst) = (u16) value;
      dst += new_var;
    }
    while (dst < end);
    goto tail;
  }
  new_var2 = *((volatile u16 *) src);
  if (size < new_var)
  {
    goto tail;
  }
  if ((((u32) dst) & new_var) != 0)
  {
    value = new_var2;
    src += new_var;
    *((volatile u16 *) dst) = (u16) value;
    dst += 2;
    if ((size -= new_var) == 0)
    {
      return;
    }
  }
  n = size & (~3u);
  if (n != 0)
  {
    size -= n;
    end = (u8 *) (n + ((u32) dst));
    do
    {
      value = *((volatile u32 *) src);
      src += 4;
      *((volatile u32 *) dst) = value;
      dst += 4;
    }
    while (dst < end);
  }
  if (size & new_var)
  {
    value = *((volatile u16 *) src);
    src += new_var;
    *((volatile u16 *) dst) = (u16) value;
    dst += new_var;
  }
  tail:
  if (!(size & 1))
  {
    return;
  }

  value = (*((volatile u16 *) dst)) & 0xff00u;
  size = (*((volatile u16 *) src)) & 255u;
  *((volatile u16 *) dst) = (u16) ((0, value | size));
}

void func_02009138(u32 *dst) {
    u32 i;
    for (i = 0; i < 9; i++) {
        dst[i] = 0;
    }
}

extern u32 __swp(u32, u32 *);
u32 func_02009148(u32 val, u32 *ptr) {
    return __swp(val, ptr);
}

void func_02009150(const u8 *src,u8 *dst) {
u32 header=*(const u32*)src; s32 remaining=header>>8; u32 extended=0;
src+=4; if(header&15)extended=1;
outer:
if(remaining<=0)return;
{u32 flags=*src++; s32 n=8;
inner:
if(--n<0)goto outer;
if(!(flags&128)){u8 value=*src++; *(volatile u8*)dst=value; dst++; remaining--;}
else {
s32 byte=*src; s32 base,length; u32 offset;
if(!extended)base=3;
else if(byte&224)base=1;
else {
src++; base=(byte&15)<<4;
if(byte&16){base<<=8; base+=*src++<<4; base+=256;}
base+=17; byte=*src;
}
length=base+(byte>>4); src++; offset=(byte&15)<<8; offset|=*src++; offset++;
remaining-=length;
do {u8 value=dst[-(s32)offset]; *(volatile u8*)dst=value; dst++;}while(--length>0);
}
if(remaining>0){flags<<=1;goto inner;}
goto outer;
}
}

void func_02009230(u8 *src, u16 *dst) {
    u32 packed = 0, shift = 0;
    u32 header = *(u32 *)src;
    s32 remaining = header >> 8;
    int extended = (header & 15) != 0;
    src += 4;
    while (remaining > 0) {
        u32 flags = *src++;
        s32 bit = 8;
        while (--bit >= 0) {
            if (!(flags & 128)) {
                packed |= (u32)*src++ << shift;
                remaining--;
                shift ^= 8;
                if (!shift) {
                    *dst++ = packed;
                    packed = 0;
                }
            } else {
                s32 b = *src;
                s32 length;
                u32 distance, offset;
                if (!extended)
                    length = 3;
                else if (b & 0xe0)
                    length = 1;
                else {
                    src++;
                    length = (b & 15) << 4;
                    if (b & 16) {
                        length <<= 8;
                        length += *src++ << 4;
                        length += 0x111;
                    }
                    b = *src;
                }
                length += b >> 4;
                b = *src++;
                distance = ((b & 15) << 8) | *src++;
                distance++;
                offset = ((8 - shift) ^ ((distance & 1) << 3)) ^ 8;
                remaining -= length;
                do {
                    u32 back = ((distance + ((8 - shift) >> 3)) >> 1) << 1;
                    s32 value = *(u16 *)((u8 *)dst - back);
                    value = (value & (255 << offset)) >> offset;
                    packed |= value << shift;
                    shift ^= 8;
                    if (!shift) {
                        *dst++ = packed;
                        packed = 0;
                    }
                } while (--length > 0);
            }
            if (remaining <= 0)
                break;
            flags <<= 1;
        }
    }
}

void func_02009354(const u8 *src,u32 *dst) {
const u8 *table=src+4; const u8 *tree=table+1; const u8 *node;
u32 width=src[0]&15; u32 out=0,count=0; u32 limit=(width&7)+4;
s32 remaining=*(const u32*)src>>8;
const u32 *bits=(const u32*)(table+2*(table[0]+1));
node=tree;
outer:
if(remaining<=0)return;
{ s32 n=32; u32 word=*bits++;
inner:
if(--n<0)goto outer;
{ u32 right=(word>>31)&1; u32 leaf=*(const volatile u8*)node<<right;
node=(const u8*)(((u32)node>>1)<<1)+((*(const volatile u8*)node&63)+1)*2+right;
if(leaf&128) {
out>>=width; out|=(u32)*node<<(32-width); node=tree; count++;
if(count==limit){*dst++=out; remaining-=4; count=0;}
}
if(remaining>0){word<<=1;goto inner;}
goto outer;
}
}
}

void func_0200942c(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    func_02008a28(arg0, ~0u);
    func_02008ab4(arg0, arg1, arg3, 0x1000000);
    if (arg3 == 0) {
        return;
    }
    {
        volatile u32 *reg = (volatile u32 *)(0x04000000 + 0xb0 + ((arg0 * 3) + 2) * 4);
        while (*reg & 0x80000000) {
        }
        func_01ff845c(arg0, arg1, arg2, 0xaf000001, 0);
    }
}

void func_020094a8(void) {
    func_02008558(3);
    func_02008998(0);
}

void func_020094c0(u32 arg0) {
    func_020097f0(1, arg0, 0, 0, 0);
}

void func_020094e0(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    func_020097f0(2, arg0, arg1, arg2, arg3);
}

void func_02009508(u32 arg0) {
    func_020097f0(3, arg0, 0, 0, 0);
}

void func_02009528(u32 arg0, s32 arg1) {
    func_020097a8(arg0, 6, arg1, 2);
}

void func_02009540(u32 arg0, u32 arg1) {
    func_020097a8(arg0, 4, arg1, 1);
}

void func_02009558(u32 arg0, u32 arg1, u32 arg2) {
    func_020097f0(9, arg0, arg1, arg2, 0);
}

void func_02009580(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    func_020097f0(0xc, arg0, arg1, arg2, arg3);
}

extern void func_02009fac(s32);
void func_020095a8(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    s32 i;
    u32 mask = arg2;
    for (i = 0; i < 8 && mask != 0; i++, mask >>= 1) {
        if (mask & 1) {
            func_02009fac(i);
        }
    }
    func_020097f0(0xd, arg0, arg1, arg2, arg3);
}

void func_0200960c(u32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    u32 ret = func_02009fcc(arg0, arg3, arg4);
    func_020097f0(0x12, arg0, arg1, arg2, ret);
}

void func_0200964c(u32 arg0, u32 arg1) {
    func_020097f0(0x1a, arg0, arg1, 0, 0);
}

void func_0200966c(u32 arg0, u32 arg1) {
    func_020097f0(0x1b, arg0, arg1, 0, 0);
}

void func_0200968c(u32 arg0, u32 arg1, u32 arg2) {
    func_020097f0(0x14, arg0, arg1, arg2, 0);
}

void func_020096b4(u32 arg0, u32 arg1) {
    func_020097f0(0x15, arg0, arg1, 0, 0);
}

void func_020096d4(u32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5, u32 arg6, u32 arg7, u32 arg8, u32 arg9) {
    u32 v4 = (arg3 << 26) | (arg1 << 24) | (arg9 << 16) | arg4;
    u32 v3 = (arg6 << 24) | (arg7 << 22) | arg5;
    u32 v1 = arg0 | (arg8 << 16);
    func_020097f0(0xe, v1, arg2, v3, v4);
}

void func_02009720(u32 arg0, u32 arg1) {
    func_020097f0(0x1e, arg0, arg1, 0, 0);
}

void func_02009740(u32 arg0, u32 arg1) {
    func_020097f0(0x1f, arg0, arg1, 0, 0);
}

void func_02009760(u32 arg0, u32 arg1) {
    func_020097f0(0x20, arg0, arg1, 0, 0);
}

void func_02009780(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    func_020097f0(0x19, arg0, arg1, arg2, arg3);
}

void func_020097a8(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_020097f0(6, arg0, arg1, arg2, arg3);
}

void func_020097d0(u32 arg0) {
    func_020097f0(0x16, arg0, 0, 0, 0);
}

void func_020097f0(u32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    u32 *cmd = func_02009a64(1);
    if (cmd == NULL) {
        return;
    }
    cmd[1] = arg0;
    cmd[2] = arg1;
    cmd[3] = arg2;
    cmd[4] = arg3;
    cmd[5] = arg4;
    func_02009aec(cmd);
}

extern void func_02006ad8(u16 *);
extern void func_02009894(void);
extern void func_02009f74(void);
extern s32 func_02009f34(void);
extern u32 *func_02009eec(void);
extern s32 func_02009e20(void);
extern s32 func_02009964(s32);
extern void func_02009b24(s32);
extern void func_02009ec4(void);
extern s32 func_02008128(void);
extern void func_0200813c(s32);
void func_02009834(void) {
    if (data_0215d19c != 0) {
        return;
    }
    data_0215d19c = 1;
    func_02006ad8(&data_0215d1a0);
    func_02009894();
    func_02009f74();
}

s32 func_0200986c(void) {
    return func_02006afc(&data_0215d1a0);
}

s32 func_02009880(void) {
    return func_02006b4c(&data_0215d1a0);
}

#pragma optimization_level 2
void func_02009894(void) {
    s32 i;
    u32 *p;
    func_02009e60();
    data_0215d1b8[0] = (u32)data_0215d480;
    for (i = 0; i < 255; i++) {
        *(u32 *)(data_0215d480 + i * 24) = (u32)(data_0215d480 + (i + 1) * 24);
    }
    *(u32 *)(data_0215e480 + 0x7e8) = 0;
    data_0215d1b8[4] = (u32)data_0215ec68;
    data_0215d1b8[2] = 0;
    data_0215d1b8[3] = 0;
    data_0215d1b8[7] = 0;
    data_0215d1b8[5] = 0;
    data_0215d1b8[6] = 0;
    data_0215d1b8[8] = 1;
    data_0215d1b8[1] = 0;
    data_0215ece0 = (u32)data_0215d200;
    func_0200a08c();
    p = (u32 *)func_02009a64(1);
    if (!p) {
        return;
    }
    p[1] = 0x1d;
    p[2] = data_0215ece0;
    func_02009aec(p);
    func_02009b24(1);
}
#pragma optimization_level 4
extern void *data_0215d1dc[];
extern void func_020081a4(u32);
extern u32 func_0200a068(void);
s32 func_02009964(s32 arg0) {
    s32 intr = func_02008128();
    u32 *r5;
    u32 *r1;
    s32 idx;

    if (arg0 & 1) {
        while ((u32)data_0215d1b8[1] == func_0200a068()) {
            func_0200813c(intr);
            func_020081a4(50);
            intr = func_02008128();
        }
    } else {
        if ((u32)data_0215d1b8[1] == func_0200a068()) {
            func_0200813c(intr);
            return 0;
        }
    }

    idx = (s32)data_0215d1b8[5];
    r5 = (u32 *)data_0215d1dc[idx];
    idx++;
    data_0215d1b8[5] = (u32 *)idx;
    if (idx > 8) {
        data_0215d1b8[5] = (u32 *)0;
    }

    r1 = r5;
    while (*r1 != 0) {
        r1 = (u32 *)*r1;
    }

    if (data_0215d1b8[4] != NULL) {
        *data_0215d1b8[4] = (u32)r5;
    } else {
        data_0215d1b8[0] = r5;
    }
    data_0215d1b8[4] = r1;
    data_0215d1b8[7] = (u32 *)((s32)data_0215d1b8[7] - 1);
    data_0215d1b8[1] = (u32 *)((s32)data_0215d1b8[1] + 1);

    func_0200813c(intr);
    return (s32)r5;
}

u32 *func_02009a64(s32 arg0) {
    u32 *cmd;
    if (!func_02009f34()) {
        return NULL;
    }
    cmd = func_02009eec();
    if (cmd != NULL) {
        return cmd;
    }
    if (!(arg0 & 1)) {
        return NULL;
    }
    if (func_02009e20() > 0) {
        while (func_02009964(0) != 0);
        cmd = func_02009eec();
        if (cmd != NULL) {
            return cmd;
        }
    } else {
        func_02009b24(1);
    }
    func_02009ec4();
    do {
        func_02009964(1);
        cmd = func_02009eec();
    } while (cmd == NULL);
    return cmd;
}

void func_02009aec(u32 *arg0)
{
  s32 irq = func_02008128();
  if (data_0215d1b8[3] == NULL)
  {
    data_0215d1b8[2] = arg0;
    data_0215d1b8[3] = arg0;
  }
  else
  {
    data_0215d1b8[3][0] = (u32) arg0;
    data_0215d1b8[3] = arg0;
  }
  arg0[0] = 0;
  func_0200813c(irq);
}

