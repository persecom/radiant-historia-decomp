/* 5 functions from 0x020D413C to 0x020D4EB8 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02155c3c;
extern void *func_0210c594(s32 arg0, u32 arg1);
extern void func_0210c5dc(void *arg0);
extern void func_021167ac(void *arg0, s32 arg1);
extern void func_021167f0(void *arg0, void *arg1);
extern void func_021168f8(void *arg0, void *arg1);
extern void func_02022454(void *arg0);
extern void func_0202bdbc(void *arg0);
extern void func_0203319c(void *arg0);

void *func_020d413c(void) {
    u8 *p = func_0210c594(0xb0, data_02155c3c);
    func_021167ac(p + 0x64, 8);
    func_021167ac(p + 0x58, 0xc);
    *(u32 *)(p + 0x24) = 0;
    *(u32 *)(p + 0x4) = 0;
    return p;
}

void func_020d4184(u8 *arg0) {
    func_02022454(arg0);
    while (*(void **)(arg0 + 0x58) != NULL) {
        void *node = *(void **)(arg0 + 0x58);
        func_021168f8(arg0 + 0x58, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
    if (*(void **)(arg0 + 0x54) != NULL) {
        func_0202bdbc(*(void **)(arg0 + 0x54));
        *(void **)(arg0 + 0x54) = NULL;
    }
    if (*(void **)(arg0 + 0x8c) != NULL) {
        func_0203319c(*(void **)(arg0 + 0x8c));
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

extern void *data_02160a6c;
extern void *data_02160244;
void func_020d4200(void) {
    void *root = data_02160a6c;
    if (root == NULL) return;
    u8 *mgr = (u8 *)root + 0x70;
    u8 *p = *(u8 **)mgr;
    if (p == NULL) return;
    u8 *r = *(u8 **)*(u8 **)data_02160244;
    u8 *s = *(u8 **)(p + 0x118);
    s32 flag = 1;
    if (*(u8 *)s != 0) flag = 0;
    if (*(u8 *)(r + 0x8d) != 0) flag = 0;
    void *sub = *(void **)(p + 0x13c);
    u8 *btl = *(u8 **)(p + 0x128);
    if (flag == 0) return;
    s32 state = *(s32 *)(btl + 0x24);
    switch (state) {
    case 0x1: *(volatile s32 *)&state = 1; break;
    case 0xa: *(volatile s32 *)&state = 2; break;
    case 0xb: *(volatile s32 *)&state = 3; break;
    case 0xc: *(volatile s32 *)&state = 4; break;
    case 0x14: *(volatile s32 *)&state = 5; break;
    case 0x3c: *(volatile s32 *)&state = 6; break;
    case 0x3d: *(volatile s32 *)&state = 7; break;
    case 0x46: *(volatile s32 *)&state = 8; break;
    case 0x47: *(volatile s32 *)&state = 9; break;
    case 0x64: *(volatile s32 *)&state = 10; break;
    case 0x67: *(volatile s32 *)&state = 11; break;
    case 0x68: *(volatile s32 *)&state = 12; break;
    case 0x69: *(volatile s32 *)&state = 13; break;
    case 0x6a: *(volatile s32 *)&state = 14; break;
    case 0x8c: *(volatile s32 *)&state = 15; break;
    case 0x96: *(volatile s32 *)&state = 16; break;
    case 0xbe: *(volatile s32 *)&state = 17; break;
    case 0xfa: *(volatile s32 *)&state = 18; break;
    case 0x12c: *(volatile s32 *)&state = 19; break;
    case 0x190: *(volatile s32 *)&state = 20; break;
    case 0x1f4: *(volatile s32 *)&state = 21; break;
    case 0x258: *(volatile s32 *)&state = 22; break;
    case 0x320: *(volatile s32 *)&state = 23; break;
    case 0x384: *(volatile s32 *)&state = 24; break;
    default: break;
    }
    (void)sub;
}

void func_020d4e54(u8 *arg0, void *arg1, void *arg2) {
    u8 *base = *(u8 **)(arg0 + 0x128);
    u8 *p = func_0210c594(0x14, data_02155c3c);
    *(void **)p = arg1;
    *(void **)(p + 0x8) = arg2;
    func_021167f0(base + 0x58, p);
}

void func_020d4e90(u8 *arg0, void *arg1) {
    func_021168f8(*(u8 **)(arg0 + 0x128) + 0x58, arg1);
    if (arg1 != NULL) {
        func_0210c5dc(arg1);
    }
}
