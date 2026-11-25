/* 32 functions from 0x02128B80 to 0x02129A6C (main), found by ds-decomp. */
#include "common.h"
typedef struct ClearBlock29624 { u32 a, b, c, d; } ClearBlock29624;
extern u32 data_02173478[4];
extern u32 data_02173488;
extern u32 data_0217357c[3];
extern u32 data_0217358c[4];

extern void func_0212a9f4(void);
extern void func_021295a4(void *);
extern void func_0212a9f8(void);
extern void func_0212bda8(void *);
extern void func_021293c0();
extern void func_02128eb4();
extern void func_0212926c();
extern u32 data_02173ac0;
extern s32 func_0212eb2c(u32);
extern s32 func_0212eb38(u32);
extern s32 func_0212d5d0(u32);
extern s32 func_0212c7b0(u32);
extern void func_0212eb1c(u32, s32);
extern s32 func_02128314(void *);
extern void func_02129490();
extern void func_0212951c(void *);
extern void func_021294c8(void *);
extern void func_02013878(void *, s32, u32);
extern void func_0212b3f8(s32, s32, void *, void *);
extern void *memset(void *, int, unsigned long);
extern u8 data_0217348c[240];
extern u8 data_02156a54[];
extern void func_0212a9dc(void);
extern void func_0212a9e8(void);
extern s32 func_0212d590(u32);
extern s32 func_0212bcd0(void *, u32, s16 *);
extern void func_02128880(u8 *, s32);
extern s32 func_02139ab8(void *, u32, s16 *);
extern s32 func_0212b550(void *, u32, s16 *);
extern void func_02137f80(void *, s32, void *, void *);
extern s32 func_0212d548(u32);
extern void func_0212c808(u32);
extern void func_0212c7f0(u32);
extern void func_0212d21c(u32);
extern void func_0212c7cc(u32, s32);
extern s32 func_0212d5e0(u32);
extern void func_0212d578(u32, s32);
extern void func_0212d588(u32, s32);
extern void func_0212d580(u32, s32);
void func_02128b80(u8 *arg0) {
    u32 buf_a[2];
    u32 buf_a_rem[2];
    u32 buf_b[2];
    u32 buf_b_rem[2];
    s16 s1;
    s16 s0;
    s32 len2;
    s32 len1;
    u32 r6;
    u8 *r7;
    s32 ret1;
    s32 offset;
    s32 offset2;
    s32 ret2;

    r6 = *(u32 *)(arg0 + 4);
    r7 = *(u8 **)(arg0 + 0x14);
    offset2 = 0;
    if (*(s8 *)(arg0 + 0x98) == 0) {
        return;
    }

    s0 = 0;
    s1 = 0;
    func_0212a9dc();
    (*(void (**)(void *, s32, s32, void *))(*(u8 **)r7 + 0x18))(r7, 1, 0x7fffffff, buf_a);
    (*(void (**)(void *, s32, s32, void *))(*(u8 **)r7 + 0x18))(r7, 1, 0x7fffffff, buf_b);

    offset = 0;
    if (func_0212d590(r6) == 0) {
        if (func_0212bcd0((void *)buf_a[0], buf_a[1], &s1) != 0) {
            func_02128880(arg0, 0);
            (*(void (**)(void *, s32, void *))(*(u8 **)r7 + 0x1c))(r7, 1, buf_b);
            (*(void (**)(void *, s32, void *))(*(u8 **)r7 + 0x1c))(r7, 1, buf_a);
            func_0212a9e8();
            return;
        }
    }

    offset += s1;
    if (func_0212d590(r6) == 1) {
        ret1 = func_02139ab8((u8 *)buf_a[0] + offset, buf_a[1] - offset, &s1);
        if (ret1 != 0) {
            ret2 = func_02139ab8((void *)buf_b[0], buf_b[1], &s0);
        } else {
            ret2 = -1;
        }
    } else {
        ret1 = func_0212b550((u8 *)buf_a[0] + offset, buf_a[1] - offset, &s1);
        if (ret1 != 0) {
            ret2 = func_0212b550((void *)buf_b[0], buf_b[1], &s0);
        } else {
            ret2 = -1;
        }
    }

    len1 = s1;
    len2 = s0;
    if (ret1 != 0 && ret2 != 0) {
        (*(void (**)(void *, s32, void *))(*(u8 **)r7 + 0x1c))(r7, 1, buf_b);
        (*(void (**)(void *, s32, void *))(*(u8 **)r7 + 0x1c))(r7, 1, buf_a);
        func_02128880(arg0, 0);
        func_0212a9e8();
        return;
    }

    if (ret1 == 0) {
        (*(void (**)(void *, s32, void *))(*(u8 **)r7 + 0x1c))(r7, 1, buf_b);
        offset += len1;
        func_02137f80(buf_a, offset, buf_a, buf_a_rem);
        (*(void (**)(void *, s32, void *))(*(u8 **)r7 + 0x20))(r7, 0, buf_a);
        (*(void (**)(void *, s32, void *))(*(u8 **)r7 + 0x1c))(r7, 1, buf_a_rem);
    } else {
        (*(void (**)(void *, s32, void *))(*(u8 **)r7 + 0x20))(r7, 0, buf_a);
        offset2 += len2;
        func_02137f80(buf_b, offset2, buf_b, buf_b_rem);
        (*(void (**)(void *, s32, void *))(*(u8 **)r7 + 0x20))(r7, 0, buf_b);
        (*(void (**)(void *, s32, void *))(*(u8 **)r7 + 0x1c))(r7, 1, buf_b_rem);
    }

    func_0212a9e8();
    *(s32 *)(arg0 + 0xa4) += func_0212d548(r6);
    func_0212c808(r6);
    func_0212c7f0(r6);
    func_0212d21c(r6);
    if (func_0212c7b0(r6) != 2) {
        func_02128880(arg0, 0);
        return;
    }
    func_0212c7cc(r6, *(s32 *)(arg0 + 0x48));
    func_0212d578(r6, func_0212d5e0(r6));
    func_0212d588(r6, 0);
    func_0212d580(r6, 0);
}

