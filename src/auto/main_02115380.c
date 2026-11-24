/* 35 functions from 0x02115380 to 0x02116350 (main), found by ds-decomp. */
#include "common.h"

extern void func_021167ac(void *, void *);
extern void *func_02116970(void *, void *);
extern void func_021168f8(void *, void *);
extern void func_02117250(void *, s32);
extern void func_0211566c(void);
extern u32 func_02009d2c(void);
extern void func_02009b24(s32);
extern void func_02009cc0(u32);
extern u8 *func_02114f80(void *);
extern u8 *func_02114fe4(void *);
extern s32 func_021157d0(u16, u32, void *, s32, void *);
extern void *func_02115a38(void *, void *, s32);
extern void *func_02115aa4(void *, void *, s32);
extern void *func_02115264(void *);
extern s32 func_02115770(void *, u32, void *, s32, void **);
extern s32 func_02115630(void *);
extern void *func_0211721c(void *, u32, u32);
extern void func_021167f0(void *, void *);
extern s32 func_021172b4(void *, u16);
extern void func_02117304(void *, u32);
extern u32 func_0211727c(void *, u32);
void func_02115380(void *arg0) {
    void *node;
    BOOL flag = FALSE;
    node = func_02116970((u8 *)arg0 + 4, NULL);
    while (node != NULL) {
        void *sub = func_02116970(node, NULL);
        while (sub != NULL) {
            void (*cb)(void *, u32, u32, u32) = *(void (**)(void *, u32, u32, u32))((u8 *)sub + 0xc);
            if (cb != NULL) {
                cb((u8 *)sub + 0x20, *(u32 *)((u8 *)sub + 8), *(u32 *)((u8 *)sub + 0x10), *(u32 *)((u8 *)sub + 0x14));
                flag = TRUE;
            }
            sub = func_02116970(node, sub);
        }
        func_021168f8((u8 *)arg0 + 4, node);
        node = func_02116970((u8 *)arg0 + 4, NULL);
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
    s32 ret;
    if (!func_021172b4(*(void **)arg0, *(u16 *)((u8 *)arg0 + 0xc))) {
        return -1;
    }
    ret = func_02115630(arg0);
    if (ret != 0) {
        return *(u16 *)((u8 *)arg0 + 0xc) - 1;
    }
    func_02117304(*(void **)arg0, ret);
    return ret - 1;
}

u32 func_021155c8(void *arg0) {
    u32 val = func_0211727c(*(void **)arg0, 0x20);
    if (val < 0x20) {
        return 0;
    }
    return (val - 0x20) & ~0x1f;
}

void func_021155ec(void *arg0) {
    func_021167ac(arg0, NULL);
}

s32 func_021155fc(void *arg0, void *arg1) {
    func_021167ac((u8 *)arg0 + 4, (void *)0xc);
    *(void **)arg0 = arg1;
    return func_02115630(arg0) != 0;
}

s32 func_02115630(void *arg0) {
    void *r4 = func_0211721c(*(void **)arg0, 0x14, 4);
    if (r4 == NULL) {
        return 0;
    }
    func_021155ec(r4);
    func_021167f0((u8 *)arg0 + 4, r4);
    return 1;
}

void func_0211566c(void) {
    u32 ret = func_02009d2c();
    func_02009b24(1);
    func_02009cc0(ret);
}

extern u32 func_02009d2c(void);
extern void func_02009b24(s32);
extern void func_02009cc0(u32);
extern u8 *func_02114f80(void *);
extern u8 *func_02114fe4(void *);
extern s32 func_021157d0(u16, u32, void *, s32, void *);
extern void *func_02115a38(void *, void *, s32);
extern void *func_02115aa4(void *, void *, s32);
extern s32 func_02115770(void *, u32, void *, s32, void **);
BOOL func_0211568c(void *arg0, void *arg1) {
    return func_02115770(arg0, 0xff, arg1, 1, NULL) == 0;
}

s32 func_021156ec(void *arg0, u32 arg1, void *arg2, s32 arg3, void **arg4) {
    u8 *p = func_02114f80(arg0);
    s32 ret;
    void *val;
    if (p == NULL) {
        return 2;
    }
    ret = func_021157d0(*(u16 *)(p + 4), arg1, arg2, arg3, NULL);
    if (ret != 0) {
        return ret;
    }
    if ((arg1 & 1) != 0) {
        val = func_02115a38(*(void **)p, arg2, arg3);
        if (val == NULL) {
            return 6;
        }
    } else {
        val = func_02115264(*(void **)p);
    }
    if (arg4 != NULL) {
        *arg4 = val;
    }
    return 0;
}

s32 func_02115770(void *arg0, u32 arg1, void *arg2, s32 arg3, void **arg4) {
    u8 *p = func_02114fe4(arg0);
    void *val;
    if (p == NULL) {
        return 3;
    }
    if ((arg1 & 8) != 0) {
        val = func_02115aa4(*(void **)p, arg2, arg3);
        if (val == NULL) {
            return 7;
        }
    } else {
        val = func_02115264(*(void **)p);
    }
    if (arg4 != NULL) {
        *arg4 = val;
    }
    return 0;
}

extern void *func_02115264(void *);
extern void *func_02114f70(void);
extern void *func_02115994(void *, void *, void *, void *, void *);
extern void func_0211528c(void *, void *);
extern void func_02115d68(void);
extern u32 func_0211727c(void *, u32);
void *func_02115a38(void *arg0, void *arg1, s32 arg2) {
    void *r4 = func_02115264(arg0);
    if (r4 == NULL) {
        r4 = func_02115994(arg0, func_02115d68, arg2 != 0 ? func_02114f70() : NULL, arg0, arg1);
        if (arg2 != 0 && r4 != NULL) {
            func_0211528c(arg0, r4);
        }
    }
    return r4;
}

void *func_02115aa4(void *arg0, void *arg1, s32 arg2) {
    void *r4 = func_02115264(arg0);
    if (r4 == NULL) {
        r4 = func_02115994(arg0, func_02115d68, arg2 != 0 ? func_02114f70() : NULL, arg0, arg1);
        if (arg2 != 0 && r4 != NULL) {
            func_0211528c(arg0, r4);
        }
    }
    return r4;
}

extern void func_02115d90(void);
void *func_02115b10(void *arg0, void *arg1, s32 arg2) {
    void *r4 = func_02115264(arg0);
    if (r4 == NULL) {
        r4 = func_02115994(arg0, func_02115d90, arg2 != 0 ? func_02114f70() : NULL, arg0, arg1);
        if (arg2 != 0 && r4 != NULL) {
            func_0211528c(arg0, r4);
        }
    }
    return r4;
}

extern void func_02115dc0(void);
void *func_02115b7c(void *arg0, void *arg1, s32 arg2) {
    void *r4 = func_02115264(arg0);
    if (r4 == NULL) {
        r4 = func_02115994(arg0, func_02115dc0, arg2 != 0 ? func_02114f70() : NULL, arg0, arg1);
        if (arg2 != 0 && r4 != NULL) {
            func_0211528c(arg0, r4);
        }
    }
    return r4;
}

