/* 57 functions from 0x02132204 to 0x02133134 (main), found by ds-decomp. */
#include "common.h"

extern s32 data_021749c4;
extern u8 data_02145998[64];
extern void *data_0215b1cc;
extern void func_0212f79c(void);
extern void func_0212efe8(void **, void **);
extern void func_0212f010(void **, void **);
extern void func_02130858(void **, void **);
extern void func_02132b10(void **, void **);
extern void func_0212f76c(void);
extern u32 data_0215b1d0[2];
extern void func_0212f0f0(u32, u32);
extern void func_0212f97c(u32, u32);
extern void func_0212f8b8(u32);
extern void func_0212f994(void *);
extern void func_0212fb8c(void *);
extern u32 data_021749c8[2];
extern void func_021327cc(u8 *);
extern s32 func_02016f58(const char *, const char *, u32);
struct S_021749e8 {
    u32 unk0;
    u32 unk4;
};
extern struct S_021749e8 data_021749e8[10];
struct S_02174b64 {
    void *ptr;
    char name[12];
};
extern struct S_02174b64 data_02174b64[32];
extern char data_0215b61c[];
extern char data_0215b640[];
extern char data_0215b664[];
extern void func_02132ca0(const char *);
extern void func_02132c7c(void);
extern void func_02132e0c(void);
extern u32 func_02016da4(const char *);
extern void func_02013858(void *, const void *, u32);
void *func_02132d2c(const char *arg0, void *(*arg1)(void));
void *func_02132dbc(const char *arg0);
extern u8 data_021459d8[];
extern u32 data_0215b618;
extern u32 data_021749d0[3];
extern u32 data_021749d8;
extern void func_020159f8(s32, s32, s32);

extern void func_0212f738(void);
extern u32 data_021749ac[4];
void func_0213234c(u32 arg0) {
    data_021749ac[5] = arg0;
}

void func_0213235c(u32 arg0) {
    data_021749ac[0] = arg0;
}

extern void func_02016e88(s32, s32, s32);
void func_0213239c(void);
void func_0213236c(void) {
    if (data_021749ac[2] == 0) {
        func_0213239c();
    }
    data_021749ac[2]++;
}

void func_0213239c(void) {
    s32 i;
    s8 *src;
    s8 *dst;

    if (data_021749ac[1] != 0) {
        return;
    }

    src = (s8 *)data_021749ac[0];
    dst = (s8 *)(((u32)src + 0x1f) & ~0x1f);
    data_021749ac[3] = (u32)dst;
    for (i = 0x400; i >= 0; i--) {
        dst[i] = src[i];
    }

    src = (s8 *)data_021749ac[5];
    dst = (s8 *)(((u32)src + 0x1f) & ~0x1f);
    data_021749ac[4] = (u32)dst;
    for (i = 0x1000; i >= 0; i--) {
        dst[i] = src[i];
    }

    data_021749ac[1] = 1;
}

extern void func_02013878(void *, s32, u32);
void func_0213240c(void) {
    data_021749ac[2]--;
}

void *func_02132424(void *arg0, u32 arg1) {
    func_02013878(arg0, 0, arg1);
    *(u32 *)((u8 *)arg0 + 8) = 0x40;
    *(u32 *)((u8 *)arg0 + 4) = 0x40;
    *(u32 *)((u8 *)arg0 + 0x10) = data_021749ac[3];
    *(u32 *)((u8 *)arg0 + 0xc) = data_021749ac[4];
    *(u8 *)arg0 = 1;
    return arg0;
}

void func_0213246c(void *arg0) {
    func_02013878(arg0, 0, 0x814);
}

void func_02132484(void) {
    func_0212f738();
}

extern void func_0212f744(void);
void func_02132490(void) {
    func_0212f744();
}

extern void func_0212f754(void);
void func_0213249c(void) {
    func_0212f754();
}

extern void func_0212f760(void);
void func_021324a8(void) {
    func_0212f760();
}

void func_021324b4(void) {
    void *a;
    void *b;
    data_0215b1cc = data_02145998;
    if (data_021749c4 == 0) {
        func_0212efe8(&a, &b);
        ((void (*)(void *, void *))func_02132484)(a, b);
        func_0212f010(&a, &b);
        ((void (*)(void *, void *))func_02132490)(a, b);
        func_02130858(&a, &b);
        ((void (*)(void *, void *))func_0213249c)(a, b);
        func_02132b10(&a, &b);
        ((void (*)(void *, void *))func_021324a8)(a, b);
        func_0212f76c();
    }
    data_021749c4++;
}

