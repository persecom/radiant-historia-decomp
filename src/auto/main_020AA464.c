/* 31 functions from 0x020AA464 to 0x020AB250 (main), found by ds-decomp. */
#include "common.h"

extern void func_021168f8(void *, void *);
extern void func_020aa3e0(void *);
extern void *func_0210c594(u32, void *);
extern void func_021167ac(void *, s32);
extern void **data_021601d8;
extern void *data_021601dc;
extern void *data_02155c3c;

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

extern void func_020ade8c(s32);
void func_020aad6c(void) {
    func_020ade8c(1);
}

