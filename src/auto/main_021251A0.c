/* 54 functions from 0x021251A0 to 0x02126134 (main), found by ds-decomp. */
#include "common.h"

extern void (*const data_02144f70[])(u32, u32, u32);
extern void func_02006dc4(u32, u32);
extern s32 func_02125074(void *);
extern u16 func_02125054(void *, u16);
extern u8 data_02173198[];
extern u8 data_02173194;
extern u32 data_021561f4[];
extern void func_02125e68(u32, u32);
extern void **func_02125dc4(void *);
extern s32 func_021269c8(void *);
extern void func_02125e20(void *);
extern void func_02126940(void *, void *);
extern void func_02126970(void *);

extern void func_02003ab8(void);
void func_021251a0(void) {
    func_02003ab8();
}

extern void func_02003b98(void);
void func_021251ac(void) {
    func_02003b98();
}

extern void func_020036b8(void);
void func_021251b8(void) {
    func_020036b8();
}

extern void func_020035f8(void);
void func_021251c4(void) {
    func_020035f8();
}

extern void func_02004138(void);
extern void func_02004180(u32, u32, u32);
extern void func_020041f0(void);
void func_021251d0(u32 arg0, u32 arg1, u32 arg2) {
    func_02004138();
    func_02004180(arg0, arg1, arg2);
    func_020041f0();
}

extern void func_02003ff8(void);
extern void func_02004084(u32, u32, u32);
extern void func_020040f8(void);
void func_021251fc(u32 arg0, u32 arg1, u32 arg2) {
    func_02003ff8();
    func_02004084(arg0, arg1, arg2);
    func_020040f8();
}

extern void func_02003770(void);
void func_02125228(void) {
    func_02003770();
}

extern void func_02003830(void);
void func_02125234(void) {
    func_02003830();
}

extern void func_02003ce8(void);
void func_02125240(void) {
    func_02003ce8();
}

extern void func_02003dc8(void);
void func_0212524c(void) {
    func_02003dc8();
}

extern void func_02003ea8(void);
void func_02125258(void) {
    func_02003ea8();
}

extern void func_02003f88(void);
void func_02125264(void) {
    func_02003f88();
}

extern void func_02003968(void);
void func_02125270(void) {
    func_02003968();
}

extern void func_02003a48(void);
void func_0212527c(void) {
    func_02003a48();
}

extern void func_02003b28(void);
void func_02125288(void) {
    func_02003b28();
}

extern void func_02003c08(void);
void func_02125294(void) {
    func_02003c08();
}

void func_021252a0(void) {
    func_02003b28();
}

void func_021252ac(void) {
    func_02003c08();
}

extern void func_02003714(void);
void func_021252b8(void) {
    func_02003714();
}

extern void func_0200365c(void);
void func_021252c4(void) {
    func_0200365c();
}

extern void func_020042e4(void);
extern void func_020042fc(u32, u32, u32);
extern void func_02004364(void);
void func_021252d0(u32 arg0, u32 arg1, u32 arg2) {
    func_020042e4();
    func_020042fc(arg0, arg1, arg2);
    func_02004364();
}

extern void func_0200422c(void);
extern void func_02004244(u32, u32, u32);
extern void func_020042ac(void);
void func_021252fc(u32 arg0, u32 arg1, u32 arg2) {
    func_0200422c();
    func_02004244(arg0, arg1, arg2);
    func_020042ac();
}

extern void func_020037d4(void);
void func_02125328(void) {
    func_020037d4();
}

extern void func_02003894(void);
void func_02125334(void) {
    func_02003894();
}

void func_02125340(u32 *arg0) {
    void (*fn)(u32, u32, u32) = data_02144f70[arg0[0]];
    func_02006dc4(arg0[1], arg0[3]);
    fn(arg0[1], arg0[2], arg0[3]);
}

void func_02125374(u8 *arg0) {
    *(u16 *)(arg0 + 0xa) = 0;
    *(u16 *)(arg0 + 8) = 0;
    *(u16 *)(arg0 + 0xc) = 0;
    *(u32 *)(arg0 + 0x10) = 0;
}

s32 func_0212538c(u8 *arg0) {
    if (func_02125074(arg0) != 0) {
        return 0;
    }
    *(u16 *)(arg0 + 0xa) = func_02125054(arg0, *(u16 *)(arg0 + 0xa));
    *(u16 *)(arg0 + 0xc) += 1;
    return 1;
}

u8 *func_021253c8(u8 *arg0) {
    return *(u8 **)(arg0 + 0) + (*(u16 *)(arg0 + 8) << 4);
}

void func_02125e48(void *arg0, void *arg1) {
    (*(void (**)(void *))((u8 *)data_02173198 + 0x1fc))(arg1);
}

void func_02125e64(void) {
}

