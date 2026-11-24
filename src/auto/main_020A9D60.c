/* 43 functions from 0x020A94B8 to 0x020AA464 (main), found by ds-decomp. */
#include "common.h"

extern void *data_02155c3c;
extern char data_02150098[];
extern void *func_0210c594(s32, void *);
extern void func_0210c5dc(void *);
extern void func_02005e80(char *, char *, s32);
extern void *func_02109b14(char *, s32);
extern void func_021091b4(void);
extern void func_020a9d60(void *);
extern void func_020a9b40(void *);
extern u8 *data_02162880;
extern u32 data_021601d4;
extern void func_020a9988(void);
extern void func_0210d9e4(void *);
void func_020a9a58(void);
void func_020a9abc(u8 *);
void func_020a9b28(void *);
extern void func_021167ac(void *, s32);
extern u8 *data_021600e4;
extern void func_020aa348(void *);
extern void func_021168f8(void *, void *);
extern u16 func_02002404(s32, s32);
extern void func_020a655c(void *, void *, u16, s32, s32);
extern s32 func_020a932c(void *);
extern u32 data_021601d4;

extern void func_0210da44(void);
extern void func_020aa65c(void);
extern void func_02066b7c(s32, s32, void *);
extern void func_02066bdc(void);

extern void func_0210c5dc(void *);

extern void func_020a9aa8(void *);
void func_020a9d60(void *arg0) {
    void *ptr;
    func_020aa348(arg0);
    while ((ptr = *(void **)arg0) != NULL) {
        func_021168f8(arg0, ptr);
        func_020a9aa8(ptr);
    }
}

void func_020a9d9c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 a[2];
    s32 b[2];
    u16 angle;
    a[0] = arg0;
    a[1] = arg1;
    b[0] = arg2;
    b[1] = arg3;
    func_020a655c(a, b, (u16)(func_02002404(arg2 - arg0, arg3 - arg1) - 0x4000), 1, 150);
    angle = func_02002404(a[0] - b[0], a[1] - b[1]);
    angle -= 0x4000;
    func_020a655c(a, b, angle, 1, 150);
}

void func_020a9e38(volatile s16 *arg0, volatile s16 *arg1) {
    u8 *p = data_021600e4;
    *arg0 = (*arg0 * *(s32 *)(p + 0x6c)) / 4096;
    *arg0 -= 0x20;
    *arg1 = (*arg1 * *(s32 *)(p + 0x6c)) / 4096;
    *arg1 += 0x14;
    *arg0 = *(s32 *)(p + 0x44) + *arg0;
    *arg1 = *(s32 *)(p + 0x48) + *arg1;
}

void func_020a9ebc(s16 *arg0, s16 *arg1) {
    u8 *p = data_021600e4;
    *arg0 = (*arg0 * *(s32 *)(p + 0x6c)) / 0x1000;
    *arg1 = (*arg1 * *(s32 *)(p + 0x6c)) / 0x1000;
}

void func_020aa0f0(void) {
    u8 *p = data_021600e4;
    u8 *node = *(u8 **)(p + 0x13c8);
    if (node == NULL) {
        return;
    }
    while (node != NULL) {
        u8 *next = *(u8 **)(node + 8);
        func_021168f8(p + 0x13c8, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
        node = next;
    }
}

s32 func_020aa144(void) {
    u8 *node = *(u8 **)(data_021600e4 + 0x13c8);
    u8 *p;
    if (node == NULL) {
        return 0;
    }
    func_020aa65c();
    p = *(u8 **)(*(u8 **)(*(u8 **)node + 0xc));
    func_02066b7c(-*(s16 *)(p + 6), -*(s16 *)(p + 8), func_02066bdc);
    return 1;
}

extern u8 *data_021600e4;
extern s32 func_020a9194(void *);
extern s32 func_020a916c(s32);
extern s32 func_020a932c(void *);
extern u32 data_021601d4;
u32 func_020aa19c(void) {
    return *(u32 *)(data_021600e4 + 0x13c8);
}

extern void func_020aa334(void *);
extern u32 func_020aa19c(void);
extern void *func_020aa724(void);
extern volatile char func_020a795c(u32, u32 *, u32 *);
extern BOOL func_020bdb30(s32, s32);
void func_020aa1b4(void) {
    u8 *base = data_021600e4;
    void *node = (void *)func_020aa19c();
    if (node == NULL) {
        return;
    }
    func_021168f8(base + 0x13c8, node);
    if (node != NULL) {
        func_0210c5dc(node);
    }
}

s32 func_020aa1f4(u8 *arg0) {
    s32 flag = (s8) *(u32 *)(arg0 + 0xac);
    u8 *node;
    u32 a, b;
    if (flag != 0) {
        return 4;
    }
    node = (u8 *)func_020aa724();
    while (node != NULL) {
        a = 0;
        b = 0;
        func_020a795c(*(u32 *)node, &a, &b);
        if (a != 0 && *(u16 *)(a + 4) == *(u16 *)arg0) {
            return 2;
        }
        if (b != 0 && *(u16 *)(b + 4) == *(u16 *)arg0) {
            return 2;
        }
        node = *(u8 **)(node + 8);
    }
    return flag ? 0 : 1;
}

void func_020aa2b0(void) {
    u8 *node = (u8 *)func_020aa724();
    u32 a = 0, b = 0;
    while (node != NULL) {
        func_020a795c(*(u32 *)node, &a, &b);
        func_020bdb30((u16) *(u32 *)node, 1);
        node = *(u8 **)(node + 8);
    }
}

void *func_020aa318(void) {
    return func_0210c594(0xc, data_02155c3c);
}

void func_020aa334(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020aa348(void *arg0) {
    void *ptr;
    while ((ptr = *(void **)((u8 *)arg0 + 0xc)) != NULL) {
        func_021168f8((u8 *)arg0 + 0xc, ptr);
        func_020aa334(ptr);
    }
}

void *func_020aa380(void) {
    return func_0210c594(0xc, data_02155c3c);
}

void func_020aa39c(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_020aa3b0(void) {
    u8 *ptr = (u8 *)func_0210c594(0x18, data_02155c3c);
    func_021167ac(ptr + 8, 0);
    return ptr;
}

extern void func_020aa39c(void *);
void func_020aa3e0(u8 *arg0) {
    u8 *node;
    if (arg0 == NULL) {
        return;
    }
    node = *(u8 **)(arg0 + 8);
    while (node != NULL) {
        u8 *next = *(u8 **)(node + 4);
        func_021168f8(arg0 + 8, node);
        func_020aa39c(node);
        node = next;
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

extern void *data_021601d8;
extern void func_020aa464(void);
extern void func_020aa65c(void);
extern void func_02066b7c(s32, s32, void *);
extern void func_02066bdc(void);
void func_020aa430(void) {
    void *p;
    func_020aa464();
    p = func_0210c594(0xc, data_02155c3c);
    data_021601d8 = p;
    func_021167ac(p, 0);
}

