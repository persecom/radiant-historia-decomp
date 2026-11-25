/* 25 functions from 0x02025F38 to 0x02026F38 (main), found by ds-decomp. */
#include "common.h"
extern char data_0214600c[];
extern char data_0214602c[];
extern char data_02146050[];
extern char data_02146054[];
extern char data_02146058[];
extern char data_0214605c[];
extern char data_02146060[];
extern char data_02146064[];
extern char data_02146068[];
extern char data_0214606c[];
extern char data_02146070[];
extern char data_02146074[];
extern char data_0214607c[];
extern char data_02146080[];
extern char data_02146084[];
extern char data_02146088[];
extern char data_0214608c[];
extern char data_02146090[];
extern char data_02146098[];
extern char data_0214609c[];
extern char data_021460a0[];
extern char data_021460a4[];
extern char data_021460a8[];
extern char data_021460ac[];
extern char data_021460b0[];
extern char data_021460b8[];
extern char data_021460bc[];
extern char data_021460c0[];
extern char data_021460c4[];
extern char data_021460cc[];
extern char data_021460d0[];
extern char data_021460d4[];
extern char data_021460d8[];
extern char data_021460dc[];
extern char data_021460e0[];
extern char data_021460e4[];

extern void func_0210c5dc(void *);
extern void func_021168f8(void *, void *);
extern void func_02022584(void *, s32, s8, s16, s16, s16, s16);
extern void *func_0210c594(s32, u32);
extern u32 data_02155c3c;
extern void *data_0216007c[];
extern void func_021168f8(void *, void *);
extern void func_021167ac(void *, s32);
extern void func_021093b0(void *);
extern void *func_02032c44(void);
extern void func_021167f0(void *, void *);
extern void func_0203218c(void *);
extern void func_02026ddc(void *);
extern char data_021460e8[];
extern char data_021460ec[];
extern void func_02005e80(char *, const char *, ...);
extern s32 func_02022558(void *, ...);
extern void func_020226c0(void *, ...);
void func_02025f38(void *arg0, void *arg1, s32 arg2) {
    func_02022584(
        *(void **)((u8 *)(*(void **)((u8 *)arg0 + 0x118)) + 0x60),
        arg2,
        (s8)(*(s16 *)((u8 *)arg1 + 0x2)),
        *(s16 *)((u8 *)arg1 + 0x6),
        *(s16 *)((u8 *)arg1 + 0x8),
        *(s16 *)((u8 *)arg1 + 0xa),
        *(s16 *)((u8 *)arg1 + 0x10)
    );
}

