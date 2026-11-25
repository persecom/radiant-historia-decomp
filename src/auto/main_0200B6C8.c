/* 20 functions from 0x0200A980 to 0x0200B8FC (main), found by ds-decomp. */
#include "common.h"
typedef struct CmdPair_0200a980 { u32 a,b; } CmdPair_0200a980;
typedef struct CmdTriple_0200a980 { u32 a,b,c; } CmdTriple_0200a980;
extern s32 func_0200a85c(s32);
extern s32 func_0200a928(void *, s32);

void func_0200b888(u32 *arg0);
u8 *func_0200b6b8(u8 *arg0);
extern s32 func_0200a980(void *, s32);
extern u32 func_02008128(void);
extern void func_02006560(void *);
extern void func_0200813c(u32);
extern void func_0200a884();
extern s32 func_0200ad00(void *, s32);
extern void func_0200aeac();
extern void func_02008f74(void *, s32, s32);
extern s32 func_020124a8(s32, u8 *, s8 *);
extern u8 *data_0215ed68;
extern char data_02145c00[];
s32 func_0200b810(const char *str, s32 pos);
s32 func_0200b844(char *str);
extern s8 data_0215ed78[0x100];
extern s32 func_02012348(const char *);
s32 func_0200b77c(const char *str, s32 pos);

#pragma opt_propagation off

#pragma opt_propagation reset

extern s8 data_0215ee78[0x104];
extern u8 *func_0200b2ac(const char *, u32 *, u8 *);
extern void func_02012244(void *, void *, s32);
extern s32 func_0200afb4(void *, s32, s32);

s32 func_0200b24c(char *dst, s32 dst_len, const char *src, s32 src_len, s32 *truncated);
u8 *func_0200b0ec(u8 *arg0, s8 *arg1);

#pragma optimization_level 4

s32 func_0200b6c8(u32 *arg0, u32 arg1, u32 arg2) {
    u32 sp[18];
    arg0[8] = arg1;
    arg0[9] = arg2;
    func_0200b888(sp);
    sp[2] = (u32)arg0;
    func_0200a980(sp, 0x11);
    arg0[5] |= 2;
    return 1;
}

void func_0200b710(u32 *arg0, u32 arg1) {
    u32 *arc = (u32 *)arg0[2];
    if (arc[3] & 4) {
        u32 bak = func_02008128();
        arc[3] |= 8;
        arc[5] = arg1;
        func_02006560(&arc[6]);
        func_0200813c(bak);
    } else {
        func_0200a884(arc);
        void *res = (void *)func_0200ad00(arg0, 1);
        if (res != 0) {
            func_0200aeac(res);
        }
    }
}

s32 func_0200b77c(const char *str, s32 pos) {
    s32 i = pos - 1;
    while (i > 0 && ((u32)(((u8)str[i - 1] ^ 0x20) - 0xa1) < 0x3c)) {
        i--;
    }
    return (pos - 1) - (((pos - 1) - i) & 1);
}

s32 func_0200b7bc(const char *str, s32 pos) {
    s32 c;
    while ((c = str[pos]) != '\0' && (u8)c != '/' && (u8)c != '\\') {
        s32 step = ((u32)(((u8)c ^ 0x20) - 0xa1) < 0x3c) ? 1 : 0;
        pos += 1;
        pos += step;
    }
    return pos;
}

s32 func_0200b810(const char *str, s32 pos) {
    for (;;) {
        pos = func_0200b77c(str, pos);
        if (pos < 0 || (u8)str[pos] == '/' || (u8)str[pos] == '\\') {
            break;
        }
    }
    return pos;
}

s32 func_0200b844(char *str) {
    s32 len = func_02012348(str);
    s32 pos = func_0200b77c(str, len);
    if (pos >= 0 && ((u8)str[pos] == '/' || (u8)str[pos] == '\\')) {
        str[pos] = '\0';
        len = pos;
    }
    return len;
}

void func_0200b888(u32 *arg0) {
    arg0[2] = 0;
    arg0[1] = 0;
    arg0[0] = 0;
    arg0[7] = 0;
    arg0[6] = 0;
    arg0[3] = 0;
    arg0[3] |= 0x2300;
    arg0[4] = 0;
    arg0[5] = 0;
}

void func_0200b8b4(u32 *arg0) {
u32 bak=func_02008128();
u32 flag=(arg0[3]&1)!=0;
if(flag){u32 *arc=(u32 *)arg0[2];arg0[3]|=2;arc[5]|=0x20;}
func_0200813c(bak);
}

