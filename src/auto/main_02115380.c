/* 35 functions from 0x02115380 to 0x02116350 (main), found by ds-decomp. */
#include "common.h"

extern s32 func_02116140(u32, u8, u16, u8, void *, u32);
extern void *func_021166c8(void *, u32);
extern s32 func_02116244(u32, u8, u16, u8, void *, void *, u32, u32);

typedef union UnkBits24 {
    u32 all;
    u32 bits : 24;
} UnkBits24;

extern void func_02115d90(void *, s32, s32, s32);
extern void func_02115d10(void *, s32, s32);
extern void func_02009740(void *, void *);
extern void func_0200a248(void *);
extern u8 *func_021150ac(void *);
extern void *func_02115be8(void *, void *, s32);
extern void *func_02115b7c(void *, void *, s32);
extern u8 *func_02115174(void *);
extern void *func_0211519c(void *, void *, void *, void *);
extern void func_02006da8(void *, void *);
extern u32 func_02008128(void);
extern void func_0200813c(u32);
extern void *func_02114f58(void *);

extern void func_021167ac(void *, void *);
extern void *func_02116970(void *, void *);
extern void func_021168f8(void *, void *);
extern void func_02117250(void *, s32);
extern void func_0211566c(void);
extern void func_02115d10(void *, s32, s32);
extern void func_02009720(void *, void *);
extern void func_02009760(void *, void *);
extern void func_0200a2e0(void *);
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

typedef struct {
    u8 pad[0x118];
    s32 flag : 1;
    u8 pad2[0x60];
} Unk_0216cb40;

extern Unk_0216cb40 data_0216cb40[4];
extern void func_02116488(Unk_0216cb40 *, s32);
extern s32 func_0200a530(void *, s32);
extern void func_0200a4fc(void *, s32, s32);
extern void func_0200a328(void *);
extern s32 func_0200a348(void *, void *, void *);
extern s32 func_02115e58(s32, u16, s32, s32);
extern void *func_02114f70(void);
extern void *func_02115110(s32);
extern void func_02113a9c(s32, u8);
extern void func_02113abc(s32, u16);
extern s32 func_02113ad4(s32, void *, void *);

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

BOOL func_021156bc(u16 arg0, void *arg1) {
    return func_021157d0(arg0, 0xff, arg1, 1, NULL) == 0;
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

s32 func_02115910(void *arg0, u32 arg1, void *arg2, s32 arg3, void **arg4) {
    u8 *p = func_021150ac(arg0);
    u32 v;
    void *val;
    if (p == NULL) {
        return 5;
    }
    v = *(u32 *)p;
    if ((arg1 & 4) != 0) {
        if (((v >> 24) & 1) != 0) {
            val = func_02115be8((void *)((v << 8) >> 8), arg2, arg3);
        } else {
            val = func_02115b7c((void *)((v << 8) >> 8), arg2, arg3);
        }
        if (val == NULL) {
            return 9;
        }
    } else {
        val = func_02115264((void *)((v << 8) >> 8));
    }
    if (arg4 != NULL) {
        *arg4 = val;
    }
    return 0;
}

void *func_02115994(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    void *p;
    void *buf;
    void *q;
    p = func_02115174(arg0);
    if (p == NULL) {
        return NULL;
    }
    if (arg4 == NULL) {
        return NULL;
    }
    q = (u8 *)p + 0x20;
    buf = func_0211543c(p, (u32)q, arg1, (u32)arg2, (u32)arg3);
    if (buf == NULL) {
        return NULL;
    }
    if (func_0211519c(arg0, buf, p, NULL) != p) {
        return NULL;
    }
    func_02006da8(buf, p);
    return buf;
}

extern void *func_02115264(void *);
extern void *func_02114f70(void);
extern void *func_02115994(void *, void *, void *, void *, void *);
extern void func_0211528c(void *, void *);
extern void func_02115d68(void *, s32, s32, s32);
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

extern void func_02115d90(void *, s32, s32, s32);
extern void func_02115d10(void *, s32, s32);
extern void func_02009740(void *, void *);
extern void func_0200a248(void *);
extern u8 *func_021150ac(void *);
extern void *func_02115be8(void *, void *, s32);
extern u8 *func_02115174(void *);
extern void *func_0211519c(void *, void *, void *, void *);
extern void func_02006da8(void *, void *);
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

extern void func_02115dc0(void *, s32, s32, s32);
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

#pragma peephole off
void func_02115d10(void *arg0, s32 arg1, s32 arg2) {
    void *r5;
    void *r4;
    if (arg1 == 0) {
        return;
    }
    r5 = (void *)func_02008128();
    r4 = func_02114f58((void *)arg1);
    if (arg0 == func_02115264((void *)arg2)) {
        func_0211528c((void *)arg2, NULL);
        func_02114f58(r4);
    }
    func_0200813c((u32)r5);
}
#pragma peephole on
void func_02115d68(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02115d10(arg0, arg2, arg3);
    func_02009720(arg0, (u8 *)arg0 + arg1);
}

void func_02115d90(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02115d10(arg0, arg2, arg3);
    func_02009740(arg0, (u8 *)arg0 + arg1);
    func_0200a248(arg0);
}

void func_02115dc0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02115d10(arg0, arg2, arg3);
    func_02009760(arg0, (u8 *)arg0 + arg1);
    func_0200a2e0(arg0);
}

