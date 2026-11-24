/* 19 functions from 0x020A84B8 to 0x020A94B8 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160078, *data_02160204;
extern u8 *data_02162880;
void func_020a87b0(void *arg0);
extern void func_0210fd24();
extern void func_0210fd38();
extern void func_0210fd94();


extern void func_0210c5dc(void *);
extern void func_0210dba0(void *);
extern void (*data_02156154)(void *);
extern u32 data_02160148[];
u32 func_020a8828(u32 arg0);
extern u32 data_02155c3c;
extern u32 (*data_02156150)(s32, s32, s32);
void *func_0210c594(s32, u32);
void func_02008e68(s32, void *, u32);
void func_020a8ba4(u8 *, s32, s32, s32);
s32 func_020a916c(s32);
void func_020a8a50();
void func_020a899c(void *);
void func_020a8750(void *);
void func_020a9058(void);
void func_0210db70(void *);
void *func_020a84b8(s32 arg0, s32 arg1) {
    s32 w = 8 << arg0;
    s32 h = 8 << arg1;
    u8 *p = (u8 *)func_0210c594(0x54, data_02155c3c);
    u32 texKey;
    u32 rowBytes;
    u32 *buf;

    *(s32 *)(p + 0x14) = (w * h) >> 2;
    *(void **)(p + 0x10) = func_0210c594(*(s32 *)(p + 0x14), 0x10);
    texKey = data_02156150(*(s32 *)(p + 0x14), 0, 0);
    *(u32 *)(p + 0x34) = texKey;
    *(u32 *)(p + 0x38) = ((u16)texKey & ~0xE0000000) | 0x48000000 | (arg0 << 20) | (arg1 << 23) | 0x20000000;
    *(u32 *)(p + 0x3c) = (u16)data_02160148[0] & ~0xE0000000;
    *(s32 *)(p + 0x40) = 1;
    *(s32 *)(p + 0x18) = w;
    *(s32 *)(p + 0x1c) = h;
    *(void (**)(void))(p + 0x0) = (void (*)(void))func_020a8ba4;
    *(void (**)(void))(p + 0x4) = func_020a8a50;
    *(void (**)(void *))(p + 0x8) = func_020a899c;
    *(void (**)(void *))(p + 0xc) = func_020a8750;
    rowBytes = (((u32)(h + 0x1f)) >> 5) << 2;
    buf = (u32 *)func_0210c594((s32)(rowBytes + 8), data_02155c3c);
    buf[0] = (u32)h;
    buf[1] = rowBytes;
    *(u32 **)(p + 0x50) = buf;
    func_02008e68(-1, (u8 *)*(void **)(p + 0x50) + 8, *(u32 *)((u8 *)*(void **)(p + 0x50) + 4));
    func_020a899c(p);
    *(void (**)(void))(p + 0x20) = func_020a9058;
    *(s32 *)(p + 0x24) = 0x3ec;
    *(void **)(p + 0x28) = p;
    func_0210db70(p + 0x20);
    return p;
}

void func_0210dbd0(void *);
void *func_020a8604(s32 arg0, s32 arg1) {
    s32 w = 8 << arg0;
    s32 h = 8 << arg1;
    u8 *p = (u8 *)func_0210c594(0x54, data_02155c3c);
    u32 texKey;
    u32 rowBytes;
    u32 *buf;

    *(s32 *)(p + 0x14) = (w * h) >> 2;
    *(void **)(p + 0x10) = func_0210c594(*(s32 *)(p + 0x14), 0x10);
    texKey = data_02156150(*(s32 *)(p + 0x14), 0, 0);
    *(u32 *)(p + 0x34) = texKey;
    *(u32 *)(p + 0x38) = ((u16)texKey & ~0xE0000000) | 0x48000000 | (arg0 << 20) | (arg1 << 23) | 0x20000000;
    *(u32 *)(p + 0x3c) = (u16)data_02160148[0] & ~0xE0000000;
    *(s32 *)(p + 0x40) = 1;
    *(s32 *)(p + 0x18) = w;
    *(s32 *)(p + 0x1c) = h;
    *(void (**)(void))(p + 0x0) = (void (*)(void))func_020a8ba4;
    *(void (**)(void))(p + 0x4) = func_020a8a50;
    *(void (**)(void *))(p + 0x8) = func_020a899c;
    *(void (**)(void *))(p + 0xc) = func_020a87b0;
    rowBytes = (((u32)(h + 0x1f)) >> 5) << 2;
    buf = (u32 *)func_0210c594((s32)(rowBytes + 8), data_02155c3c);
    buf[0] = (u32)h;
    buf[1] = rowBytes;
    *(u32 **)(p + 0x50) = buf;
    func_02008e68(-1, (u8 *)*(void **)(p + 0x50) + 8, *(u32 *)((u8 *)*(void **)(p + 0x50) + 4));
    func_020a899c(p);
    *(void (**)(void))(p + 0x20) = func_020a9058;
    *(s32 *)(p + 0x24) = 0x3ec;
    *(void **)(p + 0x28) = p;
    func_0210dbd0(p + 0x20);
    return p;
}

void func_020a8750(void *arg0) {
    u8 *p = (u8 *)arg0;
    if (*(void **)(p + 0x50) != NULL) {
        func_0210c5dc(*(void **)(p + 0x50));
    }
    func_0210dba0(p + 0x20);
    data_02156154(*(void **)(p + 0x34));
    if (*(void **)(p + 0x10) != NULL) {
        func_0210c5dc(*(void **)(p + 0x10));
        *(void **)(p + 0x10) = NULL;
    }
    if (p != NULL) {
        func_0210c5dc(p);
    }
}

extern void func_0210dbe8(void *);
void func_020a87b0(void *arg0) {
    u8 *p = (u8 *)arg0;
    if (*(void **)(p + 0x50) != NULL) {
        func_0210c5dc(*(void **)(p + 0x50));
    }
    func_0210dbe8(p + 0x20);
    data_02156154(*(void **)(p + 0x34));
    if (*(void **)(p + 0x10) != NULL) {
        func_0210c5dc(*(void **)(p + 0x10));
        *(void **)(p + 0x10) = NULL;
    }
    if (p != NULL) {
        func_0210c5dc(p);
    }
}

void func_020a8810(void *arg0, u32 arg1) {
    *(u32 *)((u8 *)arg0 + 0x3C) = func_020a8828(arg1);
}

u32 func_020a8828(u32 arg0) {
    return (u16)data_02160148[arg0] & ~0xE0000000;
}

void func_020a8a84(void *);
void func_020a8ab8(u8 *);
void func_020a8958(void *);
void func_020a8d4c();
void *func_020a8844(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
u8 *p=func_0210c594(0x3c,data_02155c3c);
u32 count=arg2*arg3;
u32 size;
u32 *buf;
*(u32 *)(p+0x14)=count<<5;
*(void **)(p+0x10)=func_0210c594(count<<5,0x10);
size=((count+31)>>5)<<2;
buf=func_0210c594(size+8,data_02155c3c);
buf[0]=count; buf[1]=size;
*(u32 **)(p+0x38)=buf;
*(s32 *)(p+0x20)=arg0;
*(s32 *)(p+0x24)=arg1;
*(s32 *)(p+0x28)=arg2;
*(s32 *)(p+0x2c)=arg3;
*(s32 *)(p+0x18)=arg2<<3;
*(s32 *)(p+0x1c)=arg3<<3;
for(*(s32 *)(p+0x30)=6; *(s32 *)(p+0x30)!=0; --*(s32 *)(p+0x30)) {
if((1<<*(s32 *)(p+0x30))==arg2) break;
}
for(*(s32 *)(p+0x34)=6; *(s32 *)(p+0x34)!=0; --*(s32 *)(p+0x34)) {
if((1<<*(s32 *)(p+0x34))==arg0) break;
}
*(void (**)(void))(p+0)=func_020a8d4c;
*(void (**)(void *))(p+4)=func_020a8a84;
*(void (**)(u8 *))(p+8)=func_020a8ab8;
*(void (**)(void *))(p+12)=func_020a8958;
return p;
}

void func_020a8958(void *arg0) {
    u8 *p = (u8 *)arg0;
    if (*(void **)(p + 0x38) != NULL) {
        func_0210c5dc(*(void **)(p + 0x38));
    }
    if (*(void **)(p + 0x10) != NULL) {
        func_0210c5dc(*(void **)(p + 0x10));
        *(void **)(p + 0x10) = NULL;
    }
    if (p != NULL) {
        func_0210c5dc(p);
    }
}

void func_020a899c(void *arg0) {
    u8 *p = arg0;
    u32 unk[4];
    u32 tex = *(u32 *)(p + 0x34);
    s32 w = *(s32 *)(p + 0x18);
    u32 h = *(u32 *)(p + 0x1c);
    u32 off = (u16)tex << 3;
    u32 src = *(u32 *)(p + 0x10);
    s32 len = w >> 2;
    u32 i;
    u32 idx;

    func_0210fd24(unk, 0);
    for (i = 0; i < h; i++) {
        u32 mask = 1 << (i & 0x1f);
        idx = i >> 5;
        if (*(u32 *)((u8 *)*(void **)(p + 0x50) + (idx << 2) + 8) & mask) {
            func_0210fd38(unk, off, src, len);
            *(u32 *)((u8 *)*(void **)(p + 0x50) + (idx << 2) + 8) &= ~mask;
        }
        off += len;
        src += len;
    }
    func_0210fd94(unk);
}

void func_020a8a50(void *arg0) {
    u8 *p = arg0;
    func_02008e68(0, *(void **)(p + 0x10), *(u32 *)(p + 0x14));
    func_02008e68(-1, (u8 *)*(void **)(p + 0x50) + 8, *(u32 *)((u8 *)*(void **)(p + 0x50) + 4));
}

void func_020a8a84(void *arg0) {
    u8 *p = arg0;
    func_02008e68(0, *(void **)(p + 0x10), *(u32 *)(p + 0x14));
    func_02008e68(-1, (u8 *)*(void **)(p + 0x38) + 8, *(u32 *)((u8 *)*(void **)(p + 0x38) + 4));
}

void func_020a8ab8(u8 *p) {
 s32 base;
 s32 height;
 height=*(s32 *)(p+0x2c);
 base=*(s32 *)(p+0x24);
 u32 ctx[4];
 u32 n=0;
 s32 x,y;
 s32 shift=*(s32 *)(p+0x34);
 s32 width=*(s32 *)(p+0x28);
 func_0210fd24(ctx,0x23);
 for(y=0;y<height;y++) {
 for(x=0;x<width;x++,n++) {
 u32 word=n>>5, bit=n&31;
 if((*(u32 **)(p+0x38))[word+2]&(1<<bit)) {
 func_0210fd38(ctx,(base+x+(y<<shift))<<5,*(u8 **)(p+0x10)+(x<<5)+(y<<(*(s32 *)(p+0x30)+5)),32);
 (*(u32 **)(p+0x38))[word+2]&=~(1<<bit);
 }
 }
 }
 func_0210fd94(ctx);
}

void func_020a8ba4(u8 *p, s32 x, s32 y, s32 ch) {
s32 zero = 0;

u8 *src, *dst;
s32 valid;
s32 width, n, skip, row, col, pixel, shift;

if(x < 0) valid = 0;
else if(x + func_020a916c(ch) > *(s32 *)(p+0x18)) valid = 0;
else if(y < 0) valid = 0;
else if(y + 12 > *(s32 *)(p+0x1c)) valid = 0;
else valid = 1;
if(!valid) return;
width = *(s32 *)(p+0x18);
dst = *(u8 **)(p+0x10) + (x >> 2) + y * (width >> 2);
shift = (x & 3)*2;
if(ch < 0) {src = (u8 *)data_02160148[33] + (ch<<4) + (ch<<3); n=2;}
else {src = (u8 *)data_02160148[33] + (ch<<5) + (ch<<2); n=3;}
skip = width - n*4;
for(row=0;row<12;row++) {
u32 sh=shift;
u8 value = *dst;
for(col=zero;col<n;col++) {
u8 bits=*src++;
for(pixel=zero;pixel<4;pixel++) {
u8 v=bits&3;
bits = (u8)(bits >> 2);
{ u8 mask = ~(3<<sh); u8 part = v<<sh;
value &= mask;
value |= part; }
sh=(sh+2)&7;
if(sh==0) { *dst=value; value=*++dst; }
}
}
if(sh==0) *dst=value;
dst += skip >> 2;
}
for(row=0;row<12;row++) {
u32 line = y+row;
(*(u32 **)(p+0x50))[2+(line>>5)] |= 1 << (line&31);
}
}

extern void func_0210fd24(u32 *, u32);
extern void func_0210fd38(u32 *, u32, u32, u32);
extern void func_0210fd94(u32 *);
extern void func_020a9068(u32);
void func_020a9058(void) {
    func_020a9068(0x1f);
}

void func_020a9068(u32 alpha) {
u8 *p=data_02162880;
s32 w,h;
s16 s,t;
*(volatile u32 *)0x40004a4=(alpha<<16)|0xc0;
*(volatile u32 *)0x4000480=0x7fff;
if(!*(s32 *)(p+0x40)) return;
w=*(s32 *)(p+0x18)<<12;
h=*(s32 *)(p+0x1c)<<12;
*(volatile u32 *)0x4000444=0;
*(volatile u32 *)0x40004a8=*(u32 *)(p+0x38);
*(volatile u32 *)0x40004ac=*(u32 *)(p+0x3c);
*(volatile u32 *)0x4000470=*(u32 *)(p+0x44);
*(volatile u32 *)0x4000470=*(u32 *)(p+0x48);
*(volatile u32 *)0x4000470=*(u32 *)(p+0x4c);
*(volatile u32 *)0x400046c=w;
*(volatile u32 *)0x400046c=h;
*(volatile u32 *)0x400046c=0x1000;
s=(s16)(w>>8);
t=(s16)(h>>8);
*(volatile u32 *)0x4000500=1;
*(volatile u32 *)0x4000488=0;
*(volatile u32 *)0x4000490=0;
*(volatile u32 *)0x4000488=(u16)t<<16;
*(volatile u32 *)0x4000490=0x10000;
*(volatile u32 *)0x4000488=(u16)s|((u16)t<<16);
*(volatile u32 *)0x4000490=0x10040;
*(volatile u32 *)0x4000488=(u16)s;
*(volatile u32 *)0x4000490=0x40;
*(volatile u32 *)0x4000504=0;
*(volatile u32 *)0x4000448=1;
}

extern s8 data_02150008[128];
extern u32 data_02160144;
s32 func_020a916c(s32 arg0) {
    s32 v = arg0 >= 0x80 ? 0xc : data_02150008[arg0];
    return v + data_02160144;
}

u16 func_020a9194(u8 **p) {
s32 c;
if (*p == 0) return 0xff00;
for (;;) {
c = *(*p)++;
if (c < 0xfd || c == 0xfe || ((u32)(c - 0xfa) <= 2)) {
switch(c) {
case 0xfe: c = *(*p)++ | 0x100; break;
case 0xfc: c = *(*p)++ | 0x200; break;
case 0xfb: c = *(*p)++ | 0x300; break;
case 0xfa: c = *(*p)++ | 0x400; break;
}
break;
}
if(c == 0xff) {
if (p[1] == 0) { --*p; c = 0xff00; break; }
*p = p[1]; p[1] = 0; continue;
}
c = *(*p)++ | ((u16)c << 8);
if(c >= 0xfd10 && c <= 0xfd13) {
p[1] = *p;
switch(c) {
case 0xfd10: *p = data_02160078+0x12; break;
case 0xfd11: *p = data_02160204+2; break;
case 0xfd12: *p = data_02160204+0x22; break;
case 0xfd13: *p = data_02160204+0x42; break;
}
continue;
}
break;
}
return c;
}

u16 func_020a932c(u8 **p) {
s32 c;
if (*p == 0) return 0xff00;
for (;;) {
c = *(*p)++;
if (c < 0xfd || c == 0xfe || ((u32)(c - 0xfa) <= 2)) {
switch(c) {
case 0xfe: c = *(*p)++ | 0x100; break;
case 0xfc: c = *(*p)++ | 0x200; break;
case 0xfb: c = *(*p)++ | 0x300; break;
case 0xfa: c = *(*p)++ | 0x400; break;
}
break;
}
if(c == 0xff) continue;
c = *(*p)++ | ((u16)c << 8);
if(c >= 0xfd10 && c <= 0xfd13) {
p[1] = *p;
switch(c) {
case 0xfd10: *p = data_02160078+0x12; break;
case 0xfd11: *p = data_02160204+2; break;
case 0xfd12: *p = data_02160204+0x22; break;
case 0xfd13: *p = data_02160204+0x42; break;
}
continue;
}
if (c == 0xfd14) c = 0xfd14;
else if (c == 0xfd00) c = 0xfd00;
break;
}
return c;
}

