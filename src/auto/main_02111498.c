/* 45 functions from 0x02111498 to 0x0211242C (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u8 pad[0x6c];
    void *field;
} MainSub_6C;

extern void func_0210c5dc(void *);
extern s32 func_020c9490(void *);
extern void func_020c9940(void *);
extern void func_02111ccc(u8 *);
extern void *func_020c9c10(void *, u32);
extern void func_020c7930(void *);
extern void func_020c6d78(void *);
extern void *func_020c641c(s32);
extern void func_020c992c(void *);
extern void *func_0210c594(s32, u32);
extern void func_021167ac(void *, s32);
extern u32 data_02155c3c;
extern void func_020c9a04(void *);
extern u32 func_020c9c34(void *);
extern u8 *func_020c9b24(void *, u16, u8);
extern u16 func_020c94a8(void *);
extern void func_02111374(u8 *, u8 *);
extern void func_021118bc(u8 *);
extern u16 func_020c94a0(u8 *);
extern u8 *func_02111d7c(void *, u32);
extern s32 func_020c7408(u8 *);
extern void func_020c9bb8(void *);
extern void func_0211078c(void *);
extern void func_020c9940(void *);
extern void func_02111728(void *);
extern u16 func_02111d10(u8 *);
extern void func_020c98f8(void *);
void func_02111594(void) {
}

extern void func_020c7090(void *);
void func_02111598(void *arg0) {
    func_020c7090(func_020c9c10(*(void **)((u8 *)arg0 + 0x30), 0));
}

void func_021115b0(u8 *arg0, u32 arg1) {
    *(u16 *)(arg0 + 0x3c) = (u8)arg1;
}

void func_021115bc(u8 *arg0, u16 arg1) {
    int result = 0;
    void *p = func_020c9c10(*(void **)(arg0 + 0x30), 0);
    result |= (*(u16 *)((u8 *)p + 0x30) != arg1);
    *(u16 *)((u8 *)p + 0x30) = arg1;
    if (result) {
        func_020c7930(p);
    }
}

void func_021115f8(u8 *arg0, u32 arg1, u16 arg2) {
    void *p = func_020c9c10(*(void **)(arg0 + 0x30), arg1);
    int result = 0;
    result |= (*(u16 *)((u8 *)p + 0x30) != arg2);
    *(u16 *)((u8 *)p + 0x30) = arg2;
    if (result) {
        func_020c7930(p);
    }
}

u32 func_02111630(u32 *arg) {
    return arg[0x10];
}

void func_02111638(u8 *arg0) {
    *(u32 *)(arg0 + 0x40) = 1;
    arg0[0x44] = 4;
}

void func_0211164c(u8 *arg0) {
    if (*(u32 *)(arg0 + 0x40) == 0) {
        return;
    }
    arg0[0x44] -= 1;
    if (arg0[0x44] == 0) {
        *(u32 *)(arg0 + 0x40) = 0;
    }
}

s32 func_02111674(u8 *arg0) {
    func_020c6d78(arg0);
    if (*(void **)(arg0 + 0x30) == NULL) {
        void *p = func_0210c594(8, data_02155c3c);
        *(void **)(arg0 + 0x30) = p;
        func_020c992c(p);
    }
    if (*(void **)(arg0 + 0x6c) == NULL) {
        void *p = func_020c641c(0x14);
        *(void **)(arg0 + 0x6c) = p;
        ((void (*)(void *))*(void **)p)(p);
    }
    if (*(void **)(arg0 + 0x34) == NULL) {
        void *p = func_0210c594(8, data_02155c3c);
        *(void **)(arg0 + 0x34) = p;
        func_020c992c(p);
    }
    arg0[0x72] = 0xb;
    func_021167ac(arg0 + 0x38, 0xc);
    return 0;
}

void func_02111708(void *arg0) {
    func_02111728(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_02111728(void *arg0) {
    u8 *p = (u8 *)arg0;
    if (*(void **)(p + 0x30) != NULL) {
        func_020c9940(*(void **)(p + 0x30));
        if (*(void **)(p + 0x30) != NULL) {
            func_0210c5dc(*(void **)(p + 0x30));
            *(void **)(p + 0x30) = NULL;
        }
        *(void **)(p + 0x30) = NULL;
    }
    if (*(u8 **)(p + 0x6c) != NULL) {
        (*(void (**)(void *))(*(u8 **)(p + 0x6c) + 4))(*(void **)(p + 0x6c));
    }
    if (*(void **)(p + 0x34) != NULL) {
        func_020c9940(*(void **)(p + 0x34));
        if (*(void **)(p + 0x34) != NULL) {
            func_0210c5dc(*(void **)(p + 0x34));
            *(void **)(p + 0x34) = NULL;
        }
        *(void **)(p + 0x34) = NULL;
    }
    func_02111ccc(p);
}

extern void func_020c9b64(void *);
extern void func_02111ad8(u8 *);
extern void func_02111bf0(u8 *);
extern void func_02111ff0(u8 *);
s32 func_021117b0(u8 *arg0) {
    func_020c9b64(*(void **)(arg0 + 0x30));
    func_020c9b64(*(void **)(arg0 + 0x34));
    (*(void (**)(void *))(*(u8 **)(arg0 + 0x6c) + 8))(*(void **)(arg0 + 0x6c));
    return 0;
}

s32 func_021117dc(u8 *arg0) {
    arg0[0x75] = 0;
    (*(void (**)(void *))(*(u8 **)(arg0 + 0x6c) + 0xc))(*(void **)(arg0 + 0x6c));
    func_02111ad8(arg0);
    func_02111bf0(arg0);
    if (func_020c9490(*(void **)(arg0 + 0x6c)) != 0) {
        func_02111ff0(arg0);
    }
    return 0;
}

void func_02111828(u8 *arg0) {
    u16 i;
    u32 count;
    func_020c9a04(*(void **)(arg0 + 0x34));
    count = func_020c9c34(*(void **)(arg0 + 0x34));
    for (i = 0; i < count; i++) {
        if (func_020c9c10(*(void **)(arg0 + 0x34), i) == NULL) {
            u8 *obj = func_020c9b24(*(void **)(arg0 + 0x34), i, arg0[0x72]);
            *(u16 *)(obj + 0x3a) = i + func_020c94a8(*(void **)(arg0 + 0x6c));
            func_02111374(obj, arg0);
            ((void (*)(u8 *))*(void **)(obj + 0x50))(obj);
        }
    }
    func_021118bc(arg0);
}

void func_021118bc(u8 *arg0) {
    u16 i;
    u32 count = func_020c9c34(*(void **)(arg0 + 0x34));
    for (i = 0; i < count; i++) {
        u8 *obj = func_020c9c10(*(void **)(arg0 + 0x34), i);
        ((void (*)(u8 *, s16))*(void **)(obj + 0x10))(obj, *(s16 *)(arg0 + 0x44));
        ((void (*)(u8 *, s16))*(void **)(obj + 0x14))(obj, (s16)(i * 0x13 + *(s16 *)(arg0 + 0x46)));
    }
}

extern void func_0211192c(u8 *, s32, s32);
void func_02111a18(u8 *arg0, s32 arg1) {
    func_0211192c(arg0, arg1, *(s16 *)(arg0 + 0x46));
}

extern void func_020c9940(void *);
extern void func_02111ccc(u8 *);
void func_02111a28(u8 *arg0, s32 arg1) {
    func_0211192c(arg0, *(s16 *)(arg0 + 0x44), arg1);
}

void func_02111a3c(u8 *arg0, u8 arg1) {
    u32 count = func_020c9c34(*(void **)(arg0 + 0x34));
    u16 i;
    u8 *obj;

    for (i = 0; i < count; i++) {
        obj = func_020c9c10(*(void **)(arg0 + 0x34), i);
        ((void (*)(u8 *, u8))*(void **)(obj + 0x1c))(obj, (u8)(arg1 + (obj[0x38] - arg0[0x48])));
    }
    obj = *(u8 **)(arg0 + 0x6c);
    ((void (*)(u8 *, u8))*(void **)(obj + 0x1c))(obj, (u8)(arg1 + (obj[0x38] - arg0[0x48])));
    arg0[0x48] = arg1;
}

void func_02111ac0(u8 *arg0, u16 arg1, u16 arg2, u16 arg3, u16 arg4) {
    *(u16 *)(arg0 + 0x4e) = arg1;
    *(u16 *)(arg0 + 0x50) = arg3;
    *(u16 *)(arg0 + 0x4a) = arg2;
    *(u16 *)(arg0 + 0x4c) = arg4;
}

void func_02111ccc(u8 *arg0) {
    u8 *node = *(u8 **)(arg0 + 0x38);
    while (node != NULL) {
        u8 *next = *(u8 **)(node + 0x10);
        func_021168f8(arg0 + 0x38, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
        node = next;
    }
}

u16 func_02111d10(u8 *arg0) {
    u16 count = 0;
    u8 *node = *(u8 **)(arg0 + 0x38);
    if (node == NULL) {
        return 0;
    }
    do {
        count++;
        node = *(u8 **)(node + 0x10);
    } while (node != NULL);
    return count;
}

void *func_02111d3c(u8 *arg0) {
    u16 count = func_02111d10(arg0);
    u16 *node = func_0210c594(0x14, data_02155c3c);
    *node = count;
    func_021167f0(arg0 + 0x38, node);
    return node;
}

u8 *func_02111d7c(void *arg0, u32 arg1) {
    u8 *node = *(u8 **)((u8 *)arg0 + 0x38);
    if (node != NULL) {
        do {
            if (*(u16 *)node == arg1) {
                return node;
            }
            node = *(u8 **)(node + 0x10);
        } while (node != NULL);
    }
    return NULL;
}

s32 func_02111da8(u8 *arg0) {
    return *(s32 *)(arg0 + 0x38);
}

void func_02111db0(u8 *arg0, u32 arg1, u32 arg2) {
    *(u32 *)(arg0 + 0x78 + (arg2 << 2)) = arg1;
}

u32 func_02111dbc(u8 *arg0, u32 arg1) {
    return *(u32 *)(arg0 + 0x78 + (arg1 << 2));
}

void func_02111ff0(u8 *arg0) {
    u32 count = func_020c9c34(*(void **)(arg0 + 0x34));
    u16 i;
    for (i = 0; i < count; i++) {
        u8 *obj = func_020c9c10(*(void **)(arg0 + 0x34), i);
        ((void (*)(u8 *))(*(void **)(obj + 0x4c)))(obj);
    }
}

void func_02112038(MainSub_6C *arg0) {
    func_020c9490(arg0->field);
}

void func_02112048(u8 *arg0) {
    func_02111d7c(arg0, func_020c94a0(*(u8 **)(arg0 + 0x6c)));
}

extern void func_020c8ee4(void *);
void func_02112094(MainSub_6C *arg0) {
    func_020c8ee4(arg0->field);
}

u8 func_021120a4(u8 *arg) {
    return arg[0x75];
}

extern void func_021121b8(void *);
void func_02112198(void *arg0) {
    func_021121b8(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

extern s32 func_021117b0(u8 *);
extern u16 func_02111d10(u8 *);
extern void func_020c98f8(void *);
s32 func_02112214(u8 *arg0) {
    func_021117b0(arg0);
    func_020c9b64(*(void **)(arg0 + 0x8c));
    (*(void (**)(void *))(*(u8 **)(arg0 + 0x90) + 8))(*(void **)(arg0 + 0x90));
    return 0;
}

s32 func_0211223c(u8 *arg0) {
    if (func_020c7408(arg0)) {
        return 1;
    }
    func_021117dc(arg0);
    func_020c9bb8(*(void **)(arg0 + 0x8c));
    u8 *obj = *(u8 **)(arg0 + 0x90);
    ((void (*)(u8 *))*(void **)(obj + 0xc))(obj);
    return 0;
}

