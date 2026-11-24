/* 17 functions from 0x02045E60 to 0x02046E30 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02155c3c;
extern u8 *data_021600b8;
extern void *func_0210c594(s32, u32);
extern void func_021167ac(void *, s32);
extern void func_021168f8(void *, void *);
extern void func_020a994c(void *);
extern void func_020a98a0(void *);
extern void func_02046760(u8 *);
extern void func_020f58c0(void *);
typedef struct {
    u16 unk[10];
} Unk20;
extern const Unk20 data_0213f308;
extern u8 *data_02160204;
extern u8 data_021464f8[36];
extern u8 *data_021600ac;
extern void func_0210eb98(void *, u16, u16);
extern u16 func_020f57e8(void);
extern void func_021167f0(void *, void *);
extern void func_021098ac(void *);
extern u8 *data_021600bc;
extern void func_0204798c(void);
extern void func_02051ef4(void);
extern void func_0210d9e4(void *);
extern void func_0210dae0(void *);

void func_02046594(void) {
    data_021600b8 = func_0210c594(0x2c, data_02155c3c);
    func_021167ac(data_021600b8, 0x1d8);
    func_021167ac(data_021600b8 + 0xc, 0x1e0);
    func_021167ac(data_021600b8 + 0x20, 0x1ec);
    *(u8 *)(data_021600b8 + 0x18) = 0;
    *(u16 *)(data_021600b8 + 0x1a) = 0;
    *(u16 *)(data_021600b8 + 0x1c) = 0;
}

void func_020466f4(void) {
    if (data_021600b8 == NULL) {
        return;
    }
    while (*(u8 **)(data_021600b8 + 0x20) != NULL) {
        u8 *node = *(u8 **)(data_021600b8 + 0x20);
        if (*(void **)(node + 0x128) != NULL) {
            *(u32 *)(node + 0x178) += 1;
            func_020a994c(node + 0x144);
            func_020a98a0(node + 0x144);
        }
        func_02046760(node);
        func_020f58c0(node);
    }
}

void func_02046760(u8 *arg0) {
    if (data_021600b8 != NULL) {
        func_021168f8(data_021600b8 + 0x20, arg0);
        *(u8 *)(arg0 + 0x1f4) = 0;
    }
}

u16 func_0204680c(s32 arg0, u16 arg1) {
    u16 ret;
    func_0210eb98(data_021464f8, *(u16 *)(data_02160204 + 0xd4), arg1);
    ret = func_020f57e8();
    if (ret == 0) {
        return 0;
    }
    *(u16 *)(data_02160204 + 0x126) = *(u16 *)(data_02160204 + 0xd4);
    *(u16 *)(data_02160204 + 0x128) = arg1;
    func_021167f0(*(u8 **)data_021600b8, (void *)ret);
    *(u16 *)(data_02160204 + 0x70) = arg1;
    if (*(u8 **)data_021600ac != NULL) {
        u8 *node = *(u8 **)data_021600ac;
        if (*(u8 **)(node + 0x68) != NULL) {
            *(u32 *)(*(u8 **)(node + 0x68) + 0xac) &= 0xfffffbb5;
        }
    }
    return ret;
}

void func_020468b0(u32 arg0) {
    u8 *node = *(u8 **)data_021600b8;
    while (node != NULL) {
        *(u32 *)(*(u8 **)(node + 0x14) + 8) = arg0;
        node = *(u8 **)(node + 0x1dc);
    }
}

void func_020468e0(u8 arg0) {
    u8 *node = *(u8 **)data_021600b8;
    while (node != NULL) {
        *(u8 *)(node + 0x1e8) = arg0;
        node = *(u8 **)(node + 0x1dc);
    }
}

void func_0204690c(u32 arg0, s32 arg1) {
    Unk20 buf = data_0213f308;
    if (arg1 == 0) {
        return;
    }
    *(volatile u32 *)0x040004A4 = 0x3000080 | (arg0 << 16);
    *(volatile u32 *)0x04000480 = 0x7fff;
    buf.unk[1] = 0;
    buf.unk[2] = 0;
    buf.unk[3] = 0x100;
    buf.unk[4] = 0xc0;
    buf.unk[8] = 0x100;
    buf.unk[9] = 0xc0;
    buf.unk[5] = 0;
    buf.unk[6] = 0;
    *(volatile u32 *)0x040004A8 = 0;
    func_021098ac(&buf);
}

void func_020469ac(void) {
    u16 cur = *(u16 *)(data_021600b8 + 0x1a);
    u16 target = *(u16 *)(data_021600b8 + 0x1c);
    if (target < cur) {
        *(u16 *)(data_021600b8 + 0x1a) = cur - 1;
    } else if (target > cur) {
        *(u16 *)(data_021600b8 + 0x1a) = cur + 1;
    }
    if (*(u16 *)(data_021600b8 + 0x1a) == 0) {
        *(u8 *)(data_021600b8 + 0x18) = 0;
    }
}

void func_02046b6c(void) {
    *(void **)data_021600bc = (void *)func_0204798c;
    *(u32 *)(data_021600bc + 4) = 0x3ed;
    func_0210d9e4(data_021600bc);
    *(void **)(data_021600bc + 0x14) = (void *)func_02051ef4;
    *(u32 *)(data_021600bc + 0x18) = 0x3eb;
    func_0210dae0(data_021600bc + 0x14);
}

