/* 14 functions from 0x02054118 to 0x02054E14 (main), found by ds-decomp. */
#include "common.h"

extern s32 func_0205428c();
extern s32 func_0207c578(void);
extern s32 func_02044dd0(void);
extern s32 func_0210c2f4(void *, void *);
extern u8 *data_021600ac;
extern u8 *data_02160200;
void func_02054118(void *arg0) {
    u8 *s = *(u8 **)((u8 *)arg0 + 0xd0);
    u8 i;
    s32 min;
    u8 *node;
    s32 r;
    if (*(u16 *)(s + 4) != 1) {
        return;
    }
    if (*(u16 *)(s + 0x1c) != 0) {
        r = func_0210c2f4(arg0, (u8 *)arg0 + 0x18);
        if (r > (*(u16 *)(s + 0x1c) << 12)) {
            *(u16 *)(s + 4) = 0;
            *(u8 *)(s + 1) = 4;
        }
        return;
    }
    i = 0;
    min = 0;
    node = *(u8 **)(s + 0x30);
    if (node == NULL) {
        *(u16 *)(s + 4) = 0;
        return;
    }
    while (node != NULL) {
        if (*(u32 *)(node + 4) == *(u32 *)((u8 *)arg0 + 0)) {
            if (*(u32 *)(node + 0xc) == *(u32 *)((u8 *)arg0 + 8)) {
                return;
            }
        }
        r = func_0210c2f4(arg0, node + 4);
        if (i != 0) {
            if (min > r) {
                min = r;
            }
        } else {
            min = r;
        }
        node = *(u8 **)(node + 0x14);
        i++;
    }
}

s32 func_020541d8(void *arg0) {
    u8 *obj;
    u8 *s;
    s32 r;
    if (data_021600ac == NULL) return 0;
    obj = *(u8 **)(data_021600ac + 0x68);
    if (obj == NULL) return 0;
    s = *(u8 **)((u8 *)arg0 + 0xd0);
    if (s == NULL) return 0;
    if (*(u32 *)(data_02160200 + 0x160) & 0x400) goto fail;
    r = func_0210c2f4(obj, arg0);
    if (r >= (*(u16 *)(s + 0x1e) << 12)) goto fail;
    if (*(u32 *)(obj + 0xac) & 0x2000) goto fail;
    if (func_020543e4(arg0) == 0) goto fail;
    if (func_02044dd0() != 1) goto fail;
    if ((*(u32 *)(obj + 0xac) & 0x80000) == 0) {
        return 1;
    }
fail:
    return 0;
}

s32 func_0205428c(arg0)
void *arg0;
{
    u8 *s;
    u8 *obj;
    s32 r;
    if (data_021600ac == NULL) return 0;
    obj = *(u8 **)(data_021600ac + 0x68);
    if (obj == NULL) return 0;
    s = *(u8 **)((u8 *)arg0 + 0xd0);
    if (s == NULL) return 0;
    r = func_0210c2f4(obj, arg0);
    if (r >= (*(u16 *)(s + 0x20) << 12)) goto fail;
    if (*(u32 *)(obj + 0xac) & 0x2000) goto fail;
    if (func_020543e4(arg0) == 0) goto fail;
    if (func_02044dd0() != 1) goto fail;
    if ((*(u32 *)(obj + 0xac) & 0x80000) == 0) {
        return 1;
    }
fail:
    return 0;
}

void func_02054324(void) {
    func_0205428c();
}

s32 func_020543e4(void *arg0) {
    if (*(u32 *)((u8 *)arg0 + 0xac) & 0x4000) {
        return 0;
    }
    return func_0207c578() != 1;
}

