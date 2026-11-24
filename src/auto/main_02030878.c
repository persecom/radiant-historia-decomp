/* 11 functions from 0x02030878 to 0x02031724 (main), found by ds-decomp. */
#include "common.h"

extern u8 **data_02160244;
extern u32 data_02155c3c;

typedef struct UnkStruct_0203157c {
    void (*unk00)(void);
    s32 unk04;
    u8 unk08[0xC];
    void (*unk14)(void);
    s32 unk18;
    u8 unk1c[0xC];
    u8 unk28[4];
    u8 unk2c[0xC];
} UnkStruct_0203157c;
extern UnkStruct_0203157c *data_0216008c;

extern void func_0202e874(u8 *);
extern void *func_0203165c(u32, u32, u32, u32, u16);
extern void *func_02031c24(u32);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void *func_0210c594(s32, u32);
extern void func_0210d9e4(void *);
extern void func_0210db70(void *);
extern void func_021167ac(void *, s32);
extern void func_02031724(void);
extern void func_02031658(void);

extern void func_02022fb0(void *);
extern s32 func_02031384(u8 *, u32, s32);
extern u8 *func_020314dc(void *, s32);
s32 func_02030878(u8 *arg0, u8 *arg1, u8 *arg2, u32 arg3, u32 arg4, u8 arg5) {
    u8 *node = NULL;

    if (arg1 != NULL) {
        node = **(u8 ***)(arg1 + 0x2c);
        while (node != NULL) {
            u16 id = *(u16 *)node;
            if (id >= 0x190 && id <= 0x1f3) {
                break;
            }
            node = *(u8 **)(node + 0x1c);
        }
    }

    if (arg2 == NULL) {
        return 0;
    }

    if (arg0 != NULL && **(u8 **)(arg0 + 0x118) == 0 && arg5 == 0) {
        if (arg2[2] != 0) {
            return 0;
        }
    }

    if ((arg2[0x1c] & 1) != 0) {
        return 0;
    }

    if (node != NULL) {
        func_02022fb0(node);
        arg2[0x1c] |= 1;
        *(u16 *)(arg2 + 0x28) = *(u16 *)node;
        *(u32 *)(arg2 + 0x2c) = arg3;
        *(u8 **)(arg2 + 0x20) = arg0;
        *(u8 **)(arg2 + 0x24) = arg1;
        *(u32 *)(arg2 + 0x34) = *(u32 *)(node + 0x14);
        *(u16 *)(arg2 + 0x1e) = 0;

        if (arg0 != NULL && **(u8 **)(arg0 + 0x118) == 1) {
            arg2[0x1c] |= 4;
        }

        if (*(s16 *)(node + 0x10) != 0) {
            *(s16 *)(arg2 + 0x1e) = *(s16 *)(node + 0x10);
        }

        switch (*(u16 *)node) {
            case 0x191:
            case 0x192:
            case 0x193:
            case 0x194:
            case 0x195:
            case 0x196:
            case 0x197:
            case 0x198:
            case 0x199:
            case 0x19b:
            case 0x1a2:
            case 0x1a3:
                if (*(s16 *)(arg2 + 0x1e) == 0) {
                    *(s16 *)(arg2 + 0x1e) = 15;
                }
                break;
            case 0x19a:
            case 0x19c:
            case 0x19d:
            case 0x19e:
            case 0x19f:
            case 0x1a0:
            case 0x1a1:
                arg2[0x1c] |= 2;
                break;
        }

        if (*(u16 *)node != 0x19a) {
            if (*(u32 *)(node + 0x14) < 10000) {
                func_02031384(arg2, 0, (s16)*(u32 *)(node + 0x14));
                func_02031384(arg2, 1, (s16)*(u32 *)(node + 0x14));
                func_02031384(arg2, 2, (s16)*(u32 *)(node + 0x14));
                func_02031384(arg2, 3, (s16)*(u32 *)(node + 0x14));
            } else {
                u8 *res = func_020314dc(arg2, (s16)(*(u32 *)(node + 0x14) / 100));
                *(u8 **)(res + 0x24) = arg2;
                switch ((s16)(*(u32 *)(node + 0x14) % 100)) {
                    case 1: res[0x28] = 1; break;
                    case 2: res[0x28] = 2; break;
                    case 3: res[0x28] = 3; break;
                    case 4: res[0x28] = 4; break;
                    case 5: res[0x28] = 5; break;
                    case 6: res[0x28] = 6; break;
                    case 7: res[0x28] = 7; break;
                    case 8: res[0x28] = 8; break;
                    case 9: res[0x28] = 9; break;
                    case 10: res[0x28] = 10; break;
                    case 11: res[0x28] = 11; break;
                    case 12: res[0x28] = 12; break;
                }
            }
        }

        return 1;
    }

    return 0;
}
