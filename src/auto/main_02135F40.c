/* 32 functions from 0x02135F40 to 0x02136E94 (main), found by ds-decomp. */
#include "common.h"
extern void func_02008f74(void *, s32, u32);
extern void func_02013878(void *, s32, s32);
extern u8 data_0215beec[];
extern u8 data_0215bef8[];
extern u8 data_0215bf14[];
extern u8 data_0215bf20[];
extern u8 data_0215bf40[];
extern u8 data_0215bf4c[];
extern u8 data_0215bf68[];
extern u8 data_0215bf74[];
extern u8 data_0215bf94[];
extern u8 data_0215bfa0[];
extern u8 data_0215bfbc[];
extern u8 data_0215bfc8[];
extern u8 data_0215bfe8[];
extern u8 data_0215bff4[];
extern u8 data_0215c010[];
extern u8 data_0215c01c[];

extern void func_02136958(void);
extern void func_02136a3c(void);
extern void func_02136ab4(void);
extern void func_02136d54(void *);
extern void func_021369cc(void);
extern void *memset(void *, int, unsigned long);
extern s32 data_02175c60;
extern u32 data_02175c64[6][9];
extern u32 data_0215beb0[];
extern const u32 data_02145ae8[];
extern s16 *func_02136210(void *, void *, u32);
extern void func_02135f0c(void *, u16 *, u16 *);

extern void func_0213807c(void);
void func_02135f40(u8 *arg0, u32 arg1) {
    u16 ime = *(volatile u16 *)0x04000208;
    *(volatile u16 *)0x04000208 = 0;
    *(u16 *)(arg0 + 0x1e) -= arg1;
    *(u16 *)(arg0 + 0x1c) += arg1;
    (void)*(volatile u16 *)0x04000208;
    *(volatile u16 *)0x04000208 = ime;
}

extern u32 func_0201fd28(u32, u32);
u32 func_02136138(u8 *arg0, s16 *arg1, u32 arg2) {
    func_02135f40(arg0, arg2);
    arg1 = func_02136210(arg0, arg1, arg2);
    if ((*(u16 *)arg0 & 4) && arg2 >= 2) {
        u32 sum = 0;
        u32 i;
        for (i = 0; i < arg2; i++) {
            s32 v = arg1[i];
            if (v < 0) {
                v = -v;
            }
            sum += v;
        }
        *(u16 *)(arg0 + 0x24) = func_0201fd28(sum, arg2 >> 1);
    }
    return arg2;
}

u32 func_021361bc(u8 *arg0, u16 *arg1, u16 *arg2) {
    u16 a;
    u16 b;
    s32 sum;
    func_02135f0c(arg0, &a, &b);
    sum = *(u16 *)(arg0 + 0x1a) + a;
    if (sum > 0x1800) {
        *arg1 = 0x1800 - *(u16 *)(arg0 + 0x1a);
        *arg2 = sum - 0x1800;
    } else {
        *arg1 = a;
        *arg2 = 0;
    }
    return a;
}

u16 func_0213689c(u8 *arg0) {
    u16 sp2;
    u16 sp0;
    u16 r4;
    u16 r3;
    u16 r2;
    u16 r7;

    if (arg0 == NULL) {
        return 0;
    }
    func_02135f0c(arg0, &sp2, &sp0);
    r4 = sp2;
    if (r4 == 0) {
        return 0;
    }
    r3 = *(u16 *)(arg0 + 0x1a);
    if (r3 + r4 <= 0x1800) {
        r2 = r4;
        r7 = 0;
    } else {
        r2 = 0x1800 - r3;
        r7 = (r3 + r4) - 0x1800;
    }
    func_02008f74(*(u8 **)(arg0 + 4) + r3, 0, r2);
    if (r7 != 0) {
        func_02008f74(*(u8 **)(arg0 + 4), 0, r7);
    }
    *(u16 *)(arg0 + 0x2a) = 0;
    return r4;
}

u32 func_02136930(u8 *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    return (u32)*(u16 *)(arg0 + 0x1c) >> 1;
}

u32 func_02136944(u8 *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    return (u32)*(u16 *)(arg0 + 0x1e) >> 1;
}

extern volatile u32 data_02175c58[2];
void func_02136958(void) {
    data_02175c58[1]++;
    if (data_02175c58[1] == 1) {
        data_02175c58[0] = 0;
    }
}

void func_02136980(void) {
    data_02175c58[1]--;
    if (data_02175c58[1] == 0) {
        data_02175c58[0] = 0;
    }
}

