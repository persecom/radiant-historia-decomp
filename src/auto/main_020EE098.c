/* 8 functions from 0x020EE098 to 0x020EEEA4 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160aec;
extern u32 data_02155c3c;
extern char data_02151cd0[];
extern u8 *data_02160204;
extern void func_020eec70(void);
extern void *func_0210c594(u32, u32);
extern void func_021091b4(void);
extern void func_0210ca6c(u32, u32);
extern void *func_021092d8(char *);
extern s32 func_02092ab0(void *, s32);
extern s32 func_02092994(void *, s32);
extern void func_021093b0(void *);
extern void func_020e95ec(void *);
extern void func_020e965c(u8 *, u8 *);
extern void func_0210eb98(u8 *, u8 *, u8 *);
extern void func_02109b14(s32);
extern void func_02009150(void *, void *);
extern u8 data_02151c8c[20];
extern void func_0210eb80(u8 *);
extern void func_021168f8(u8 *, u8 *);
extern void func_0210c5dc(u8 *);
extern void func_020e9620(u8 *);
extern void func_020eed30(s32);
extern void func_020f1e2c(void);
extern void func_0210dae0(u8 *);
extern void func_0210db10(u8 *);
extern void func_020eeea4(void);
extern char data_02151ca0[];
extern char data_02151ca4[];
extern char data_02151cb8[];
extern char data_02151ccc[];
extern s32 func_0210cc54(const char *);
extern s32 func_0210cd90(s32);
extern void *func_0210c518(u32, void *);
extern void func_02008e68(s32, void *, s32);
extern void func_02005e80(char *, const char *, ...);
extern s32 func_0210e7f0(char *, void *);
extern s32 func_0210e848(char *, void *);
extern void func_021167f0(void *, void *);

u8 *func_020ee52c(u16 arg0) {
    u8 *p = data_02160aec;
    u8 *node = NULL;
    while ((node = (node == NULL) ? *(u8 **)p : *(u8 **)(node + *(u16 *)(p + 0xa) + 4)) != NULL) {
        if (*(u16 *)(node + 0x24) == arg0) {
            return node;
        }
    }
    return NULL;
}

extern void func_0210c094(void *, void *, void *, void *);
void func_020ee574(void) {
s32 zero=0, half=1024, full=2048;
u8 *p=data_02160aec;
s32 off=0x58c74;
*(s32 *)(p+0x58c74)=full;
*(s32 *)(p+0x58c78)=half;
*(s32 *)(p+0x58c7c)=full;
*(s32 *)(p+0x58c80)=full;
*(s32 *)(p+0x58c84)=zero;
*(s32 *)(p+0x58c88)=zero;
*(s32 *)(p+0x58c8c)=zero;
*(s32 *)(p+0x58c90)=zero;
*(s32 *)(p+0x58c94)=full;
func_0210c094(p+(off+0),p+0x58c80,p+(off+24),p+(off+-12));
*(s32 *)(p+0x58ca4)=zero;
*(s32 *)(p+0x58ca8)=half;
*(s32 *)(p+0x58cac)=full;
*(s32 *)(p+0x58cb0)=zero;
*(s32 *)(p+0x58cb4)=zero;
*(s32 *)(p+0x58cb8)=zero;
*(s32 *)(p+0x58cbc)=full;
*(s32 *)(p+0x58cc0)=zero;
*(s32 *)(p+0x58cc4)=full;
func_0210c094(p+(off+48),p+0x58cb0,p+(off+72),p+(off+36));
*(s32 *)(p+0x58cd4)=zero;
*(s32 *)(p+0x58cd8)=half;
*(s32 *)(p+0x58cdc)=zero;
*(s32 *)(p+0x58ce0)=full;
*(s32 *)(p+0x58ce4)=zero;
*(s32 *)(p+0x58ce8)=zero;
*(s32 *)(p+0x58cec)=zero;
*(s32 *)(p+0x58cf0)=zero;
*(s32 *)(p+0x58cf4)=full;
func_0210c094(p+(off+96),p+0x58ce0,p+(off+120),p+(off+84));
*(s32 *)(p+0x58d04)=full;
*(s32 *)(p+0x58d08)=half;
*(s32 *)(p+0x58d0c)=zero;
*(s32 *)(p+0x58d10)=full;
*(s32 *)(p+0x58d14)=zero;
*(s32 *)(p+0x58d18)=full;
*(s32 *)(p+0x58d1c)=zero;
*(s32 *)(p+0x58d20)=zero;
*(s32 *)(p+0x58d24)=zero;
func_0210c094(p+(off+144),p+0x58d10,p+(off+168),p+(off+132));
}

void func_020ee6c8(u16 arg0) {
    s32 zero = 0;
    s32 one = 1;
    u8 *p = data_02160aec;
    u8 *file;

    func_020eec70();
    *(u8 **)(data_02160aec) = func_0210c594(data_02155c3c, zero);
    func_021091b4();
    func_020ee574();
    *(u16 *)(data_02160aec + 0x58d36) = zero;
    *(u16 *)(data_02160aec + 0x58d38) = zero;
    *(u16 *)(data_02160aec + 0xc) = arg0;
    if (arg0 == 0) return;
    func_0210ca6c(zero, one);
    func_02005e80((char *)(p + 0x10), data_02151cd0, arg0);
    file = func_021092d8((char *)(p + 0x10));
    if (func_02092ab0(file, 0x400) == 0x400) return;
    *(u16 *)(data_02160aec + 0x58d36) = func_02092994(file, zero);
    *(u16 *)(data_02160aec + 0x58d38) = func_02092994(file, zero);
    if (data_02160204[0x139] == 1) {
        *(u16 *)(data_02160aec + 0x58d36) = 0x80;
        *(u16 *)(data_02160aec + 0x58d38) = 0x80;
    }
    func_021093b0(file);
    *(u16 *)(data_02160aec + 0x58d36) = 0x7fff;
}

void func_020eec70(void)
{
  u8 **pp = &data_02160aec;
  if ((*pp) != NULL)
  {
    if ((*((u16 *) ((*pp) + 0xc))) != 0)
    {
      u8 *node;
      func_0210eb80((*pp) + 0x58be4);
      node = *((u8 **) (*pp));
      while (node != NULL)
      {
        func_021168f8(*pp, node);
        func_0210eb80(node + 8);
        if (node != NULL)
        {
          func_0210c5dc(node);
        }
        node = *((u8 **) (*pp));
      }

      func_0210eb80((*pp) + 0x58be4);
      func_020e9620(((*(&data_02160aec)) + 0x58be4) + 0x10);
      func_020eed30(0);
    }
    if (data_02160aec != NULL)
    {
      func_0210c5dc(data_02160aec);
      data_02160aec = NULL;
    }
  }
  func_020f1e2c();
}

void func_020eed30(s32 arg0) {
    u8 **pp = &data_02160aec;
    if (*pp == NULL || *(u16 *)(*pp + 0xc) == 0) {
        return;
    }
    if (arg0 != 0) {
        if (*(void **)data_02151c8c != NULL) {
            return;
        }
        *(void **)data_02151c8c = func_020eeea4;
        func_0210dae0(data_02151c8c);
        *(u32 *)(*pp + 0x58bdc) = 1;
    } else {
        void **qq = (void **)data_02151c8c;
        if (*qq == NULL) {
            return;
        }
        func_0210db10(data_02151c8c);
        *qq = NULL;
        *(u32 *)(*pp + 0x58bdc) = 0;
    }
}

void func_020eedc8(void) {
}

void func_020eedcc(void) {
    u8 *base = data_02160aec;
    s32 minI = *(s16 *)(base + 0x58d36);
    s32 maxI = 0;
    s32 minJ = *(s16 *)(base + 0x58d38);
    s32 maxJ = 0;
    s32 ny = minI;
    u8 *cell = base + 0xbc8;
    s32 j;
    for (j = 0; j < *(s16 *)(base + 0x58d38); j++) {
        s32 i;
        for (i = 0; i < ny; i++) {
            if (*cell != 0) {
                if (minI > i) minI = i;
                if (maxI < i) maxI = i;
                if (minJ > j) minJ = j;
                if (maxJ < j) maxJ = j;
            }
            cell += 0xc;
        }
    }
    *(s32 *)(data_02160aec + 0x58bc8) = minI;
    *(s32 *)(data_02160aec + 0x58bcc) = maxI;
    *(s32 *)(data_02160aec + 0x58bd0) = minJ;
    *(s32 *)(data_02160aec + 0x58bd4) = maxJ;
}

