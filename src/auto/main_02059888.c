/* 6 functions from 0x02059888 to 0x0205A83C (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160a74;
extern u8 *data_021600ac;
extern u8 *data_0216020c;
extern s32 data_02162884[];
extern s32 data_02162814[];
typedef struct {
    s32 x, y, z;
} Vec3_02059888;
extern void func_020e4c38(void);
extern void func_020e86c0(s32);
extern void *func_020bf308(s32);
extern void func_020bf344(void *, s32 *, s32 *, s32);
extern void func_020bed54(s32, s32);
extern u8 *func_020becfc(void);
extern void func_020477dc(void *, s32, s32);
extern u8 *func_02044f70(void);
extern u8 *func_020bed44(void);
extern u8 *func_020f0a5c(s32);
extern void func_020f0154(s32);
extern void func_020f0898(s32, s32, s32, s32, s32);
extern u8 *func_020f0aa4(s32);
void func_02059888(void) {
    u8 *r7 = *(u8 **)(data_021600ac + 0x68);
    s32 vec2[3];
    s32 vec1[3];
    u8 *r3;
    u8 *r5;
    u8 *obj;

    if (!(*(u32 *)(func_02044f70() + 0xc) & 0x20) && !(*(u32 *)(func_02044f70() + 0xc) & 0x10)) {
        *(u16 *)(r7 + 0x9a) = 0x1f;
        *(u32 *)(r7 + 0x80) |= 0x40000;
        *(u16 *)(data_0216020c + 0xba) = 0;
        func_020bed54(0x200, 1);
        return;
    }

    r3 = data_0216020c;
    *(s32 *)(r3 + 0x94) = 0;
    *(s32 *)(r3 + 0x98) = 0x15a000;
    *(s32 *)(r3 + 0) = 0xbe000;
    *(s32 *)(r3 + 0x10) = 0;
    *(s32 *)(r3 + 8) = 0x17c000;
    *(u16 *)(r3 + 0x8e) = 0x5d7;
    *(s32 *)(r3 + 0x80) = 0xa0;
    *(s32 *)(r3 + 0x84) = 0x1d;
    *(s32 *)(r3 + 0xac) = 0;
    *(s32 *)(r3 + 0xb4) = 0;
    *(s32 *)(r3 + 0xb0) = 0;
    data_02162884[0] = 0;
    data_02162814[0] = 0;
    *(u16 *)(r3 + 0xbe) = 2;

    *(s32 *)(func_020bed44() + 4) = -0x25000;
    r5 = func_020f0a5c(0x3e4);
    func_020f0154(0x2764);
    func_020f0898(*(s32 *)(r5 + 4), *(s32 *)(r5 + 8), *(s32 *)(r5 + 0xc), 0x2764, 0x1f5);
    obj = func_020f0aa4(0x1f5);
    *(u32 *)(obj + 0x14) |= 0x11;
    if (*(u8 **)(*(u8 **)obj + 0x100) != NULL) {
        **(s32 **)(*(u8 **)obj + 0x100) = 0x320000;
    }

    vec1[0] = 0xd3;
    vec1[1] = 0xa;
    vec1[2] = 0xc1;
    vec2[0] = 0xe9;
    vec2[1] = 0xfc;
    vec2[2] = 0x264;
    func_020bf344(func_020bf308(0), vec1, vec2, 0x96);

    vec1[0] = -0x7e;
    vec1[1] = 0x162;
    vec1[2] = -0x3a3;
    vec2[0] = -0x7e;
    vec2[1] = 0x1e8;
    vec2[2] = -0x3a3;
    func_020bf344(func_020bf308(1), vec1, vec2, 0x3c);

    *(u16 *)(func_020becfc() + 0xd8) = 0;
    func_020bed54(8, 1);
    func_020bed54(0x10, 1);
    func_020477dc(r7, 1, 0);
    *(s32 *)(func_020becfc() + 0x100) = 0;
    *(u16 *)(r7 + 0x92) = 0;
}

void func_0205a3cc(void) {
    u8 *p = *(u8 **)(data_021600ac + 0x68);
    s32 vec2[3];
    s32 vec1[3];

    vec1[0] = 0xd3;
    vec1[1] = 0xa;
    vec1[2] = 0xc1;
    vec2[0] = 0xdd;
    vec2[1] = -0xa;
    vec2[2] = 0x33;
    func_020bf344(func_020bf308(0), vec1, vec2, 0x3c);
    func_020bed54(8, 1);
    *(s32 *)(func_020becfc() + 0x100) = 0;
    *(u16 *)(p + 0x92) = 0x8000;
    func_020477dc(p, 0, 0);
}

u8 *func_020e5630(u8, u32,s32);
void func_020e580c(void *,void *,s32);
void func_020a8810(void *,s32);
void func_020e24bc(void *,s32,s32,u32,s32);
void func_020e2be4(void *,u16,s32);
void func_0205a6d4(void) {
u8 *p=data_02160a74;
s32 zero=0,one=1;
u8 *obj=func_020e5630((u8)*(s16 *)(p+0xbc),*(u32 *)(p+0x1c4),zero);
func_020e580c(**(void ***)(p+0xa0),obj,one);
*(s16 *)(p+0xb2)=zero;
*(s16 *)(p+0xce)=zero;
*(u8 **)(p+0xc0)=obj;
*(s16 *)(p+0x138)=zero;
*(u16 *)(p+0x13a)=*(u16 *)(obj+0x20);
*(s16 *)(p+0x13c)=*(s16 *)(p+0xbc);
*(u16 *)(*(u8 **)(p+0x110+*(s16 *)(p+0xc8)*4))|=2;
*(s16 *)(*(u8 **)(p+0x110+*(s16 *)(p+0xc8)*4)+2)=*(s16 *)(p+0xbc);
*(s16 *)(*(u8 **)(p+0x110+*(s16 *)(p+0xc8)*4)+4)=*(s16 *)(p+0xce);
*(s16 *)(*(u8 **)(p+0x110+*(s16 *)(p+0xc8)*4)+6)=zero;
*(u8 **)(*(u8 **)(p+0x110+*(s16 *)(p+0xc8)*4)+8)=obj;
*(u32 *)(p+0x58)|=0x900;
*(s16 *)(p+0x13e)=zero;
*(s16 *)(p+0x140)=one;
*(s16 *)(p+0x142)=30;
func_020a8810(*(void **)(*(u8 **)(p+0x7c)+4),19);
func_020e24bc(*(void **)(p+0x7c),zero,zero,*(u16 *)(obj+0x20),zero);
*(u16 *)(p+0x19a)=*(u16 *)(p+0x18e);
*(u16 *)(p+0x180)=*(u16 *)(p+0x182);
func_020e86c0(10);
u16 id=*(volatile u16 *)(p+0xbc);
func_020e2be4(*(void *volatile *)(p+0xa0),id,2);
}

void func_0205a810(void) {
    data_02160a74[0x1c2] &= 0xfd;
    func_020e4c38();
    func_020e86c0(0xd);
}
