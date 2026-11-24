/* 25 functions from 0x020E9354 to 0x020EA188 (main), found by ds-decomp. */
#include "common.h"

extern void func_02108594(void *);
extern void func_0210c5dc(void *);
extern void func_020e86c0(s32);
extern void func_021167ac(void *, s32);
extern void func_020e9860(void);
extern void func_0210dae0(void *);
extern void func_021168f8(void *, void *);
extern void func_021167f0(void *, void *);
extern void func_0210db10(void *);
extern void func_0210eb80(void *);
extern void func_020e9684(void *);
extern u8 *data_02160a74;
extern u8 *data_02160a7c;
extern void func_0210da14(void *);
extern u8 *data_02160a7c;
extern u8 *data_02160a80;
extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern void func_020ea64c(void);
extern void func_0210db70(void *);
extern void func_0210dbd0(void *);
extern void func_0210dba0(void *);
extern void func_0210dbe8(void *);
extern void func_020ea164(void **);
void func_020e9354(u16 arg0) {
    u8 *ptr = data_02160a74;
    func_020e86c0(0x18);
    *(u16 *)(ptr + 0x148) = 0;
    *(u16 *)(ptr + 0x14a) = arg0;
}

void func_020e95d0(void) {
    *(u16 *)(data_02160a74 + 0x1b0) = 0;
}

void func_020e95ec(u8 *arg0) {
    func_021167ac(arg0 + 0x14, 0);
    *(void **)(arg0 + 0) = (void *)func_020e9860;
    *(u32 *)(arg0 + 4) = 0x3ec;
    *(void **)(arg0 + 8) = arg0;
    func_0210dae0(arg0);
}

void func_020e9620(void *arg0) {
    u8 *p = (u8 *)arg0;
    if (*(void **)(p + 0x20) != NULL) {
        func_020e9684(*(void **)(p + 0x20));
        if (*(void **)(p + 0x20) != NULL) {
            func_0210c5dc(*(void **)(p + 0x20));
            *(void **)(p + 0x20) = NULL;
        }
    }
    func_0210db10(arg0);
}

void func_020e965c(void *arg0, void *arg1) {
    func_021167f0((u8 *)arg0 + 0x14, arg1);
    func_021167ac((u8 *)arg1 + 0x10, 0);
    *(void **)((u8 *)arg1 + 8) = arg0;
}

void func_020e9684(void *arg0) {
    func_021168f8((u8 *)*(void **)((u8 *)arg0 + 8) + 0x14, arg0);
}

void func_020e969c(void *arg0) {
    u8 *p = (u8 *)arg0;
    if (*(void **)(p + 0xc) != NULL) {
        func_0210eb80(*(void **)(p + 0xc));
        if (*(void **)(p + 0xc) != NULL) {
            func_0210c5dc(*(void **)(p + 0xc));
            *(void **)(p + 0xc) = NULL;
        }
    }
    func_021168f8((u8 *)*(void **)(p + 8) + 0x10, arg0);
}

void func_020e96e0(u8 *arg0) {
    if (*(void **)(arg0 + 0x60) != NULL) {
        func_0210c5dc(*(void **)(arg0 + 0x60));
        *(void **)(arg0 + 0x60) = NULL;
    }
    func_021168f8(*(u8 **)(arg0 + 8) + 0x20, arg0);
}

void func_020e9714(u8 *arg0) {
    func_021168f8(*(u8 **)(arg0 + 8) + 0x4c, arg0);
}

