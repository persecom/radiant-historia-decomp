/* 16 functions from 0x0207C328 to 0x0207CDD4 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160204;
extern s32 data_02155c3c;
void *func_0210c594(s32,s32);
void func_0207ae48(s32,s32);
void *func_020f0aa4(u32);
void func_020f09d4(void *);

typedef struct {
    u32 w[3];
} S_0207c328;

extern void *data_021600f0;
extern void *data_021600ac;
extern S_0207c328 data_021600f4;
extern S_0207c328 data_02160100;
extern s32 func_0210c2f4(void *, void *);
extern void func_0207c528(void);
extern u8 *data_02160200;
extern void func_021167f0(void *, void *);
extern void *func_02021f10(u32);
extern void func_0206e8f0(u32, void *, u32);
extern void func_02057f5c(void);
extern void func_0210d27c(s32);
extern void func_021168f8(void *, void *);
extern void func_021168f8(void *, void *);
extern void *func_02047820(u16);
extern u8 *data_02155984;
extern void func_0210d46c(void);
extern void func_0207c9bc(void *);
extern void func_02047490(void *);
typedef struct {
    s32 x, y, z;
} Vec3_0207c640;
extern void func_0210c5dc(void *);
typedef void (*Fn_0207cc20)(u32);

void func_0207c328(void) {
    u32 zero = 0;
    u8 *node = *(u8 **)((u8 *)data_021600f0 + 0xc);
    u8 *res = func_02021f10((u32)zero);
    u8 *obj = *(u8 **)((u8 *)data_021600ac + 0x68);
    if (*node == 1) return;
    *node = 1;
    *(u16 *)(node + 2) = (u16)zero;
    {
        s32 count = *(u16 *)(res + 0x14);
        if (count >= 1) {
            count--;
            *(u16 *)(res + 0x14) = (u16)count;
            func_0206e8f0(0x11, obj, 1);
            func_02057f5c();
            func_0210d27c(0x7d);
            data_021600f4 = *(S_0207c328 *)obj;
            return;
        }
    }
    func_0210d27c(6);
}

void func_0207c3bc(void) {
    u32 zero = 0;
    u8 *node = *(u8 **)((u8 *)data_021600f0 + 0xc);
    u8 *obj = *(u8 **)((u8 *)data_021600ac + 0x68);
    u8 *res = func_02021f10(zero);
    if (*node == 0 || obj == NULL) return;
    if (*(u16 *)(res + 0x14) < 1) goto switch_part;
    (*(u16 *)(node + 2))++;
    if (*(u16 *)(node + 2) % 24 != 23) goto after_call;
    func_0206e8f0(0x11, obj, 1);
    *(u16 *)(node + 2) = 0;
after_call:
    if (func_0210c2f4(obj, &data_021600f4) <= 0x80000) return;
    {
        u16 left = *(u16 *)(res + 0x14);
        if (left == 0) {
            func_0210d27c(6);
            *(u16 *)(node + 2) = 0;
            return;
        }
        *(u16 *)(res + 0x14) = left - 1;
        func_02057f5c();
        data_021600f4 = *(S_0207c328 *)obj;
        return;
    }
switch_part:
    data_02160100 = *(S_0207c328 *)obj;
    *(u32 *)((u8 *)&data_021600f0 + 0x10) = *(u32 *)obj + 0x6000;
    *(u32 *)((u8 *)&data_021600f0 + 0x18) = *(u32 *)(obj + 8) - 0x8000;
    switch (*(u16 *)(node + 2)) {
    case 0:
        func_0206e8f0(0x83, &data_02160100, 1);
        break;
    case 12:
        func_0206e8f0(0x84, &data_02160100, 1);
        break;
    case 20:
        func_0207c528();
        break;
    }
    (*(u16 *)(node + 2))++;
}

void func_0207c528(void) {
    u8 *node = *(u8 **)((u8 *)data_021600f0 + 0xc);
    u8 *obj = *(u8 **)((u8 *)data_021600ac + 0x68);
    if (*node == 0) return;
    *(u32 *)(obj + 0xac) &= ~0x40000;
    *node = 0;
    func_0210d27c(0x88);
}

u32 func_0207c578(void) {
    u16 zero = 0;
    u8 *node = *(u8 **)((u8 *)data_021600f0 + 0xc);
    u8 *res = func_02021f10(zero);
    if (*(u16 *)(res + 0x14) == 0) return zero;
    if (*(u32 *)(data_02160200 + 0x34) & 0x20) {
        if (*node == 1) return 1;
    }
    return zero;
}

void func_0207c5d8(void) {
    u8 *node = *(u8 **)((u8 *)data_021600f0 + 8);
    u8 *result = func_02047820(*(u16 *)(node + 0x14));
    u32 v;
    if (result == NULL) {
        *(u8 *)node = 0;
        return;
    }
    if (*(u8 *)node == 0) return;
    if (*(u16 *)(node + 2) != 0) return;
    v = 0x18;
    *(u16 *)(node + 2) = v;
    func_0206e8f0(0x11, result, 2);
    (*(u16 *)(node + 2))--;
}

s32 func_0207c640(void) {
    u8 *node = *(u8 **)((u8 *)data_021600f0 + 8);
    u8 *result = (u8 *)func_02047820(*(u16 *)(node + 0x14));
    u8 *ac;
    u8 *obj;
    if (result == NULL) {
        *node = 0;
        return 0;
    }
    if (*node == 0) {
        return 0;
    }
    func_0210d46c();
    func_0210d27c(0x3f);
    func_0206e8f0(0x12, result, 2);
    func_0207c9bc(result);
    func_02047490(result);
    ((u8 *)data_02155984)[0xc8] = 5;
    ((u8 *)data_02155984)[0xc9] = 4;
    *node = 0;
    *(u16 *)(node + 2) = 0;
    *(u16 *)(node + 0x14) = 0;
    ((u8 *)data_021600ac)[0x879] = 1;
    ac = data_021600ac;
    obj = *(u8 **)(ac + 0x68);
    *(Vec3_0207c640 *)(obj + 0x24) = *(Vec3_0207c640 *)obj;
    *(u32 *)(ac + 0x888) = 1;
    return 1;
}

void func_0207cbac(void) {
    u8 *node = *(u8 **)((u8 *)data_021600f0 + 8);
    u8 *child = *(u8 **)(node + 0x18);
    if (child == NULL) return;
    while (child != NULL) {
        u8 *next = *(u8 **)(child + 0x10);
        func_021168f8(node + 0x18, child);
        if (child != NULL) {
            func_0210c5dc(child);
        }
        child = next;
    }
}

void func_0207cbfc(u32 arg0, u32 arg1) {
    u8 *p = *(u8 **)((u8 *)data_021600f0 + arg0 * 4 + 4);
    func_021167f0(p + 4, (void *)arg1);
}

void func_0207cc20(u32 arg0) {
    u8 i;
    if (data_021600f0 == NULL) return;
    for (i = 0; i < 5; i++) {
        Fn_0207cc20 fn = *(Fn_0207cc20 *)(*(u8 **)((u8 *)data_021600f0 + i * 4 + 4) + 0x10);
        fn(arg0);
    }
}

void func_0207cc6c(u32 arg0) {
    u8 *base = (u8 *)data_021600f0;
    u8 *p = *(u8 **)(base + 4);
    u8 *node = *(u8 **)(p + 4);
    while (node != NULL) {
        if (node == (u8 *)arg0) {
            func_021168f8(p + 4, node);
            return;
        }
        node = *(u8 **)(node + 0x3c);
    }
}

void func_0207ccb4(s32 arg0) {
    u8 *p = *(u8 **)((u8 *)data_021600f0 + 8);
    u8 *node = *(u8 **)(p + 4);
    if (node == NULL) {
        return;
    }
check:
    if ((s32)arg0 != (s32)node) {
        goto advance;
    }
    func_021168f8(p + 4, (void *)arg0);
    return;
advance:
    node = *(u8 **)(node + 0x44);
    if (node != NULL) {
        goto check;
    }
    return;
}

void func_0207ccfc(s32 arg0) {
    u8 *p = *(u8 **)((u8 *)data_021600f0 + 0xc);
    u8 *node = *(u8 **)(p + 4);
    if (node == NULL) {
        return;
    }
check:
    if ((s32)arg0 != (s32)node) {
        goto advance;
    }
    func_021168f8(p + 4, (void *)arg0);
    return;
advance:
    node = *(u8 **)(node + 0x4c);
    if (node != NULL) {
        goto check;
    }
    return;
}

void func_0207cd44(s32 arg0) {
    u8 *p = *(u8 **)((u8 *)data_021600f0 + 0x10);
    u8 *node = *(u8 **)(p + 4);
    if (node == NULL) {
        return;
    }
check:
    if ((s32)arg0 != (s32)node) {
        goto advance;
    }
    func_021168f8(p + 4, (void *)arg0);
    return;
advance:
    node = *(u8 **)(node + 0x54);
    if (node != NULL) {
        goto check;
    }
    return;
}

void func_0207cd8c(s32 arg0) {
    u8 *p = *(u8 **)((u8 *)data_021600f0 + 0x14);
    u8 *node = *(u8 **)(p + 4);
    if (node == NULL) {
        return;
    }
check:
    if ((s32)arg0 != (s32)node) {
        goto advance;
    }
    func_021168f8(p + 4, (void *)arg0);
    return;
advance:
    node = *(u8 **)(node + 0x34);
    if (node != NULL) {
        goto check;
    }
    return;
}