void func_021369a8(void) {
    func_0213807c();
}

extern void func_0213808c(void);
void func_021369b4(void) {
    func_0213808c();
}

extern void func_02138130(void *);
void func_021369c0(void *arg0) {
    func_02138130(arg0);
}

extern u8 data_0215bee0[12];
extern void func_02008f74(void *, s32, u32);
void func_021369cc(void) {
    func_021369c0(&data_0215bee0);
}

extern void func_02132bf8(void *, s32, void *);
extern void func_02132c1c(void *, s32, void *);
extern void func_021369c0(void *);
extern void func_021369cc(void);
extern s32 data_02175c60;
extern u32 data_02175c64[6][9];
extern u32 data_0215beb0[];
extern const u32 data_02145ae8[];
void func_021369e0(void *arg0, void *arg1) {
    u8 buf[0x40];
    func_02132bf8(buf, 0x40, arg0);
    func_02132c1c(buf, 0x40, arg1);
    func_021369c0(buf);
}

void func_02136a24(void) {
    func_02136958();
    func_021369a8();
    func_02136a3c();
    func_021369b4();
}

void func_02136a3c(void) {
    if (data_02175c60 == 0) {
        memset(data_02175c64, 0, sizeof(data_02175c64));
    }
    data_02175c60++;
}

void func_02136a9c(void) {
    func_021369a8();
    func_02136ab4();
    func_021369b4();
    func_02136980();
}

void func_02136ab4(void) {
    data_02175c60--;
    if (data_02175c60 == 0) {
        memset(data_02175c64, 0, sizeof(data_02175c64));
    }
}

extern s32 func_02136b34(void *, void *);
s32 func_02136b08(void *arg0, void *arg1) {
    s32 ret;
    func_021369a8();
    ret = func_02136b34(arg0, arg1);
    func_021369b4();
    return ret;
}

int func_02136b34(void *arg0, void *arg1) {
    s32 i;
    u32 *p;
    for (i = 0; i < 6; i++) {
        if (data_02175c64[i][1] == 0) {
            break;
        }
    }
    if (i == 6) {
        return 0;
    }
    p = data_02175c64[i];
    p[1] = 1;
    p[0] = (u32)data_0215beb0;
    p[5] = (u32)arg0;
    p[6] = (u32)arg1;
    p[2] = (u32)data_02145ae8;
    p[7] = (u32)func_021369cc;
    p[8] = (u32)p;
    func_02136d54(p);
    return (int)p;
}

extern void func_02136be4(void *);
void func_02136bc8(void *arg0) {
    func_021369a8();
    func_02136be4(arg0);
    func_021369b4();
}

void func_02136be4(void *arg0) {
    if (arg0 == NULL) {
        func_021369e0(data_0215beec, data_0215bef8);
        return;
    }
    if (*(void **)((u8 *)arg0 + 4) == NULL) {
        func_021369e0(data_0215bf14, data_0215bf20);
        return;
    }
    func_02013878(arg0, 0, 0x24);
    *(void **)((u8 *)arg0 + 4) = NULL;
}

extern void *func_02136c68(void *);
void *func_02136c44(void *arg0) {
    void *ret;
    func_021369a8();
    ret = func_02136c68(arg0);
    func_021369b4();
    return ret;
}

void *func_02136c68(void *arg0) {
    if (arg0 == NULL) {
        func_021369e0(data_0215bf40, data_0215bf4c);
        return NULL;
    }
    if (*(void **)((u8 *)arg0 + 4) == NULL) {
        func_021369e0(data_0215bf68, data_0215bf74);
        return NULL;
    }
    return *(void **)((u8 *)arg0 + 8);
}

extern void func_02136ce8(u32, u32, u32);
void func_02136cbc(u32 arg0, u32 arg1, u32 arg2) {
    func_021369a8();
    func_02136ce8(arg0, arg1, arg2);
    func_021369b4();
}

extern void func_02136d54(void *);
void func_02136d38(void *arg0) {
    func_021369a8();
    func_02136d54(arg0);
    func_021369b4();
}

extern s32 func_02136dd8(void *, void *);
s32 func_02136dac(void *arg0, void *arg1) {
    s32 ret;
    func_021369a8();
    ret = func_02136dd8(arg0, arg1);
    func_021369b4();
    return ret;
}

extern void func_02136e60();
extern void func_02136e94(void *, void *, s32, s32);
void func_02136e60(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    func_021369a8();
    func_02136e94(arg0, arg1, arg2, arg3);
    func_021369b4();
}