extern void func_020306c4(void *, s32);
extern void func_02022a48(void *, u32);
void func_02025f84(u8 *arg0, u16 arg1) {
    u32 mask = 0;
    u8 *p118;
    void *p60;
    s32 node;

    switch (arg1) {
        case 0x85: mask = 0x1; break;
        case 0x86: mask = 0x2; break;
        case 0x87: mask = 0x4; break;
        case 0x88: mask = 0x8; break;
        case 0x89: mask = 0x10; break;
        case 0x8a: mask = 0x20; break;
        case 0x8c: mask = 0x80; break;
        case 0x8d: mask = 0x100; break;
        case 0x8e: mask = 0x200; break;
        case 0x8f: mask = 0x400; break;
        case 0x90: mask = 0x800; break;
        case 0x91: mask = 0x1000; break;
        case 0x92: mask = 0x2000; break;
        case 0x93: mask = 0x4000; break;
        case 0x94: mask = 0x8000; break;
        case 0x95: mask = 0x10000; break;
        case 0x96: mask = 0x20000; break;
        case 0x97: mask = 0x40000; break;
        case 0x98: mask = 0x80000; break;
        case 0x99: mask = 0x100000; break;
        case 0x9a: mask = 0x200000; break;
        case 0x9b: mask = 0x400000; break;
        case 0x9c: mask = 0x800000; break;
        case 0x9d: mask = 0x1000000; break;
        case 0x9e: mask = 0x2000000; break;
        case 0xa5: mask = 0x20000000; break;
        case 0x9f: mask = 0x4000000; break;
        case 0xa0: mask = 0x8000000; break;
        case 0xa1: mask = 0x10000000; break;
        case 0xad: mask = 0x40000000; break;
        case 0xae: mask = 0x80000000; break;
    }

    p118 = *(u8 **)(arg0 + 0x118);
    p60 = *(void **)(p118 + 0x60);
    if (!(*(u32 *)(p118 + 0x78) & mask)) {
        return;
    }

    node = func_02022558(p60, arg1);
    if (node != 0) {
        func_020226c0(p60, (void *)node);
    }

    switch (arg1) {
        case 0x88:
            *(u32 *)(*(u8 **)(arg0 + 0x118) + 0x8c) &= ~0x400;
            break;
        case 0x8c:
            func_020306c4(*(void **)(arg0 + 0x118), 0);
            break;
        case 0x8d:
            func_020306c4(*(void **)(arg0 + 0x118), 1);
            break;
        case 0x8e:
            func_020306c4(*(void **)(arg0 + 0x118), 2);
            break;
        case 0x8f:
            func_020306c4(*(void **)(arg0 + 0x118), 3);
            break;
        case 0x90:
            func_020306c4(*(void **)(arg0 + 0x118), 4);
            break;
        case 0x91:
            func_020306c4(*(void **)(arg0 + 0x118), 5);
            break;
        case 0x92:
            func_020306c4(*(void **)(arg0 + 0x118), 6);
            break;
        case 0x93:
            func_020306c4(*(void **)(arg0 + 0x118), 7);
            break;
        case 0x94:
            func_020306c4(*(void **)(arg0 + 0x118), 8);
            break;
        case 0x95:
            func_020306c4(*(void **)(arg0 + 0x118), 9);
            break;
        case 0x96:
            *(u16 *)(*(u8 **)(arg0 + 0x118) + 0x7c) = 0;
            break;
        case 0x97:
            *(u16 *)(*(u8 **)(arg0 + 0x118) + 0x7e) = 0;
            break;
        case 0x98:
            mask = 0x80000;
            break;
        case 0x99:
            mask = 0x100000;
            break;
        case 0x9a:
            *(u16 *)(*(u8 **)(arg0 + 0x118) + 0x84) = 0;
            break;
        case 0x9b:
            *(u16 *)(*(u8 **)(arg0 + 0x118) + 0x86) = 0;
            break;
        case 0xa5:
            func_020306c4(*(void **)(arg0 + 0x118), 10);
            break;
        case 0xad:
            func_020306c4(*(void **)(arg0 + 0x118), 11);
            func_020306c4(*(void **)(arg0 + 0x118), 12);
            break;
        case 0xae:
            func_020306c4(*(void **)(arg0 + 0x118), 14);
            func_020306c4(*(void **)(arg0 + 0x118), 15);
            func_020306c4(*(void **)(arg0 + 0x118), 16);
            func_020306c4(*(void **)(arg0 + 0x118), 17);
            break;
    }

    *(u32 *)(*(u8 **)(arg0 + 0x118) + 0x78) &= ~mask;
    func_02022a48(arg0, mask);
    if (arg1 == 0xa5) {
        *(u32 *)(*(u8 **)(arg0 + 0x118) + 0x78) &= ~0x40;
        func_02022a48(arg0, 0x40);
    }
    if (arg1 == 0x89 || arg1 == 0x8a) {
        u8 *p128 = *(u8 **)(arg0 + 0x128);
        if (p128 != NULL) {
            *(u32 *)(p128 + 0x18) &= ~8;
        }
    }
}

