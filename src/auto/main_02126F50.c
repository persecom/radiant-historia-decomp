/* 40 functions from 0x02126F50 to 0x02127E74 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_0215665c[60];
extern void *func_02127dec(void *, s32);
extern void *func_02127a9c(void *, void *, s32);
extern void func_02127e58(void *);
extern void func_0212c3b0(void *);
extern void func_021277f4(void *);
extern void func_02126c20(void *);
extern void func_02127600(void *);
extern u8 data_021565f0[52];
extern u8 data_02156624[56];

extern void func_02127600(void *);
BOOL func_02127350(void *arg0) {
    void (*cb)(void *, void *) = *(void (**)(void *, void *))((u8 *)arg0 + 0x2c);
    if (cb == NULL) {
        return FALSE;
    }
    cb(*(void **)((u8 *)arg0 + 0x30), *(void **)((u8 *)arg0 + 0x34));
    return TRUE;
}

BOOL func_0212737c(void *arg0) {
    void (*cb)(void *, void *) = *(void (**)(void *, void *))((u8 *)arg0 + 0x38);
    if (cb == NULL) {
        return FALSE;
    }
    cb(*(void **)((u8 *)arg0 + 0x3c), *(void **)((u8 *)arg0 + 0x40));
    return TRUE;
}

void *func_021273a8(void *arg0, u32 arg1) {
    if (arg0 == NULL) {
        func_02126c20(data_021565f0);
        return NULL;
    }
    if (arg1 < 0xc) {
        func_02126c20(data_02156624);
        return NULL;
    }
    func_02127600(arg0);
    return arg0;
}

void func_021273f0(void *arg0) {
    if (arg0 != NULL) {
        func_02127600(arg0);
    }
}

BOOL func_02127404(void *arg0, void *arg1, void *arg2, s32 arg3) {
    void *p;
    if (*(s32 *)((u8 *)arg1 + 8) != 0) {
        p = func_02127dec(arg2, arg3 - 0xc);
    } else {
        p = func_02127a9c(*(void **)arg1, arg2, arg3 - 0xc);
    }
    *(void **)((u8 *)arg0 + 4) = p;
    if (p != NULL) {
        *(void **)((u8 *)arg0 + 8) = *(void **)arg1;
        return TRUE;
    }
    func_02126c20(data_0215665c);
    return FALSE;
}

void func_02127468(void *arg0) {
    if (*(void **)((u8 *)arg0 + 4) != NULL) {
        func_02127e58(*(void **)((u8 *)arg0 + 4));
        *(void **)((u8 *)arg0 + 4) = NULL;
    }
}

extern void func_0212789c(void *);
extern void func_02126c20(void *);
extern u8 data_021565f0[52];
extern u8 data_02156624[56];
void func_0212748c(void *arg0) {
    func_0212789c(*(void **)((u8 *)arg0 + 4));
}

void func_0212749c(void *arg0) {
    func_0212c3b0(*(void **)((u8 *)arg0 + 4));
}

void func_021274ac(void *arg0) {
    func_021277f4(*(void **)((u8 *)arg0 + 4));
}

extern void func_02139bbc(void *);
extern void func_021278d8(void *);
extern void func_02127988(void *);
extern void func_0212824c(void *);
void func_021274bc(void *arg0) {
    func_02139bbc(*(void **)((u8 *)arg0 + 4));
}

void func_021274cc(void *arg0) {
    func_021278d8(*(void **)((u8 *)arg0 + 4));
}

void func_021274dc(void *arg0) {
    func_02127988(*(void **)((u8 *)arg0 + 4));
}

void func_021274ec(void *arg0) {
    func_0212824c(*(void **)((u8 *)arg0 + 4));
}

extern void func_0212879c(void *);
extern void func_021287d0(void *);
void func_021274fc(void *arg0) {
    func_0212879c(*(void **)((u8 *)arg0 + 4));
}

void func_0212750c(void *arg0) {
    func_021287d0(*(void **)((u8 *)arg0 + 4));
}

extern s32 func_021282cc(void *);
extern void func_021284bc(void *, s32);
s32 func_0212751c(void *arg0) {
    switch (func_021282cc(*(void **)((u8 *)arg0 + 4))) {
    case 0:
        return 0;
    case 1:
    case 2:
        return 1;
    case 3:
    case 4:
        return 2;
    case 5:
        return 3;
    case 6:
        return 4;
    default:
        return 4;
    }
}

void func_02127580(void *arg0, s32 arg1) {
    if (arg1 < -960) {
        arg1 = -960;
    }
    func_021284bc(*(void **)((u8 *)arg0 + 4), arg1);
}

extern s32 func_02128530(void *);
s32 func_021275a0(void *arg0) {
    return func_02128530(*(void **)((u8 *)arg0 + 4));
}

void func_021275b0(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 != 0) {
        return;
    }
    func_021284bc(*(void **)((u8 *)arg0 + 4), arg2);
}

extern void func_0212869c(void *);
s32 func_021275cc(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        return 0;
    }
    return func_02128530(*(void **)((u8 *)arg0 + 4));
}

s32 func_021275f8(s32 *arg0) {
    return arg0[1];
}

extern void func_0212a9f4(void);
extern void func_02127e74(void *);
extern void func_0212a9f8(void);
void func_02127e58(void *arg0) {
    func_0212a9f4();
    func_02127e74(arg0);
    func_0212a9f8();
}

