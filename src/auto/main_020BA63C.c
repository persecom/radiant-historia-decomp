/* 28 functions from 0x020BA63C to 0x020BB558 (main), found by ds-decomp. */
#include "common.h"

extern void func_02110b94(void *);
extern void func_02110d94(void *);
extern void func_020ba9c4(u8 *);
extern void func_020baae0(u8 *);
extern u8 *func_020c9b24(void *, u32, u32);
extern void func_020babe8(void);
extern void func_020ba948(u8 *);
extern void func_020baa74(u8 *);
extern void func_020c4c60(void *, s32);
extern void func_0211137c(void *, void *);
extern u8 *func_02111d7c(void *, u32);
extern void *func_02022068(u32);
extern void func_020a98a0(void *);
extern void func_020a9544(void *);
extern void func_0210c5dc(void *);
extern void func_020a9610(void *, void *, void *, void *, s32, s32);
extern void *func_020c9c10(void *, u32);
extern void func_020c738c(void *, u32, u32);
extern void **data_021601ec;
extern void *func_020c8b10(void);
extern void func_020c7894(void *);
extern u16 data_02143954[];
extern void func_020c52c0(void);
extern u8 data_021601f0;
extern u32 data_02162868;
extern u32 data_0216bf84;
extern void func_020bb558(u8 *);
extern void func_020c83f4(u8 *, s32, s32, s32);
extern void func_020c8640(u8 *, u32);
extern void func_020c4e00(void *, u32);
extern void func_020c4fa4(void *);
extern void func_0210968c(u32, u32, u32);
extern void func_02109790(u32);
extern void func_02108e54(u32);
extern void func_020bad3c(void);
extern void func_020baeb0(void);
extern void func_0210dc88(void);
void func_020ba63c(u32 arg0) {
    void *root = *data_021601ec;
    void *obj5 = func_020c9c10(*(void **)((u8 *)root + 0x4c), 5);
    void *obj6 = func_020c9c10(*(void **)((u8 *)root + 0x4c), 6);
    void *obj4;
    if (arg0 != 0) {
        func_020c738c(obj5, 0, 1);
    } else {
        func_020c738c(obj6, 0, 1);
        func_020c738c(obj5, 1, 1);
    }
    obj4 = func_020c9c10(*(void **)((u8 *)root + 0x4c), 4);
    *(u16 *)((u8 *)obj4 + 0x32) = 0;
    *(u16 *)((u8 *)obj4 + 0x34) = (arg0 == 0) ? 0xb : 0;
}

void func_020ba6d0(u32 arg0) {
    u16 vals[6];
    void *root = *data_021601ec;
    void *obj, *obj2;
    s16 v;
    vals[0] = data_02143954[0];
    vals[1] = data_02143954[1];
    vals[2] = data_02143954[2];
    vals[3] = data_02143954[3];
    vals[4] = data_02143954[4];
    vals[5] = data_02143954[5];
    obj = func_020c9c10(*(void **)((u8 *)root + 0x4c), 0xe);
    obj2 = func_020c8b10();
    *(u16 *)((u8 *)obj2 + 0x32) = 0;
    *(u16 *)((u8 *)obj2 + 0x34) = arg0 * 13;
    v = ((s16 *)vals)[arg0];
    *(u16 *)((u8 *)obj + 0x3e) = v + 0xc;
    *(u16 *)((u8 *)obj + 0x32) = 0;
    *(u16 *)((u8 *)obj + 0x34) = 0;
    *(u16 *)((u8 *)obj + 0x36) = 0x20;
    *(u16 *)((u8 *)obj + 0x38) = 0x11;
    *(u16 *)((u8 *)obj + 0x40) = 0x11;
    func_020c7894(obj);
}

s32 func_020ba78c(u8 *arg0) {
    u8 *obj;
    func_02110b94(arg0);
    *(void **)(arg0 + 0x4c) = (void *)func_020ba948;
    *(void **)(arg0 + 0x50) = (void *)func_020baa74;
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 0);
    *(u16 *)(obj + 0x3e) = 0x87;
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 3);
    *(u16 *)(obj + 0x3e) = 0x87;
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 2);
    ((void (*)(u8 *, s32))(*(void **)(obj + 0x10)))(obj, 0x23);
    return 0;
}

