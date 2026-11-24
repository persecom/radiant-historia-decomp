/* 31 functions from 0x020AA464 to 0x020AB250 (main), found by ds-decomp. */
#include "common.h"

extern void func_021168f8(void *, void *);
extern void func_020aa3e0(void *);
extern void *func_0210c594(u32, void *);
extern void func_021167ac(void *, s32);
extern void **data_021601d8;
extern void *data_021601dc;
extern void *data_02155c3c;
extern void *func_020a5f14(u8 *, u16);
extern s32 func_0201fb1c(s32, s32);

extern void func_0210c5dc(void *);
void func_020aa464(void) {
    void **list = data_021601d8;
    void *node;
    if (list == NULL) {
        return;
    }
    node = *list;
    while (node != NULL) {
        void *next = *(void **)((u8 *)node + 4);
        func_021168f8(list, node);
        func_020aa3e0(node);
        node = next;
    }
    if (data_021601d8 != NULL) {
        func_0210c5dc(data_021601d8);
    }
    data_021601d8 = NULL;
}

void *func_020aa4d0(s32 arg0) {
    u8 *node = (u8 *)*data_021601d8;
    while (node != NULL) {
        if (*(s16 *)(node + 0x14) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 4);
    }
    return NULL;
}

void *func_020aa61c(void) {
    void **p = &data_021601dc;
    if (*p != NULL) {
        return *p;
    }
    *p = func_0210c594(0xC, data_02155c3c);
    func_021167ac(*p, 4);
    return *p;
}

extern void func_020aa710(void *);
void func_020aa65c(void) {
    void *node;
    if (data_021601dc == NULL) {
        return;
    }
    while ((node = *(void **)data_021601dc) != NULL) {
        func_021168f8(data_021601dc, node);
        func_020aa710(node);
    }
    if (data_021601dc == NULL) {
        return;
    }
    func_0210c5dc(data_021601dc);
    data_021601dc = NULL;
}

void *func_020aa6bc(void *arg0) {
    void **node;
    if (data_021601dc == NULL) {
        func_020aa61c();
    }
    node = func_0210c594(0xC, data_02155c3c);
    *node = arg0;
    func_021167f0(data_021601dc, node);
    return node;
}

