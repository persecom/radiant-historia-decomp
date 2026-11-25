/* 2 functions from 0x020E2BE4 to 0x020E3A9C (main), found by ds-decomp. */
#include "common.h"
extern const u16 data_021449c0[10];
extern int func_020df38c(int, int);
extern void func_020a3bbc(int);
extern void func_020e3db4(void *, s16, s16);
extern void func_020e43e4(void *, s16, s16, int);
extern void func_020e3e2c(s16, s16, int);
extern void func_021098ac(void *);

typedef struct {
    u8 pad_00[0x60];
    u8 *unk_60[6];
    u8 pad_78[0x3a];
    s16 unk_b2;
    u8 pad_b4[0x14];
    s16 unk_c8;
    u8 pad_ca[0x4];
    s16 unk_ce;
    u8 pad_d0[0xa4];
    s16 unk_174[6];
    u16 unk_180;
    u16 unk_182[6];
    s16 unk_18e[6];
    u8 pad_19a[0x1e];
    u16 unk_1b8;
} UnkMenuState;

extern u8 *data_02160a74;
extern u8 **data_021600c8;
extern u8 *func_02064cb8(void *, s32);
extern void func_020a8810(void *, s32);
extern void func_020e24bc(void *, s32, s32, s32, s32);
extern s32 func_020e5630(u8, u8 *, u8);
extern s32 func_02022068(u8);
extern s32 func_020a30d4(u8);
extern s32 func_020e55d8(u8, u8);
s32 func_020e2be4(u8 ***arg0, u32 type, u32 flags) {
    u8 *obj = **arg0;
    u8 *entry = NULL;
    UnkMenuState *g = (UnkMenuState *)data_02160a74;
    s32 count = 0;
    u16 i;
    u16 idx = 0;

    for (i = 0; i < 6; i++) {
        g->unk_174[i] = -1;
        g->unk_182[i] = 0;
        g->unk_18e[i] = 0;
    }

    g->unk_180 = 0x2d;

    switch (type) {
    case 0:
        g->unk_180 = 0x2d;
        func_02064cb8(*(void **)(obj + 0x11c), 0xb);
        break;
    case 4:
    case 5:
        if (type == 4) {
            g->unk_180 = 0x30;
            entry = func_02064cb8(*(void **)(obj + 0x11c), 3);
        } else if (type == 5) {
            g->unk_180 = 0x30;
            entry = func_02064cb8(*(void **)(obj + 0x11c), 4);
        }
        if (entry != NULL && (flags & 2)) {
            if (g->unk_b2 == 0) {
                func_020a8810(*(void **)(g->unk_60[0] + 4), 0x13);
            } else {
                func_020a8810(*(void **)(g->unk_60[0] + 4), 0x14);
            }
            g->unk_174[0] = 1;
            g->unk_182[0] = 0x30;
            if (g->unk_174[0] == 2) {
                func_020a8810(*(void **)(g->unk_60[0] + 4), 0xf);
            }
            if (g->unk_b2 == 0 && g->unk_174[0] == 2) {
                func_020a8810(*(void **)(g->unk_60[0] + 4), 0x17);
            }
            func_020e24bc(g->unk_60[0], 0, 0, *(u16 *)(entry + 0x20), 0);
        }
        count++;
        break;
    case 1: {
        u8 *node = *(u8 **)(*(u8 **)(obj + 0x11c) + 4);
        while (node != NULL) {
            if (*(s16 *)(node + 0x26) != 0 && *(s16 *)(node + 0x3c) != -1 && *(s16 *)(node + 0x3c) < 100) {
                u16 slot = idx - g->unk_ce;
                if ((flags & 2) && slot < 6) {
                    g->unk_174[slot] = 1;
                    if (*(s16 *)(*(u8 **)(obj + 0x118) + 0xc) < *(s16 *)(node + 0x1c)) {
                        g->unk_174[slot] = 2;
                    }
                    if (func_020e5630((u8)type, obj, (u8)idx) == 0) {
                        g->unk_174[slot] = 2;
                    }
                    if (((UnkMenuState *)data_02160a74)->unk_c8 >= 9 && *(u16 *)(node + 0x20) == 0x15) {
                        g->unk_174[slot] = 2;
                    }
                    if (g->unk_b2 == slot) {
                        func_020a8810(*(void **)(g->unk_60[slot] + 4), 0x13);
                    } else {
                        func_020a8810(*(void **)(g->unk_60[slot] + 4), 0x14);
                    }
                    if (!(g->unk_1b8 & (1 << slot))) {
                        func_020a8810(*(void **)(g->unk_60[slot] + 4), 0xf);
                    }
                    if (g->unk_174[slot] == 2) {
                        func_020a8810(*(void **)(g->unk_60[slot] + 4), 0xf);
                    }
                    if (g->unk_b2 == slot && g->unk_174[slot] == 2) {
                        func_020a8810(*(void **)(g->unk_60[slot] + 4), 0x17);
                    }
                    if (*(u8 *)(node + 0x28) == 0) {
                        g->unk_182[slot] = 0x2d;
                    } else if (*(u8 *)(node + 0x28) == 1) {
                        g->unk_182[slot] = 0x2e;
                    } else if (*(u8 *)(node + 0x28) == 2) {
                        g->unk_182[slot] = 0x2f;
                    } else if (*(u8 *)(node + 0x28) == 3) {
                        g->unk_182[slot] = 0x30;
                    }
                    g->unk_18e[slot] = *(s16 *)(node + 0x1c);
                    func_020e24bc(g->unk_60[slot], 0, 0, *(u16 *)(node + 0x20), 0);
                }
                count++;
                idx++;
            }
            node = *(u8 **)(node + 0x34);
        }
        break;
    }
    case 3: {
        u8 *node = *(u8 **)(*data_021600c8 + 4);
        while (node != NULL) {
            if (func_02022068(*(u8 *)(node + 1)) != 0) {
                u16 slot = idx - g->unk_ce;
                if ((flags & 2) && slot < 6) {
                    if (g->unk_b2 == slot) {
                        func_020a8810(*(void **)(g->unk_60[slot] + 4), 0x13);
                    } else {
                        func_020a8810(*(void **)(g->unk_60[slot] + 4), 0x14);
                    }
                    g->unk_174[slot] = 1;
                    g->unk_18e[slot] = func_02022068(*(u8 *)(node + 1));
                    {
                        u16 v = func_020a30d4(*(u8 *)(node + 1)) + 0x30;
                        if (v >= 0x31 && v <= 0x41) {
                            g->unk_182[slot] = v;
                        } else {
                            g->unk_182[slot] = 0x42;
                        }
                    }
                    func_020e24bc(g->unk_60[slot], 0, 0, *(u16 *)(node + 0x20), 0);
                }
                idx++;
                count++;
            }
            node = *(u8 **)(node + 0x34);
        }
        break;
    }
    case 6: {
        u16 k;
        u16 idx2 = 0;
        g->unk_180 = 0x2f;
        for (idx = 0; idx < 6; idx++) {
            g->unk_174[idx] = -1;
            g->unk_18e[idx] = 0;
        }
        for (k = 0; k < 15; k++) {
            s32 id = func_020e55d8((u8)*(u16 *)(obj + 0x90), (u8)k);
            if (id != 0) {
                u8 *item = func_02064cb8(*(void **)(obj + 0x11c), id);
                if (item != NULL) {
                    u16 slot = idx2 - g->unk_ce;
                    if ((flags & 2) && slot < 6) {
                        g->unk_174[slot] = 1;
                        if (func_020e5630((u8)type, obj, (u8)k) == 0) {
                            g->unk_174[slot] = 2;
                        }
                        if (((UnkMenuState *)data_02160a74)->unk_c8 >= 9 && *(u8 *)(item + 1) == 0x67) {
                            g->unk_174[slot] = 2;
                        }
                        if (g->unk_b2 == slot) {
                            func_020a8810(*(void **)(g->unk_60[slot] + 4), 0x13);
                        } else {
                            func_020a8810(*(void **)(g->unk_60[slot] + 4), 0x14);
                        }
                        if (!(g->unk_1b8 & (1 << slot))) {
                            func_020a8810(*(void **)(g->unk_60[slot] + 4), 0xf);
                        }
                        if (g->unk_174[slot] == 2) {
                            func_020a8810(*(void **)(g->unk_60[slot] + 4), 0xf);
                        }
                        if (g->unk_b2 == slot && g->unk_174[slot] == 2) {
                            func_020a8810(*(void **)(g->unk_60[slot] + 4), 0x17);
                        }
                        if (*(u8 *)(item + 0x28) == 0) {
                            g->unk_182[slot] = 0x2d;
                        } else if (*(u8 *)(item + 0x28) == 1) {
                            g->unk_182[slot] = 0x2e;
                        } else if (*(u8 *)(item + 0x28) == 2) {
                            g->unk_182[slot] = 0x2f;
                        } else if (*(u8 *)(item + 0x28) == 3) {
                            g->unk_182[slot] = 0x30;
                        }
                        func_020e24bc(g->unk_60[slot], 0, 0, *(u16 *)(item + 0x20), 0);
                    }
                    count++;
                    idx2++;
                }
            }
        }
        break;
    }
    }

    if (!(flags & 1)) {
        count = 0;
    }
    return count;
}