extern u8 data_02156a14[];
extern s32 func_0212dbe8(void *);
extern void func_021280f0(void *, u32, u32, u32, u32);
extern s32 func_0212d5b0(u32);
extern void func_0212bf38(s32, s32, void *, s32);
extern void func_0212be08(void *, void *);
extern void func_0212824c(void *);
extern s32 func_0212d5a0(u32);
extern s32 func_0212d5f0(u32);
extern s32 func_0212d63c(u32);
extern void func_0212ddf0(void *, s32);
extern void func_0212ddb8(void *, void *, void *);
extern void func_02128ab0();
extern void func_0212d62c(u32);
extern s32 func_0212d600(u32);
extern void func_021288c0();
extern void func_0212d56c(u32, void *, void *);
extern s32 func_0212d5c0(u32);
extern void func_0212eb8c(void *, s32);
extern void func_0212eb68(void *, s32);
extern void func_0212eb5c(void *, s32);
extern void func_0212ebbc(void *, s32);
extern void func_021284bc(void *, s32);
extern void func_0212884c(void *, s32 *, s32 *);
extern void func_02128820(void *, s32, s32);
extern void func_02128b3c(void *);
extern void func_0212e5c0(void *, s32);
extern s32 func_0212d6e4(u32);
extern void func_0212ebc0(void *, s32);
extern void func_0212eb10(void *, s32);
void func_02128eb4(u8 *arg0) {
    u8 buf[0x20];
    s32 sp8;
    s32 sp4;
    u32 r5;
    s32 status;

    r5 = *(u32 *)(arg0 + 4);
    sp8 = 0;
    sp4 = 0;

    if (*(u8 *)(arg0 + 2) <= 1 && *(s8 *)(arg0 + 0xa8) == 1) {
        if (func_0212dbe8(*(void **)(arg0 + 8)) == 2) {
            return;
        }
        if (*(void **)(arg0 + 0x10) != NULL) {
            (*(void (**)(void *))(**(u8 ***)(arg0 + 0x10) + 0x14))(*(void **)(arg0 + 0x10));
        }
        func_021280f0(arg0, *(u32 *)(arg0 + 0xb0), *(u32 *)(arg0 + 0xb4), *(u32 *)(arg0 + 0xb8), *(u32 *)(arg0 + 0xbc));
        *(u8 *)(arg0 + 0xa8) = 0;
    }

    status = func_0212c7b0(r5);
    if (status == 2) {
        s32 r6;
        s32 r7;
        s32 r4;
        s32 ch;
        s32 rate;
        void (*cb)(void *, s32, s32, s32);

        r7 = func_0212d5b0(r5);
        if (r7 > *(s8 *)(arg0 + 3)) {
            func_0212bf38(r7, *(s8 *)(arg0 + 3), buf, 0x10);
            func_0212be08(data_02156a14, buf);
            func_0212824c(arg0);
            return;
        }

        r7 = func_0212d5a0(r5);
        r6 = func_0212d5f0(r5);
        if (func_0212d590(r5) == 10) {
            *(s32 *)(arg0 + 0x48) = r7 / *(s32 *)(arg0 + 0x38);
            r7 = func_0212d5d0(r5);
        } else {
            if (r6 > 0) {
                *(s32 *)(arg0 + 0x48) = (r7 / *(s32 *)(arg0 + 0x38)) * 3;
            } else {
                *(s32 *)(arg0 + 0x48) = ((r7 / *(s32 *)(arg0 + 0x38)) * 3) / 2;
            }
            r7 = func_0212d5d0(r5) * 2;
        }
        *(s32 *)(arg0 + 0x48) = ((*(s32 *)(arg0 + 0x48) + r7) / r7) * r7;
        func_0212c7cc(r5, *(s32 *)(arg0 + 0x48));

        if (r6 > 0) {
            if (*(s8 *)(arg0 + 2) == 2) {
                *(s32 *)(arg0 + 0x50) = 0;
            } else {
                s32 v = func_0212d63c(r5);
                *(s32 *)(arg0 + 0x50) = (0x800 - (v % 0x800)) % 0x800;
                *(s32 *)(arg0 + 0x8c) = (v + 0x7ff) / 0x800;
                func_0212ddf0(*(void **)(arg0 + 8), *(s32 *)(arg0 + 0x8c));
                func_0212ddb8(*(void **)(arg0 + 8), (void *)func_02128ab0, arg0);
            }
            func_0212d62c(r5);
            *(s32 *)(arg0 + 0x90) = func_0212d600(r5);
            func_0212d578(r5, *(s32 *)(arg0 + 0x90));
            func_0212d588(r5, 0);
            func_0212d580(r5, 0);
            func_0212d56c(r5, (void *)func_021288c0, arg0);
        } else {
            if (*(void **)(arg0 + 8) != NULL) {
                func_0212ddf0(*(void **)(arg0 + 8), 0x7fffffff);
            }
            func_0212d578(r5, func_0212d5e0(r5));
            func_0212d588(r5, 0);
            func_0212d580(r5, 0);
            func_0212d56c(r5, (void *)func_02128b80, arg0);
        }

        rate = func_0212d5a0(r5);
        ch = func_0212d5b0(r5);
        r4 = func_0212d5e0(r5);
        func_0212eb8c(*(void **)(arg0 + 0xc), func_0212d5c0(r5));
        func_0212eb68(*(void **)(arg0 + 0xc), rate);
        func_0212eb5c(*(void **)(arg0 + 0xc), ch);
        func_0212ebbc(*(void **)(arg0 + 0xc), r4);
        func_021284bc(arg0, *(s16 *)(arg0 + 0x40));
        func_0212884c(arg0, &sp8, &sp4);
        if (sp8 != 0 || sp4 != 0) {
            func_02128820(arg0, sp8, sp4);
        }
        func_02128b3c(arg0);
        if (*(void **)(arg0 + 0x74) != NULL) {
            func_0212e5c0(*(void **)(arg0 + 0x74), rate);
        }
        if (func_0212d590(r5) == 2) {
            func_0212ebc0(*(void **)(arg0 + 0xc), func_0212d6e4(r5));
        }
        func_0212eb10(*(void **)(arg0 + 0xc), 1);
        cb = (void (*)(void *, s32, s32, s32))data_02173478[2];
        if (cb != NULL) {
            cb(arg0, rate, ch, r4);
        }
        *(u8 *)(arg0 + 1) = 2;
    } else if (status == 4) {
        *(u8 *)(arg0 + 1) = 6;
    }
}

