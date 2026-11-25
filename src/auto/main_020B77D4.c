/* 1 function from 0x020B77D4 to 0x020B8718 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02155c3c;
extern s32 data_02162858[2];
extern s32 data_02162854;
extern u8 *data_021601ec;
extern u8 data_02151028[];
extern u16 data_02143b50[140];
extern u16 data_021439b4[16];

typedef struct {
    u16 unk00;
    s16 unk02;
    u16 unk04;
    s16 unk06;
    s16 unk08;
    s16 unk0a;
    s16 unk0c;
    s16 unk0e;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    s16 unk16;
    s16 unk18;
    s16 unk1a;
} EntryA_020b77d4;

typedef struct {
    u16 unk00;
    s16 unk02;
    s16 unk04;
    s16 unk06;
    s16 unk08;
    s16 unk0a;
    s16 unk0c;
    s16 unk0e;
} EntryB_020b77d4;

typedef struct {
    EntryA_020b77d4 a[10];
} TblA_020b77d4;

typedef struct {
    EntryB_020b77d4 a[2];
} TblB_020b77d4;

extern u16 data_02143a70[112];
extern u16 data_0214390c[4];
extern u16 data_02143984[8];
extern u16 data_02143994[8];
extern u16 data_02143960[6];

typedef struct {
    EntryA_020b77d4 a[8];
} TblC_020b77d4;

typedef struct { u16 a[4]; } Tbl4_020b77d4;
typedef struct { u16 a[7]; } Tbl7_020b77d4;
typedef struct { u16 a[6]; } Tbl6_020b77d4;

void func_020a2c20(void);
void func_021070c4(void);
void func_0210f6d4(void);
void *func_0210c594(s32, u32);
void func_0210d9e4(void *);
void func_0210db70(void *);
void func_0210dbd0(void *);
void func_020c992c(void);
void func_020c9a04(void *, s32);
void *func_020a94b8(void *);
void func_020a31c8(s32);
void func_02124e68(void *);
void func_0212501c(void *);
void func_020a2dd0(void);
void func_020a2e64(void);
u8 *func_020c9b24(void *, u16, u8);
void func_020c738c(u8 *, s16, s16);
void func_020c7894(u8 *, u8);
void func_021115b0(u8 *, s32);
void func_021115bc(u8 *, s32);
void func_021115f8(u8 *, s32, s32);
u8 *func_020c9c10(void *, s32);
void func_020c8640(u8 *, s32);
u8 *func_020c8adc(u8 *);
void func_020c8344(u8 *, s32, s32);
void func_020c83f4(u8 *, void *, s32, s32);
u8 *func_020c8b10(u8 *);
void func_020c8598(u8 *, s32);
void func_020c84e8(u8 *, s32, s32);
void func_02112e80(void);
void func_02113630(void *, void *);
void func_020b8844(void);
void func_020b88a4(void);
void func_020b886c(void);
void func_020b8888(void);
void func_02111828(void *, s32, s32, s32);
void func_02111ac0(void *, s32, s32, s32, s32);
void func_02112278(void *);
void func_02112388(void *, void *);
void func_02112628(void *, s32, s32, s32);
void func_02111db0(void *, void *, s32);
void func_0211071c(void *, void *);
void func_02110754(void *, void *);
void func_02112094(void *, void *);
u8 func_020c94a8(void *);
u8 func_020c94b0(void *);
void func_020b7360(void);
void func_020b8aac(void);
void func_020b8718(void);

void func_020b77d4(void) {
    u8 *p;
    func_020a2c20();
    func_021070c4();
    func_0210f6d4();
    data_02162858[0] = 0;
    data_02162854 = 0;
    p = func_0210c594(0xb4, data_02155c3c);
    data_021601ec = p;
    if (p == NULL) {
        return;
    }
    *(u32 *)(p + 0x0) = 0;
    *(s32 *)(data_021601ec + 0x4) = 1000;
    func_0210d9e4(data_021601ec);
    *(u32 *)(data_021601ec + 0x14) = 0;
    *(s32 *)(data_021601ec + 0x18) = 1000;
    func_0210db70(data_021601ec + 0x14);
    *(u32 *)(data_021601ec + 0x28) = 0;
    *(s32 *)(data_021601ec + 0x2c) = 1000;
    func_0210dbd0(data_021601ec + 0x28);
    {
        u8 *r4 = data_021601ec;
        if (*(void **)(r4 + 0x48) == NULL) {
            *(void **)(r4 + 0x48) = func_0210c594(8, data_02155c3c);
            func_020c992c();
            func_020c9a04(*(void **)(r4 + 0x48), 0xe);
        }
        if (*(void **)(r4 + 0x4c) == NULL) {
            *(void **)(r4 + 0x4c) = func_0210c594(8, data_02155c3c);
            func_020c992c();
            func_020c9a04(*(void **)(r4 + 0x4c), 0x11);
        }
        *(void **)(r4 + 0x88) = func_020a94b8(data_02151028);
    }
    func_020a31c8(0x10);
    {
        u8 sp_14[0x50];
        u8 sp_4[0x10];
        func_02124e68(sp_14);
        func_0212501c(sp_4);
    }
    func_020a2dd0();
    func_020a2e64();
    {
        TblA_020b77d4 tblA;
        u16 i;
        tblA = *(TblA_020b77d4 *)data_02143b50;
        for (i = 0; i < 10; i++) {
            u8 *w = func_020c9b24(*(void **)(data_021601ec + 0x48), tblA.a[i].unk00, (u8)tblA.a[i].unk02);
            *(u16 *)(w + 0x30) = tblA.a[i].unk04;
            *(s16 *)(w + 0x32) = tblA.a[i].unk06;
            *(s16 *)(w + 0x34) = tblA.a[i].unk08;
            *(s16 *)(w + 0x36) = tblA.a[i].unk0a;
            *(s16 *)(w + 0x38) = tblA.a[i].unk0c;
            ((void (*)(u8 *, s16))(*(void **)(w + 0x10)))(w, tblA.a[i].unk0e);
            ((void (*)(u8 *, s16))(*(void **)(w + 0x14)))(w, tblA.a[i].unk10);
            *(s16 *)(w + 0x3e) = tblA.a[i].unk12;
            *(s16 *)(w + 0x40) = tblA.a[i].unk14;
            *(u8 *)(w + 0x43) += (u8)tblA.a[i].unk16;
            func_020c738c(w, tblA.a[i].unk18, tblA.a[i].unk18);
            if (tblA.a[i].unk02 == 5) {
                func_020c7894(w, (u8)tblA.a[i].unk1a);
            }
        }
    }
    {
        u8 *w = func_020c9b24(*(void **)(data_021601ec + 0x48), 0xc, 0x18);
        ((void (*)(u8 *, s32))(*(void **)(w + 0x10)))(w, 0x50);
        ((void (*)(u8 *, s32))(*(void **)(w + 0x14)))(w, 0x4e);
        func_021115b0(w, 0);
        func_021115bc(w, 0x25);
        func_021115f8(w, 4, 0x1e);
        func_021115f8(w, 5, 0x1e);
        func_020c8640(func_020c9c10(*(void **)(w + 0x30), 2), 0x16);
    }
    {
        u8 *w = func_020c9b24(*(void **)(data_021601ec + 0x48), 0xd, 0x12);
        u8 *sub;
        u8 *sub2;
        *(u16 *)(w + 0x30) = 0x25;
        *(s16 *)(w + 0x36) = 0x20;
        *(s16 *)(w + 0x38) = 0x11;
        *(s16 *)(w + 0x3e) = 0x6c;
        *(s16 *)(w + 0x40) = 0x11;
        func_020c7894(w, 3);
        sub = func_020c8adc(w);
        func_020c8344(sub, 4, 1);
        func_020c83f4(sub, *(void **)(data_021601ec + 0x88), 1, 0);
        func_020c8640(sub, 0x16);
        ((void (*)(u8 *, s32))(*(void **)(sub + 0x10)))(sub, 0x17);
        ((void (*)(u8 *, s32))(*(void **)(sub + 0x14)))(sub, 3);
        sub2 = func_020c8b10(w);
        *(u16 *)(sub2 + 0x30) = 0x25;
        *(s16 *)(sub2 + 0x34) = 0x11;
        *(s16 *)(sub2 + 0x36) = 7;
        *(s16 *)(sub2 + 0x38) = 0xc;
        *(s16 *)(sub2 + 0x3a) = 0xa;
        *(s16 *)(sub2 + 0x3c) = 3;
        *(s16 *)(sub2 + 0x3e) = *(s16 *)(sub2 + 0x36);
        *(s16 *)(sub2 + 0x40) = *(s16 *)(sub2 + 0x38);
        ((void (*)(u8 *, s32))(*(void **)(w + 0x10)))(w, -5);
        ((void (*)(u8 *, s32))(*(void **)(w + 0x14)))(w, 0x3a);
        ((void (*)(u8 *, u8))(*(void **)(w + 0x1c)))(w, *(u8 *)(w + 0x43));
    }
    {
        TblB_020b77d4 tblB;
        u16 i;
        tblB = *(TblB_020b77d4 *)data_021439b4;
        for (i = 0; i < 2; i++) {
            u8 *w = func_020c9b24(*(void **)(data_021601ec + 0x48), tblB.a[i].unk00, 4);
            func_020c8344(w, tblB.a[i].unk0c, tblB.a[i].unk0e);
            func_020c8640(w, tblB.a[i].unk0a);
            func_020c8598(w, 1);
            func_020c738c(w, tblB.a[i].unk06, tblB.a[i].unk06);
            ((void (*)(u8 *, s16))(*(void **)(w + 0x10)))(w, tblB.a[i].unk02);
            ((void (*)(u8 *, s16))(*(void **)(w + 0x14)))(w, tblB.a[i].unk04);
        }
    }
    func_020c84e8(func_020c9c10(*(void **)(data_021601ec + 0x48), 0xb), 0xc8, 0x1c);
    func_02112e80();
    func_02113630(data_021601ec + 0x60, data_021601ec + 0x74);
    {
        u8 *r9 = data_021601ec;
        u8 *w;
        u8 *sub;
        u8 *sub2;
        w = func_020c9b24(*(void **)(r9 + 0x4c), 8, 0x12);
        *(u16 *)(w + 0x30) = 0x20;
        *(s16 *)(w + 0x34) = 1;
        *(s16 *)(w + 0x36) = 0x40;
        *(s16 *)(w + 0x38) = 0x22;
        *(s16 *)(w + 0x3e) = 0xc1;
        *(s16 *)(w + 0x40) = 0x22;
        func_020c7894(w, 3);
        sub = func_020c8adc(w);
        func_020c8344(sub, 5, 2);
        func_020c84e8(sub, 0x96, 0x1c);
        func_020c83f4(sub, *(void **)(r9 + 0x88), 7, 0);
        func_020c8640(sub, 0x16);
        ((void (*)(u8 *, s32))(*(void **)(sub + 0x10)))(sub, 0x12);
        ((void (*)(u8 *, s32))(*(void **)(sub + 0x14)))(sub, 3);
        sub2 = func_020c8b10(w);
        *(u16 *)(sub2 + 0x30) = 0x25;
        *(s16 *)(sub2 + 0x34) = 0x11;
        *(s16 *)(sub2 + 0x36) = 7;
        *(s16 *)(sub2 + 0x38) = 0xc;
        *(s16 *)(sub2 + 0x3a) = 5;
        *(s16 *)(sub2 + 0x3c) = 3;
        *(s16 *)(sub2 + 0x3e) = *(s16 *)(sub2 + 0x36);
        *(s16 *)(sub2 + 0x40) = *(s16 *)(sub2 + 0x38);
        ((void (*)(u8 *, s32))(*(void **)(w + 0x10)))(w, 0);
        ((void (*)(u8 *, s32))(*(void **)(w + 0x14)))(w, 0x19);
        ((void (*)(u8 *, u8))(*(void **)(w + 0x1c)))(w, (u8)(*(u8 *)(w + 0x43) + 3));

        w = func_020c9b24(*(void **)(r9 + 0x4c), 0x10, 0x12);
        *(u16 *)(w + 0x30) = 0x20;
        *(s16 *)(w + 0x34) = 1;
        *(s16 *)(w + 0x36) = 0x40;
        *(s16 *)(w + 0x38) = 0x22;
        *(s16 *)(w + 0x3e) = 0xc1;
        *(s16 *)(w + 0x40) = 0x22;
        func_020c7894(w, 3);
        sub = func_020c8adc(w);
        func_020c8344(sub, 5, 2);
        func_020c84e8(sub, 0x96, 0x1c);
        func_020c83f4(sub, *(void **)(r9 + 0x88), 8, 0);
        func_020c8640(sub, 0x16);
        ((void (*)(u8 *, s32))(*(void **)(sub + 0x10)))(sub, 0x12);
        ((void (*)(u8 *, s32))(*(void **)(sub + 0x14)))(sub, 3);
        sub2 = func_020c8b10(w);
        *(u16 *)(sub2 + 0x30) = 0x25;
        *(s16 *)(sub2 + 0x34) = 0x11;
        *(s16 *)(sub2 + 0x36) = 7;
        *(s16 *)(sub2 + 0x38) = 0xc;
        *(s16 *)(sub2 + 0x3a) = 5;
        *(s16 *)(sub2 + 0x3c) = 3;
        *(s16 *)(sub2 + 0x3e) = *(s16 *)(sub2 + 0x36);
        *(s16 *)(sub2 + 0x40) = *(s16 *)(sub2 + 0x38);
        ((void (*)(u8 *, s32))(*(void **)(w + 0x10)))(w, 0);
        ((void (*)(u8 *, s32))(*(void **)(w + 0x14)))(w, 0x19);
        ((void (*)(u8 *, u8))(*(void **)(w + 0x1c)))(w, (u8)(*(u8 *)(w + 0x43) + 3));

        w = func_020c9b24(*(void **)(r9 + 0x4c), 3, 0x12);
        *(u16 *)(w + 0x30) = 0xc;
        *(s16 *)(w + 0x36) = 0x34;
        *(s16 *)(w + 0x38) = 0x10;
        *(s16 *)(w + 0x3e) = 0x34;
        *(s16 *)(w + 0x40) = 0x10;
        func_020c7894(w, 3);
        ((void (*)(u8 *, s32))(*(void **)(w + 0x10)))(w, 0xc5);
        ((void (*)(u8 *, s32))(*(void **)(w + 0x14)))(w, 0x9b);
        ((void (*)(u8 *, u8))(*(void **)(w + 0x1c)))(w, (u8)(*(u8 *)(w + 0x43) + 3));

        w = func_020c9b24(*(void **)(r9 + 0x4c), 9, 0x12);
        *(u16 *)(w + 0x30) = 0x10;
        *(s16 *)(w + 0x36) = 0x20;
        *(s16 *)(w + 0x38) = 0x12;
        *(s16 *)(w + 0x3e) = 0x60;
        *(s16 *)(w + 0x40) = 0x12;
    }
}
