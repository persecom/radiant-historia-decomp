/* 6 functions from 0x02015994 to 0x02016018 (main), found by ds-decomp. */
#include "common.h"
#include "scan_02015.h"
extern const ScanSpec_02015 data_0213ec14;
extern const u16 data_0213eb14[128];

typedef struct {
    u32 field_0;
    u8 *field_4;
    u32 field_8;
    u32 field_c;
} Unk_02015994;

typedef struct {
    u8 *field_0;
    u32 field_4;
    u32 field_8;
} Unk_02015950;

extern s32 func_020150a4(s32 (*)(Unk_02015950 *, void *, u32), Unk_02015950 *, const char *, char *);
extern s32 func_02015950(Unk_02015950 *, void *, u32);
extern s32 func_02015994(u8 *, s32, const char *, char *);

s32 func_02015994(u8 *buf, s32 maxlen, const char *fmt, char *vlist) {
    Unk_02015994 s;
    s32 ret;
    s.field_4 = buf;
    s.field_8 = maxlen;
    s.field_c = 0;
    s.field_0 = 0;
    ret = func_020150a4(func_02015950, (Unk_02015950 *)&s.field_4, fmt, vlist);
    if (buf == NULL) return ret;
    if ((u32)ret < (u32)maxlen) {
        buf[ret] = 0;
        return ret;
    }
    if (maxlen != 0) *(buf + maxlen - 1) = 0;
    return ret;
}

void func_020159f8(s32 arg0, const char *arg1, char *arg2) {
    ((void (*)(s32, s32, const char *, char *))func_02015994)(arg0, -1, arg1, arg2);
}

void func_02015a10(s32 arg0, const char *arg1, ...) {
    char *vlist = (char *)((u32)&arg1 & ~3) + 4;
    func_02015994((u8 *)arg0, -1, arg1, vlist);
}

void func_02015a3c(void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *))
{
  u8 *array = base;
  u32 root;
  u8 *first;
  u8 *last;
  if (count < 2)
  {
    return;
  }
  root = (count >> 1) + 1;
  first = array + (size * (root - 1));
  last = array + (size * (count - 1));
  if (!root)
  {
  }
  for (;;)
  {
    u32 child;
    u8 *p;
    u8 *parent;
    if (root > 1)
    {
      --root;
      first -= size;
    }
    else
    {
      u32 n = size;
      u8 *a = last;
      u8 *b = first;
      while (n)
      {
        u8 x = *a;
        u8 y = *b;
        --n;
        *(b++) = x;
        *(a++) = y;
      }

      if ((--count) == 1)
      {
        return;
      }
      last -= size;
    }
    p = array + (size * (root - 1));
    child = root;
    while (count >= (child * 2))
    {
      child *= 2;
      parent = p;
      p = array + (size * (child - 1));
      if ((count > child) && (compare(p, p + size) < 0))
      {
        ++child;
        p += size;
      }
      if (compare(parent, p) >= 0)
      {
        break;
      }
      {
        u32 n = size;
        u8 *a = p;
        u8 *b = parent;
        while (n)
        {
          u8 x = *a;
          u8 y = *b;
          --n;
          *(b++) = x;
          *(a++) = y;
        }

      }
    }

  }

}

u8 *func_02015b74(u8 *input, ScanSpec_02015 *out)
{
  u8 *format;
  ScanSpec_02015 spec = data_0213ec14;
  format = input + 1;
  s32 modifier;
  s32 next;
  if (next == '%')
  {
    spec.conversion = next;
    *out = spec;
    return format + 1;
  }
  if (next == '*')
  {
    next = *(++format);
    spec.suppress = 1;
  }
  if ((((u32) next) >= 128) ? (0) : (data_0213eb14[next] & 8))
  {
    spec.width = (double) 0;
    do
    {
      s32 width = (spec.width * 10) + (next - '0');
      next = *(++format);
      spec.width = width;
    }
    while (((((u32) next) + 1) >= (128 + 1)) ? (0) : (data_0213eb14[next] & 8));
    if (spec.width == 0)
    {
      spec.conversion = 255;
      *out = spec;
      return format + 1;
    }
    spec.hasWidth = 1;
  }
  modifier = 1;
  switch (next)
  {
    case 'h':
    {
      next = format[1];
      spec.length = 2;
      if (next == 'h')
      {
        spec.length = 1;
        next = *(++format);
      }
      break;
    }

    case 'l':
    {
      next = format[1];
      spec.length = 3;
      if (next == 'l')
      {
        spec.length = 7;
        next = *(++format);
      }
      break;
    }

    case 'L':
      spec.length = 9;
      break;

    case 'j':
      spec.length = 4;
      break;

    case 't':
      spec.length = 6;
      break;

    case 'z':
      spec.length = 5;
      break;

    default:
      modifier = 0;
      break;

  }

  if (modifier)
  {
    next = *(++format);
  }
  spec.conversion = next;
  switch (next)
  {
    case 'd':

    case 'i':

    case 'o':

    case 'u':

    case 'x':

    case 'X':
      if (spec.length == 9)
    {
      spec.conversion = 255;
    }
      break;

    case 'a':

    case 'A':

    case 'e':

    case 'E':

    case 'f':

    case 'F':

    case 'g':

    case 'G':
      if (((spec.length == 1) || (spec.length == 2)) || (((u8) (spec.length + 252)) <= 3))
    {
      spec.conversion = 255;
    }
    else
      if (spec.length == 3)
    {
      spec.length = 8;
    }
      break;

    case 'p':
      spec.length = 3;
      spec.conversion = 'x';
      break;

    case 'c':
      if (spec.length == 3)
    {
      spec.length = 10;
    }
    else
      if (spec.length != 0)
    {
      spec.conversion = 255;
    }
      break;

    case 's':
    {
      s32 n;
      u8 *p;
      if (spec.length == 3)
      {
        spec.length = 10;
      }
      else
        if (spec.length != 0)
      {
        spec.conversion = 255;
      }
      p = spec.set;
      n = 32;
      do
      {
        *(p++) = 255;
      }
      while ((--n) > 0);
      spec.set[1] = 0xc1;
      spec.set[4] = 0xfe;
      break;
    }

    case '[':
    {
      s32 invert;
      s32 end;
      s32 ch;
      u8 *p;
      s32 n;
      if (spec.length == 3)
      {
        spec.length = 10;
      }
      else
        if (spec.length != 0)
      {
        spec.conversion = 255;
      }
      ch = *(++format);
      invert = 0;
      if (ch == '^')
      {
        ch = *(++format);
        invert = 1;
      }
      if (ch == ']')
      {
        spec.set[']' >> 3] |= 1 << (']' & 7);
        ch = *(++format);
      }
      while (ch && (ch != ']'))
      {
        next = format[1];
        spec.set[((u8) ch) >> 3] |= (u8) (1 << ch);
        if (((next == '-') && format[2]) && (format[2] != ']'))
        {
          end = format[2];
          for (ch++; ch <= end; ch++)
          {
            spec.set[((u8) ch) >> 3] |= (u8) (1 << (ch & 7));
          }

          format += 3;
          ch = *format;
        }
        else
        {
          ch = *(++format);
        }
      }

      if (!ch)
      {
        spec.conversion = 255;
      }
      else
        if (invert)
      {
        p = spec.set;
        n = 32;
        do
        {
          *p = (u8) (~(*p));
          p++;
        }
        while ((--n) > 0);
      }
      break;
    }

    case 'n':
      break;

    default:
      spec.conversion = 255;
      break;

  }

  *out = spec;
  return format + 1;
}

