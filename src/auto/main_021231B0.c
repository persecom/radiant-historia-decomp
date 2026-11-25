/* 20 functions from 0x021231B0 to 0x021241A4 (main), found by ds-decomp. */
#include "common.h"
extern s32 data_02171264[], data_02171268[], data_0217126c[];
extern void func_02008e38(const void *, void *, u32);
static inline void ScalePair_02123da4(s32 scale, u32 *a, u32 *b) {
 s32 x=((s64)scale*(s32)*a)>>12;
 s32 y=((s64)scale*(s32)*b)>>12;
 *a=x;*b=y;
}
extern u8 *data_02170460;
extern s32 data_02171270[],data_02171274[],data_02171278[];

typedef struct { s32 x, y, z; } Vec_02123a6c;
static inline void mul_02123a6c(Vec_02123a6c *a, Vec_02123a6c *b, Vec_02123a6c *v) {
s32 x=((s64)a->x*b->x)>>12;
s32 y=((s64)a->y*b->y)>>12;
s32 z=((s64)a->z*b->z)>>12;
v->x=x;v->y=y;v->z=z;
}

extern void func_02002058(s32, s32);
extern s32 func_02001ff4(void);
extern void func_021205ec(s32, void *, s32);
static inline void G3dGeTranslate_02123a6c(s32 x, s32 y, s32 z) {
    s32 v[3];
    v[0] = x;
    v[1] = y;
    v[2] = z;
    func_021205ec(0x1c, v, 3);
}
extern void (*data_021560f0[8])(s32 *, u8 *);
void func_021231b0(u32 *arg0, u8 *arg1, u32 arg2) {
    u8 *ptr = *(u8 **)(arg1 + 8);
    s32 frame = *(s32 *)(arg1 + 0);
    s32 limit = *(u16 *)(ptr + 4) << 12;
    u32 bit;
    if (frame >= limit) {
        frame = limit - 1;
    } else if (frame < 0) {
        frame = 0;
    }
    bit = (frame >> 12) * *(u16 *)(ptr + 6) + arg2;
    *arg0 = *(u32 *)(ptr + 0xc + (bit >> 5) * 4) & (1 << (bit & 0x1f));
}

void func_02123204(u8 *arg0) {
    u32 flags = *(u32 *)arg0;
    if (!(flags & 4)) {
        if (!(flags & 2)) {
            func_021205ec(0x19, arg0 + 0x28, 0xc);
        } else {
            func_021205ec(0x1c, arg0 + 0x4c, 3);
        }
    } else if (!(flags & 2)) {
        func_021205ec(0x1a, arg0 + 0x28, 9);
    }
    if (!(*(u32 *)arg0 & 1)) {
        func_021205ec(0x1b, arg0 + 4, 3);
    }
}

void func_02123278(u32 *arg0, u32 *arg1, s32 arg2, u32 arg3) {
    if ((arg3 & 4) == 0) {
        u32 x = arg1[0];
        u32 y = arg1[1];
        u32 z = arg1[2];
        arg0[1] = x;
        arg0[1] = x;
        arg0[2] = y;
        arg0[3] = z;
    } else {
        arg0[0] |= 1;
    }
    arg0[0] |= 0x18;
}

void func_021232b4(u8 *arg0) {
    u32 flags = *(u32 *)arg0;
    s32 sendTrans = 0;
    if (!(flags & 4)) {
        sendTrans = 1;
    }
    if ((flags & 0x20) && !(flags & 8)) {
        if (sendTrans) {
            func_021205ec(0x1c, arg0 + 0x4c, 3);
            sendTrans = 0;
        }
        func_021205ec(0x1b, arg0 + 0x10, 3);
    }
    if (!(*(u32 *)arg0 & 2)) {
        if (sendTrans) {
            func_021205ec(0x19, arg0 + 0x28, 0xc);
        } else {
            func_021205ec(0x1a, arg0 + 0x28, 9);
        }
    } else if (sendTrans) {
        func_021205ec(0x1c, arg0 + 0x4c, 3);
    }
    if (!(*(u32 *)arg0 & 1)) {
        func_021205ec(0x1b, arg0 + 4, 3);
    }
}

