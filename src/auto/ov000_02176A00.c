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

u32 func_ov000_02176f50(void) {
    u8 *p = (u8 *)((u32)(func_ov000_021779c4 + 0x1000) - 0x2000) + 0x1000;
    if (p[0] != 0x0f) return 0xb177;
    if (p[1] != 0xc0) return 0xb177;
    if (p[2] != 0x8f) return 0xb177;
    if (p[3] != 0xe1) return 0xb177;
    if (p[4] != 0x0c) return 0xb177;
    if (p[5] != 0xc0) return 0xb177;
    if (p[6] != 0x1c) return 0xb177;
    if (p[7] != 0xe0) return 0xb177;
    if (p[8] != 0x00) return 0xb177;
    if (p[9] != 0xc0) return 0xb177;
    if (p[10] != 0xa0) return 0xb177;
    if (p[11] != 0x03) return 0xb177;
    if (p[12] != 0x1c) return 0xb177;
    if (p[13] != 0xc0) return 0xb177;
    if (p[14] != 0x8c) return 0xb177;
    if (p[15] != 0x12) return 0xb177;
    return 0xaa65;
}

u32 func_ov000_0217706c(void) {
    u8 *p = (u8 *)((u32)(func_ov000_02177a00 + 0x1000) - 0x2000) + 0x1000;
    if (p[0] != 0x0f) return 0xaa65;
    if (p[1] != 0xc0) return 0xaa65;
    if (p[2] != 0x8f) return 0xaa65;
    if (p[3] != 0xe1) return 0xaa65;
    if (p[4] != 0x0c) return 0xaa65;
    if (p[5] != 0xc0) return 0xaa65;
    if (p[6] != 0x1c) return 0xaa65;
    if (p[7] != 0xe0) return 0xaa65;
    if (p[8] != 0x00) return 0xaa65;
    if (p[9] != 0xc0) return 0xaa65;
    if (p[10] != 0xa0) return 0xaa65;
    if (p[11] != 0x03) return 0xaa65;
    if (p[12] != 0x1c) return 0xaa65;
    if (p[13] != 0xc0) return 0xaa65;
    if (p[14] != 0x8c) return 0xaa65;
    if (p[15] != 0x12) return 0xaa65;
    return 0xb177;
}

u32 func_ov000_02177188(void) {
    u8 *p = (u8 *)((u32)(func_ov000_02177f8c + 0x1000) - 0x2000) + 0x1000;
    if (p[0] != 0x0f) return 0xb177;
    if (p[1] != 0xc0) return 0xb177;
    if (p[2] != 0x8f) return 0xb177;
    if (p[3] != 0xe1) return 0xb177;
    if (p[4] != 0x0c) return 0xb177;
    if (p[5] != 0xc0) return 0xb177;
    if (p[6] != 0x1c) return 0xb177;
    if (p[7] != 0xe0) return 0xb177;
    if (p[8] != 0x00) return 0xb177;
    if (p[9] != 0xc0) return 0xb177;
    if (p[10] != 0xa0) return 0xb177;
    if (p[11] != 0x03) return 0xb177;
    if (p[12] != 0x1c) return 0xb177;
    if (p[13] != 0xc0) return 0xb177;
    if (p[14] != 0x8c) return 0xb177;
    if (p[15] != 0x12) return 0xb177;
    return 0xaa65;
}

u32 func_ov000_021772a4(void) {
    u8 *p = (u8 *)((u32)(func_ov000_02177fc8 + 0x1000) - 0x2000) + 0x1000;
    if (p[0] != 0x0f) return 0xaa65;
    if (p[1] != 0xc0) return 0xaa65;
    if (p[2] != 0x8f) return 0xaa65;
    if (p[3] != 0xe1) return 0xaa65;
    if (p[4] != 0x0c) return 0xaa65;
    if (p[5] != 0xc0) return 0xaa65;
    if (p[6] != 0x1c) return 0xaa65;
    if (p[7] != 0xe0) return 0xaa65;
    if (p[8] != 0x00) return 0xaa65;
    if (p[9] != 0xc0) return 0xaa65;
    if (p[10] != 0xa0) return 0xaa65;
    if (p[11] != 0x03) return 0xaa65;
    if (p[12] != 0x1c) return 0xaa65;
    if (p[13] != 0xc0) return 0xaa65;
    if (p[14] != 0x8c) return 0xaa65;
    if (p[15] != 0x12) return 0xaa65;
    return 0xb177;
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
    u8 *b;
    u8 *p2;
    const u8 *d;
    int i;
    int matched;

    func_020082b8(buf);
    d = data_ov000_021785b0;
    b = buf;
    matched = 0;
    do {
        if (*d != (*b ^ 0xff)) break;
        matched++;
        b++;
        d++;
    } while (matched < 6);

    func_020082d4(&buf[6]);

    if (matched == 6 && buf[8] == 1 && buf[9] == 1 && *(u16 *)&buf[0x20] == 0) {
        result = 0xfb;
    } else {
        i = 0;
        p2 = buf;
        do {
            if (*p2 != 0) {
                result = 0xf1;
                goto done;
            }
            i++;
            p2++;
        } while (i < 6);
        result = 0xfb;
    }
done:
    return 0xc5 * result;
}

u32 func_ov000_02177914(void) {
u8 buf[0x5c]; u32 result; u8 *b; u8 *p2; const u8 *d; int i; int matched;
func_020082b8(buf);
d=data_ov000_021785b0; b=buf; matched=0;
do {if(*d != (*b ^ 0xff)) break; matched++; b++; d++;}while(matched<6);
func_020082d4(&buf[6]);
if(matched==6 && buf[8]==1 && buf[9]==1 && *(u16 *)&buf[0x20]==0) result=0xf1;
else {i=0;p2=buf;do {if(*p2!=0){result=0xfb;goto done;}i++;p2++;}while(i<6);result=0xf1;}
done: return 0xc1*result;
}

u32 func_ov000_02177a3c(const u8 *p, u32 n) {
u32 crc=~0U;
while(n--) {
crc ^= *p++;
crc = (crc & 1) ? (crc >> 1) : ((crc >> 1)^0xedb88320);
crc = (crc & 1) ? (crc >> 1) : ((crc >> 1)^0xedb88320);
crc = (crc & 1) ? (crc >> 1) : ((crc >> 1)^0xedb88320);
crc = (crc & 1) ? (crc >> 1) : ((crc >> 1)^0xedb88320);
crc = (crc & 1) ? (crc >> 1) : ((crc >> 1)^0xedb88320);
crc = (crc & 1) ? (crc >> 1) : ((crc >> 1)^0xedb88320);
crc = (crc & 1) ? (crc >> 1) : ((crc >> 1)^0xedb88320);
crc = (crc & 1) ? (crc >> 1) : ((crc >> 1)^0xedb88320);
}
return ~crc;
}

