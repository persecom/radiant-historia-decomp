/* 35 functions from 0x02115380 to 0x02116350 (main), found by ds-decomp. */
#include "common.h"

extern void func_021167ac(void *, void *);
extern void *func_02116970(void *, void *);
extern void func_021168f8(void *, void *);
extern void func_02117250(void *, s32);
extern void func_0211566c(void);
extern s32 func_02115630(void *);
extern void *func_0211721c(void *, u32, u32);
extern void func_021167f0(void *, void *);
extern s32 func_021172b4(void *, u16);
extern void func_02117304(void *, u32);
void func_02115380(void *arg0) {
    void *node;
    void *sub;
    BOOL flag = FALSE;
    while ((node = func_02116970((u8 *)arg0 + 4, NULL)) != NULL) {
        sub = func_02116970(node, NULL);
        while (sub != NULL) {
            void (*cb)(void *, u32, u32, u32) = *(void (**)(void *, u32, u32, u32))((u8 *)sub + 0xc);
            if (cb != NULL) {
                cb((u8 *)sub + 0x20, *(u32 *)((u8 *)sub + 8), *(u32 *)((u8 *)sub + 0x10), *(u32 *)((u8 *)sub + 0x14));
                flag = TRUE;
            }
            sub = func_02116970(node, sub);
        }
        func_021168f8((u8 *)arg0 + 4, node);
    }
    func_02117250(*(void **)arg0, 3);
    if (flag) {
        func_0211566c();
    }
    func_02115630(arg0);
}

void *func_0211543c(void *arg0, u32 arg1, void *arg2, u32 arg3, u32 arg4) {
    void *buf = func_0211721c(*(void **)arg0, ((arg1 + 0x1f) & ~0x1f) + 0x20, 0x20);
    void *head;
    if (buf == NULL) {
        return NULL;
    }
    head = func_02116970((u8 *)arg0 + 4, NULL);
    *(u32 *)((u8 *)buf + 8) = arg1;
    *(void **)((u8 *)buf + 0xc) = arg2;
    *(u32 *)((u8 *)buf + 0x10) = arg3;
    *(u32 *)((u8 *)buf + 0x14) = arg4;
    func_021167f0(head, buf);
    return (u8 *)buf + 0x20;
}

s32 func_021154a4(void *arg0) {
    if (!func_021172b4(*(void **)arg0, *(u16 *)((u8 *)arg0 + 0xc))) {
        return -1;
    }
    if (func_02115630(arg0)) {
        return *(u16 *)((u8 *)arg0 + 0xc) - 1;
    }
    func_02117304(*(void **)arg0, 0);
    return -1;
}

void func_021155ec(void *arg0) {
    func_021167ac(arg0, NULL);
}
