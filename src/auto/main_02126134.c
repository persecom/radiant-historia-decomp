/* 75 functions from 0x02126134 to 0x02126F50 (main), found by ds-decomp. */
#include "common.h"

extern BOOL func_02127350(void *);
extern BOOL func_0212737c(void *);
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

void func_021265d4(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
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

void func_02126844(void) {
    data_02156580[0] = (u32)data_02145000;
    func_02125ea4(data_02156580[1]);
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

s32 func_0212689c(s32 arg0, s32 arg1, s32 arg2) {
    return func_02126010(data_02156580[1], arg0, arg1, arg2);
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

extern void func_021260ec(u32, void *);
extern s32 func_02126010(u32, s32, s32, s32);
extern void func_0212698c(void);
extern void func_021269ec(void);
void func_021268e4(void *arg0) {
    func_021260ec(data_02156580[1], arg0);
}

void *func_02126900(void *arg0) {
    void *ret;
    func_02126c18();
    ret = func_02126924(arg0);
    func_02126c1c();
    return ret;
}

extern void *func_02126134(u32, void *);
extern u8 data_02156588[52];
extern u8 data_021565bc[52];
void *func_02126924(void *arg0) {
    return func_02126134(data_02156580[1], arg0);
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

void func_02126970(void *arg0) {
    func_02126c18();
    ((void (*)(void *))func_0212698c)(arg0);
    func_02126c1c();
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

void *func_021269c8(void *arg0) {
    void *ret;
    func_02126c18();
    ret = ((void *(*)(void *))func_021269ec)(arg0);
    func_02126c1c();
    return ret;
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

extern void func_02126b34(void);
extern void func_02126b5c(void);
extern void func_02126bc4(void);
void func_02126b18(void *arg0) {
    func_02126c18();
    ((void (*)(void *))func_02126b34)(arg0);
    func_02126c1c();
}

extern void func_02138e00(void);
void func_02126b34(void) {
    func_02138e00();
}

void func_02126b40(void *arg0) {
    func_02126c18();
    ((void (*)(void *))func_02126b5c)(arg0);
    func_02126c1c();
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

void *func_02126ba0(void *arg0) {
    void *ret;
    func_02126c18();
    ret = ((void *(*)(void *))func_02126bc4)(arg0);
    func_02126c1c();
    return ret;
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

void func_02126be4(void) {
    func_0212642c((void *)data_02156580[1]);
    ((void (*)(void))func_021265a8)();
}

extern void func_0213809c(void);
void func_02126c00(void) {
    func_0213809c();
}

extern void func_021380ac(void);
void func_02126c0c(void) {
    func_021380ac();
}

void func_02126c18(void) {
}

void func_02126c1c(void) {
}

extern void func_0212bda8(void);
void func_02126c20(void) {
    func_0212bda8();
}

void func_02126e70(void *);
void *func_02126c2c(void *arg0, u32 arg1) {
    if (arg0 == NULL) {
        ((void (*)(void *))func_02126c20)(data_02156588);
        return NULL;
    }
    if (arg1 < 0x44) {
        ((void (*)(void *))func_02126c20)(data_021565bc);
        return NULL;
    }
    func_02126e70(arg0);
    return arg0;
}

extern void func_02126e70(void *);
void func_02126c74(void *arg0) {
    if (arg0 != NULL) {
        func_02126e70(arg0);
    }
}

s32 func_02126c88(s8 *arg0) {
    return *arg0;
}

u32 func_02126c90(void *arg0) {
    return *(u32 *)((u8 *)arg0 + 0x1c);
}

void func_02126c98(void *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x1c) = arg1;
    *(s32 *)((u8 *)arg0 + 0x20) = func_0212716c((s32)arg0, arg1);
}

void func_02126cb0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 prev = *(s32 *)((u8 *)arg0 + 0x24);
    s32 ret;
    *(s32 *)((u8 *)arg0 + 0x28) = prev;
    *(s32 *)((u8 *)arg0 + 0x24) = arg1;
    ret = func_02126f08((s32)arg0, *(s32 *)((u8 *)arg0 + 0x1c), arg1, arg2);
    *(s32 *)((u8 *)arg0 + 0x10) = arg3;
    *(s32 *)((u8 *)arg0 + 0x14) = arg4;
    *(s32 *)((u8 *)arg0 + 4) = ret;
    *(s32 *)((u8 *)arg0 + 8) = 0;
    *(s32 *)((u8 *)arg0 + 0xc) = 0;
    if (arg3 > 0) {
        *(u8 *)arg0 = 1;
        return;
    }
    *(u8 *)arg0 = 2;
    func_02127350(arg0);
}

void func_02126d1c(void *arg0) {
    func_02126c98(arg0, *(s32 *)((u8 *)arg0 + 0x24));
    *(u8 *)arg0 = 0;
    func_0212737c(arg0);
}

extern s32 func_02126f50(void *, s32);
extern void func_02126c98(void *, s32);
void func_02126d40(u8 *arg0) {
    s32 state = func_02126c88((s8 *)arg0);
    if (state == 0) {
        return;
    }
    *(s32 *)(arg0 + 8) += 1;
    if (*(s32 *)(arg0 + 8) < *(s32 *)(arg0 + 0x10)) {
        return;
    }
    if (state == 1) {
        state = 2;
        arg0[0] = 2;
        func_02127350(arg0);
    }
    if (state == 2) {
        s32 v = *(s32 *)(arg0 + 0x20) + *(s32 *)(arg0 + 4);
        *(s32 *)(arg0 + 0x20) = v;
        if (v <= 0) {
            v = 0;
        }
        *(s32 *)(arg0 + 0x20) = v;
        if (v >= 0x316938) {
            v = 0x316938;
        }
        *(s32 *)(arg0 + 0x20) = v;
        *(s32 *)(arg0 + 0x1c) = func_02126f50(arg0, v);
        if ((*(s32 *)(arg0 + 4) > 0 && *(s32 *)(arg0 + 0x1c) >= *(s32 *)(arg0 + 0x24)) ||
            (*(s32 *)(arg0 + 4) < 0 && *(s32 *)(arg0 + 0x1c) <= *(s32 *)(arg0 + 0x24)) ||
            *(s32 *)(arg0 + 4) == 0) {
            func_02126c98(arg0, *(s32 *)(arg0 + 0x24));
            *(s32 *)(arg0 + 0xc) = *(s32 *)(arg0 + 8);
            state = 3;
            arg0[0] = 3;
        }
    }
    if (state != 3) {
        return;
    }
    if (*(s32 *)(arg0 + 8) - *(s32 *)(arg0 + 0xc) < *(s32 *)(arg0 + 0x14)) {
        return;
    }
    arg0[0] = 0;
    func_0212737c(arg0);
}

void func_02126e50(void *arg0, u32 arg1, u32 arg2, u32 arg3) {
    *(u32 *)((u8 *)arg0 + 0x2c) = arg1;
    *(u32 *)((u8 *)arg0 + 0x30) = arg2;
    *(u32 *)((u8 *)arg0 + 0x34) = arg3;
}

void func_02126e60(void *arg0, u32 arg1, u32 arg2, u32 arg3) {
    *(u32 *)((u8 *)arg0 + 0x38) = arg1;
    *(u32 *)((u8 *)arg0 + 0x3c) = arg2;
    *(u32 *)((u8 *)arg0 + 0x40) = arg3;
}

void func_02126e70(void *arg0) {
    u8 *p = arg0;
    s32 neg = -0x3c0;
    p[0] = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 0xc) = 0;
    *(s32 *)(p + 0x10) = 0;
    *(s32 *)(p + 0x14) = 0;
    p[0x18] = 0;
    *(s32 *)(p + 0x1c) = neg;
    *(s32 *)(p + 0x20) = 0;
    *(s32 *)(p + 0x24) = neg;
    *(s32 *)(p + 0x28) = neg;
    p[0x2c] = 0;
    p[0x2d] = 0;
    p[0x2e] = 0;
    p[0x2f] = 0;
    p[0x30] = 0;
    p[0x31] = 0;
    p[0x32] = 0;
    p[0x33] = 0;
    p[0x34] = 0;
    p[0x35] = 0;
    p[0x36] = 0;
    p[0x37] = 0;
    p[0x38] = 0;
    p[0x39] = 0;
    p[0x3a] = 0;
    p[0x3b] = 0;
    p[0x3c] = 0;
    p[0x3d] = 0;
    p[0x3e] = 0;
    p[0x3f] = 0;
    p[0x40] = 0;
    p[0x41] = 0;
    p[0x42] = 0;
    p[0x43] = 0;
}

s32 func_0212716c(s32, s32);
s32 func_02126f08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 a;
    s32 b;
    if (arg3 <= 0) {
        return 0x316938;
    }
    a = func_0212716c(arg0, arg2);
    b = func_0212716c(arg0, arg1);
    return (a - b) / arg3;
}

