/* 19 functions from 0x020EC12C to 0x020ED0BC (main), found by ds-decomp. */
#include "common.h"
extern char data_02151b0c[], data_02151b28[], data_02151b48[];
extern void *func_0210957c(s32);
extern s32 func_02092ab0(void *, s32);
extern u32 func_0210cd20(void *, s32);
extern s32 func_02005e80(char *, const char *, ...);
extern s32 func_02108620(void *, char *, char *, char *, s32);
extern u8 *func_02109f3c(void *);
extern s32 func_021086d4(void *, u16);
typedef struct ECModelFlags { u8 pad[0x70]; u8 unused:1; u8 flip:1; u8 rest:6; } ECModelFlags;
extern s32 data_02162860[];
extern u8 data_021612c8[];
static inline void ECSetPolygonAttr(s32 lights,s32 mode,s32 cull,s32 id,s32 alpha,s32 misc) {
 *(volatile u32 *)0x40004a4=(alpha<<16)|((cull<<6)|(mode<<4)|lights|(id<<24));
}

extern void func_02108594(void *);
extern void func_0210c5dc(void *);
extern u8 *data_02160ab4;
extern void func_020ebc24(u8 *);
extern s32 func_020ebddc(void *, s32);
extern void func_021168f8(u8 *, u8 *);
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_0210dbe8(void *);
extern void func_0210dc70(void *);
void func_020ec548(u8 *arg0);

void func_020ec88c(u8 *,s32,s32);
void func_020ec8cc(u8 *,s32,u32);
void *func_020ec908(u32);
void func_02119130(void *);

extern void func_0211a4d4(void *,s32,s32);
extern void func_02119da4(void *);
extern void func_02119f1c(void);
extern void func_0211a178(s32,s32,s32);
extern void func_0211a26c(s32,s32,s32);
extern void func_02119eb8(void *);
extern void func_0211a128(void);
extern void func_02119e4c(void);
#pragma optimization_level 0

#pragma optimization_level 4

extern u8 data_02160ad8[];
extern u8 data_02160ac4[];
extern u8 data_02160ab8[];
extern void *data_02155c3c;
extern void func_0210db10(void *);
extern void func_0210db58(void *);
extern void func_0210dae0(void *);
extern void func_0210db40(void *);
extern void func_020ed0bc(void);
extern void *func_0210c594(s32, void *);
extern void *func_0210853c(void);

extern s32 func_02117d80(void *);
extern s32 func_020ebd5c(void *, s32, s32);

#pragma optimization_level 3

s32 func_020ecac8(u8 *self, s32 id)
{
  s32 zero;
  char a[50];
  char b[50];
  char c[50];
  s32 extra;
  u8 *new_var;
  s32 one = 1;
  s32 j;
  s32 k;
  u8 *entry;
  s32 n;
  s32 clear = 0;
  s32 bit = 1;
  u8 *resource;
  s32 i;
  u8 *entries;
  s32 count;
  void *stream;
  *((u32 *) data_02160ab8) = zero;
  *((u32 *) (data_02160ab8 + 4)) = zero;
  *((u32 *) (new_var + 8)) = zero;
  stream = func_0210957c(zero);
  if (func_02092ab0(stream, id) != (-1))
  {
    *((u32 *) data_02160ab8) = func_0210cd20(stream, zero);
    *((u32 *) (data_02160ab8 + 4)) = func_0210cd20(stream, zero);
    *((u32 *) (data_02160ab8 + 8)) = func_0210cd20(stream, zero);
  }
  if (((*((u32 *) data_02160ab8)) && (*((u32 *) (data_02160ab8 + 4)))) && (*((u32 *) (new_var + 8))))
  {
    func_02005e80(a, data_02151b0c, *new_var);
    func_02005e80(b, data_02151b28, *((u32 *) (new_var + 4)));
    func_02005e80(c, data_02151b48, *((u32 *) (data_02160ab8 + 8)));
    if (!func_02108620(*((void **) self), a, b, c, zero))
    {
      return zero;
    }
  }
  resource = func_02109f3c(*((void **) ((*((u8 **) ((*((u8 **) self)) + 0x58))) + 8)));
  if (!(*((void **) (resource + 0x10))))
  {
    n = *(*((u16 **) ((*((u8 **) ((*((u8 **) self)) + 0x58))) + 12)));
    zero = 0;
    extra = func_020020bc(n, 4) != 0;
    count = func_02002080(n, 4);
    count = (u16) (count + extra);
    entries = func_0210c594(count * 4, data_02155c3c);
    entry = entries;
    {
      for (i = 0; i < count; i++, entry += 4)
      {
        k = i * 4;
        *((u16 *) (entry + 2)) = k;
        entry[0] = (j = 0);
        for (; j < 4; j++, k++)
        {
          if (n <= k)
          {
            break;
          }
          s32 empty;
          if (func_021086d4(*((void **) self), (u16) k) == 0)
          {
            empty = one;
          }
          else
          {
            empty = clear;
          }
          if (!empty)
          {
            entry[0] |= (u8) (bit << j);
          }
        }

      }

    }
    *((u8 **) (resource + 16)) = entries;
  }
  *((u8 **) (self + 16)) = *((u8 **) (resource + 16));
  new_var = data_02160ab8;
  return 1;
}