void func_02132568(void) {
    if (data_021749c4 == 1) {
        func_0212f79c();
    }
    data_021749c4--;
}

void func_02132598(void *arg0) {
    *(u32 *)((u8 *)arg0 + 0xc) = 0;
    *(u32 *)((u8 *)arg0 + 0x1c) = 0;
    *(u32 *)((u8 *)arg0 + 0x20) = 0;
    *(u32 *)((u8 *)arg0 + 0x24) = 0;
    *(u32 *)((u8 *)arg0 + 0x28) = 0;
    *(u32 *)((u8 *)arg0 + 0x2c) = 0;
    *(u32 *)((u8 *)arg0 + 0x30) = 0;
    *(s32 *)((u8 *)arg0 + 0x34) = 0x7fffffff;
    *(s32 *)((u8 *)arg0 + 0x3c) = -1;
    *(u32 *)((u8 *)arg0 + 0x40) = 0;
    *(u32 *)((u8 *)arg0 + 0x44) = 0;
}

extern void func_0212f0d4(void *);
extern void func_0212f880(void *);
void func_021326e4(void **arg0) {
    if (arg0 == NULL) {
        return;
    }
    if (arg0[1] != NULL) {
        void *p = arg0[1];
        arg0[1] = NULL;
        func_0212f0d4(p);
    }
    if (arg0[0] != NULL) {
        void *p = arg0[0];
        arg0[0] = NULL;
        func_0212f880(p);
    }
    func_02013878(arg0, 0, 0x5c);
}

s8 func_02132734(void *arg0) {
    return *((s8 *)arg0 + 9);
}

void func_0213273c(void *arg0, u32 arg1) {
    *(u32 *)((u8 *)arg0 + 0x10) = arg1;
}

void func_02132744(u8 *arg0) {
    func_02132598(arg0);
    func_0212f0f0(*(u32 *)(arg0 + 4), *(u32 *)(arg0 + 0x10));
    func_0212f97c(*(u32 *)(arg0 + 0), *(u32 *)(arg0 + 4));
    *(u8 *)(arg0 + 9) = 1;
}

void func_02132770(u8 *arg0) {
    func_0212f8b8(*(u32 *)(arg0 + 0));
    *(u8 *)(arg0 + 9) = 0;
}

void func_0213278c(u8 *arg0) {
    void *p = *(void **)(arg0 + 0x10);
    s32 ret;
    ret = (*(s32 (**)(void *, s32))((u8 *)*(void **)p + 0x24))(p, 1);
    if (ret < 0x24) {
        return;
    }
    func_0212f994(*(void **)(arg0 + 0));
    func_0212fb8c(*(void **)(arg0 + 0));
    *(u8 *)(arg0 + 9) = 2;
}

void func_02132a24(s32 *arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 ptr = *(volatile s32 *)arg0;
    s32 len = *(volatile s32 *)(arg0 + 1);
    s32 rem;
    *(volatile s32 *)arg2 = ptr;
    *(volatile s32 *)(arg2 + 1) = len;
    arg3[1] = len;
    if (arg2[1] > arg1) {
        arg2[1] = arg1;
    }
    rem = arg3[1] - arg2[1];
    arg3[1] = rem;
    arg3[0] = (rem == 0) ? 0 : (arg2[0] + arg2[1]);
}

void func_02132a6c(u8 *arg0) {
    s8 state = *(s8 *)(arg0 + 9);
    if (state == 2) {
        func_021327cc(arg0);
    } else if (state == 1) {
        func_0213278c(arg0);
    }
}

u32 func_02132a94(u8 *arg0) {
    return *(u32 *)(arg0 + 0x24);
}

s32 func_02132a9c(s32 *arg0) {
    return arg0[0xb] + arg0[0xa];
}

void func_02132aac(u8 *a0, s32 a1, s32 a2) {
    *(s32 *)(a0 + 0x54) = a1;
    *(s32 *)(a0 + 0x58) = a2;
}

extern void func_0212fcf0(void *, s32);
void func_02132ab8(void **arg0, s32 arg1) {
    func_0212fcf0(*arg0, arg1);
}

extern void func_0212fcfc(void *, s32);
extern void func_0212f79c(void);
extern s32 data_021749c4;
void func_02132ac8(void **arg0, s32 arg1) {
    func_0212fcfc(*arg0, arg1);
}

extern void func_0212fd28(void *, s32);
void func_02132ad8(void **arg0, s32 arg1) {
    func_0212fd28(*arg0, arg1);
}