#pragma optimization_level 3
void func_02123370(u32 *out, const u32 *in, const u8 *p, u32 flags)
{
  u8 bits = p[3];
  if (flags & 4)
  {
    out[0] |= 1;
    if (bits & 2)
    {
      u32 index = p[1];
      u32 *map = (u32 *) (data_02170460 + 0xc4);
      map[index >> 5] |= 1 << (index & 31);
    }
  }
  else
  {
    u32 x = ((volatile u32 *) in)[0];
    u32 y = ((volatile u32 *) in)[1];
    u32 z = ((volatile u32 *) in)[2];
    out[1] = x;
    out[2] = y;
    out[3] = z;
    if (bits & 2)
    {
      register u32 index = p[1];
      u32 *map = (u32 *) (data_02170460 + 0xc4);
      map[index >> 5] &= ~(1 << (index & 31));
      *((volatile u32 *)((u8 *)data_02171270 + (s16)index * 24)) = in[3];
      *((volatile u32 *)((u8 *)data_02171274 + (s16)index * 24)) = ((volatile u32 *)in)[4];
      *((volatile u32 *)((u8 *)data_02171278 + (s16)index * 24)) = in[5];
    }
  }
  if (bits & 1)
  {
    {
      u32 index = p[2];
      out[0] |= 0x20;
      if (((u32 *) (data_02170460 + 0xc4))[index >> 5] & (1 << (index & 31)))
      {
        out[0] |= 8;
      }
      else
      {
        *((Vec_02123a6c *) (out + 4)) = *((Vec_02123a6c *) (((u8 *) data_02171270) + (index * 24)));
      }
    }
  }
  out[0] |= 0x10;
}
#pragma optimization_level 4
void func_021234b8(s32 *out,u8 *p) {
s32 w=*(u16 *)(p+0x2c)<<12,h=*(u16 *)(p+0x2e)<<12;
s32 s,c,sx,sy,ss,cx,ys,cy;
func_02002058(h,w);
s=*(s16 *)(p+0x20);sx=*(s32 *)(p+0x18);c=*(s16 *)(p+0x22);sy=*(s32 *)(p+0x1c);
ss=((s64)sx*s)>>12;cx=((s64)sx*c)>>12;
ys=((s64)sy*s)>>12;cy=((s64)sy*c)>>12;
out[0]=cx;out[5]=cy;
out[1]=(-ys*func_02001ff4())>>12;
func_02002058(w,h);
{
s32 a=ys-cy,b=ss+cx;
s32 sx2=*(s32 *)(p+0x18),w2=*(u16 *)(p+0x2c);
out[12]=((w2*(sx2-b))<<3)-w2*(s32)(((s64)sx2**(s32 *)(p+0x24))>>8);
{
s32 sy2=*(s32 *)(p+0x1c),h2=*(u16 *)(p+0x2e);
out[13]=h2*(s32)(((s64)sy2**(s32 *)(p+0x28))>>8)+((h2*(a-sy2+0x2000))<<3);
}
}
out[4]=(ss*func_02001ff4())>>12;
}

void func_021235c0(s32 *arg0, u8 *arg1) {
s32 w=*(u16*)(arg1+0x2c)<<12;
s32 h=*(u16*)(arg1+0x2e)<<12;
s32 val;
func_02002058(h,w);
val=*(s16*)(arg1+0x22); arg0[0]=val; arg0[5]=val;
arg0[1]=(-*(s16*)(arg1+0x20)*func_02001ff4())>>12;
func_02002058(w,h);
{
s32 s1=*(s16*)(arg1+0x20), s2=*(s16*)(arg1+0x22);
s32 w2=*(u16*)(arg1+0x2c), f24=*(s32*)(arg1+0x24);
s32 diff=s1-s2, sum=s1+s2;
s32 neg=(s32)(0U-(u32)sum);
w=((w2*(neg+0x1000))<<3)-((f24*w2)<<4);
{
s32 h2=*(u16*)(arg1+0x2e), f28=*(s32*)(arg1+0x28);
s2=h2*(diff+0x1000U);
h=(s2<<3)+((f28*h2)<<4); arg0[12]=w; arg0[13]=h;
}
}
arg0[4]=(*(s16*)(arg1+0x20)*func_02001ff4())>>12;
}

