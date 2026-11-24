/* 14 functions from 0x02054118 to 0x02054E14 (main), found by ds-decomp. */
#include "common.h"
extern const s16 data_0213a394[];
extern u32 data_0216263c[3];
extern u8 *data_02160aec;
typedef struct { s32 x,y,z; } Vec_546c0;
typedef struct { u32 seed, multiplier, increment; } RandomState_546c0;
static inline u16 RandomRange_546c0(u16 max) {
 u32 seed=data_0216263c[1]*data_0216263c[0]+data_0216263c[2];
 u32 value;
 data_0216263c[0]=seed;
 value=seed>>16;
 if(max) value=(value*max)>>16;
 return value;
}

static inline s32 RandomSigned_546c0(s32 max) {
 if(max) return (s32)RandomRange_546c0(max*2)-max;
 return 0;
}
extern s32 func_0205428c();
extern s32 func_0207c578(void);
extern s32 func_02044dd0(void);
extern s32 func_0210c2f4(void *, void *);
extern u8 *data_021600ac;
extern u8 *data_02160200;
extern u8 *data_02160204;
extern void func_02002128(void *, void *, void *);
extern s32 func_02002388(void *, void *);
extern void func_02002274(void *, void *);
extern void func_020020f8(void *, void *, void *);
extern u16 func_020ddc8c(void *, void *);
void func_02054118(void *arg0) {
    u8 *s = *(u8 **)((u8 *)arg0 + 0xd0);
    u8 i;
    s32 min;
    u8 *node;
    s32 r;
    if (*(u16 *)(s + 4) != 1) {
        return;
    }
    if (*(u16 *)(s + 0x1c) != 0) {
        r = func_0210c2f4(arg0, (u8 *)arg0 + 0x18);
        if (r > (*(u16 *)(s + 0x1c) << 12)) {
            *(u16 *)(s + 4) = 0;
            *(u8 *)(s + 1) = 4;
        }
        return;
    }
    i = 0;
    min = 0;
    node = *(u8 **)(s + 0x30);
    if (node == NULL) {
        *(u16 *)(s + 4) = 0;
        return;
    }
    while (node != NULL) {
        if (*(u32 *)(node + 4) == *(u32 *)((u8 *)arg0 + 0)) {
            if (*(u32 *)(node + 0xc) == *(u32 *)((u8 *)arg0 + 8)) {
                return;
            }
        }
        r = func_0210c2f4(arg0, node + 4);
        if (i != 0) {
            if (min > r) {
                min = r;
            }
        } else {
            min = r;
        }
        node = *(u8 **)(node + 0x14);
        i++;
    }
}

s32 func_020541d8(void *arg0) {
    u8 *s;
    u8 *obj;
    s32 r;
    if (data_021600ac == NULL) return 0;
    obj = *(u8 **)(data_021600ac + 0x68);
    if (obj == NULL) return 0;
    s = *(u8 **)((u8 *)arg0 + 0xd0);
    if (s == NULL) return 0;
    if (*(u32 *)(data_02160200 + 0x160) & 0x400) return 0;
    r = func_0210c2f4(obj, arg0);
    if (r >= (*(u16 *)(s + 0x1e) << 12)) goto fail;
    if (*(u32 *)(obj + 0xac) & 0x2000) goto fail;
    if (func_020543e4(arg0) == 0) goto fail;
    if (func_02044dd0() != 1) goto fail;
    if ((*(u32 *)(obj + 0xac) & 0x80000) == 0) {
        return 1;
    }
fail:
    return 0;
}

s32 func_0205428c(arg0)
void *arg0;
{
    u8 *s;
    u8 *obj;
    s32 r;
    if (data_021600ac == NULL) return 0;
    obj = *(u8 **)(data_021600ac + 0x68);
    if (obj == NULL) return 0;
    s = *(u8 **)((u8 *)arg0 + 0xd0);
    if (s == NULL) return 0;
    r = func_0210c2f4(obj, arg0);
    if (r >= (*(u16 *)(s + 0x20) << 12)) goto fail;
    if (*(u32 *)(obj + 0xac) & 0x2000) goto fail;
    if (func_020543e4(arg0) == 0) goto fail;
    if (func_02044dd0() != 1) goto fail;
    if ((*(u32 *)(obj + 0xac) & 0x80000) == 0) {
        return 1;
    }
fail:
    return 0;
}

void func_02054324(void) {
    func_0205428c();
}

s32 func_02054330(void *arg0) {
    u8 *s;
    u8 *obj;
    s32 r;
    if (data_021600ac == NULL) return 0;
    obj = *(u8 **)(data_021600ac + 0x68);
    if (obj == NULL) return 0;
    s = *(u8 **)((u8 *)arg0 + 0xd0);
    if (s == NULL) return 0;
    if (*(u32 *)(data_02160200 + 0x160) & 0x400) return 0;
    r = func_0210c2f4(obj, arg0);
    if (r >= (*(u16 *)(s + 0x22) << 12)) goto fail;
    if (*(u32 *)(obj + 0xac) & 0x2000) goto fail;
    if (func_020543e4(arg0) == 0) goto fail;
    if (func_02044dd0() != 1) goto fail;
    if ((*(u32 *)(obj + 0xac) & 0x80000) == 0) {
        return 1;
    }
fail:
    return 0;
}

