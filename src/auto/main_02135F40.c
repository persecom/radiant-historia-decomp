/* 32 functions from 0x02135F40 to 0x02136E94 (main), found by ds-decomp. */
#include "common.h"
static inline u32 pack_pcm_02136210(u16 low, u16 high) {
    return low | ((u32)high << 16);
}
static inline s16 average_pcm_02136210(s16 a, s16 b) {
    return (a + b) / 2;
}
typedef struct {
    u16 flags;
    s16 channel;
    u8 *buffer;
    u8 unk_08[8];
    u32 written;
    u8 unk_14[6];
    u16 position;
    u8 unk_1c[12];
    u16 mode;
    s16 previous;
    u32 unk_2c;
    void (*callback)(s16, void *, u32);
} PcmState_02136210;
extern void func_02008f74(void *, s32, u32);
extern void func_02013878(void *, s32, s32);
extern u8 data_0215beec[];
extern u8 data_0215bef8[];
extern u8 data_0215bf14[];
extern u8 data_0215bf20[];
extern u8 data_0215bf40[];
extern u8 data_0215bf4c[];
extern u8 data_0215bf68[];
extern u8 data_0215bf74[];
extern u8 data_0215bf94[];
extern u8 data_0215bfa0[];
extern u8 data_0215bfbc[];
extern u8 data_0215bfc8[];
extern u8 data_0215bfe8[];
extern u8 data_0215bff4[];
extern u8 data_0215c010[];
extern u8 data_0215c01c[];

extern void func_02136958(void);
extern void func_02136a3c(void);
extern void func_02136ab4(void);
extern void func_02136d54(void *);
extern void func_021369cc(void);
extern void *memset(void *, int, unsigned long);
extern s32 data_02175c60;
extern u32 data_02175c64[6][9];
extern u32 data_0215beb0[];
extern const u32 data_02145ae8[];
extern s16 *func_02136210(void *, void *, u32);
extern void func_02135f0c(void *, u16 *, u16 *);

extern void func_0213807c(void);
void func_02135f40(u8 *arg0, u32 arg1) {
    u16 ime = *(volatile u16 *)0x04000208;
    *(volatile u16 *)0x04000208 = 0;
    *(u16 *)(arg0 + 0x1e) -= arg1;
    *(u16 *)(arg0 + 0x1c) += arg1;
    (void)*(volatile u16 *)0x04000208;
    *(volatile u16 *)0x04000208 = ime;
}

extern u32 func_021361bc(u8 *, u16 *, u16 *);
u16 func_02135f7c(u8 *arg0, u32 arg1, u16 *arg2) {
    u16 sp2;
    u16 sp0;
    u16 count;
    u16 r5;
    u16 r2;

    if (arg1 == 0) {
        *arg2 = 0;
        return 0;
    }

    func_021361bc(arg0, &sp2, &sp0);
    if (sp2 == 0) {
        *arg2 = 0;
        return 0;
    }

    count = arg1;
    if (count > 0xc00) {
        count = 0xc00;
    }
    if (count > sp2) {
        count = sp2;
    }

    if (*(u16 *)(arg0 + 0x28) != 8) {
        if (*(u16 *)(arg0 + 0x28) == 5) {
            if (count < 10) {
                *arg2 = 0;
                return count;
            }
            count = (count / 10) * 10;
            r5 = 0;
            r2 = (count / *(u16 *)(arg0 + 0x28)) * 8;
        } else if (*(u16 *)(arg0 + 0x28) == 3 || *(u16 *)(arg0 + 0x28) == 6) {
            if (count < 6) {
                *arg2 = 0;
                return count;
            }
            count = (count / 6) * 6;
            r5 = 0;
            r2 = (count / *(u16 *)(arg0 + 0x28)) * 8;
        } else {
            r5 = 8 / *(u16 *)(arg0 + 0x28);
            r2 = count * r5;
        }
    } else {
        r2 = count;
        r5 = 1;
    }

    if (r2 > sp2) {
        if (*(u16 *)(arg0 + 0x28) == 3 || *(u16 *)(arg0 + 0x28) == 5 || *(u16 *)(arg0 + 0x28) == 6) {
            count = (*(u16 *)(arg0 + 0x28) * sp2) / 8;
            *arg2 = (count / *(u16 *)(arg0 + 0x28)) * 8;
        } else {
            count -= (u16)((r2 - sp2) / r5);
            *arg2 = count * r5;
        }
    } else {
        *arg2 = r2;
    }

    return count;
}

