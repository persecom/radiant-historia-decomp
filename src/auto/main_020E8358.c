/* 8 functions from 0x020E8358 to 0x020E9354 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160a74;
extern u8 *data_02160078;
extern u8 *func_020e5910();
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
void func_020e86c0(u16 state) {
    u8 *p = data_02160a74;
    u8 *a0 = *(u8 **)(p + 0xa0);
    *(u16 *)(p + 0x9c) = state;
    switch (state) {
    case 0:
        func_020d91bc(3);
        break;
    case 1:
        func_020d91bc(3);
        func_020e26f0(7, 0, 999);
        break;
    case 9:
        func_020e25c4();
        func_020d0a40(6);
        func_02032d74(0);
        break;
    case 2: {
        u8 *b = *(u8 **)a0;
        u8 *c = *(u8 **)b;
        u8 *d = *(u8 **)(c + 0x128);
        func_02095f68(*(void **)(b + 0x14));
        func_020a9544(**(void ***)(p + 0x80));
        func_020e1ec8(*(void **)(p + 0x80), 0xb);
        *(u16 *)(p + 0xaa) = 4;
        *(u16 *)(p + 0xac) = 4;
        *(u32 *)(p + 0x19c) = 0;
        *(u16 *)(p + 0x1a0) = 0;
        *(s16 *)(p + 0x1a2) = -1;
        *(u32 *)(p + 0x58) &= ~0x10;
        *(u32 *)(p + 0x58) &= ~0x8;
        *(u32 *)(p + 0x58) |= 0x1000;
        if (func_020e8410(0, 1, 0) != 0) {
            *(u32 *)(p + 0x58) |= 0x4000;
        } else {
            *(u32 *)(p + 0x58) &= ~0x4000;
        }
        *(s16 *)(p + 0xb4) = func_020e2be4(a0, *(u16 *)(p + 0xbc), 1);
        *(s16 *)(p + 0xb4) -= 1;
        func_020e26f0(1 << *(u16 *)(c + 0x90), 3, 999);
        *(u32 *)(c + 0x80) |= 0x1000;
        func_0202eac4(0, *(u16 *)(c + 0x8e));
        func_020e9d64(1);
        func_020960f4();
        func_02095fe8(b);
        if (*(u32 *)(d + 0x18) & 2) {
            *(u32 *)(d + 0x18) &= ~2;
            func_020de0a8(c);
        }
        if (*(u32 *)(*(u8 **)(c + 0x118) + 0x78) & 0x30) {
            func_020e95d0();
            p[0x1cb] |= 2;
            if (*(u32 *)(*(u8 **)(c + 0x118) + 0x78) & 0x20) {
                func_020d61b8(1, (u16)(*(u16 *)(c + 0x8c) + 0x1e));
            } else if (*(u32 *)(*(u8 **)(c + 0x118) + 0x78) & 0x10) {
                func_020d61b8(1, (u16)(*(u16 *)(c + 0x8c) + 0x14));
            }
            *(u32 *)(data_02160a74 + 0x58) &= ~0x4000;
            *(u16 *)(p + 0x9c) = 0x1b;
        } else {
            u8 *e;
            func_020e9384(c);
            e = func_020e1ccc(c);
            if (e != NULL) {
                s16 v = *(s16 *)(e + 4);
                *(s16 *)(p + 0xbc) = v;
                if ((*(u16 *)(p + 0x1b0) & (1 << v)) == 0) {
                    *(s16 *)(e + 4) = 0;
                    *(s16 *)(p + 0xbc) = *(s16 *)(e + 4);
                } else if (v == 1) {
                    *(s16 *)(p + 0xb2) = *(s16 *)(e + 6);
                    *(s16 *)(p + 0xce) = *(s16 *)(e + 8);
                    *(s16 *)(e + 4) = 1;
                    *(s16 *)(p + 0xbc) = *(s16 *)(e + 4);
                    if (func_020e8358(c) == 0) {
                        *(s16 *)(e + 6) = 0;
                        *(s16 *)(e + 8) = 0;
                    }
                } else if (v == 3) {
                    *(s16 *)(e + 4) = 3;
                    *(s16 *)(p + 0xbc) = *(s16 *)(e + 4);
                    *(s16 *)(e + 6) = 0;
                    *(s16 *)(e + 8) = 0;
                } else if (v == 6) {
                    *(s16 *)(p + 0xb2) = *(s16 *)(e + 6);
                    *(s16 *)(p + 0xce) = *(s16 *)(e + 8);
                    *(s16 *)(e + 4) = 6;
                    *(s16 *)(p + 0xbc) = 6;
                    if (func_020e8358(c) == 0) {
                        *(s16 *)(e + 6) = 0;
                        *(s16 *)(e + 8) = 0;
                    }
                }
            } else {
                *(s16 *)(func_020e1c88(c) + 4) = 0;
            }
            func_020e9384(c);
        }
        func_020da0c8(*(u16 *)(data_02160258 + 0x90));
        break;
    }
    case 3:
        func_020da0c8(*(u16 *)(data_02160258 + 0x8e));
        *(u32 *)(p + 0x58) &= ~0x1000;
        break;
    case 4:
        *(u32 *)(p + 0x58) &= ~0x1000;
        break;
    case 8: {
        u8 *c = **(u8 ***)a0;
        func_020d91bc(3);
        func_020da0c8(*(u16 *)(data_02160258 + 0x90));
        func_020de078();
        func_020e25c4();
        func_020e26f0(7, 0, 999);
        func_020e26f0(1 << *(u16 *)(c + 0x90), 3, 999);
        break;
    }
    case 5: {
        u8 *b = *(u8 **)a0;
        u8 *c = *(u8 **)b;
        u8 *e;
        u16 i;
        s32 vec[3];
        *(u32 *)(p + 0x58) &= ~0x800;
        e = func_020e1ccc(c);
        if (e != NULL) {
            *(s16 *)(p + 0xb2) = *(s16 *)(e + 6);
            *(s16 *)(p + 0xce) = *(s16 *)(e + 8);
        }
        if (func_020e8410(0, 2, 0) != 0) {
            *(u32 *)(p + 0x58) |= 0x4000;
            *(u16 *)(p + 0x172) = 0x12c;
            func_020e26f0(7, 1, 999);
        } else {
            *(u32 *)(p + 0x58) &= ~0x4000;
            func_020e25fc(8, 0, 0);
            func_020e26f0(7, 0, 999);
            a0 = *(u8 **)(p + 0xa0);
            b = *(u8 **)a0;
            c = *(u8 **)b;
            func_020e26f0(1 << *(u16 *)(c + 0x90), 3, 999);
        }
        if ((*(u16 *)(*(u8 **)(p + 0x110 + *(s16 *)(p + 0xc8) * 4)) & 1) == 0) {
            *(u16 *)(p + 0xcc) = 0;
            *(u32 *)(*(u8 **)(p + 0x110 + *(s16 *)(p + 0xc8) * 4) + 8) = *(u32 *)(b + 8);
            *(u16 *)(*(u8 **)(p + 0x110 + *(s16 *)(p + 0xc8) * 4)) |= 1;
        }
        *(s16 *)(p + 0xb4) = func_020e2be4(a0, *(u16 *)(p + 0xbc), 1);
        *(s16 *)(p + 0xb4) -= 1;
        if (*(s16 *)(p + 0xb4) < 6) {
            *(u16 *)(p + 0x1b2) = 0x47;
            *(u16 *)(p + 0x150) = 0;
        } else {
            *(u16 *)(p + 0x1b2) = 0x1aa / (*(s16 *)(p + 0xb4) + 1);
            *(u16 *)(p + 0x150) = ((0x47 - *(u16 *)(p + 0x1b2)) * *(s16 *)(p + 0xce)) / (*(s16 *)(p + 0xb4) - 5);
        }
        if (*(s16 *)(p + 0xce) != 0 && *(s16 *)(p + 0xb4) <= 5) {
            *(s16 *)(p + 0xce) = 0;
        }
        if (*(s16 *)(p + 0xce) == 0 && *(s16 *)(p + 0xb2) > *(s16 *)(p + 0xb4)) {
            *(s16 *)(p + 0xb2) = 0;
        }
        vec[0] = *(s32 *)(c + 0) + 0x38000;
        vec[1] = *(s32 *)(c + 4);
        vec[2] = *(s32 *)(c + 8);
        func_020d9058(vec);
        func_020d907c(vec);
        *(void **)(data_02160a74 + 0x16c) = c;
        c[0x192] = 1;
        if (*(u32 *)(p + 0x58) & 0x20000) {
            *(u16 *)(p + 0xcc) = 1;
        } else {
            *(u16 *)(p + 0xcc) = 0;
        }
        if (*(s16 *)(p + 0xbc) == 3) {
            for (i = 0; i <= 5; i++) {
                func_020a9544(**(void ***)(p + 0x60 + i * 4));
                func_020e1ec8(*(void **)(p + 0x60 + i * 4), 1);
            }
            func_020a9544(**(void ***)(p + 0x7c));
            func_020e1ec8(*(void **)(p + 0x7c), 1);
            func_020a9544(**(void ***)(p + 0x80));
            func_020e1ec8(*(void **)(p + 0x80), 0xa);
        } else {
            for (i = 0; i <= 5; i++) {
                func_020a9544(**(void ***)(p + 0x60 + i * 4));
                func_020e1ec8(*(void **)(p + 0x60 + i * 4), 0);
            }
            func_020a9544(**(void ***)(p + 0x7c));
            func_020e1ec8(*(void **)(p + 0x7c), 0);
            func_020a9544(**(void ***)(p + 0x80));
            func_020e1ec8(*(void **)(p + 0x80), 4);
        }
        *(u32 *)(p + 0x58) &= ~0x20000;
        func_020da0c8(*(u16 *)(data_02160258 + 0x8e));
        break;
    }
    case 6:
    case 7: {
        u8 *b = *(u8 **)a0;
        u8 *c = *(u8 **)b;
        u16 i;
        for (i = 0; i < 6; i++) {
            func_020a5ce4(*(void **)(p + 0x60 + i * 4));
        }
        func_020df164();
        func_02032d74(0);
        *(u32 *)(c + 0x80) &= ~0x1000;
        func_0202eac4(1, *(u16 *)(c + 0x8e));
        func_020e9d64(0);
        if ((u16)(s16)(*(s16 *)(p + 0xbc) - 4) <= 1) {
            func_02095a9c(*(void **)(b + 0x14), *(void **)(b + 8), (u16)(*(s16 *)(data_02160110 + 0xb8) + *(s16 *)(p + 0xc8)), *(s16 *)(p + 0xbc) & 0xff);
            func_020960f4();
        }
        *(s16 *)(data_02160110 + 0x108) = *(s16 *)(data_02160110 + 0xb8) + *(s16 *)(p + 0xc8);
        data_02160110[0x10a] = *(s16 *)(p + 0xbc);
        break;
    }
    case 10:
    case 11:
        func_02096360(0);
        *(u32 *)(p + 0x58) &= ~0x100;
        func_020a5ce4(*(void **)(p + 0x7c));
        func_020d3c98(0);
        break;
    case 12:
    case 14:
    case 16:
    case 20:
    case 22:
    case 25:
        break;
    }
}

