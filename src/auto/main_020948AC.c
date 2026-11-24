/* 19 functions from 0x020948AC to 0x02095874 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160110;
extern void func_020a9544(void *);
extern void func_0203bc34(void *, void *, u32, s32, s32, s32);
extern void func_020a8ab8(void *);
extern void *func_020a94b8(void *);
extern u8 data_021488b0[];
extern u8 data_021488bc[];
typedef struct { u32 data[0x2f0]; } Unk_020949f4;
extern const Unk_020949f4 data_021413f0;
extern void func_020951e8();
extern void *func_02064cb8(u32);
extern void func_02032c80(void *, s32);
extern void func_021168f8(void *, void *);
extern void func_020934ac(void *);
extern void func_0210c5dc(void *);
extern void func_020951b4(void);
extern void func_0209532c(void);
extern void func_02094a34(u32 *, s32, s32);
extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern void func_021167f0(void *, void *);
void func_020948ac(void) {
    u8 *p = data_02160110;
    u16 i;
    for (i = 0; i < 10; i++) {
        if (((void **)(p + 0x18))[i] != NULL) {
            func_020a9544(((void **)(p + 0x18))[i]);
            ((void **)(p + 0x18))[i] = NULL;
        }
        if (((void **)(p + 0x40))[i] != NULL) {
            (*(void (**)(void *))((u8 *)((void **)(p + 0x40))[i] + 0xc))(((void **)(p + 0x40))[i]);
            ((void **)(p + 0x40))[i] = NULL;
        }
    }
}

void func_0209491c(s32 arg0, u32 arg1, s32 arg2) {
    u8 *p = data_02160110;
    u8 *obj = *(u8 **)(p + arg0 * 4 + 0x40);
    void *other = *(void **)(p + arg0 * 4 + 0x18);
    if (arg2 == 0) {
        (*(void (**)(void *))(obj + 4))(obj);
        return;
    }
    (*(void (**)(void *))(obj + 4))(obj);
    func_0203bc34(other, obj, arg1, 0, 1, 0);
    func_020a8ab8(obj);
}

void func_02094990(s32 arg0, s32 arg1) {
    u8 *p = data_02160110;
    func_020a9544(*(void **)(p + arg0 * 4 + 0x18));
    if (arg1 == 0) {
        *(void **)(p + arg0 * 4 + 0x18) = func_020a94b8(data_021488b0);
    } else if (arg1 == 1) {
        *(void **)(p + arg0 * 4 + 0x18) = func_020a94b8(data_021488bc);
    }
}

void func_020949f4(void) {
    Unk_020949f4 buf = data_021413f0;
    func_02094a34(buf.data, 0x5e, 8);
}

void func_02094a34(u32 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    for (i = 0; i < arg1; i++) {
        u8 *node = (u8 *)func_0210c594(0x44, data_02155c3c);
        u32 *src = &arg0[i * arg2];
        *(u32 *)(node + 0x0) = 0;
        *(u32 *)(node + 0x4) = 0;
        *(u32 *)(node + 0x8) = 0;
        *(u32 *)(node + 0xc) = 0;
        *(u32 *)(node + 0x20) = src[0];
        *(u32 *)(node + 0x24) = src[1];
        *(u32 *)(node + 0x2c) = src[3];
        *(u32 *)(node + 0x28) = src[5];
        *(u32 *)(node + 0x30) = src[4];
        *(u32 *)(node + 0x14) = src[7];
        *(u32 *)(node + 0x18) = src[2];
        *(u8 *)(node + 0x34) = src[6];
        func_021167f0(data_02160110 + 0x84, node);
    }
}

void func_02094bf4(void) {
    u8 *p = data_02160110;
    u16 flags;
    *(u16 *)(p + 0x78) = 0;
    *(u32 *)(p + 0x7c) = 0;
    *(u16 *)(p + 0x76) = 0;
    *(u16 *)(p + 0xb6) = 0;
    *(u16 *)(p + 0xbc) = 0;
    *(u16 *)(p + 0xba) = 0;
    *(u16 *)(p + 0xb8) = 0;
    flags = *(u16 *)(p + 0x70);
    *(u16 *)(p + 0x70) = 0;
    if (flags & 2) {
        *(u16 *)(p + 0x70) |= 2;
    } else {
        *(u16 *)(p + 0xbc) = 0;
    }
    func_020951b4();
    func_0209532c();
    *(u16 *)(p + 0x72) |= 0x200;
    *(u16 *)(p + 0x74) = 0xc0;
    *(u32 *)(p + 0xa8) = 0;
    *(u32 *)(p + 0xac) = 0;
    *(u32 *)(p + 0xb0) = 0;
    *(u16 *)(p + 0xb4) = 0;
}

void func_02094c74(u8 *arg0) {
    u8 *res = (u8 *)func_02064cb8(*(u32 *)(*(u8 **)arg0 + 0x11c));
    *(u8 **)(arg0 + 8) = res;
    if (*(u8 *)(res + 0x14) == 1) {
        *(u16 *)(arg0 + 0xe) |= 2;
    } else {
        *(u16 *)(arg0 + 0xe) &= 0xfffd;
    }
    func_02032c80(arg0, 6);
}

u32 func_02095198(void) {
    if (data_02160110 != NULL) {
        return *(u32 *)(data_02160110 + 0x9c);
    }
    return 0;
}

void func_020951b4(void) {
    while (*(u32 *)(data_02160110 + 0x9c) != 0) {
        func_020951e8();
    }
}

void func_020951e8(u8 *arg0) {
    if (arg0 == NULL) {
        return;
    }
    func_021168f8(data_02160110 + 0x9c, arg0);
    func_020934ac(*(void **)(arg0 + 8));
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_02095228(u32 arg0, u16 arg1, u32 arg2) {
    u8 *cur = (u8 *)func_02095198();
    u8 *node = (u8 *)func_0210c594(0x1c, data_02155c3c);
    while (cur != NULL) {
        if (*(u16 *)(cur + 0x10) >= arg1) {
            *(u16 *)(cur + 0x10) += 1;
        }
        cur = *(u8 **)(cur + 4);
    }
    *(u32 *)(node + 8) = arg0;
    *(u16 *)(node + 0x10) = arg1;
    *(u8 *)(node + 0x14) = 0;
    *(u32 *)(node + 0xc) = arg2;
    *(u8 *)(node + 0x15) = 0;
    func_021167f0(data_02160110 + 0x9c, node);
    return node;
}

extern void *func_0203222c(void);
extern void func_02095374(u32, void *, s32, s32);
void func_020952b4(u8 *arg0) {
    s16 idx;
    u8 *cur;
    if (arg0 == NULL) {
        return;
    }
    idx = *(s16 *)(arg0 + 0x10);
    cur = (u8 *)func_02095198();
    while (cur != NULL) {
        if (*(u16 *)(cur + 0x10) > idx) {
            *(u16 *)(cur + 0x10) -= 1;
        }
        cur = *(u8 **)(cur + 4);
    }
    func_020951e8(arg0);
}

void *func_020952f8(u16 arg0) {
    u8 *node = (u8 *)func_02095198();
    while (node != NULL) {
        if (*(u16 *)(node + 0x10) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 4);
    }
    return NULL;
}

void func_0209532c(void) {
    u8 *node;
    s32 i = 0;
    node = (u8 *)func_0203222c();
    while (node != NULL) {
        func_02095374(*(u32 *)node, node, i, 0);
        i++;
        if (i >= 10) {
            return;
        }
        node = *(u8 **)(node + 0x1c);
    }
}

extern void *func_02032254(u16);
void func_0209568c(u32 arg0, u16 arg1) {
    u8 *node;

    if (arg0 == 0 || arg0 == 3) {
        node = (u8 *)func_02032254(arg1);
        if (node == NULL) {
            return;
        }
        do {
            if (*(u32 *)(node + 0x14) == 0 && arg1 < 10) {
                if (arg0 == 3) {
                    func_02095374(*(u32 *)node, node, arg1, 3);
                } else {
                    func_02095374(*(u32 *)node, node, arg1, 0);
                }
            }
            arg1 = (u16)(arg1 + 1);
            node = *(u8 **)(node + 0x1c);
        } while (node != NULL);
    } else if (arg0 == 1) {
        node = (u8 *)func_02032254(arg1);
        if (node == NULL) {
            return;
        }
        do {
            if (*(u32 *)(node + 0x14) == 0 && arg1 < 10) {
                func_02095374(*(u32 *)node, node, arg1, 1);
            }
            arg1 = (u16)(arg1 + 1);
            node = *(u8 **)(node + 0x1c);
        } while (node != NULL);
    }
}