s32 func_020ba7f8(u8 *arg0) {
    u8 *obj;
    func_02110b94(arg0);
    *(void **)(arg0 + 0x4c) = (void *)func_020ba9c4;
    *(void **)(arg0 + 0x50) = (void *)func_020baae0;
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 0);
    *(u16 *)(obj + 0x3e) = 0x96;
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 3);
    *(u16 *)(obj + 0x3e) = 0x96;
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 2);
    ((void (*)(u8 *, s32))(*(void **)(obj + 0x10)))(obj, 0x1b);
    ((void (*)(u8 *, s32))(*(void **)(obj + 0x14)))(obj, 1);
    return 0;
}

void func_020ba878(u8 *arg0, u32 arg1) {
    u8 *sub = *(u8 **)(arg0 + 0x48);
    BOOL flag = 1;
    u8 *obj = func_020c9b24(*(void **)(arg0 + 0x30), 4, 2);
    *(u32 *)(obj + 0x4c) = arg1;
    obj[0x50] = flag;
    if (sub[0x74] & 1) {
        flag = 0;
    }
    func_020c738c(obj, !flag, 1);
}

void func_020ba8c4(u8 *arg0, u32 arg1) {
    u8 *sub = *(u8 **)(arg0 + 0x48);
    BOOL flag = 1;
    u8 *obj = func_020c9b24(*(void **)(arg0 + 0x30), 4, 2);
    *(u32 *)(obj + 0x4c) = arg1;
    obj[0x50] = flag;
    if (sub[0x74] & 1) {
        flag = 0;
    }
    func_020c738c(obj, !flag, 1);
    obj = func_020c9b24(*(void **)(arg0 + 0x30), 5, 1);
    if (sub[0x74] & 1) {
        flag = 0;
    }
    func_020c738c(obj, !flag, 1);
}

void func_020ba948(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 0x48);
    u8 *r6 = p + 0x30;
    s32 r7 = 0;
    u8 *r4;
    u8 *obj;
    func_0211137c(arg0, p);
    r4 = func_02111d7c(*(void **)(arg0 + 0x48), *(u16 *)(arg0 + 0x3a));
    if (r4 != NULL && (*(u8 *)(r4 + 6) & 1)) {
        r7 = 1;
    }
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 4);
    *(u16 *)(obj + 0x30) = (*(u16 *)(arg0 + 0x3c) != 0) ? *(u16 *)(r6 + r7 * 2 + 0x26) : *(u16 *)(r6 + r7 * 2 + 0x22);
    if (r4 != NULL) {
        func_020ba878(arg0, func_02022068(*(u16 *)(r4 + 2)));
    }
}

void func_020ba9c4(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 0x48);
    u8 *r4 = p + 0x30;
    s32 r6 = 0;
    u8 *r5;
    u8 *obj;
    func_0211137c(arg0, p);
    r5 = func_02111d7c(*(void **)(arg0 + 0x48), *(u16 *)(arg0 + 0x3a));
    if (r5 != NULL && (*(u8 *)(r5 + 6) & 1)) {
        r6 = 1;
    }
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 4);
    if (*(u16 *)(arg0 + 0x3c) != 0) {
        *(u16 *)(obj + 0x30) = ((u16 *)(r4 + 0x26))[r6];
    } else {
        *(u16 *)(obj + 0x30) = ((u16 *)(r4 + 0x22))[r6];
    }
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 5);
    if (*(u16 *)(arg0 + 0x3c) != 0) {
        *(u16 *)(obj + 0x30) = ((u16 *)(r4 + 0x26))[r6];
    } else {
        *(u16 *)(obj + 0x30) = ((u16 *)(r4 + 0x22))[r6];
    }
    if (r5 != NULL) {
        void *r1;
        if (*(u8 *)(r5 + 6) & 4) {
            r1 = *(void **)(r5 + 8);
        } else {
            r1 = func_02022068(*(u16 *)(r5 + 2));
        }
        func_020ba8c4(arg0, r1);
    }
}

