/* 25 functions from 0x020BD38C to 0x020BE330 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_021600e4;
extern s32 func_020be1b0(void);
extern void func_020be330(void *);
extern void func_020be3a8(void *);
extern void func_020a9e38(s16 *, s16 *);

extern u8 *data_02160204;
extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_021167ac(void *, u32);
extern void func_021167f0(void *, void *);
extern void *func_020bd450(u8);

extern u8 *data_02160204;
extern u8 *data_02160078;
extern u8 *data_02160200;
extern void func_02008e68(s32, void *, s32);
extern u8 *func_020bd438(u8);
extern void func_020bd3b8(u8, u16, u8, u8);

void *func_020bd38c(void) {
    void *ptr = func_0210c594(0xc, data_02155c3c);
    func_021167ac(ptr, 8);
    return ptr;
}

void func_020bd3b8(u8 arg0, u16 arg1, u8 arg2, u8 arg3) {
    u8 *list = *(u8 **)(data_02160204 + 0x90);
    if (func_020bd438(arg0) != NULL) {
        return;
    }
    u8 *p = func_0210c594(4, data_02155c3c);
    u8 *q = func_0210c594(0x10, data_02155c3c);
    *(u16 *)(p + 0) |= arg1;
    *(u8 *)(p + 2) = arg2;
    *(u8 *)(p + 3) = arg3;
    *(void **)(q + 0) = p;
    *(u8 *)(q + 4) = arg0;
    func_021167f0(list, q);
}

u8 *func_020bd438(u8 arg0) {
    void *p = func_020bd450(arg0);
    if (p != NULL) {
        return *(u8 **)p;
    }
    return NULL;
}

void *func_020bd450(u8 arg0) {
    u8 *node = *(u8 **)(*(u8 **)(data_02160204 + 0x90));
    while (node != NULL) {
        if (node[4] == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0xc);
    }
    return NULL;
}

void func_020bd574(void) {
    u8 i;
    for (i = 0; i < 7; i++) {
        u8 *p = func_020bd438(i);
        if (p == NULL) {
            func_020bd3b8(
                i,
                *(u16 *)(data_02160078 + 0x14d0 + i * 4),
                *(u8 *)(data_02160078 + 0x14d2 + i * 4),
                *(u8 *)(data_02160078 + 0x14d3 + i * 4)
            );
        } else {
            *(u16 *)(p + 0) = *(u16 *)(data_02160078 + 0x14d0 + i * 4);
            *(u8 *)(p + 2) = *(u8 *)(data_02160078 + 0x14d2 + i * 4);
            *(u8 *)(p + 3) = *(u8 *)(data_02160078 + 0x14d3 + i * 4);
        }
    }
}

void func_020bd608(void) {
    u8 i;
    for (i = 0; i < 3; i++) {
        u8 *p = func_020bd438(i);
        if (*(u16 *)p & 8) {
            *(u16 *)p |= 1;
            *(u16 *)p &= 0xfff7;
        }
        if (*(u16 *)p & 2) {
            *(u16 *)p &= 0xfffd;
            p[3] = 0;
        }
        if (*(u16 *)p & 0x10) {
            *(u16 *)p &= 0xfffe;
            *(u16 *)p &= 0xffef;
        }
    }
}

BOOL func_020bdb30(s32 arg0, s32 arg1) {
    if (data_02160200 != NULL) {
        if (arg1 != 0) {
            ((u32 *)data_02160200)[(u32)arg0 >> 5] |= 1 << (arg0 % 32);
        } else {
            ((u32 *)data_02160200)[(u32)arg0 >> 5] &= ~(1 << (arg0 % 32));
        }
        return 1;
    }
    return 0;
}

s8 func_020bdba0(s32 arg0) {
    if (data_02160200 != NULL) {
        return (((u32 *)data_02160200)[(u32)arg0 >> 5] & (1 << (arg0 % 32))) != 0;
    }
    return -1;
}

s32 func_020bdcc0(s32 arg0) {
    u8 *table = data_02160200;
    u16 v = *(u16 *)(table + arg0 * 2 + 0x17c);
    if (v == 0 || *(void **)(table + arg0 * 4 + 0x184) == NULL) {
        return 0;
    }
    *(u16 *)(data_02160204 + 0x72) = v;
    *(u16 *)(data_02160204 + 0x74) = *(u16 *)(table + arg0 * 4 + 0x170);
    *(u16 *)(data_02160204 + 0x76) = *(u16 *)(table + arg0 * 4 + 0x172);
    table[0x16c] = table[arg0 + 1 + 0x16c];
    return 1;
}

s8 func_020bdd40(void) {
    u8 i;
    u32 mask = *(u32 *)(data_02160200 + 0x1c);
    for (i = 0; i < 32; i++) {
        if (mask & (1 << i)) {
            return i;
        }
    }
    return -1;
}

void func_020bdd80(void) {
}

void func_020bdd84(void) {
}

void func_020bdd88(void) {
    if (data_02160200 != NULL) {
        func_02008e68(0, data_02160200, 0x1a0);
    }
}

void func_020bddb0(u8 *arg0) {
    u32 zero = 0;
    u16 one = 1;
    *(u32 *)(arg0 + 0) = zero;
    *(u16 *)(arg0 + 4) = one;
}

s32 func_020bdf24(volatile s32 arg0, ...) {
    arg0 = 0;
    return 0;
}

void func_020be30c(s16 *, s16 *);
void func_020be0ec(void) {
u8 **list;
s16 i;
s32 n;
u8 *p = data_021600e4;
n = func_020be1b0();
s16 x,y;
i=0;
if(n<=0) return;
list=(u8 **)(p+0x1234);
do {
func_020be330(list[i]);
x=*(s16 *)(list[i]+0x1a);
y=*(s16 *)(list[i]+0x1c);
func_020be30c(&x,&y);
func_020a9e38(&x,&y);
y/=8; x/=4;
if(p[0x13c4]&1) func_020be3a8(list[i]);
i++;
}while(i<n);
}

void func_020be2d8(s16 *arg0, s16 *arg1) {
    *arg0 = (*arg0 - 0x38) / 32;
    *arg1 = (*arg1 - 0x28) / 32;
}

void func_020be30c(s16 *arg0, s16 *arg1) {
    *arg0 = (*arg0 << 5) + 0x38;
    *arg1 = (*arg1 << 5) + 0x28;
}

