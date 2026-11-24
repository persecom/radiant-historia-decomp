/* 58 functions from 0x0212E764 to 0x0212F760 (main), found by ds-decomp. */
#include "common.h"
extern u32 data_02145910;
extern s32 data_02174798;
extern u8 data_02156e68[], data_02156eb8[], data_02156f08[], data_02156f38[], data_02156f3c[], data_02156f44[];
extern void func_021336a0(void);
extern void func_02133df8(void);

extern u32 data_02156f4c[4];
extern u8 data_0215a0d0[8];
extern u32 data_02174524[0x100];
extern u32 data_021744ec[5];
extern u32 data_021744d8[4];
extern s32 func_02138500(void);
extern void func_0213807c(void);
extern void func_0212eaa4(void);
extern void func_0213808c(void);
extern void func_02006510(s32);
extern void func_0212c4b8(s32);
extern void func_0212e860(void *);
extern u32 func_0212ea54(void);
extern void func_02013878(void *, s32, u32);
extern void func_0212f178(void);
extern u32 data_02145914[];

typedef struct {
    u8 pad[0x24];
    s32 (*method)(void *, s32);
} Unk_0212f038;

typedef struct {
    u8 pad[0x24];
    s32 (*method)(void *, s32);
} Vtable_0212f038;

extern void func_021383cc(void);
void func_0212e764(void) {
    while (data_02174524[0] == 1) {
        if (func_02138500() == 0) {
            func_0213807c();
            if (data_021744d8[9] == 0) {
                data_021744d8[9] = 1;
                func_0212eaa4();
            }
            func_0213808c();
            func_02006510(0);
        }
        data_02174524[0x270 / 4]++;
    }
    data_02174524[1] = 1;
}

void func_0212e7e4(void) {
    func_021383cc();
}

s32 func_0212e7f0(u32 arg0, void *arg1) {
    data_02174524[8] = arg0;
    data_021744ec[0] = 0;
    data_021744ec[1] = 0;
    data_021744ec[2] = 0;
    data_021744ec[3] = 0;
    data_021744ec[4] = 0;
    if (arg0 <= 1) {
        func_0212c4b8(1);
        return 1;
    }
    if (arg0 == 2) {
        func_0212c4b8(2);
    }
    func_0212e860(arg1);
    return 1;
}

BOOL func_0212ea3c(void) {
    return func_0212ea54() != 0;
}

extern u32 data_021744d8[4];
u32 func_0212ea54(void) {
    return data_021744d8[0];
}

void func_0212ea64(void) {
    data_021744d8[0]++;
}

void func_0212ea7c(void) {
    data_02174524[3] = 1;
}

void func_0212ea90(void) {
    data_02174524[3] = 0;
}

void func_0212eaa4(void) {
    if (data_021744d8[7] != 0) {
        ((void (*)(u32))data_021744d8[7])(data_021744d8[8]);
    }
}

extern void func_02134748(void);
void func_0212eac8(void) {
    func_02134748();
}

extern void func_021347e8(void);
void func_0212ead4(void) {
    func_021347e8();
}

extern void func_0213473c(void);
void func_0212eae0(void) {
    func_0213473c();
}

extern void func_02134908(void);
void func_0212eaec(void) {
    func_02134908();
}

extern void func_021359e4(void *);
extern void func_02134b34(void *);
void func_0212eaf8(void *arg0) {
    func_021359e4(arg0);
    func_02134b34(arg0);
}

extern void func_02134c00(void);
void func_0212eb10(void) {
    func_02134c00();
}

extern s32 func_02134cb4(void *, void *, s32);
s32 func_0212eb1c(void *arg0, void *arg1) {
    return func_02134cb4(arg0, arg1, 1);
}

extern void func_02134efc(void);
void func_0212eb2c(void) {
    func_02134efc();
}

extern void func_02134f18(void);
void func_0212eb38(void) {
    func_02134f18();
}

extern void func_02134f34(void);
void func_0212eb44(void) {
    func_02134f34();
}

extern void func_0213551c(void);
void func_0212eb50(void) {
    func_0213551c();
}

extern void func_02135558(void);
void func_0212eb5c(void) {
    func_02135558();
}

extern void func_02135564(void);
void func_0212eb68(void) {
    func_02135564();
}

extern void func_02135650(void);
void func_0212eb74(void) {
    func_02135650();
}

extern void func_02135698(void);
void func_0212eb80(void) {
    func_02135698();
}

extern void func_02135724(void);
void func_0212eb8c(void) {
    func_02135724();
}

extern void func_02135730(void);
void func_0212eb98(void) {
    func_02135730();
}

extern void func_02135744(void);
void func_0212eba4(void) {
    func_02135744();
}

extern void func_0213575c(void);
void func_0212ebb0(void) {
    func_0213575c();
}