void func_020baa74(u8 *arg0) {
    u8 *r4 = func_020c9b24(*(void **)(arg0 + 0x30), 4, 2);
    *(u16 *)(r4 + 0x32) = 0;
    *(u16 *)(r4 + 0x34) = 0;
    *(u16 *)(r4 + 0x36) = 7;
    *(u16 *)(r4 + 0x38) = 8;
    *(u16 *)(r4 + 0x3e) = 7;
    *(u16 *)(r4 + 0x40) = 8;
    *(u8 *)(r4 + 0x43) += 1;
    ((void (*)(u8 *, s32))(*(void **)(r4 + 0x10)))(r4, 0x1b);
    ((void (*)(u8 *, s32))(*(void **)(r4 + 0x14)))(r4, 2);
}

s32 func_020baba8(u8 *arg0) {
    func_02110b94(arg0);
    *(void **)(arg0 + 0x4c) = (void *)func_020babe8;
    return 0;
}

s32 func_020babc8(u8 *arg0) {
    func_02110d94(arg0);
    *(void **)(arg0 + 0x4c) = (void *)func_020babe8;
    return 0;
}

void func_020babe8(void) {
}

void func_020babec(u8 *arg0, u32 arg1, u8 *arg2) {
    u8 *obj = func_020c9c10(*(void **)(arg0 + 0x30), 2);
    func_020c8640(obj, 0x16);
    func_020c83f4(obj, arg1, *(u16 *)(arg2 + 2), 0);
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 1);
    if (arg2 != NULL) {
        func_020c738c(obj, 0, 1);
        *(u16 *)(obj + 0x4c) = *(u16 *)(arg2 + 2);
    } else {
        func_020c738c(obj, 1, 1);
    }
}

void func_020bac70(u8 arg0) {
    data_021601f0 = arg0;
}

s32 func_020bac80(void) {
    data_02162868 = 1;
    data_0216bf84 = 0;
    func_0210968c(3, 16, 1);
    func_02108e54(0);
    func_02108e54(1);
    func_020bad3c();
    func_0210968c(3, 0, 30);
    func_02109790(3);
    for (;;) {
        u8 *obj = *(u8 **)((u8 *)&data_021601f0 + 4);
        if (*(u32 *)(obj + 0x48) != 0) {
            break;
        }
        func_0210dc88();
    }
    func_0210968c(3, -16, 30);
    func_02109790(3);
    func_020baeb0();
    func_0210dc88();
    data_02162868 = 0;
    return 2;
}

void func_020bafb4(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_020bafdc(void) {
    func_020c52c0();
}

void func_020bafe8(void) {
    u8 *p = *(u8 **)(&data_021601f0 + 4);
    func_020c4c60(*(void **)(p + 0x3c), 10);
}

void func_020bb008(void) {
    func_020c4e00(*(void **)(*(u8 **)((u8 *)&data_021601f0 + 4) + 0x3c), 10);
    func_020c4fa4(*(void **)(*(u8 **)((u8 *)&data_021601f0 + 4) + 0x40));
}

void func_020bb234(u8 *arg0) {
    u16 i;
    if (arg0 == NULL) {
        return;
    }
    for (i = 0; i < 3; i++) {
        void *obj;
        func_020a98a0(arg0 + 0x18 + i * 0x34);
        func_020a9544(((void **)(arg0 + 0xc))[i]);
        obj = ((void **)arg0)[i];
        ((void (*)(void *))(*(void **)((u8 *)obj + 0xc)))(obj);
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020bb294(u8 *arg0, s32 arg1) {
    func_020a9610(arg0 + 0xb4 + arg1 * 0x18, ((void **)(arg0 + 0xc))[arg1], ((void **)(arg0 + 0xfc))[arg1], ((void **)arg0)[arg1], 0, 0);
}

void func_020bb508(u8 *arg0) {
    if (arg0 == NULL) {
        return;
    }
    if (*(u32 *)(arg0 + 0x108) & 1) {
        func_020bb558(arg0);
    }
}

extern void func_020bbb1c(void);
extern void func_020bbc24(void);
extern void func_020a98a0(void *);
extern void func_020a9544(void *);
extern void func_0210c5dc(void *);
extern void func_020a9610(void *, void *, void *, void *, s32, s32);
void func_020bb528(u8 *arg0) {
    if (arg0 == NULL) {
        return;
    }
    if (*(u32 *)(arg0 + 0x108) & 0x10) {
        func_020bbb1c();
    }
    if (*(u32 *)(arg0 + 0x108) & 0x20) {
        func_020bbc24();
    }
}

