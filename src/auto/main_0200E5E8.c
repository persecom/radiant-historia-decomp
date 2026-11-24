/* 29 functions from 0x0200E5E8 to 0x0200F244 (main), found by ds-decomp. */
#include "common.h"
extern u8 data_0215f054[8];


extern u8 data_0215f04c[8];
extern void func_0200f004(void *, s32);
extern void func_0200e524(u32 *, s32);
extern s32 func_0200ed20(s32, s32, s32, s32);
extern s32 func_0200e4a0(u32 *, s32, void *, void *, void *);
extern void func_0200e314(void);
extern void func_0200e290(void);
extern void func_0200ef78(void *, u32, u32, u32);
extern s32 func_0200e780(u32, u32, void *, void *);
extern void func_0200f114(void);
extern u32 data_02145c18;
extern s32 func_0200ef5c(void);
extern void func_02008128(void);
extern void func_0200813c(void);
extern void func_020081a4(u32);
extern s32 func_0200e808(u32, u32);
s32 func_0200ef5c(void) {
    return (*(volatile u16 *)0x4000304 & 1) ? 1 : 0;
}
extern u32 data_0215f058[4];
extern void func_0200893c(u32);
extern void func_02008998(u32);
extern s32 func_02002740(void);
extern void func_02002750(void);
s32 func_0200e5e8(u32 arg0, u32 arg1) {
    u32 buf[2];
    buf[0] = 0x03006000;
    func_0200e524(buf, 1);
    while (func_0200ed20(0, 2, 0, 1) != 1) {
    }
    buf[0] = 0x02006200 | (arg0 & 0xff);
    buf[1] = 0x01010000 | (u16)arg1;
    func_0200e524(buf, 2);
    return 0;
}

s32 func_0200e674(u32 arg0, u32 arg1, void *arg2, void *arg3, void *arg4) {
    u32 buf[2];
    buf[0] = 0x02006100 | (arg0 & 0xff);
    buf[1] = 0x01010000 | (u16)arg1;
    return func_0200e4a0(buf, 2, arg2, arg3, arg4);
}

s32 func_0200e6bc(u32 arg0, u32 arg1, void *arg2) {
    s32 result;
    s32 ret = func_0200e674(arg0, arg1, arg2, func_0200e314, &result);
    if (ret != 0) {
        return ret;
    }
    func_0200e290();
    return result;
}

extern void func_0200ef78(void *, u32, u32, u32);
s32 func_0200e6f4(u32 arg0, void *arg1, void *arg2) {
    u32 val;
    switch (arg0) {
    case 1:
        val = 1;
        break;
    case 3:
        val = 2;
        break;
    case 2:
        val = 3;
        break;
    default:
        val = 0;
        break;
    }
    if (val == 0) {
        return 0xffff;
    }
    return func_0200e674(val, 0, NULL, arg1, arg2);
}

s32 func_0200e758(u32 arg0) {
    s32 result;
    s32 ret = func_0200e6f4(arg0, func_0200e314, &result);
    if (ret != 0) {
        return ret;
    }
    func_0200e290();
    return result;
}

s32 func_0200e780(u32 arg0, u32 arg1, void *arg2, void *arg3) {
    u32 val = 0;
    if (arg0 == 0) {
        if (arg1 == 1) {
            val = 6;
        }
        if (arg1 == 0) {
            val = 7;
        }
    } else if (arg0 == 1) {
        if (arg1 == 1) {
            val = 4;
        }
        if (arg1 == 0) {
            val = 5;
        }
    } else if (arg0 == 2) {
        if (arg1 == 1) {
            val = 8;
        }
        if (arg1 == 0) {
            val = 9;
        }
    }
    if (val == 0) {
        return 0xffff;
    }
    return func_0200e674(val, 0, NULL, arg2, arg3);
}

s32 func_0200e808(u32 arg0, u32 arg1) {
    s32 result;
    s32 ret = func_0200e780(arg0, arg1, func_0200e314, &result);
    if (ret != 0) {
        return ret;
    }
    func_0200e290();
    return result;
}

s32 func_0200e830(u32 arg0, u32 arg1) {
    func_0200f114();
    return func_0200e674(0xe, 0, NULL, (void *)arg0, (void *)arg1);
}