void func_0212926c(arg0)
    u8 *arg0;
{
    u32 r4;
    s32 r5;
    s32 r6;
    u32 r7;
    s32 limit;
    r4 = *(u32 *)(arg0 + 0xc);
    r7 = *(u32 *)(arg0 + 4);
    r5 = func_0212eb2c(r4);
    r6 = func_0212eb38(r4);
    limit = *(s32 *)(arg0 + 0x48);
    if (limit >= 0x800) {
        limit = 0x800;
    }
    if (r5 >= limit || r6 <= func_0212d5d0(r7) || func_0212c7b0(*(u32 *)(arg0 + 4)) == 3) {
        if (*(s8 *)(arg0 + 0x70) == 0) {
            if (*(s8 *)(arg0 + 0x72) == 0) {
                func_0212eb1c(r4, 1);
                *(u32 *)(arg0 + 0x9c) = 0;
                *(u32 *)(arg0 + 0xa0) = data_02173ac0;
            }
            arg0[1] = 3;
        }
        arg0[0x71] = 1;
    }
    if (func_0212c7b0(*(u32 *)(arg0 + 4)) != 3) {
        return;
    }
    {
        s32 count = func_02128314(arg0);
        s32 i;
        s32 size = (*(s32 *)(arg0 + 0x48) * count) << 1;
        u32 buf[2];
        for (i = 0; i < count; i++) {
            void *p = *(void **)(arg0 + 0x18 + i * 4);
            (*(void (**)(void *, s32, s32, u32 *))(*(u8 **)p + 0x18))(p, 0, size, buf);
            func_02013878((void *)buf[0], 0, buf[1]);
            (*(void (**)(void *, s32, u32 *))(*(u8 **)p + 0x20))(p, 1, buf);
        }
    }
}

