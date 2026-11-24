/* 23 functions from 0x020A66B8 to 0x020A7598 (main), found by ds-decomp. */
#include "common.h"
extern char data_0214ff8c[], data_0214ffa4[];
extern void func_02005e80(char *, const char *, ...);
extern void *func_021092d8(char *);
extern s32 func_02092994(void *, s32);
extern s32 func_02109444(void *);
extern void func_021093b0(void *);
extern s32 func_020bdb30(u16, u8);
extern u8 data_0214ffc4[], data_0214ffe4[];
extern void func_021167ac(void *, s32);
extern void func_020f2524(void *, void *, s32, void *, void *);

extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void *func_0210c594(s32, void *);
extern void *data_02155c3c;
extern void func_021167f0(void *, void *);
extern u8 *data_021600e4;
extern u32 func_020bdba0(u16);
extern void func_020a6c44(void *, u16);
extern u16 data_02162908[];
void func_020a6c04(void *arg0, u16 arg1, u8 arg2);
void func_020a6c74(void *arg0, u16 arg1, u16 arg2);
void func_020a6a20(void *arg0) {
    u8 *node = *(u8 **)arg0;
    s32 i = 0;
    while (node != NULL) {
        *(u32 *)(node + 0x18) = (u8)func_020bdba0((u16)(i + 0x80));
        *(u32 *)(node + 0x1c) = (u8)func_020bdba0((u16)(*(u32 *)(data_021600e4 + 0x184) + i));
        node = *(u8 **)(node + 0x14);
        i++;
    }
}

void func_020a6a88(s32 arg0, s32 arg1) {
 char buf[32];
 void *p;
 s32 a;
 u16 x, i, y;
 s32 b;
 if(arg0==0) func_02005e80(buf,data_0214ff8c,arg1);
 else if(arg0==1) func_02005e80(buf,data_0214ffa4,arg1);
 p=func_021092d8(buf);
 if(p==NULL) return;
 i=1;
 do {
  x=func_02092994(p,0);
  y=func_02092994(p,0);
  if(arg0==0) {a=i+0x7f;b=i+0x4a0;}
  if(arg0==0) {
   func_020bdb30((u16)a,(u8)x);
   if(func_020bdba0((u16)b)==0) func_020bdb30((u16)b,(u8)y);
  }
  i++;
 } while(func_02109444(p));
 if(p!=NULL) func_021093b0(p);
}

void func_020a6b88(void *arg0, void *arg1) {
    u8 *node = *(u8 **)arg0;
    while (node != NULL) {
        u8 *sub = *(u8 **)(node + 4);
        while (sub != NULL) {
            if (*(u16 *)(sub + 4) != 0) {
                func_020a6c74(arg1, *(u16 *)(sub + 4), *(u16 *)node);
                func_020a6c04(arg1, *(u16 *)(sub + 4), *(u8 *)(node + 0x20));
                if (*(u32 *)(node + 0x1c) != 0) {
                    func_020a6c44(arg1, *(u16 *)(sub + 4));
                }
            }
            sub = *(u8 **)(sub + 0x10);
        }
        node = *(u8 **)(node + 0x14);
    }
}

void func_020a6c04(void *arg0, u16 arg1, u8 arg2) {
    u8 *node = *(u8 **)arg0;
    while (node != NULL) {
        if (*(u16 *)node == arg1) {
            *(u32 *)(node + 0xa8) = 1;
            *(u8 *)(node + 0xb0) |= arg2;
            return;
        }
        node = *(u8 **)(node + 0xa4);
    }
}

void func_020a6c44(void *arg0, u16 arg1) {
    u8 *node = *(u8 **)arg0;
    while (node != NULL) {
        if (*(u16 *)node == arg1) {
            *(u32 *)(node + 0xac) = 1;
            return;
        }
        node = *(u8 **)(node + 0xa4);
    }
}

void func_020a6c74(void *arg0, u16 arg1, u16 arg2) {
    u8 *node = *(u8 **)arg0;
    while (node != NULL) {
        if (*(u16 *)node == arg1) {
            *(u16 *)(node + 4) = arg2;
            return;
        }
        node = *(u8 **)(node + 0xa4);
    }
}