void func_020e972c(u8 *arg0) {
    u8 *p = arg0;
    if (*(void **)(p + 0x28) != NULL) {
        s32 i, count = *(s32 *)(p + 0x24);
        for (i = 0; i < count; i++) {
            u8 *elem = *(u8 **)(p + 0x28) + i * 0x2c;
            func_0210eb80(*(void **)(elem + 0xc));
            if (*(void **)(elem + 0xc) != NULL) {
                func_0210c5dc(*(void **)(elem + 0xc));
                *(void **)(elem + 0xc) = NULL;
            }
            func_020e969c(elem);
        }
        if (*(void **)(p + 0x28) != NULL) {
            func_0210c5dc(*(void **)(p + 0x28));
            *(void **)(p + 0x28) = NULL;
        }
    }
    if (*(void **)(p + 0x20) != NULL) {
        func_020e9684(*(void **)(p + 0x20));
        if (*(void **)(p + 0x20) != NULL) {
            func_0210c5dc(*(void **)(p + 0x20));
            *(void **)(p + 0x20) = NULL;
        }
    }
    func_020e9620(p);
    if (p != NULL) {
        func_0210c5dc(p);
    }
}

void func_020e97ec(u8 *arg0) {
    u8 *p = arg0;
    s32 i;
    s32 count = *(s32 *)(p + 0x5c);
    if (*(void **)(p + 0x60) != NULL) {
        for (i = 0; i < count; i++) {
            func_020e9714(*(u8 **)(p + 0x60) + i * 0x54);
        }
        if (*(void **)(p + 0x60) != NULL) {
            func_0210c5dc(*(void **)(p + 0x60));
            *(void **)(p + 0x60) = NULL;
        }
    }
    func_020e96e0(p);
    if (p != NULL) {
        func_0210c5dc(p);
    }
}

void func_020e9c90(void) {
    u16 i;
    data_02160a7c = (u8 *)func_0210c594(0x3c, data_02155c3c);
    *(u32 *)(data_02160a7c + 0x14) = 0;
    *(u16 *)(data_02160a7c + 0x18) = 0;
    *(u8 *)(data_02160a7c + 0x1a) = 0;
    for (i = 0; i < 8; i++) {
        *(u32 *)(data_02160a7c + 0x1c + i * 4) =
            (i * 16) | ((i * 16 + 4) << 8) | ((i * 16 + 8) << 16) | ((i * 16 + 12) << 24);
    }
}

extern void func_0210d9e4(void *);
extern void func_02002ee8(s32, u32, u32, u16);
extern void func_02002f9c(void *);
void func_020e9dc0(void);
void func_020e9e0c(void);
void func_020e9d0c(void *arg0) {
    if (data_02160a7c == NULL) {
        return;
    }
    *(void **)(data_02160a7c + 0) = (void *)func_020e9e0c;
    *(void **)(data_02160a7c + 4) = arg0;
    func_0210d9e4(data_02160a7c);
}

void func_020e9d44(void) {
    void *p = data_02160a7c;
    if (p != NULL) {
        func_0210da14(p);
    }
}

void func_020e9d64(s32 arg0) {
    u8 *p = data_02160a7c;
    if (arg0 == 1) {
        func_02002ee8(1, 0, 2, 0x5800);
        func_020e9dc0();
        *(u32 *)(p + 0x14) |= 1;
    } else {
        func_02002ee8(0, 0, 2, 0x5800);
        *(u32 *)(p + 0x14) &= ~1;
    }
}

void func_020e9dc0(void) {
    u8 *p = data_02160a7c;
    if ((*(u32 *)(p + 0x14) & 1) == 0) {
        return;
    }
    *(volatile u32 *)0x04000358 = 0x1f7fff;
    func_02002f9c((u32 *)(p + 0x1c) + *(s8 *)(p + 0x1a) / 2);
}

void func_020e9e0c(void) {
    u8 *p = data_02160a7c;
    if (p == NULL) {
        return;
    }
    if (*(u32 *)(p + 0x14) & 1) {
        u32 flag = *(u32 *)(p + 0x14) & 2;
        if (flag == 0) {
            *(volatile s8 *)(p + 0x1a) += 1;
            if (*(volatile s8 *)(p + 0x1a) > 0xf) {
                *(volatile s8 *)(p + 0x1a) = 0xf;
                *(u32 *)(p + 0x14) |= 2;
            }
        } else if (flag != 0) {
            *(volatile s8 *)(p + 0x1a) -= 1;
            if (*(volatile s8 *)(p + 0x1a) < 0) {
                *(volatile s8 *)(p + 0x1a) = 0;
                *(u32 *)(p + 0x14) &= ~2;
            }
        }
    } else {
        *(u16 *)(p + 0x18) = 0;
        *(u32 *)(p + 0x14) &= ~2;
    }
}

