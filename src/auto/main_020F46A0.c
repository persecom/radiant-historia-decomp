/* 30 functions from 0x020F46A0 to 0x020F5574 (main), found by ds-decomp. */
#include "common.h"

extern void func_020a994c(void *);
extern void func_020a98a0(void *);
extern void func_020f58c0(void *);
extern void func_0210eb98(void *, s16, s16);
extern u16 func_020f57e8(void);
extern u8 *data_02160204;
extern u8 data_02151fd0[44];

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

extern void func_0210c5dc(void *);
extern void func_0210a76c(void *);
extern void func_0210aa14(void *);
extern u32 data_02155c3c;
extern u32 data_02162840[];
extern void *func_0210c594(u32, u32);
extern void func_020f5150(void);
extern void func_0210d9e4(void *);
extern void func_0210da14(void *);
extern void func_021168f8(void *, void *);
extern void func_021167f0(void *, void *);
extern void func_020f4f38(void *, void *);
extern u32 data_02160c3c[];
extern u8 data_02151fc8[];
extern s32 func_02107d58(u32, u16, u16);
extern u8 *data_02160c34[];
extern u8 *data_02155984;
extern u32 data_02162834[];
extern void func_02002128(Vec3 *, void *, void *);
extern s32 func_02002080(s32, u32);
s32 func_020f46a0(u16 arg0) {
    *(u16 *)data_02151fc8 += arg0;
    return func_02107d58(*(u32 *)(data_02151fc8 + 4), *(u16 *)(data_02151fc8 + 2), *(u16 *)data_02151fc8);
}

void func_020f46cc(Vec3 *arg0, u32 arg1) {
    *(u32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x14) = 0;
    arg1 >>= data_02162834[0];
    func_02002128(arg0, data_02155984 + 0x20, (u8 *)((u32 *)data_02160c34)[1] + 0x2c);
    *(s32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x2c) = func_02002080(*(s32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x2c), arg1);
    *(s32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x30) = func_02002080(*(s32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x30), arg1);
    *(s32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x34) = func_02002080(*(s32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x34), arg1);
    *(Vec3 *)((u8 *)((u32 *)data_02160c34)[1] + 0x20) = *arg0;
}

void func_020f4774(Vec3 *arg0, s32 arg1) {
    *(u32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x14) = 0;
    *(s32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x2c) = (arg0->x - *(s32 *)(data_02155984 + 0x20)) * arg1 / 100;
    *(s32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x30) = (arg0->y - *(s32 *)(data_02155984 + 0x24)) * arg1 / 100;
    *(s32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x34) = (arg0->z - *(s32 *)(data_02155984 + 0x28)) * arg1 / 100;
    *(Vec3 *)((u8 *)((u32 *)data_02160c34)[1] + 0x20) = *arg0;
}

void func_020f4828(u16 arg0, u16 arg1) {
    *(u16 *)((u8 *)((u32 *)data_02160c34)[1] + 0x18) = arg0;
    *(u16 *)((u8 *)((u32 *)data_02160c34)[1] + 0x1a) = arg1;
}

void func_020f4844(u16 arg0, u16 arg1) {
    *(u16 *)((u8 *)((u32 *)data_02160c34)[1] + 0x1c) = arg0;
    *(u16 *)((u8 *)((u32 *)data_02160c34)[1] + 0x1e) = arg1;
}

void func_020f4860(u32 arg0) {
    data_02160c3c[1] = arg0;
}

void func_020f4870(void) {
    if (data_02160c3c[1] == 0) {
        return;
    }
    func_0210a76c(*(void **)data_02160c3c[1]);
    func_0210aa14(*(void **)((u8 *)data_02160c3c[1] + 4));
    if (data_02160c3c[1] != 0) {
        func_0210c5dc((void *)data_02160c3c[1]);
        data_02160c3c[1] = 0;
    }
}

void func_020f48b8(u32 arg0) {
    *(u32 *)((u8 **)data_02160c3c)[4] = (u32)func_020f5150;
    *(u32 *)(((u8 **)data_02160c3c)[4] + 4) = arg0;
    func_0210d9e4(((u8 **)data_02160c3c)[4]);
    data_02162840[0]++;
}

void func_020f48fc(void) {
    func_0210da14((void *)data_02160c3c[4]);
    data_02162840[0]--;
}

void *func_020f4bb4(void) {
    return func_0210c594(0x1c, data_02155c3c);
}

