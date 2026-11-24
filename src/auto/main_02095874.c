/* 14 functions from 0x02095874 to 0x02096740 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160110;
extern void *func_02093658(u16);
extern void func_02093424(void *, s32);
extern u8 *func_02095198(void);
extern void func_02093358(u16, s32, s32);
extern void func_02093510(void *, s32);
extern u8 func_020329d8(void);
extern void func_0209353c(s32, s32, s16);
extern void *func_020936f8(s32, s32, s32, s32, s32, s32, s32);
extern void func_020938b0(void *, s32, s32);

void func_02095874(void) {
    u8 *p;
    u8 *node;
    u16 i = 0;
    node = func_02095198();
    while (node != NULL) {
        if (*(u8 *)(node + 0x15) == 1) {
            p = *(u8 **)(node + 8);
            if (*(s16 *)(p + 0xe) != i * 0x13) {
                func_02093358(*(u16 *)p, 0, -8);
                func_02093424(p, 1);
            }
            i++;
            if (i > 0x15) {
                return;
            }
        }
        node = *(u8 **)(node + 4);
    }
}

void func_02095f68(u8 *arg0) {
    u8 *p;
    if (arg0 == NULL) {
        return;
    }
    p = *(u8 **)(arg0 + 8);
    if ((*(u8 *)(arg0 + 0x16) & 1) == 0) {
        return;
    }
    func_02093510(p, 0x10);
    func_02093510(p, 0x12);
    func_02093510(p, 7);
    func_02093510(p, 0x77);
    func_02093510(p, 0x78);
    func_02093510(p, 0x79);
    func_02093510(p, 0x7a);
    *(u8 *)(arg0 + 0x16) &= 0xfe;
}

void func_020960dc(void) {
    func_02093424(func_02093658(0x1e), 0);
}

void func_020961f8(u8 *arg0) {
    u8 *p = *(u8 **)(*(u8 **)(arg0 + 0x14) + 8);
    u8 *q = *(u8 **)arg0;
    *(u16 *)(data_02160110 + 0xce) = *(u16 *)p;
    *(u8 *)(data_02160110 + 0xd0) = *(u8 *)(q + 0x114);
    *(u8 *)(data_02160110 + 0xd1) = func_020329d8();
    func_02093510(p, 0xd);
    func_02093510(p, 6);
    func_02093510(p, 2);
}

extern void *func_020936f8(s32, s32, s32, s32, s32, s32, s32);
extern void func_020938b0(void *, s32, s32);
extern void func_020932a8(s32, s16);
extern void func_02093444(s32);
void func_02096670(s32 arg0, s16 arg1) {
    if (arg0 == 0) {
        void *p;
        p = func_020936f8(0x61, 0x24, 0x56, 0, 0, 2, 0x7f);
        func_020938b0(p, 5, 0x7f);
        p = func_020936f8(0x62, 0x24, 0x56, 0, 0, 4, 0x80);
        func_020938b0(p, 5, 0x80);
    } else if (arg0 == 1) {
        func_020932a8(0x24, (s16)(arg1 + 0x56));
    } else if (arg0 == 2) {
        func_02093444(0x24);
    }
}

