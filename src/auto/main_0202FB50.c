/* 17 functions from 0x0202FB50 to 0x02030878 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160204;
extern u32 data_02155c3c;
extern void *func_0210c594(s32, u32);
extern void func_021167ac(void *, s32);
extern void func_020305b0(void *, void *);
extern void func_0210c5dc(void *);
extern void func_021168f8(void *, void *);
extern void func_021167f0(void *, void *);
extern void *func_02030630(u8 *, u16);
void func_02030468(u8 *arg0, u32 arg1) {
    if (arg0 == NULL) {
        return;
    }
    switch (arg1) {
        case 1:
            if (data_02160204[0x11c] != 0) {
                *(s16 *)(arg0 + 0x5a) += 3;
            }
            break;
        case 0:
            if (data_02160204[0x11c] != 0) {
                *(s16 *)(arg0 + 0x5a) += 2;
            }
            break;
        case 2:
            if (data_02160204[0x11c] != 0) {
                *(s16 *)(arg0 + 0x5a) += 1;
            }
            break;
        case 5:
            if (data_02160204[0x11c] != 0) {
                *(s16 *)(arg0 + 0x5a) += 1;
            }
            break;
    }
    if (*(s16 *)(arg0 + 0x5a) > 100) {
        *(s16 *)(arg0 + 0x5a) = 100;
    }
    if (arg1 == 6) {
        *(s16 *)(arg0 + 0x5a) -= 100;
        if (*(s16 *)(arg0 + 0x5a) < 0) {
            *(s16 *)(arg0 + 0x5a) = 0;
        }
    }
}

s32 func_02030528(u8 *arg0, u32 arg1) {
    return (*(u32 *)(arg0 + 0x78) & arg1) ? 1 : 0;
}

void *func_0203053c(void) {
    u8 *ptr = (u8 *)func_0210c594(0x14, data_02155c3c);
    func_021167ac(ptr + 8, 4);
    ptr[4] = 0;
    return ptr;
}

void func_02030574(u8 *arg0) {
    void *ptr;
    while ((ptr = *(void **)(arg0 + 8)) != NULL) {
        func_020305b0(arg0, ptr);
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020305b0(void *arg0, void *arg1) {
    u8 *p = (u8 *)arg0;
    if (arg1 == NULL) {
        return;
    }
    p[4]--;
    func_021168f8(p + 8, arg1);
    if (arg1 != NULL) {
        func_0210c5dc(arg1);
    }
}

void func_020305e4(u8 *arg0, u16 arg1) {
    u16 *node;
    if (func_02030630(arg0, arg1) != NULL) {
        return;
    }
    node = (u16 *)func_0210c594(0xc, data_02155c3c);
    *node = arg1;
    func_021167f0(arg0 + 8, node);
    arg0[4]++;
}

extern void func_021168f8(void *, void *);
extern void func_021167f0(void *, void *);
extern void *func_02030630(u8 *, u16);
void *func_02030630(u8 *arg0, u16 arg1) {
    u8 *node = *(u8 **)(arg0 + 8);
    if (node != NULL) {
        do {
            if (*(u16 *)node == arg1) {
                return node;
            }
            node = *(u8 **)(node + 8);
        } while (node != NULL);
    }
    return NULL;
}

void *func_0203065c(u8 *arg0, u16 arg1) {
    u16 *node = (u16 *)func_0210c594(0x10, data_02155c3c);
    *node = arg1;
    func_021167f0(arg0 + 0xc0, node);
    return node;
}

extern u8 *data_02160244;
extern void func_0202e874(void *);
void *func_02030698(u8 *arg0, u16 arg1) {
    u8 *node = *(u8 **)(arg0 + 0xc0);
    if (node != NULL) {
        do {
            if (*(u16 *)node == arg1) {
                return node;
            }
            node = *(u8 **)(node + 0xc);
        } while (node != NULL);
    }
    return NULL;
}

void func_020306c4(u8 *arg0, u16 arg1) {
    void *node = func_02030698(arg0, arg1);
    if (node == NULL) {
        return;
    }
    func_021168f8(arg0 + 0xc0, node);
    if (node != NULL) {
        func_0210c5dc(node);
    }
}

void func_020306f8(u8 *arg0, u16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    u8 *node = (u8 *)func_02030698(arg0, arg1);
    if (node != NULL) {
        *(s16 *)(node + 2) = arg2;
        *(s16 *)(node + 4) = arg3;
        *(s16 *)(node + 6) = arg4;
        return;
    }
    node = (u8 *)func_0203065c(arg0, arg1);
    *(s16 *)(node + 2) = arg2;
    *(s16 *)(node + 4) = arg3;
    *(s16 *)(node + 6) = arg4;
}

void func_02030748(s32 arg0) {
    u16 i;
    if (arg0 == 0) {
        for (i = 0; i < 9; i++) {
            u8 *p = *(u8 **)(data_02160244 + i * 4 + 8);
            if ((p[0x1c] & 1) && !(p[0x1c] & 2)) {
                *(s16 *)(p + 0x1e) -= 1;
                if (*(s16 *)(p + 0x1e) < 0) {
                    func_0202e874(p);
                }
            }
        }
    } else if (arg0 == 1) {
        for (i = 0; i < 9; i++) {
            u8 *p = *(u8 **)(data_02160244 + i * 4 + 8);
            u8 *q = *(u8 **)(p + 0x20);
            if (q != NULL) {
                u8 *r = *(u8 **)(q + 0x118);
                if (*(u32 *)(r + 0x70) == 0) {
                    func_0202e874(p);
                }
            }
        }
    }
}

s32 func_02030808(u32 arg0) {
    if (arg0 < 9) {
        u8 *p = *(u8 **)(data_02160244 + arg0 * 4 + 8);
        if ((p[0x1c] & 1) && !(p[0x1c] & 4)) {
            return 1;
        }
    }
    return 0;
}

s32 func_02030844(u32 arg0) {
    if (arg0 <= 8) {
        u8 *p = *(u8 **)(data_02160244 + arg0 * 4 + 8);
        if (p[0x1c] & 1) {
            return 1;
        }
    }
    return 0;
}

