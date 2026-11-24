/* 75 functions from 0x02126134 to 0x02126F50 (main), found by ds-decomp. */
#include "common.h"
extern void func_02125ea4(u32);
extern const u8 data_02145000[];
extern u32 data_02156580[2];
void func_02126b0c(void);

void func_02126adc(void);

void func_02126aac(void);

void func_02126a7c(void);

void func_02126a4c(void);

void func_021269bc(void);

void func_02126a1c(void);


extern void func_02138af0(void);
extern void func_02126c18(void);
extern void func_02126c1c(void);
extern void func_02126c20(void);
extern void *func_02126924(void *);
extern void *func_02126c2c(void *, u32);
extern void func_02126cb0(void *, s32, s32, s32, s32);
extern void func_02126c74(void *);
extern u8 data_021564b0[52];
extern u8 data_021564e4[52];
extern u8 data_02156518[48];
extern u8 data_02156548[56];
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
    if (func_021265b4(*(void **)((u8 *)arg0 + 0x10))
        && (func_021265bc)(*(void **)((u8 *)arg0 + 0x10))
        && func_02138d60(arg1) == 1) {
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

s32 func_02126480(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    func_02126c18();
    func_02126330(arg0);
    func_02126c1c();
    return 0;
}

void *func_021264a8(void *arg0, u32 arg1) {
    if (arg0 == NULL) {
        ((void (*)(void *))func_02126c20)(data_021564b0);
        return NULL;
    }
    if (arg1 < 0x60) {
        ((void (*)(void *))func_02126c20)(data_021564e4);
        return NULL;
    }
    func_02126778(arg0);
    return arg0;
}

void func_021264f0(void *arg0) {
    if (arg0 != NULL) {
        func_02126778(arg0);
    }
}

BOOL func_02126504(void *arg0) {
    void *ptr;
    if (*(void **)((u8 *)arg0 + 4) != NULL) {
        ((void (*)(void *))func_02126c20)(data_02156518);
        return FALSE;
    }
    ptr = func_02126c2c((u8 *)arg0 + 8, 0x44);
    *(void **)((u8 *)arg0 + 4) = ptr;
    if (ptr == NULL) {
        ((void (*)(void *))func_02126c20)(data_02156548);
        return FALSE;
    }
    func_02126cb0(ptr, 0, 0, 0, 0);
    return TRUE;
}

void func_02126584(void *arg0) {
    if (*(void **)((u8 *)arg0 + 4) != NULL) {
        func_02126c74(*(void **)((u8 *)arg0 + 4));
        *(void **)((u8 *)arg0 + 4) = NULL;
    }
}

void func_021265a8(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0x4c) = 0;
}

s32 func_021265b4(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x4c);
}

s32 func_021265bc(void *arg0) {
    return *(s8 *)((u8 *)arg0 + 0x50);
}

extern u32 func_02126c90(void *);
extern void func_02013878(void *, s32, s32);
u32 func_021265c4(void *arg0) {
    return func_02126c90(*(void **)((u8 *)arg0 + 4));
}

void func_02126778(void *arg0) {
    *(void **)((u8 *)arg0 + 0x00) = NULL;
    *(void **)((u8 *)arg0 + 0x04) = NULL;
    func_02013878((u8 *)arg0 + 0x08, 0, 0x44);
    *(s32 *)((u8 *)arg0 + 0x4c) = 0;
    *(u8 *)((u8 *)arg0 + 0x50) = 0;
    *(s32 *)((u8 *)arg0 + 0x54) = 0x1e;
    *(s32 *)((u8 *)arg0 + 0x58) = 0x3c;
    *(s32 *)((u8 *)arg0 + 0x5c) = 0x78;
}

void func_021267c0(void *arg0, u8 arg1) {
    *(u8 *)((u8 *)arg0 + 0x50) = arg1;
}

s32 func_021267c8(s32 *arg0) {
    s32 val;
    if (arg0[0x17] == 0) {
        return 0;
    }
    val = arg0[0x15];
    return val - (val * (s32)func_02126c90((void *)arg0[1])) / -arg0[0x17];
}

s32 func_02126804(s32 *arg0) {
    if (arg0[0x17] == 0) {
        return 0;
    }
    return arg0[0x15] - (arg0[0x16] * (s32)func_02126c90((void *)arg0[1])) / -arg0[0x17];
}

extern s32 func_0212689c(s32, s32, s32);
extern void func_02125ea4(u32);
extern const u8 data_02145000[];
extern u32 data_02156580[2];
s32 func_02126868(s32 arg0, s32 arg1, s32 arg2) {
    s32 ret;
    func_02126c18();
    ret = func_0212689c(arg0, arg1, arg2);
    func_02126c1c();
    return ret;
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

void *func_02126900(void *arg0) {
    void *ret;
    func_02126c18();
    ret = func_02126924(arg0);
    func_02126c1c();
    return ret;
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

void func_02126a28(void *arg0, void *arg1) {
    func_02126c18();
    ((void (*)(void *, void *))func_02126a4c)(arg0, arg1);
    func_02126c1c();
}

extern void func_02138dd8(void);
void func_02126a4c(void) {
    func_02138dd8();
}

void func_02126a58(void *arg0, void *arg1) {
    func_02126c18();
    ((void (*)(void *, void *))func_02126a7c)(arg0, arg1);
    func_02126c1c();
}

extern void func_02138de0(void);
void func_02126a7c(void) {
    func_02138de0();
}

void func_02126a88(void *arg0, void *arg1) {
    func_02126c18();
    ((void (*)(void *, void *))func_02126aac)(arg0, arg1);
    func_02126c1c();
}

extern void func_02138de8(void);
void func_02126aac(void) {
    func_02138de8();
}

void func_02126ab8(void *arg0, void *arg1) {
    func_02126c18();
    ((void (*)(void *, void *))func_02126adc)(arg0, arg1);
    func_02126c1c();
}

extern void func_02138df0(void);
void func_02126adc(void) {
    func_02138df0();
}

void func_02126ae8(void *arg0, void *arg1) {
    func_02126c18();
    ((void (*)(void *, void *))func_02126b0c)(arg0, arg1);
    func_02126c1c();
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

extern s32 func_02126b94(void *, void *);
s32 func_02126b68(void *arg0, void *arg1) {
    s32 ret;
    func_02126c18();
    ret = func_02126b94(arg0, arg1);
    func_02126c1c();
    return ret;
}

extern s32 func_02138f34(void *, void *);
s32 func_02126b94(void *arg0, void *arg1) {
    return func_02138f34(arg0, arg1);
}

extern void func_02138f98(void);
void func_02126bc4(void) {
    func_02138f98();
}

extern void func_02126be4(void);
void func_02126bd0(void) {
    func_02126c18();
    func_02126be4();
    func_02126c1c();
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

