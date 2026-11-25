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

s32 func_02042118(void) {
    u8 *obj;
    u8 *p = data_021600a8[1];
    obj = *(u8 **)(p + 0x68);
    if (*(s32 *)(p + 0xc) != 0) {
        return 1;
    }
    func_02043b28();
    if (func_02043c10() != 0) {
        return 0;
    }
    if (data_02160204[0x85] == 0 || data_02160204[0x85] == 5) {
        if (func_020439a8() != 0) {
            return 0;
        }
    }
    func_020441bc();
    func_02043de4();
    if (*(u32 *)(data_02160200 + 0x34) & 0x40) {
        func_0207c17c();
    }
    if (p[0x368] == 2) {
        func_02044568(*(u16 *)(p + 0x36a));
    }
    {
        u8 *p2 = data_021600a8[1];
        if (p2[0x6e4] == 3 && data_021628f8 != 0) {
            s32 tx = data_02162908[0];
            s32 ty = data_02162908[1];
            s32 hit;
            if (tx >= 0 && tx <= 0x2e && ty >= 0xb3 && ty <= 0xc0) {
                hit = 1;
            } else {
                hit = 0;
            }
            if (hit != 0) {
                goto trigger;
            }
        }
        if (data_021626a8 & 0x400) {
        trigger:;
            {
                u32 flags = *(u32 *)(*(u8 **)(p2 + 0x68) + 0xac);
                if (!(flags & 0x400) && !(flags & 0x800) && !(flags & 0x1000) && *(s32 *)(p2 + 0xc) == 0) {
                    u16 mode;
                    data_02160204[0x7a] = 1;
                    func_020468b0(1);
                    func_0203d970(obj);
                    func_0203df40(obj);
                    mode = *(u16 *)(data_0216009c + 0x60);
                    if (mode != 0) {
                        if (mode == 5) {
                            data_02160204[0x84] = 0;
                            *(s32 *)(data_02160204 + 0x80) = *(s32 *)(obj + 8) - *(s32 *)(data_02155984 + 0x28);
                        } else if (mode == 6) {
                            data_02160204[0x84] = 1;
                            *(s32 *)(data_02160204 + 0x80) = *(s32 *)(obj + 0) - *(s32 *)(data_02155984 + 0x20);
                        }
                        data_02160204[0x85] = 5;
                    }
                    *(u16 *)(data_02160204 + 0x11a) = 2;
                    func_0210d27c(0xb);
                    data_02146324[3] = 0xb;
                    *(s32 *)(p + 0xc) = 1;
                    func_0210d6f4(data_02160c74[0]);
                    return 1;
                }
            }
        }
    }
    {
        u32 flags = *(u32 *)(obj + 0xac);
        if (!(flags & 0x800) || ((flags & 0x800) && (flags & 0x400))) {
            s32 arg2 = 1;
            if (!(flags & 0x800)) {
                if ((data_021626aa & 2) || (flags & 0x80)) {
                    arg2 = 0;
                }
            }
            if ((flags & 2) || (flags & 0x40) || (flags & 0x400)) {
                func_020522d4(obj, 1, arg2);
            } else {
                func_020522d4(obj, 0, arg2);
            }
        }
    }
    func_0207c5d8();
    func_0207c70c();
    func_0207c200();
    func_0207c3bc();
    func_02041a58();
    if (func_0207c578() == 0) {
        func_0207b398();
    }
    return 0;
}

void func_020423f8(void) {
u8 *obj,*p;
if(data_02160204[0x12a]&2) {func_02077684();return;}
p=data_021600a8[1];
if(data_02160204[0x7e]==0) {
obj=*(u8 **)(p+0x68);
switch(*(u32 *)(p+0x10)) {
case 0:func_02042118();break;
case 1:
if(func_0203d960(1))*(s32 *)(p+0xc)=1;
{u8 *q=func_02047820(*(u16 *)(p+0x88));if(q)*(s32 *)(q+0xc8)=1;}break;
case 4:if(data_02162908[2]==0)*(s32 *)(p+0x10)=0;break;
case 6:func_02044618();break;
case 7:data_02160144=-1;func_02055fb8();data_02160144=0;break;
case 8:func_02079874();break;
case 10:
p[0x3ac]&=0xdf;
if(func_020a4f70()) {
func_020a4f04();
*(u32 *)(obj+0xac)&=~0x800;
data_02160204[0x11e]=2;data_02160204[0xd8]=1;
*(s32 *)(p+0x10)=1;*(s32 *)(p+0xc)=1;
}break;
case 13:func_0207cdd4();break;
}
func_02056618();func_02056ac0();
if(data_02160aec) {
*(s32 *)(data_02160aec+0x58d28)=*(s32 *)obj;
*(s32 *)(data_02160aec+0x58d2c)=*(s32 *)(obj+4);
*(s32 *)(data_02160aec+0x58d30)=*(s32 *)(obj+8);
}
func_0203d970(obj);func_0203df40(obj);
}else{
if(*(s32 *)(p+0x10)==7) {data_02160144=-1;func_02055fb8();data_02160144=0;}
if(*(s32 *)(data_021600a8[1]+0x10)==10) {
data_021600a8[1][0x3ac]&=0xdf;
if(func_020a4f70()) {
func_020a4f04();
data_02160204[0x11e]=2;data_02160204[0xd8]=1;
*(s32 *)(data_021600a8[1]+0x10)=1;
*(s32 *)(data_021600a8[1]+0xc)=1;
}
}
func_02056618();func_02056ac0();
}
}
