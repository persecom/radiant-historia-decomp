/* 13 functions from 0x020DAA60 to 0x020DB864 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160260;
extern void func_020da8c0(void *,s32);
extern void func_020dd810(void *,s32,s32);
extern void func_0202bec8(void *);
extern void func_020db4ac(void *);
extern void func_020c3020(void *);
extern void func_02030748(s32);

extern void func_020321cc(s32);
extern void func_020951b4(void);
extern s32 func_020deaf0(void *, s32, s32);
extern s32 func_0202e548(u8);
extern void func_02030878(void *, void *, s32, s32, s32, s32);
extern void func_020db35c(void *, s32);
extern void func_020de0a8(void *);
extern u8 *data_02160a6c;

s32 func_020db1f4(void *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    register void *a0 asm("r9") = arg0;
    register u8 *a1 asm("r8") = arg1;
    register s32 a3 asm("r7") = arg3;
    register s32 one asm("r4") = 1;
    register s32 mask asm("r5");
    register s32 bit asm("r6");
    register u16 i asm("r10");
    if (a1[7] == 8) {
        bit = one << arg2;
        mask = func_020deaf0(a1, arg2, one);
        for (i = 0; i < 9; i++) {
            if ((mask & (one << i)) != 0 && (a3 & (one << i)) != 0) {
                func_02030878(a0, a1, func_0202e548(i), mask, bit, one);
            }
        }
        return mask;
    }
    return 0;
}

s32 func_020db298(void *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    if (arg1[7] == 8) {
        s32 mask;
        s32 bit;
        u16 i;
        u16 count;
        bit = 1 << arg2;
        mask = func_020deaf0(arg1, arg2, 1);
        count = 0;
        for (i = 0; i < 9; i++) {
            if ((mask & (1 << i)) != 0 && (arg3 & (1 << i)) != 0) {
                u8 *unit = (u8 *)func_0202e548((u8)i);
                if (*(u16 *)(unit + 0x28) == 0) {
                    func_02030878(arg0, arg1, unit, mask, bit, 1);
                    count++;
                }
            }
        }
        if (count != 0) {
            return mask;
        }
    }
    return -1;
}

void func_020db35c(void *arg0,s32 arg1) {
u8 *p=arg0;
u8 *q=*(u8 **)(p+0x128);
s32 zero=0;
if (!p) return;
if ((u16)(*(u16 *)(p+0x8c)+0x159b)<=2) {
u8 *t=*(u8 **)(p+0x118);
if (*(s32 *)(t+4)<=0) {
*(s32 *)(t+4)=1; *(u32 *)(p+0x80)|=0x10000;
}
}
if (*(s32 *)(*(u8 **)(p+0x118)+4)<0) *(s32 *)(*(u8 **)(p+0x118)+4)=zero;
if (arg1==1) *(s32 *)(*(u8 **)(p+0x118)+4)=zero;
if ((*(u32 *)(p+0x80)&0x800) || *(s32 *)(*(u8 **)(p+0x118)+4)!=0) return;
if (**(u8 **)(p+0x118)==1) func_020da8c0(p,9);
if (**(u8 **)(p+0x118)==0 && (*(u32 *)(p+0x80)&0x20000)) {
*(u32 *)(p+0x80)&=~0x20000;
*(u32 *)(q+0x18)&=~2;
*(u16 *)(*(u8 **)(p+0x118)+0xbc)=zero;
}
if (**(u8 **)(p+0x118)==0 && !(data_02160260[0x8c]==1 && *(u16 *)(p+0x8c)==1)) {
func_020dd810(p,6,0);
}
*(s32 *)(*(u8 **)(p+0x118)+0x70)=zero;
p[0x9c]=zero;
p[0xa2]|=1;
func_0202bec8(p);func_020db4ac(p);func_020c3020(p);func_02030748(1);
}

