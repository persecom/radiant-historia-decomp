/* 3 functions from 0x02029130 to 0x02029790 (main), found by ds-decomp. */
#include "common.h"

extern const char *func_020929f4(u8 *, s32);
extern s32 func_02092994(u8 *, s32);
extern s32 func_02026e9c(s32, const char *, char *);
extern char data_0214616c[];
extern s16 func_02026f38(char *);
extern u8 *func_0202e548(u32);
extern char data_02146168[];
extern u32 data_0216263c[3];
typedef struct {u32 seed, multiplier, increment;} RandomState_020295f0;
static inline u16 RandomRange_020295f0(u16 max) {
    u32 value;
    data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
    if (!max) {
        value = data_0216263c[0] >> 16;
    } else {
        value = ((data_0216263c[0] >> 16) * max) >> 16;
    }
    return value;
}
s16 func_02029130(u8 *arg0, u8 *arg1) {
    const char *s = func_020929f4(arg1, 0);
    if (func_02026e9c(2, s, data_02146168) != 0) {
        s16 cmd = func_02026f38((char *)s);
        s16 v1, v2;
        func_02092994(arg1, 0);
        v1 = (s16)func_02092994(arg1, 0);
        v2 = (s16)func_02092994(arg1, 0);
        switch (cmd) {
        case 1:
            return (v1 - 1) * 3 + (v2 - 1);
        case 2: {
            s16 arr[3] = {0};
            s16 cnt = 0;
            s16 i;
            for (i = 0; i < 3; i++) {
                s32 idx = (v1 - 1) * 3 + i;
                u8 flag = func_0202e548((u8)idx)[0x1c];
                if (flag == 0) {
                    return (v1 - 1) * 3 + i;
                }
                if (flag == 0) {
                    arr[cnt++] = idx;
                }
            }
            if (cnt == 0) {
                return -1;
            }
            if (cnt == 1) {
                return arr[0];
            }
            {
                s16 r = RandomRange_020295f0(100);
                if (cnt == 2) {
                    if (r < 50) {
                        return arr[0];
                    }
                    return arr[1];
                }
                if (cnt == 3) {
                    if (r < 30) {
                        return arr[0];
                    }
                    if (r < 60) {
                        return arr[1];
                    }
                    return arr[2];
                }
            }
            break;
        }
        case 3: {
            s16 arr[9] = {0};
            s16 cnt = 0;
            s16 i;
            for (i = 0; i < 9; i++) {
                if (func_0202e548((u8)i)[0x1c] == 0) {
                    arr[cnt++] = i;
                }
            }
            if (cnt == 0) {
                return -1;
            }
            if (cnt == 1) {
                return arr[0];
            }
            if (cnt >= 2) {
                s16 r = RandomRange_020295f0(cnt);
                return arr[r];
            }
            break;
        }
        case 4:
            return **(s8 **)(*(u8 **)(arg0 + 0x128) + 0x54);
        case 5: {
            s16 arr[9] = {0};
            s16 cnt = 0;
            s16 i;
            for (i = 0; i < 9; i++) {
                u8 *info = func_0202e548((u8)i);
                if (info[0x1c] == 0 && *(u32 *)(info + 0x10) != 0) {
                    arr[cnt++] = i;
                }
            }
            if (cnt == 0) {
                return -1;
            }
            if (cnt == 1) {
                return arr[0];
            }
            if (cnt >= 2) {
                s16 r = RandomRange_020295f0(cnt);
                return arr[r];
            }
            break;
        }
        case 6: {
            s16 arr[9] = {0};
            s16 cnt = 0;
            s16 i;
            for (i = 0; i < 9; i++) {
                u8 *info = func_0202e548((u8)i);
                if (info[0x1c] == 0 && *(u32 *)(info + 0x10) != 0) {
                    arr[cnt++] = i;
                }
            }
            if (cnt == 0) {
                return -1;
            }
            if (cnt == 1) {
                return (arr[0] / 3) * 3 + (v2 - 1);
            }
            if (cnt >= 2) {
                s16 r = RandomRange_020295f0(cnt);
                return (arr[r] / 3) * 3 + (v2 - 1);
            }
            break;
        }
        }
    }
    return -1;
}

s32 func_020295f0(u8 *arg0, u8 *arg1)
{
  s32 zero = 0;
  s16 a = func_02092994(arg1, zero);
  s16 w1 = func_02092994(arg1, zero);
  s16 b = func_02092994(arg1, zero);
  s16 w2 = func_02092994(arg1, zero);
  s16 c = func_02092994(arg1, zero);
  s16 w3 = func_02092994(arg1, zero);
  s16 sum = (w1 + w2) + w3;
  s16 roll;
  if (sum > 0)
  {
    u16 limit = sum;
    u32 seed = data_0216263c[0];
    u32 multiplier = data_0216263c[1];
    u32 increment = data_0216263c[2];
    u32 value = (multiplier * seed) + increment;
    data_0216263c[0] = value;
    if (!limit) { value >>= 16; } else { value >>= 16; value = (value * limit) >> 16; }
    roll = ((u16) value) + 1;
    if ((roll > 0) && (roll <= w1))
    {
      return a;
    }
    if ((w1 < roll) && (roll <= (w1 + w2)))
    {
      return b;
    }
    if (((w1 + w2) < roll) && (roll <= ((w1 + w2) + w3)))
    {
      return c;
    }
  }
  return -1;
}

s32 func_02029704(u8 *arg0, u8 *arg1) {
    s32 zero = 0;
    u8 *p;
    s16 idx;
    const char *s;
    p = *(u8 **)(arg0 + 0x12c);
    s = func_020929f4(arg1, zero);
    if (func_02026e9c(3, s, data_0214616c) == 0) {
        return 1;
    }
    func_02092994(arg1, zero);
    idx = (s16)func_02092994(arg1, zero);
    func_02092994(arg1, zero);
    p[0x22] |= (u8)(1 << (idx - 1));
    return zero;
}