extern u32 func_0201fd28(u32, u32);
u32 func_02136138(u8 *arg0, s16 *arg1, u32 arg2) {
    func_02135f40(arg0, arg2);
    arg1 = func_02136210(arg0, arg1, arg2);
    if ((*(u16 *)arg0 & 4) && arg2 >= 2) {
        u32 sum = 0;
        u32 i;
        for (i = 0; i < arg2; i++) {
            s32 v = arg1[i];
            if (v < 0) {
                v = -v;
            }
            sum += v;
        }
        *(u16 *)(arg0 + 0x24) = func_0201fd28(sum, arg2 >> 1);
    }
    return arg2;
}

u32 func_021361bc(u8 *arg0, u16 *arg1, u16 *arg2) {
    u16 a;
    u16 b;
    s32 sum;
    func_02135f0c(arg0, &a, &b);
    sum = *(u16 *)(arg0 + 0x1a) + a;
    if (sum > 0x1800) {
        *arg1 = 0x1800 - *(u16 *)(arg0 + 0x1a);
        *arg2 = sum - 0x1800;
    } else {
        *arg1 = a;
        *arg2 = 0;
    }
    return a;
}

extern void func_02009008(void *, void *, u32);
#pragma opt_lifetimes off
s16 *func_02136210(void *arg0, void *arg1, u32 arg2) {
    PcmState_02136210 *p = (PcmState_02136210 *)arg0;
    s16 *src = (s16 *)arg1;
    u32 pos = p->position;
    u8 *dst = p->buffer + pos;
    u16 nextPos = pos + arg2;
    u16 mode;
    s16 last;
    s16 prev;

    if (nextPos >= 0x1800) {
        nextPos -= 0x1800;
    }
    p->written += arg2;
    p->position = nextPos;
    p->flags = (p->flags | 2) & 0xfffd;

    mode = p->mode;
    if (mode != 8) {
        if (mode == 5) {
            s32 count = (s32)(arg2 >> 1) / 8;
            s32 i;
            u32 *dst32 = (u32 *)dst;
            for (i = 0; i < count; i++) {
                s16 s0 = src[0];
                prev = p->previous;
                s16 s1 = src[1];
                s16 s2 = src[2];
                s16 a0 = (s16)((prev + s0) / 2);
                s16 a1 = (s16)((s1 + s2) / 2);
                s16 s3 = src[3];
                s16 s4 = src[4];
                s16 a2 = (s16)((s3 + s4) / 2);
                dst32[0] = pack_pcm_02136210((u16)a0, (u16)s0);
                dst32[1] = pack_pcm_02136210((u16)s1, (u16)a1);
                dst32[2] = pack_pcm_02136210((u16)s2, (u16)s3);
                dst32[3] = pack_pcm_02136210((u16)a2, (u16)s4);
                p->previous = s4;
                src += 5;
                dst32 += 4;
            }
        } else if (mode == 6) {
            s32 count = (s32)(arg2 >> 1) / 4;
            s32 i;
            s16 *dst16 = (s16 *)dst;
            for (i = 0; i < count; i++) {
                s16 s0 = src[0];
                s16 s1 = src[1];
                last = src[2];
                dst16[0] = s0;
                dst16[1] = (s0 + s1 * 2) / 3;
                dst16[2] = (last + s1 * 2) / 3;
                dst16[3] = last;
                src += 3;
                dst16 += 4;
            }
            p->previous = last;
        } else if (mode == 3) {
            s32 count = (s32)(arg2 >> 1) / 8;
            s32 i;
            s16 *dst16 = (s16 *)dst;
            for (i = 0; i < count; i++) {
                s16 s0 = src[0];
                prev = p->previous;
                s16 s1 = src[1];
                s16 s2 = src[2];
                s16 m1 = (s0 + s1 * 2) / 3;
                s16 m2 = (s2 + s1 * 2) / 3;
                dst16[0] = (prev + s0) / 2;
                dst16[1] = s0;
                dst16[2] = (s0 + m1) / 2;
                dst16[3] = m1;
                dst16[4] = (m1 + m2) / 2;
                dst16[5] = m2;
                dst16[6] = (s2 + m2) / 2;
                dst16[7] = s2;
                p->previous = s2;
                src += 3;
                dst16 += 8;
            }
        } else if (mode == 4) {
            s32 count = arg2 >> 2;
            prev = p->previous;
            u32 *src32 = (u32 *)src;
            u32 *dst32 = (u32 *)dst;
            while (count > 0) {
                s32 pair = *(s32 *)src32++;
                s16 s0 = (s16)pair;
                s16 s1 = (s16)(pair >> 16);
                s16 a0 = (s16)((prev + s0) / 2);
                s16 a1 = (s16)((s1 + s0) / 2);
                count -= 2;
                dst32[0] = pack_pcm_02136210((u16)a0, (u16)s0);
                dst32[1] = pack_pcm_02136210((u16)a1, (u16)s1);
                prev = s1;
                dst32 += 2;
            }
            p->previous = prev;
            src = (s16 *)src32;
        } else if (mode == 2) {
            s32 count = arg2 >> 3;
            prev = p->previous;
            u32 *src32 = (u32 *)src;
            u32 *dst32 = (u32 *)dst;
            while (count > 0) {
                s32 pair = *(s32 *)src32++;
                s16 s0 = (s16)pair;
                s16 s1 = (s16)(pair >> 16);
                s16 m0 = (s16)((prev + s0) / 2);
                s16 q0 = (s16)((prev + m0) / 2);
                s16 m1 = (s16)((s0 + s1) / 2);
                s16 q1 = (s16)((m0 + s0) / 2);
                s16 q2 = (s16)((s0 + m1) / 2);
                s16 q3 = (s16)((m1 + s1) / 2);
                count -= 2;
                dst32[0] = pack_pcm_02136210((u16)q0, (u16)m0);
                dst32[1] = pack_pcm_02136210((u16)q1, (u16)s0);
                dst32[2] = pack_pcm_02136210((u16)q2, (u16)m1);
                dst32[3] = pack_pcm_02136210((u16)q3, (u16)s1);
                prev = s1;
                dst32 += 4;
            }
            p->previous = prev;
            src = (s16 *)src32;
        } else if (mode == 1) {
            s32 count = (s32)(arg2 >> 1) / 8;
            last = p->previous;
            s32 i;
            u32 *src32 = (u32 *)src;
            u32 *dst32 = (u32 *)dst;
            for (i = 0; i < count; i++) {
                s32 pair = *(s32 *)src32++;
                s16 s0 = (s16)pair;
                s16 s1 = (s16)(pair >> 16);
                s16 m0 = (s16)((last + s0) / 2);
                s16 q0 = (s16)((last + m0) / 2);
                s16 e0 = (s16)((last + q0) / 2);
                s16 e1 = (s16)((q0 + m0) / 2);
                s16 q1;
                s16 m1;
                s16 q2;
                s16 q3;
                dst32[0] = pack_pcm_02136210((u16)e0, (u16)q0);
                dst32[1] = pack_pcm_02136210((u16)e1, (u16)m0);
                m1 = (s16)((s0 + s1) / 2);
                q1 = (s16)((m0 + s0) / 2);
                dst32[2] = pack_pcm_02136210((u16)(s16)((m0 + q1) / 2), (u16)q1);
                dst32[3] = pack_pcm_02136210((u16)(s16)((q1 + s0) / 2), (u16)s0);
                q2 = (s16)((s0 + m1) / 2);
                dst32[4] = pack_pcm_02136210((u16)(s16)((s0 + q2) / 2), (u16)q2);
                dst32[5] = pack_pcm_02136210((u16)(s16)((q2 + m1) / 2), (u16)m1);
                q3 = (s16)((m1 + s1) / 2);
                dst32[6] = pack_pcm_02136210((u16)(s16)((m1 + q3) / 2), (u16)q3);
                dst32[7] = pack_pcm_02136210((u16)(s16)((q3 + s1) / 2), (u16)s1);
                last = s1;
                dst32 += 8;
            }
            p->previous = last;
            src = (s16 *)src32;
        }
    } else {
        func_02009008(src, dst, arg2);
        src += (s32)(arg2 >> 1);
    }

    if (p->callback != NULL) {
        p->callback(p->channel, p->buffer + pos, arg2);
    }
    return src;
}
#pragma opt_lifetimes on
u16 func_0213689c(u8 *arg0) {
    u16 sp2;
    u16 sp0;
    u16 r4;
    u16 r3;
    u16 r2;
    u16 r7;

    if (arg0 == NULL) {
        return 0;
    }
    func_02135f0c(arg0, &sp2, &sp0);
    r4 = sp2;
    if (r4 == 0) {
        return 0;
    }
    r3 = *(u16 *)(arg0 + 0x1a);
    if (r3 + r4 <= 0x1800) {
        r2 = r4;
        r7 = 0;
    } else {
        r2 = 0x1800 - r3;
        r7 = (r3 + r4) - 0x1800;
    }
    func_02008f74(*(u8 **)(arg0 + 4) + r3, 0, r2);
    if (r7 != 0) {
        func_02008f74(*(u8 **)(arg0 + 4), 0, r7);
    }
    *(u16 *)(arg0 + 0x2a) = 0;
    return r4;
}

