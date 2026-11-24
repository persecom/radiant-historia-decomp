/* 17 functions from 0x020F5574 to 0x020F6458 (main), found by ds-decomp. */
#include "common.h"
extern const char data_02152020[], data_02152024[], data_02152028[], data_0215202c[];
extern const char data_02152030[],data_02152034[],data_02152038[],data_0215203c[];
extern const char *func_0210cd20(s32,s32);
extern s32 func_ov000_02176da0(void *, s32, s32);
static inline s32 check_02176da0(void *callback) { s32 ok=0; if (-1 == func_ov000_02176da0(callback,0,0)) ok=1; return ok; }
extern s32 func_ov000_02176e18(void *, s32, s32);
static inline s32 check_02176e18(void *callback) { s32 ok=0; if (-1 == func_ov000_02176e18(callback,0,0)) ok=1; return ok; }
extern s32 func_ov000_02176e90(void *, s32, s32);
static inline s32 check_02176e90(void *callback) { s32 ok=0; if (-1 == func_ov000_02176e90(callback,0,0)) ok=1; return ok; }
extern s32 func_ov000_02176ddc(void *, s32, s32);
static inline s32 check_02176ddc(void *callback) { s32 ok=0; if (-1 == func_ov000_02176ddc(callback,0,0)) ok=1; return ok; }
extern s32 func_ov000_02176e54(void *, s32, s32);
static inline s32 check_02176e54(void *callback) { s32 ok=0; if (-1 == func_ov000_02176e54(callback,0,0)) ok=1; return ok; }
extern s32 func_ov000_02176ecc(void *, s32, s32);
static inline s32 check_02176ecc(void *callback) { s32 ok=0; if (-1 == func_ov000_02176ecc(callback,0,0)) ok=1; return ok; }


extern u8 data_02160c9c[64];
extern void *data_02160204;
extern s32 data_02160c7c[8];
extern void func_02021c7c(void);
extern void func_020bd690(void);

extern u32 *data_02160200;
extern u32 data_02155c3c;
extern void *data_02160c74[2];
extern void *func_0210c594(u32, u32);
extern void func_02113c0c(u32 *);
extern void func_0210d6f4(void *);
extern void func_0210d828(void);
extern void func_0210d6a4(s32, s32);
extern void func_0210c5dc(void *);
extern void func_02046760(void *);
extern void func_0210da14(void *);
extern void func_020a9544(void *);
extern void func_0210c970(void *);
extern void func_020a9830(void *, void *, s32, s32, s32, s32);

typedef struct {
    void *f0;
    void *f4;
} Data021626e8;
extern Data021626e8 data_021626e8;
extern const char data_02152000[], data_02152004[], data_02152008[], data_0215200c[];
extern const char *func_0210cce4(const char *);
extern void func_02005e80(char *, const char *, ...);
extern void func_02012590(const char *, const char *, ...);
extern f64 func_02017f64(const char *);
extern s32 func_0201f114(f64);
extern s32 func_0201f678(s32, s32);
extern s32 func_020201f4(s32, s32);
extern s32 func_020203d4(s32, s32);
extern s32 func_02020604(s32, s32);
extern s32 func_0201ff0c(s32);
void func_020f56a4(void);
extern void func_020f53e4(void);
s32 func_020f5574(void) {
 s32 ret; unsigned flag;
 void *lock=(void *)0;
 flag=0;
 func_0200c1a8(0,lock);
flag=0; if(~0U==func_ov000_02176da0(func_020f53e4,0,0)) flag=1; if(flag) func_020f56a4();
flag=0; if(~0U==func_ov000_02176e18(func_020f53e4,0,0)) flag=1; if(flag) func_020f56a4();
flag=0; if(~0U==func_ov000_02176e90(func_020f53e4,0,0)) flag=1; if(flag) func_020f56a4();
flag=0; if(~0U==func_ov000_02176ddc(func_020f53e4,0,0)) flag=1; if(!flag) goto failed;
flag=0; if(~0U==func_ov000_02176e54(func_020f53e4,0,0)) flag=1; if(!flag) goto failed;
flag=0; if(~0U==func_ov000_02176ecc(func_020f53e4,0,0)) flag=1; if(!flag) goto failed;
func_020cea64(1); ret=29; goto done;
failed: func_020f56a4(); ret=2;
done: func_0200c1fc(0,lock); return ret;
}

