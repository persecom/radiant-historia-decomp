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
extern u8 data_0215b864[28];
extern u8 data_0215b880[28];
extern u8 data_0215b89c[40];
extern u8 data_0215b8c4[40];
extern u8 data_0215b8ec[36];
extern u8 data_0215b910[32];
extern u8 data_0215b930[48];
extern u8 data_0215b960[44];
extern void func_02133134(s8 *, s8 *, void *);
extern void *func_02132f20(s8 *, s8 *, void *);
extern u32 data_02174f9c[];
extern u8 data_02174a38[300];
extern u8 data_0215b98c[8];
extern void *func_02132dbc(void *);
extern void *func_02132f14(void);
extern void func_02132bf8(void *, s32, void *);
extern void func_02132c40(void *, s32, void *, void *, void *);
typedef struct {
    s8 field_0;
    u8 pad[0x37];
} UnkStruct_02174d6c;
extern UnkStruct_02174d6c data_02174d6c[10];
extern u32 func_021336f4(void *, s8 **, s32);
extern void func_021337c4();
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

void *func_02133358(void *arg0, s32 arg1, s32 arg2) {
    void *p;
    void *(*cb)(void *, s32, s32);
    void *ret;
    if (arg0 == NULL) {
        func_02132ca0(data_0215b830);
        return NULL;
    }
    p = *(void **)arg0;
    cb = *(void *(**)(void *, s32, s32))((u8 *)p + 0x20);
    if (cb != NULL) {
        ret = cb(*(void **)((u8 *)arg0 + 4), arg1, arg2);
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

s32 func_021333e8(void *arg0) {
    s32 ret = 3;
    void *p;
    s32 (*cb)(void *);
    if (arg0 == NULL) {
        func_02132ca0(data_0215b864);
        return ret;
    }
    p = *(void **)arg0;
    cb = *(s32 (**)(void *))((u8 *)p + 0x2c);
    if (cb != NULL) {
        ret = cb(*(void **)((u8 *)arg0 + 4));
    } else {
        func_02132ca0(data_0215b880);
    }
    return ret;
}

s32 func_02133440(void *arg0) {
    s8 buf1[0x129];
    s8 buf0[0x129];
    void *p;
    s32 (*cb)(s8 *);

    if (arg0 == NULL) {
        func_02132ca0(data_0215b89c);
        return 0;
    }

    func_02133134(buf1, buf0, arg0);
    if (buf0[0] == 0) {
        func_02132ca0(data_0215b8c4);
        return 0;
    }

    p = func_02132f20(buf1, buf0, arg0);
    if (p == NULL) {
        func_02132ca0(data_0215b8ec);
    }

    cb = *(s32 (**)(s8 *))((u8 *)p + 8);
    if (cb != NULL) {
        return cb(buf0);
    }

    func_02132ca0(data_0215b910);
    return 0;
}

s32 func_02133500(void *arg0) {
    s32 ret;
    void *p;
    s32 (*cb)(void *, s32, s32, s32);

    if (arg0 == NULL) {
        func_02132ca0(data_0215b930);
        return -1;
    }

    ret = 0x7fffffff;
    p = *(void **)arg0;
    cb = *(s32 (**)(void *, s32, s32, s32))((u8 *)p + 0x60);
    if (cb != NULL) {
        ret = cb(*(void **)((u8 *)arg0 + 4), 0x12c, 0, 0);
        if (ret == -1) {
            func_02132ca0(data_0215b960);
            return -1;
        }
    }
    return ret;
}

void func_02133578(void *arg0, void *arg1) {
    if (arg0 == NULL) {
        ((void **)data_021749d0)[1] = NULL;
        ((void **)data_021749d0)[2] = NULL;
    } else {
        ((void **)data_021749d0)[1] = arg0;
        ((void **)data_021749d0)[2] = arg1;
    }
}

s32 func_0213359c(void *arg0) {
    void *p = func_02132dbc(arg0);
    s32 (*cb)(void *, s32, s32, s32);
    if (p == NULL) {
        return 0;
    }
    cb = *(s32 (**)(void *, s32, s32, s32))((u8 *)p + 0x60);
    if (cb == NULL) {
        return 0;
    }
    return cb(NULL, 0x64, 0, 0);
}

void func_021335d4(void *arg0, void *arg1) {
    if (arg0 == NULL) {
        arg0 = func_02132f14();
    }
    if (func_0213359c(arg0) == 1) {
        func_02132bf8(data_02174a38, 0x129, arg1);
        func_02132c40(arg1, 0x129, data_0215b98c, arg0, data_02174a38);
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

u32 func_02133750(void *arg0, void *arg1) {
    s8 *ptr;
    u32 ret;

    if ((u32)func_02016da4(arg0) >= 0x12) {
        func_021336c0(0, NULL);
    }

    ptr = (s8 *)arg0;
    ret = func_021336f4(arg0, &ptr, 0x10);
    if (*ptr != 0) {
        ptr++;
    }
    if (arg1 != NULL) {
        *(u32 *)arg1 = ((u32 (*)(s8 *, s8 **, s32))func_021336e8)(ptr, &ptr, 0x10);
    }
    return ret;
}

void func_021337c4(void) {
}

extern u64 data_02174d64;
void func_02133804(u64 arg0) {
    data_02174d64 = arg0;
}

extern u32 func_02133750(void *, void *);
extern void func_02133134(s8 *, s8 *, void *);
extern void *func_02132f20(s8 *, s8 *, void *);
extern u8 data_0215b864[28];
extern u8 data_0215b880[28];
extern u8 data_0215b89c[40];
extern u8 data_0215b8c4[40];
extern u8 data_0215b8ec[36];
extern u8 data_0215b910[32];
extern u8 data_0215b930[48];
extern u8 data_0215b960[44];
s32 func_02133814(void *arg0) {
    s32 ret;
    func_02133750(arg0, &ret);
    return ret;
}

void *func_02133828(void) {
    s32 i;
    for (i = 0; i < 10; i++) {
        if (data_02174d6c[i].field_0 == 0) {
            return &data_02174d6c[i];
        }
    }
    return NULL;
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

void func_02133dd0(u32 arg0, u32 arg1) {
    if (data_02174f9c[0x1ca] != 0) {
        ((void (*)(u32, u32, u32))data_02174f9c[0x1ca])(data_02174f9c[0x1cb], arg1, arg0);
    }
}

extern u8 data_0215bbb8[64];
void *func_02133df8(void) {
    return data_0215bbb8;
}

void func_02134064(u32 arg0, u32 arg1) {
    data_02174f9c[0x1ca] = arg0;
    data_02174f9c[0x1cb] = arg1;
}