void func_021293c0(arg0)
u8 *arg0;
{
s32 i, count;
if (*(s8 *)(arg0+0x6c)==0 && *(s32 *)(arg0+0xc0)!=0 && func_0212d540(*(u32 *)(arg0+4)) >= *(s32 *)(arg0+0xc0))
func_0212d578(*(u32 *)(arg0+4), -1);
if(func_0212c7b0(*(u32 *)(arg0+4)) != 3) return;
count=func_0212d5b0(*(u32 *)(arg0+4));
data_02173478[3]=count;
func_0212eb98(*(u32 *)(arg0+0xc));
for(i=0;i<count;i++){
void *p=*(void **)(arg0+0x18+i*4);
data_02173478[0]=(*(s32 (**)(void *,s32))(*(u8 **)p+0x24))(p,1);
if((s32)data_02173478[0]>=64) break;
}
if(i==count){func_0212eb10(*(u32 *)(arg0+0xc),0);arg0[1]=4;}
}

void func_02129490(arg0)
    u8 *arg0;
{
    data_02173478[1] = func_0212eb2c(*(u32 *)(arg0 + 0xc));
    if (func_0212eb44(*(u32 *)(arg0 + 0xc)) != 2) {
        arg0[1] = 5;
    }
}

void func_021294c4(void) {
}

void func_021294c8(void *arg0) {
    u8 *p = arg0;
    u32 p1 = *(u32 *)(p + 8);
    if (p1 != 0) {
        if (func_0212dbe8(p1) == 4) {
            *(s16 *)(p + 0x60) = -1;
            p[1] = 6;
        }
    }
    {
        u32 p2 = *(u32 *)(p + 0x94);
        if (p2 != 0) {
            if (func_0212e5f0(p2) == 3) {
                *(s16 *)(p + 0x60) = -1;
                p[1] = 6;
            }
        }
    }
}

void func_0212951c(void *arg0) {
    u8 *p = arg0;
    if (*(u32 *)(p + 8) == 0) return;
    if (func_021282cc(p) == 0) return;
    switch (*(s8 *)(p + 2)) {
    case 0:
    case 1:
        if (func_0212dbe8(*(u32 *)(p + 8)) == 3) {
            func_0212c7e0(*(u32 *)(p + 4));
        }
        break;
    case 2:
        func_0212c7e0(*(u32 *)(p + 4));
        break;
    case 3:
    case 4:
        break;
    }
}