void func_020f56a4(void) {
    *(u16 *)((u8 *)data_02160204 + 0x72) = 0x14b;
    *(u16 *)((u8 *)data_02160204 + 0xdc) = 0xe7;
    *(u16 *)((u8 *)data_02160204 + 0x74) = 0;
    *(u16 *)((u8 *)data_02160204 + 0x76) = 0;
    *(u16 *)((u8 *)data_02160204 + 0xd4) = 1;
    *(u16 *)((u8 *)data_02160204 + 0xda) = 999;
    func_02021c7c();
    func_020bd690();
}

s32 func_020f5704(s32 arg0) {
    return data_02160c7c[arg0];
}

void func_020f5714(s32 arg0, s32 arg1) {
    data_02160c7c[arg0] = arg1;
}

void *func_020f5724(void) {
    return data_02160c9c;
}

s32 func_020f5730(s32 arg0) {
    return (data_02160200[(u32)arg0 >> 5] & (1 << (arg0 % 32))) != 0;
}

void func_020f5760(void) {
    void **p = data_02160c74;
    *p = func_0210c594(0x30, data_02155c3c);
    func_02113c0c(*p);
    *(u8 *)((u8 *)*p + 0x24) = 0;
}

void func_020f5798(void) {
    void *p = data_02160c74[0];
    if (*(void **)p != NULL) {
        func_0210d6f4(p);
        func_0210d828();
    }
    func_0210d6a4(0x7f, 1);
    if (data_02160c74[0] != NULL) {
        func_0210c5dc(data_02160c74[0]);
        data_02160c74[0] = NULL;
    }
}

extern u8 *data_021600ac;
extern void *func_0210c518(u32, u32);
extern void func_02008e68(s32, void *, u32);
extern void *func_0210c924(void *, void *);
extern void func_020f6990(void);
extern void func_020fdc0c(void);
extern void func_0210d9e4(void *);
extern void func_02044c48(s32);
void *func_020f57e8(void *arg0) {
    u8 *p = (u8 *)func_0210c518(0x1f8, data_02155c3c);
    u8 *q;
    func_02008e68(0, p, 0x1f8);
    q = (u8 *)func_0210c924(arg0, (void *)func_020f6990);
    *(u8 **)(p + 0x14) = q;
    if (q == NULL) {
        if (p != NULL) {
            func_0210c5dc(p);
        }
        return NULL;
    }
    *(void **)(q + 0x10) = p;
    *(void **)(p + 0) = (void *)func_020fdc0c;
    *(u32 *)(p + 4) = 0x3e9;
    *(void **)(p + 8) = p;
    func_0210d9e4(p);
    *(s32 *)(p + 0x1b4) = -1;
    if (data_021600ac != NULL) {
        data_021600ac[0x3ac] &= 0xdf;
    }
    if (((u8 *)data_02160204)[0x7a] == 0) {
        func_02044c48(2);
    }
    return p;
}

void func_020f58c0(u8 *p) {
    if (p[0x1f4] == 1) {
        func_02046760(p);
    }
    func_0210da14(p);
    void **q;
    q = *(void ***)(p + 0x128);
    if (q != NULL && *q != NULL) {
        func_020a9544(q);
    }
    func_0210c970(*(void **)(p + 0x14));
    if (p != NULL) {
        func_0210c5dc(p);
    }
}

void func_020f5914(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e) {
    *(s32 *)(p + 0x130) = a;
    func_020a9830(p + 0x144, p + 0x12c, b, c, d, e);
}