void func_020f4bd0(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_020f4be4(u32 *arg0, u32 *arg1) {
    u32 a = arg1[0];
    u32 e = arg1[4];
    u32 b = arg1[1];
    u32 c = arg1[2];
    u32 d = arg1[3];
    arg0[2] = a;
    arg0[6] = e;
    arg0[3] = b;
    arg0[4] = c;
    arg0[5] = d;
    arg0[0] = e | (b | (a << 10));
    *(u16 *)(arg0 + 1) = (c | 0x800) | (d << 12);
    return 1;
}

void func_020f4d0c(void *arg0) {
    if (arg0 == NULL) {
        return;
    }
    func_021168f8((void *)data_02160c3c[0], arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_020f4d40(u32 arg0) {
    u8 *p = NULL;
    for (; (p = (p != NULL) ? *(u8 **)(p + *(u16 *)((u8 *)data_02160c3c[0] + 0xa) + 4) : *(u8 **)data_02160c3c[0]) != NULL;) {
        if (*(u32 *)(p + 0x44) == arg0) {
            return p;
        }
    }
    return NULL;
}

extern void func_021168f8(void *, void *);
extern void *func_0210c518(u32, void *);
extern void func_02008e68(u32, void *, u32);
void func_020f4ea4(u8 *arg0, u32 arg1) {
    *(u32 *)(arg0 + 0x10) = arg1;
    *(u16 *)(arg0 + 4) = (*(u16 *)(arg0 + 4) & ~0x3ff) | arg1;
}

void *func_020f4ec4(void) {
    void *p = func_0210c518(0x54, (void *)data_02155c3c);
    func_02008e68(0, p, 0x54);
    *(u32 *)((u8 *)p + 0x20) = 1;
    return p;
}

void func_020f4f04(u8 *arg0) {
    if (arg0 == NULL) {
        return;
    }
    func_020f4bd0(*(void **)arg0);
    func_021168f8(*(void **)(arg0 + 0x34), arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_020f5068(u8 *arg0, void *arg1, u32 arg2) {
    *(void **)arg0 = arg1;
    *(u32 *)(arg0 + 4) = arg2;
    if (*(void **)(arg0 + 0x34) == NULL) {
        func_021167f0((void *)data_02160c3c[3], arg0);
        *(u32 *)(arg0 + 0x34) = data_02160c3c[3];
    }
    *(u16 *)(*(u8 **)arg0 + 4) = (*(u16 *)(*(u8 **)arg0 + 4) & ~0xc00) | (arg0[0x10] << 10);
    return 1;
}

s32 func_020f50bc(u8 *arg0, u32 *arg1, u32 arg2) {
    u32 *obj = (u32 *)func_020f4bb4();
    if (!func_020f4be4(obj, arg1)) {
        func_020f4bd0(obj);
        return 0;
    }
    func_020f4f38(arg0, arg1);
    return func_020f5068(arg0, obj, arg2);
}

void func_020f5114(u8 *arg0, s32 arg1) {
    if (*(s32 *)(arg0 + 0x20) == arg1) {
        return;
    }
    if (*(s32 *)(arg0 + 0x1c) != 0) {
        if (arg1 != 0) {
            (*(u16 *)(*(u8 **)(arg0 + 0x34) + 0xc))--;
        } else {
            (*(u16 *)(*(u8 **)(arg0 + 0x34) + 0xc))++;
        }
    }
    *(s32 *)(arg0 + 0x20) = arg1;
}

u16 func_020f52dc(void *arg0, s16 arg1, s16 arg2) {
    u16 val = *(u16 *)(data_02160204 + 0x72);
    s16 a = (val - 1) / 20 + 1;
    s16 b = val;
    if (arg1 != 0) {
        a = arg1;
        b = arg2;
    }
    func_0210eb98(data_02151fd0, a, b);
    {
        u16 ret = func_020f57e8();
        if (ret == 0) {
            return 0;
        }
        func_021167f0(arg0, (void *)ret);
        return ret;
    }
}

BOOL func_020f5364(void *arg0, void *arg1) {
    u8 *node;
    if (arg0 == NULL || arg1 == NULL) {
        goto fail;
    }
    for (node = *(u8 **)arg0; node != NULL && node != arg1; node = *(u8 **)(node + 0x1dc)) {
    }
    if (node == NULL) {
        goto fail;
    }
    func_021168f8(arg0, node);
    if (*(void **)(node + 0x128) != NULL) {
        *(u32 *)(node + 0x178) += 1;
        func_020a994c(node + 0x144);
        func_020a98a0(node + 0x144);
    }
    func_020f58c0(node);
    return TRUE;
fail:
    return FALSE;
}

u32 func_020f53e4(void (*arg0)(void)) {
    if (arg0 != NULL) {
        arg0();
    }
    return ~(u32)arg0;
}

