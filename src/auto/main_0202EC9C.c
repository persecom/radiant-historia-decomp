/* 14 functions from 0x0202EC9C to 0x0202FB50 (main), found by ds-decomp. */
#include "common.h"

extern void *data_02160084;
extern void *data_02160088;
extern void *data_02155c3c;

void *func_020224cc(void);
void func_02022508(void *);
void func_02030574(void *);

typedef struct Node_0202f5fc {
    u8 pad0[4];
    struct Node_0202f5fc *next;
    s32 unk8;
    u8 unkc;
    u8 padD[3];
    void *unk10;
} Node_0202f5fc;

void *func_0210c594(u32, void *);
void func_0210c5dc(void *);
void func_021167ac(void *, u32);
void func_021167f0(void *, void *);
void func_021168f8(void *, void *);
void func_0202f4d8(void *);

void func_0202f388(void) {
    void **p = &data_02160084;
    if (*p != NULL) {
        return;
    }
    *p = func_0210c594(0xC, data_02155c3c);
    func_021167ac(*p, 0x14);
}

void func_0202f3c4(void) {
    void **p = &data_02160084;
    if (*p == NULL) {
        return;
    }
    while (*(void **)*p != NULL) {
        func_0202f4d8(*(void **)*p);
    }
    if (*p != NULL) {
        func_0210c5dc(*p);
        data_02160084 = NULL;
    }
}

void func_0202f41c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5, u8 arg6) {
    u8 *node = func_0210c594(0x20, data_02155c3c);
    *(s32 *)(node + 0x0) = arg0;
    *(s32 *)(node + 0x4) = arg1;
    *(s32 *)(node + 0x8) = arg2;
    *(s32 *)(node + 0xc) = arg3;
    *(s32 *)(node + 0x10) = arg4;
    *(u8 *)(node + 0x1c) = arg5;
    *(u8 *)(node + 0x1d) = arg6;
    func_021167f0(data_02160084, node);
}

void *func_0202f484(s32 arg0, s32 arg1) {
    u8 *node = *(u8 **)data_02160084;
    while (node != NULL) {
        if (arg0 == 0 && *(s32 *)(node + 0) == arg1) {
            return node;
        }
        if (arg0 == 1 && *(s32 *)(node + 4) == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x18);
    }
    return NULL;
}

void func_0202f4d8(void *arg0) {
    void **p = &data_02160084;
    func_021168f8(*p, arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_0202f508(void) {
    u16 i;
    if (data_02160088 != NULL) {
        return;
    }
    data_02160088 = func_0210c594(0x10, data_02155c3c);
    func_021167ac(data_02160088, 0);
    for (i = 0; i < 0x40; i++) {
        u8 *node = func_0210c594(0x18, data_02155c3c);
        *(u32 *)(node + 8) = 0;
        *(u32 *)(node + 0x10) = 0;
        *(u8 *)(node + 0xc) = 0;
        func_021167f0(data_02160088, node);
    }
    *(u16 *)((u8 *)data_02160088 + 0xc) = 0;
}

void func_0202f594(void) {
    if (data_02160088 == NULL) {
        return;
    }
    while (*(void **)data_02160088 != NULL) {
        void *node = *(void **)data_02160088;
        func_021168f8(data_02160088, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
    if (data_02160088 == NULL) {
        return;
    }
    func_0210c5dc(data_02160088);
    data_02160088 = NULL;
}

void *func_0202f5fc(u32 arg0) {
    void **p = &data_02160088;
    Node_0202f5fc *base = *(Node_0202f5fc **)p;
    Node_0202f5fc *node = *(Node_0202f5fc **)base;
    while (node != NULL) {
        if (arg0 == 0 && node->unk10 == NULL) {
            return node;
        }
        node = node->next;
    }
    return NULL;
}

void func_0202f63c(Node_0202f5fc *arg0) {
    void **p = &data_02160088;
    Node_0202f5fc *node = *(Node_0202f5fc **)p;
    while (node != NULL) {
        if (node->unk10 != NULL && node != arg0) {
            if (arg0->unk8 <= node->unk8) {
                arg0->unkc++;
            } else {
                node->unkc++;
            }
        }
        node = node->next;
    }
}