s32 func_020f5948(void) {
    char buf[0x40];
    s32 index = 0;
    u8 *r4;
    s8 c;
    s32 i;
    void *tmp;

    r4 = *(u8 **)((u8 *)data_021626e8.f0 + 0x10);
    tmp = (void *)func_0210cce4(0);
    *(u8 *)((u8 *)data_02160204 + 0x146) = 0;
    func_02005e80(buf, data_02152000, tmp);
    c = buf[0];
    if ((c >= '0' && c <= '9') || c == '-') {
        func_02012590(buf, data_02152004, &index);
        *(u8 *)((u8 *)data_02160204 + 0x146) = 1;
        return index;
    }
    for (i = 0; i < 0x3f; i++) {
        buf[i] = buf[i + 1];
    }
    if (c != 'x') {
        func_02012590(buf, data_02152008, &index);
    }
    switch (c) {
    case 'f': {
        f32 f = (f32)func_02017f64(buf);
        return (s32)((f > 0.0f) ? (0.5f + 4096.0f * f) : (4096.0f * f - 0.5f));
    }
    case 'r': {
        index %= 360;
        index <<= 16;
        return index / 360;
    }
    case 'x':
        func_02012590(buf, data_0215200c, &index);
        return index;
    case 'b':
        return *(u8 *)(r4 + index + 0x44);
    case 'n':
        return *(u32 *)(r4 + index * 4 + 0x64);
    case 'l':
        return *(u32 *)(r4 + index * 4 + 0xe4);
    case 'a':
        return *(u32 *)(r4 + 0x124);
    case 'm':
        *(u8 *)((u8 *)data_02160204 + 0x146) = 1;
        return (index << 17) + 0x10000;
    case 's':
        *(u8 *)((u8 *)data_02160204 + 0x146) = 2;
        return (index << 16) + 0x8000;
    }
    return 0;
}

extern const char data_02152010[], data_02152014[], data_02152018[], data_0215201c[];
extern const char *func_0210cd60(const char *);
s32 func_020f5bdc(void) {
    char buf[0x40];
    s32 index = 0;
    u8 *r4;
    s8 c;
    s32 i;
    void *tmp;

    r4 = *(u8 **)((u8 *)data_021626e8.f0 + 0x10);
    tmp = (void *)func_0210cd60(0);
    *(u8 *)((u8 *)data_02160204 + 0x146) = 0;
    func_02005e80(buf, data_02152010, tmp);
    c = buf[0];
    if ((c >= '0' && c <= '9') || c == '-') {
        func_02012590(buf, data_02152014, &index);
        *(u8 *)((u8 *)data_02160204 + 0x146) = 1;
        return index;
    }
    for (i = 0; i < 0x3f; i++) {
        buf[i] = buf[i + 1];
    }
    if (c != 'x') {
        func_02012590(buf, data_02152018, &index);
    }
    switch (c) {
    case 'f': {
        f32 f = (f32)func_02017f64(buf);
        return (s32)((f > 0.0f) ? (0.5f + 4096.0f * f) : (4096.0f * f - 0.5f));
    }
    case 'r': {
        index %= 360;
        index <<= 16;
        return index / 360;
    }
    case 'x':
        func_02012590(buf, data_0215201c, &index);
        return index;
    case 'b':
        return *(u8 *)(r4 + index + 0x44);
    case 'n':
        return *(u32 *)(r4 + index * 4 + 0x64);
    case 'l':
        return *(u32 *)(r4 + index * 4 + 0xe4);
    case 'a':
        return *(u32 *)(r4 + 0x124);
    case 'm':
        *(u8 *)((u8 *)data_02160204 + 0x146) = 1;
        return (index << 17) + 0x10000;
    case 's':
        *(u8 *)((u8 *)data_02160204 + 0x146) = 2;
        return (index << 16) + 0x8000;
    }
    return 0;
}