#pragma opt_propagation off
void func_02123684(s32 *__restrict arg0, u8 *__restrict arg1) {
s32 scaleT=*(s32 *)(arg1+0x1c);
s32 scaleS=*(s32 *)(arg1+0x18);
s32 transS=*(s32 *)(arg1+0x24);
s32 transT=*(s32 *)(arg1+0x28);
s32 ts=(s32)(((s64)scaleS * transS)>>8);
s32 tt=(s32)(((s64)scaleT * transT)>>8);
arg0[0]=scaleS; arg0[5]=scaleT; arg0[1]=0;
arg0[12]=*(u16 *)(arg1+0x2c)*-ts;
arg0[13]=*(u16 *)(arg1+0x2e)*tt+((*(u16 *)(arg1+0x2e)*(-(scaleT<<1)+0x2000U))<<3);
arg0[4]=0;
}
#pragma opt_propagation on
void func_021236f8(s32 *__restrict arg0, u8 *__restrict arg1) {
arg0[0]=0x1000; arg0[5]=0x1000; arg0[1]=0;
arg0[12]=(-(*(s32 *)(arg1+0x24) * *(u16 *)(arg1+0x2c)))<<4;
arg0[13]=(*(s32 *)(arg1+0x28) * *(u16 *)(arg1+0x2e))<<4;
arg0[4]=0;
}

void func_02123744(s32 *__restrict out, u8 *p) {
    s32 w = *(u16 *)(p + 0x2c) << 12;
    s32 h = *(u16 *)(p + 0x2e) << 12;
    s32 s, c, sx, sy, xs, xc, ys, cy;

    func_02002058(h, w);
    s = *(s16 *)(p + 0x20);
    sx = *(s32 *)(p + 0x18);
    c = *(s16 *)(p + 0x22);
    sy = *(s32 *)(p + 0x1c);
    xs = ((s64)sx * s) >> 12;
    xc = ((s64)sx * c) >> 12;
    ys = ((s64)sy * s) >> 12;
    cy = ((s64)sy * c) >> 12;
    out[0] = xc;
    out[5] = cy;
    out[1] = (-ys * func_02001ff4()) >> 12;
    func_02002058(w, h);
    {
        s32 a = ys - cy;
        s32 b = xs + xc;
        out[12] = (*(u16 *)(p + 0x2c) * (*(s32 *)(p + 0x18) - b)) << 3;
        out[13] = (*(u16 *)(p + 0x2e) * ((a - *(s32 *)(p + 0x1c)) + 0x2000)) << 3;
    }
    out[4] = (xs * func_02001ff4()) >> 12;
}

void func_02123824(s32 *arg0, u8 *arg1)
{
  s32 w = (*((u16 *) (arg1 + 0x2c))) << 12;
  s32 h = (*((u16 *) (arg1 + 0x2e))) << 12;
  s32 val;
  func_02002058(h, w);
  val = *((s16 *) (arg1 + 0x22));
  arg0[0] = val;
  arg0[5] = val;
  arg0[1] = ((-(*((s16 *) (arg1 + 0x20)))) * func_02001ff4()) >> 12;
  func_02002058(w, h);
  {
    u16 w2 = *((u16 *) (arg1 + 0x2c));
    u32 h2 = *((u16 *) (arg1 + 0x2e));
    s32 s1 = *((s16 *) (arg1 + 0x20));
    s32 s2 = *((s16 *) (arg1 + 0x22));
    s32 sum = s1 + s2;
    s32 diff = s1 - s2;
    s32 neg = (s32) (((u32) 0) - ((u32) sum));
    arg0[12] = 0x1000;
    arg0[12] = (w2 * (neg + arg0[12])) << 3;
    arg0[13] = (h2 * (diff + 0x1000)) << 3;
  }
  arg0[4] = ((*((s16 *) (arg1 + 0x20))) * func_02001ff4()) >> 12;
}