void func_020aa710(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_020aa724(void) {
    void *p = data_021601dc;
    if (p == NULL) {
        return NULL;
    }
    return *(void **)p;
}

void *func_020aa740(void) {
    void *ptr = func_0210c594(0xc, data_02155c3c);
    func_021167ac(ptr, 0x14);
    return ptr;
}

extern void func_021168f8(void *, void *);
extern void func_020aa3e0(void *);
extern void *func_0210c594(u32, void *);
extern void func_021167ac(void *, s32);
extern void **data_021601d8;
extern void *data_021601dc;
extern void *data_02155c3c;
void func_020aa76c(void **arg0) {
    void *ptr;
    if (arg0 == NULL) {
        return;
    }
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_020aa7c0(void *arg0, u16 arg1) {
    u16 *node = (u16 *)func_0210c594(0x1c, data_02155c3c);
    *node = arg1;
    func_021167f0(arg0, node);
    return node;
}

extern u8 *data_021600e4;
extern s32 func_020bdd40(void);
extern u16 *func_02103c6c(void *, s32);
extern void func_020aa894(void *);
void *func_020aa7fc(void **arg0) {
    if (arg0 == NULL) {
        return NULL;
    }
    if (*arg0 == NULL) {
        return NULL;
    }
    return *arg0;
}

u8 *func_020aa818(u8 **arg0, u16 arg1) {
    u8 *node;
    if (arg0 == NULL) {
        return NULL;
    }
    node = *arg0;
    while (node != NULL) {
        if (*(u16 *)node == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x18);
    }
    return NULL;
}

void func_020aa850(void) {
    u32 local;
    u8 *p = data_021600e4;
    u16 *r4 = func_02103c6c(&local, func_020bdd40());
    if (r4 != NULL) {
        void *list = func_020aa740();
        *(void **)(p + 0x13f4) = list;
        func_020aa894(func_020aa7c0(list, *r4));
    }
}

void func_020aa894(void *arg0) {
    u8 *p = data_021600e4;
    u8 *node = func_020aa7fc(*(void **)(p + 0x13f4));
    while (node != NULL) {
        u8 *src = func_020a5f14(p + 0x124, *(u16 *)node);
        if (src != NULL) {
            *(s32 *)(node + 4) = *(s16 *)(src + 6);
            *(s32 *)(node + 8) = *(s16 *)(src + 8);
        }
        node = *(u8 **)(node + 0x18);
    }
}

void func_020aa8e8(void) {
    u8 *p = data_021600e4;
    u8 *node = func_020aa7fc(*(void **)(p + 0x13f4));
    while (node != NULL) {
        u32 scale = *(u32 *)(p + 0x70);
        u32 a = *(u32 *)(node + 4) * scale;
        u32 b = *(u32 *)(node + 8) * scale;
        a -= 0x20;
        b += 0xc;
        *(u16 *)(node + 0x10) = *(u32 *)(p + 0x44) + a;
        *(u16 *)(node + 0x12) = *(u32 *)(p + 0x48) + b;
        node = *(u8 **)(node + 0x18);
    }
}

s32 func_020aaa20(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 ret;
    if (arg2 == 0) {
        return arg1;
    }
    if (arg3 <= 0) {
        return arg0;
    }
    if (arg3 >= arg2) {
        return arg1;
    } else {
        s32 delta = arg1 - arg0;
        ret = func_0201fb1c(delta * arg3, arg2);
        ret += arg0;
        return ret;
    }
}

s32 func_020aaa60(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 done = 0;
    *arg0 = func_020aaa20(arg1 * 100, arg2 * 100, arg3, arg4) / 100;
    if (arg4 == arg3) {
        done = 1;
    }
    if (arg2 - arg1 > 0) {
        if (*arg0 >= arg2) {
            done = 1;
        }
    } else {
        if (*arg0 <= arg2) {
            done = 1;
        }
    }
    if (done != 0) {
        *arg0 = arg2;
        return 1;
    }
    return 0;
}

s32 func_020aaaec(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 done = 0;
    *arg0 = func_020aaa20(arg1, arg2, arg3, arg4);
    if (arg4 == arg3) {
        done = 1;
    }
    if (arg2 - arg1 > 0) {
        if (*arg0 >= arg2) {
            done = 1;
        }
    } else {
        if (*arg0 <= arg2) {
            done = 1;
        }
    }
    if (done != 0) {
        *arg0 = arg2;
        return 1;
    }
    return 0;
}

extern void func_020ade8c(s32);
void func_020aad6c(void) {
    func_020ade8c(1);
}

extern s32 func_020aaa20(s32, s32, s32, s32);
extern u8 *func_020ade60(s32);
extern s32 func_020aae98(void);
s32 func_020aad7c(void) {
    u8 *p = func_020ade60(1);
    if (func_020aaaec((s32 *)(p + 4), 0x39, 0, 4, *(s32 *)(p + 8)) != 0) {
        *(s32 *)(p + 8) = 0;
        return 1;
    }
    *(s32 *)(p + 8) += 1;
    return 0;
}

extern void *func_020a5f14(u8 *, u16);
extern s32 func_0201fb1c(s32, s32);
void func_020aadd8(void) {
    func_020ade8c(1);
    func_020ade8c(2);
    func_020ade8c(3);
}

s32 func_020aadf8(void) {
    u8 *p2 = func_020ade60(2);
    u8 *p1;
    func_020aaa60(p2 + 0xc, 1, 0x1f, 4, *(s32 *)(p2 + 8));
    p1 = func_020ade60(1);
    func_020aaaec((s32 *)(p1 + 4), 0x39, 0, 4, *(s32 *)(p1 + 8));
    if (func_020aae98() != 0) {
        *(s32 *)(p1 + 8) = 0;
        *(s32 *)(p2 + 8) = 0;
        *(u8 *)(p2 + 0xc) = 1;
        *(u8 *)(p2 + 0xd) = 0;
        return 1;
    }
    *(u8 *)(p2 + 0xd) = 1;
    *(s32 *)(p2 + 8) += 1;
    *(s32 *)(p1 + 8) = *(s32 *)(p2 + 8);
    return 0;
}

s32 func_020aae98(void) {
    s32 id = 3;
    u8 *p = func_020ade60(id);
    if (*(u8 *)(p + 0xd) == 0) {
        if (func_020aaaec((s32 *)p, id - 0xdf, 0, 4, *(s32 *)(p + 8)) != 0) {
            *(u8 *)(p + 0xd) = 1;
            *(s32 *)(p + 8) = 0;
            return 1;
        }
    }
    ++*(s32 *)(p + 8);
    return 0;
}

s32 func_020aaf08(void) {
    s32 id = 4;
    u8 *p = func_020ade60(id);
    if (*(u8 *)(p + 0xd) != 0) {
        if (func_020aaa60(p + 0xc, 1, 0x1f, id, *(s32 *)(p + 8)) != 0) {
            *(u8 *)(p + 0xd) = 0;
            *(s32 *)(p + 8) = 0;
            return 1;
        }
    } else {
        *(u8 *)(p + 0xd) = 2;
    }
    ++*(s32 *)(p + 8);
    return 0;
}

