/* 6 functions from 0x0203F038 to 0x0203FD08 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 v[10]; } Draw_0203f038;
typedef struct { s16 v[24]; } Table24_0203f038;
typedef struct { s16 v[12]; } Table12_0203f038;
typedef struct { s16 v[72]; } Table72_0203f038;
typedef struct { s16 v[18]; } Table18_0203f038;
extern Draw_0203f038 data_0213ef90;
extern Table24_0203f038 data_0213f070, data_0213f0a0;
extern Table12_0203f038 data_0213f034, data_0213f01c, data_0213efa4, data_0213efbc, data_0213efd4, data_0213efec, data_0213f004;
extern Table72_0203f038 data_0213f10c;
extern Table18_0203f038 data_0213f04c;
void func_021098ac(void *);


typedef struct UnkStruct_0203fb58 {
    u8 unk00[4];
    u32 unk04;
    u8 unk08[4];
    u32 unk0c;
    u32 unk10;
    u32 unk14;
    u32 unk18;
} UnkStruct_0203fb58;

typedef struct UnkNode_0203fb58 {
    UnkStruct_0203fb58 *unk00;
    u16 unk04;
    u8 unk06[6];
    struct UnkNode_0203fb58 *unk0c;
} UnkNode_0203fb58;

typedef struct UnkStruct_0203fc18 {
    u8 unk00[0x28];
    UnkNode_0203fb58 *unk28;
    u8 unk2c[8];
    u16 unk34;
    u16 unk36;
} UnkStruct_0203fc18;

typedef struct UnkEntry_0203faf4 {
    u32 unk00;
    u32 unk04;
    u32 unk08;
    u32 unk0c;
    u32 unk10;
} UnkEntry_0203faf4;

typedef struct UnkData_0203faf4 {
    UnkEntry_0203faf4 entries[3];
} UnkData_0203faf4;

extern u32 data_02155c3c;
extern UnkData_0203faf4 data_0213f0d0;
extern UnkStruct_0203fc18 *data_021600a0;

extern void *func_0203be60(void *, void *, void *);
extern void *func_0203fb58(void *, u16);
extern void *func_0210c594(s32, u32);
extern void func_0210c5dc(void *);
extern void func_021167f0(void *, void *);

void func_0203fc18(u16 arg0);
void func_0203f038(void) {
 Draw_0203f038 d = data_0213ef90;
 u8 i;
 *(volatile u32 *)0x040004a4 = 0x1f00c0;
 func_0203fc18(*((u8 *)data_021600a0+0x3d));

 if(data_021600a0->unk34 & 1) {
 Table24_0203f038 t = data_0213f070;
 for(i=0;i<3;i++) {
 d.v[1]=t.v[i*8]; d.v[2]=t.v[i*8+1];
 d.v[3]=t.v[i*8+2]>=0?t.v[i*8+2]:-t.v[i*8+2];
 d.v[4]=t.v[i*8+3]>=0?t.v[i*8+3]:-t.v[i*8+3];
 d.v[5]=t.v[i*8+4]; d.v[6]=t.v[i*8+5];
 d.v[8]=t.v[i*8+6]; d.v[9]=t.v[i*8+7];
 func_021098ac(&d);
 }}

 if(data_021600a0->unk34 & 2) {
 Table24_0203f038 t = data_0213f0a0;
 for(i=0;i<3;i++) {
 d.v[1]=t.v[i*8]; d.v[2]=t.v[i*8+1];
 d.v[3]=t.v[i*8+2]>=0?t.v[i*8+2]:-t.v[i*8+2];
 d.v[4]=t.v[i*8+3]>=0?t.v[i*8+3]:-t.v[i*8+3];
 d.v[5]=t.v[i*8+4]; d.v[6]=t.v[i*8+5];
 d.v[8]=t.v[i*8+6]; d.v[9]=t.v[i*8+7];
 func_021098ac(&d);
 }}

 if(data_021600a0->unk34 & 4) {
 Table12_0203f038 t = data_0213f034;
 u8 sel=(data_021600a0->unk34 & 32)!=0;
 int j=sel*6;
 d.v[1]=t.v[j]; d.v[2]=t.v[j+1];
 d.v[3]=t.v[j+4]>=0?t.v[j+4]:-t.v[j+4];
 d.v[4]=t.v[j+5]>=0?t.v[j+5]:-t.v[j+5];
 d.v[8]=t.v[j+4]; d.v[9]=t.v[j+5];
 d.v[5]=t.v[j+2]; d.v[6]=t.v[j+3]; d.v[7]=0x262;
 func_021098ac(&d);
 }

 if(data_021600a0->unk34 & 512) {
 Table12_0203f038 t = data_0213f01c;
 u8 sel=(data_021600a0->unk34 & 32)!=0;
 int j=sel*6;
 d.v[1]=t.v[j]; d.v[2]=t.v[j+1];
 d.v[3]=t.v[j+4]>=0?t.v[j+4]:-t.v[j+4];
 d.v[4]=t.v[j+5]>=0?t.v[j+5]:-t.v[j+5];
 d.v[8]=t.v[j+4]; d.v[9]=t.v[j+5];
 d.v[5]=t.v[j+2]; d.v[6]=t.v[j+3]; d.v[7]=0x262;
 func_021098ac(&d);
 }

 if(data_021600a0->unk34 & 2048) {
 Table12_0203f038 t = data_0213efa4;
 u8 sel=(data_021600a0->unk34 & 32)!=0;
 int j=sel*6;
 d.v[1]=t.v[j]; d.v[2]=t.v[j+1];
 d.v[3]=t.v[j+4]>=0?t.v[j+4]:-t.v[j+4];
 d.v[4]=t.v[j+5]>=0?t.v[j+5]:-t.v[j+5];
 d.v[8]=t.v[j+4]; d.v[9]=t.v[j+5];
 d.v[5]=t.v[j+2]; d.v[6]=t.v[j+3]; d.v[7]=0x262;
 func_021098ac(&d);
 }

 if(data_021600a0->unk34 & 8) {
 Table12_0203f038 t = data_0213efbc;
 u8 sel=(data_021600a0->unk34 & 32)!=0;
 int j=sel*6;
 d.v[1]=t.v[j]; d.v[2]=t.v[j+1];
 d.v[3]=t.v[j+4]>=0?t.v[j+4]:-t.v[j+4];
 d.v[4]=t.v[j+5]>=0?t.v[j+5]:-t.v[j+5];
 d.v[8]=t.v[j+4]; d.v[9]=t.v[j+5];
 d.v[5]=t.v[j+2]; d.v[6]=t.v[j+3]; d.v[7]=0x262;
 func_021098ac(&d);
 }

 if(data_021600a0->unk34 & 1024) {
 Table12_0203f038 t = data_0213efd4;
 u8 sel=(data_021600a0->unk34 & 32)!=0;
 int j=sel*6;
 d.v[1]=t.v[j]; d.v[2]=t.v[j+1];
 d.v[3]=t.v[j+4]>=0?t.v[j+4]:-t.v[j+4];
 d.v[4]=t.v[j+5]>=0?t.v[j+5]:-t.v[j+5];
 d.v[8]=t.v[j+4]; d.v[9]=t.v[j+5];
 d.v[5]=t.v[j+2]; d.v[6]=t.v[j+3]; d.v[7]=0x262;
 func_021098ac(&d);
 }

 if(data_021600a0->unk34 & 4096) {
 Table12_0203f038 t = data_0213efec;
 u8 sel=(data_021600a0->unk34 & 32)!=0;
 int j=sel*6;
 d.v[1]=t.v[j]; d.v[2]=t.v[j+1];
 d.v[3]=t.v[j+4]>=0?t.v[j+4]:-t.v[j+4];
 d.v[4]=t.v[j+5]>=0?t.v[j+5]:-t.v[j+5];
 d.v[8]=t.v[j+4]; d.v[9]=t.v[j+5];
 d.v[5]=t.v[j+2]; d.v[6]=t.v[j+3]; d.v[7]=0x262;
 func_021098ac(&d);
 }

 if(data_021600a0->unk34 & 16) {
 Table12_0203f038 t = data_0213f004;
 u8 sel=(data_021600a0->unk34 & 32)!=0;
 int j=sel*6;
 d.v[1]=t.v[j]; d.v[2]=t.v[j+1];
 d.v[3]=t.v[j+4]>=0?t.v[j+4]:-t.v[j+4];
 d.v[4]=t.v[j+5]>=0?t.v[j+5]:-t.v[j+5];
 d.v[8]=t.v[j+4]; d.v[9]=t.v[j+5];
 d.v[5]=t.v[j+2]; d.v[6]=t.v[j+3]; d.v[7]=0x262;
 func_021098ac(&d);
 }

 if(data_021600a0->unk34 & 0x100) {
 Table72_0203f038 t=data_0213f10c;
 func_0203fc18(2);
 for(i=0;i<9;i++) {
 d.v[1]=t.v[i*8]; d.v[2]=t.v[i*8+1];
 d.v[3]=t.v[i*8+4]; d.v[4]=t.v[i*8+5];
 d.v[8]=t.v[i*8+6]; d.v[9]=t.v[i*8+7];
 d.v[5]=t.v[i*8+2]; d.v[6]=t.v[i*8+3]; d.v[7]=0x262;
 if(i>=3 && i<6) { int n=*((u8*)data_021600a0+0x3c); d.v[9]=(n<<4)-(n-1); }
 if(i>=6 && i<9) { int n=*((u8*)data_021600a0+0x3c); d.v[6]=(n<<4)+0x50-(n-1); }
 func_021098ac(&d);
 }}
 if(data_021600a0->unk36 & 0x4000) {
 *(volatile u32 *)0x040004a4=0x1f00c0;
 d.v[1]=0x53;d.v[2]=0x2a;d.v[3]=9;d.v[4]=5;
 d.v[8]=9;d.v[9]=5;d.v[7]=0x26e;d.v[5]=0xdd;d.v[6]=0x32;
 func_021098ac(&d);
 }
 if(*(s32*)((u8*)data_021600a0+0x38)) {
 Table18_0203f038 t=data_0213f04c;
 for(i=0;i<3;i++) {
 int w,h;
 d.v[1]=t.v[i*6];d.v[2]=t.v[i*6+1];
 w=t.v[i*6+4]>=0?t.v[i*6+4]:-t.v[i*6+4];
 h=t.v[i*6+5]>=0?t.v[i*6+5]:-t.v[i*6+5];
 d.v[3]=w; d.v[4]=h;
 if(i!=1) d.v[8]=t.v[i*6+4]; else d.v[8]=*(s32*)((u8*)data_021600a0+0x38)+1;
 d.v[9]=t.v[i*6+5];
 if(i!=2) d.v[5]=t.v[i*6+2]; else d.v[5]=*(s32*)((u8*)data_021600a0+0x38)+t.v[i*6+2];
 d.v[6]=t.v[i*6+3];func_021098ac(&d);
 }}
}

void func_0203faf4(void) {
    UnkData_0203faf4 buf;
    u8 i;

    buf = data_0213f0d0;
    for (i = 0; i < 3; i++) {
        func_0203fb58(&buf.entries[i], i);
    }
}

void *func_0203fb58(void *arg0, u16 arg1) {
    void *result;
    u8 *p1;
    u8 *p2;
    void *second;

    p1 = func_0210c594(0x1c, data_02155c3c);
    p2 = func_0210c594(0x10, data_02155c3c);
    second = *(void **)((u8 *)arg0 + 4);
    if (second == NULL) {
        result = func_0203be60(p1, *(void **)arg0, *(void **)arg0);
    } else {
        result = func_0203be60(p1, *(void **)arg0, second);
    }
    if (result != NULL) {
        *(s32 *)(p1 + 0x10) = *(s32 *)((u8 *)arg0 + 0x8);
        *(s32 *)(p1 + 0x14) = *(s32 *)((u8 *)arg0 + 0xc);
        *(s32 *)(p1 + 0x18) = *(s32 *)((u8 *)arg0 + 0x10);
        *(void **)p2 = p1;
        *(u16 *)(p2 + 0x4) = arg1;
        func_021167f0(&data_021600a0->unk28, p2);
    } else {
        if (p1 != NULL) {
            func_0210c5dc(p1);
        }
        if (p2 != NULL) {
            func_0210c5dc(p2);
        }
    }
    return result;
}

void func_0203fc18(u16 arg0) {
    UnkStruct_0203fc18 *p;
    UnkNode_0203fb58 *node;

    p = data_021600a0;
    if (p == NULL) return;
    node = p->unk28;
    if (node == NULL) return;
    for (;;) {
        if (node->unk04 == arg0) {
            UnkStruct_0203fb58 *d = node->unk00;
            *(volatile u32 *)0x040004a8 = (d->unk04 >> 3) | (d->unk18 << 26) |
                                          0x40000000 | (d->unk10 << 20) |
                                          (d->unk14 << 23) | 0x20000000;
            *(volatile u32 *)0x040004ac = d->unk0c >> (4 - (d->unk18 == 2));
            *(volatile u32 *)0x04000480 = 0x7fff;
            return;
        }
        node = node->unk0c;
        if (node == NULL) return;
    }
}

void func_0203fcc0(u16 arg0) {
    data_021600a0->unk34 = arg0;
}

#pragma peephole off
void func_0203fcd4(s32 arg0) {
    if (arg0 != 0) {
        data_021600a0->unk36 |= 0x8000;
    } else {
        data_021600a0->unk36 = 0;
        return;
    }
}
