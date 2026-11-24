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

u32 func_02132a94(u8 *arg0) {
    return *(u32 *)(arg0 + 0x24);
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

extern void func_020159f8(s32, s32, s32);
void func_02132c68(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_020159f8(arg0, arg2, arg3);
}

extern u8 data_021749dc[64];
void *func_02132f14(void) {
    return data_021749dc;
}