void func_0212ebbc(void) {
}

s32 func_0212ebc0(void) {
    return 0;
}

void func_0212ebc8(void *arg0, void *arg1) {
    func_0212bda8(arg1);
}

void func_0212ebd8(void) {
if (func_0200788c(data_02145910) != 0 && func_02007a68() != 1) { func_0212bda8(data_02156e68); return; }
if (func_020062c8() != 1) { func_0212bda8(data_02156eb8); return; }
if (data_02174798 == 1) { func_0212bda8(data_02156f08); return; }
func_02133e04();
func_02133578(func_0212ebc8, 0);
func_02132cbc(data_02156f38, func_021336a0, 0);
func_02132cbc(data_02156f3c, func_02133df8, 0);
func_02132e4c(data_02156f44);
data_02174798 = 1;
}

void func_0212ecb0(u8 *arg0, u8 *arg1) {
    s8 *src = (s8 *)arg0;
    arg1[0] = src[0];
    arg1[1] = src[1];
    arg1[2] = src[2];
    arg1[3] = src[3];
    *(u32 *)(arg1 + 4) = (arg0[4] << 24) | (arg0[5] << 16) | (arg0[6] << 8) | arg0[7];
    *(u32 *)(arg1 + 8) = (arg0[8] << 24) | (arg0[9] << 16) | (arg0[10] << 8) | arg0[11];
    *(u16 *)(arg1 + 0xc) = (arg0[0xc] << 8) | arg0[0xd];
    arg1[0x3c] = src[0xe];
    arg1[0x3d] = src[0xf];
}

void func_0212ed3c(u8 *arg0, u8 *arg1) {
    *(u16 *)(arg1 + 0xe) = (arg0[2] << 8) | arg0[3];
}

void func_0212ed50(u8 *arg0, u8 *arg1) {
    *(u16 *)(arg1 + 0) = (arg0[0] << 8) | arg0[1];
    *(u16 *)(arg1 + 2) = (arg0[2] << 8) | arg0[3];
    *(u32 *)(arg1 + 4) = (arg0[4] << 24) | (arg0[5] << 16) | (arg0[6] << 8) | arg0[7];
    *(u32 *)(arg1 + 8) = (arg0[8] << 24) | (arg0[9] << 16) | (arg0[10] << 8) | arg0[11];
    *(u32 *)(arg1 + 0xc) = (arg0[0xc] << 24) | (arg0[0xd] << 16) | (arg0[0xe] << 8) | arg0[0xf];
    *(u32 *)(arg1 + 0x10) = (arg0[0x10] << 24) | (arg0[0x11] << 16) | (arg0[0x12] << 8) | arg0[0x13];
}

void func_0212ee04(u8 *arg0, u8 *arg1) {
    s8 *src = (s8 *)arg0;
    s8 c;
    *(u16 *)(arg1 + 0) = (arg0[0] << 8) | arg0[1];
    if (*(s16 *)(arg1 + 0) > 0) {
        *(u16 *)(arg1 + 2) = (arg0[2] << 8) | arg0[3];
    }
    c = src[4];
    arg1[4] = c;
    if (c > 0) {
        arg1[5] = src[5];
    }
    c = src[6];
    arg1[6] = c;
    if (c > 0) {
        arg1[7] = src[7];
    }
    c = src[8];
    arg1[8] = c;
    if (c > 0) {
        arg1[9] = src[9];
    }
    c = src[10];
    arg1[10] = c;
    if (c > 0) {
        arg1[11] = src[11];
    }
}

void func_0212efe8(u32 *arg0, u32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = data_02156f4c[2];
    }
    if (arg1 != NULL) {
        *arg1 = data_02156f4c[0];
    }
}

void func_0212f010(u32 *arg0, u32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = data_02156f4c[3];
    }
    if (arg1 != NULL) {
        *arg1 = data_02156f4c[1];
    }
}

u32 *func_0212f038(void *arg0, u8 *arg1, s32 arg2) {
    u32 *p;
    s32 zero;
    s32 a;
    s32 b;
    s32 sum;
    if (arg2 < 0x34) {
        return NULL;
    }
    p = (u32 *)(((u32)arg1 + 7) & ~7);
    zero = 0;
    func_02013878(p, zero, 0x2c);
    p[1] = (u32)arg0;
    p[4] = zero;
    a = ((Vtable_0212f038 *)*(void **)arg0)->method(arg0, 1);
    b = ((Vtable_0212f038 *)*(void **)arg0)->method(arg0, 0);
    sum = a + b;
    p[5] = sum;
    p[6] = sum / 4;
    p[9] = zero;
    p[7] = zero;
    p[8] = zero;
    p[10] = zero;
    p[0] = 1;
    return p;
}