s32 func_0200e85c(void) {
    s32 result;
    s32 ret = func_0200e830((u32)func_0200e314, (u32)&result);
    if (ret != 0) {
        return ret;
    }
    data_02145c18 = 0xc;
    func_0200e290();
    data_02145c18 = 2;
    return *(volatile s32 *)&result;
}

extern s32 func_0200e85c(void);
extern void func_020081a4(u32);
extern void func_02008128(void);
extern void func_02008a00(void);
extern void func_02008454(void);
void func_0200e8a8(void) {
    while (func_0200e85c() != 0) {
        func_020081a4(0x51d23);
    }
    func_02008128();
    func_02008a00();
    for (;;) {
        func_02008454();
    }
}

s32 func_0200e8e4(u32 arg0) {
    if (func_0200ef5c() == 0) {
        return 0;
    }
    return func_0200e6bc(0x10, (u16)arg0, NULL);
}

s32 func_0200e914(s32 *arg0, s32 *arg1) {
    u16 val;
    s32 ret = func_0200e6bc(0xf, 3, &val);
    if (ret != 0) {
        return ret;
    }
    if (arg0 != NULL) {
        *arg0 = (val & 8) ? 1 : 0;
    }
    if (arg1 != NULL) {
        *arg1 = (val & 4) ? 1 : 0;
    }
    return ret;
}

void func_0200e974(u32 arg0) {
    while (func_0200a6e4(8, arg0, 0) != 0) {}
}

void func_0200e9a0(void) {
    u32 i;
    for (i = 0; i <= 3; i++) {
        volatile u32 *reg = (volatile u32 *)(0x040000b8 + i * 0xc);
        data_0215f058[i] = *reg;
        switch (*reg & 0x38000000) {
        case 0x28000000:
            while (*(volatile u32 *)0x040001a4 & 0x80000000) {}
            break;
        case 0x18000000:
        case 0x20000000:
            func_0200893c(i);
            break;
        default:
            if ((*reg & 0x02000000) == 0) {
                func_0200893c(i);
            } else {
                func_02008998(i);
            }
            break;
        }
    }
}

void func_0200ef20(s32 arg0) {
    if (arg0 != 1) {
        arg0 = 0;
        if (func_02002740() != 0) {
            func_02002750();
        }
    }
    func_0200ed20(arg0, 0, 0, 1);
}

void func_0200f084(u32 arg0) {
    func_0200ef78(data_0215f04c, arg0, 0xff, 0);
}

extern s32 func_0200a6e4(s32, u32, s32);
extern u32 data_0215f058[4];
extern void func_0200893c(u32);
extern void func_02008998(u32);
extern s32 func_02002740(void);
extern void func_02002750(void);
void func_0200f0a4(u32 arg0) {
    func_0200ef78(data_0215f04c, arg0, -0xff, 1);
}

void func_0200f0c4(u32 arg0) {
    func_0200ef78(data_0215f054, arg0, 0xff, 0);
}

void func_0200f0e4(s32 arg0) {
    func_0200f004(data_0215f04c, arg0);
}

extern u8 data_0215f054[8];
void func_0200f0fc(s32 arg0) {
    func_0200f004(data_0215f054, arg0);
}

extern u32 data_0215f03c[4];
void func_0200f1bc(void) {
    data_0215f03c[2] = *(volatile u32 *)0x02fffc3c;
}

extern u8 data_0215f078[40];
extern void func_0200a56c(void);
extern s32 func_0200a6c0(s32, s32);
extern void func_0200a674(s32, void *);
extern void func_0200f244(void);
void func_0200f1d8(void) {
    if (*(u16 *)(data_0215f078 + 0) != 0) {
        return;
    }
    *(u16 *)(data_0215f078 + 0) = 1;
    *(u32 *)(data_0215f078 + 4) = 0;
    *(u32 *)(data_0215f078 + 8) = 0;
    *(u32 *)(data_0215f078 + 0x20) = 0;
    *(u32 *)(data_0215f078 + 0xc) = 0;
    *(u32 *)(data_0215f078 + 0x10) = 0;
    func_0200a56c();
    while (func_0200a6c0(5, 1) == 0) {}
    func_0200a674(5, func_0200f244);
}

