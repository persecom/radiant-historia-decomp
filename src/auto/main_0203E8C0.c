/* 4 functions from 0x0203E8C0 to 0x0203F038 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600a0;
extern u16 data_021626a6;
extern u8 *data_02160200;
extern u32 data_0216263c[3];
extern void func_020ec8cc(void *, s32, s32);
extern void func_020ec548(void *);
static inline s32 rand_0203e8c0(s32 max) {
    u32 seed;
    s32 r;
    if (max == 0) {
        return 0;
    }
    seed = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
    data_0216263c[0] = seed;
    r = ((seed >> 16) * (max * 2)) >> 16;
    return (u16)r - max;
}
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void func_0210da14(u8 *);
extern void func_0210dba0(u8 *);
extern void func_0210dbe8(s32);
extern void *data_02155c3c;
extern void func_0203efc4(void);
extern void func_0203f038(void);
extern void *func_0210c594(s32, void *);
extern void func_021167ac(void *, s32);
extern void func_0210d9e4(void *);
extern void func_0210db70(void *);
extern void func_0210dbd0(void *);
extern void func_0203faf4(void);
void func_0203e8c0(void) {
    u8 **g = (u8 **)&data_021600a0;
    u16 mask = 0x7fff;
    s32 one = 1;
    s32 zero = 0;
    u8 *node = *(u8 **)(g[1] + 0x28);
    u8 *obj, *next;
    if (node != NULL) {
        while (node != NULL) {
            obj = *(u8 **)node;
            *(u32 *)(node + 8) = zero;
            if (*(u16 *)(g[1] + 0x38) == 0 && *(u16 *)(g[1] + 0x34) == *(u16 *)(node + 6) &&
                *(u16 *)(g[1] + 0x36) != *(u16 *)(g[1] + 0x34)) {
                *(u32 *)(node + 8) = one;
                *(s32 *)(node + 0xc) = -*(u8 *)(node + 0x18);
                func_020ec8cc(obj, one, zero);
            }
            if (*(u16 *)(g[1] + 0x3e) == 0 && *(u16 *)(g[1] + 0x3a) == *(u16 *)(node + 6) &&
                *(u16 *)(g[1] + 0x3c) != *(u16 *)(g[1] + 0x3a)) {
                *(u32 *)(node + 8) = one;
                *(s32 *)(node + 0xc) = *(u8 *)(node + 0x18) + 0x100;
                func_020ec8cc(obj, one, zero);
            }
            if (*(u32 *)(node + 8) != 0) {
                if (*(u16 *)(g[1] + 0x34) == *(u16 *)(node + 6)) {
                    if (*(u32 *)(node + 0x1c) == 1) {
                        *(s32 *)(node + 0xc) = *(s32 *)(g[1] + 0x50) + 0x80;
                    } else if ((data_021626a6 & 0x400) || (*(u32 *)(*(u8 **)&data_02160200 + 0x160) & 4)) {
                        *(u32 *)(node + 0x1c) = one;
                        *(s32 *)(node + 0xc) += *(u8 *)(node + 0x18);
                        if (*(s32 *)(node + 0xc) > *(s32 *)(g[1] + 0x50) + 0x80) {
                            *(s32 *)(node + 0xc) = *(s32 *)(g[1] + 0x50) + 0x80;
                        }
                    }
                } else {
                    if (*(u32 *)(node + 0x1c) == 1) {
                        *(s32 *)(node + 0xc) = *(s32 *)(g[1] + 0x54) + 0x80;
                    } else if ((data_021626a6 & 0x400) || (*(u32 *)(*(u8 **)&data_02160200 + 0x160) & 4)) {
                        *(u32 *)(node + 0x1c) = one;
                        *(s32 *)(node + 0xc) -= *(u8 *)(node + 0x18);
                        if (*(s32 *)(node + 0xc) < *(s32 *)(g[1] + 0x54) + 0x80) {
                            *(s32 *)(node + 0xc) = *(s32 *)(g[1] + 0x54) + 0x80;
                        }
                    }
                }
            }
            func_020ec8cc(obj, zero, one);
            if (*(u8 *)(g[1] + 0x40) & 1) {
                if (*(u16 *)(node + 6) == 1) *(u16 *)(obj + 0x3c) = zero;
            } else {
                if (*(u16 *)(node + 6) == 1) *(u16 *)(obj + 0x3c) = mask;
            }
            if (*(u8 *)(g[1] + 0x41) & 1) {
                if (*(u16 *)(node + 6) == 2) *(u16 *)(obj + 0x3c) = zero;
            } else {
                if (*(u16 *)(node + 6) == 2) *(u16 *)(obj + 0x3c) = mask;
            }
            next = *(u8 **)(node + 0x24);
            if (*(u16 *)(g[1] + 0x38) == *(u16 *)(node + 6)) {
                *(u16 *)(g[1] + 0x38) = zero;
                func_020ec8cc(obj, zero, one);
                func_021168f8(g[1] + 0x28, node);
                func_020ec548(obj);
                if (node != NULL) {
                    func_0210c5dc(node);
                    node = NULL;
                }
                *(u16 *)(g[1] + 0x36) = zero;
                func_020ec8cc(obj, one, zero);
            }
            if (node != NULL && *(u16 *)(g[1] + 0x3e) == *(u16 *)(node + 6)) {
                *(u16 *)(g[1] + 0x3e) = zero;
                func_020ec8cc(obj, zero, one);
                func_021168f8(g[1] + 0x28, node);
                func_020ec548(obj);
                if (node != NULL) {
                    func_0210c5dc(node);
                    node = NULL;
                }
                *(u16 *)(g[1] + 0x3c) = zero;
                func_020ec8cc(obj, one, zero);
            }
            if (node != NULL) {
                if ((*(u8 *)(g[1] + 0x40) & 2) && *(u16 *)(node + 6) == 1) {
                    *(s32 *)(obj + 0x14) = (*(s32 *)(node + 0xc) + *(s16 *)(g[1] + 0x44)) << 12;
                    *(s32 *)(obj + 0x18) = (*(s32 *)(node + 0x10) + *(s16 *)(g[1] + 0x46)) << 12;
                } else if ((*(u8 *)(g[1] + 0x41) & 2) && *(u16 *)(node + 6) == 2) {
                    *(s32 *)(obj + 0x14) = (*(s32 *)(node + 0xc) + *(s16 *)(g[1] + 0x4a)) << 12;
                    *(s32 *)(obj + 0x18) = (*(s32 *)(node + 0x10) + *(s16 *)(g[1] + 0x4c)) << 12;
                } else {
                    *(s32 *)(obj + 0x14) = *(s32 *)(node + 0xc) << 12;
                }
            }
            node = next;
        }
    }
    if (*(u16 *)(g[1] + 0x38) == 0) {
        *(u16 *)(g[1] + 0x36) = *(u16 *)(g[1] + 0x34);
    }
    if (*(u16 *)(g[1] + 0x3e) == 0) {
        *(u16 *)(g[1] + 0x3c) = *(u16 *)(g[1] + 0x3a);
    }
    if (*(u8 *)(g[1] + 0x40) & 2) {
        *(s16 *)(g[1] + 0x44) = rand_0203e8c0(*(u8 *)(g[1] + 0x42));
    } else {
        *(s16 *)(g[1] + 0x44) = 0;
    }
    if (*(u8 *)(g[1] + 0x41) & 2) {
        *(s16 *)(g[1] + 0x4a) = rand_0203e8c0(*(u8 *)(g[1] + 0x48));
    } else {
        *(s16 *)(g[1] + 0x4a) = 0;
    }
    if (*(u8 *)(g[1] + 0x48) != 0) {
        *(s16 *)(g[1] + 0x4c) = rand_0203e8c0(*(u8 *)(g[1] + 0x48));
    } else {
        *(s16 *)(g[1] + 0x4c) = 0;
    }
}

void func_0203ee20(s32 arg0) {
    s32 val = 0x3f6;
    if (data_021600a0 != NULL) {
        return;
    }
    data_021600a0 = func_0210c594(0x40, data_02155c3c);
    func_021167ac(data_021600a0 + 0x28, 8);
    *(void (**)(void))data_021600a0 = func_0203efc4;
    *(s32 *)(data_021600a0 + 4) = val;
    func_0210d9e4(data_021600a0);
    if (arg0 == 0) {
        *(void (**)(void))(data_021600a0 + 0x14) = func_0203f038;
        *(s32 *)(data_021600a0 + 0x18) = val - 0xc;
        func_0210db70(data_021600a0 + 0x14);
    } else if (arg0 == 1) {
        *(void (**)(void))(data_021600a0 + 0x14) = func_0203f038;
        *(s32 *)(data_021600a0 + 0x18) = val - 0xc;
        func_0210dbd0(data_021600a0 + 0x14);
    }
    func_0203faf4();
    *(u16 *)(data_021600a0 + 0x34) = 0;
    *(u8 *)(data_021600a0 + 0x3c) = 1;
}

void func_0203ef0c(s32 arg0) {
    u8 **pp = &data_021600a0;
    u8 *node;
    if (*pp == NULL) {
        return;
    }
    node = *(u8 **)(*pp + 0x28);
    while (node != NULL) {
        u8 *next = *(u8 **)(node + 0xc);
        func_021168f8(*pp + 0x28, node);
        if (*(void **)(node + 0) != NULL) {
            func_0210c5dc(*(void **)(node + 0));
            *(u32 *)(node + 0) = 0;
        }
        if (node != NULL) {
            func_0210c5dc(node);
        }
        node = next;
    }
    func_0210da14(*pp);
    if (arg0 == 0) {
        func_0210dba0(*pp + 0x14);
    } else {
        func_0210dbe8((s32)(*pp + 0x14));
    }
    if (*pp != NULL) {
        func_0210c5dc(*pp);
        *pp = NULL;
    }
}

void func_0203efc4(void) {
 u16 v=*(u16*)(data_021600a0+0x36);
 u32 count; u16 flag;
 if(!(v&0x8000)) return;
 count=(u16)(v&~0xc000);
 count++;
 flag=v&0x4000;
 count=(u16)count;
 if(count>15) { flag^=0x4000; count=0; }
 *(u16*)(data_021600a0+0x36)=count;
 *(u16*)(data_021600a0+0x36)|=(u16)(flag|0x8000);
}
