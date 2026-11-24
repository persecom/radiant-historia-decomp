/* 26 functions from 0x02138E00 to 0x02139CDC (main), found by ds-decomp. */
#include "common.h"

extern char data_0215cab0[];
extern char data_0215cae0[];
extern char data_0215cb10[];
extern char data_0215cb40[];
extern char data_0215cb70[];
extern char data_0215cba0[];
extern char data_0215cbd4[];
extern char data_0215cc04[];
extern void func_02126c20(const char *);
extern void *func_02138fd0(void *, s32);
extern void *func_02138f34(void *, s32);
extern void func_02130880(void *, u8 *, u32);
extern void func_021309c8(void *);
extern s32 func_02126c88(void *);
extern void func_021396e8(u8 *, u32);
extern void func_02126c98(void *, s32);
extern void func_02126cb0(void *, u32, u32, u32, u32);
extern void func_02126e50(void *, void *, void *, s32);
extern void func_02126e60(void *, void *, void *, s32);
extern void func_02139a9c(void *);
extern void func_02126c00(void);
extern void func_02126c0c(void);
extern void func_0213937c(void *, void *);
extern void func_02139450(u8 *, u8 *, s32, u8);
extern void func_02126c00(void);
extern void func_02126c0c(void);
extern void func_02139804(void *);
extern void func_021398d0(void *);
extern void func_0213999c(void *, void *);

extern void func_0212a9f4(void);
extern void func_02139be8(u32, u32, u32);
extern void func_0212a9f8(void);
void func_02138e00(u8 *arg0) {
    s32 i;
    void *p;
    if (*(u32 *)(arg0 + 0x58) == 0) {
        func_02126c20(data_0215cab0);
        return;
    }
    if (*(u32 *)(arg0 + 0xa0) == 0) {
        func_02126c20(data_0215cae0);
        return;
    }
    for (i = 0; i < *(s32 *)(arg0 + 0xa8); i++) {
        if (*(s32 *)(arg0 + 0x9c) == 1) {
            func_02138fd0(arg0, i);
        } else {
            p = func_02138f34(arg0, i);
        }
        func_02130880(p, *(u8 **)(arg0 + 0x74) + i * 0x1800, 0x1800);
    }
}

void func_02138ea4(u8 *arg0) {
    s32 i;
    void *p;
    if (*(u32 *)(arg0 + 0x58) == 0) {
        func_02126c20(data_0215cb10);
        return;
    }
    if (*(u32 *)(arg0 + 0xa0) == 0) {
        func_02126c20(data_0215cb40);
        return;
    }
    for (i = 0; i < *(s32 *)(arg0 + 0xa8); i++) {
        if (*(s32 *)(arg0 + 0x9c) == 1) {
            func_02138fd0(arg0, i);
        } else {
            p = func_02138f34(arg0, i);
        }
        func_021309c8(p);
    }
}

void *func_02138f34(void *arg0, s32 arg1) {
    u8 *p = (u8 *)arg0;
    void *obj;
    if (*(u32 *)(p + 0x58) == 0) {
        func_02126c20(data_0215cb70);
        return NULL;
    }
    if (*(s32 *)(p + 0x9c) == 1) {
        return NULL;
    }
    if (arg1 < 0 || arg1 >= *(s32 *)(p + 0xa8)) {
        return NULL;
    }
    obj = ((void **)p)[arg1];
    return (*(void *(**)(void *))(*(u8 **)obj + 0x44))(obj);
}

s32 func_02138f98(u8 *arg0) {
    if (*(u32 *)(arg0 + 0x58) == 0) {
        func_02126c20(data_0215cba0);
        return 0;
    }
    if (*(s32 *)(arg0 + 0x9c) == 1) {
        return 0;
    }
    return *(s32 *)(arg0 + 0xa8);
}

void *func_02138fd0(void *arg0, s32 arg1) {
    u8 *p = (u8 *)arg0;
    void *obj;
    if (*(u32 *)(p + 0x58) == 0) {
        func_02126c20(data_0215cbd4);
        return NULL;
    }
    if (*(s32 *)(p + 0x9c) == 0) {
        return NULL;
    }
    if (arg1 < 0 || arg1 >= *(s32 *)(p + 0xa8)) {
        return NULL;
    }
    obj = ((void **)p)[arg1];
    return (*(void *(**)(void *))(*(u8 **)obj + 0x44))(obj);
}

void func_02139034(u32 *arg0, u32 arg1) {
    arg0[0x33] += arg1;
    arg0[0x34] = 1;
}

void func_0213904c(u32 *arg0) {
    arg0[0x33] = 0;
    arg0[0x34] = 0;
}

void func_0213905c(u8 *arg0) {
    s32 i;
    if (*(u32 *)(arg0 + 0x58) == 0) {
        func_02126c20(data_0215cc04);
        return;
    }
    func_02126c00();
    if (*(s8 *)(arg0 + 0xac) == 1) {
        func_02139804(arg0);
    }
    for (i = 0; i < *(s32 *)(arg0 + 0xa8); i++) {
        if (*(s32 *)(arg0 + 0xd0) == 1 || *(s8 *)(arg0 + i * 0xc + 0x1c) != 0) {
            func_0213999c(arg0, arg0 + 0x18 + i * 0xc);
        }
    }
    func_021398d0(arg0);
    func_02126c0c();
}

void func_021396e8(u8 *arg0, u32 arg1) {
    *(u8 *)(arg0 + 0xac) = arg1;
}

void func_02139a9c(void *arg0) {
    void (**p)(void);
    if (arg0 != NULL) {
        p = (void (**)(void))((u8 *)arg0 + 0xe0);
        if (*p != NULL) {
            (*p)();
        }
    }
}

void func_02139bbc(u32 arg0, u32 arg1, u32 arg2) {
    func_0212a9f4();
    func_02139be8(arg0, arg1, arg2);
    func_0212a9f8();
}
