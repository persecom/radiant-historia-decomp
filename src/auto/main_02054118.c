/* 14 functions from 0x02054118 to 0x02054E14 (main), found by ds-decomp. */
#include "common.h"
extern const s16 data_0213a394[];
static inline s16 Sin_54a94(s32 a) { return data_0213a394[((a%65536)>>4)*2]; }
static inline s16 Cos_54a94(s32 a) { return data_0213a394[((a%65536)>>4)*2+1]; }
extern u32 data_0216263c[3];
extern u8 *data_02160aec;
typedef struct { s32 x,y,z; } Vec_546c0;
static inline void CopyVec_546c0(Vec_546c0 *dst, const Vec_546c0 *src) {
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}
static inline void SetVec_546c0(Vec_546c0 *dst, s32 x, s32 y, s32 z) {
    dst->x = x;
    dst->y = y;
    dst->z = z;
}
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
static inline s32 Abs_546c0(s32 x) { return x<0 ? -x:x; }
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
extern s16 func_020ddc8c(void *, void *);
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

s32 func_02054324(void *arg0) {
    return func_0205428c(arg0);
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

s32 func_0205453c(u8 *arg0) {
    u16 count = 0;
    u8 *s = *(u8 **)(arg0 + 0xd0);
    if (data_02160aec == NULL) {
        return 0;
    }
    while (1) {
        s32 angle;
        s32 dist;
        s32 idx;
        s32 d;
        u32 half;
        u16 r;

        data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
        r = ((data_0216263c[0] >> 16) * 0xfffe) >> 16;
        angle = (s32)r - 0xffff;
        if (angle < 0) {
            angle = -angle;
        }

        half = (u32)*(u16 *)(s + 0x1c) >> 1;
        if (half != 0) {
            u16 max = half * 2;
            data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
            if (max == 0) {
                r = data_0216263c[0] >> 16;
            } else {
                r = ((data_0216263c[0] >> 16) * max) >> 16;
            }
            dist = (s32)r - (s32)((u32)*(u16 *)(s + 0x1c) >> 1);
        } else {
            dist = 0;
        }
        if (dist < 0) {
            dist = -dist;
        }
        idx = (angle >> 4) * 2;
        d = dist + 0x20;
        *(s32 *)(arg0 + 0x24) = d * data_0213a394[idx] + *(s32 *)(arg0 + 0);
        *(s32 *)(arg0 + 0x2c) = d * data_0213a394[idx + 1] + *(s32 *)(arg0 + 8);
        if (func_0210c2f4(arg0 + 0x18, arg0 + 0x24) < (*(u16 *)(s + 0x1c) << 12)) {
            s32 tileZ = *(s32 *)(arg0 + 0x2c) / 0x10000;
            s32 tileX = *(s32 *)(arg0 + 0x24) / 0x10000;
            u8 *map = data_02160aec;
            s16 width = *(s16 *)(map + 0x58d36);
            if (map[(tileZ * width + tileX) * 0xc + 0xbc8] == 0xff) {
                break;
            }
        }
        if (count > 3) {
            *(Vec_546c0 *)(arg0 + 0x24) = *(Vec_546c0 *)arg0;
            return 0;
        }
        count++;
    }
    return 1;
}

#pragma scheduling off
s32 func_020546c0(u8 *arg0,s32 arg1) {
 u16 tries=0;
 u32 range=(u16)(arg1*2);
 for(;;) {
 u32 val;
 u32 seed=data_0216263c[1]*data_0216263c[0]+data_0216263c[2];
 s32 angle=(u16)(((seed>>16)*0xfffe)>>16)-65535;
 s32 radius;
 data_0216263c[0]=seed;
 if(angle<0) angle=-angle;
 if(arg1!=0) {
 seed=data_0216263c[1]*seed+data_0216263c[2];
 data_0216263c[0]=seed;
 val=seed>>16;
 if(range) val=(val*range)>>16;
 radius=-arg1+(u16)val;
 } else radius=0;
 angle >>=4;
 if(radius<0) radius=-radius;
 radius+=32;
 *(s32 *)(arg0+0x24)=*(s32 *)arg0+radius*data_0213a394[angle*2];
 *(s32 *)(arg0+0x2c)=*(s32 *)(arg0+8)+radius*data_0213a394[angle*2+1];
 if(data_02160aec[0xbc8+12*((*(s32 *)(arg0+0x24)/65536)+(*(s32 *)(arg0+0x2c)/65536)* *(s16 *)(data_02160aec+0x58d36))]==255) break;
 if(tries>3) {
 *(Vec_546c0 *)(arg0+0x24)=*(Vec_546c0 *)arg0; return 0;
 }
 tries++;
 }
 return 1;
}

extern void func_020477dc(void *, s32, s32);
extern void func_020495fc(void *, s32);
extern void func_02050b0c(void *, s32);
extern void func_0205103c(void *);
extern void func_020510e8(void *);
extern void func_02051344(void *);
extern void func_0205196c(void *);
s32 func_02054800(u8 *arg0) {
    u8 *s = *(u8 **)(arg0 + 0xd0);

    *(u16 *)(arg0 + 0x92) = func_020ddc8c(arg0, *(u8 **)(data_021600ac + 0x68));
    *(s32 *)(arg0 + 0x30) = (s16)s[0x1a] * data_0213a394[((*(u16 *)(arg0 + 0x92) % 65536) >> 4) * 2];
    *(s32 *)(arg0 + 0x38) = (s16)s[0x1a] * data_0213a394[((*(u16 *)(arg0 + 0x92) % 65536) >> 4) * 2 + 1];

    CopyVec_546c0((Vec_546c0 *)(arg0 + 0xc), (Vec_546c0 *)arg0);
    CopyVec_546c0((Vec_546c0 *)(arg0 + 0xd4), (Vec_546c0 *)arg0);
    SetVec_546c0((Vec_546c0 *)(arg0 + 0xe0), *(s32 *)arg0 + *(s32 *)(arg0 + 0x30), *(s32 *)(arg0 + 4), *(s32 *)(arg0 + 8) + *(s32 *)(arg0 + 0x38));

    if (*(u16 *)(arg0 + 0x8e) < 700) {
        func_020477dc(arg0, 1, 1);
    } else {
        func_020477dc(arg0, 0, 1);
    }

    if (*(u32 *)(arg0 + 0xac) & 1) {
        u8 *p;
        *(u16 *)(*(u8 **)(arg0 + 0xb0) + 4) = 0;
        func_020495fc(arg0, 0);
        func_02050b0c(arg0, 0);
        func_02050b0c(arg0, 0x8000);
        func_0205103c(arg0);

        CopyVec_546c0((Vec_546c0 *)(arg0 + 0xd4), (Vec_546c0 *)(arg0 + 0xc));
        CopyVec_546c0((Vec_546c0 *)(arg0 + 0xe0), (Vec_546c0 *)arg0);
        *(s32 *)(arg0 + 0x30) = *(s32 *)arg0 - *(s32 *)(arg0 + 0xc);
        *(s32 *)(arg0 + 0x38) = *(s32 *)(arg0 + 8) - *(s32 *)(arg0 + 0x14);
        if (*(s32 *)(arg0 + 0x30) == 0 && *(s32 *)(arg0 + 0x38) == 0) {
            *(u8 *)(arg0 + 0xa4) |= 8;
        }
        func_020510e8(arg0);
        *(u8 *)(arg0 + 0xa4) &= 0xfe;
        *(u8 *)(arg0 + 0xa4) &= 0xfd;
        *(u8 *)(arg0 + 0xa4) &= 0xfb;

        p = *(u8 **)(data_021600ac + 0x68);
        if (p != NULL) {
            if (*(u16 *)(arg0 + 0x90) == *(u16 *)(*(u8 **)(p + 0xb0) + 4)) {
                *(u16 *)(*(u8 **)(arg0 + 0xb0) + 4) = 0;
                *(u16 *)(*(u8 **)(p + 0xb0) + 4) = 0;
            }
        }
        func_02051344(arg0);
        func_0205196c(arg0);
        *(s32 *)(arg0 + 0x30) = 0;
        *(s32 *)(arg0 + 0x38) = 0;
        if (*(s32 *)(arg0 + 0xec) != *(s32 *)arg0 || *(s32 *)(arg0 + 0xf4) != *(s32 *)(arg0 + 8)) {
            CopyVec_546c0((Vec_546c0 *)(arg0 + 0xec), (Vec_546c0 *)arg0);
        }
    } else {
        *(s32 *)arg0 += *(s32 *)(arg0 + 0x30);
        *(s32 *)(arg0 + 8) += *(s32 *)(arg0 + 0x38);
    }

    if (*(u8 *)(arg0 + 0xa4) & 8) {
        *(s16 *)(arg0 + 0x98) += 1;
    } else if (*(u8 *)(arg0 + 0xa4) & 4) {
        *(s16 *)(arg0 + 0x98) += 1;
    } else {
        *(s16 *)(arg0 + 0x98) = 0;
    }

    if (*(s16 *)(arg0 + 0x98) > 60) {
        *(s16 *)(arg0 + 0x98) = 0;
        return 1;
    }
    return 0;
}

void func_02054d5c(u8 *);
s32 func_02054a94(u8 *p) {
    u8 *config = *(u8 **)(p + 0xd0);
    s32 angle;
    u16 id;
    Vec_546c0 pos, next;
    if ((func_02002388(p,p+0x1b4)>>12)<3) {
        if (func_02054324(p)==1) {config[1]=2;func_02054d5c(p);return 0;}
        else {config[1]=1;func_020477dc(p,2,1);return 0;}
        return 0;
    }
    angle = *(u16 *)(p + 0x92);
    angle = (angle % 65536) >> 4;
    *(s32 *)(p + 0x30) = (s16)config[0x1a] * Sin_54a94(*(u16 *)(p+0x92));
    *(s32 *)(p + 0x38) = (s16)config[0x1a] * Cos_54a94(*(u16 *)(p+0x92));
    CopyVec_546c0((Vec_546c0 *)(p+0xc), (Vec_546c0 *)p);
    CopyVec_546c0((Vec_546c0 *)(p+0xd4), (Vec_546c0 *)p);
    SetVec_546c0((Vec_546c0 *)(p+0xe0), *(s32 *)p+*(s32 *)(p+0x30), *(s32 *)(p+4), *(s32 *)(p+8)+*(s32 *)(p+0x38));
    if (*(u16 *)(p+0x8e) < 700) func_020477dc(p, 1, 1);
    else func_020477dc(p, 0, 1);
    if (*(u32 *)(p + 0xac) & 1) {
        u8 *other;
        *(u16 *)(*(u8 **)(p + 0xb0) + 4) = 0;
        func_020495fc(p, 0);
        func_02050b0c(p, 0);
        func_02050b0c(p, 0x8000);
        func_0205103c(p);
        CopyVec_546c0((Vec_546c0 *)(p+0xd4), (Vec_546c0 *)(p+0xc));
        CopyVec_546c0((Vec_546c0 *)(p+0xe0), (Vec_546c0 *)p);
        *(s32 *)(p + 0x30) = *(s32 *)p - *(s32 *)(p + 0xc);
        *(s32 *)(p + 0x38) = *(s32 *)(p + 8) - *(s32 *)(p + 0x14);
        if (*(s32 *)(p + 0x30) == 0 && *(s32 *)(p + 0x38) == 0) p[0xa4] |= 8;
        func_020510e8(p);
        p[0xa4] &= 0xfe;
        p[0xa4] &= 0xfd;
        p[0xa4] &= 0xfb;
        other = *(u8 **)(data_021600ac + 0x68);
        if (other && *(u16 *)(p + 0x90) == *(u16 *)(*(u8 **)(other + 0xb0) + 4)) {
            *(u16 *)(*(u8 **)(p + 0xb0) + 4) = 0;
            *(u16 *)(*(u8 **)(other + 0xb0) + 4) = 0;
        }
        func_02051344(p);
        func_0205196c(p);
        *(s32 *)(p + 0x30) = 0;
        *(s32 *)(p + 0x38) = 0;
        if (*(s32 *)(p + 0xec) != *(s32 *)p || *(s32 *)(p + 0xf4) != *(s32 *)(p + 8))
            CopyVec_546c0((Vec_546c0 *)(p + 0xec), (Vec_546c0 *)p);
    } else {
        *(s32 *)p += *(s32 *)(p + 0x30);
        *(s32 *)(p + 8) += *(s32 *)(p + 0x38);
    }
    if(p[0xa4]&8) ++*(s16 *)(p+0x98);
    else if(p[0xa4]&4) ++*(s16 *)(p+0x98);
    else *(s16 *)(p+0x98)=0;
    if(*(s16 *)(p+0x98)>60) {*(s16 *)(p+0x98)=0;return 1;}
    return 0;
}

#pragma scheduling reset
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

