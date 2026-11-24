/* 3 functions from 0x02079374 to 0x02079874 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_021600ac;
extern u32 func_020ddc8c(void *, void *);

extern u32 data_0216263c[3];
extern u32 data_0216244c[43];
extern u64 data_02162658[3];
extern void func_0206e8f0(u32, void *, u32);
void func_0207963c(void) {
    u32 x = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
    u16 r;
    u32 v[3];
    u64 a, b, c, t, res;
    data_0216263c[0] = x;
    r = ((x >> 16) * 4) >> 16;
    if (r == 0) {
        return;
    }
    v[0] = data_0216244c[0];
    v[1] = data_0216244c[1];
    v[2] = data_0216244c[2];
    a = data_02162658[0];
    b = data_02162658[1];
    c = data_02162658[2];
    t = b * a + c;
    res = b * t + c;
    data_02162658[0] = res;
    v[0] += (u32)(((u64)(u32)(t >> 32) * 0x180000u) >> 32) - 0xc0000;
    v[2] += (u32)(u32)(res >> 32) >> 11;
    v[2] -= 0x110000;
    func_0206e8f0(0x7f, v, 2);
}

int func_02079720(void *arg) {
u8 *obj = *(u8 **)(data_021600ac + 0x68);
u32 angle = func_020ddc8c(obj,arg);
if ((angle < 0x2aaa || angle > 0xd556) && (*(u16 *)(obj+0x92) < 0x2000 || *(u16 *)(obj+0x92) > 0xe000)) return 0;
if (angle > 0x1556 && angle < 0x6aaa && *(u16 *)(obj+0x92) >= 0x2000 && *(u16 *)(obj+0x92) <= 0x6000) return 1;
if (angle > 0x5556 && angle < 0xaaaa && *(u16 *)(obj+0x92) >= 0x6000 && *(u16 *)(obj+0x92) <= 0xa000) return 2;
if (angle > 0x9556 && angle < 0xeaaa && *(u16 *)(obj+0x92) >= 0xa000 && *(u16 *)(obj+0x92) <= 0xe000) return 3;
if (*(u16 *)(obj+0x92) < 0x2000 || *(u16 *)(obj+0x92) > 0xe000) return 0;
if (*(u16 *)(obj+0x92) >= 0x2000 && *(u16 *)(obj+0x92) <= 0x6000) return 1;
if (*(u16 *)(obj+0x92) >= 0x6000 && *(u16 *)(obj+0x92) <= 0xa000) return 2;
if (*(u16 *)(obj+0x92) >= 0xa000 && *(u16 *)(obj+0x92) <= 0xe000) return 3;
return 4;
}