void func_021238d0(s32 *__restrict arg0, u8 *__restrict arg1) {
    s32 x = *(s32 *)(arg1 + 0x18);
    s32 y = *(s32 *)(arg1 + 0x1c);
    arg0[5] = y;
    arg0[0] = x;
    arg0[1] = 0;
    arg0[12] = 0;
    arg0[13] = (*(u16 *)(arg1 + 0x2e) * ((-(y << 1)) + 0x2000U)) << 3;
    arg0[4] = 0;
}

void func_02123910(s32 *arg0) {
    arg0[0] = 0x1000;
    arg0[1] = 0;
    arg0[4] = 0;
    arg0[5] = 0x1000;
    arg0[12] = 0;
    arg0[13] = 0;
}

void func_02123934(u8 *arg0)
{
    s32 data[19];
    u32 flags = *(u32 *)arg0;
    s32 scale = 0;
    void (*fn)(s32 *, u8 *);
    if (flags & 8) {
        data[0] = 0x101610;
    } else {
        data[0] = 0x101810;
    }
    fn = data_021560f0[flags & 7];
    data[1] = 3;
    data[18] = 2;
    data[16] = scale;
    data[13] = scale;
    data[12] = scale;
    data[11] = scale;
    data[10] = scale;
    data[9] = scale;
    data[8] = scale;
    data[4] = scale;
    data[5] = scale;
    data[17] = 0x1000;
    fn(&data[2], arg0);

    scale = *(s32 *)(arg0 + 0x30);
    if (scale != 0x1000) {
        data[2] = (s32)(((s64)scale * data[2]) >> 12);
        data[3] = (s32)(((s64)scale * data[3]) >> 12);
        data[14] = (s32)(((s64)scale * data[14]) >> 12);
    }
    scale = *(s32 *)(arg0 + 0x34);
    if (scale != 0x1000) {
        data[6] = (s32)(((s64)scale * data[6]) >> 12);
        data[7] = (s32)(((s64)scale * data[7]) >> 12);
        data[15] = (s32)(((s64)scale * data[15]) >> 12);
    }
    func_021205ec(data[0], (s32 *)((u8 *)data + 4), 0x12);
}

void func_02123a6c(u8 *arg0)
{
  s32 sendTrans = 0;
  u32 flags = (*((u32 *) arg0)) & 0x18;
  if (!flags)
  {
    func_021205ec(0x1b, arg0 + 0x1c, 3);
  }
  if (!((*((u32 *) arg0)) & 4))
  {
    if (flags)
    {
      sendTrans = 1;
    }
    else
    {
      s32 v[3];
      s32 x;
      s32 y;
      x = ((s64) (*((s32 *) (arg0 + 0x4c)))) * (*((s32 *) (arg0 + 0x10)));
      x = x >> 12;
      y = (((s64) (*((s32 *) (arg0 + 0x50)))) * (*((s32 *) (arg0 + 0x14)))) >> 12;
      {
        s32 az = *((s32 *) (arg0 + 0x54));
        s32 bz = *((s32 *) (arg0 + 0x18));
        v[0] = x;
        v[1] = y;
        v[2] = (((s64) az) * bz) >> 12;
      }
      func_021205ec(0x1c, v, 3);
    }
  }
  if (!((*((u32 *) arg0)) & 2))
  {
    if (sendTrans)
    {
      func_021205ec(0x19, arg0 + 0x28, 12);
    }
    else
    {
      func_021205ec(0x1a, arg0 + 0x28, 9);
    }
  }
  else
    if (sendTrans)
  {
    func_021205ec(0x1c, arg0 + 0x4c, 3);
  }
  if (!flags)
  {
    func_021205ec(0x1b, arg0 + 0x10, 3);
  }
  if (!((*((u32 *) arg0)) & 1))
  {
    func_021205ec(0x1b, arg0 + 4, 3);
  }
}

