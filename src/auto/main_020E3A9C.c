/* 11 functions from 0x020E3A9C to 0x020E4A78 (main), found by ds-decomp. */
#include "common.h"
typedef struct { u8 flags, unk1; s8 row, col; u8 pad[5]; u8 side; u8 pad2[10]; u8 active; } TargetState;
static inline void SetTargetPosition(TargetState *dst, s8 row, s8 col, u8 side) { dst->col=col; dst->row=row; dst->side=side; }
extern u8 *data_02160a6c;
void func_0202e568(u16);
void func_0202e5d8(u16);
u8 *func_020de810(void);
u8 *func_020de844(int);
u8 *func_0202c920(u8);
void func_0202eac4(int,u16);
void func_020e4c80(void *,u16);

void func_021098ac(void *);
s32 func_020df38c(s32, s32);
void func_020a3bbc(s32);

typedef struct {
    s16 data[10];
} UnkBuf10_020e3f30;

typedef struct {
    s16 data[30];
} UnkBuf30_020e3f30;

extern const UnkBuf10_020e3f30 data_021449e8;
extern const UnkBuf10_020e3f30 data_02144a10;
extern u8 *data_02160204;
extern const UnkBuf10_020e3f30 data_021449d4;
extern u8 *data_02160a74;
extern const UnkBuf10_020e3f30 data_021449fc;
extern const UnkBuf30_020e3f30 data_02144a24;
void func_020e3db4(u16 *arg0, s32 arg1, s32 arg2) {
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0x7d;
    arg0[4] = 0xf;
    arg0[8] = 0x7d;
    arg0[9] = 0xf;
    arg0[5] = arg1;
    arg0[6] = arg2;
    func_021098ac(arg0);

    arg0[1] = 0x68;
    arg0[2] = 0;
    arg0[3] = 0x18;
    arg0[4] = 0xf;
    arg0[8] = 0x18;
    arg0[9] = 0xf;
    arg0[5] = arg1 + 0x7d;
    arg0[6] = arg2;
    func_021098ac(arg0);
}

void func_020e3e2c(s16 arg0, s16 arg1, s32 arg2) {
    UnkBuf10_020e3f30 other;
    s16 i;

    other = data_021449fc;
    other.data[7] = 0x2cb;
    other.data[2] = 0;
    other.data[3] = 7;
    other.data[8] = 7;
    other.data[4] = 8;
    other.data[9] = 8;

    for (i = 0; i < 2; i++) {
        if (i == 0) {
            other.data[1] = (arg2 % 10) * 7;
        } else if (i == 1) {
            other.data[1] = ((arg2 / 10) % 10) * 7;
        }
        other.data[5] = arg0 - i * 7;
        other.data[6] = arg1;
        func_021098ac(other.data);
    }
}

void func_020e3f30(s32 arg0, s32 arg1, s32 arg2) {
    UnkBuf10_020e3f30 other;
    UnkBuf30_020e3f30 buf;
    s16 i;

    other = data_021449e8;
    buf = data_02144a24;
    func_020a3bbc(0x21);
    other.data[7] = arg2;
    for (i = 0; i < 3; i++) {
        s16 idx = i * 10;
        other.data[1] = buf.data[idx + 1];
        other.data[2] = buf.data[idx + 2];
        other.data[3] = buf.data[idx + 3];
        other.data[4] = buf.data[idx + 4];
        other.data[5] = arg0 + buf.data[idx + 5];
        other.data[6] = arg1 + buf.data[idx + 6];
        other.data[8] = buf.data[idx + 8];
        other.data[9] = buf.data[idx + 9];
        func_021098ac(other.data);
    }
}

void func_020e4028(u16 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 offset = 0;
    if (arg1 == 1) {
        func_020a3bbc(0x15);
        offset = 1;
    } else if (arg1 == 0) {
        func_020a3bbc(0x14);
    }
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0x14;
    arg0[4] = 0x14;
    if (arg3 == 0) {
        arg0[5] = offset + 0x47;
        arg0[6] = offset + 1;
    } else if (arg3 == 1) {
        arg0[5] = offset + 4;
        arg0[6] = offset + 0x82;
    } else if (arg3 == 2) {
        arg0[5] = offset + 4;
        arg0[6] = offset + 0x83;
    } else if (arg3 == 3) {
        arg0[5] = offset + 4;
        arg0[6] = offset + 0x17;
    } else if (arg3 == 4) {
        arg0[5] = offset + 4;
        arg0[6] = offset + 0x80;
    }
    arg0[7] = arg2;
    arg0[8] = 0x14;
    arg0[9] = 0x14;
    func_021098ac(arg0);
}

void func_020e410c(u16 *arg0, s32 arg1, s32 arg2) {
    s32 offset = 0;
    if (arg2 == 0) {
        if (func_020df38c(3, 2) != 0) {
            func_020a3bbc(0x77);
            offset = 1;
        } else {
            func_020a3bbc(0x76);
        }
    } else {
        func_020a3bbc(0x78);
    }
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0x54;
    arg0[4] = 0xe;
    arg0[8] = 0x54;
    arg0[9] = 0xe;
    arg0[5] = offset + 0x76;
    arg0[6] = offset + 4;
    arg0[7] = arg1;
    func_021098ac(arg0);
}

