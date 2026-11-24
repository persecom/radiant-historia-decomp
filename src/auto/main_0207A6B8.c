/* 15 functions from 0x0207A6B8 to 0x0207B398 (main), found by ds-decomp. */
#include "common.h"

extern void *data_021600ac;
extern void *data_021600f0;
extern void *data_02160200;

void func_020477dc(void *, s32, s32);
void func_0206e8f0(s32, void *, s32);
void func_0210d27c(s32);

typedef struct {
    s32 x, y, z;
} Vec3_0207adbc;

extern void *data_021600bc;
extern void *data_02160a80[];
extern u8 data_02162908[];
extern void func_021167f0(void *, s32);
extern s32 func_02079720(s32);
extern void func_020ea5d4(void *, s32);
void func_0207ace8(s32 arg0) {
    u8 *r4 = (u8 *)data_021600ac;
    u8 *r6;
    s32 res;

    r4[0x374] = 0;
    *(s32 *)(r4 + 0x10) = 8;
    *(s32 *)(r4 + 0x370) = arg0;
    func_021167f0((u8 *)data_021600bc + 0x40, arg0);

    r6 = *(u8 **)((u8 *)data_02160a80[0] + 0x3c);
    while (r6 != NULL) {
        if (*(u32 *)(r6 + 8) == 0x32c9) {
            goto found;
        }
        r6 = *(u8 **)(r6 + 0x38);
    }
    r6 = NULL;
found:

    res = func_02079720(arg0);
    if (res == 4) {
        return;
    }
    if (res == 0 || res == 2) {
        func_020ea5d4(r6, 5);
    } else {
        func_020ea5d4(r6, 4);
    }
    r4[0x374]++;
    if (*(u16 *)(data_02162908 + 4) == 0) {
        r4[0x374] = 0;
    }
}

void func_0207adbc(void *arg0) {
    u8 *p = *(u8 **)((u8 *)data_021600f0 + 8);
    u8 *q;
    p[0] = 1;
    *(u16 *)(p + 0x14) = *(u16 *)((u8 *)arg0 + 0x90);
    *(u16 *)(p + 2) = 0x18;
    func_0206e8f0(0x11, arg0, 2);
    q = *(u8 **)((u8 *)data_021600ac + 0x68);
    *(Vec3_0207adbc *)(q + 0x24) = *(Vec3_0207adbc *)q;
    *(s32 *)((u8 *)data_021600ac + 0x888) = 1;
    func_0210d27c(0x8d);
}

BOOL func_0207ae24(void) {
    return (*(u8 **)((u8 *)data_021600f0 + 8))[0] == 1;
}

void func_0207af60(void) {
    u8 *p = *(u8 **)((u8 *)data_021600f0 + 8);
    u8 *q = *(u8 **)((u8 *)data_021600f0 + 4);
    u8 *ac;
    if (p[0] == 1) {
        *((u8 *)data_021600ac + 0x879) = 1;
    }
    p[0] = 0;
    *(u16 *)(p + 2) = 0;
    *(u16 *)(p + 0x14) = 0;
    q[0] = 0;
    ac = data_021600ac;
    if (ac != NULL) {
        u8 *sub = *(u8 **)(ac + 0x68);
        if (sub != NULL) {
            *(u32 *)(sub + 0xac) &= ~0x0a000000;
        }
    }
}

void func_0207b148(void) {
    if (data_021600f0 == NULL) {
        return;
    }
    *(u8 *)data_021600f0 = 0;
    if (*(u8 *)data_021600f0 == 0) {
        if ((*(u32 *)((u8 *)data_02160200 + 0x34) & 0x20) != 0) {
            return;
        }
    }
    (*(u8 *)data_021600f0)++;
    if (*(u8 *)data_021600f0 == 1) {
        if ((*(u32 *)((u8 *)data_02160200 + 0x34) & 0x10) != 0) {
            return;
        }
    }
    (*(u8 *)data_021600f0)++;
    if (*(u8 *)data_021600f0 == 2) {
        if ((*(u32 *)((u8 *)data_02160200 + 0x34) & 0x40) != 0) {
            return;
        }
    }
    (*(u8 *)data_021600f0)++;
    if (*(u8 *)data_021600f0 == 3) {
        if (data_02160200 != NULL) {
            return;
        }
    }
}

void func_0207b214(void) {
}

void func_0207b218(void) {
    u32 arr[4];
    u32 flags;
    if (data_021600f0 == NULL) {
        return;
    }
    flags = *(u32 *)((u8 *)data_02160200 + 0x34);
    arr[0] = flags & 0x10;
    arr[1] = flags & 0x8;
    arr[2] = flags & 0x20;
    arr[3] = flags & 0x40;
    if (arr[2] == 0 && arr[3] == 0 && arr[1] == 0 && arr[0] == 0) {
        return;
    }
    while (1) {
        u8 idx = *(u8 *)data_021600f0;
        if (arr[idx] != 0) {
            return;
        }
        if (idx != 0) {
            *(u8 *)data_021600f0 = idx - 1;
        } else {
            *(u8 *)data_021600f0 = 3;
        }
    }
}

void func_0207b2c0(void) {
    u8 *node = *(u8 **)((u8 *)data_021600f0 + 4);
    u8 *obj = *(u8 **)((u8 *)data_021600ac + 0x68);
    func_020477dc(obj, 5, 1);
    *(u16 *)(node + 2) = 0x15;
    node[0] = 1;
    *(u32 *)(obj + 0xac) |= 0x800;
    *(u32 *)(obj + 0xac) &= ~0x40;
    *(Vec3_0207adbc *)(obj + 0x24) = *(Vec3_0207adbc *)obj;
    func_0210d27c(0x62);
}

void func_020477dc(void *, s32, s32);
BOOL func_0207b32c(void) {
    if (data_021600f0 == NULL) {
        return FALSE;
    }
    return (*(u8 **)((u8 *)data_021600f0 + 4))[0] != 0;
}

BOOL func_0207b35c(void *arg0) {
    u8 *p = *(u8 **)((u8 *)arg0 + 0xd0);
    if (p == NULL) {
        return FALSE;
    }
    if (p[0x25] == 0x47 || p[0x25] == 0x51) {
        if (*(u16 *)(p + 6) == 0) {
            return TRUE;
        }
    }
    return FALSE;
}

