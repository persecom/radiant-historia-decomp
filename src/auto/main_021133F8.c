/* 51 functions from 0x021133F8 to 0x021143C0 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s32 a[5];
} UnkStruct20;

typedef struct {
    u16 a[5][2];
} UnkStruct20_u16;

extern UnkStruct20_u16 data_02144d20;

extern u8 data_02155dac[];
extern u8 *data_0216bf88;
extern s32 data_02155c3c;
extern UnkStruct20 data_02155d30;
extern UnkStruct20 data_02155d44;
extern void func_021140b8(void *, s32);
extern void *func_021092d8(void *);
extern u8 *func_0210c594(s32, s32);
extern s32 func_020f685c(void *, s32);
extern void func_021167f0(void *, void *);
extern s32 func_02109444(void *);
extern void func_021093b0(void *);
extern s32 func_020a94b8(s32);
extern u32 data_0216bfc0[];
extern u8 data_0216c440[];
extern u8 data_0216c43c[];
extern u8 data_0216c424[];
extern u8 data_0216bfe4[];
extern void *func_0211543c(u32, s32, void *, s32, s32);
extern u32 func_021152f4(void *, s32);
extern void func_02114370(void);
extern void func_02114c28(void);
extern s32 func_02009d2c(void);
extern void func_02009b24(s32);
extern void func_02009cc0(s32);
extern void func_0200964c(u32, s32);
extern void func_0200966c(u32, s32);
extern void func_02009540(u32);
extern void func_02116720(s32 *, s32, s32);

typedef struct {
    s8 unk_00;
    u8 pad_01[3];
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    u32 unk_24;
} Unk_0216bf90;
extern Unk_0216bf90 data_0216bf90;
extern u8 data_0216bfa0[16];
extern u8 data_0216bfb0[16];
extern void func_02009834(void);
extern void func_0200f0a4(u32);
extern void func_0200f0c4(u32);
extern void func_02113a80(void);
extern void func_02114aa4(void);
extern void func_02113da8(void);
extern s32 func_02009964(s32);
extern void func_02113e5c(void);
extern void func_02114ac4(void);
extern void func_02116350(void);
extern void func_02009b24(s32);
extern void func_02113bcc(s32);
extern void func_0211630c(s32);
extern void func_02114b44(void);
extern void func_020097d0(s32);
extern void func_020095a8(u32, u32, u32, s32);
extern s32 func_02009d2c(void);
extern void func_02009cc0(s32);
extern void func_02113948(void);
extern void func_02113980(void);

typedef struct {
    u8 unk_00[0x2c];
    u8 flag_2c;
    u8 unk_2d[0x17];
} UnkEntry_0216bfe4;
extern u8 data_0216bfd8[12];
extern void *func_02116958(void *, void *);
extern void func_02116708(u8 *);
extern void func_0211424c();
extern void func_021143c0(u8 *, s32);
extern void func_021168f8(void *, void *);
extern void func_02115380(u32);
extern void func_02116894(void *, void *, void *);

extern void func_02114c80(void);
extern void func_02112f88(void);
void func_0211355c(void) {
    void *file = func_021092d8(data_02155dac);
    if (file != NULL) {
        do {
            u8 *entry = func_0210c594(0x2c, data_02155c3c);
            *(u16 *)(entry + 0) = func_020f685c(file, 0);
            *(s32 *)(entry + 4) = func_020f685c(file, 0);
            *(u16 *)(entry + 8) |= (u16)(func_020f685c(file, 0) != 0 ? 1 : 0);
            func_021167f0(data_0216bf88 + 0x30, entry);
        } while (func_02109444(file) != 0);
    }
    if (file != NULL) {
        func_021093b0(file);
    }
}

s32 func_0211361c(s32 *arg0) {
    return arg0[1];
}

u32 func_02113624(u32 *arg0) {
    return arg0[1] >> 1;
}

void func_02113630(s32 *arg0, s32 *arg1) {
    UnkStruct20 a = data_02155d30;
    UnkStruct20 b = data_02155d44;
    s32 i;
    for (i = 0; i < 5; i++) {
        arg0[i] = func_020a94b8(a.a[i]);
        arg1[i] = func_020a94b8(b.a[i]);
    }
}

extern s32 func_02110b38(u16);
extern s32 func_021136e4(s32);
#pragma optimization_level 0
s32 func_021136b0(u16 arg0, ...) {
    s32 x;
    s32 ret = 0;
    s32 y;
    x = func_02110b38(arg0);
    y = func_021136e4(x);
    return ret;
}

extern void func_0211379c(s32, u16 *, u16 *);
extern s32 func_02022068(u16);
#pragma optimization_level 0
s32 func_021136e4(s32 arg0) {
    u16 sum = 0;
    u16 i;
    s32 count = 0;
    u16 start;
    u16 end;

    func_0211379c(arg0, &start, &end);
    for (i = start; i < end; i++) {
        count = func_02022068(i);
        if (count != 0) {
            if ((arg0 == 1 ? 1 : (arg0 == 2 ? 1 : (arg0 == 3 ? 1 : 0))) != 0) {
                sum += count;
            } else {
                sum++;
            }
        }
    }
    return sum;
}

#pragma optimization_level 0
void func_0211379c(s32 arg0, u16 *arg1, u16 *arg2) {
    UnkStruct20_u16 tbl = data_02144d20;
    if ((u32)arg0 < 5) {
        *arg1 = tbl.a[arg0][0];
        *arg2 = tbl.a[arg0][1];
    }
}
#pragma optimization_level 4

#pragma optimization_level 4

#pragma optimization_level 4

s32 func_02113824(void) {
    func_02112f88();
    return 0;
}

extern u32 data_0216bf8c[4];
u32 func_02113834(void) {
    return data_0216bf8c[0];
}

void func_02113844(void) {
    if (data_0216bf90.unk_0c != 0) {
        return;
    }
    data_0216bf90.unk_0c = 1;
    func_02009834();
    data_0216bf90.unk_10 = (u32)func_02113948;
    data_0216bf90.unk_14 = 0;
    data_0216bf90.unk_20 = (u32)func_02113980;
    data_0216bf90.unk_24 = 0;
    func_0200f0a4((u32)data_0216bfa0);
    func_0200f0c4((u32)data_0216bfb0);
    func_02113a80();
    func_02114aa4();
    func_02113da8();
    data_0216bf90.unk_00 = -1;
    data_0216bf90.unk_04 = 1;
}

void func_021138c0(void) {
    switch (func_02009964(0)) {
    case 0:
        func_02113e5c();
        func_02114ac4();
        func_02116350();
        func_02009b24(0);
        break;
    }
}

void func_021138f0(void) {
    s32 ret;
    func_02113bcc(0);
    func_0211630c(0);
    func_02114b44();
    func_020097d0(0);
    func_020095a8(0xffff, 0xffff, 0xffff, 0);
    ret = func_02009d2c();
    func_02009b24(1);
    func_02009cc0(ret);
}

void func_02113948(void) {
    s32 tmp;
    func_02114c28();
    func_020095a8(0, 0, 0, 0);
    tmp = func_02009d2c();
    func_02009b24(1);
    func_02009cc0(tmp);
}

void func_02113980(void) {
    func_02114c80();
}

s32 func_0211398c(u32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & data_0216bfc0[2]) {
        return 0;
    }
    func_0200964c(arg0, 0);
    data_0216bfc0[2] |= arg0;
    return 1;
}

void func_021139d0(u32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_0200966c(arg0, 0);
    data_0216bfc0[2] &= ~arg0;
}

void func_02113a00(u32 arg0) {
    data_0216bfc0[0] &= ~arg0;
}

s32 func_02113a1c(void) {
    u32 mask = 1;
    s32 i;
    for (i = 0; i < 8; i++) {
        if ((data_0216bfc0[1] & mask) == 0) {
            data_0216bfc0[1] |= mask;
            return i;
        }
        mask <<= 1;
    }
    return -1;
}

void func_02113a60(s32 arg0) {
    data_0216bfc0[1] &= ~(1 << arg0);
}

void func_02113a80(void) {
    data_0216bfc0[2] = 0;
    data_0216bfc0[0] = 0;
    data_0216bfc0[1] = 0;
}

void func_02113a9c(s32 arg0, u32 arg1) {
    *(u32 *)(data_0216c43c + arg0 * 0x24) = (u16)arg1;
}

void func_02113abc(s32 arg0, u32 arg1) {
    *(u32 *)(data_0216c440 + arg0 * 0x24) = arg1;
}

s32 func_02113ad4(s32 arg0, u32 arg1, s32 arg2) {
    u8 *node = func_0211543c(arg1, arg2 + 0x14, func_02114370, 0, 0);
    u32 res;
    if (node == NULL) {
        return 0;
    }
    *(u32 *)(node + 0xc) = 0;
    *(s32 *)(node + 0x10) = arg0;
    *(u32 *)(node + 8) = 0;
    res = func_021152f4(node + 0x14, arg2);
    if (res == 0) {
        return 0;
    }
    *(u32 *)(node + 8) = res;
    func_021167f0(data_0216c424 + arg0 * 0x24 + 0xc, node);
    return 1;
}

void func_02113b58(void **arg0, s32 arg1) {
    func_021140b8(*arg0, arg1);
}

void func_02113b68(u32 arg0, u32 arg1, s32 arg2) {
    s32 i;
    for (i = 0; i < 16; i++) {
        u8 *p = data_0216bfe4 + i * 0x44;
        if (p[0x2c] != 0) {
            if (*(u16 *)(p + 0x34) == 2 && *(u16 *)(p + 0x38) == arg0 && *(u16 *)(p + 0x3a) == arg1) {
                func_021140b8(p, arg2);
            }
        }
    }
}

void func_02113bcc(s32 arg0) {
    s32 i;
    for (i = 0; i < 16; i++) {
        UnkEntry_0216bfe4 *entry = (UnkEntry_0216bfe4 *)&data_0216bfe4[i * 0x44];
        if (entry->flag_2c != 0) {
            func_021140b8(entry, arg0);
        }
    }
}

void func_02113c0c(u32 *arg0) {
    *arg0 = 0;
}

void func_02113c18(void **arg0) {
    if (*(void *volatile *)arg0 != NULL) {
        **(void ***)arg0 = NULL;
        *arg0 = NULL;
    }
}

s32 func_02113c34(u32 arg0) {
    s32 count = 0;
    void *obj = NULL;
    while ((obj = func_02116958(data_0216bfd8, obj)) != NULL) {
        if (*(u16 *)((u8 *)obj + 0x34) == 2 && *(u16 *)((u8 *)obj + 0x38) == arg0) {
            count++;
        }
    }
    return count;
}

s32 func_02113c88(u32 arg0, u32 arg1) {
    s32 count = 0;
    void *obj = NULL;
    while ((obj = func_02116958(data_0216bfd8, obj)) != NULL) {
        if (*(u16 *)((u8 *)obj + 0x34) == 2 && *(u16 *)((u8 *)obj + 0x38) == arg0 && *(u16 *)((u8 *)obj + 0x3a) == arg1) {
            count++;
        }
    }
    return count;
}

void func_02113ce8(u8 **arg0, u8 arg1) {
    if (*arg0 != NULL) {
        (*arg0)[0x41] = arg1;
    }
}

void func_02113cfc(u8 * volatile *arg0, u8 arg1) {
    if (*arg0 != NULL) {
        (*arg0)[0x40] = arg1;
    }
}

void func_02113d10(void *arg0, u32 arg1, s32 arg2) {
    u8 *p;
    if (*(void * volatile *)arg0 == NULL) {
        return;
    }
    p = *(u8 **)arg0;
    if (p[0x2c] == 2) {
        return;
    }
    func_02116720((s32 *)(p + 0x1c), arg1 << 8, arg2);
}

void func_02113d3c(void *arg0) {
    void *p = arg0;
    void *q = *(void * volatile *)p;
    if (q == NULL) {
        return;
    }
    func_02009540(*(u8 *)((u8 *)*(void * volatile *)p + 0x3c));
}

void func_02113d5c(void *arg0, u16 arg1) {
    if (*(void * volatile *)arg0 != NULL) {
        *(u16 *)((u8 *)*(void * volatile *)arg0 + 0x34) = 1;
        *(u16 *)((u8 *)*(void * volatile *)arg0 + 0x38) = arg1;
    }
}

void func_02113d7c(void *arg0, u16 arg1, u16 arg2) {
    if (*(void * volatile *)arg0 == NULL) {
        return;
    }
    *(u16 *)((u8 *)*(void * volatile *)arg0 + 0x34) = 2;
    *(u16 *)((u8 *)*(void * volatile *)arg0 + 0x38) = arg1;
    *(u16 *)((u8 *)*(void * volatile *)arg0 + 0x3a) = arg2;
}

extern void func_021167ac(void *, s32);
extern u8 data_0216bfcc[];
extern void func_020094e0(u8);
extern void func_02009558(u8, s32);
void func_02113da8(void) {
    s32 i;
    func_021167ac(data_0216bfd8, 0x14);
    func_021167ac(data_0216bfcc, 0x14);
    for (i = 0; i < 0x10; i++) {
        u8 *entry = data_0216bfe4 + i * 0x44;
        entry[0x2c] = 0;
        entry[0x3c] = i;
        func_021167f0(data_0216bfcc, entry);
    }
    for (i = 0; i < 0x20; i++) {
        u8 *entry = data_0216c424 + i * 0x24;
        func_021167ac(entry, 0xc);
        func_021167ac(entry + 0xc, 0);
        entry[0x20] = 0x7f;
        *(s32 *)(entry + 0x18) = 1;
        *(s32 *)(entry + 0x1c) = 0;
    }
}

extern void func_021142f0();
void func_0211405c(void) {
    func_021142f0();
}

extern void func_02114160(u8 *);
void func_02114068(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 4);
    func_020094e0(arg0[0x3c]);
    if (*(s32 *)(p + 0x1c) != 0) {
        func_02009558(arg0[0x3c], 0xffff);
    }
    func_02114160(arg0);
    *(s32 *)(arg0 + 0x30) = func_02009d2c();
    arg0[0x2f] = 1;
    arg0[0x2c] = 1;
}

void func_021140b8(void *arg0p, s32 arg1) {
    UnkEntry_0216bfe4 *arg0 = (UnkEntry_0216bfe4 *)arg0p;
    if (arg0 == NULL || arg0->flag_2c == 0) {
        return;
    }
    if (arg1 == 0) {
        func_0211424c();
        return;
    }
    func_02116720((s32 *)((u8 *)arg0 + 0x1c), 0, arg1);
    func_021143c0((u8 *)arg0, 0);
    arg0->flag_2c = 2;
}

void *func_02114108(u32 arg0, u8 *arg1) {
    u8 *base = (u8 *)data_0216c424 + arg0 * 0x24;
    void *obj = func_02116958(base + 0xc, NULL);
    if (obj == NULL) {
        return NULL;
    }
    func_021168f8(base + 0xc, obj);
    *(u32 *)((u8 *)obj + 0xc) = (u32)arg1;
    *(u32 *)(arg1 + 8) = (u32)obj;
    func_02115380(*(u32 *)((u8 *)obj + 8));
    return *(void **)((u8 *)obj + 8);
}

void func_02114160(u8 *arg0) {
    *(u8 *)(arg0 + 0x2e) = 0;
    *(u8 *)(arg0 + 0x2d) = 0;
    *(u8 *)(arg0 + 0x2f) = 0;
    *(u16 *)(arg0 + 0x34) = 0;
    *(u16 *)(arg0 + 0x3e) = 0;
    *(u8 *)(arg0 + 0x40) = 0x7f;
    *(u8 *)(arg0 + 0x41) = 0x7f;
    func_02116708(arg0 + 0x1c);
    func_02116720((s32 *)(arg0 + 0x1c), 0x7f00, 1);
}

void func_021141a8(void *arg0, u8 *arg1) {
    void *obj = func_02116958(arg0, NULL);
    while (obj != NULL) {
        if (arg1[0x3d] < ((u8 *)obj)[0x3d]) {
            goto end;
        }
        obj = func_02116958(arg0, obj);
    }
    func_02116894(arg0, obj, arg1);
    *(u32 *)(arg1 + 4) = (u32)arg0;
end:
    return;
}