void func_020e419c(u16 *arg0, s32 arg1) {
    s32 offset;
    if (func_020df38c(3, 0x4000) != 0) {
        func_020a3bbc(0x2a);
        offset = 1;
    } else {
        func_020a3bbc(0x29);
        offset = 0;
    }
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0x2d;
    arg0[4] = 0xe;
    arg0[8] = 0x2d;
    arg0[9] = 0xe;
    arg0[5] = offset + 0xcf;
    arg0[6] = offset + 4;
    arg0[7] = arg1;
    func_021098ac(arg0);
}

void func_020e43e4(u16 *, s32, s32, s32);
void func_020e421c(u16 *arg0) {
    UnkBuf10_020e3f30 buf = data_021449d4;
    s16 x = *(s16 *)(data_02160a74 + 0x140);
    s16 y = *(s16 *)(data_02160a74 + 0x142);
    s32 depth = 0x2c6;
    arg0[7] = depth;
    *(volatile u32 *)0x40004a4 = 0x1f00c0;
    func_020a3bbc(0x4e);
    func_020e3db4(arg0, x, y);
    func_020a3bbc(*(u16 *)(data_02160a74 + 0x180));
    depth++;
    func_020e43e4(arg0, (s16)(x + 2), (s16)(y - 2), depth);
    if (*(s16 *)(data_02160a74 + 0xbc) == 3) {
        func_020a3bbc(0x19);
        buf.data[1] = 0x47;
        buf.data[2] = 1;
        buf.data[3] = 7;
        buf.data[4] = 7;
        buf.data[8] = 7;
        buf.data[9] = 7;
        buf.data[5] = x + 0x7b;
        buf.data[6] = y + 5;
        buf.data[7] = depth;
        func_021098ac(&buf);
        func_020e3e2c((s16)(x + 0x8a), (s16)(y + 4), *(s16 *)(data_02160a74 + 0x19a));
    } else if (*(s16 *)(data_02160a74 + 0xbc) == 1) {
        func_020a3bbc(0x19);
        buf.data[1] = 0x51;
        buf.data[2] = 0;
        buf.data[3] = 12;
        buf.data[4] = 8;
        buf.data[8] = 12;
        buf.data[9] = 8;
        buf.data[5] = x + 0x76;
        buf.data[6] = y + 4;
        buf.data[7] = depth;
        func_021098ac(&buf);
        func_020e3e2c((s16)(x + 0x8a), (s16)(y + 4), *(s16 *)(data_02160a74 + 0x19a));
    }
}

void func_020e43e4(u16 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0x10;
    arg0[4] = 0x10;
    arg0[8] = 0x10;
    arg0[9] = 0x10;
    arg0[5] = arg1;
    arg0[6] = arg2;
    arg0[7] = arg3;
    func_021098ac(arg0);
}

void func_020e47cc(TargetState *out,u8 *arg) {
u8 *p=*(u8 **)(arg+8);
u8 i=0;
TargetState *dst=out;
dst->flags=0;dst->active=0;
if(p[6]==7 || p[6]==12){
switch(p[7]){
case 1:case 2:case 3:case 4:
dst->flags|=1;dst->col=dst->row=dst->side=0;
func_0202e568(*(u16 *)(p+0x38));return;
case 5:case 6:case 9:case 11:
dst->flags|=1;dst->col=dst->row=0;dst->side=dst->active=1;
if(p[6]==12)func_0202e5d8(0xe00);else func_0202e5d8(*(u16 *)(p+0x38));
return;
}
}else{
switch(p[7]){
case 1:case 2:case 3:case 4:case 8: {
u8 *e=func_020de810();if(!e)return;
e=*(u8 **)(e+0x128);
if(e){
s32 n=**(s8 **)(e+0x54);
dst->col=2-n%3;dst->row=2-(n/3)%3;
}
dst->side=i;
if(p[7]==8)dst->flags|=2;
func_020e4c80(p,(u16)((2-(s8)dst->row)*3+(2-(s8)dst->col)));
break;
}
case 5:case 6:case 9:case 11: {
u8 *e;
for(;i<3;i++){
e=func_0202c920(i+9);
if(e){
e=*(u8 **)(e+0x128);
dst->col=**(s8 **)(e+0x54)-9;dst->row=3;dst->side=1;break;
}
}
e=*(u8 **)(data_02160a6c+0xac);
while(e){
e[0x192]=0;*(u32 *)(e+0x80)&=~0x1000;
func_0202eac4(1,*(u16 *)(e+0x8e));
e=*(u8 **)(e+0x16c);
}
func_020e4c80(p,(u16)((s8)dst->col+9));break;
}
case 7: {
u8 *e=func_020de844(i);if(!e)return;
e=*(u8 **)(e+0x128);
dst->col=**(s8 **)(e+0x54)-8;dst->row=3;dst->side=2;break;
}
}
}
}

