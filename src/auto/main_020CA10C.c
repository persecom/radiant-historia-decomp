/* 1 function from 0x020CA10C to 0x020CB1F4 (main), found by ds-decomp. */
#include "common.h"

extern u16 data_021626a8;
extern u8 *data_02160234;
extern u8 *data_0216020c;
extern u8 *data_02160204;
extern u16 data_021628f8;
extern u8 data_02160a80[16];
extern u8 *func_020f0aa4(s32);
extern void func_020f0154(s32);
typedef struct { s32 x, y, z; } Vec3_ca10c;
typedef void (*Fn0898)(Vec3_ca10c, s32, s32);
#define CALL0898(base, id) ((Fn0898)func_020f0898)(*(Vec3_ca10c *)((base) + 0x94), (id), 1000)
extern void func_020f0898(s32, s32, s32, s32, s32);
extern void func_020eaa10(s32);
extern void func_02108680(void *, s32, s32);
extern void func_020cb1fc(void);
extern void func_0210d27c(s32);
extern void func_020bec04(s32);
extern void func_020bebc8(s32);
extern void func_020bdcc0(s32);
extern void func_020bdd84(s32);
extern void func_020cea64(s32);
extern s32 data_02162814, data_02162884;
void func_020ca10c(void) {
    typedef struct { s32 x, y, z; } Vec3;
    extern s32 data_02162884;
    extern s32 data_02162814;
    extern void func_020bec04(s32);
    extern void func_020bebc8(s32);
    extern void func_020bdcc0(s32);
    extern void func_020bdd84(s32);
    extern void func_020cea64(s32);
    u8 *r9 = data_02160234;

    if ((data_021626a8 & 1) || (data_021626a8 & 8) || data_021628f8 != 0) {
        if (*(u16 *)(r9 + 0x8c) != 0x10) {
            *(u16 *)(r9 + 0xb0) = 0x10;
        }
    }

    switch (*(u16 *)(r9 + 0x8c)) {
    case 0:
        *(u16 *)(r9 + 0x8c) = 6;
        break;
    case 4: {
        u8 *cur;
        *(s32 *)(r9 + 0x94) = 0x96000;
        *(s32 *)(r9 + 0x98) = 0x99000;
        *(s32 *)(r9 + 0x9c) = -0xed000;
        *(s32 *)(r9 + 0xa0) = 0x75000;
        *(s32 *)(r9 + 0xa4) = 0x96000;
        *(s32 *)(data_0216020c + 0x84) = 0x15;
        *(s32 *)(data_0216020c + 0x80) = 0xb4;
        *(s32 *)(data_0216020c + 0xac) = 0;
        *(s32 *)(data_0216020c + 0xb4) = 0;
        if (func_020f0aa4(1000) == NULL) {
            func_020f0154(0x2760);
            ((void (*)(Vec3, s32, s32))func_020f0898)(*(Vec3 *)(r9 + 0x94), 0x2760, 1000);
        }
        **(s32 **)(*(u8 **)func_020f0aa4(1000) + 0x100) = 0x8c000;
        *(u16 *)(r9 + 0x8e) = 0;
        *(u16 *)(r9 + 0x8c) = 5;
        func_020eaa10(1);
        cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
        if (cur != NULL) {
            do {
                if (*(u32 *)(cur + 4) == 1) goto found_1;
                cur = *(u8 **)(cur + 0x38);
            } while (cur != NULL);
        }
        cur = NULL;
        found_1: ;
        *(s32 *)(cur + 0x1c) = *(s32 *)(r9 + 0xa0);
        *(s32 *)(cur + 0x20) = *(s32 *)(r9 + 0xa4);
        func_02108680(*(void **)cur, 5, 1);
        cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
        if (cur != NULL) {
            do {
                if (*(u32 *)(cur + 4) == 1) goto found_2;
                cur = *(u8 **)(cur + 0x38);
            } while (cur != NULL);
        }
        cur = NULL;
        found_2: ;
        *(u32 *)(cur + 0x18) |= 1;
        cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
        if (cur != NULL) {
            do {
                if (*(u32 *)(cur + 4) == 2) goto found_3;
                cur = *(u8 **)(cur + 0x38);
            } while (cur != NULL);
        }
        cur = NULL;
        found_3: ;
        *(u32 *)(cur + 0x18) &= ~1;
        break;
    }
    case 5: {
        u8 *obj;
        func_020cb1fc();
        obj = func_020f0aa4(1000);
        *(u32 *)(obj + 0x14) |= 0x11;
        {
            u8 *p = *(u8 **)obj;
            *(s32 *)(p + 0x6c) = *(s32 *)(r9 + 0x94);
            *(s32 *)(p + 0x70) = *(s32 *)(r9 + 0x98);
            *(s32 *)(p + 0x74) = *(s32 *)(r9 + 0x9c);
            *(s32 *)(p + 0xf4) = 1;
        }
        if (*(s16 *)(r9 + 0x8e) == 0x12) {
            obj = func_020f0aa4(1000);
            *(u32 *)(obj + 0x14) &= ~0x11;
            if (*(u16 *)(r9 + 0xb0) == 0) {
                *(u16 *)(r9 + 0x8c) = 6;
            } else {
                u8 *cur;
                *(u16 *)(r9 + 0x8c) = *(u16 *)(r9 + 0xb0);
                cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
                if (cur != NULL) {
                    do {
                        if (*(u32 *)(cur + 4) == 1) goto found_4;
                        cur = *(u8 **)(cur + 0x38);
                    } while (cur != NULL);
                }
                cur = NULL;
                found_4: ;
                *(u32 *)(cur + 0x18) &= ~1;
                cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
                if (cur != NULL) {
                    do {
                        if (*(u32 *)(cur + 4) == 2) goto found_5;
                        cur = *(u8 **)(cur + 0x38);
                    } while (cur != NULL);
                }
                cur = NULL;
                found_5: ;
                *(u32 *)(cur + 0x18) &= ~1;
            }
        }
        *(s16 *)(r9 + 0xac) += 1;
        if (*(volatile s16 *)(r9 + 0xac) == 1) {
            func_0210d27c(0x22);
        } else if (*(s16 *)(r9 + 0xac) > 6) {
            *(s16 *)(r9 + 0xac) = 0;
        }
        break;
    }
    case 6: {
        u8 *cur;
        *(s32 *)(r9 + 0x94) = 0x268000;
        *(s32 *)(r9 + 0x98) = 0x96000;
        *(s32 *)(r9 + 0x9c) = 0x19e000;
        *(s32 *)(r9 + 0xa0) = 0x81000;
        *(s32 *)(r9 + 0xa4) = 0x7a000;
        *(s32 *)(data_0216020c + 0x84) = 0xe;
        *(s32 *)(data_0216020c + 0x80) = 0x135;
        if (func_020f0aa4(1000) == NULL) {
            func_020f0154(0x2760);
            ((void (*)(Vec3, s32, s32))func_020f0898)(*(Vec3 *)(r9 + 0x94), 0x2760, 1000);
        }
        **(s32 **)(*(u8 **)func_020f0aa4(1000) + 0x100) = 0;
        *(u16 *)(r9 + 0x8e) = 0;
        *(u16 *)(r9 + 0x8c) = 7;
        func_020eaa10(0);
        cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
        if (cur != NULL) {
            do {
                if (*(u32 *)(cur + 4) == 1) goto found_6;
                cur = *(u8 **)(cur + 0x38);
            } while (cur != NULL);
        }
        cur = NULL;
        found_6: ;
        *(s32 *)(cur + 0x1c) = *(s32 *)(r9 + 0xa0);
        *(s32 *)(cur + 0x20) = *(s32 *)(r9 + 0xa4);
        func_02108680(*(void **)cur, 6, 1);
        cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
        if (cur != NULL) {
            do {
                if (*(u32 *)(cur + 4) == 1) goto found_7;
                cur = *(u8 **)(cur + 0x38);
            } while (cur != NULL);
        }
        cur = NULL;
        found_7: ;
        *(u32 *)(cur + 0x18) |= 1;
        cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
        if (cur != NULL) {
            do {
                if (*(u32 *)(cur + 4) == 2) goto found_8;
                cur = *(u8 **)(cur + 0x38);
            } while (cur != NULL);
        }
        cur = NULL;
        found_8: ;
        *(u32 *)(cur + 0x18) &= ~1;
        break;
    }
    case 7: {
        u8 *obj;
        func_020cb1fc();
        obj = func_020f0aa4(1000);
        *(u32 *)(obj + 0x14) |= 0x11;
        {
            u8 *p = *(u8 **)obj;
            *(s32 *)(p + 0x6c) = *(s32 *)(r9 + 0x94);
            *(s32 *)(p + 0x70) = *(s32 *)(r9 + 0x98);
            *(s32 *)(p + 0x74) = *(s32 *)(r9 + 0x9c);
            *(s32 *)(p + 0xf4) = 1;
        }
        if (*(s16 *)(r9 + 0x8e) == 0x12) {
            obj = func_020f0aa4(1000);
            *(u32 *)(obj + 0x14) &= ~0x11;
            if (*(u16 *)(r9 + 0xb0) == 0) {
                *(u16 *)(r9 + 0x8c) = 8;
            } else {
                u8 *cur;
                *(u16 *)(r9 + 0x8c) = *(u16 *)(r9 + 0xb0);
                cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
                if (cur != NULL) {
                    do {
                        if (*(u32 *)(cur + 4) == 1) goto found_9;
                        cur = *(u8 **)(cur + 0x38);
                    } while (cur != NULL);
                }
                cur = NULL;
                found_9: ;
                *(u32 *)(cur + 0x18) &= ~1;
                cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
                if (cur != NULL) {
                    do {
                        if (*(u32 *)(cur + 4) == 2) goto found_10;
                        cur = *(u8 **)(cur + 0x38);
                    } while (cur != NULL);
                }
                cur = NULL;
                found_10: ;
                *(u32 *)(cur + 0x18) &= ~1;
            }
        }
        *(s16 *)(r9 + 0xac) += 1;
        if (*(volatile s16 *)(r9 + 0xac) == 1) {
            func_0210d27c(0x22);
        } else if (*(s16 *)(r9 + 0xac) > 6) {
            *(s16 *)(r9 + 0xac) = 0;
        }
        break;
    }
    case 8: {
        u8 *cur;
        *(s32 *)(r9 + 0x94) = 0xdf000;
        *(s32 *)(r9 + 0x98) = 0x147000;
        *(s32 *)(r9 + 0x9c) = -0x81000;
        *(s32 *)(r9 + 0xa0) = 0x5a000;
        *(s32 *)(r9 + 0xa4) = 0x6c000;
        *(s32 *)(data_0216020c + 0x84) = 0x24;
        *(s32 *)(data_0216020c + 0x80) = 0xb4;
        if (func_020f0aa4(1003) == NULL) {
            func_020f0154(0x2762);
            ((void (*)(Vec3, s32, s32))func_020f0898)(*(Vec3 *)(r9 + 0x94), 0x2762, 1003);
        }
        **(s32 **)(*(u8 **)func_020f0aa4(1003) + 0x100) = 0x28000;
        *(u16 *)(r9 + 0x8e) = 0;
        *(u16 *)(r9 + 0x8c) = 9;
        func_020eaa10(1);
        cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
        if (cur != NULL) {
            do {
                if (*(u32 *)(cur + 4) == 2) goto found_11;
                cur = *(u8 **)(cur + 0x38);
            } while (cur != NULL);
        }
        cur = NULL;
        found_11: ;
        *(s32 *)(cur + 0x1c) = *(s32 *)(r9 + 0xa0);
        *(s32 *)(cur + 0x20) = *(s32 *)(r9 + 0xa4);
        func_02108680(*(void **)cur, 6, 1);
        cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
        if (cur != NULL) {
            do {
                if (*(u32 *)(cur + 4) == 1) goto found_12;
                cur = *(u8 **)(cur + 0x38);
            } while (cur != NULL);
        }
        cur = NULL;
        found_12: ;
        *(u32 *)(cur + 0x18) &= ~1;
        cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
        if (cur != NULL) {
            do {
                if (*(u32 *)(cur + 4) == 2) goto found_13;
                cur = *(u8 **)(cur + 0x38);
            } while (cur != NULL);
        }
        cur = NULL;
        found_13: ;
        *(u32 *)(cur + 0x18) |= 1;
        break;
    }
    case 9: {
        u8 *obj;
        func_020cb1fc();
        obj = func_020f0aa4(1003);
        *(u32 *)(obj + 0x14) |= 0x11;
        {
            u8 *p = *(u8 **)obj;
            *(s32 *)(p + 0x6c) = *(s32 *)(r9 + 0x94);
            *(s32 *)(p + 0x70) = *(s32 *)(r9 + 0x98);
            *(s32 *)(p + 0x74) = *(s32 *)(r9 + 0x9c);
            *(s32 *)(p + 0xf4) = 1;
        }
        if (*(s16 *)(r9 + 0x8e) == 0x12) {
            obj = func_020f0aa4(1003);
            *(u32 *)(obj + 0x14) &= ~0x11;
            if (*(u16 *)(r9 + 0xb0) == 0) {
                *(u16 *)(r9 + 0x8c) = 10;
            } else {
                u8 *cur;
                *(u16 *)(r9 + 0x8c) = *(u16 *)(r9 + 0xb0);
                cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
                if (cur != NULL) {
                    do {
                        if (*(u32 *)(cur + 4) == 1) goto found_14;
                        cur = *(u8 **)(cur + 0x38);
                    } while (cur != NULL);
                }
                cur = NULL;
                found_14: ;
                *(u32 *)(cur + 0x18) &= ~1;
                cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
                if (cur != NULL) {
                    do {
                        if (*(u32 *)(cur + 4) == 2) goto found_15;
                        cur = *(u8 **)(cur + 0x38);
                    } while (cur != NULL);
                }
                cur = NULL;
                found_15: ;
                *(u32 *)(cur + 0x18) &= ~1;
            }
        }
        *(s16 *)(r9 + 0xac) += 1;
        if (*(s16 *)(r9 + 0xac) == 1) {
            func_0210d27c(0x22);
        } else if (*(s16 *)(r9 + 0xac) > 6) {
            *(s16 *)(r9 + 0xac) = 0;
        }
        break;
    }
    case 10: {
        u8 *cur;
        *(s32 *)(r9 + 0x94) = 0x100000;
        *(s32 *)(r9 + 0x98) = 0xc0000;
        *(s32 *)(r9 + 0x9c) = 0x9f000;
        *(s32 *)(r9 + 0xa0) = 0x24000;
        *(s32 *)(r9 + 0xa4) = 0x49000;
        *(s32 *)(data_0216020c + 0x84) = 0x20;
        *(s32 *)(data_0216020c + 0x80) = 0xb4;
        if (func_020f0aa4(1001) == NULL) {
            func_020f0154(0x2763);
            ((void (*)(Vec3, s32, s32))func_020f0898)(*(Vec3 *)(r9 + 0x94), 0x2763, 1001);
        }
        **(s32 **)(*(u8 **)func_020f0aa4(1001) + 0x100) = 0x14a000;
        *(u16 *)(r9 + 0x8e) = 0;
        *(u16 *)(r9 + 0x8c) = 11;
        func_020eaa10(0);
        cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
        if (cur != NULL) {
            do {
                if (*(u32 *)(cur + 4) == 2) goto found_16;
                cur = *(u8 **)(cur + 0x38);
            } while (cur != NULL);
        }
        cur = NULL;
        found_16: ;
        *(s32 *)(cur + 0x1c) = *(s32 *)(r9 + 0xa0);
        *(s32 *)(cur + 0x20) = *(s32 *)(r9 + 0xa4);
        func_02108680(*(void **)cur, 5, 1);
        cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
        if (cur != NULL) {
            do {
                if (*(u32 *)(cur + 4) == 1) goto found_17;
                cur = *(u8 **)(cur + 0x38);
            } while (cur != NULL);
        }
        cur = NULL;
        found_17: ;
        *(u32 *)(cur + 0x18) &= ~1;
        cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
        if (cur != NULL) {
            do {
                if (*(u32 *)(cur + 4) == 2) goto found_18;
                cur = *(u8 **)(cur + 0x38);
            } while (cur != NULL);
        }
        cur = NULL;
        found_18: ;
        *(u32 *)(cur + 0x18) |= 1;
        break;
    }
    case 11: {
        u8 *obj;
        func_020cb1fc();
        obj = func_020f0aa4(1001);
        *(u32 *)(obj + 0x14) |= 0x51;
        {
            u8 *p = *(u8 **)obj;
            *(u16 *)(p + 0x94) = 0x9de4;
            *(u16 *)(p + 0x96) = 0x9de4;
            *(s32 *)(p + 0xf4) = 1;
            *(s32 *)(p + 0xf8) = 1;
            p = *(u8 * volatile *)obj;
            *(s32 *)(p + 0x6c) = *(s32 *)(r9 + 0x94);
            *(s32 *)(p + 0x70) = *(s32 *)(r9 + 0x98);
            *(s32 *)(p + 0x74) = *(s32 *)(r9 + 0x9c);
            *(s32 *)(p + 0xf4) = 1;
        }
        if (*(s16 *)(r9 + 0x8e) == 0x12) {
            obj = func_020f0aa4(1001);
            *(u32 *)(obj + 0x14) &= ~0x51;
            if (*(u16 *)(r9 + 0xb0) == 0) {
                *(u16 *)(r9 + 0x8c) = 12;
            } else {
                u8 *cur;
                *(u16 *)(r9 + 0x8c) = *(u16 *)(r9 + 0xb0);
                cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
                if (cur != NULL) {
                    do {
                        if (*(u32 *)(cur + 4) == 1) goto found_19;
                        cur = *(u8 **)(cur + 0x38);
                    } while (cur != NULL);
                }
                cur = NULL;
                found_19: ;
                *(u32 *)(cur + 0x18) &= ~1;
                cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
                if (cur != NULL) {
                    do {
                        if (*(u32 *)(cur + 4) == 2) goto found_20;
                        cur = *(u8 **)(cur + 0x38);
                    } while (cur != NULL);
                }
                cur = NULL;
                found_20: ;
                *(u32 *)(cur + 0x18) &= ~1;
            }
        }
        *(s16 *)(r9 + 0xac) += 1;
        if (*(s16 *)(r9 + 0xac) == 1) {
            func_0210d27c(0x22);
        } else if (*(s16 *)(r9 + 0xac) > 6) {
            *(s16 *)(r9 + 0xac) = 0;
        }
        break;
    }
    case 12: {
        u8 *cur;
        *(s32 *)(r9 + 0x94) = 0x19f000;
        *(s32 *)(r9 + 0x98) = 0xd2000;
        *(s32 *)(r9 + 0x9c) = -0x105000;
        *(s32 *)(r9 + 0xa0) = 0x6b000;
        *(s32 *)(r9 + 0xa4) = 0x75000;
        *(s32 *)(data_0216020c + 0x84) = 0x18;
        *(s32 *)(data_0216020c + 0x80) = 0xcc;
        if (func_020f0aa4(1001) == NULL) {
            func_020f0154(0x2763);
            ((void (*)(Vec3, s32, s32))func_020f0898)(*(Vec3 *)(r9 + 0x94), 0x2763, 1001);
        }
        **(s32 **)(*(u8 **)func_020f0aa4(1001) + 0x100) = 0xc8000;
        *(u16 *)(r9 + 0x8e) = 0;
        *(u16 *)(r9 + 0x8c) = 13;
        func_020eaa10(1);
        cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
        if (cur != NULL) {
            do {
                if (*(u32 *)(cur + 4) == 2) goto found_21;
                cur = *(u8 **)(cur + 0x38);
            } while (cur != NULL);
        }
        cur = NULL;
        found_21: ;
        *(s32 *)(cur + 0x1c) = *(s32 *)(r9 + 0xa0);
        *(s32 *)(cur + 0x20) = *(s32 *)(r9 + 0xa4);
        func_02108680(*(void **)cur, 9, 1);
        cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
        if (cur != NULL) {
            do {
                if (*(u32 *)(cur + 4) == 1) goto found_22;
                cur = *(u8 **)(cur + 0x38);
            } while (cur != NULL);
        }
        cur = NULL;
        found_22: ;
        *(u32 *)(cur + 0x18) &= ~1;
        cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
        if (cur != NULL) {
            do {
                if (*(u32 *)(cur + 4) == 2) goto found_23;
                cur = *(u8 **)(cur + 0x38);
            } while (cur != NULL);
        }
        cur = NULL;
        found_23: ;
        *(u32 *)(cur + 0x18) |= 1;
        break;
    }
    case 13: {
        u8 *obj;
        func_020cb1fc();
        obj = func_020f0aa4(1001);
        *(u32 *)(obj + 0x14) |= 0x51;
        {
            u8 *p = *(u8 **)obj;
            *(u16 *)(p + 0x94) = 0;
            *(u16 *)(p + 0x96) = 0;
            *(s32 *)(p + 0xf4) = 1;
            *(s32 *)(p + 0xf8) = 1;
            p = *(u8 * volatile *)obj;
            *(s32 *)(p + 0x6c) = *(s32 *)(r9 + 0x94);
            *(s32 *)(p + 0x70) = *(s32 *)(r9 + 0x98);
            *(s32 *)(p + 0x74) = *(s32 *)(r9 + 0x9c);
            *(s32 *)(p + 0xf4) = 1;
        }
        if (*(s16 *)(r9 + 0x8e) == 0x12) {
            obj = func_020f0aa4(1001);
            *(u32 *)(obj + 0x14) &= ~0x51;
            *(volatile u16 *)(r9 + 0x8c) = 14;
            if (*(u16 *)(r9 + 0xb0) == 0) {
                *(u16 *)(r9 + 0x8c) = 14;
            } else {
                u8 *cur;
                *(u16 *)(r9 + 0x8c) = *(u16 *)(r9 + 0xb0);
                cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
                if (cur != NULL) {
                    do {
                        if (*(u32 *)(cur + 4) == 1) goto found_24;
                        cur = *(u8 **)(cur + 0x38);
                    } while (cur != NULL);
                }
                cur = NULL;
                found_24: ;
                *(u32 *)(cur + 0x18) &= ~1;
                cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
                if (cur != NULL) {
                    do {
                        if (*(u32 *)(cur + 4) == 2) goto found_25;
                        cur = *(u8 **)(cur + 0x38);
                    } while (cur != NULL);
                }
                cur = NULL;
                found_25: ;
                *(u32 *)(cur + 0x18) &= ~1;
            }
        }
        *(s16 *)(r9 + 0xac) += 1;
        if (*(s16 *)(r9 + 0xac) == 1) {
            func_0210d27c(0x22);
        } else if (*(s16 *)(r9 + 0xac) > 6) {
            *(s16 *)(r9 + 0xac) = 0;
        }
        break;
    }
    case 14: {
        u8 *cur;
        *(s32 *)(r9 + 0x94) = 0xd1000;
        *(s32 *)(r9 + 0x98) = 0x15e000;
        *(s32 *)(r9 + 0x9c) = -0x438000;
        *(s32 *)(data_0216020c + 0x84) = 0x18;
        *(s32 *)(data_0216020c + 0x80) = 0xb4;
        if (func_020f0aa4(999) == NULL) {
            func_020f0154(0x2761);
            ((void (*)(Vec3, s32, s32))func_020f0898)(*(Vec3 *)(r9 + 0x94), 0x2761, 999);
        }
        *(s32 *)(data_0216020c + 0xac) = 0;
        *(s32 *)(data_0216020c + 0xb4) = 0xe6000;
        *(u16 *)(r9 + 0x8e) = 0;
        *(u16 *)(r9 + 0x8c) = 15;
        cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
        if (cur != NULL) {
            do {
                if (*(u32 *)(cur + 4) == 1) goto found_26;
                cur = *(u8 **)(cur + 0x38);
            } while (cur != NULL);
        }
        cur = NULL;
        found_26: ;
        *(u32 *)(cur + 0x18) &= ~1;
        cur = *(u8 **)(*(u8 **)(void *)data_02160a80 + 0x3c);
        if (cur != NULL) {
            do {
                if (*(u32 *)(cur + 4) == 2) goto found_27;
                cur = *(u8 **)(cur + 0x38);
            } while (cur != NULL);
        }
        cur = NULL;
        found_27: ;
        *(u32 *)(cur + 0x18) &= ~1;
        *(u16 *)(r9 + 0xac) = 0;
        *(u16 *)(r9 + 0xae) = 0;
        break;
    }
    case 15: {
        u8 *obj;
        u8 *p;
        *(s16 *)(r9 + 0x8e) += 1;
        if (*(volatile s16 *)(r9 + 0x8e) > 40) *(s16 *)(r9 + 0x8e) = 40;
        func_020bec04((u16)*(s32 *)(data_0216020c + 0x84));
        func_020bebc8((u16)*(s32 *)(data_0216020c + 0x80));
        if (*(s16 *)(r9 + 0x8e) <= 8) {
            data_02162884 = (*(s16 *)(r9 + 0x8e) * 16) / 8 - 16;
            data_02162814 = (*(s16 *)(r9 + 0x8e) * 16) / 8 - 16;
        } else if (*(s16 *)(r9 + 0x8e) > 8 && *(s16 *)(r9 + 0x8e) <= 32) {
            data_02162884 = 0;
            data_02162814 = 0;
        } else if (*(s16 *)(r9 + 0x8e) > 32) {
            data_02162884 = ((*(s16 *)(r9 + 0x8e) - 32) * 16) / 8;
            data_02162814 = ((*(s16 *)(r9 + 0x8e) - 32) * 16) / 8;
        }
        *(s32 *)(r9 + 0x9c) = (s32)((u32)(-1080 - ((s16)*(s16 *)(r9 + 0x8e) * (s16)190) / 40) << 12);
        obj = func_020f0aa4(999);
        *(u32 *)(obj + 0x14) |= 0x11;
        p = *(u8 **)obj;
        *(s32 *)(p + 0x6c) = *(s32 *)(r9 + 0x94);
        *(s32 *)(p + 0x70) = *(s32 *)(r9 + 0x98);
        *(s32 *)(p + 0x74) = *(s32 *)(r9 + 0x9c);
        *(s32 *)(p + 0xf4) = 1;
        if (*(s16 *)(r9 + 0x8e) == 40) {
            obj = func_020f0aa4(999);
            *(u32 *)(obj + 0x14) &= ~0x11;
            *(u16 *)(r9 + 0x8c) = 16;
        }
        *(s16 *)(r9 + 0xac) += 1;
        if (*(s16 *)(r9 + 0xac) == 1 && *(s16 *)(r9 + 0xae) < 3) {
            func_0210d27c(0x22);
        } else if (*(s16 *)(r9 + 0xac) == 1 && *(s16 *)(r9 + 0xae) == 3) {
            func_0210d27c(0x75);
        } else if (*(s16 *)(r9 + 0xac) > 6) {
            *(s16 *)(r9 + 0xac) = 0;
            *(s16 *)(r9 + 0xae) += 1;
        }
        break;
    }
    case 16: {
        if (data_02162884 < 16) {
            data_02162884 += 1;
            if (data_02162884 > 16) data_02162884 = 16;
        }
        if (data_02162814 < 16) {
            data_02162814 += 1;
            if (data_02162814 > 16) data_02162814 = 16;
        }
        if (data_02162814 == 16 && data_02162884 == 16) {
            *(s32 *)(data_02160234 + 0x90) = 1;
            data_02160204[0x120] = 1;
            switch (data_02160204[0x11f]) {
            case 1:
                func_020bdcc0(2);
                func_020bdd84(2);
                data_02160204[0xd8] = 2;
                data_02160204[0x11d] |= 1;
                break;
            case 2:
                func_020cea64(0);
                data_02160204[0xd8] = 0x1d;
                break;
            case 3:
                data_02160204[0xd8] = 2;
                data_02160204[0x11e] = 2;
                break;
            }
        }
        break;
    }
    }
    {
        u8 *p = data_0216020c;
        if (p != NULL) {
            s32 z = *(s32 *)(p + 0xb0);
            s32 y = *(s32 *)(p + 0xb4);
            s32 x = *(s32 *)(p + 0xac);
            *(s32 *)(p + 0xa0) = x;
            *(s32 *)(p + 0xa4) = y;
            *(s32 *)(p + 0xa8) = z;
        }
    }
}
