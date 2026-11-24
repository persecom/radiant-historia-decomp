/* 56 functions from 0x02117304 to 0x02118234 (main), found by ds-decomp. */
#include "common.h"

extern s32 func_021174a8();
extern void *func_02117904(void *, u32);
extern void func_021177b0(u8 *);
extern void func_021174f0(void *);
extern const u32 data_02144d44[];
extern void func_02117038(void *);
extern void func_02008e24(s32, void *, u32);
BOOL func_02117304(void *arg0, u32 arg1) {
    u32 *r3 = *(u32 **)((u8 *)arg0 + 0x2c);
    if (arg1 != 0) {
        while (r3 != NULL) {
            if (r3[0] == arg1) {
                break;
            }
            r3 = (u32 *)r3[3];
        }
    }
    if (r3 == NULL) {
        return FALSE;
    }
    *(u32 *)((u8 *)arg0 + 0x24) = r3[1];
    *(u32 *)((u8 *)arg0 + 0x28) = r3[2];
    *(u32 *)((u8 *)arg0 + 0x2c) = r3[3];
    return TRUE;
}

void *func_02117358(void **arg0) {
    void *r2 = *arg0;
    if (r2 != NULL) {
        *arg0 = *(void **)r2;
    }
    return r2;
}

void *func_02117370(void *arg0) {
    void *r4 = func_02117358((void **)((u8 *)arg0 + 0x24));
    if (r4 != NULL) {
        u8 flags = *(u32 *)((u8 *)arg0 + 0x20);
        u32 r2 = *(u32 *)((u8 *)arg0 + 0x28);
        if (flags & 1) {
            func_02008e24(0, r4, r2);
        }
    }
    return r4;
}

void func_021173b0(void *arg0, void **arg1) {
    arg1[0] = *(void **)((u8 *)arg0 + 0x24);
    *(void **)((u8 *)arg0 + 0x24) = arg1;
}

extern void func_02117008(u32, u32, u32);
void func_021173c0(u32 *arg0, u32 arg1) {
    func_02117008(arg0[1], arg1, arg0[2]);
}

void func_021173d4(void *arg0) {
    func_02117038(*(void **)((u8 *)arg0 + 4));
}

extern void func_0211721c(u32, u32, u32);
void func_021173e4(u32 *arg0, u32 arg1) {
    func_0211721c(arg0[1], arg1, arg0[2]);
}

void func_021173f8(void) {
}

extern void func_02007320(u32, u32, u32);
extern void *func_02117370(void *);
void *func_021173fc(void *arg0, u32 arg1) {
    void *p = *(void **)((u8 *)arg0 + 4);
    if (arg1 > *(u32 *)((u8 *)p + 0x28)) {
        return NULL;
    }
    return func_02117370(p);
}

extern void func_021173b0(void *, void **);
void func_0211741c(void *arg0, void **arg1) {
    func_021173b0(*(void **)((u8 *)arg0 + 4), arg1);
}

void func_0211742c(u32 *arg0, u32 arg1) {
    func_02007320(arg0[2], arg0[1], arg1);
}

extern void func_02007428(u32, u32, u32);
void func_02117448(u32 *arg0, u32 arg1) {
    func_02007428(arg0[2], arg0[1], arg1);
}

void func_02117464(void *arg0, void *arg1) {
    void *p = *(void **)arg0;
    (*(void (**)(void *, void *))p)(arg0, arg1);
}

void func_02117478(void *arg0, void *arg1) {
    void *p = *(void **)arg0;
    (*(void (**)(void *, void *))((u8 *)p + 4))(arg0, arg1);
}

void func_021174e4(void) {
    func_021174a8();
}

void func_021177b0(u8 *arg0) {
    *(u32 *)(arg0 + 0x14) += (u32)arg0;
}

void func_0211782c(u8 *arg0) {
    *(u32 *)(arg0 + 0x14) += (u32)arg0;
}

extern u32 data_0216e22c[];
void func_02117a48(u32 arg0) {
    data_0216e22c[1] = arg0;
}

extern void func_02117b9c(void);
void func_02117d74(void) {
    func_02117b9c();
}