void func_020e9eb0(void) {
    if (data_02160a80 != NULL) {
        return;
    }
    data_02160a80 = (u8 *)func_0210c594(0x58, data_02155c3c);
    func_021167ac(data_02160a80 + 0x3c, 0x34);
    func_021167ac(data_02160a80 + 0x48, 0x3c);
    *(void **)(data_02160a80 + 0x14) = (void *)func_020ea64c;
    *(u32 *)(data_02160a80 + 0x18) = 0x3e8;
    func_0210db70(data_02160a80 + 0x14);
    *(void **)(data_02160a80 + 0x28) = (void *)func_020ea64c;
    *(u32 *)(data_02160a80 + 0x2c) = 0x3e8;
    func_0210dbd0(data_02160a80 + 0x28);
}

void func_020e9f44(void) {
    if (data_02160a80 == NULL) {
        return;
    }
    while (*(void **)(data_02160a80 + 0x48) != NULL) {
        func_021168f8(data_02160a80 + 0x48, *(void **)(data_02160a80 + 0x48));
    }
    while (*(void **)(data_02160a80 + 0x3c) != NULL) {
        void **node = *(void ***)(data_02160a80 + 0x3c);
        func_021168f8(data_02160a80 + 0x3c, node);
        func_020ea164(node);
    }
    func_0210dba0(data_02160a80 + 0x14);
    func_0210dbe8(data_02160a80 + 0x28);
    if (data_02160a80 != NULL) {
        func_0210c5dc(data_02160a80);
        data_02160a80 = NULL;
    }
}

extern void *func_020ea100(void);
extern void func_020ea188(void *, u32, s32);
extern void func_020ea5d4(void *, s32);
u8 *func_020e9fe8(u32 arg0, u32 arg1) {
    u8 *r6;
    if (arg0 > 0x1b58 && arg0 < 0x1b5c) {
        r6 = func_020ea100();
        func_020ea188(r6, arg0, 0);
    } else if (arg0 > 0x1770 && arg0 < 0x1786) {
        r6 = func_020ea100();
        func_020ea188(r6, arg0, 1);
    } else {
        return NULL;
    }
    *(u32 *)(r6 + 0x4) = arg0;
    *(u32 *)(r6 + 0x8) = arg1;
    func_020ea5d4(r6, 0);
    func_021167f0(data_02160a80 + 0x3c, r6);
    if (arg1 > 0xbb8 && arg1 < 0xfa0) {
        func_021167f0(data_02160a80 + 0x48, r6);
    }
    return r6;
}

u32 *func_020ea0b8(s32 arg0) {
    u8 *base = data_02160a80;
    u32 *node;
    if (base == NULL) {
        return NULL;
    }
    node = *(u32 **)(base + 0x48);
    while (node != NULL) {
        if (*(s32 *)((u8 *)node + 0x8) == arg0) {
            return node;
        }
        node = *(u32 **)((u8 *)node + 0x40);
    }
    return NULL;
}

extern void *func_0210853c(void);
extern void func_021091b4(void *);
void *func_020ea100(void) {
    u8 *p = (u8 *)func_0210c594(0x44, data_02155c3c);
    *(u32 *)(p + 0xc) = 0;
    *(u32 *)(p + 0x14) = 0;
    *(u32 *)(p + 0x18) = 1;
    *(u32 *)(p + 0x1c) = 0;
    *(u32 *)(p + 0x20) = 0;
    *(u32 *)(p + 0x24) = 0;
    *(u32 *)(p + 0x28) = 0x1000;
    *(u32 *)(p + 0x2c) = 0x1000;
    *(u8 *)(p + 0x30) = 0x1f;
    *(void **)(p + 0) = func_0210853c();
    func_021091b4(*(void **)(p + 0));
    return p;
}

void func_020ea164(void **arg0) {
    func_02108594(*arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}
