/* 2 functions from 0x020E2BE4 to 0x020E3A9C (main), found by ds-decomp. */
#include "common.h"

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
    u8 *g = data_02160a74;
    s32 count = 0;
    u16 i;
    u16 idx = 0;

    for (i = 0; i < 6; i++) {
        *(s16 *)(g + i * 2 + 0x174) = -1;
        *(s16 *)(g + i * 2 + 0x182) = 0;
        *(s16 *)(g + i * 2 + 0x18e) = 0;
    }

    *(u16 *)(g + 0x180) = 0x2d;

    switch (type) {
    case 0:
        *(u16 *)(g + 0x180) = 0x2d;
        func_02064cb8(*(void **)(obj + 0x11c), 0xb);
        break;
    case 4:
    case 5:
        if (type == 4) {
            *(u16 *)(g + 0x180) = 0x30;
            entry = func_02064cb8(*(void **)(obj + 0x11c), 3);
        } else if (type == 5) {
            *(u16 *)(g + 0x180) = 0x30;
            entry = func_02064cb8(*(void **)(obj + 0x11c), 4);
        }
        if (entry != NULL && (flags & 2)) {
            if (*(s16 *)(g + 0xb2) == 0) {
                func_020a8810(*(void **)(*(u8 **)(g + 0x60) + 4), 0x13);
            } else {
                func_020a8810(*(void **)(*(u8 **)(g + 0x60) + 4), 0x14);
            }
            *(s16 *)(g + 0x174) = 1;
            *(u16 *)(g + 0x182) = 0x30;
            if (*(s16 *)(g + 0x174) == 2) {
                func_020a8810(*(void **)(*(u8 **)(g + 0x60) + 4), 0xf);
            }
            if (*(s16 *)(g + 0xb2) == 0 && *(s16 *)(g + 0x174) == 2) {
                func_020a8810(*(void **)(*(u8 **)(g + 0x60) + 4), 0x17);
            }
            func_020e24bc(*(void **)(g + 0x60), 0, 0, *(u16 *)(entry + 0x20), 0);
        }
        count++;
        break;
    case 1: {
        u8 *node = *(u8 **)(*(u8 **)(obj + 0x11c) + 4);
        while (node != NULL) {
            if (*(s16 *)(node + 0x26) != 0 && *(s16 *)(node + 0x3c) != -1 && *(s16 *)(node + 0x3c) < 100) {
                u16 slot = idx - *(s16 *)(g + 0xce);
                if ((flags & 2) && slot < 6) {
                    *(s16 *)(g + slot * 2 + 0x174) = 1;
                    if (*(s16 *)(*(u8 **)(obj + 0x118) + 0xc) < *(s16 *)(node + 0x1c)) {
                        *(s16 *)(g + slot * 2 + 0x174) = 2;
                    }
                    if (func_020e5630((u8)type, obj, (u8)idx) == 0) {
                        *(s16 *)(g + slot * 2 + 0x174) = 2;
                    }
                    if (*(s16 *)(data_02160a74 + 0xc8) >= 9 && *(u16 *)(node + 0x20) == 0x15) {
                        *(s16 *)(g + slot * 2 + 0x174) = 2;
                    }
                    if (*(s16 *)(g + 0xb2) == slot) {
                        func_020a8810(*(void **)(*(u8 **)(g + slot * 4 + 0x60) + 4), 0x13);
                    } else {
                        func_020a8810(*(void **)(*(u8 **)(g + slot * 4 + 0x60) + 4), 0x14);
                    }
                    if (!(*(u16 *)(g + 0x1b8) & (1 << slot))) {
                        func_020a8810(*(void **)(*(u8 **)(g + slot * 4 + 0x60) + 4), 0xf);
                    }
                    if (*(s16 *)(g + slot * 2 + 0x174) == 2) {
                        func_020a8810(*(void **)(*(u8 **)(g + slot * 4 + 0x60) + 4), 0xf);
                    }
                    if (*(s16 *)(g + 0xb2) == slot && *(s16 *)(g + slot * 2 + 0x174) == 2) {
                        func_020a8810(*(void **)(*(u8 **)(g + slot * 4 + 0x60) + 4), 0x17);
                    }
                    if (*(u8 *)(node + 0x28) == 0) {
                        *(u16 *)(g + slot * 2 + 0x182) = 0x2d;
                    } else if (*(u8 *)(node + 0x28) == 1) {
                        *(u16 *)(g + slot * 2 + 0x182) = 0x2e;
                    } else if (*(u8 *)(node + 0x28) == 2) {
                        *(u16 *)(g + slot * 2 + 0x182) = 0x2f;
                    } else if (*(u8 *)(node + 0x28) == 3) {
                        *(u16 *)(g + slot * 2 + 0x182) = 0x30;
                    }
                    *(s16 *)(g + slot * 2 + 0x18e) = *(s16 *)(node + 0x1c);
                    func_020e24bc(*(void **)(g + slot * 4 + 0x60), 0, 0, *(u16 *)(node + 0x20), 0);
                }
                count++;
                idx++;
            }
            node = *(u8 **)(node + 0x34);
        }
        break;
    }
    case 3: {
        u8 *node = *(u8 **)(**data_021600c8 + 4);
        while (node != NULL) {
            if (func_02022068(*(u8 *)(node + 1)) != 0) {
                u16 slot = idx - *(s16 *)(g + 0xce);
                if ((flags & 2) && slot < 6) {
                    if (*(s16 *)(g + 0xb2) == slot) {
                        func_020a8810(*(void **)(*(u8 **)(g + slot * 4 + 0x60) + 4), 0x13);
                    } else {
                        func_020a8810(*(void **)(*(u8 **)(g + slot * 4 + 0x60) + 4), 0x14);
                    }
                    *(s16 *)(g + slot * 2 + 0x174) = 1;
                    *(s16 *)(g + slot * 2 + 0x18e) = func_02022068(*(u8 *)(node + 1));
                    {
                        u16 v = func_020a30d4(*(u8 *)(node + 1)) + 0x30;
                        if (v >= 0x31 && v <= 0x41) {
                            *(u16 *)(g + slot * 2 + 0x182) = v;
                        } else {
                            *(u16 *)(g + slot * 2 + 0x182) = 0x42;
                        }
                    }
                    func_020e24bc(*(void **)(g + slot * 4 + 0x60), 0, 0, *(u16 *)(node + 0x20), 0);
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
        *(u16 *)(g + 0x180) = 0x2f;
        for (i = 0; i < 6; i++) {
            *(s16 *)(g + i * 2 + 0x174) = -1;
            *(s16 *)(g + i * 2 + 0x18e) = 0;
        }
        for (k = 0; k < 15; k++) {
            s32 id = func_020e55d8((u8)*(u16 *)(obj + 0x90), (u8)k);
            if (id != 0) {
                u8 *item = func_02064cb8(*(void **)(obj + 0x11c), id);
                if (item != NULL) {
                    u16 slot = idx2 - *(s16 *)(g + 0xce);
                    if ((flags & 2) && slot < 6) {
                        *(s16 *)(g + slot * 2 + 0x174) = 1;
                        if (func_020e5630((u8)type, obj, (u8)k) == 0) {
                            *(s16 *)(g + slot * 2 + 0x174) = 2;
                        }
                        if (*(s16 *)(data_02160a74 + 0xc8) >= 9 && *(u8 *)(item + 1) == 0x67) {
                            *(s16 *)(g + slot * 2 + 0x174) = 2;
                        }
                        if (*(s16 *)(g + 0xb2) == slot) {
                            func_020a8810(*(void **)(*(u8 **)(g + slot * 4 + 0x60) + 4), 0x13);
                        } else {
                            func_020a8810(*(void **)(*(u8 **)(g + slot * 4 + 0x60) + 4), 0x14);
                        }
                        if (!(*(u16 *)(g + 0x1b8) & (1 << slot))) {
                            func_020a8810(*(void **)(*(u8 **)(g + slot * 4 + 0x60) + 4), 0xf);
                        }
                        if (*(s16 *)(g + slot * 2 + 0x174) == 2) {
                            func_020a8810(*(void **)(*(u8 **)(g + slot * 4 + 0x60) + 4), 0xf);
                        }
                        if (*(s16 *)(g + 0xb2) == slot && *(s16 *)(g + slot * 2 + 0x174) == 2) {
                            func_020a8810(*(void **)(*(u8 **)(g + slot * 4 + 0x60) + 4), 0x17);
                        }
                        if (*(u8 *)(item + 0x28) == 0) {
                            *(u16 *)(g + slot * 2 + 0x182) = 0x2d;
                        } else if (*(u8 *)(item + 0x28) == 1) {
                            *(u16 *)(g + slot * 2 + 0x182) = 0x2e;
                        } else if (*(u8 *)(item + 0x28) == 2) {
                            *(u16 *)(g + slot * 2 + 0x182) = 0x2f;
                        } else if (*(u8 *)(item + 0x28) == 3) {
                            *(u16 *)(g + slot * 2 + 0x182) = 0x30;
                        }
                        func_020e24bc(*(void **)(g + slot * 4 + 0x60), 0, 0, *(u16 *)(item + 0x20), 0);
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
