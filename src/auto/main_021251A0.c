/* 54 functions from 0x021251A0 to 0x02126134 (main), found by ds-decomp. */
#include "common.h"

extern void (*const data_02144f70[])(u32, u32, u32);
extern void func_02006dc4(u32, u32);
extern s32 func_02125074(void *);
extern u16 func_02125054(void *, u16);
extern u32 data_02173180[5];
extern void func_02125524(s32, s32, s32, s32, s32);
extern void func_0212e610(void);
extern s32 func_02125708(u32 *);
extern s32 func_0212508c(u8 *);
extern u8 data_02173198[];
extern u8 data_02173194;
extern u32 data_021561f4[];
extern void func_02125e68(u32, u32);
extern void **func_02125dc4(void *);
extern s32 func_021269c8(void *);
extern void func_02125e20(void *);
extern void func_02126940(void *, void *);
extern void func_02126970(void *);
extern u8 data_0217319c[];
extern u8 data_02173354[];
extern char data_02156388[];
extern void func_0200baa4(void *);
extern void func_02126998(void *, s32);
extern void func_02015a10(void *, const char *, u32, u32);

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

u8 *func_021253d8(u8 *arg0) {
    return *(u8 **)(arg0 + 0) + (*(u16 *)(arg0 + 0xa) << 4);
}

s32 func_021253e8(u8 *arg0) {
    if (func_0212508c(arg0) != 0) {
        return 0;
    }
    *(u16 *)(arg0 + 8) = func_02125054(arg0, *(u16 *)(arg0 + 8));
    *(u16 *)(arg0 + 0xc) -= 1;
    return 1;
}

void func_02125424(u32 arg0, u32 arg1) {
    u32 *p = data_02173180;
    p[0] = arg0;
    p[1] = arg1;
    func_02125374((u8 *)data_02173180);
}

void func_02125448(void) {
    u8 *p = func_021253c8((u8 *)data_02173180);
    if (!func_021253e8((u8 *)data_02173180)) {
        return;
    }
    func_02125340((u32 *)p);
    do {
        *(u32 *)((u8 *)data_02173180 + 0x10) -= *(u32 *)(p + 0xc);
        p = func_021253c8((u8 *)data_02173180);
    } while (func_021253e8((u8 *)data_02173180));
}

s32 func_021254a8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *node;
    if (func_02125074((u8 *)data_02173180) != 0) {
        return 0;
    }
    node = func_021253d8((u8 *)data_02173180);
    *(s32 *)(node + 0) = arg0;
    *(s32 *)(node + 4) = arg2;
    *(s32 *)(node + 8) = arg1;
    *(s32 *)(node + 0xc) = arg3;
    func_0212538c((u8 *)data_02173180);
    *(s32 *)((u8 *)data_02173180 + 0x10) += *(s32 *)(node + 0xc);
    return 1;
}

void func_02125510(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02125524(arg0, arg1, arg2, arg3, 0);
}

void func_021256b4(void) {
    if (data_02173194 != 0) {
        func_0212e610();
    }
}

s32 func_02125a5c(void *arg0) {
    s32 ret;
    if (!data_02173194) {
        func_02125e68(data_021561f4[11], data_021561f4[1]);
        return 0;
    }
    if (arg0 == NULL) {
        func_02125e68(data_021561f4[11], data_021561f4[5]);
        return 0;
    }
    ret = func_021269c8(*func_02125dc4(arg0));
    if (ret == 0) {
        return 0;
    }
    if (ret == 1) {
        return 1;
    }
    if (ret == 2) {
        return 2;
    }
    if (ret == 3) {
        return 3;
    }
    return 0;
}

void func_02125af0(void *arg0, void *arg1) {
    void **p;
    if (!data_02173194) {
        func_02125e68(data_021561f4[10], data_021561f4[1]);
        return;
    }
    if (arg0 == NULL) {
        func_02125e68(data_021561f4[10], data_021561f4[5]);
        return;
    }
    if (arg1 == NULL) {
        func_02125e68(data_021561f4[10], data_021561f4[4]);
        return;
    }
    p = func_02125dc4(arg0);
    func_02125e20(p);
    func_02126940(*p, arg1);
}

void func_02125b78(void *arg0) {
    if (!data_02173194) {
        func_02125e68(data_021561f4[2], data_021561f4[1]);
        return;
    }
    if (arg0 == NULL) {
        func_02125e68(data_021561f4[2], data_021561f4[5]);
        return;
    }
    func_02126970(*func_02125dc4(arg0));
}

void func_02125bd4(void *arg0, s32 arg1) {
    if (!data_02173194) {
        func_02125e68(data_021561f4[6], data_021561f4[1]);
        return;
    }
    if (arg0 == NULL) {
        func_02125e68(data_021561f4[6], data_021561f4[5]);
        return;
    }
    func_02126998(*func_02125dc4(arg0), arg1);
}

void func_02125e20(void *arg0) {
    u8 *p = (u8 *)arg0;
    s32 flag = (*(u32 *)(p + 0x28) & 0x10) != 0;
    if (flag != 0) {
        func_0200baa4(p + 0x1c);
    }
}

void func_02125e48(void *arg0, void *arg1) {
    (*(void (**)(void *))((u8 *)data_02173198 + 0x1fc))(arg1);
}

void func_02125e64(void) {
}

void func_02125e68(u32 arg0, u32 arg1) {
    func_02015a10(data_02173354, data_02156388, arg0, arg1);
    (*(void (**)(void *))((u8 *)data_02173198 + 0x1fc))(data_02173354);
}