void *func_020a6ca0(u16 arg0) {
    u8 *node = *(u8 **)(data_021600e4 + 0x118);
    while (node != NULL) {
        if (*(u16 *)node == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x14);
    }
    return NULL;
}

void func_020a6cdc(void *arg0) {
    u8 *node = *(u8 **)arg0;
    while (node != NULL) {
        u16 v = *(u16 *)node;
        if (v >= 1 && v <= 0x14) {
            if (func_020bdba0((u16)(v + 0xbf)) == 1) {
                *(u32 *)(node + 0xa8) = 1;
            }
            if (*(u32 *)(node + 0xa8) != 0) {
                *(u8 *)(node + 0xb0) |= 2;
            } else {
                *(u32 *)(node + 0xa8) = 1;
                *(u8 *)(node + 0xb0) |= 1;
            }
        }
        node = *(u8 **)(node + 0xa4);
    }
}

u8 func_020a6d54(u8 *arg0) {
    s32 left, right, bottom, top;
    s16 x, y;
    if (arg0 == NULL) {
        return 0;
    }
    if (data_02162908[2] == 0) {
        return 0;
    }
    left = *(u32 *)(arg0 + 0xc) + *(u32 *)(arg0 + 0);
    right = left + *(s16 *)(arg0 + 0x2c);
    bottom = *(u32 *)(arg0 + 0x10) + *(u32 *)(arg0 + 4);
    top = bottom + *(s16 *)(arg0 + 0x2e);
    x = data_02162908[0];
    y = data_02162908[1];
    if (x < left || x > right || y < bottom || y > top) {
        return 0;
    }
    return 1;
}

s32 func_020a6dd8(u32 arg0, u32 arg1) {
    u8 *g = data_021600e4;
    switch (arg0) {
    case 0:
        *(u32 *)(g + 0x13ec) = 0;
        break;
    case 1:
        *(u32 *)(g + 0x13ec) |= arg1;
        break;
    case 2:
        *(u32 *)(g + 0x13ec) &= ~arg1;
        break;
    case 3:
        if (*(u32 *)(g + 0x13ec) & arg1) {
            return 1;
        }
        break;
    }
    return 0;
}

void *func_020a6e50(void *arg0) {
    u8 *p = func_0210c594(0x3c, data_02155c3c);
    *(u32 *)(p + 0x18) = 0x1000;
    *(u32 *)(p + 0x1c) = 0x1000;
    func_021167f0(arg0, p);
    return p;
}

void func_020a6e90(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
}

void *func_020a7154(u16 arg0) {
    u8 *node = *(u8 **)(data_021600e4 + 0x13e0);
    while (node != NULL) {
        if (*(u16 *)(node + 0x22) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x38);
    }
    return NULL;
}

extern void func_020a745c(void);
extern s32 func_020a2c5c(s32, s32, s32, s32, s32);
s32 func_020a73e8(s32 arg0) {
    s32 one = 1;
    s32 zero = 0;
    s32 four = 4;
    s32 seven = 7;
    func_020a745c();
    if (func_020a2c5c(four, zero, one, arg0, seven) == 0) {
        if (func_020a2c5c(four, zero, one, 0x63, seven) == 0) {
            return 0;
        }
    }
    return 1;
}

void func_020a745c(void) {
}

void *func_020a7460(void) {
    u8 *p = func_0210c594(0x18, data_02155c3c);
    *(void **)(p + 4) = func_0210c594(0x54, data_02155c3c);
    return p;
}

void func_020a7494(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
}

void func_020a74d4(void) {
 void *a[3], *b[3];
 void *p;
 s32 size = 0x114;
 func_021167ac(a, size);
 func_021167ac(b, size);
 func_020f2524(data_0214ffc4, data_0214ffe4, 2, a, b);
 while ((p=a[0]) != NULL) { func_021168f8(a,p); if(p != NULL) func_0210c5dc(p); }
 while ((p=b[0]) != NULL) { func_021168f8(b,p); if(p != NULL) func_0210c5dc(p); }
}

