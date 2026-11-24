/* 6 functions from 0x02059888 to 0x0205A83C (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160a74;
extern u8 *data_021600ac;
extern void func_020e4c38(void);
extern void func_020e86c0(s32);
extern void *func_020bf308(s32);
extern void func_020bf344(void *, s32 *, s32 *, s32);
extern void func_020bed54(s32, s32);
extern u8 *func_020becfc(void);
extern void func_020477dc(void *, s32, s32);
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
