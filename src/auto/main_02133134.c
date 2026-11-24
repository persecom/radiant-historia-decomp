/* 50 functions from 0x02133134 to 0x02134134 (main), found by ds-decomp. */
#include "common.h"

extern void func_021336c0(s32, void *);
extern s32 func_02016da4(void *);
extern void func_02013858(u8 *, void *, s32);
extern void func_02132ca0(void *);
extern void func_02133124(void *);
extern u8 data_0215bb54[24];
extern u8 data_021749dc[];
extern s8 data_021749d0[];
extern u8 data_0215b794[28];
extern u8 data_0215b7b0[24];
extern u8 data_0215b7c8[28];
extern u8 data_0215b7e4[24];
extern u8 data_0215b7fc[28];
extern u8 data_0215b818[24];
extern u8 data_0215b830[28];
extern u8 data_0215b84c[24];
typedef struct {
    void (**fn)(void);
    u32 pad[3];
} UnkEntry_021333b0;
extern UnkEntry_021333b0 data_02174b64[32];

extern void func_0213807c(void);
void func_0213320c(u8 *arg0) {
    void *p = data_021749dc;
    s32 v = func_02016da4(p);
    if (data_021749d0[0xc] == 0) {
        *arg0 = 0;
        return;
    }
    func_02013858(arg0, p, v + 1);
}

void func_02133258(void *arg0) {
    void *p;
    void (*cb)(void *);
    if (arg0 == NULL) {
        func_02132ca0(data_0215b794);
        return;
    }
    p = *(void **)arg0;
    cb = *(void (**)(void *))((u8 *)p + 0x14);
    if (cb != NULL) {
        cb(*(void **)((u8 *)arg0 + 4));
        func_02133124(arg0);
        return;
    }
    func_02132ca0(data_0215b7b0);
}

void *func_021332a8(void *arg0) {
    void *p;
    void *(*cb)(void *);
    void *ret;
    if (arg0 == NULL) {
        func_02132ca0(data_0215b7c8);
        return NULL;
    }
    p = *(void **)arg0;
    cb = *(void *(**)(void *))((u8 *)p + 0x1c);
    if (cb != NULL) {
        ret = cb(*(void **)((u8 *)arg0 + 4));
    } else {
        ret = NULL;
        func_02132ca0(data_0215b7e4);
    }
    return ret;
}

void *func_02133300(void *arg0, s32 arg1, s32 arg2) {
    void *p;
    void *(*cb)(void *, s32, s32);
    void *ret;
    if (arg0 == NULL) {
        func_02132ca0(data_0215b7fc);
        return NULL;
    }
    p = *(void **)arg0;
    cb = *(void *(**)(void *, s32, s32))((u8 *)p + 0x18);
    if (cb != NULL) {
        ret = cb(*(void **)((u8 *)arg0 + 4), arg1, arg2);
    } else {
        ret = NULL;
        func_02132ca0(data_0215b818);
    }
    return ret;
}

void *func_02133358(void *arg0) {
    void *p;
    void *(*cb)(void *);
    void *ret;
    if (arg0 == NULL) {
        func_02132ca0(data_0215b830);
        return NULL;
    }
    p = *(void **)arg0;
    cb = *(void *(**)(void *))((u8 *)p + 0x20);
    if (cb != NULL) {
        ret = cb(*(void **)((u8 *)arg0 + 4));
    } else {
        ret = NULL;
        func_02132ca0(data_0215b84c);
    }
    return ret;
}

void func_021333b0(void) {
    s32 i;
    for (i = 0; i < 0x20; i++) {
        void (**p)(void) = data_02174b64[i].fn;
        if (p != NULL && *p != NULL) {
            (*p)();
        }
    }
}

void func_02133688(void) {
    func_0213807c();
}

extern void func_0213808c(void);
void func_02133694(void) {
    func_0213808c();
}

extern void func_020182e4(void);
void func_021336e8(void) {
    func_020182e4();
}

extern void func_02013878(void *, s32, s32);
void func_02133864(void *arg0) {
    func_02013878(arg0, 0, 0x38);
}

s32 func_02133bf0(void *arg0) {
    if (arg0 != NULL) {
        return *(s8 *)((u8 *)arg0 + 1);
    }
    func_021336c0(0, data_0215bb54);
    return 0;
}

extern u8 data_0215bbb8[64];
void *func_02133df8(void) {
    return data_0215bbb8;
}

