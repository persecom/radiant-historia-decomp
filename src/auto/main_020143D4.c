/* 5 functions from 0x020139A4 to 0x02014994 (main), found by ds-decomp. */
#include "common.h"
extern void func_02019580(void *,double,void *);
extern double func_0201e014(double);
extern char *strcpy(char *,const char *);
typedef struct { u8 c[2]; } FormatText2;
typedef struct { FormatText2 lo, hi; u8 last; } FormatText5;
typedef struct { FormatText2 lo, hi; } FormatText4;
extern FormatText5 data_02145e54,data_02145e5c,data_02145e6c,data_02145e74;
extern FormatText4 data_02145e64,data_02145e68,data_02145e7c,data_02145e80;


typedef struct {
    u8 padding, sign, unk2, alternate, unk4, conversion;
    u16 unk6;
    s32 width, precision;
} FormatSpec;

extern const u16 data_0213eb14[];

u8 *func_020143d4(double value, u8 *end, FormatSpec spec)
{
  double original = value;
  u8 fmt[4];
  FormatSpec dec;
  u8 num[40];
  s32 sign;
  s32 conversion;
  u8 new_var;
  s32 precision;
  u8 *p = 0;
  s32 exponent;
  s32 i;
  s32 bit;
  s32 alternate;
  u8 digit;
  precision = spec.precision;
  conversion = spec.conversion;
  alternate = spec.alternate;
  sign = spec.sign;
  u8 *bytes;
  if (precision > 509)
  {
    return p;
  }
  p = end;
  fmt[0] = 0;
  exponent = 32;
  *((u16 *) (fmt + 2)) = exponent;
  func_02019580(fmt, original, num);
  switch (num[5])
  {
    case '0':
      *((s16 *) (num + 2)) = 0;
      break;

    case 'I':
      if (num[0])
    {
      p = (u8 *) (((u32) p) - 5);
      if (conversion == 'A')
      {
        *(FormatText5 *)p = data_02145e54;
        return p;
      }
      else
      {
        *(FormatText5 *)p = data_02145e5c;
        return p;
      }
    }
      p = (u8 *) (((u32) p) - 4);
      if (conversion == 'A')
      {
        *(FormatText4 *)p = data_02145e64;
        return p;
      }
      else
      {
        *(FormatText4 *)p = data_02145e68;
        return p;
      }

    case 'N':
      if (num[0])
    {
      p = (u8 *) (((u32) p) - 5);
      if (conversion == 'A')
      {
        *(FormatText5 *)p = data_02145e6c;
        return p;
      }
      else
      {
        *(FormatText5 *)p = data_02145e74;
        return p;
      }
    }
      p = (u8 *) (((u32) p) - 4);
      if (conversion == 'A')
      {
        *(FormatText4 *)p = data_02145e7c;
        return p;
      }
      else
      {
        *(FormatText4 *)p = data_02145e80;
        return p;
      }

  }

  dec.padding = 1;
  dec.sign = 1;
  dec.unk2 = 0;
  dec.alternate = 0;
  dec.unk4 = 0;
  dec.width = 0;
  dec.precision = 1;
  dec.conversion = 'd';
  bytes = (u8 *) (&value);
  for (i = 0; i < 4; i++)
  {
    u8 temp = bytes[i];
    bytes[i] = bytes[7 - i];
    bytes[7 - i] = temp;
  }

  exponent = ((((u32) (new_var = ((u8 *) (&value))[1])) << 17) | (((u32) ((u8 *) (&value))[0]) << 25)) >> 21;
  exponent &= 0x7ff;
  if (exponent)
  {
    exponent += -1023;
  }
  else
  {
    exponent = 0;
  }
  p = func_02013eb0(exponent, end, dec) - 1;
  if (conversion == 'a')
  {
    *p = 'p';
  }
  else
  {
    *p = 'P';
  }
  bytes = (u8 *) (&value);
  for (i = precision, bit = (precision * 4) + 11; i >= 1; i--, bit -= 4)
  {
    if (bit < 64)
    {
      digit = bytes[bit >> 3] >> (7 - (bit & 7));
      if ((bit & (~7)) != ((bit - 4) & (~7)))
      {
        digit |= (u8) ((bytes[(bit >> 3) - 1] << 8) >> (7 - (bit & 7)));
      }
      digit &= 15;
      if (digit < 10)
      {
        digit += '0';
      }
      else
        if (conversion == 'a')
      {
        digit += 87;
      }
      else
      {
        digit += 55;
      }
    }
    else
    {
      digit = '0';
    }
    *(--p) = digit;
  }

  if (precision || alternate)
  {
    *(--p) = '.';
  }
  *(--p) = (func_0201e014(original) != 0.0) ? ('1') : ('0');
  if (conversion == 'a')
  {
    *(--p) = 'x';
  }
  else
  {
    *(--p) = 'X';
  }
  *(--p) = '0';
  if (num[0])
  {
    *(--p) = '-';
  }
  else
    if (sign == 1)
  {
    *(--p) = '+';
  }
  else
    if (sign == 2)
  {
    *(--p) = ' ';
  }
  return p;
}