void func_02115df0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02115d10(arg0, arg2, arg3);
    func_0200a2e0(arg0);
}

void func_02115e10(s32 arg0, s32 arg1, void *arg2, s32 arg3) {
    if (func_0200a530(arg2, arg3) != arg0) {
        return;
    }
    func_0200a4fc(arg2, arg3, 0);
    func_02009760((void *)arg0, (void *)(arg0 + arg1));
}

s32 func_02115f20(s32 arg0, void *arg1, u16 arg2, s32 arg3, s32 arg4) {
    u32 a[2];
    u32 b[2];
    u8 c[0xc];
    func_0200a328(a);
    b[0] = a[1];
    b[1] = a[0];
    if (arg1 == NULL) {
        return 0;
    }
    for (;;) {
        if (func_0200a348(arg1, c, b) == 0) {
            return 0;
        }
        if (c[0] == 1 && *(u16 *)(c + 4) == arg2) {
            if (func_02115e58(arg0, *(u16 *)(c + 2), arg3, arg4) == 0) {
                return 0;
            }
        }
        if (func_0200a348(arg1, c, b) == 0) {
            return 1;
        }
    }
}

s32 func_02115fe0(void *arg0) {
    s32 i;
    s32 j;
    func_02114f70();
    for (i = 0; i < 0x20; i++) {
        u8 *p = (u8 *)func_02115110(i);
        if (p == NULL) {
            return 0;
        }
        func_02113a9c(i, p[0]);
        func_02113abc(i, *(u16 *)(p + 2));
        if (*(u32 *)(p + 4) == 0 || arg0 == NULL || p[0] == 0) {
            return 0;
        }
        for (j = 0; j < p[0]; j++) {
            if (func_02113ad4(i, arg0, *(void **)(p + 4)) == 0) {
                return 0;
            }
        }
    }
    return 1;
}

s32 func_02116078(u32 arg0, u32 arg1) {
    u8 *p = func_02114f80((void *)arg1);
    if (p == NULL) return 0;
    return func_02116140(arg0, p[9], *(u16 *)(p + 4), p[8], p, arg1);
}

s32 func_021160c0(u32 arg0, u32 arg1, u32 arg2) {
    u8 *p = func_02114fe4((void *)arg1);
    if (p == NULL) return 0;
    void *q = func_02115264(*(void **)p);
    if (q == NULL) return 0;
    u8 *r = func_021166c8(q, arg2);
    if (r == NULL) return 0;
    return func_02116244(arg0, r[9], *(u16 *)(r + 4), r[8], r, q, arg1, arg2);
}

void func_0211630c(s32 arg0) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (data_0216cb40[i].flag) {
            func_02116488(&data_0216cb40[i], arg0);
        }
    }
}