void func_02123b90(u32 *out, s32 *in, u8 *p, u32 flags) {
u32 dst=p[1], src=p[2];
u32 *bits;
if(flags&4) {
 out[0]|=1;
 if(*(u32 *)(data_02170460 + (src>>5)*4 + 0xc4)&(1u<<(src&31))) {bits=(u32 *)(data_02170460+0xc4);bits[dst>>5]|=1u<<(dst&31);out[0]|=0x18;return;}
 {u32 offset=src*24;
 func_02008e38((u8 *)data_02171264+offset,(u8 *)data_02171264+dst*24,24);
 func_02008e38((u8 *)data_02171264+offset,out+4,24);}
} else {
 s32 x=((volatile s32 *)in)[0],y=((volatile s32 *)in)[1],z=((volatile s32 *)in)[2];
 out[1]=x;out[2]=y;out[3]=z;
 if(*(u32 *)(data_02170460 + (src>>5)*4 + 0xc4)&(1u<<(src&31))) {
 func_02008e38(in,(u8 *)data_02171264+dst*24,24);
 bits=(u32 *)(data_02170460+0xc4);
 bits[dst>>5]&=~(1u<<(dst&31));
 out[0]|=0x18; return;
 }
 bits=(u32 *)(data_02170460+0xc4);
 bits[dst>>5]&=~(1u<<(dst&31));
 *(volatile s32 *)((u8 *)data_02171264+dst*24)=((s64)x**(volatile s32 *)((u8 *)data_02171264+src*24))>>12;
 *(volatile s32 *)((u8 *)data_02171268+dst*24)=((s64)y**(volatile s32 *)((u8 *)data_02171268+src*24))>>12;
 *(volatile s32 *)((u8 *)data_0217126c+dst*24)=((s64)z**(volatile s32 *)((u8 *)data_0217126c+src*24))>>12;
 *(volatile s32 *)((u8 *)data_02171270+dst*24)=((s64)in[3]**(volatile s32 *)((u8 *)data_02171270+src*24))>>12;
 *(volatile s32 *)((u8 *)data_02171274+dst*24)=((s64)in[4]**(volatile s32 *)((u8 *)data_02171274+src*24))>>12;
 *(volatile s32 *)((u8 *)data_02171278+dst*24)=((s64)in[5]**(volatile s32 *)((u8 *)data_02171278+src*24))>>12;
 func_02008e38((u8 *)data_02171264+src*24,out+4,24);
}
}

void func_02123da4(const u8 *p)
{
  u32 v[15];
  s32 sx;
  s32 sy;
  if ((*((u32 *) p)) & 8)
  {
    v[0] = 0x101710;
  }
  else
  {
    v[0] = 0x101910;
  }
  v[1] = 3;
  v[14] = 2;
  v[13] = 0;
  v[10] = 0;
  v[9] = 0;
  v[8] = 0;
  v[7] = 0;
  v[5] = 0;
  v[4] = 0;
  v[3] = 0;
  if ((*((u32 *) p)) & 4)
  {
    v[11] = 0;
    v[12] = 0;
    if ((*((u32 *) p)) & 1)
    {
      v[2] = 4096;
      v[6] = 4096;
    }
    else
    {
      v[2] = *((const s32 *) (p + 24));
      v[6] = *((const s32 *) (p + 28));
    }
  }
  else if ((*((u32 *) p)) & 1)
  {
    v[11] = -((*((const s32 *) (p + 36))) << 4) * (*((const u16 *) (p + 44)));
    v[12] = -((*((const s32 *) (p + 40))) << 4) * (*((const u16 *) (p + 46)));
    v[2] = 4096;
    v[6] = 4096;
  }
  else
  {
    v[11] = -((s32)((((s64) *((const s32 *) (p + 24))) * (*((const s32 *) (p + 36)))) >> 8)) * (*((const u16 *) (p + 44)));
    v[12] = -((s32)((((s64) *((const s32 *) (p + 28))) * (*((const s32 *) (p + 40)))) >> 8)) * (*((const u16 *) (p + 46)));
    v[2] = *((const s32 *) (p + 24));
    v[6] = *((const s32 *) (p + 28));
  }
  sx = *((const s32 *) (p + 48));
  if (sx != 4096)
  {
    v[2] = (((s64) sx) * ((s32) v[2])) >> 12;
    v[11] = (((s64) sx) * ((s32) v[11])) >> 12;
  }
  sy = *((const s32 *) (p + 52));
  if (sy != 4096)
  {
    v[6] = (((s64) sy) * ((s32) v[6])) >> 12;
    v[12] = (((s64) sy) * ((s32) v[12])) >> 12;
  }
  func_021205ec(v[0], (void *) (((u32) v) + 4), 14);
}

