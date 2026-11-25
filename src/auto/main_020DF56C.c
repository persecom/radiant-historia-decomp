/* 10 functions from 0x020DF56C to 0x020DFF7C (main), found by ds-decomp. */
#include "common.h"

extern void func_020e5968(void);
s32 func_020e291c(void);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern u8 *data_02160a74;
extern u8 *data_02160a6c;
extern u8 *data_02160244;
typedef struct { s16 unk[10]; } UnkBuf10_020dfa0c;
extern const UnkBuf10_020dfa0c data_02144984;
extern void func_020a3d8c(u8 *, u8 *);
extern s32 func_020df38c(s32, s32);
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
extern void func_020e3a9c(void);
extern void func_020e3310(void);
extern void func_020e4028(u16 *, s32, s32, s32);
extern void func_020e410c(u16 *, s32, s32);
extern void func_020e419c(u16 *, s32);
extern void func_020e421c(u16 *);
extern void func_020e3f30(s32, s32, s32);
extern void func_020e1bc4(s32, s32);
extern void func_020e1d08(u16);
extern void func_020e441c(void);
extern u32 data_02155c3c;
extern void *func_0210c594(s32, u32);
extern void func_021167f0(void *, void *);
extern void func_020df9dc(void *, void *);
void func_020df56c(void *arg0, s32 arg1) {
    u8 *node;

    if (arg1 != 0) {
        node = *(u8 **)(data_02160a6c + 0xb8);
        while (node != NULL) {
            if (arg0 != node) {
                *(u32 *)(node + 0x80) &= ~2;
            }
            node = *(u8 **)(node + 0x174);
        }
    } else {
        node = *(u8 **)(data_02160a6c + 0xb8);
        while (node != NULL) {
            *(u32 *)(node + 0x80) |= 2;
            node = *(u8 **)(node + 0x174);
        }
    }
}

extern u8 *func_020ddb90(u16);
void func_020df5dc(s32 arg0) {
    u8 *node;
    u8 *res;

    if (arg0 != 0) {
        node = *(u8 **)(data_02160a6c + 0xb8);
        while (node != NULL) {
            res = func_020ddb90((u16)(*(u16 *)(node + 0x90) + 0x135));
            if (res != NULL) {
                *(u32 *)(res + 0x80) |= 0x2000;
            }
            res = func_020ddb90((u16)(*(u16 *)(node + 0x90) + 0x13f));
            if (res != NULL) {
                *(u32 *)(res + 0x80) |= 0x2000;
            }
            node = *(u8 **)(node + 0x174);
        }
    } else {
        node = *(u8 **)(data_02160a6c + 0xb8);
        while (node != NULL) {
            res = func_020ddb90((u16)(*(u16 *)(node + 0x90) + 0x135));
            if (res != NULL) {
                *(u32 *)(res + 0x80) &= ~0x2000;
            }
            res = func_020ddb90((u16)(*(u16 *)(node + 0x90) + 0x13f));
            if (res != NULL) {
                *(u32 *)(res + 0x80) &= ~0x2000;
            }
            node = *(u8 **)(node + 0x174);
        }
    }
}

extern s32 func_020df9fc(void);
extern void func_020dfa0c(void);
extern void func_020dff7c(void);
extern void func_0210d9e4(void *);
extern void func_0210db70(void *);
extern void func_0210dae0(void *);
extern void func_021167ac(void *, s32);
extern void func_020e1da0(void);
extern void func_020e8698(void);
void func_020df6d4(void) {
    u16 i;

    data_02160a74 = func_0210c594(0x1fc, data_02155c3c);
    *(void **)(data_02160a74 + 0x0) = (void *)func_020df9fc;
    *(u32 *)(data_02160a74 + 0x4) = 0x3eb;
    func_0210d9e4(data_02160a74);
    *(void **)(data_02160a74 + 0x14) = (void *)func_020dfa0c;
    *(u32 *)(data_02160a74 + 0x18) = 0x3e8;
    func_0210db70(data_02160a74 + 0x14);
    *(void **)(data_02160a74 + 0x28) = (void *)func_020dff7c;
    *(u32 *)(data_02160a74 + 0x2c) = 0x3eb;
    func_0210dae0(data_02160a74 + 0x28);
    func_021167ac(data_02160a74 + 0x40, 0x20);
    func_021167ac(data_02160a74 + 0x4c, 0xc);
    func_020e1da0();
    func_020e8698();
    *(void **)(data_02160a74 + 0xb8) = func_0210c594(0x1c, data_02155c3c);
    for (i = 0; i < 10; i++) {
        *(void **)(data_02160a74 + i * 4 + 0x110) = func_0210c594(0x10, data_02155c3c);
    }
    func_021167ac(data_02160a74 + 0x1a4, 0xc);
    *(u16 *)(data_02160a74 + 0x1b6) = 0xffff;
    *(u16 *)(data_02160a74 + 0x1b8) = 0xff;
    *(u16 *)(data_02160a74 + 0x1ba) = 7;
}