void func_02132ae8(u8 *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0x34) = arg1;
}

void func_02132af0(u32 *arg0) {
    arg0[3] = 1;
}

void func_02132afc(u8 *arg0, s32 arg1) {
    s32 v;
    if (arg1 != 0) {
        v = 1;
    } else {
        v = 0;
    }
    *(u32 *)(arg0 + 0x38) = v;
}

void func_02132b10(void **arg0, void **arg1) {
    if (arg0 != NULL) {
        *arg0 = (void *)data_0215b1d0[0];
    }
    if (arg1 != NULL) {
        *arg1 = (void *)data_0215b1d0[1];
    }
}

u8 *func_02132b38(u8 *arg0) {
    s32 i;
    u8 *p;
    s32 count;
    if (*(s8 *)arg0 == 0) {
        return NULL;
    }
    i = 0;
    count = data_021749c8[0];
    p = (u8 *)data_021749c8[1];
    for (; i < count; i++, p += 0x10) {
        if (func_02016f58(p, arg0, 0xc) == 0) {
            return p;
        }
    }
    return NULL;
}

s32 func_02132ba4(u8 *arg0, s32 *arg1) {
    u8 *p;
    if (data_021749c8[1] == 0) {
        return -1;
    }
    p = func_02132b38(arg0);
    if (p == NULL) {
        return -3;
    }
    *arg1 = *(s32 *)(p + 0xc);
    return 0;
}

void func_02132be0(void) {
    data_0215b618 = (u32)data_021459d8;
}

extern void func_02016dc0(s32, s32);
void func_02132bf8(s32 arg0, s32 arg1, s32 arg2) {
    func_02016dc0(arg0, arg2);
}

void func_02132c08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02016e88(arg0, arg2, arg3);
}

extern void func_02016ed8(s32, s32);
void func_02132c1c(s32 arg0, s32 arg1, s32 arg2) {
    func_02016ed8(arg0, arg2);
}

extern void func_02016f08(s32, s32, s32);
void func_02132c2c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02016f08(arg0, arg2, arg3);
}

void func_02132c40(s32 arg0, s32 arg1, const char *arg2, ...) {
    char *vlist = (char *)((u32)&arg2 & ~3) + 4;
    func_020159f8(arg0, arg2, vlist);
}

extern void func_020159f8(s32, s32, s32);
void func_02132c68(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_020159f8(arg0, arg2, arg3);
}

void func_02132c7c(void) {
    if (data_021749d0[1] != 0) {
        ((void (*)(u32))data_021749d0[1])(data_021749d0[2]);
    }
}

void func_02132cbc(const char *arg0, void *(*arg1)(void)) {
    u32 *res;
    void (*fn)(void *, s32);
    if (arg0 == NULL) {
        func_02132ca0(data_0215b61c);
        return;
    }
    if (arg1 == NULL) {
        func_02132ca0(data_0215b640);
        return;
    }
    res = func_02132d2c(arg0, arg1);
    if (res == NULL) {
        func_02132ca0(data_0215b664);
        return;
    }
    fn = (void (*)(void *, s32))res[1];
    if (fn != NULL) {
        fn((void *)func_02132c7c, 0);
    }
}

void *func_02132d2c(const char *arg0, void *(*arg1)(void)) {
    s32 i;
    void *res;
    func_02132e0c();
    res = arg1();
    if (func_02132dbc(arg0) != NULL) {
        return res;
    }
    for (i = 0; i < 32; i++) {
        if (data_02174b64[i].name[0] == '\0') {
            break;
        }
    }
    if (i == 32) {
        return NULL;
    }
    data_02174b64[i].ptr = res;
    func_02013858(data_02174b64[i].name, arg0, func_02016da4(arg0) + 1);
    return res;
}

void *func_02132dbc(const char *arg0) {
    u32 i;
    u32 len = func_02016da4(arg0);
    for (i = 0; i < 32; i++) {
        if (func_02016f58(arg0, data_02174b64[i].name, len) == 0) {
            return data_02174b64[i].ptr;
        }
    }
    return NULL;
}

extern u8 data_021749dc[64];
void *func_02132f14(void) {
    return data_021749dc;
}

void *func_021330e8(void) {
    s32 i;
    for (i = 0; i < 10; i++) {
        if (data_021749e8[i].unk4 == 0) {
            break;
        }
    }
    if (i == 10) {
        return NULL;
    }
    return &data_021749e8[i];
}

void func_02133124(u32 *arg0) {
    arg0[1] = 0;
    arg0[0] = 0;
}