u32 func_02136930(u8 *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    return (u32)*(u16 *)(arg0 + 0x1c) >> 1;
}

u32 func_02136944(u8 *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    return (u32)*(u16 *)(arg0 + 0x1e) >> 1;
}

extern volatile u32 data_02175c58[2];
void func_02136958(void) {
    data_02175c58[1]++;
    if (data_02175c58[1] == 1) {
        data_02175c58[0] = 0;
    }
}

void func_02136980(void) {
    data_02175c58[1]--;
    if (data_02175c58[1] == 0) {
        data_02175c58[0] = 0;
    }
}

void func_021369a8(void) {
    func_0213807c();
}

extern void func_0213808c(void);
void func_021369b4(void) {
    func_0213808c();
}

extern void func_02138130(void *);
void func_021369c0(void *arg0) {
    func_02138130(arg0);
}

extern u8 data_0215bee0[12];
extern void func_02008f74(void *, s32, u32);
void func_021369cc(void) {
    func_021369c0(&data_0215bee0);
}

extern void func_02132bf8(void *, s32, void *);
extern void func_02132c1c(void *, s32, void *);
extern void func_021369c0(void *);
extern void func_021369cc(void);
extern s32 data_02175c60;
extern u32 data_02175c64[6][9];
extern u32 data_0215beb0[];
extern const u32 data_02145ae8[];
void func_021369e0(void *arg0, void *arg1) {
    u8 buf[0x40];
    func_02132bf8(buf, 0x40, arg0);
    func_02132c1c(buf, 0x40, arg1);
    func_021369c0(buf);
}

