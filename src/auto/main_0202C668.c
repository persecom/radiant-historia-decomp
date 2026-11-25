/* 14 functions from 0x0202C328 to 0x0202CD5C (main), found by ds-decomp. */
#include "common.h"

extern u8 **data_02160244;
extern void *func_0205bad4(void *);
extern void func_02032b98(void *, void *, s32);

s32 func_0202c668(u8 *arg0, s32 arg1, s32 arg2) {
u8 *p128 = *(u8 **)(arg0+0x128);
s8 *pidx = *(s8 **)(p128+0x54);
s8 idx = *pidx;
u8 *base = (u8 *)data_02160244;
s16 *grp = *(s16 **)(base+0x13c);
u8 *ent = *(u8 **)(base+idx*4+8);
switch(arg1) {
case 0: switch(ent[1]) {
case 1: arg2 = arg2 * grp[0] / 10; break;
case 2: arg2 = arg2 * grp[1] / 10; break;
case 3: arg2 = arg2 * grp[2] / 10; break;
} break;
case 1: switch(ent[1]) {
case 1: arg2 = arg2 * grp[6] / 10; break;
case 2: arg2 = arg2 * grp[7] / 10; break;
case 3: arg2 = arg2 * grp[8] / 10; break;
} break;
case 2: switch(ent[1]) {
case 1: arg2 = arg2 * grp[3] / 10; break;
case 2: arg2 = arg2 * grp[4] / 10; break;
case 3: arg2 = arg2 * grp[5] / 10; break;
} break;
case 3: switch(ent[1]) {
case 1: arg2 = arg2 * grp[9] / 10; break;
case 2: arg2 = arg2 * grp[10] / 10; break;
case 3: arg2 = arg2 * grp[11] / 10; break;
} break;
}
if(arg2%10 != 0) return arg2/10+1;
return arg2/10;
}