void func_0212f0d4(void *arg0) {
    if (arg0 == NULL) {
        return;
    }
    func_02013878(arg0, 0, 0x2c);
}

void func_0212f0f0(u32 *arg0, void *arg1) {
    s32 zero;
    s32 one;
    s32 a;
    s32 b;
    s32 sum;
    if (arg0 == NULL) {
        return;
    }
    zero = 0;
    one = 1;
    func_02013878(arg0, zero, 0x2c);
    arg0[1] = (u32)arg1;
    arg0[4] = zero;
    a = ((Vtable_0212f038 *)*(void **)arg1)->method(arg1, one);
    b = ((Vtable_0212f038 *)*(void **)arg1)->method(arg1, zero);
    sum = a + b;
    arg0[5] = sum;
    arg0[6] = sum / 4;
    arg0[9] = zero;
    arg0[7] = zero;
    arg0[8] = zero;
    arg0[10] = zero;
    arg0[0] = one;
}

void func_0212f384(s32 *arg0, s32 arg1, s32 *arg2, s32 *arg3) {
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

BOOL func_0212f3cc(u8 *arg0, s32 arg1) {
    if (*(s32 *)(arg0 + 0xc) < arg1) {
        ((void (*)(void *, s32))func_0212f178)(arg0, arg1);
    }
    if (arg1 > *(s32 *)(arg0 + 0xc)) {
        return FALSE;
    }
    return TRUE;
}

extern void func_0212f178(void);
extern u32 data_02145914[];
s32 func_0212f3fc(u8 *arg0, s32 arg1) {
    s32 value = *(s32 *)(arg0 + 0xc);
    s32 rem;
    s32 result;
    s32 mask, tbl;
    if (value < arg1) {
        func_0212f178();
    }
    value = *(s32 *)(arg0 + 0xc);
    if (arg1 > value) {
        *(s32 *)(arg0 + 0x10) += value;
        *(s32 *)(arg0 + 0xc) = 0;
        return 0;
    }
    rem = value - arg1;
    mask = *(s32 *)(arg0 + 8);
    tbl = data_02145914[arg1];
    result = tbl & (mask >> rem);
    *(s32 *)(arg0 + 0xc) = rem;
    *(s32 *)(arg0 + 0x10) += arg1;
    return result;
}

void *func_0212f468(void *arg0) {
    return *(void **)((u8 *)arg0 + 0x10);
}

BOOL func_0212f470(u8 *arg0) {
    void *obj = *(void **)(arg0 + 4);
    Unk_0212f038 *vtbl = *(Unk_0212f038 **)obj;
    BOOL one = TRUE;
    if (vtbl->method(obj, one) == 0 && *(u32 *)(arg0 + 0xc) == 0 && *(u32 *)(arg0 + 0x24) == 0) {
        return one;
    }
    return 0;
}

s32 func_0212f4b0(void *arg0) {
    u32 a;
    u32 v;
    a = (u32)func_0212f468(arg0) & 7;
    if (a != 0) {
        func_0212f3fc(arg0, 8 - a);
    }
    v = func_0212f3fc(arg0, 12);
    while (func_0212f470(arg0) == 0) {
        if ((v & 0xfff) == 0xfff) {
            return 1;
        }
        if (v == 0x8001000c) {
            return 2;
        }
        v = func_0212f3fc(arg0, 4) | (v << 4);
    }
    return -1;
}

extern u32 data_0217479c;
extern u32 data_02174524[0x100];
extern u32 data_021744ec[5];
extern s32 func_02138500(void);
extern void func_0213807c(void);
extern void func_0212eaa4(void);
extern void func_0213808c(void);
extern void func_02006510(s32);
extern void func_0212c4b8(s32);
extern void func_0212e860(void *);
void func_0212f548(u32 arg0) {
    data_0217479c = arg0;
}

s32 func_0212f558(void *arg0, u32 *arg1) {
    *arg1 = data_0217479c;
    return 0x1e;
}

extern u32 data_021747a0[3];
s32 func_0212f570(void) {
    data_021747a0[1]++;
    return 0;
}

s32 func_0212f6e4(void *arg0, void *arg1, void *arg2) {
    if (*(u32 *)((u8 *)data_021747a0 + 4) == 0) {
        func_0212f570();
    }
    func_0212f58c(data_0215a0d0, 6, arg0, arg1, arg2);
    return 0;
}

extern void func_0212f548(u32);
void func_0212f738(u32 arg0) {
    func_0212f548(arg0);
}

extern u32 data_021747a0[3];
void func_0212f744(s32 arg0) {
    *(s32 *)((u8 *)data_021747a0 + 8) = arg0;
}

extern void func_0213234c(void);
void func_0212f754(void) {
    func_0213234c();
}

