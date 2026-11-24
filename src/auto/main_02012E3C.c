/* 16 functions from 0x02012E3C to 0x020139A4 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02145c2c;
extern s32 func_0201f800(u32);

s32 func_02013618(void) {
    return func_0201f800(data_02145c2c);
}

s32 func_02013630(s32 x) {
    return x < 0 ? -x : x;
}

unsigned int func_0201363c(u64 x)
{
  x = x - ((x >> 1) & 0x5555555555555555ull);
  x = (x & 0x3333333333333333ull) + ((x >> 2) & 0x3333333333333333ull);
  x = (x + (x >> 4)) & 0x0f0f0f0f0f0f0f0full;
  x += x >> 8;
  x += x >> 16;
  x += x >> 32;
  if (x)
  {
  }
  return x & 0xff;
}

s32 func_020136d0(s32 arg0, ...) {
    s32 *args = &arg0;
    return (args[1] & 0x80000000) != 0;
}

extern u32 data_02145c8c[];
s32 func_020137b0(u8 *arg0, u8 arg1) {
    if (arg0 == 0) {
        return 0;
    }
    *arg0 = arg1;
    return 1;
}

