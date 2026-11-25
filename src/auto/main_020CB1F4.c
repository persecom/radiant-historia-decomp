/* 6 functions from 0x020CB1F4 to 0x020CC09C (main), found by ds-decomp. */
#include "common.h"
typedef struct { u32 _[0x5a6]; } SaveWork1698;

extern u32 data_02155c3c;
extern u8 *data_02160078;
extern u32 data_02162858[2];
extern u32 data_02162854;
extern u8 *data_02160204;
extern u8 data_021512f0;
extern char data_021512f8[];
extern char data_02151304[];
extern char data_02151318[];
extern char data_02151334[];
extern char data_02151340[];
extern char data_02151350[];
extern char data_02151368[];

extern void func_02089550(void);
extern void func_02089578(void);
extern void func_020cd0ac(void);
extern void func_020cd0b0(void);
extern void func_0210d9e4(void *);
extern void func_0210db70(void *);
extern void func_0210dbd0(void *);
extern void func_020cda64(s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_020ccd34(s32);

extern void *func_0210c594(u32, s32);
extern void func_0210c5dc(void *);
extern void func_020a2c20(void);
extern void func_021070c4(void);
extern void func_0210f6d4(void);
extern void func_020a31c8(s32);
extern void func_021167ac(void *, u16);
extern void *func_020a94b8(s32);
extern void *func_020a8604(s32, s32);
extern void *func_020a84b8(s32, s32);
extern void func_020a8810(void *, u32);
extern void func_020a9830(void *, void *, u32, u32, u32, u32);
extern void func_020a9610(u32 *, void **, u32, u32, u32, u32);
extern s32 func_020bdf24(const char *, ...);
extern void *func_020c6d5c(u32);
extern s32 func_020c8344(void *, s32, s32);
extern void func_020c8640(void *, u32);
extern void func_020c83f4(void *, s32, s32, s32);
extern void func_020c738c(void *, s32, s32);
extern s32 func_0210e600(void);
extern void func_0210e620(s32);
extern void func_02021a3c(void);
extern u32 func_02021a50(void);
extern void func_0210dc88(void);
extern void func_020cea74(void *);
extern void func_020cdf18(void);
extern u8 *func_020cda08(u32, u16);
extern u8 *func_020cdbc4(u16, u32, u16, u16, s16, s8, u16, u8, u8);
extern void func_020cc09c(void);
extern void func_020ce8d4(void);
extern u8 *data_02160238;

void func_020cb1f4(void) {
}

void func_020cb1f8(void) {
}

extern u8 *data_02160234;
extern u8 *data_0216020c;
extern s32 data_02162884;
extern s32 data_02162814;
extern void func_020bec04(u16);
extern void func_020bebc8(u16);
void func_020cb1fc(void) {
    u8 *p = data_02160234;
    *(s16 *)(p + 0x8e) += 1;
    if (*(s16 *)(p + 0x8e) > 18) {
        *(s16 *)(p + 0x8e) = 18;
    }
    func_020bec04(*(u32 *)(data_0216020c + 0x84));
    func_020bebc8(*(u32 *)(data_0216020c + 0x80));
    if (*(s16 *)(p + 0x8e) <= 6) {
        data_02162884 = (*(s16 *)(p + 0x8e) * 16) / 6 - 16;
        data_02162814 = (*(s16 *)(p + 0x8e) * 16) / 6 - 16;
    } else if (*(s16 *)(p + 0x8e) > 8 && *(s16 *)(p + 0x8e) <= 12) {
        data_02162884 = 0;
        data_02162814 = 0;
    } else if (*(s16 *)(p + 0x8e) > 12) {
        data_02162884 = -((*(s16 *)(p + 0x8e) - 12) * 16) / 6;
        data_02162814 = -((*(s16 *)(p + 0x8e) - 12) * 16) / 6;
    }
}

#pragma push
#pragma opt_common_subs off
#pragma opt_loop_invariants off
void func_020cb320(void) {
    u8 i;
    u8 j;
    u8 k;
    u8 n;
    s32 stride = 0x50;
    s32 texH = 2;
    s32 zero;
    s32 off;
    void *obj;
    u8 *work;
    void *buf;
    u8 *node;
    s32 bestIdx;
    s32 best;

    func_020a2c20();
    func_021070c4();
    data_02160238 = func_0210c594(0x778, data_02155c3c);
    func_0210f6d4();
    data_02162858[0] = (u32)func_02089550;
    data_02162854 = (u32)func_02089578;
    func_020a31c8(0xd);
    func_021167ac(data_02160238 + 0x740, 0x2c);
    func_021167ac(data_02160238 + 0x74c, 0x2c);
    func_021167ac(data_02160238 + 0x758, 0x20);
    func_021167ac(data_02160238 + 0x764, 0x20);
    *(void **)(data_02160238 + 0x40) = func_020a94b8((s32)data_021512f8);
    zero = 0;
    for (i = 0; i < 16; i++) {
        if (i < 8) {
            off = i * stride;
            if (i == 2 || i == 3) obj = func_020a8604(5, texH);
            else obj = func_020a8604(4, texH);
        } else {
            off = i * stride;
            if (i != 8) {
                obj = func_020a84b8(4, texH);
            } else {
                obj = func_020a84b8(5, texH);
            }
        }
        *(void **)(data_02160238 + off + 0x60) = obj;
        func_020a8810(*(void **)(data_02160238 + off + 0x60), 0x14);
        func_020a9830(data_02160238 + 0x64 + off, data_02160238 + 0x98 + off, 0xf0, 0x10, zero, zero);
        func_020a9610((u32 *)(data_02160238 + 0x98 + off), (void **)*(void **)(data_02160238 + 0x40), 1, *(void **)(data_02160238 + off + 0x60), zero, zero);
    }
    func_020a8810(*(void **)(data_02160238 + 0x60), 0x16);
    func_020bdf24(data_02151304);
    *(void **)(data_02160238 + 0x704) = func_020a94b8((s32)data_02151318);
    texH = 1;
    s32 stride2 = 0x64;
    for (j = 0; j < 4; j++) {
        off = j * stride2;
        obj = func_020a8604(4, texH);
        *(void **)(data_02160238 + off + 0x560) = obj;
        func_020a9830(data_02160238 + 0x164 + 0x400 + off, data_02160238 + 0x198 + 0x400 + off, 0xf0, 0x10, 0, 0);
        func_020a9610((u32 *)(data_02160238 + 0x198 + 0x400 + off), (void **)*(void **)(data_02160238 + 0x704), 1, *(void **)(data_02160238 + off + 0x560), 0, 0);
    }
    *(void **)(data_02160238 + 0x700) = func_020a94b8((s32)data_02151334);
    bestIdx = 0;
    for (k = 0; k < 4; k++) {
        *(void **)(data_02160238 + k * 4 + 0x6f0) = func_020c6d5c(4);
        obj = *(void **)(data_02160238 + k * 4 + 0x6f0);
        func_020c8344(obj, 5, 1);
        func_020c8640(obj, 0x14);
        func_020c83f4(obj, *(void **)(data_02160238 + 0x700), 2, bestIdx);
        func_020c738c(obj, 1, 1);
    }
    func_020bdf24(data_02151340);
    work = data_02160238;
    best = 0;
    buf = func_0210c594(0x1698, data_02155c3c);
    *(SaveWork1698 *)buf = *(SaveWork1698 *)data_02160078;
    *(u32 *)(buf + 0x24) = func_0210e600();
    if (data_021512f0 == 0) {
        work[0x708] = data_02160204[0x7f];
    }
    data_02160204[0x14c] = 0;
    data_02160204[0x14c] |= 8;
    data_02160204[0x7f] = 0;
    for (n = 0; n < 3; n++) {
        func_02021a3c();
        do { func_0210dc88(); } while(func_02021a50() == 1);
        {
            func_020bdf24(data_02151350, func_02021a50(), work[n * 16 + 0x710], *(u32 *)(work + n * 16 + 0x718));
        }
        if (func_02021a50() == 0) {
            func_020cea74(work + 0x710 + n * 16);
            if (*(s32 *)(work + n * 16 + 0x71c) > best) {
                best = *(s32 *)(work + n * 16 + 0x71c);
                bestIdx = n;
            }
        } else {
            work[n * 16 + 0x710] = 0;
            *(u32 *)(work + n * 16 + 0x718) = 0;
            *(u32 *)(work + n * 16 + 0x71c) = 0;
        }
    }
    data_02160204[0x14c] &= ~8;
    *(u16 *)(work + 0x776) = best;
    if (data_021512f0 != 0) {
        if (data_021512f0 == 1) {
            data_02160204[0x7f] = 0;
            work[0x708] = bestIdx;
        }
    } else {
        data_02160204[0x7f] = work[0x708];
    }
    *(SaveWork1698 *)data_02160078 = *(SaveWork1698 *)buf;
    func_0210e620(*(u32 *)(buf + 0x24));
    if (buf != NULL) {
        func_0210c5dc(buf);
    }
    *(u32 *)(data_02160078 + 0x2c) = data_02160204[0xd6];
    func_020bdf24(data_02151368);
    func_020cdf18();
    node = func_020cda08(2, 0);
    node[0x2] = 0;
    node[0x26] = 12;
    node = func_020cda08(2, 6);
    node[0x2] = 0;
    node = func_020cda08(2, 7);
    node[0x2] = 0;
    node[0x27] = 0;
    *(u16 *)(node + 0x28) = 0x5ad6;
    node = func_020cda08(2, 8);
    node[0x2] = 0;
    node[0x27] = 1;
    *(u16 *)(node + 0x28) = 0x5ad6;
    node = func_020cda08(2, 9);
    node[0x2] = 0;
    func_020cdbc4(0xa, 0, 0x64, 0x20, 0x65, 0, 0x12, 1, 2);
    func_020cdbc4(0xb, 0, 0x8f, 0x20, 0x65, 0, 0x12, 1, 2);
    func_020cdbc4(0xc, 0, 0xba, 0x20, 0x65, 0, 0x12, 1, 2);
    node = func_020cdbc4(0xd, 0, 0x24, 0x2c, 0x65, 0, 0x12, 1, 2);
    node[0x1f] = 3;
    node = func_020cdbc4(0xe, 0, 0x38, 0x2c, 0x65, 0, 0x12, 1, 2);
    node[0x1f] = 2;
    func_020cdbc4(0xf, 0, 0x64, 0x50, 0x65, 0, 0x12, 1, 2);
    func_020cdbc4(0x10, 0, 0x8f, 0x50, 0x65, 0, 0x12, 1, 2);
    func_020cdbc4(0x11, 0, 0xba, 0x50, 0x65, 0, 0x12, 1, 2);
    node = func_020cdbc4(0x12, 0, 0x24, 0x5c, 0x65, 0, 0x12, 1, 2);
    node[0x1f] = 3;
    node = func_020cdbc4(0x13, 0, 0x38, 0x5c, 0x65, 0, 0x12, 1, 2);
    node[0x1f] = 2;
    func_020cdbc4(0x14, 0, 0x64, 0x80, 0x65, 0, 0x12, 1, 2);
    func_020cdbc4(0x15, 0, 0x8f, 0x80, 0x65, 0, 0x12, 1, 2);
    func_020cdbc4(0x16, 0, 0xba, 0x80, 0x65, 0, 0x12, 1, 2);
    node = func_020cdbc4(0x17, 0, 0x24, 0x8c, 0x65, 0, 0x12, 1, 2);
    node[0x1f] = 3;
    node = func_020cdbc4(0x18, 0, 0x38, 0x8c, 0x65, 0, 0x12, 1, 2);
    node[0x1f] = 2;
    func_020cdbc4(0x19, 0, 0x64, 0x50, 0x65, 0, 0x12, 1, 2);
    func_020cdbc4(0x1a, 0, 0x8f, 0x50, 0x65, 0, 0x12, 1, 2);
    func_020cdbc4(0x1b, 0, 0xba, 0x50, 0x65, 0, 0x12, 1, 2);
    node = func_020cdbc4(0x1c, 0, 0x24, 0x5c, 0x65, 0, 0x12, 1, 2);
    node[0x1f] = 3;
    node = func_020cdbc4(0x1d, 0, 0x38, 0x5c, 0x65, 0, 0x12, 1, 2);
    node[0x1f] = 2;
    func_020ccd34(0);
    switch (data_021512f0) {
 case 0: func_020cda64(3, 0x10000, 0x5000, 6, 0, 8, 0, 0, 0);break;
 case 1: func_020cda64(3, 0x10000, 0x5000, 6, 0, 7, 0, 0, 0);break;
 }
    func_020a8810(*(void **)(data_02160238 + 0x150), 0x16);
    *(u8 *)(data_02160238 + 0x770) = 1;
    *(u32 *)(data_02160238 + 4) = (u32)func_020cc09c;
    *(u32 *)(data_02160238 + 8) = 0x3f3;
    func_0210d9e4(data_02160238 + 4);
    *(void **)(data_02160238 + 0x18) = func_020cd0ac;
    *(u32 *)(data_02160238 + 0x1c) = 1000;
    func_0210db70(data_02160238 + 0x18);
    *(void **)(data_02160238 + 0x2c) = func_020cd0b0;
    *(u32 *)(data_02160238 + 0x30) = 1000;
    func_0210dbd0(data_02160238 + 0x2c);
}
#pragma pop
extern u8 *data_02160200;
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void func_020c6d4c(void *);
extern void func_020a994c(void *);
extern void func_020a98a0(void *);
extern void func_020a957c(void *);
extern void func_020a9544(void *);
extern void func_020a3b84(void);
extern void func_02107104(void);
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_0210dbe8(void *);
extern void func_0210f138(void);
void func_020cbd20(void) {
    u8 *node;
    u8 i;
    u8 j;
    u8 k;
    s32 off;

    while ((node = *(u8 **)(data_02160238 + 0x740)) != NULL) {
        func_021168f8(data_02160238 + 0x740, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }

    while ((node = *(u8 **)(data_02160238 + 0x74c)) != NULL) {
        func_021168f8(data_02160238 + 0x74c, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }

    while ((node = *(u8 **)(data_02160238 + 0x758)) != NULL) {
        func_021168f8(data_02160238 + 0x758, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }

    while ((node = *(u8 **)(data_02160238 + 0x764)) != NULL) {
        func_021168f8(data_02160238 + 0x764, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }

    for (j = 0; j < 4; j++) {
        func_020c6d4c(*(void **)(data_02160238 + j * 4 + 0x6f0));
        *(void **)(data_02160238 + j * 4 + 0x6f0) = NULL;
    }

    for (i = 0; i < 16; i++) {
        off = i * 0x50;
        func_020a994c(data_02160238 + 0x64 + off);
        func_020a98a0(data_02160238 + 0x64 + off);
        {
            u8 *obj = *(u8 **)(data_02160238 + off + 0x60);
            ((void (*)(void *))(*(void **)(obj + 0xc)))(obj);
        }
    }

    for (i = 0; i < 8; i++) {
        u8 *p = *(u8 **)(data_02160238 + i * 4 + 0x40);
        if (p != NULL && *(void **)p != NULL) {
            func_020a957c(data_02160238 + 0x40 + i * 4);
        }
    }

    for (k = 0; k < 4; k++) {
        off = k * 0x64;
        {
            u8 *obj = *(u8 **)(data_02160238 + off + 0x560);
            ((void (*)(void *))(*(void **)(obj + 0xc)))(obj);
        }
        func_020a98a0(data_02160238 + 0x564 + off);
    }

    func_020a9544(*(void **)(data_02160238 + 0x700));
    func_020a9544(*(void **)(data_02160238 + 0x704));

    if (*(u32 *)(data_02160200 + 0x160) & 0x80) {
        *(u32 *)(data_02160200 + 0x160) &= ~0x80;
    }

    func_020a3b84();
    func_02107104();

    if (data_02160238 != NULL) {
        func_0210da14(data_02160238 + 0x4);
        func_0210dba0(data_02160238 + 0x18);
        func_0210dbe8(data_02160238 + 0x2c);
        if (data_02160238 != NULL) {
            func_0210c5dc(data_02160238);
            data_02160238 = NULL;
        }
    }

    func_0210f138();
}

extern u32 data_02162868;
extern u8 data_0215137c[16];
extern u8 *data_02160238;
extern u8 *data_02160204;
extern u8 data_021512f0;
extern void func_02108e54(s32);
extern void func_020cb320(void);
extern s32 func_020bdf24(const char *, ...);
extern void func_0210968c(s32, s32, s32);
extern void func_02109790(s32);
extern void func_020cbd20(void);
extern void func_0210dc88(void);
extern void func_02008250(u32);
s32 func_020cbfa8(void) {
 s32 zero=0, one=1;
 data_02162868=one;
 func_02108e54(zero);func_02108e54(one);
 func_020cb320();
 func_020bdf24(data_0215137c);
 func_0210968c(3,zero,10);
 again:
 if(*(u8 *)(data_02160238+0x771)==0){func_0210dc88();goto again;}
 {
 s32 mode=3;
 func_0210968c(mode,-16,20);
 func_02109790(mode);
 }
 func_020cbd20();
 func_0210dc88();
 data_02162868=0;
 if(*(u8 *)(data_02160204+0xd6)==0x1f){
 if(data_021512f0==0)func_02008250(*(u32 *)0x02fffc20+1);
 else return 2;
 }
 return *(u8 *)(data_02160204+0xd6);
}