s32 func_020543e4(void *arg0) {
    if (*(u32 *)((u8 *)arg0 + 0xac) & 0x4000) {
        return 0;
    }
    return func_0207c578() != 1;
}

void func_0205440c(u8 *arg0, s32 arg1) {
    if (arg1 != 0) {
        *(u32 *)(arg0 + 0x80) |= 2;
        *(u32 *)(arg0 + 0x80) &= ~0x400;
        *(u32 *)(arg0 + 0xac) |= 1;
    } else {
        *(u32 *)(arg0 + 0x80) &= ~2;
        *(u32 *)(arg0 + 0x80) |= 0x400;
        *(u32 *)(arg0 + 0xac) &= ~1;
    }
}

void func_0205443c(s32 arg0) {
    u8 *node = *(u8 **)(data_02160204 + 0xe8);
    if (arg0 != 0) {
        while (node != NULL) {
            u8 *s = *(u8 **)(node + 0xd0);
            if (s != NULL) {
                if (s[0xc] != 0) {
                    return;
                }
                s[0xc] = s[1];
                (*(u8 **)(node + 0xd0))[1] = 0;
            }
            node = *(u8 **)(node + 0x134);
        }
    } else {
        while (node != NULL) {
            u8 *s = *(u8 **)(node + 0xd0);
            if (s != NULL) {
                if (s[0xc] == 0) {
                    return;
                }
                s[1] = s[0xc];
                (*(u8 **)(node + 0xd0))[0xc] = 0;
            }
            node = *(u8 **)(node + 0x134);
        }
    }
}

void func_020544d8(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return;
    }
    if (arg1 != 0) {
        u8 *s = *(u8 **)((u8 *)arg0 + 0xd0);
        if (s == NULL) {
            return;
        }
        if (s[0xc] != 0) {
            return;
        }
        s[0xc] = s[1];
        (*(u8 **)((u8 *)arg0 + 0xd0))[1] = 0;
    } else {
        u8 *s = *(u8 **)((u8 *)arg0 + 0xd0);
        if (s != NULL && s[0xc] != 0) {
            s[1] = s[0xc];
            (*(u8 **)((u8 *)arg0 + 0xd0))[0xc] = 0;
        }
    }
}

s32 func_020546c0(u8 *arg0,s32 arg1) {
 u16 tries=0;
 u16 range=arg1*2;
 u32 *rng=data_0216263c;
 const s16 *table=data_0213a394;
 for(;;) {
 u32 seed=rng[1]*rng[0]+rng[2];
 s32 angle=(u16)(((seed>>16)*0xfffe)>>16)-65535;
 s32 radius;
 rng[0]=seed;
 if(angle<0) angle=-angle;
 if(arg1!=0) {
 u32 val;
 seed=rng[1]*seed+rng[2];
 rng[0]=seed;
 val=seed>>16;
 if(range) val=(val*range)>>16;
 radius=-arg1+(u16)val;
 } else radius=0;
 angle >>=4;
 if(radius<0) radius=-radius;
 radius+=32;
 *(s32 *)(arg0+0x24)=*(s32 *)arg0+radius*table[angle*2];
 *(s32 *)(arg0+0x2c)=*(s32 *)(arg0+8)+radius*table[angle*2+1];
 if(data_02160aec[0xbc8+12*((*(s32 *)(arg0+0x24)/65536)+(*(s32 *)(arg0+0x2c)/65536)* *(s16 *)(data_02160aec+0x58d36))]==255) return 1;
 if(tries>3) {
 *(Vec_546c0 *)(arg0+0x24)=*(Vec_546c0 *)arg0; return 0;
 }
 tries++;
 }
}

void func_02054d5c(u8 *arg0) {
    u8 *p = *(u8 **)(data_021600ac + 0x68);
    struct { s32 x, y, z; } vec1 = { 0, 0, 0 };
    struct { s32 x, y, z; } vec2 = { 0, 0, 0 };
    s32 dist;

    *(s32 *)(arg0 + 0x1b8) = 0;
    func_02002128(p, arg0, &vec1);
    dist = (func_02002388(arg0, p) >> 12) + 0x80;
    func_02002274(&vec1, &vec1);
    vec2.x = vec1.x * dist;
    vec2.z = vec1.z * dist;
    func_020020f8(arg0, &vec2, arg0 + 0x1b4);
    *(u16 *)(arg0 + 0x92) = func_020ddc8c(arg0, arg0 + 0x1b4);
    *(s16 *)(arg0 + 0x98) = 0;
}

