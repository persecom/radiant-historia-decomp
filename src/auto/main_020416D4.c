/* 4 functions from 0x020416D4 to 0x02042634 (main), found by ds-decomp. */
#include "common.h"
extern s32 data_02162870[];
extern u8 *data_021600b8;
extern char data_02146384[],data_021463b0[],data_021463c8[],data_021463f0[];
extern s32 func_02044dd0(void),func_02052520(void *),func_02043964(u16),func_02052350(u16);
extern s32 func_0210c2f4(void *,void *);
extern void func_0204487c(void *),func_02044428(u16),func_0207af60(void);
extern char *func_0210eb98(const char *,...);
extern u8 *func_020f57e8(const char *);
extern void func_021167f0(void *,void *);
extern s32 func_020bdba0(u16);
extern void func_020477dc(void *,s32,s32),func_020bdb30(u16,s32),func_020f5714(s32,s32),func_02047490(void *);
extern u8 *data_02160204,*data_021600a8[2],*data_02160aec;
extern u16 data_02162908[4];
extern s32 data_02160144;
extern void func_02077684(void),func_02044618(void),func_02055fb8(void),func_02079874(void),func_020a4f04(void),func_0207cdd4(void),func_02056618(void),func_02056ac0(void);
extern s32 func_02042118(void);
extern s32 func_0203d960(s32),func_020a4f70(void);
extern u8 *func_02047820(u16);
extern void func_0203d970(void *),func_0203df40(void *);

extern u8 *data_02160200;
extern u16 data_021628f8;
extern u16 data_021626a8;
extern u8 *data_0216009c;
extern u8 *data_02155984;
extern s32 data_02146324[4];
extern void *data_02160c74[2];
extern u16 data_021626aa;
extern void func_02043b28(void);
extern s32 func_02043c10(void);
extern s32 func_020439a8(void);
extern void func_020441bc(void);
extern void func_02043de4(void);
extern void func_0207c17c(void);
extern void func_02044568(u16);
extern void func_020468b0(s32);
extern void func_0210d27c(s32);
extern void func_0210d6f4(void *);
extern void func_020522d4(void *, s32, s32);
extern void func_0207c5d8(void);
extern void func_0207c70c(void);
extern void func_0207c200(void);
extern void func_0207c3bc(void);
extern void func_02041a58(void);
extern s32 func_0207c578(void);
extern void func_0207b398(void);
extern u16 data_021628fa;
extern u8 *data_021600a8[2];
extern u8 *data_021600f0;
extern u8 *data_02160204;
extern s32 func_02109754(s32);
extern s32 func_0207b32c(void);
extern s32 func_02044c98(void);
extern s32 func_0207ae24(void);
extern void func_0207c640(void);
extern void func_0207adbc(u8 *);
extern void func_0207c528(void);
extern void func_0207b2c0(void);
extern void func_0207c328(void);
extern void func_0207ace8(u8 *);
extern s32 func_0207ab34(u8 *);
s32 func_020416d4(u8 *arg0)
{
    u8 *r0;
    u8 *r5;
    s32 r6 = 0;
    s32 r8 = (data_021628fa != 0) ? 1 : 0;

    r0 = data_021600a8[1];
    if (r0 == NULL) {
        return 0;
    }
    r5 = *(u8 **)(r0 + 0x68);
    if (r5 == NULL) {
        return 0;
    }
    if (*(u32 *)(r5 + 0xac) & 0x800) {
        return 0;
    }
    if (func_02109754(3) == 1) {
        return 0;
    }
    if (data_021600f0 == NULL) {
        return 0;
    }
    if (!(*(u32 *)(data_02160200 + 0x34) & 0x20) &&
        !(*(u32 *)(data_02160200 + 0x34) & 0x40) &&
        !(*(u32 *)(data_02160200 + 0x34) & 0x8) &&
        !(*(u32 *)(data_02160200 + 0x34) & 0x10)) {
        return 0;
    }
    if (func_0207b32c() != 0) {
        return 1;
    }
    if (**(u8 **)(data_021600f0 + 0xc) != 0) {
        r6 = 1;
    }

    if (*(u32 *)(data_02160200 + 0x34) & 0x8) {
        s32 r7 = 0;
        if ((data_021626a8 & 0x200) ||
            (func_02044c98() != 0 &&
             data_021628f8 != 0 &&
             *(u32 *)(data_021600a8[1] + 0xc) == 0 &&
             !(*(u32 *)(*(u8 **)(data_021600a8[1] + 0x68) + 0xac) & 0x400) &&
             !(*(u32 *)(*(u8 **)(data_021600a8[1] + 0x68) + 0xac) & 0x800) &&
             *(u32 *)(data_021600a8[1] + 0x10) == 0 &&
             *(u8 *)(data_02160204 + 0x7e) == 0) ||
            (r8 != 0 && (*(u32 *)(r5 + 0xac) & 0x8000000))) {
            if (func_0207ae24() != 0) {
                r7 = 1;
            } else if (arg0 != NULL) {
                if (*(u16 *)(arg0 + 0x8e) == 0x13c5 ||
                    (*(u16 *)(arg0 + 0x8e) == 0x14bf && (*(u32 *)(data_02160200 + 0x34) & 0x40))) {
                    r7 = 1;
                }
            }
        }
        if (r7 != 0) {
            if (func_0207ae24() == 1) {
                func_0207c640();
                return 1;
            }
            if (r6 == 0 && arg0 != NULL) {
                func_0207adbc(arg0);
                return 1;
            }
        }
    }

    if (r6 != 0) {
        if ((data_021626a8 & 0x100) || (r8 != 0 && (*(u32 *)(r5 + 0xac) & 0x800000))) {
            func_0207c528();
        }
        return 1;
    }

    if (*(u32 *)(data_02160200 + 0x34) & 0x10) {
        if ((data_021626a8 & 0x800) ||
            (func_02044c98() != 0 &&
             data_021628f8 != 0 &&
             *(u32 *)(data_021600a8[1] + 0xc) == 0 &&
             !(*(u32 *)(*(u8 **)(data_021600a8[1] + 0x68) + 0xac) & 0x400) &&
             !(*(u32 *)(*(u8 **)(data_021600a8[1] + 0x68) + 0xac) & 0x800) &&
             *(u32 *)(data_021600a8[1] + 0x10) == 0 &&
             *(u8 *)(data_02160204 + 0x7e) == 0) ||
            (r8 != 0 && (*(u32 *)(r5 + 0xac) & 0x400000))) {
            func_0207b2c0();
            return 1;
        }
    }

    if (*(u32 *)(data_02160200 + 0x34) & 0x20) {
        if ((data_021626a8 & 0x100) || (r8 != 0 && (*(u32 *)(r5 + 0xac) & 0x800000))) {
            func_0207c328();
            return 1;
        }
    }

    if ((*(u32 *)(data_02160200 + 0x34) & 0x4) && arg0 != NULL) {
        u8 b = *(u8 *)(*(u8 **)(arg0 + 0xb0) + 0x26);
        if ((b & 0x40) || (b & 0x80)) {
            if (*(u32 *)(r5 + 0xac) & 0x2000000) {
                func_0207ace8(arg0);
                return 1;
            }
            if (func_0207ab34(arg0) != 0) {
                return 1;
            }
        }
    }

    return 0;
}