void func_020263b4(void *arg0, u32 arg1)
{
  void *obj;
  u32 mask = 0;
  switch (arg1)
  {
    case 0xa2:
      mask = 0x1;
      break;

    case 0xa3:
      mask = 0x2;
      break;

    case 0xa4:
      mask = 0x10;
      break;

    case 0xa6:
      mask = 0x20;
      break;

    case 0xa7:
      mask = 0x40;
      break;

    case 0xa8:
      mask = 0x80;
      if (((!arg1) && (!arg1)) && (!arg1))
    {
    }
      break;

    case 0xa9:
      mask = 0x100;
      break;

    case 0xaa:
      mask = 0x200;
      break;

  }

  obj = *((void **) ((*((u8 **) (((u8 *) arg0) + 0x118))) + 0x60));
  if (obj == NULL)
  {
    return;
  }
  if (((*((u32 *) ((*((u8 **) (((u8 *) arg0) + 0x118))) + 0x8c))) & mask) == 0)
  {
    return;
  }
  {
    s32 ret = func_02022558(obj);
    if (ret)
    {
      func_020226c0(obj, ret);
    }
  }
  *((u32 *) ((*((u8 **) (((u8 *) arg0) + 0x118))) + 0x8c)) &= ~mask;
}

void func_0202647c(u8 *arg0, s32 arg1) {
    u32 mask = 0;
    switch (arg1) {
        case 0xab:
            mask = 8;
            break;
        case 0xac:
            mask = 0x10;
            break;
        case 0xaf:
            mask = 0x20;
            break;
    }
    if ((*(u32 *)(*(u8 **)(arg0 + 0x118) + 0x90) & mask) == 0) {
        return;
    }
    ((void (*)(void *, void *))func_020226c0)(*(void **)(*(u8 **)(arg0 + 0x118) + 0x60), ((void *(*)(void *, s32))func_02022558)(*(void **)(*(u8 **)(arg0 + 0x118) + 0x60), arg1));
    switch (arg1) {
        case 0xab:
            *(u16 *)(*(u8 **)(arg0 + 0x118) + 0x94) = 0;
            *(u16 *)(*(u8 **)(arg0 + 0x118) + 0x96) = 0;
            break;
        case 0xac:
            *(u16 *)(*(u8 **)(arg0 + 0x118) + 0x98) = 0;
            *(u16 *)(*(u8 **)(arg0 + 0x118) + 0x9a) = 0;
            break;
        case 0xaf:
            *(u16 *)(*(u8 **)(arg0 + 0x118) + 0x9c) = 0;
            break;
    }
    *(u32 *)(*(u8 **)(arg0 + 0x118) + 0x90) &= ~mask;
}

void *func_02026548(void) {
    return func_0210c594(0x14, data_02155c3c);
}

