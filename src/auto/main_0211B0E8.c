/* 18 functions from 0x0211B0E8 to 0x0211BDE8 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s32 x,y; } Vec2_bb3c;
extern const u16 data_02144d84[3][4];
extern const u16 data_02144d6c[3][4];
extern u32 *data_021701f8;
static inline s32 Mode_bb3c(u32 a) {
s32 mode=a&0x300;
if(mode!=0x100 && mode!=0x300) mode|=a&0x30000000;
return mode;
}
static inline s32 Width_bb3c(u32 a) {
u32 size; s32 shape;
a &= 0xc000c000;
size=(a&0xc0000000)>>30;
shape=(s32)(a&0xc000)>>14;
return size[data_02144d84[shape]];
}
static inline s32 Height_bb3c(u32 a) {
u32 size; s32 shape;
a &= 0xc000c000;
size=(a&0xc0000000)>>30;
shape=(s32)(a&0xc000)>>14;
return size[data_02144d6c[shape]];
}
static inline s32 Double_bb3c(u32 a) { return Mode_bb3c(a)==0x300; }
static inline void GetDouble_bb3c(u32 a,s32 *result) { *result=Double_bb3c(a); }
static inline void SetMode_bb3c(u32 *p,s32 mode) {
if(mode==0x100) { *(volatile u32 *)p=(*p&0xc1fffcff)|mode; }
else { *(volatile u32 *)p=(*p&0xc1fffcff)|mode; }
}
static inline void Offset_bb3c(Vec2_bb3c *p,const s32 *m,s32 w,s32 h) {
s32 x=-(w<<12),y=-(h<<12);
x+=m[0]*w; y+=m[1]*w;
x+=m[2]*h; y+=m[3]*h;
p->x+=x;p->y+=y;
}
static inline void Transform_bb3c(Vec2_bb3c *dst,const s32 *m,const Vec2_bb3c *src) {
Vec2_bb3c temp;
Vec2_bb3c *out=dst;
if(dst==src)out=&temp;
out->x=((s64)m[2]*src->y+0x1000+(s64)m[0]*src->x)>>12;
out->y=((s64)m[3]*src->y+0x1000+(s64)m[1]*src->x)>>12;
if(out==&temp) {dst->x=temp.x;dst->y=temp.y;}
}
static inline s32 tile_offset(s32 x, s32 y, s32 width, s32 height) {
    s32 by = y / 32;
    s32 ry = y % 32;
    s32 bx = x / 32;
    s32 rx = x % 32;
    s32 bh = by == height / 32 ? height % 32 : 32;
    s32 bw = bx == width / 32 ? width % 32 : 32;
    return rx + (by * (width * 32) + bx * (bh * 32) + bw * ry);
}
extern void func_02006dc4(void *, u32);
extern u32 data_02145ba4;
extern void func_02008690(u32, void *, void *, u32, u32);
extern void func_02008e08(void *, void *, u32);

extern u8 data_02144e58[16];
extern u8 data_02144e80[24];
extern u8 data_02144e98[24];
extern u8 data_02144eb0[32];
extern u16 *data_02144ee8[8];
extern u32 data_021701f4;
extern void *func_0211adb4(void *, u32, u32, u32);
extern void func_0211adf4(void *);
extern void func_0211ae38(void *);
extern u32 func_020055a0(void);
extern void func_0211b0e8(s32, u32, u32, u32, u32);
extern void func_0211b17c(s32, u32, u32, u32, u32);
extern s32 func_0211b0bc(s32);
extern s32 func_0211ae60(s32, s32, s32);
extern s32 func_0211af90(s32, s32, s32);
extern void func_02009008(void *, void *, s32);

void func_0211b0e8(s32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    u32 flag;
    u32 idx;
    u32 val;
    u16 *reg;
    u32 bits;
    idx = arg0 & 3;
    flag = 0;
    if (arg0 <= 3) {
        val = func_020055a0();
        if (val != 0x20 && val != 0x10 && val != 0x60) {
            flag = 1;
        }
        func_0211adf4(data_02144eb0 + idx * 8);
    } else {
        func_0211ae38(data_02144eb0 + idx * 8);
    }
    reg = data_02144ee8[arg0];
    bits = (arg1 << 14) | (arg3 << 8) | (arg4 << 2) | (flag << 13) | (arg2 << 7);
    *reg = (*reg & 0x43) | (u16)bits;
}

void func_0211b17c(s32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    u16 *reg;
    u32 bits;
    if (arg0 <= 3) {
        func_0211adf4(data_02144e58 + (arg0 - 2) * 8);
    } else {
        func_0211ae38(data_02144e58 + (arg0 - 6) * 8);
    }
    reg = data_02144ee8[arg0];
    bits = (arg1 << 14) | (arg3 << 8) | (arg4 << 2) | (arg2 << 13);
    *reg = (*reg & 0x43) | (u16)bits;
}

extern u8 data_02144e38[16];
void func_0211b1f8(s32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    u16 *reg;
    u32 bits;
    if (arg0 <= 3) {
        func_0211adf4(data_02144e38 + (arg0 - 2) * 8);
    } else {
        func_0211ae38(data_02144e38 + (arg0 - 6) * 8);
    }
    reg = data_02144ee8[arg0];
    bits = (arg1 << 14) | (arg3 << 8) | (arg4 << 2) | (arg2 << 13);
    *reg = (*reg & 0x43) | (u16)bits;
}

void func_0211b274(s32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5) {
    u8 *p = func_0211adb4(data_02144e98, arg2, arg3, arg3);
    func_0211b0e8(arg0, *(u16 *)(p + 4), arg1, arg4, arg5);
}

void func_0211b2b4(s32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    u8 *p = func_0211adb4(data_02144e80, arg1, arg2, arg3);
    func_0211b17c(arg0, *(u16 *)(p + 4), data_021701f4, arg3, arg4);
}

extern u8 data_02144e68[24];
extern void func_0211b1f8(s32, u32, u32, u32, u32);
void func_0211b2f4(s32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    u8 *p = func_0211adb4(data_02144e68, arg1, arg2, arg3);
    func_0211b1f8(arg0, *(u16 *)(p + 4), data_021701f4, arg3, arg4);
}

s32 func_0211b334(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg1 != 0) {
        return func_0211ae60(func_0211b0bc(arg0), arg2, arg3);
    } else {
        return func_0211af90(arg0, arg2, arg3);
    }
}

s32 func_0211b36c(s32 arg0, s32 *arg1, u16 *arg2, s32 arg3) {
    u16 h6 = arg2[3];
    if (h6 == 0 && arg2[2] == 1) {
        s32 flag;
        if (arg0 <= 3) {
            flag = (*(volatile u32 *)0x04000000 & 0x40000000) ? 1 : 0;
        } else {
            flag = (*(volatile u32 *)0x04001000 & 0x40000000) ? 1 : 0;
        }
        return func_0211b334(arg0, flag, (s32)arg1, arg3);
    } else {
        return func_0211b334(arg0, (*arg1 != 3 && h6 != 1) ? 1 : 0, (s32)arg1, arg3);
    }
}

void func_0211b3dc(s32 arg0, s32 arg1, u32 arg2) {
u8 *p=(u8 *)arg1;
u16 *q=(u16 *)arg2;
s32 offset=0;
s32 screen;
u32 size,channel;
void *src;
u8 *base,*dst;
if(q) {
s32 count=q[1]*q[2];
s32 unit=(*(u32 *)(p+4)==4)?64:32;
offset=count*unit;
}
func_02006dc4(*(void **)(p+20),*(u32 *)(p+16));
screen=(*data_02144ee8[arg0]&0x3c)>>2;
size=*(u32 *)(p+16);
src=*(void **)(p+20);
if(arg0>3) base=(u8 *)0x6200000;
else base=(u8 *)(0x6000000+(((*(volatile u32 *)0x4000000&0x7000000)>>24)<<16));
dst=base+(screen<<14);
channel=data_02145ba4;
if(channel>3) channel=-1;
if(channel!=-1) func_02008690(channel,src,dst+offset,size,1);
else func_02008e08(src,dst+offset,size);
}

void func_0211c934(s32 *, s32 *, s32);
void func_02006dc4(void *, u32);
void func_0211b9e8(void *, void *, s32,s32,s32,s32,s32,s32,s32,s32);
void func_0211b4b8(s32 arg0, s32 arg1) {
u8 *p=(u8 *)arg1;
s32 screen=(*data_02144ee8[arg0]&0x1f00)>>8;
u8 *dst;
u8 *base;
s32 w,h;
s32 bw,bh;
if(arg0>3) base=(u8 *)0x6200000;
else base=(u8 *)(0x6000000+(((*(volatile u32 *)0x4000000&0x38000000)>>27)<<16));
dst=base+(screen<<11);
w=(u32)*(u16 *)p>>3;
h=(u32)*(u16 *)(p+2)>>3;
func_0211c934(&bw,&bh,arg0);
if(bw<=w) w=bw;
if(bh<=h) h=bh;
func_02006dc4(p+12,*(u32 *)(p+8));
func_0211b9e8(dst,p,0,0,0,0,bw,bh,w,h);
}

void func_0211b584(s32 arg0, s32 arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5, u32 arg6) {
    switch (arg1) {
        case 0:
            func_0211b274(arg0, arg2, arg3, arg4, arg5, arg6);
            break;
        case 1:
            func_0211b2b4(arg0, arg3, arg4, arg5, arg6);
            break;
        case 2:
            func_0211b2f4(arg0, arg3, arg4, arg5, arg6);
            break;
    }
}

#pragma opt_strength_reduction off
void func_0211b614(void *dst, void *src, s32 sx, s32 sy, s32 dx, s32 dy, s32 dw, s32 dh, s32 w, s32 h) {
    u16 raww = *(u16 *)src;
    u16 rawh = ((u16 *)src)[1];
    s32 ey = sy + h;
    u16 *p = (u16 *)src + 6;
    s32 ex = sx + w;
    s32 sh = (u32)rawh >> 3;
    s32 sw = (u32)raww >> 3;
    s32 yy = dy;
    s32 x, xx;
    for (; sy < ey; sy++, yy++) {
        for (x = sx, xx = dx; x < ex; x++, xx++) {
            u16 *q = p + tile_offset(x, sy, sw, sh);
            ((u16 *)dst)[tile_offset(xx, yy, dw, dh)] = *q;
        }
    }
}
#pragma opt_strength_reduction on
void func_0211b83c(u8 *dst, u8 *src, s32 srcX, s32 srcY, s32 dstX, s32 dstY, s32 dstStride, s32 width, s32 height) {
    s32 srcStride = (u32)(*(u16 *)src) >> 3;
    s32 endY = srcY + height;
    s32 dstOff = (dstY * dstStride) + dstX;
    u8 *s = (src + 0xc) + (srcY * srcStride + srcX);
    u8 *d = dst + dstOff;
    s32 y;
    for (y = srcY; y < endY; y++) {
        func_02009008(s, d, width);
        s += srcStride;
        d += dstStride;
    }
}

#pragma opt_propagation off
void func_0211b8a4(u8 *dst, u8 *src, s32 srcX, s32 srcY, s32 dstX, s32 dstY, s32 dstStride, s32 width, s32 height)
{
  s32 srcStride = ((u32) (*((u16 *) src))) >> 3;
  s32 size = width * 2;
  s32 endY = srcY + height;
  u8 *s = (src + 0xc) + (((srcY * srcStride) + srcX) * 2);
  s32 dstOff = (dstY * dstStride) + dstX;
  u8 *d = dst + (dstOff * 2);
  s32 y;
  for (y = srcY; y < endY; y++)
  {
    func_02008e08(s, d, size);
    s += srcStride * 2;
    d += dstStride * 2;
  }

}
#pragma opt_propagation on
extern void func_0211b3dc(s32, s32, u32);
extern void func_0211b4b8(s32, s32);
void func_0211b910(s32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5) {
    if (arg3 != 0 && arg1 != 0) {
        func_0211b36c(arg0, (s32 *)arg3, (u16 *)arg1, arg5);
    }
    if (arg2 != 0) {
        func_0211b3dc(arg0, arg2, arg4);
    }
    if (arg1 != 0) {
        func_0211b4b8(arg0, arg1);
    }
}

#pragma push
#pragma opt_propagation off
void func_0211b96c(s32 arg0, u16 *__restrict arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5, u32 arg6, u32 arg7) {
    u32 flag = 0;
    u16 a = arg1[3];
    u16 b = arg1[0];
    u16 c = arg1[1];
    if (arg1[2] != 0) {
        flag = 1;
    }
    func_0211b584(arg0, a, flag, b, c, arg6, arg7);
    func_0211b910(arg0, (u32)arg1, arg2, arg3, arg4, arg5);
}
#pragma pop
extern void func_0211b614(void *, void *, s32,s32,s32,s32,s32,s32,s32,s32);
void func_0211b9e8(void *dst, void *src, s32 x, s32 y, s32 dx, s32 dy, s32 dw, s32 dh, s32 w, s32 h) {
 if(dx<0) {dx=-dx; x+=dx; w-=dx; dx=0;}
 if(dy<0) {dy=-dy; y+=dy; h-=dy; dy=0;}
 if(dx+w>dw) w-=dx+w-dw;
 if(dy+h>dh) h-=dy+h-dh;
 if(x<0) {x=-x; dx+=x; w-=x; x=0;}
 if(y<0) {y=-y; dy+=y; h-=y; y=0;}
 if(x+w>(s32)((u32)*(u16 *)src>>3)) w-=x+w-((u32)*(u16 *)src>>3);
 if(y+h>(s32)((u32)((u16 *)src)[1]>>3)) h-=y+h-((u32)((u16 *)src)[1]>>3);
 if(w<=0||h<=0) return;
 switch(((u16 *)src)[3]) {
 case 0:func_0211b614(dst,src,x,y,dx,dy,dw,dh,w,h);break;
 case 1:func_0211b83c(dst,src,x,y,dx,dy,dw,w,h);break;
 case 2:func_0211b8a4(dst,src,x,y,dx,dy,dw,w,h);break;
 }
}

void func_0211bb3c(const s32 *m, u32 *sprite, const Vec2_bb3c *translation) {
    Vec2_bb3c pos;
    s16 x = (s16)((*sprite & 0x1ff0000) >> 16);
    s16 y;
    s32 mode, w, h;
    if (x > 255) x |= 0xff00;
    pos.x = x << 12;
    y = *sprite & 255;
    if (y > 127) y |= 0xff00;
    pos.y = y << 12;
    if (Mode_bb3c(*sprite) == 0x300) {
        u32 attr = *sprite & 0xc000c000;
        u32 size = (attr & 0xc0000000) >> 30;
        s32 shape = (s32)(attr & 0xc000) >> 14;
        w = data_02144d84[shape][size];
        h = data_02144d6c[shape][size];
        pos.x += w << 11;
        pos.y += h << 11;
    }
    Transform_bb3c(&pos, m, &pos);
    mode = data_021701f8[1];
    if (mode) {
        mode = mode == 2 ? 0x300 : 0x100;
        {
            u32 *p2 = sprite;
            if (mode != 0x100) { *(s32 *)p2 = (*p2 & 0xc1fffcff) | mode; }
            else { *p2 = (*p2 & 0xc1fffcff) | mode; }
        }
    }
    mode = Double_bb3c(*sprite);
    w = Width_bb3c(*sprite) >> 1;
    h = Height_bb3c(*sprite) >> 1;
    {
        s32 oy = -(h << 12), ox = -(w << 12);
        ox += m[0] * w; oy += m[1] * w;
        ox += m[2] * h; oy += m[3] * h;
        pos.y += oy; pos.x += ox;
    }
    switch (mode) {
        case 0: break;
        default:
            pos.x -= w << 12;
            pos.y -= h << 12;
            break;
    }
    pos.x += translation->x;
    pos.y += translation->y;
    *sprite = (*sprite & 0xfe00ff00) | ((pos.y >> 12) & 255) | (((pos.x >> 12) & 511) << 16);
}