extern void func_020df99c(void **);
extern void func_020e1c3c(void);
extern void func_020e1e80(void);
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_0210db10(void *);
void func_020df824(void) {
    u16 i;

    if (data_02160a74 == NULL) {
        return;
    }
    while (*(void **)(data_02160a74 + 0x40) != NULL) {
        u8 *node = *(u8 **)(data_02160a74 + 0x40);
        func_021168f8(data_02160a74 + 0x40, node);
        if (*(void **)(node + 0x1c) != NULL) {
            func_0210c5dc(*(void **)(node + 0x1c));
            *(void **)(node + 0x1c) = NULL;
        }
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
    func_020df99c((void **)(data_02160a74 + 0x4c));
    func_020e1c3c();
    func_020e1e80();
    if (*(void **)(data_02160a74 + 0xb8) != NULL) {
        if (*(void **)(data_02160a74 + 0xb8) != NULL) {
            func_0210c5dc(*(void **)(data_02160a74 + 0xb8));
            *(void **)(data_02160a74 + 0xb8) = NULL;
        }
        *(void **)(data_02160a74 + 0xb8) = NULL;
    }
    for (i = 0; i < 10; i++) {
        if (*(void **)(data_02160a74 + i * 4 + 0x110) != NULL) {
            func_0210c5dc(*(void **)(data_02160a74 + i * 4 + 0x110));
            *(void **)(data_02160a74 + i * 4 + 0x110) = NULL;
        }
        *(void **)(data_02160a74 + i * 4 + 0x110) = NULL;
    }
    func_0210da14(data_02160a74);
    func_0210dba0(data_02160a74 + 0x14);
    func_0210db10(data_02160a74 + 0x28);
    if (data_02160a74 != NULL) {
        func_0210c5dc(data_02160a74);
        data_02160a74 = NULL;
    }
}

void *func_020df944(void *arg0, u16 arg1, u32 arg2) {
    u8 *ptr = func_0210c594(0x18, data_02155c3c);

    *(u32 *)(ptr + 0) = arg2;
    *(u16 *)(ptr + 4) = 0;
    *(s16 *)(ptr + 6) = -0x11;
    *(u16 *)(ptr + 8) = 0;
    *(u16 *)(ptr + 0xa) = arg1;
    func_021167f0(arg0, ptr);
    return ptr;
}

void func_020df99c(void **arg0) {
    while (*arg0 != NULL) {
        func_020df9dc(arg0, *arg0);
    }
}

void func_020df9c8(u32 arg0) {
    *(u32 *)(data_02160a74 + 0xa0) = arg0;
}

void func_020df9dc(void *arg0, void *arg1) {
    func_021168f8(arg0, arg1);
    if (arg1 != NULL) {
        func_0210c5dc(arg1);
    }
}

s32 func_020df9fc(void) {
    func_020e5968();
    return func_020e291c();
}

void func_020dfa0c(void) {
    u8 *g = data_02160a74;
    UnkBuf10_020dfa0c buf = data_02144984;
    s32 one = 1;
    s32 zero = 0;
    s32 val = 3;
    u8 *node, *p, *pa, *pb;
    u16 v;
    s32 arg;

    if (g == NULL) return;

    for (node = *(u8 **)(g + 0x40); node != NULL; node = *(u8 **)(node + 0x24)) {
        pa = *(u8 **)(node + 0x18);
        pb = *(u8 **)(node + 0x1c);
        if (pa != NULL && *(u8 **)(pa + 0x118) != NULL)
            func_020a3d8c(pb, *(u8 **)(pa + 0x118));
    }

    if (*(u32 *)(g + 0x58) & 0x1000) {func_020e3a9c();

    v = *(u8 *)(*(u8 **)data_02160244 + 0x8c);
    if (v == 0) {
        if (!(*(u16 *)(g + 0x1b0) & 0x80)) goto skip1;
        func_020e410c(buf.unk, 0x2c8, 0);
    } else {
        if (v != 1) goto skip1;
        func_020e410c(buf.unk, 0x2c8, 1);
    }
skip1:
    if (*(s16 *)(g + 0xc8) >= 1 && (*(u16 *)(g + 0x1b0) & 0x100) && !(*(u8 *)(g + 0x1c0) & 1)) {
        if (func_020df38c(3, 0x8000)) func_020e4028(buf.unk, 1, 0x2c6, 1);
        else func_020e4028(buf.unk, 0, 0x2c6, 1);
    }
    if (*(u16 *)(g + 0x1b0) & 0x200) func_020e419c(buf.unk, 0x2c8);

    }
    if (*(u32 *)(g + 0x58) & 2) {func_020e3310();
    if (*(u16 *)(g + 0x1b8) & 0x40) {
        if (func_020df38c(3, 1)) func_020e4028(buf.unk, 1, 0x2c8, 2);
        else func_020e4028(buf.unk, 0, 0x2c8, 2);
    }
    if (*(u16 *)(g + 0x1b8) & 0x80) func_020e419c(buf.unk, 0x2c8);

    }
    if (*(u32 *)(g + 0x58) & 0x100) {
        if (*(u16 *)(g + 0x1ba) & 1) {
            if (func_020df38c(val, 0x100)) func_020e4028(buf.unk, 1, 0x2c6, val);
            else func_020e4028(buf.unk, 0, 0x2c6, val);
        }
        if (*(u16 *)(g + 0x1ba) & 4)
            func_020e419c(buf.unk, 0x2c8);

    func_020e421c(buf.unk);

    *(volatile u32 *)0x40004a4 = 0x1f00c0;
    func_020a3bbc(0x48);
    buf.unk[1] = zero;
    buf.unk[2] = zero;
    buf.unk[3] = 0x40;
    buf.unk[4] = 0x20;
    buf.unk[8] = 0x40;
    buf.unk[9] = 0x20;
    buf.unk[7] = 0x2b9;
    {u8 *node;
    p = data_02160a6c;
    for (node = *(u8 **)(p + 0x70); node != NULL; node = *(u8 **)(node + 0x13c)) {
        if (*(u32 *)(node + 0x80) & 0x1000) {
            buf.unk[5] = (s16)(*(u32 *)(node + 0xfc) - 0x20);
            buf.unk[6] = (s16)(*(u32 *)(node + 0x100) - 0x40);
            v = *(u16 *)(node + 0x90);
            if (v < 3) buf.unk[7] = (s16)(v + 0xb9 + 0x200);else buf.unk[7]=0x2b9;
            func_021098ac(buf.unk);
        }
    }
    }

    }
    if (*(u32 *)(g + 0x58) & 0x2000) func_020e1bc4(0x1f4, zero);
    if (*(u32 *)(g + 0x58) & 0x80000) func_020e1bc4(0x1f4, one);

    if ((*(u32 *)(g + 0x58) & 0x4000) && !(*(u8 *)(g + 0x1cb) & 2) &&
        *(u32 *)(*(u8 **)(data_02160a74 + 0x80) + 0x7c) == 1) {
        *(volatile u32 *)0x40004a4 = 0x1f00c0;
        func_020e3f30(zero, -6, 0x2cc);
    }

    if (!(*(u8 *)(g + 0x1c0) & 4) && (*(u8 *)(g + 0x1c0) & 1)) {
        *(volatile u32 *)0x40004a4 = 0x1f00c0;
        val = zero;
        func_020a3bbc(0x62);
        if (*(u8 *)(g + 0x1c0) & 2) {
            func_020a3bbc(0x63);
            val = one;
        }
        buf.unk[1] = zero;
        buf.unk[2] = zero;
        buf.unk[3] = 0x4c;
        buf.unk[4] = 0xe;
        buf.unk[8] = 0x4c;
        buf.unk[9] = 0xe;
        buf.unk[7] = 0x2cc;
        buf.unk[5] = (s16)(val + 6);
        buf.unk[6] = (s16)(val + 5);
        func_021098ac(buf.unk);
    }

    if (*(u32 *)(g + 0x58) & 0x100000) {
        func_020e441c();
        if (*(u16 *)(g + 0x1b8) & 0x40) {
            if (func_020df38c(3, one)) func_020e4028(buf.unk, 1, 0x2c6, 4);
            else func_020e4028(buf.unk, 0, 0x2c6, 4);
        }
        if (*(u16 *)(g + 0x1b8) & 0x80) func_020e419c(buf.unk, 0x2c8);
    }

    if (*(u32 *)(g + 0x58) & 0x200000) {
        func_020e421c(buf.unk);
        func_020e441c();
        if (func_020df38c(3, one)) func_020e4028(buf.unk, 1, 0x2c6, 4);
        else func_020e4028(buf.unk, 0, 0x2c6, 4);
        if (*(u16 *)(g + 0x1b8) & 0x80) func_020e419c(buf.unk, 0x2c8);
    }

    if (*(u8 *)(g + 0x1cb) & 1) func_020e1d08((u16)(s8)*(u8 *)(g + 0x1cc));
    if (*(u8 *)(g + 0x1cb) & 2) {
        *(volatile u32 *)0x40004a4 = 0x1f0080;
        func_020e3f30(zero, -0x60, 0x2ce);
    }

    if (*(u16 *)(g + 0x9c) != 0x1b) return;
    if (*(s16 *)(g + 0xc8) < 1) return;
    if (func_020df38c(3, one)) {
        func_020e4028(buf.unk, 1, 0x2c6, one);
    } else {
        func_020e4028(buf.unk, 0, 0x2c6, one);
    }
}