s32 func_020f5e70(s32 mode) {
    char buf[0x40];
    s32 index = 0;
    u8 *r4;
    s8 c;
    s32 i;
    void *tmp;

    r4 = *(u8 **)((u8 *)data_021626e8.f0 + 0x10);
    tmp = (void *)func_0210cce4(0);
    *(u8 *)((u8 *)data_02160204 + 0x146) = 0;
    func_02005e80(buf, data_02152020, tmp);
    c = buf[0];
    if ((c >= '0' && c <= '9') || c == '-') {
        func_02012590(buf, data_02152024, &index);
        *(u8 *)((u8 *)data_02160204 + 0x146) = 1;
        return index;
    }
    for (i = 0; i < 0x3f; i++) {
        buf[i] = buf[i + 1];
    }
    if (c != 'x') {
        func_02012590(buf, data_02152028, &index);
    }
    switch (c) {
    case 'f': {
        f32 f = (f32)func_02017f64(buf);
        return (s32)((f > 0.0f) ? (0.5f + 4096.0f * f) : (4096.0f * f - 0.5f));
    }
    case 'r': {
        index %= 360;
        index <<= 16;
        return index / 360;
    }
    case 'x':
        func_02012590(buf, data_0215202c, &index);
        return index;
    case 'b':
        return *(u8 *)(r4 + index + 0x44);
    case 'n':
        return *(u32 *)(r4 + index * 4 + 0x64);
    case 'l':
        return *(u32 *)(r4 + index * 4 + 0xe4);
    case 'a':
        return *(u32 *)(r4 + 0x124);
    case 'm':
        *(u8 *)((u8 *)data_02160204 + 0x146) = 1;
        if (mode == 2) return index;
        return (index << 17) + 0x10000;
    case 's':
        *(u8 *)((u8 *)data_02160204 + 0x146) = 2;
        if (mode == 2) return index;
        return (index << 16) + 0x8000;
    }
    return 0;
}

s32 func_020f6118(s32 a,s32 b) {
char buf[64];
s32 index=0;
s8 c;
s32 i;
func_02005e80(buf,data_02152030,func_0210cd20(a,b));
c=buf[0];
if((c>='0'&&c<='9')||c=='-'){func_02012590(buf,data_02152034,&index);return index;}
for(i=0;i<63;i++)buf[i]=buf[i+1];
if(c!='x')func_02012590(buf,data_02152038,&index);
switch(c){
case 'f':{
f32 f=(f32)func_02017f64(buf);
return (s32)(f>0.0f?0.5f+4096.0f*f:4096.0f*f-0.5f);
}
case 'r':index%=360;index<<=16;return index/360;
case 'x':func_02012590(buf,data_0215203c,&index);return index;
case 'm':return (index<<17)+0x8000;
case 's':*((u8 *)data_02160204+0x146)=2;return (index<<16)+0x8000;
}
return 0;
}

s32 func_020f62f4(s32 arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        return (arg0 << 17) + 0x8000;
    case 1:
        return ((arg0 % 360) << 16) / 360;
    default:
        return 0;
    }
}

extern const char data_02152040[], data_02152044[];
void *func_020f635c(void)
{
  u8 *p;
  char *new_var;
  char buf[0x40];
  s32 i;
  s8 ch;
  s32 val = 0;
  p = *((u8 **) (((u8 *) data_021626e8.f0) + 0x10));
  func_02005e80(buf, data_02152040, func_0210cce4(NULL));
  new_var = buf;
  ch = new_var[0];
  for (i = 0; i < 0x3f; i++)
  {
    buf[i] = new_var[i + 1];
  }

  func_02012590(new_var, data_02152044, &val);
  switch (ch)
  {
    case 'b':
      return (p + 0x44) + val;

    case 'n':
      return ((u32 *) (p + 0x64)) + val;

    case 'l':
      return ((u32 *) (p + 0xe4)) + val;

    case 'a':
      return p + 0x124;

    default:
      return NULL;

  }

}