void func_02026564(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_02026578(void *arg0) {
    if (arg0 != NULL) {
        *(u16 *)((u8 *)arg0 + 0) = 0;
        *(u16 *)((u8 *)arg0 + 2) = 0;
        *(u16 *)((u8 *)arg0 + 4) = 0;
        *(u32 *)((u8 *)arg0 + 8) = 0;
        *(u32 *)((u8 *)arg0 + 12) = 0;
    }
}

void func_0202659c(u8 *arg0, s32 arg1) {
    volatile s16 *p;
    s16 v;

    *(s16 *)(arg0 + 2) += arg1;
    p = (volatile s16 *)(arg0 + 2);
    v = *p;
    if (v > 2) {
        *(s16 *)(arg0 + 2) = 2;
    }
    if (*(s16 *)(arg0 + 2) < 0) {
        *(s16 *)(arg0 + 2) = 0;
    }
}

s16 func_020265cc(s16 *arg0) {
    return arg0[1];
}

void func_020265d4(u8 *arg0, s32 arg1) {
    if (arg1 >= *(s16 *)(arg0 + 2) * 0x58) {
        return;
    }
    *(s32 *)(arg0 + 0xc) = 0xe000;
    *(u16 *)(arg0 + 0) = 1;
    *(u32 *)(arg0 + 8) |= 0x20;
}

void func_02026608(u8 *arg0) {
    *(s32 *)(arg0 + 0xc) = -0x1000;
    *(u16 *)(arg0 + 0) = 1;
    *(u32 *)(arg0 + 8) |= 0x40;
}

extern void *func_021092d8(char *);
extern s32 func_02092ab0(void *,u16);
extern void *func_020929f4(void *,s32);
extern s32 func_02092a28(void *,const char *);
extern void func_021093f0(void *);
extern s32 func_02092994(void *,s32);
extern void func_02109444(void *);
void *func_0202662c(u32 id,u32 number) {
char path[48];
s32 zero=0;
u8 *list,*entry;
void *parser;
void *word;
u16 i,count;
if(!number) goto fail;
if(id<=99) func_02005e80(path,data_0214600c,id,number);
else func_02005e80(path,data_0214602c,id);
parser=func_021092d8(path);
list=func_0210c594(16,data_02155c3c);
count=0;
*(u16 *)(list+12)=count;*(u16 *)(list+14)=count;
func_021167ac(list,28);
for(i=0;i<256;i++) {
if(func_02092ab0(parser,(u16)number)!=-1) {
word=func_020929f4(parser,zero);
if(word && func_02092a28(word,data_02146050)) break;
entry=func_0210c594(36,data_02155c3c);
if(word) {if(func_02092a28(word,data_02146054)) *(u16 *)entry=1;
else if(func_02092a28(word,data_02146058)) *(u16 *)entry=2;
else if(func_02092a28(word,data_0214605c)) *(u16 *)entry=30;
else if(func_02092a28(word,data_02146060)) *(u16 *)entry=3;
else if(func_02092a28(word,data_02146064)) *(u16 *)entry=4;
else if(func_02092a28(word,data_02146068)) *(u16 *)entry=5;
else if(func_02092a28(word,data_0214606c)) *(u16 *)entry=6;
else if(func_02092a28(word,data_02146070)) *(u16 *)entry=7;
else if(func_02092a28(word,data_02146074)) *(u16 *)entry=8;
else if(func_02092a28(word,data_0214607c)) *(u16 *)entry=9;
else if(func_02092a28(word,data_02146080)) *(u16 *)entry=10;
else if(func_02092a28(word,data_02146084)) *(u16 *)entry=11;
else if(func_02092a28(word,data_02146088)) *(u16 *)entry=12;
else if(func_02092a28(word,data_0214608c)) *(u16 *)entry=13;
else if(func_02092a28(word,data_02146090)) *(u16 *)entry=14;
else if(func_02092a28(word,data_02146098)) *(u16 *)entry=18;
else if(func_02092a28(word,data_0214609c)) *(u16 *)entry=19;
else if(func_02092a28(word,data_021460a0)) *(u16 *)entry=20;
else if(func_02092a28(word,data_021460a4)) *(u16 *)entry=21;
else if(func_02092a28(word,data_021460a8)) *(u16 *)entry=22;
else if(func_02092a28(word,data_021460ac)) *(u16 *)entry=24;
else if(func_02092a28(word,data_021460b0)) *(u16 *)entry=25;
else if(func_02092a28(word,data_021460b8)) *(u16 *)entry=15;
else if(func_02092a28(word,data_021460bc)) *(u16 *)entry=16;
else if(func_02092a28(word,data_021460c0)) *(u16 *)entry=17;
else if(func_02092a28(word,data_021460c4)) *(u16 *)entry=23;
else if(func_02092a28(word,data_021460cc)) *(u16 *)entry=26;
else if(func_02092a28(word,data_021460d0)) *(u16 *)entry=28;
else if(func_02092a28(word,data_021460d4)) *(u16 *)entry=29;
else if(func_02092a28(word,data_021460d8)) *(u16 *)entry=32;
else if(func_02092a28(word,data_021460dc)) *(u16 *)entry=33;
else if(func_02092a28(word,data_021460e0)) *(u16 *)entry=34;
else if(func_02092a28(word,data_021460e4)) *(u16 *)entry=35;else *(u16 *)entry=zero;}
else *(u16 *)entry=zero;
func_021093f0(parser);
*(s32 *)(entry+4)=func_02092994(parser,zero);
*(s32 *)(entry+8)=func_02092994(parser,zero);
*(s32 *)(entry+12)=func_02092994(parser,zero);
*(s32 *)(entry+16)=func_02092994(parser,zero);
*(s32 *)(entry+20)=func_02092994(parser,zero);
*(u16 *)(entry+24)=func_02092994(parser,zero);
func_021167f0(list,entry);
count++;
}
func_02109444(parser);
}
*(u16 *)(list+14)=count;
if(parser) func_021093b0(parser);
return list;
fail: return (void *)zero;
}

void func_02026c00(void **arg0) {
    void *ptr;
    void *next;
    if (arg0 == NULL) {
        return;
    }
    ptr = *arg0;
    while (ptr != NULL) {
        next = *(void **)((u8 *)ptr + 0x20);
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
        ptr = next;
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_02026c58(void **arg0) {
    return *arg0;
}

void *func_02026c60(void *arg0, u32 arg1) {
    u8 *node = *(u8 **)arg0;
    u8 i = 0;
    if (node != NULL) {
        do {
            if (i == arg1) {
                return node;
            }
            node = *(u8 **)(node + 0x20);
            i++;
        } while (node != NULL);
    }
    return NULL;
}

void func_02026c94(u16 *arg0) {
    arg0[6]++;
}

u16 func_02026ca4(u16 *arg0) {
    return arg0[6];
}

void func_02026cac(u8 *arg0) {
    void *node;
    if (arg0 == NULL || *(u16 *)(arg0 + 0xe) == 0) {
        return;
    }
    node = *(void **)arg0;
    if (node == NULL) {
        return;
    }
    *(u16 *)(arg0 + 0xe) -= 1;
    func_021168f8(arg0, node);
    if (node != NULL) {
        func_0210c5dc(node);
    }
}

void func_02026cec(void) {
    u8 *p = func_0210c594(0x44, data_02155c3c);
    data_0216007c[1] = p;
    func_021167ac(p + 0x18, 0x14);
}

void func_02026d20(void) {
    while (*(void **)((u8 *)data_0216007c[1] + 0x18) != NULL) {
        func_02026ddc(*(void **)((u8 *)data_0216007c[1] + 0x18));
    }
    if (data_0216007c[1] != NULL) {
        func_0210c5dc(data_0216007c[1]);
        data_0216007c[1] = NULL;
    }
}

void *func_02026d70(u32 arg0, u32 arg1, u32 arg2) {
    u32 *node = func_0210c594(0x1c, data_02155c3c);
    node[0] = arg0;
    node[1] = arg1;
    node[2] = arg2;
    node[3] = (u32)func_02032c44();
    func_021167f0((u8 *)data_0216007c[1] + 0x18, node);
    *(u16 *)((u8 *)data_0216007c[1] + 0x16) += 1;
    return node;
}

void func_02026ddc(void *arg0) {
    void *sub = *(void **)((u8 *)arg0 + 0xc);
    func_0203218c(sub);
    if (sub != NULL) {
        func_0210c5dc(sub);
    }
    func_021168f8((u8 *)data_0216007c[1] + 0x18, arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
    *(u16 *)((u8 *)data_0216007c[1] + 0x16) -= 1;
}

void func_02026e40(u16 arg0) {
    void *p = func_0210c594(0x28, data_02155c3c);
    *(u16 *)p = arg0;
}

void func_02026e64(u8 *arg0) {
    if (arg0 != NULL) {
        if (*(void **)(arg0 + 4) != NULL) {
            func_021093b0(*(void **)(arg0 + 4));
            *(void **)(arg0 + 4) = NULL;
        }
        if (arg0 != NULL) {
            func_0210c5dc(arg0);
        }
    }
}

s32 func_02026e9c(u32 arg0, char *arg1, char *arg2) {
    u8 i;
    u8 j;
    s32 result;
    char buf1[32];
    char buf2[32];

    for (i = 0; i < 32; i++) {
        buf1[i] = 0;
        buf2[i] = 0;
    }
    func_02005e80(buf1, data_021460e8, arg2);
    func_02005e80(buf2, data_021460ec, arg1);
    result = 1;
    for (j = 0; j < arg0; j++) {
        if ((s8)buf1[j] != (s8)buf2[j]) result = 0;
    }
    return result;
}