void func_02136a24(void) {
    func_02136958();
    func_021369a8();
    func_02136a3c();
    func_021369b4();
}

void func_02136a3c(void) {
if(data_02175c60==0) __clear(data_02175c64,216);
data_02175c60++;
}

void func_02136a9c(void) {
    func_021369a8();
    func_02136ab4();
    func_021369b4();
    func_02136980();
}

#pragma inline_intrinsics on
void func_02136ab4(void) {
    data_02175c60--;
    if (data_02175c60 == 0) {
        __clear(data_02175c64, 216);
    }
}
extern s32 func_02136b34(void *, void *);
s32 func_02136b08(void *arg0, void *arg1) {
    s32 ret;
    func_021369a8();
    ret = func_02136b34(arg0, arg1);
    func_021369b4();
    return ret;
}

int func_02136b34(void *arg0, void *arg1) {
    s32 i;
    u32 *p;
    for (i = 0; i < 6; i++) {
        if (data_02175c64[i][1] == 0) {
            break;
        }
    }
    if (i == 6) {
        return 0;
    }
    p = data_02175c64[i];
    p[1] = 1;
    p[0] = (u32)data_0215beb0;
    p[5] = (u32)arg0;
    p[6] = (u32)arg1;
    p[2] = (u32)data_02145ae8;
    p[7] = (u32)func_021369cc;
    p[8] = (u32)p;
    func_02136d54(p);
    return (int)p;
}

