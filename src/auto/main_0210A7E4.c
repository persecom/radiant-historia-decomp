/* 25 functions from 0x0210A7E4 to 0x0210B7A4 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_02155c08[8];
extern u8 data_02155c10[8];
extern void *data_0215615c;
extern void func_0210c5dc(void *);
extern void *func_02109b14(s32, s32);
extern s32 func_02109f84(void *);
extern s32 func_02117774(void *, void *);
extern s32 func_021178d4(void *, void *);
extern void *func_02117904(void *, u32);
extern void *func_0210eb98(void *, s32);
extern s32 func_0210f3ec(void *, s32);
extern void *func_0210a7b4(void);
extern s32 func_0210a7e4(void *, s32, s32);
extern void func_0210f3ac(void *, void *, s32);

extern void func_0210b300(void);
void *func_0210a984(s32 arg0) {
    void *p;
    void *obj;
    s32 ret;
    obj = func_0210eb98(data_02155c08, arg0);
    ret = func_0210f3ec(obj, 1);
    if (ret != 0) {
        return (void *)ret;
    }
    p = func_0210a7b4();
    if (p == NULL) {
        return NULL;
    }
    if (func_0210a7e4(p, arg0, 0) == 0) {
        if (p != NULL) {
            func_0210c5dc(p);
        }
        return NULL;
    }
    func_0210f3ac(func_0210eb98(data_02155c10, arg0), p, 1);
    *(s32 *)((u8 *)p + 0x20) = 1;
    return p;
}

void func_0210aa14(void *arg0) {
    void *p;
    if (arg0 == NULL) {
        return;
    }
    if (*(s32 *)((u8 *)arg0 + 0x20) != 0) {
        return;
    }
    p = *(void **)((u8 *)arg0 + 0x14);
    if (p != NULL) {
        ((void (*)(void *))data_0215615c)(p);
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_0210aad0(void *arg0, s32 arg1, s32 arg2) {
    void *p;
    p = func_02109b14(arg1, arg2);
    if (p == NULL) {
        return p;
    }
    if (func_02109f84(p) != 0) {
        *(void **)arg0 = (u8 *)func_02117904(p, 0x43484152) + 8;
        return p;
    }
    if (func_02117774(p, arg0) != 0) {
        return p;
    }
    if (p != NULL) {
        func_0210c5dc(p);
        p = NULL;
    }
    return p;
}

void func_0210af80(void) {
    func_0210b300();
}
