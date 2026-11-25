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

extern void func_0202647c(u8 *, u32);
extern u32 func_0202e84c(u8 *);
extern void func_020d3160(s32, s32, s32, s32);
extern void func_02030468(void *, s32);
extern void func_020da574(void *, void *, void *, void *, s32);
extern void func_020daa60(void *, void *, void *, void *, s32);
extern void func_02025f84(void *, s32);
extern void func_020da8c0(void *, s32);
extern void func_02023148(void *, void *, void *, s32);
void func_02030b7c(u8 *e, u8 mode, u32 flags) {
    u8 *trap;
    s32 flag;
    u8 *skill1;
    u32 mask;
    u16 i;
    void *buf1;
    void *buf2;
    void *buf3;
    void *buf4;
    u8 *skill4;
    u8 *skill3;
    u8 *skill2;

    if (e == NULL) {
        return;
    }
    if (e != NULL && *(u8 **)(e + 0x118) != NULL) {
        u32 v = *(u32 *)(*(u8 **)(e + 0x118) + 0x8c);
        if ((v & 8) && !(v & 0x800)) {
            return;
        }
    }
    if (mode == 1 || mode == 4) {
        if (*(u32 *)(*(u8 **)(e + 0x118) + 0x90) & 8) {
            func_0202647c(e, 0xab);
        }
        if (*(u32 *)(*(u8 **)(e + 0x118) + 0x90) & 0x10) {
            func_0202647c(e, 0xac);
        }
        if (*(u32 *)(*(u8 **)(e + 0x118) + 0x90) & 0x20) {
            func_0202647c(e, 0xaf);
        }
        *(u32 *)(*(u8 **)(e + 0x118) + 0x90) = 0;
    }
    flag = 0;
    mask = func_0202e84c(e);
    for (i = 0; i < 9; i++) {
        if (!(mask & (1 << i))) continue;
        if (!(flags & (1 << i))) continue;
        trap = *(u8 **)((u8 *)data_02160244 + i * 4 + 8);
        if (!(trap[0x1c] & 1)) continue;
        if (*(s32 *)(*(u8 **)(e + 0x118) + 0x70) != 1) continue;
        switch (*(u16 *)(trap + 0x28)) {
        case 0x191:
            if (mode == 1 || mode == 5) {
                buf1 = func_0210c594(0x1c, data_02155c3c);
                skill1 = *(u8 **)(trap + 0x24);
                if (!(trap[0x1c] & 8)) {
                    u8 *owner = *(u8 **)(trap + 0x20);
                    func_020d3160(6, *(u8 *)*(u8 **)(owner + 0x118), 0, *(u16 *)(owner + 0x90) & 0xff);
                    func_020d3160(1, *(s16 *)(skill1 + 0x16) & 0xff, 0, *(u16 *)(owner + 0x90) & 0xff);
                    if (*(u8 *)*(u8 **)(owner + 0x118) == 0) {
                        func_02030468(*(void **)(owner + 0x118), 5);
                        func_02030468(*(void **)(owner + 0x118), 1);
                    }
                }
                func_020da574(*(void **)(trap + 0x20), e, skill1, buf1, 1);
                ((u8 *)data_02160244)[0x16f] = 1;
                func_020daa60(*(void **)(trap + 0x20), e, skill1, buf1, 10);
                ((u8 *)data_02160244)[0x16f] = 0;
                if (buf1 != NULL) {
                    func_0210c5dc(buf1);
                }
                if (*(s16 *)(e + 0x98) == 0) {
                    *(s16 *)(e + 0x98) = 8;
                    e[0xa2] |= 4;
                }
                func_02025f84(e, 0x89);
                func_020da8c0(e, 9);
                trap[0x1c] |= 8;
            }
            if (mode == 4) {
                (*data_02160244)[0x9c] = 1;
            }
            break;
        case 0x192:
            if (mode == 1 || mode == 5) {
                buf2 = func_0210c594(0x1c, data_02155c3c);
                skill2 = *(u8 **)(trap + 0x24);
                if (!(trap[0x1c] & 8)) {
                    u8 *owner = *(u8 **)(trap + 0x20);
                    func_020d3160(6, *(u8 *)*(u8 **)(owner + 0x118), 0, *(u16 *)(owner + 0x90) & 0xff);
                    func_020d3160(1, *(s16 *)(skill2 + 0x16) & 0xff, 0, *(u16 *)(owner + 0x90) & 0xff);
                    if (*(u8 *)*(u8 **)(owner + 0x118) == 0) {
                        func_02030468(*(void **)(owner + 0x118), 5);
                        func_02030468(*(void **)(owner + 0x118), 1);
                    }
                }
                func_020da574(*(void **)(trap + 0x20), e, skill2, buf2, 1);
                ((u8 *)data_02160244)[0x16f] = 1;
                func_020daa60(*(void **)(trap + 0x20), e, skill2, buf2, 10);
                ((u8 *)data_02160244)[0x16f] = 0;
                if (buf2 != NULL) {
                    func_0210c5dc(buf2);
                }
                if (*(s16 *)(e + 0x98) == 0) {
                    *(s16 *)(e + 0x98) = 8;
                    e[0xa2] |= 4;
                }
                func_02025f84(e, 0x89);
                func_020da8c0(e, 9);
                func_02023148(*(void **)(*(u8 **)(trap + 0x24) + 0x2c), *(void **)(trap + 0x20), e, 0);
                trap[0x1c] |= 8;
            }
            if (mode == 4) {
                (*data_02160244)[0x9c] = 1;
            }
            break;
        case 0x1a3:
            if (mode == 1 || mode == 5) {
                buf3 = func_0210c594(0x1c, data_02155c3c);
                skill3 = *(u8 **)(trap + 0x24);
                if (!(trap[0x1c] & 8)) {
                    u8 *owner = *(u8 **)(trap + 0x20);
                    func_020d3160(6, *(u8 *)*(u8 **)(owner + 0x118), 0, *(u16 *)(owner + 0x90) & 0xff);
                    func_020d3160(1, *(s16 *)(skill3 + 0x16) & 0xff, 0, *(u16 *)(owner + 0x90) & 0xff);
                    if (*(u8 *)*(u8 **)(owner + 0x118) == 0) {
                        func_02030468(*(void **)(owner + 0x118), 5);
                        func_02030468(*(void **)(owner + 0x118), 1);
                    }
                }
                func_020da574(*(void **)(trap + 0x20), e, skill3, buf3, 1);
                ((u8 *)data_02160244)[0x16f] = 1;
                func_020daa60(*(void **)(trap + 0x20), e, skill3, buf3, 10);
                ((u8 *)data_02160244)[0x16f] = 0;
                if (buf3 != NULL) {
                    func_0210c5dc(buf3);
                }
                if (*(s16 *)(e + 0x98) == 0) {
                    *(s16 *)(e + 0x98) = 8;
                    e[0xa2] |= 4;
                }
                func_02025f84(e, 0x89);
                func_020da8c0(e, 9);
                func_02023148(*(void **)(*(u8 **)(trap + 0x24) + 0x2c), *(void **)(trap + 0x20), e, 0);
                trap[0x1c] |= 8;
            }
            if (mode == 4) {
                (*data_02160244)[0x9c] = 1;
            }
            break;
        case 0x193:
        case 0x1a2:
            if (mode == 1 || mode == 5) {
                buf4 = func_0210c594(0x1c, data_02155c3c);
                skill4 = *(u8 **)(trap + 0x24);
                if (!(trap[0x1c] & 8)) {
                    u8 *owner = *(u8 **)(trap + 0x20);
                    func_020d3160(6, *(u8 *)*(u8 **)(owner + 0x118), 0, *(u16 *)(owner + 0x90) & 0xff);
                    func_020d3160(1, *(s16 *)(skill4 + 0x16) & 0xff, 0, *(u16 *)(owner + 0x90) & 0xff);
                    if (*(u8 *)*(u8 **)(owner + 0x118) == 0) {
                        func_02030468(*(void **)(owner + 0x118), 5);
                        func_02030468(*(void **)(owner + 0x118), 1);
                    }
                }
                func_020da574(*(void **)(trap + 0x20), e, skill4, buf4, 1);
                ((u8 *)data_02160244)[0x16f] = 1;
                func_020daa60(*(void **)(trap + 0x20), e, skill4, buf4, 10);
                ((u8 *)data_02160244)[0x16f] = 0;
                if (buf4 != NULL) {
                    func_0210c5dc(buf4);
                }
                if (*(s16 *)(e + 0x98) == 0) {
                    *(s16 *)(e + 0x98) = 8;
                    e[0xa2] |= 4;
                }
                func_02025f84(e, 0x89);
                func_020da8c0(e, 9);
                trap[0x1c] |= 8;
            }
            if (mode == 4) {
                (*data_02160244)[0x9c] = 1;
            }
            break;
        case 0x194:
            if (mode == 1 || mode == 3 || mode == 4) {
                *(u32 *)(*(u8 **)(e + 0x118) + 0x90) |= 1;
            }
            break;
        case 0x195:
        case 0x19d:
            if (mode == 1 || mode == 3 || mode == 4) {
                *(u32 *)(*(u8 **)(e + 0x118) + 0x90) |= 2;
            }
            break;
        case 0x196:
        case 0x19e:
            if (mode == 1 || mode == 3 || mode == 4) {
                *(u32 *)(*(u8 **)(e + 0x118) + 0x90) |= 4;
            }
            break;
        case 0x197:
        case 0x19f:
            if (flag == 0 && (mode == 1 || mode == 3 || mode == 4)) {
                func_02023148(*(void **)(*(u8 **)(trap + 0x24) + 0x2c), *(void **)(trap + 0x20), e, 0);
                flag = 1;
            }
            break;
        case 0x198:
        case 0x1a0:
            if (flag == 0 && (mode == 1 || mode == 3 || mode == 4)) {
                func_02023148(*(void **)(*(u8 **)(trap + 0x24) + 0x2c), *(void **)(trap + 0x20), e, 0);
                flag = 1;
            }
            break;
        case 0x199:
            if (flag == 0 && (mode == 0 || mode == 3)) {
                func_02023148(*(void **)(*(u8 **)(trap + 0x24) + 0x2c), *(void **)(trap + 0x20), e, 0);
                flag = 1;
            }
            break;
        case 0x1a1:
            if (flag == 0 && (mode == 0 || mode == 3)) {
                func_02023148(*(void **)(*(u8 **)(trap + 0x24) + 0x2c), *(void **)(trap + 0x20), e, 0);
                flag = 1;
            }
            break;
        case 0x19a:
            if (mode == 1 || mode == 3 || mode == 4) {
                *(u32 *)(*(u8 **)(e + 0x118) + 0x4) = 0;
            }
            break;
        case 0x19b:
        case 0x19c:
            if (flag == 0 && (mode == 1 || mode == 3 || mode == 4)) {
                func_02023148(*(void **)(*(u8 **)(trap + 0x24) + 0x2c), *(void **)(trap + 0x20), e, 0);
                flag = 1;
            }
            break;
        }
    }
}