extern void func_02136be4(void *);
void func_02136bc8(void *arg0) {
    func_021369a8();
    func_02136be4(arg0);
    func_021369b4();
}

void func_02136be4(void *arg0) {
    if (arg0 == NULL) {
        func_021369e0(data_0215beec, data_0215bef8);
        return;
    }
    if (*(void **)((u8 *)arg0 + 4) == NULL) {
        func_021369e0(data_0215bf14, data_0215bf20);
        return;
    }
    func_02013878(arg0, 0, 0x24);
    *(void **)((u8 *)arg0 + 4) = NULL;
}

extern void *func_02136c68(void *);
void *func_02136c44(void *arg0) {
    void *ret;
    func_021369a8();
    ret = func_02136c68(arg0);
    func_021369b4();
    return ret;
}

void *func_02136c68(void *arg0) {
    if (arg0 == NULL) {
        func_021369e0(data_0215bf40, data_0215bf4c);
        return NULL;
    }
    if (*(void **)((u8 *)arg0 + 4) == NULL) {
        func_021369e0(data_0215bf68, data_0215bf74);
        return NULL;
    }
    return *(void **)((u8 *)arg0 + 8);
}

extern void func_02136ce8(u32, u32, u32);
void func_02136cbc(u32 arg0, u32 arg1, u32 arg2) {
    func_021369a8();
    func_02136ce8(arg0, arg1, arg2);
    func_021369b4();
}

void func_02136ce8(u32 arg0, u32 arg1, u32 arg2) {
    if (arg0 == 0) {
        func_021369e0(data_0215bf94, data_0215bfa0);
        return;
    }
    if (*(void **)(arg0 + 4) == NULL) {
        func_021369e0(data_0215bfbc, data_0215bfc8);
        return;
    }
    *(u32 *)(arg0 + 0x1c) = arg1;
    *(u32 *)(arg0 + 0x20) = arg2;
}

extern void func_02136d54(void *);
void func_02136d38(void *arg0) {
    func_021369a8();
    func_02136d54(arg0);
    func_021369b4();
}

void func_02136d54(void *arg0) {
    if (arg0 == NULL) {
        func_021369e0(data_0215bfe8, data_0215bff4);
        return;
    }
    if (*(void **)((u8 *)arg0 + 4) == NULL) {
        func_021369e0(data_0215c010, data_0215c01c);
        return;
    }
    *(void **)((u8 *)arg0 + 0xc) = *(void **)((u8 *)arg0 + 0x18);
    *(void **)((u8 *)arg0 + 0x10) = NULL;
}

extern s32 func_02136dd8(void *, void *);
s32 func_02136dac(void *arg0, void *arg1) {
    s32 ret;
    func_021369a8();
    ret = func_02136dd8(arg0, arg1);
    func_021369b4();
    return ret;
}

extern void func_021369e0(void *, void *);
extern u8 data_0215c03c[];
extern u8 data_0215c048[];
extern u8 data_0215c064[];
extern u8 data_0215c070[];
s32 func_02136dd8(void *arg0, void *arg1) {
    s32 mode = (s32)arg1;
    if (arg0 == NULL) {
        func_021369e0(data_0215c03c, data_0215c048);
        return 0;
    }
    if (*(u32 *)((u8 *)arg0 + 4) == 0) {
        func_021369e0(data_0215c064, data_0215c070);
        return 0;
    }
    if (mode == 1) return *(s32 *)((u8 *)arg0 + 0xc);
    if (mode == 0) return 0;
    if (*(void **)((u8 *)arg0 + 0x1c) != NULL) {
        ((void (*)(s32, s32))(*(u32 *)((u8 *)arg0 + 0x1c)))(*(u32 *)((u8 *)arg0 + 0x20), -3);
    }
    return 0;
}

extern void func_02136e60();
extern void func_02136e94(void *, void *, s32, s32);
void func_02136e60(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    func_021369a8();
    func_02136e94(arg0, arg1, arg2, arg3);
    func_021369b4();
}

