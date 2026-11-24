/* 29 functions from 0x0210B7A4 to 0x0210C6E0 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_02162618[];
extern u8 data_02162624[];
extern void func_02116844(void *, s32);
extern void func_021168f8(void *, void *);
extern void func_0210b4cc(void *);
extern void func_0210c5dc(void *);
extern void func_0210b860(void **);
extern void func_0210db10(void *, void *, u32);
extern void *data_02162638;
extern u32 data_02155c2c;
extern u32 data_02162648[];
extern u8 data_02144b94[];
extern u32 func_02007008(u32);
extern u32 func_02006ff4(u32);
extern u32 func_020071c8(u32, u32, u32);
extern u32 func_02116fd0(u32, u32, u32);
extern void func_0211748c(u32 *, u32, u32);
extern void *func_0210c518(u32, s32);
extern void func_02002c2c(void);
extern void func_02002dc0(void);
extern void func_02120800(void);

void func_0210b7a4(void) {
    void *p = *(void **)data_02162618;
    void *cur = NULL;
    void *q;
    u16 off;
    u16 flag;
    if (p != NULL) {
        off = *(u16 *)(data_02162618 + 0xa);
        if (off != 0) q = *(void **)((u8 *)p + off + 4);
        else q = p;
        flag = *(u16 *)((u8 *)*(void **)p + 0x1a4);
        if (flag & 0x100) {
            func_0210b860(q);
            cur = q;
        }
    }
    while (cur != NULL) {
        p = cur;
        flag = *(u16 *)((u8 *)p + 0x1a4);
        if ((flag & 0x8000) && *(void **)((u8 *)p + 0x1a8) != NULL) {
            ((void (*)(void *))(*(void **)((u8 *)p + 0x1a8)))(p);
        }
        off = *(u16 *)(data_02162618 + 0xa);
        if (off != 0) cur = *(void **)((u8 *)p + off + 4);
        else cur = p;
    }
}

void func_0210b848(s32 arg0) {
    func_02116844(data_02162618, arg0);
}

void func_0210b860(void **arg0) {
    func_021168f8(data_02162618, arg0);
    func_0210b4cc(*arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_0210b894(void) {
    void *p = *(void **)data_02162618;
    void *q;
    u16 off;
    if (p == NULL) goto done;
    off = *(u16 *)(data_02162618 + 0xa);
    if (off != 0) {
        q = *(void **)((u8 *)p + off + 4);
    } else {
        q = p;
    }
    func_0210b860(p);
    if (q != NULL) goto done;
    if (*(void **)(data_02162618 + 0xc) == NULL) goto done;
    *(void **)(data_02162618 + 0xc) = NULL;
    func_0210db10(data_02162624, data_02162618, 0);
done:
    return;
}

void func_0210bf38(void *arg0, u32 arg1) {
    func_0210c518(arg1, *(s32 *)((u8 *)arg0 + 8));
}

void func_0210bf50(void *arg0, void *arg1) {
    if (arg1 == NULL) {
        return;
    }
    func_0210c5dc(arg1);
}

void func_0210bf68(void) {
    u32 zero = 0;
    u32 r4 = func_02007008(zero);
    u32 size = (func_02006ff4(zero) & ~0xf) - ((r4 + 0xf) & ~0xf);
    u32 r1 = func_02116fd0(func_020071c8(zero, size, 0x10), size, zero);
    data_02162638 = (void *)r1;
    data_02155c2c = size;
    func_0211748c(data_02162648, r1, 0x4);
    *(u32 *)((u8 *)&data_02162638 + 0x10) = (u32)data_02144b94;
}

void func_0210bfec(void) {
    func_02002c2c();
    func_02002dc0();
    func_02120800();
    *(u32 *)0x04000540 = 0;
}

extern void func_0210c094(void *, void *, void *, void *);
s32 func_0210c1dc(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    s32 vec[3];
    func_0210c094(arg3, arg0, arg1, vec);
    if (func_02002158(vec, arg4) < 0) {
        return 0;
    }
    func_0210c094(arg3, arg1, arg2, vec);
    if (func_02002158(vec, arg4) < 0) {
        return 0;
    }
    func_0210c094(arg3, arg2, arg0, vec);
    if (func_02002158(vec, arg4) >= 0) {
        return 1;
    }
    return 0;
}

s32 func_0210c28c(s32 *arg0, s32 *arg1) {
    s32 dx = arg0[0] - arg1[0];
    s32 dy = arg0[1] - arg1[1];
    s64 sum = (s64)dx * dx;
    sum += (s64)dy * dy;
    *(volatile u16 *)0x040002b0 = 1;
    *(volatile u64 *)0x040002b8 = (u64)sum << 2;
    while (*(volatile u16 *)0x040002b0 & 0x8000) {
    }
    return (*(volatile s32 *)0x040002b4 + 1) >> 1;
}

s32 func_0210c2f4(s32 *arg0, s32 *arg1) {
    s32 dx = arg0[0] - arg1[0];
    s32 dz = arg0[2] - arg1[2];
    s64 sum = (s64)dz * dz;
    sum += (s64)dx * dx;
    *(volatile u16 *)0x040002b0 = 1;
    *(volatile u64 *)0x040002b8 = (u64)sum << 2;
    while (*(volatile u16 *)0x040002b0 & 0x8000) {
    }
    return (*(volatile s32 *)0x040002b4 + 1) >> 1;
}

extern s32 func_02002080(s32, s32);
extern s32 func_02002158(void *, void *);
void func_0210c35c(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0[1] = arg2;
    arg0[3] = arg3;
    if (arg3 == 0) {
        arg0[0] = arg2;
        arg0[2] = 0;
        return;
    }
    arg0[0] = arg1;
    arg0[2] = func_02002080(arg2 - arg1, arg3);
}

void* func_0210c518(u32 size, s32 arg1)
{
    extern u8 data_02162684;
    extern u16 data_02162688;
    extern void* data_02162638;

    extern u32 func_02008128(void);
    extern void func_0200813c(u32);
    extern s32 func_02006afc(u16*);
    extern void func_02006b4c(void*);
    extern void* func_02117008(void*, u32, s32);
    extern void func_021091b4(void);

    void* ptr;
    u32 irq;

    if (data_02162684 != 0) {
        irq = func_02008128();
        func_02006afc(&data_02162688);
    }

    ptr = func_02117008(data_02162638, size, arg1);

    if (data_02162684 != 0) {
        func_02006b4c(&data_02162688);
        func_0200813c(irq);
    }

    func_021091b4();

    return ptr;
}

void* func_0210c594(u32 size, s32 arg1)
{
    extern void* func_0210c518(u32, s32);
    extern void func_02008f74(void*, u32, u32);
    extern void func_02008e68(u32, void*, u32);
    extern void func_021091b4(void);

    void* ptr = func_0210c518(size, arg1);

    if (ptr != NULL) {
        if (size & 3) {
            func_02008f74(ptr, 0, size);
        } else {
            func_02008e68(0, ptr, size);
        }
    }

    func_021091b4();

    return ptr;
}