void func_02129588(void *arg0) {
    func_0212a9f4();
    func_021295a4(arg0);
    func_0212a9f8();
}

void func_021295a4(void *arg0) {
    u8 *p = arg0;
    if (p == NULL) {
        func_0212bda8(data_02156a54);
        return;
    } else {
        s8 code = *(s8 *)(p + 1);
        if (code == 3) {
            func_021293c0();
        } else if (code == 1) {
            func_02128eb4(p);
        } else if (code == 2) {
            func_0212926c();
        } else if (code == 4) {
            func_02129490();
        } else if (code == 5) {
            func_021294c4();
        }
        func_0212951c(p);
        func_021294c8(p);
    }
}

void func_02129624(void) {
    u32 *p = (u32 *)data_0217348c;
    s32 i;
    for (i = 0; i < 15; i++) {
        p[0] = 0;
        p[1] = 0;
        p[2] = 0;
        p[3] = 0;
        p += 4;
    }
}

u8 *func_0212965c(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (*(u32 *)(data_0217348c + i * 0x3c) == 0) {
            break;
        }
    }
    if (i == 4) {
        return 0;
    }
    {
        u8 *e = data_0217348c + i * 0x3c;
        func_02013878(e, 0, 0x3c);
        *(u32 *)(data_0217348c + i * 0x3c) = 1;
        *(u32 *)(e + 4) = i;
        *(u32 *)(e + 8) = 0;
        *(u32 *)(e + 0xc) = 0;
        func_0212b3f8(0x1f4, 0xac44, e + 0x30, e + 0x32);
        *(u8 *)(e + 0x28) = 0;
        *(u8 *)(e + 0x29) = 0;
        *(u8 *)(e + 0x2a) = 0;
        *(u8 *)(e + 0x2b) = 0;
        *(u8 *)(e + 0x2c) = 0;
        *(u8 *)(e + 0x2d) = 0;
        *(u8 *)(e + 0x2e) = 0;
        *(u8 *)(e + 0x2f) = 0;
        return e;
    }
}

void func_02129708(u8 *arg0, s32 arg1, s32 arg2) {
    func_0212b3f8(arg2, arg1, arg0 + 0x30, arg0 + 0x32);
}

void func_02129724(u8 *arg0, s16 *arg1, s16 *arg2) {
    *(s16 *)(arg0 + 0x28) = arg1[0];
    *(s16 *)(arg0 + 0x2a) = arg2[0];
    *(s16 *)(arg0 + 0x2c) = arg1[1];
    *(s16 *)(arg0 + 0x2e) = arg2[1];
}

void func_02129748(u8 *arg0, s16 *arg1, s16 *arg2) {
    arg1[0] = *(s16 *)(arg0 + 0x28);
    arg2[0] = *(s16 *)(arg0 + 0x2a);
    arg1[1] = *(s16 *)(arg0 + 0x2c);
    arg2[1] = *(s16 *)(arg0 + 0x2e);
}

void func_0212976c(u8 *arg0, u16 arg1, u16 arg2, u16 arg3) {
    *(u16 *)(arg0 + 0x34) = arg1;
    *(u16 *)(arg0 + 0x36) = arg2;
    *(u16 *)(arg0 + 0x38) = arg3;
}

void func_0212977c(u8 *arg0, s16 *arg1, s16 *arg2, s16 *arg3) {
    *arg1 = *(s16 *)(arg0 + 0x34);
    *arg2 = *(s16 *)(arg0 + 0x36);
    *arg3 = *(s16 *)(arg0 + 0x38);
}

void func_02129798(u8 *arg0) {
    if (arg0 == NULL) {
        return;
    }
    *(u32 *)arg0 = 0;
    func_02013878(arg0, 0, 0x3c);
}

u32 func_021297b8(void *arg0) {
    return *(u32 *)((u8 *)arg0 + 0xc);
}

