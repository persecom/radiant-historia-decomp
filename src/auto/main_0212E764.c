/* 58 functions from 0x0212E764 to 0x0212F760 (main), found by ds-decomp. */
#include "common.h"

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

void func_0212f384(s32 *arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 ptr = arg0[0];
    s32 len = arg0[1];
    s32 rem;
    arg2[0] = ptr;
    arg2[1] = len;
    arg3[1] = len;
    if (arg2[1] > arg1) {
        arg2[1] = arg1;
    }
    rem = arg3[1] - arg2[1];
    arg3[1] = rem;
    arg3[0] = (rem == 0) ? 0 : (arg2[0] + arg2[1]);
}

void *func_0212f468(void *arg0) {
    return *(void **)((u8 *)arg0 + 0x10);
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

extern void func_0212f548(u32);
void func_0212f738(u32 arg0) {
    func_0212f548(arg0);
}

extern u8 data_021747a0[12];
void func_0212f744(s32 arg0) {
    *(s32 *)(data_021747a0 + 8) = arg0;
}

extern void func_0213234c(void);
void func_0212f754(void) {
    func_0213234c();
}

