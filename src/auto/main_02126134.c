/* 75 functions from 0x02126134 to 0x02126F50 (main), found by ds-decomp. */
#include "common.h"
void func_021269bc(void);

void func_02126a1c(void);


extern void func_02138af0(void);
extern void func_02126778(void *);
extern BOOL func_0212646c(void *);
extern BOOL func_021265b4(void *);
extern void func_021265dc(void *);
extern BOOL func_02138ae8(void *);
extern void func_0213904c(void *);
extern BOOL func_021265bc(void *);
extern s32 func_02138d60(void *);
extern u32 func_021265c4(void *);
extern void func_02139034(void *, u32);
extern void func_0213905c(void *);
extern void func_021263ac(void *, void *);
void func_02126330(void *arg0) {
    s32 i;
    if (!func_0212646c(arg0)) {
        return;
    }
    if (*(void (**)(void *))((u8 *)arg0 + 0x80) != NULL) {
        (*(void (**)(void *))((u8 *)arg0 + 0x80))(*(void **)((u8 *)arg0 + 0x84));
    }
    if (func_021265b4(*(void **)((u8 *)arg0 + 0x10))) {
        func_021265dc(*(void **)((u8 *)arg0 + 0x10));
    }
    for (i = 0; i < 4; i++) {
        void *item = ((void **)arg0)[i];
        if (item != NULL) {
            func_021263ac(arg0, item);
        }
    }
    if (*(void (**)(void *))((u8 *)arg0 + 0x88) != NULL) {
        (*(void (**)(void *))((u8 *)arg0 + 0x88))(*(void **)((u8 *)arg0 + 0x8c));
    }
}

void func_021263ac(void *arg0, void *arg1) {
    if (!func_0212646c(arg0)) {
        return;
    }
    if (!func_02138ae8(arg1)) {
        return;
    }
    func_0213904c(arg1);
    if (func_021265b4(*(void **)((u8 *)arg0 + 0x10)) &&
        func_021265bc(*(void **)((u8 *)arg0 + 0x10)) &&
        func_02138d60(arg1) == 1) {
        func_02139034(arg1, func_021265c4(*(void **)((u8 *)arg0 + 0x10)));
    }
    func_0213905c(arg1);
}

void *func_0212642c(void *arg0) {
    return *(void **)((u8 *)arg0 + 0x10);
}

void func_02126434(void *arg0) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((void **)arg0)[i] = NULL;
    }
    *(s32 *)((u8 *)arg0 + 0x74) = 0;
    *(s32 *)((u8 *)arg0 + 0x78) = 0;
    *(s32 *)((u8 *)arg0 + 0x7c) = 0;
    *(void **)((u8 *)arg0 + 0x80) = NULL;
    *(void **)((u8 *)arg0 + 0x84) = NULL;
    *(void **)((u8 *)arg0 + 0x88) = NULL;
    *(void **)((u8 *)arg0 + 0x8c) = NULL;
}

BOOL func_0212646c(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x74) > 0;
}

void func_021264f0(void *arg0) {
    if (arg0 != NULL) {
        func_02126778(arg0);
    }
}

extern void func_02126c18(void);
extern void func_021268e4(void *);
extern void func_02126c1c(void);
extern BOOL func_0212646c(void *);
extern BOOL func_021265b4(void *);
extern void func_021265dc(void *);
extern BOOL func_02138ae8(void *);
extern void func_0213904c(void *);
extern BOOL func_021265bc(void *);
extern s32 func_02138d60(void *);
extern u32 func_021265c4(void *);
extern void func_02139034(void *, u32);
extern void func_0213905c(void *);
extern void func_021263ac(void *, void *);
void func_021268c8(void *arg0) {
    func_02126c18();
    func_021268e4(arg0);
    func_02126c1c();
}

extern void func_02126964(void);
void func_02126940(void *arg0, void *arg1) {
    func_02126c18();
    ((void (*)(void *, void *))func_02126964)(arg0, arg1);
    func_02126c1c();
}

void func_02126964(void) {
    func_02138af0();
}

extern void func_02138b40(void);
void func_0212698c(void) {
    func_02138b40();
}

void func_02126998(void *arg0, void *arg1) {
    func_02126c18();
    ((void (*)(void *, void *))func_021269bc)(arg0, arg1);
    func_02126c1c();
}

extern void func_02138ba8(void);
void func_021269bc(void) {
    func_02138ba8();
}

extern void func_02138c54(void);
void func_021269ec(void) {
    func_02138c54();
}

void func_021269f8(void *arg0, void *arg1) {
    func_02126c18();
    ((void (*)(void *, void *))func_02126a1c)(arg0, arg1);
    func_02126c1c();
}

extern void func_02138d68(void);
void func_02126a1c(void) {
    func_02138d68();
}

extern void func_02138dd8(void);
void func_02126a4c(void) {
    func_02138dd8();
}

extern void func_02138de0(void);
void func_02126a7c(void) {
    func_02138de0();
}

extern void func_02138de8(void);
void func_02126aac(void) {
    func_02138de8();
}

extern void func_02138df0(void);
void func_02126adc(void) {
    func_02138df0();
}

extern void func_02138df8(void);
void func_02126b0c(void) {
    func_02138df8();
}

extern void func_02138e00(void);
void func_02126b34(void) {
    func_02138e00();
}

extern void func_02138ea4(void);
void func_02126b5c(void) {
    func_02138ea4();
}

extern void func_02138f34(void);
void func_02126b94(void) {
    func_02138f34();
}

extern void func_02138f98(void);
void func_02126bc4(void) {
    func_02138f98();
}

extern void func_0213809c(void);
void func_02126c00(void) {
    func_0213809c();
}

extern void func_021380ac(void);
void func_02126c0c(void) {
    func_021380ac();
}

extern void func_0212bda8(void);
void func_02126c20(void) {
    func_0212bda8();
}

extern void func_02126e70(void *);
void func_02126c74(void *arg0) {
    if (arg0 != NULL) {
        func_02126e70(arg0);
    }
}

