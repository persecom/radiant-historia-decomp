/* 27 functions from 0x02020C58 to 0x02021C48 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160204;
typedef struct { u8 value:1; u8 rest:7; } SaveFlag_02021ac4;

extern void func_021072d0(u32, u32, u32);
extern u32 func_02107294(void);
extern void func_02107334(u32, u32, u32);
extern void func_020106a0(void);
extern u32 func_0200f984(void);
extern void func_0210d220(void);
s32 func_02021284(void);
void func_02021618(void);
extern s32 func_02021428(u16 *);
extern void (*ARM9_CTOR_START[])(void);
extern u32 *data_02162730;
extern u32 func_021155c8(u32);
extern void func_0210d85c(s32);
extern u32 func_021154a4(u32);
extern void func_021154f4(u32, u32);
extern void func_021156bc(s32, u32);
extern void func_021160c0(void *, s32, s32);
extern void func_0210d114(u32, void *);
extern void func_0211568c(s32, u32);
extern u8 data_02145fc8[];
extern void *data_02155c80;
extern s32 data_02160050;
extern u32 data_02160054[];
extern u8 data_02160064[];
extern u32 *data_02160078;
extern u32 *data_021626f0;
extern void func_020213c4(void *, s32, u32);
extern void func_0210d9e4(u8 *);
extern void func_0210da14(void *);
void func_020211f0(void *arg0, s32 arg1);
void func_0202147c(s32 arg0);
void func_02021514(void);
void func_02021bd0(s32);
double func_02020c58(double a, double b) { return a / b; }

void func_0202119c(void) {
}

void func_020211a0(void) {
    void (**p)(void) = ARM9_CTOR_START;
    while (p != 0 && *p != 0) {
        (*p)();
        p++;
    }
}

u32 func_020211d0(void) {
    return func_021155c8(*data_02162730) >> 10;
}

void func_020211f0(void *arg0, s32 arg1) {
    if (data_02162730[4] == 0) {
        if (func_020211d0() <= 0x80) {
            data_02162730[4] = func_021154a4(data_02162730[0]);
        }
    } else {
        if (func_020211d0() < 0x1e) {
            func_0210d85c(0);
            func_021154f4(data_02162730[0], data_02162730[4]);
        }
    }
    func_021156bc(arg1, data_02162730[0]);
    func_021160c0(arg0, 0, arg1);
}

s32 func_02021284(void) {
    s32 res;
    func_0210d114(0x40000, data_02145fc8);
    data_02155c80 = (void *)func_020211f0;
    func_0211568c(0, data_02162730[0]);
    res = func_021154a4(data_02162730[0]);
    data_02160050 = res;
    data_02162730[4] = 0;
    return res;
}

s32 func_020212ec(void) {
    func_0210d220();
    return func_02021284();
}

s32 func_020212fc(void) {
    if (data_02160050 <= 0) {
        return 0;
    }
    func_021154f4(data_02162730[0], data_02160050);
    data_02162730[4] = 0;
    return 1;
}

void func_02021340(s32 arg0) {
    (void)arg0;
}

s32 func_02021344(u32 arg0) {
    s32 ret = func_0210723c();
    if (ret == 0) {
        func_02021340((s32)arg0);
    }
    return ret;
}

u32 func_02021368(u8 *data, u32 len) {
    u32 hash = 0x23456789;
    u32 i = 0;
    if (i < len) {
        for (; i < len; i++) {
            u32 v = *data++ + hash;
            u32 shift = (i + v) & 0x1f;
            hash += (v << shift) | (v >> (0x20 - shift));
        }
    }
    if (hash == 0) {
        hash = 0xaaaaaaaa;
    }
    return hash;
}

void func_020213c4(void *ptr, s32 len, u32 key) {
    u8 *p = (u8 *)ptr;
    u8 *end = p + len;
    u8 *kb = (u8 *)&key;
    u8 k = kb[0] + kb[1] + kb[2] + kb[3];
    if (k == 0) {
        k = 0xaa;
    }
    if (p >= end) {
        return;
    }
    do {
        *p = *p ^ k;
        p++;
    } while (p < end);
}

extern s32 func_0210723c(void);
extern void func_0210d9e4(u8 *);
#pragma optimization_level 2
s32 func_02021428(u16 *arg) {
    u32 *p;
    data_02160054[4] = (u32)arg;
    data_02160054[5] = 1000;
    func_0210d9e4(data_02160064);
    *(volatile u32 *)&data_02160054[3] = 1;
    *(volatile u32 *)&data_02160054[1] = 0;
    p = *(u32 *volatile *)&data_021626f0;
    if (p != NULL) {
        u32 v = *p;
        data_02160054[0] = v;
        *p = 0;
        return (s32)v;
    }
    return (s32)&data_021626f0;
}
#pragma optimization_level 4
void func_0202147c(s32 arg0) {
    func_0210da14(data_02160064);
    data_02160054[4] = 0;
    data_02160054[3] = arg0;
    switch (arg0) {
    case 4:
        func_02021340(0);
        break;
    case 5:
        func_02021340(1);
        break;
    case 0:
    case 1:
    case 2:
    case 3:
    case 6:
    default:
        break;
    }
    if (data_02160054[2] != 0) {
        data_02160054[2] = 0;
    }
    if (data_021626f0 != NULL) {
        *data_021626f0 = data_02160054[0];
        data_02160054[0] = 0;
    }
}

void func_02021514(void) {
    u32 *p = data_02160078;
    func_020213c4(p + 4, 0x1688, p[2]);
}

void func_0202153c(s32 arg0) {
    if (data_02160054[2] != 0) {
        data_02160054[2] = 0;
        func_02021514();
    }
    func_0202147c(arg0);
}

s32 func_02021570(u32 *arg0, u32 arg1, u32 arg2) {
    if (arg0[0] != 0x6d63) {
        return 0;
    }
    if (arg0[1] != 0) {
        return 0;
    }
    if (((u16 *)arg0)[6] != arg1) {
        return 0;
    }
    if (((u16 *)arg0)[7] != arg2) {
        return 0;
    }
    return 1;
}

s32 func_020215bc(void) {
    void *p = data_02160078;
    u32 size = 0x1698;
    s32 res = 0;
    if (func_02021570(p, res, size) == 0) {
        return res;
    }
    func_02021514();
    if (*(u32 *)((u8 *)p + 8) == func_02021368((u8 *)p + 16, size - 0x10)) {
        res = 1;
    }
    return res;
}

void func_02021618(void) {
u32 *p=data_02160078;
switch(data_02160054[1]) {
case 0:
if(func_02021344(0)==0) {
func_0202153c(3);
data_02160204[0x14c]|=0x10;
data_02160204[0x14c]|=8;
return;
}
p[9]=func_0210e600();
p[2]=func_02021368((u8 *)(p+4),0x1688);
data_02160054[2]=1;
func_02021514();
func_021072d0(data_02160204[0x7f]*0x4800,(u32)p,0x1698);
data_02160054[1]++;
return;
case 1:
if(func_02107294()!=0)return;
if(func_0200f984()==0) {
func_021072d0(data_02160204[0x7f]*0x4800+0x2400,(u32)p,0x1698);
data_02160054[1]++;
return;
}
data_02160204[0x14c]|=0x10;
data_02160204[0x14c]|=8;
func_0202153c(4);
return;
case 2:
if(func_02107294()!=0)return;
if(func_0200f984()==0){func_0202153c(0);return;}
data_02160204[0x14c]|=0x10;
data_02160204[0x14c]|=8;
func_0202153c(4);
return;
}
}

extern void func_0200f998(void);
extern s32 func_020215bc(void);
extern void func_0210e620(u32);
void func_020217b4(void) {
    u32 *buf = data_02160078;
    switch ((s32)data_02160054[1]) {
    case 0:
        func_0200f998();
        if (!func_02021344(1)) {
            func_0202147c(3);
            data_02160204[0x14c] |= 1;
            data_02160204[0x14c] |= 8;
            return;
        }
        func_02107334(data_02160204[0x7f] * 0x4800, (u32)buf, 0x1698);
        data_02160054[1]++;
        break;
    case 1:
        if (func_02107294()) return;
        if (func_0200f984() == 0) {
            if (func_020215bc()) {
                data_02160054[1] = 999;
                return;
            }
            func_02107334(data_02160204[0x7f] * 0x4800 + 0x2400, (u32)buf, 0x1698);
            data_02160054[1]++;
            return;
        }
        func_0202147c(5);
        break;
    case 2:
        if (func_02107294()) return;
        if (func_0200f984() == 0) {
            if (func_020215bc()) {
                data_02160054[1]++;
                data_02160204[0x14c] |= 2;
                data_02160204[0x14c] |= 8;
                func_02021bd0(data_02160204[0x7f] * 0x4800);
                return;
            }
            if (*data_02160078 == 0x6d63) {
                data_02160204[0x14c] |= 4;
                data_02160204[0x14c] |= 8;
                func_02021bd0(data_02160204[0x7f] * 0x4800);
                func_02021bd0(data_02160204[0x7f] * 0x4800 + 0x2400);
            }
            func_0202147c(6);
            return;
        }
        func_0202147c(5);
        break;
    case 3:
        data_02160054[2] = 1;
        func_02021514();
        func_021072d0(data_02160204[0x7f] * 0x4800, (u32)buf, 0x1698);
        data_02160054[1]++;
        break;
    case 4:
        if (func_02107294()) return;
        if (func_0200f984() == 0) {
            data_02160054[1] = 0;
        }
        break;
    case 999:
        func_0210e620(buf[9]);
        func_0202147c(0);
        break;
    }
}

s32 func_02021a28(void) {
    return func_02021428((u16 *)&func_02021618);
}

void func_020217b4(void);
s32 func_02021a3c(void) {
    return func_02021428((u16 *)&func_020217b4);
}

extern u32 data_02160054[];
u32 func_02021a50(void) {
    return data_02160054[3];
}

s32 func_02021a60(u32 arg0) {
    u32 buf[4];
    func_02107334(arg0, (u32)buf, 0x10);
    func_020106a0();
    func_02107294();
    if (func_0200f984() != 0) {
        return 0;
    }
    if (buf[0] != 0x6d63) {
        return 0;
    }
    return buf[1] == 0;
}

void func_02021ac4(void) {
s32 offset;
s32 ok=func_02021344(1);
s32 flags[3]={0,0,0};
register s32 *p=flags;
s32 any=0;
s32 i,first;

if(ok) {
for(i=0;i<3;i++) {
offset=i*0x4800;
p[i]=(func_02021a60(offset)||func_02021a60(offset+0x2400))?1:0;
if(p[i]) any=1;
}
}
if(!ok||!any) ((SaveFlag_02021ac4 *)(data_02160204+0x68))->value=0;
else ((SaveFlag_02021ac4 *)(data_02160204+0x68))->value=1;
first=1;
for(i=0;i<3;i++) {
if(first && flags[i]) {data_02160204[0x7f]=i;first=0;}
}
}

extern void func_021072d0(u32, u32, u32);
extern u32 func_02107294(void);
extern void func_02107334(u32, u32, u32);
extern void func_020106a0(void);
extern u32 func_0200f984(void);
void func_02021bd0(s32 arg0) {
    if (func_02021344(1) == 0) {
        return;
    }
    {
        u32 buf[4] = {0};
        func_021072d0(arg0, (u32)buf, 0x10);
    }
    while (func_02107294() != 0) {
    }
}

extern void func_02021bd0(s32);
extern void func_0210d85c(s32);
extern u32 func_021154a4(u32);
extern void func_021154f4(u32, u32);
extern void func_021156bc(s32, u32);
extern void func_021160c0(void *, s32, s32);
extern void func_0210d114(u32, void *);
extern void func_0211568c(s32, u32);
extern u8 data_02145fc8[];
extern void *data_02155c80;
extern s32 data_02160050;
void func_02021c28(s32 arg0) {
    s32 offset = arg0 * 0x4800;
    func_02021bd0(offset);
    func_02021bd0(offset + 0x2400);
}

