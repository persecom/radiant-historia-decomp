/* 1 function from 0x02062578 to 0x020637E4 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160244;
extern u8 *data_02160258;
extern u8 *data_02160a74;
extern u32 data_0216263c[3];
extern u8 *data_02160080;
extern u8 *data_02160a6c;
extern void func_020d3c98(s32);
extern void func_020a5ce4(void *);
extern void func_02062530(void);
extern void func_020d2e98(void);
extern void func_020d9ea8(s32, s32);
extern void func_0202b398(void);
extern void func_0202b41c(void);
extern void func_0202b6ec(void);
extern void func_0202b754(void);
extern void func_0202b928(void);
extern void func_0202b864(void);
extern void func_020de888(void);
extern u8 *func_02032240(void);
extern s32 func_020d3160(s32, s32, s32, s32);
extern void func_02096504(void *, s32, u16, s32);
extern void func_020d91bc(s32);
extern u8 *func_02062568(void *);
extern void func_020223bc(void *, void *, s16);
extern u8 *func_020e1ccc(void *);
extern void func_020d9058(void *);
extern void func_020d907c(void *);
extern void func_020d2c8c(void *, s8);
extern void func_020d612c(s32, s32, s32);
extern void func_020de0a8(void *);
extern void func_020d9e08(s32);
void func_02062578(void) {
    register u8 **pg asm("r10") = &data_02160244;
    register u8 **pw asm("r4") = &data_02160258;
    register u8 *r7 asm("r7") = *pg;
    register s32 zero asm("r5") = 0;
    register s32 one asm("r11") = 1;
    s32 flag = zero;
    s32 i;
    if (*(u32 *)(r7 + 0xc) == 1) {
        func_020d3c98(zero);
        func_020a5ce4(*(void **)(data_02160a74 + 0x78));
        *(u32 *)(data_02160a74 + 0x58) &= ~0x4000;
        func_02062530();
        func_020d2e98();
        func_020d9ea8(8, 0x30);
        if ((*pg)[0x10e] == 1) {
            func_0202b398();
            func_0202b41c();
            func_0202b6ec();
            func_0202b754();
            func_0202b928();
            func_0202b864();
            r7[0x39] = one;
        }
        func_020de888();
        if ((*pg)[0x10e] == 0) {
            u8 *o = func_02032240();
            if (o != NULL) {
                s8 v = *(s8 *)(*(u8 **)(o + 8) + 0x1a);
                if ((u8)(s8)(v - 2) <= 1) {
                    func_020d3160(5, zero, zero, zero);
                    flag = one;
                }
            }
        }
        if (flag == 0) {
            func_020d3160(7, zero, zero, zero);
            func_020d3160(zero, zero, zero, zero);
        }
        if (flag == 1 && func_020d3160(2, zero, zero, zero) == 0) {
            func_020d3160(1, one, zero, zero);
        }
        func_0202b398();
        func_0202b41c();
        for (i = 0; i < 10; i++) {
            u8 *e = *(u8 **)(r7 + 0x10 + i * 4);
            if (e != NULL) {
                u8 *obj = *(u8 **)e;
                if ((*(u8 **)(obj + 0x118))[0] == 1) {
                    func_02096504(*(void **)(e + 0x14), zero, (u16)i, zero);
                    if ((*(u32 *)(*(u8 **)(obj + 0x118) + 0x78) & 4) != 0) {
                        u32 r = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
                        data_0216263c[0] = r;
                        if ((u16)(((r >> 16) * 100) >> 16) < 0x19) {
                            *(u16 *)(e + 0xe) |= 0x200;
                            continue;
                        }
                    }
                    *(u32 *)(*(u8 **)(obj + 0x128) + 0x18) &= ~8;
                }
            }
        }
        func_020d91bc(6);
        if (r7[0x38] == 0) {
            if (data_02160080 != NULL) {
                data_02160080[0x40] = zero;
            }
            for (i = 0; i < *(s8 *)(r7 + 0x39); i++) {
                func_02062568(*(void **)(r7 + 0x10 + i * 4));
            }
        }
        for (i = 0; i < *(s8 *)(r7 + 0x39); i++) {
            u8 *e = *(u8 **)(r7 + 0x10 + i * 4);
            u8 *o = func_02062568(e);
            func_020223bc(*(void **)(o + 0x128), e, (s16)(i + 1));
            (*pg)[0x10e] = (*(u8 **)(o + 0x118))[0];
            *(u16 *)(*pg + 0x110) = (*(u8 **)(e + 8))[0];
        }
        if ((*pg)[0x14c] == 0) {
            u8 *it = *(u8 **)(*pg + 0x50);
            while (it != NULL) {
                it[4] = zero;
                it[3] = zero;
                it[2] = *(s8 *)(it + 0);
                it = *(u8 **)(it + 0x14);
            }
        } else {
            (*pg)[0x14c] = zero;
        }
        if ((*pg)[0x10e] == 1) {
            u8 *it = *(u8 **)(data_02160a6c + 0xac);
            while (it != NULL) {
                u8 *o = func_020e1ccc(it);
                if (o != NULL) {
                    *(u16 *)(o + 4) = zero;
                    *(u16 *)(o + 6) = zero;
                    *(u16 *)(o + 8) = zero;
                }
                it = *(u8 **)(it + 0x16c);
            }
        } else if ((*pg)[0x10e] == 0) {
            u8 *e = *(u8 **)(r7 + 0x10);
            if (*(s8 *)(*(u8 **)(e + 8) + 0x1a) != 0) {
                u8 *o = func_02062568(e);
                func_020d9058(o);
                func_020d907c(o);
            }
        }
        *(u32 *)(r7 + 0xc) = 0x18;
    }
    if (*(u32 *)(r7 + 0xc) != 0x12 && *(u32 *)(r7 + 0xc) != 0x15 && *(u32 *)(r7 + 0xc) != 0x16 && *(u32 *)(r7 + 0xc) != 0x10 && *(u32 *)(r7 + 0xc) != 0x13 && *(void **)(r7 + 0x10) != NULL) {
        func_020d2c8c(*(void **)(r7 + 0x10), *(s8 *)(r7 + 0x39));
    }
    if (*(s16 *)(r7 + 0x40) > 0) {
        *(s16 *)(r7 + 0x40) -= 1;
        if (*(s16 *)(r7 + 0x40) < 0) {
            *(s16 *)(r7 + 0x40) = zero;
        }
    }
    switch (*(u32 *)(r7 + 0xc)) {
    case 0x18:
        *(u32 *)(r7 + 0xc) = 2;
        if ((data_02160244[0x10a] & 1) == 0) {
            func_0202b754();
            if (*(u32 *)(*pg + 0xf0) != 0) {
                (*pg)[0x10b] = zero;
                *(u32 *)(r7 + 0xc) = 0x1c;
            }
        }
        break;
    case 0x1c:
        *(u32 *)(*pw + 0xc) = 0x244000;
        *(u32 *)(*pw + 0x10) = 0x30000;
        *(u32 *)(*pw + 0x14) = 0x200000;
        func_020d612c(1, 9, 0x200000);
        (*pg)[0x10b]++;
        if ((*pg)[0x10b] > 0x20) {
            (*pg)[0x10b] = zero;
            (*pg)[0x10a] |= 1;
            *(u32 *)(r7 + 0xc) = 2;
        }
        break;
    }
}
