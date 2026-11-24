/* 13 functions from 0x02176A00 to 0x02177AA0 (ov000), found by ds-decomp. */
#include "common.h"

extern u8 func_ov000_02177f8c[];
extern u8 func_ov000_02177438[];
extern u8 func_ov000_02177fc8[];
extern u8 func_ov000_02177474[];
extern u8 func_ov000_0217801c[];
extern u8 func_ov000_02178058[];
extern void func_020082b8(void *buf);
extern void func_020082d4(void *buf);
extern u8 data_ov000_021785b0[];
u32 func_ov000_02176a00(u32 (*arg0)(void *), void *arg1) {
    u32 funcs[32];
    u32 *p;
    u32 sum;

    funcs[2] = 0;
    funcs[0] = (u32)(func_ov000_02177f8c + 0x1000) + 0x320;
    funcs[1] = (u32)(func_ov000_02177438 + 0x1000) + 0x320;

    sum = 0x30eb87;
    p = funcs;
    do {
        sum += ((u32 (*)(void))(*p - 0x1320))();
        p++;
    } while (*p != 0);

    if (sum % 241 != 0) {
        sum = arg0(arg1);
    }
    return sum;
}

u32 func_ov000_02176aa0(u32 (*arg0)(void *), void *arg1) {
    u32 funcs[32];
    u32 *p;
    u32 sum;

    funcs[2] = 0;
    funcs[0] = (u32)(func_ov000_02177fc8 + 0x1000) + 0x320;
    funcs[1] = (u32)(func_ov000_02177474 + 0x1000) + 0x320;

    sum = 0x30eb87;
    p = funcs;
    do {
        sum += ((u32 (*)(void))(*p - 0x1320))();
        p++;
    } while (*p != 0);

    if (sum % 251 == 0) {
        sum = arg0(arg1);
    }
    return sum;
}

extern u8 func_ov000_021779c4[];
extern u8 func_ov000_021773c0[];
u32 func_ov000_02176b40(u32 (*arg0)(void *), void *arg1) {
    u32 funcs[32];
    u32 *p;
    u32 sum;

    funcs[2] = 0;
    funcs[0] = (u32)(func_ov000_021779c4 + 0x1000) + 0x320;
    funcs[1] = (u32)(func_ov000_021773c0 + 0x1000) + 0x320;

    sum = 0x30eb87;
    p = funcs;
    do {
        sum += ((u32 (*)(void))(*p - 0x1320))();
        p++;
    } while (*p != 0);

    if (sum % 241 != 0) {
        sum = arg0(arg1);
    }
    return sum;
}

extern u8 func_ov000_02177a00[];
extern u8 func_ov000_021773fc[];
u32 func_ov000_02176be0(u32 (*arg0)(void *), void *arg1) {
    u32 funcs[32];
    u32 *p;
    u32 sum;

    funcs[2] = 0;
    funcs[0] = (u32)(func_ov000_02177a00 + 0x1000) + 0x320;
    funcs[1] = (u32)(func_ov000_021773fc + 0x1000) + 0x320;

    sum = 0x30eb87;
    p = funcs;
    do {
        sum += ((u32 (*)(void))(*p - 0x1320))();
        p++;
    } while (*p != 0);

    if (sum % 251 == 0) {
        sum = arg0(arg1);
    }
    return sum;
}

u32 func_ov000_02176c80(u32 (*arg0)(void *), void *arg1) {
    u32 funcs[32];
    u32 *p;
    u32 sum;

    funcs[0] = (u32)(func_ov000_0217801c + 0x1000) + 0x320;
    funcs[1] = 0;

    sum = 0x30eb87;
    p = funcs;
    do {
        sum += ((u32 (*)(void))(*p - 0x1320))();
        p++;
    } while (*p != 0);

    if (sum % 241 != 0) {
        sum = arg0(arg1);
    }
    return sum;
}

u32 func_ov000_02176d10(u32 (*arg0)(void *), void *arg1) {
    u32 funcs[32];
    u32 *p;
    u32 sum;

    funcs[0] = (u32)(func_ov000_02178058 + 0x1000) + 0x320;
    funcs[1] = 0;

    sum = 0x30eb87;
    p = funcs;
    do {
        sum += ((u32 (*)(void))(*p - 0x1320))();
        p++;
    } while (*p != 0);

    if (sum % 251 == 0) {
        sum = arg0(arg1);
    }
    return sum;
}

void func_ov000_02176da0(void) {
}

u32 func_ov000_021774e4(u32 arg0) {
    u32 v = (arg0 >> 24) & 0xff;
    if ((v & 0xe) == 0xa) {
        if ((v & 0xf0) == 0xf0) {
            return 1;
        }
        if (v & 1) {
            return 2;
        }
        return 3;
    }
    return 0;
}

extern u8 func_ov000_02178058[];
extern void func_020082b8(void *buf);
extern void func_020082d4(void *buf);
extern u8 data_ov000_021785b0[];
u32 func_ov000_02177864(void) {
    u8 buf[0x5c];
    u32 result;
    int matched;
    int i;
    u8 *b;
    const u8 *d;

    func_020082b8(buf);
    b = buf;
    d = data_ov000_021785b0;
    matched = 0;
    do {
        if (*b != (u8)~*d) {
            break;
        }
        matched++;
        b++;
        d++;
    } while (matched < 6);

    func_020082d4(&buf[6]);

    if (matched == 6 && buf[8] == 1 && buf[9] == 1 && *(u16 *)&buf[0x20] == 0) {
        result = 0xfb;
    } else {
        b = buf;
        i = 0;
        do {
            if (*b != 0) {
                result = 0xf1;
                break;
            }
            i++;
            b++;
        } while (i < 6);
        if (i == 6) {
            result = 0xfb;
        }
    }
    return 0xc5 * result;
}