extern char data_02151b6c[];
extern char data_02151b84[];
extern char data_02151ba4[];
extern char data_02151bc4[];
extern char data_02151be0[];
extern char data_02151c00[];
extern char data_02151c24[];
extern char data_02151c40[];
extern char data_02151c60[];
extern char data_02151c84[];
void *func_0210957c(s32);
u32 func_0210cd20(void *, s32);
void func_02108ffc(void);
s32 func_02108620(void *, char *, char *, char *, s32);
s32 func_02109f84(void *);
void func_020ed3a4(void *, u16, u16);
u8 *func_02109f3c(void *);
s32 func_020020bc(s32, s32);
s32 func_02002080(s32, s32);
s32 func_021086d4(void *, u16);
s32 func_020ecd10(void **arg0, u32 arg1, void **arg2)
{
  char buf1[50];
  char buf2[50];
  char buf3[50];
  u8 *res;
  s32 i;
  u8 *alloc;
  u16 count;
  void *r9;
  ((u32 *) data_02160ab8)[0] = 0;
  ((u32 *) data_02160ab8)[2] = (((u32 *) data_02160ab8)[1] = 0);
  r9 = func_0210957c(0);
  if (func_02092ab0(r9, arg1) != (-1))
  {
    ((u32 *) data_02160ab8)[0] = func_0210cd20(r9, 0);
    ((u32 *) data_02160ab8)[1] = func_0210cd20(r9, 0);
    if ((data_02160ab8 && data_02160ab8) && data_02160ab8)
    {
    }
    ((u32 *) data_02160ab8)[2] = func_0210cd20(r9, 0);
  }
  func_02108ffc();
  if (((((u32 *) data_02160ab8)[0] != 0) && (((u32 *) data_02160ab8)[1] != 0)) && (((u32 *) data_02160ab8)[2] != 0))
  {
    u8 *r6 = NULL;
    if ((arg1 > 1000) && (arg1 < 5000))
    {
      func_02005e80(buf1, data_02151b6c, ((u32 *) data_02160ab8)[0]);
      func_02005e80(buf2, data_02151b84, ((u32 *) data_02160ab8)[1]);
      func_02005e80(buf3, data_02151ba4, ((u32 *) data_02160ab8)[2]);
    }
    else
      if ((arg1 != 0) && (arg1 < 0x52))
    {
      func_02005e80(buf1, data_02151bc4, ((u32 *) data_02160ab8)[0]);
      func_02005e80(buf2, data_02151be0, ((u32 *) data_02160ab8)[1]);
      func_02005e80(buf3, data_02151c00, ((u32 *) data_02160ab8)[2]);
    }
    else
    {
      func_02005e80(buf1, data_02151c24, ((u32 *) data_02160ab8)[0]);
      func_02005e80(buf2, data_02151c40, ((u32 *) data_02160ab8)[1]);
      func_02005e80(buf3, data_02151c60, ((u32 *) data_02160ab8)[2]);
    }
    if ((arg2 != NULL) && ((*arg2) != NULL))
    {
      u8 *node;
      for (node = *arg2; node != NULL; node = *((u8 **) (node + 8)))
      {
        u8 *sub = *((u8 **) node);
        if (sub == NULL)
        {
          break;
        }
        r6 = *((u8 **) sub);
        if (r6 != NULL)
        {
          u8 *end = *((u8 **) (sub + 4));
          if (r6 != end)
          {
            do
            {
              if (arg1 == (*((u16 *) (r6 + 0x10e))))
              {
                func_02005e80(buf2, data_02151c84);
                break;
              }
              r6 = *((u8 **) (r6 + 0x118));
            }
            while (r6 != NULL);
          }
        }
      }

    }
    if (!func_02108620(*arg0, buf1, buf2, buf3, 0))
    {
      return 0;
    }
    if ((func_02109f84(*(*((void ***) (((u8 *) (*arg0)) + 0x58)))) == 0) && (r6 != NULL))
    {
      if (((*((u16 *) (r6 + 0x100))) != 0) || ((*((u16 *) (r6 + 0x102))) != 0))
      {
        func_020ed3a4(arg0, *((u16 *) (r6 + 0x100)), *((u16 *) (r6 + 0x102)));
      }
    }
  }
  func_02108ffc();
  res = func_02109f3c(*((void **) ((*((u8 **) (((u8 *) (*arg0)) + 0x58))) + 8)));
  if ((*((void **) (res + 0x10))) == NULL)
  {
    u16 total = *(*((u16 **) ((*((u8 **) (((u8 *) (*arg0)) + 0x58))) + 0xc)));
    s32 j;
    s32 idx;
    u8 *cur;
    count = ((func_020020bc(total, 4) != 0) ? (1) : (0)) + func_02002080(total, 4);
    alloc = (u8 *) func_0210c594(count * 4, data_02155c3c);
    cur = alloc;
    for (i = 0; i < count; i++, cur += 4)
    {
      idx = (*((u16 *) (cur + 2)) = i * 4);
      cur[0] = 0;
      for (j = 0; j < 4; j++, idx++)
      {
        s32 found;
        if (total <= idx)
        {
          break;
        }
        found = func_021086d4(*arg0, (u16) idx) == 0;
        if (!found)
        {
          cur[0] |= (u8) (1 << j);
        }
      }

    }

    *((void **) (res + 0x10)) = alloc;
  }
  arg0[4] = *((void **) (res + 0x10));
  return 1;
}

#pragma optimization_level 4
