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