void func_02123f54(s32 *out,u8 *p) {
s32 w=*(u16 *)(p+0x2c)<<12,h=*(u16 *)(p+0x2e)<<12;
s32 c,s,sx,sy,cx,ss,cy,ys;
func_02002058(h,w);
c=*(s16 *)(p+0x22);sx=*(s32 *)(p+0x18);s=*(s16 *)(p+0x20);sy=*(s32 *)(p+0x1c);
cx=((s64)sx*c)>>12;ss=((s64)sx*s)>>12;
cy=((s64)sy*c)>>12;ys=((s64)sy*s)>>12;
out[0]=cx;out[5]=cy;
out[1]=(ys*func_02001ff4())>>12;
func_02002058(w,h);
{
s32 w2=*(u16 *)(p+0x2c),h2=*(u16 *)(p+0x2e);
s32 y=*(s32 *)(p+0x28)*h2+((-h2)<<11);
s32 x=((-w2)<<11)-*(s32 *)(p+0x24)*w2;
out[12]=(s32)(((s64)cx*x-(s64)ss*y)>>8)+(w2<<15);
out[13]=(s32)(((s64)ys*x+(s64)cy*y)>>8)+(h2<<15);
}
out[4]=(-ss*func_02001ff4())>>12;
}

void func_02124058(s32 *arg0, u8 *arg1)
{
  s32 w = (*((u16 *) (arg1 + 0x2c))) << 12;
  s32 h = (*((u16 *) (arg1 + 0x2e))) << 12;
  s32 val;
  func_02002058(h, w);
  val = *((s16 *) (arg1 + 0x22));
  arg0[0] = val;
  arg0[5] = val;
  arg0[1] = ((*((s16 *) (arg1 + 0x20))) * func_02001ff4()) >> 12;
  func_02002058(w, h);
  {
    u16 h2 = *((u16 *) (arg1 + 0x2e));
    unsigned int w2 = *((u16 *) (arg1 + 0x2c));
    s32 y = ((-h2) << 11) + ((*((s32 *) (arg1 + 0x28))) * h2);
    s32 x = ((-w2) << 11) - ((*((s32 *) (arg1 + 0x24))) * w2);
    s64 a = x * ((s64) (*((s16 *) (arg1 + 0x22))));
    s64 b = (((s64) (*((s16 *) (arg1 + 0x20)))) * x) + (((s64) (*((s16 *) (arg1 + 0x22)))) * y);
    a -= y * ((s64) (*((s16 *) (arg1 + 0x20))));
    arg0[12] = ((s32) (a >> 8)) + (w2 << 15);
    arg0[13] = ((s32) (b >> 8)) + (h2 << 15);
  }
  arg0[4] = ((-(*((s16 *) (arg1 + 0x20)))) * func_02001ff4()) >> 12;
}

extern void func_02002058(s32, s32);
extern s32 func_02001ff4(void);
#pragma opt_propagation off
void func_02124130(s32 *__restrict arg0,u8 *__restrict arg1){
u32 h=*(u16 *)(arg1+0x2e),w=*(u16 *)(arg1+0x2c);
s32 y=*(s32 *)(arg1+0x28),x=*(s32 *)(arg1+0x24);
s32 a=*(s32 *)(arg1+0x18),b=*(s32 *)(arg1+0x1c);
arg0[0]=a;arg0[5]=b;arg0[1]=0;
h=(u32)(((s64)b*((y*(s32)h)+(-(s32)h<<11)))>>8)+((s32)h<<15);
w=(u32)(((s64)a*((-(s32)w<<11)-(x*(s32)w)))>>8)+((s32)w<<15);
arg0[12]=w;arg0[13]=h;arg0[4]=0;
}
#pragma opt_propagation on
