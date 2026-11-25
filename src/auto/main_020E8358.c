/* 8 functions from 0x020E8358 to 0x020E9354 (main), found by ds-decomp. */
#include "common.h"
extern u8 *func_020dd7f0(void);
extern void *func_020e5630(s32,void*,s32);
extern s32 func_020e580c(void*,void*,s32);
extern s32 func_02065c44(void*);
extern void func_020df260(void*,void*);
extern void func_020e47cc(void*,void*),func_020e4a78(void*),func_02032cf4(s32);

extern u8 *data_02160a74;
extern u8 *data_02160078;
extern u8 *func_020e5910(u8 *, s32);
extern void func_020e26f0(s32, s32, s32);
extern void func_020e25fc(s32, s32, s32);

typedef struct {
    s32 m0;
    s32 m4;
    s32 m8;
    s32 mC;
} Entry516c4;

extern Entry516c4 data_021516c4[];

s32 func_020e8358(u8 *arg0) {
u8 *p=data_02160a74;
u16 flags=*(volatile u16*)(p+0x1b8);
s16 shift=*(volatile s16*)(p+0xb2);
if(flags & (1<<shift)) {
switch(*(s16*)(p+0xbc)) {
case 0: case 2: case 4: case 5: return 1;
case 3: return 1;
case 6: if(*(s16*)(*(u8**)(arg0+0x118)+0x5a)>=100) return 1; break;
case 1: {
u8 *r=func_020e5910(arg0,(shift+*(s16*)(p+0xce))&255);
if(r && *(s16*)(*(u8**)(arg0+0x118)+12)>=*(s16*)(r+28)) return 1;
break;
}
}
}
return 0;
}

s32 func_020e8410(s32 arg0,u32 arg1,s32 arg2) {
if(arg0==0) {
if(arg1>=1 && arg1<=3) {if(data_02160078[0x33] & (1<<(arg1-1))) return 1;}
return 0;
}
if(arg0==1 && arg1>=1 && arg1<=3) {
if(arg2!=0) data_02160078[0x33] |= (u8)(1<<(arg1-1));
else data_02160078[0x33] &= (u8)~(1<<(arg1-1));
}
return 0;
}

void *func_020e84c0(s32 arg0) {
    u8 *p = data_02160a74;
    void **a = *(void **)(p + 0xa0);
    void *b = *a;
    void *c = *(void **)b;
    switch (arg0) {
    case 0:
        return c;
    case 1:
        return b;
    default:
        return NULL;
    }
}

void func_020e8504(s32 arg0) {
    if (*(u32 *)(data_02160a74 + 0x58) & 0x4000) {
        func_020e26f0(7, 1, 999);
        func_020e25fc(8, arg0, 1);
    } else {
        func_020e26f0(7, 0, 999);
        func_020e25fc(8, arg0, 0);
        u8 *q = *(u8 **)(data_02160a74 + 0xa0);
        u8 *r = *(u8 **)q;
        u8 *s = *(u8 **)r;
        func_020e26f0(1 << *(u16 *)(s + 0x90), 3, 999);
    }
}

s32 func_020e85a0(s32 arg0, s32 arg1) {
    u8 i;

    for (i = 0; i < 9; i++) {
        s32 *e = (s32 *)data_021516c4 + i * 4;
        s16 a = (s16)e[0];
        s16 b = (s16)e[1];
        s16 c = (s16)(e[0] + e[2]);
        s16 d = (s16)(e[1] + e[3]);

        if (arg0 >= a && arg0 <= c && b <= arg1 && arg1 <= d) {
            return (s8)i;
        }
    }
    return -1;
}

s32 func_020e861c(s32 arg0, s32 arg1) {
    u8 i;

    for (i = 9; i < 12; i++) {
        s32 *e = (s32 *)data_021516c4 + i * 4;
        s16 a = (s16)e[0];
        s16 b = (s16)e[1];
        s16 c = (s16)(e[0] + e[2]);
        s16 d = (s16)(e[1] + e[3]);

        if (arg0 >= a && arg0 <= c && b <= arg1 && arg1 <= d) {
            return (s8)i;
        }
    }
    return -1;
}

void func_020e8698(void) {
    *(u32 *)(data_02160a74 + 0x98) = 0;
    *(u32 *)(data_02160a74 + 0x58) = 0;
    *(u16 *)(data_02160a74 + 0x9c) = 0;
}

extern u8 *data_02160258;
extern u8 *data_02160110;
extern void func_020d91bc(s32);
extern void func_020e25c4(void);
extern void func_020d0a40(s32);
extern void func_02032d74(s32);
extern void func_02095f68(void *);
extern void func_020a9544(void *);
extern void func_020e1ec8(void *, s32);
extern s32 func_020e2be4(void *, u16, s32);
extern void func_0202eac4(s32, u16);
extern void func_020e9d64(s32);
extern void func_020960f4(void);
extern void func_02095fe8(void *);
extern void func_020de0a8(void *);
extern void func_020e95d0(void);
extern void func_020d61b8(s32, u16);
extern void func_020e9384(void *);
extern u8 *func_020e1ccc(void *);
extern u8 *func_020e1c88(void *);
extern void func_020da0c8(u16);
extern void func_020de078(void);
extern void func_020d9058(void *);
extern void func_020d907c(void *);
extern void func_020a5ce4(void *);
extern void func_020df164(void);
extern void func_02095a9c(void *, void *, u16, s32);
extern void func_02096360(s32);
extern void func_020d3c98(s32);
#pragma push
#pragma optimization_level 3