s32 func_021297c0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (*(s32 *)(arg0 + 0xc) != 0) {
        return 0;
    }
    *(s32 *)(arg0 + 0x14) = 1;
    *(s32 *)(arg0 + 0x18) = arg1;
    *(s32 *)(arg0 + 0x1c) = arg2;
    *(s32 *)(arg0 + 0x20) = arg3;
    *(s32 *)(arg0 + 0x24) = arg4;
    return 1;
}

s32 func_021297f8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (*(s32 *)(arg0 + 0xc) != 0) {
        return 0;
    }
    *(s32 *)(arg0 + 0x14) = 2;
    *(s32 *)(arg0 + 0x18) = arg1;
    *(s32 *)(arg0 + 0x1c) = arg2;
    *(s32 *)(arg0 + 0x20) = arg3;
    *(s32 *)(arg0 + 0x24) = arg4;
    return 1;
}

void func_02129830(u8 *arg0) {
    if (*(s32 *)(arg0 + 0xc) == 0) {
        *(s32 *)(arg0 + 0x10) = 0;
        *(s32 *)(arg0 + 0xc) = 1;
    }
}

void func_0212984c(u8 *arg0) {
    *(s32 *)(arg0 + 0xc) = 0;
    *(u8 *)(arg0 + 0x28) = 0;
    *(u8 *)(arg0 + 0x29) = 0;
    *(u8 *)(arg0 + 0x2a) = 0;
    *(u8 *)(arg0 + 0x2b) = 0;
    *(u8 *)(arg0 + 0x2c) = 0;
    *(u8 *)(arg0 + 0x2d) = 0;
    *(u8 *)(arg0 + 0x2e) = 0;
    *(u8 *)(arg0 + 0x2f) = 0;
}

void func_02129878(u8 *arg0) {
    if (*(s32 *)(arg0 + 0xc) == 3) {
        *(s32 *)(arg0 + 0xc) = 0;
    }
}

void *func_0212988c(void *arg0) {
    return *(void **)((u8 *)arg0 + 0x10);
}

void func_02129894(void) {
    data_02173488 = 1;
}

void func_021298a8(u8 *p) {
s32 result;
if(*(s32 *)(p+0xc)==1) *(s32 *)(p+0xc)=2;
if(*(s32 *)(p+0xc)!=2) return;
if(*(s32 *)(p+0x14)==1){
*(s32 *)(p+0x10)=func_0212a9fc(*(u32 *)(p+0x18),*(u32 *)(p+0x1c),*(u32 *)(p+0x20),p+0x28,*(s16 *)(p+0x30),*(s16 *)(p+0x32),p+0x34,*(s16 *)(p+0x36),*(s16 *)(p+0x38));
} else {
result=func_0212b354(*(u32 *)(p+0x18),*(u32 *)(p+0x1c),*(u32 *)(p+0x20),p+0x28,*(u32 *)(p+0x24),p+0x2c,*(s16 *)(p+0x30),*(s16 *)(p+0x32),p+0x34,*(s16 *)(p+0x36),*(s16 *)(p+0x38));
*(s32 *)(p+0x10)=result;
if(result%2==1) func_02129894();
}
*(s32 *)(p+0xc)=3;
}

void func_0212999c(u8 *arg0, s32 arg1) {
    if (*(u32 *)(arg0 + 0xb8) != 0) {
        ((void (*)(u32, s32))data_0217357c[2]) (*(u32 *)(arg0 + 0xb8), arg1);
    }
}

void func_021299c0(u8 *arg0, s32 arg1) {
s32 val;
if (*(s32 *)(arg0+0xb8)!=0) {
((void (*)(s32,s32))data_0217357c[1])(*(s32 *)(arg0+0xb8),arg1);
}
val=arg1/0x60;
*(s32 *)(arg0+0xc0)=val;
*(s32 *)(arg0+0xbc)=arg1;
if(val<=0) *(s32 *)(arg0+0xc0)=1;
}

void func_02129a14(u8 *arg0) {
    ((void (*)(u8 *))data_0217357c[3])(arg0);
}

void func_02129a2c(u8 *arg0) {
    s32 val = *(s32 *)(arg0 + 0xb8);
    if (val != 0) {
        ((void (*)(s32))data_0217357c[0])(val);
    }
}

s32 func_02129a50(void) {
    data_0217358c[3]++;
    return 0;
}

