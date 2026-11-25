/* 36 functions from 0x0200F244 to 0x020101F8 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_0215f0a0[4];
extern void func_0200fa74(void *, s32);
extern u8 data_0215f120[1312];
extern void func_02006df4(void);
extern void func_02006e00(u32, u32);
extern s32 func_02006638(void *, s32);
extern void func_020065c8(void *);
extern u32 data_0213ea64[];
extern void func_02006d58(void);
extern void func_02006da8(u32, u32);
extern void func_02006d8c(u32, u32);
extern void func_02006de8(void);
extern void func_0200fddc(u8 *);
extern s32 func_0200fca4(void (*)(void *), s32);
extern u16 func_020081e0(void);
extern u32 func_02008128(void);
extern void func_0200813c(u32);
extern void func_02006510(void *);
extern void func_02006560(void *);
extern s32 func_0200fd64(u8 *, s32, u32, u32);
extern s32 func_02005da4(u16);
extern void func_0200851c(void *, s32);
extern void func_02007e58(void *, s32, s32, void *, void *);
extern u32 data_0215f078[10];
u32 func_0200f684(u32);
s32 func_0200f6ec(void);
s32 func_0200f728(s32 *);

extern u32 data_0215f760[];
void func_02009008(void *, void *, u32);
s32 func_0200fbc0(void);
void func_0200fd18(void);
void func_020062d8(void *, void (*)(void), u32, void *, u32, u32);
void func_0200fbe8(void);
void func_02010dc8(void);
void func_02010e4c(void);
void func_0200f974(u32);

extern void func_02008414(void);
extern void func_02008460(void *);
extern void func_02007e44(void *);
extern s32 func_0200f83c(u16 *);
extern void func_0200f7e4(u8 *);
extern void func_02008474(void *, s32, s32, s32);
extern void func_02005d88(void);
extern void func_0200faec(u32, s32);
extern s32 func_020106ac(void);
extern void func_020106a0(void);

extern s32 func_0200a6e4(s32, s32, s32);
s32 func_0200f6fc(s32 arg0);

extern void func_0200fa74(void *, s32);

#pragma optimization_level 2

#pragma optimization_level 4

extern u8 data_0215f0c0[];
typedef struct Link { void *unused; void *arg; void (*cb)(void *, u32, u32); } Link;
extern Link *data_0215f640;
extern void func_02008e68(s32, void *, s32);
extern void func_02006dc4(void *, s32);
extern void func_0200a674(s32, void *);
extern void func_0200fedc(u32, u32, u32);

#pragma opt_common_subs off

void func_0200fc34(u32 arg0, u32 arg1) {
    u32 irq = func_02008128();
    void **node = (void **)data_0215f640;
    void ***prev = (void ***)&data_0215f640;
    while (node != NULL) {
        void (*cb)(void *, u32, u32) = (void (*)(void *, u32, u32))node[2];
        if (cb != NULL) {
            cb(node[1], arg0, arg1);
        }
        {
            void **cur = *prev;
            if (cur == node) {
                prev = (void ***)cur;
            }
        }
        node = *prev;
    }
    func_0200813c(irq);
}
s32 func_0200fca4(void (*cb)(void *), s32 arg1) {
    u8 *base = data_0215f120;
    if (arg1 != 0) {
        func_02006638(base + 0x28, *(u32 *)(base + 8));
        *(void (**)(void *))(base + 0x4e8) = cb;
        *(u32 *)(base + 4) |= 8;
        func_020065c8(base + 0x28);
    } else {
        cb(base);
        func_0200fddc(base);
    }
    if (arg1 != 0) {
        return 1;
    }
    return **(u32 **)base == 0;
}

void func_0200fd18(void) {
    u8 *base = data_0215f120;
    for (;;) {
        u32 token = func_02008128();
        for (;;) {
            if ((*(u32 *)(base + 4) & 8) != 0) {
                break;
            }
            func_02006510(NULL);
        }
        func_0200813c(token);
        func_0200fca4(*(void (**)(void *))(base + 0x4e8), 0);
    }
}

s32 func_0200fd64(u8 *arg0, s32 arg1, u32 arg2, u32 arg3) {
u32 token = func_02008128();
while (*(u32 *)(arg0 + 4) & 4) { func_02006510(arg0 + 0x4f4); }
if (arg1) {
*(u32 *)(arg0 + 0x4ec) = arg2;
*(u32 *)(arg0 + 4) |= 4;
*(u32 *)(arg0 + 0x4f0) = arg3;
}
func_0200813c(token);
return **(u32 **)arg0 == 0;
}

void func_0200fddc(u8 *arg0) {
    void (*cb)(u32) = *(void (**)(u32))(arg0 + 0x4ec);
    u32 cbarg = *(u32 *)(arg0 + 0x4f0);
    u32 state = func_02008128();
    *(u32 *)(arg0 + 4) &= ~0x4c;
    func_02006560(arg0 + 0x4f4);
    func_0200813c(state);
    if (cb != NULL) {
        cb(cbarg);
    }
}

u32 func_0200fe28(u32 arg0) {
    u32 result = 0;
    u32 flag = (arg0 & 0x10) != 0;
    arg0 &= ~0x10;
    if (arg0 > 3) {
        goto end;
    }
    if (flag == 0) {
        result = (u32)data_0213ea64;
        goto end;
    }
    func_02008414();
end:
    return result;
}

void func_0200fe64(u32 arg0, u32 arg1, u32 arg2) {
    if (arg1 >= arg2) {
        func_02006df4();
    } else {
        func_02006e00(arg0, arg1);
    }
}

void func_0200fe80(u32 arg0,u32 arg1,u32 arg2) {
u32 rem;
if(arg1>=arg2){func_02006d58(); return;}
rem=arg0&31;
if(rem){arg0-=rem;func_02006da8(arg0,32);func_02006da8(arg0+arg1,32);arg1+=32;}
func_02006d8c(arg0,arg1);func_02006de8();
}

#pragma peephole off
