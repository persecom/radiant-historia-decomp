/* 5 functions from 0x020D413C to 0x020D4EB8 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02155c3c;
extern void *func_0210c594(s32 arg0, u32 arg1);
extern void func_0210c5dc(void *arg0);
extern void func_021167ac(void *arg0, s32 arg1);
extern void func_021167f0(void *arg0, void *arg1);
extern void func_021168f8(void *arg0, void *arg1);
extern void func_02022454(void *arg0);
extern void func_0202bdbc(void *arg0);
extern void func_0203319c(void *arg0);

void *func_020d413c(void) {
    u8 *p = func_0210c594(0xb0, data_02155c3c);
    func_021167ac(p + 0x64, 8);
    func_021167ac(p + 0x58, 0xc);
    *(u32 *)(p + 0x24) = 0;
    *(u32 *)(p + 0x4) = 0;
    return p;
}

void func_020d4184(u8 *arg0) {
    func_02022454(arg0);
    while (*(void **)(arg0 + 0x58) != NULL) {
        void *node = *(void **)(arg0 + 0x58);
        func_021168f8(arg0 + 0x58, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
    if (*(void **)(arg0 + 0x54) != NULL) {
        func_0202bdbc(*(void **)(arg0 + 0x54));
        *(void **)(arg0 + 0x54) = NULL;
    }
    if (*(void **)(arg0 + 0x8c) != NULL) {
        func_0203319c(*(void **)(arg0 + 0x8c));
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

extern void *data_02160a6c;
extern void *data_02160244;
void func_020d4200(void) {
    extern void func_020d64e4(void *);
    extern u8 *func_0202c5a0(u8 *);
    extern void func_0205df48(u8 *);
    extern s32 func_0205b710(u8 *, s32);
    extern s32 func_020d3160(s32, s32, s32, s32);
    extern void func_0205bbd8(void *);
    extern void func_020d4eb8(void *);
    extern void func_0205ed94(void *);
    extern void func_020d907c(void *);
    extern void func_020d612c(s32, s32);
    extern void func_020d622c(void);
    extern void func_0205de08(u8 *);
    extern void func_020d9da8(s32);
    extern void func_020d9ea8(s32, s32);
    extern BOOL func_020da060(s32);
    extern void *func_0205bad4(void *);
    extern void func_0202bcd4(u32 *, s32);
    extern void func_020d9090(void);
    extern void func_0205d204(u8 *);
    extern void func_0205c520(u8 *);
    extern void func_0205c490(void *);
    extern void func_0205c404(void *);
    extern void func_0205c39c(u8 *);
    extern void func_0205c320(void *);
    extern void func_0205c314(void *);
    extern void func_0205d644(u8 *, s8, s8);
    extern void func_0205bce4(u8 *);
    extern void func_0205bed4(u8 *);
    extern void func_0205c04c(u8 *);
    extern void func_0205c21c(void *);
    extern void func_0205c65c(u8 *, s32);
    extern void func_0205c780(u8 *);
    extern void func_0205ca14(u8 *);
    extern void func_0205cafc(void *);
    extern void func_0205cbc0(u8 *);
    extern void func_0205cd64(u8 *);
    extern void func_0205cfa8(u8 *);
    extern void func_0205ee3c(u8 *, s32);
    extern void func_0205f6cc(u8 *);
    extern void func_0205fa44(u8 *);
    extern void *func_02033150(void);
    extern void func_020df3f4(void *, s32);
    extern void func_020df5dc(s32);
    extern s32 func_02036514(u8 *);
    extern void func_020333b8(void *);
    extern void func_0203909c(u8 *);
    extern void func_02037d1c(void *);
    extern void func_0203447c(u8 *);
    extern void func_0203a3b0(u8 *);
    extern s32 func_0203aae4(u8 *);
    extern void func_0205ebb0(u8 *);
    extern void func_0205ec78(u8 *);
    extern void func_020d91bc(s32);
    extern void func_020d9e7c(void);
    extern void func_020d9dc8(void *, u16, s32, s32);
    extern void func_020ddfd0(u8 *, s32);
    extern void func_020d6048(s32);
    extern void func_020de0a8(u8 *);
    extern void func_020da1c0(void);
    extern void func_02061a20(void);
    extern u8 *data_02160260;
    extern s32 data_02162814;

    u8 *root = (u8 *)data_02160a6c;
    u8 *actor;
    if (root == NULL) {
        return;
    }

    actor = *(u8 **)(root + 0x70);
    while (actor != NULL) {
        u8 *next = *(u8 **)(actor + 0x13c);
        u8 *work = *(u8 **)(actor + 0x128);
        u8 *mgr = (u8 *)data_02160244;
        u8 *info = *(u8 **)(actor + 0x118);
        u8 *battle = *(u8 **)mgr;
        s32 active = 1;
        if (info[0] != 0) {
            active = 0;
        }
        if (battle[0x8d] != 0) {
            active = 0;
        }
        if (active != 0) {
            u32 state = *(u32 *)(work + 0x24);
            switch (state) {
            case 1: {
                u8 *pos;
                func_020d64e4(actor);
                pos = func_0202c5a0(actor);
                *(s32 *)(actor + 0x18) = *(s32 *)(pos + 0);
                *(s32 *)(actor + 0x1c) = *(s32 *)(pos + 4);
                *(s32 *)(actor + 0x20) = *(s32 *)(pos + 8);
                break;
            }
            case 0x14: {
                if (*(u16 *)(battle + 0x3e) == *(s16 *)(work + 0x52) - 1) {
                    u8 *node = *(u8 **)((u8 *)data_02160a6c + 0xb8);
                    s32 count = 0;
                    while (node != NULL) {
                        u8 *detail = *(u8 **)(node + 0x118);
                        if (*(u32 *)(detail + 0x70) != 0) {
                            u16 phase = **(u16 **)(node + 0x124);
                            if (phase != 0 && phase != 3) {
                                count++;
                            }
                        }
                        node = *(u8 **)(node + 0x174);
                    }
                    if (count == 0) {
                        func_0205df48(actor);
                    }
                }
                if (*(s16 *)(work + 0x52) == 100) {
                    *(u32 *)(work + 0x24) = 0;
                }
                break;
            }
            case 0x3c: {
                u8 *entry;
                u8 *command;
                u8 mode;
                battle[0x6c] = 8;
                battle = *(u8 **)data_02160244;
                if (*(u16 *)(battle + 0x3e) != *(s16 *)(work + 0x52) - 1 ||
                    *(u32 *)(battle + 0xc) != 4) {
                    break;
                }
                func_0205b710(actor, 0x98);
                func_0205b710(actor, 0x99);
                entry = *(u8 **)(work + 0xc);
                command = *(u8 **)(work + 8);
                if (*(u16 *)(entry + 0x30) == 0 &&
                    (mode = command[7], mode != 8) && command[0] != 3 && command[0] != 5 &&
                    command[0] != 9 && command[0] != 4 &&
                    (*(u32 *)(work + 0x18) & 8) == 0 &&
                    (*(u16 *)(entry + 0xe) & 0x200) == 0) {
                    if (mode != 8) {
                        ((u8 *)data_02160244)[0x144] = 0;
                        func_020d3160(7, 0, 0, 0);
                        func_020d3160(0, 0, 0, 0);
                    }
                    battle = *(u8 **)data_02160244;
                    battle[0x39] = *(u16 *)(battle + 0x3e) + 1;
                    *(u32 *)(work + 0x24) = 0x3d;
                    {
                        u8 *node = *(u8 **)((u8 *)data_02160a6c + 0xac);
                        while (node != NULL) {
                            u8 *sub = *(u8 **)(node + 0x128);
                            if (node != actor) {
                                *(s16 *)(sub + 0x52) = 100;
                            } else {
                                *(s16 *)(sub + 0x52) = -1;
                            }
                            sub[0x50] = 0;
                            func_02022454(sub);
                            node = *(u8 **)(node + 0x16c);
                        }
                    }
                } else {
                    *(u32 *)(work + 0x24) = 0x3d;
                }
                break;
            }
            case 0x3d: {
                if ((*(u16 *)(*(u8 **)(work + 0xc) + 0xe) & 0x200) == 0 &&
                    (*(u32 *)(work + 0x18) & 8) == 0) {
                    if (info[0] == 0) {
                        if (*(u32 *)(actor + 0x80) & 0x20000) {
                            *(u32 *)(actor + 0x80) &= ~0x20000;
                            *(u16 *)(*(u8 **)(actor + 0x118) + 0xbc) = 0;
                        }
                    }
                    func_0205bbd8(work);
                    func_020d4eb8(actor);
                    func_0205ed94(work);
                    if ((*(u8 **)(work + 8))[0x1e] & 1) {
                        (*(u8 **)data_02160244)[0x6c] = 1;
                        func_020d907c(actor);
                    }
                } else if (*(u32 *)(info + 0x78) & 0x34) {
                    if (info[0] == 0) {
                        if (*(u32 *)(actor + 0x80) & 0x20000) {
                            *(u32 *)(actor + 0x80) &= ~0x20000;
                            *(u16 *)(*(u8 **)(actor + 0x118) + 0xbc) = 0;
                        }
                    }
                    func_0205bbd8(work);
                    func_020d4eb8(actor);
                    func_0205ed94(work);
                    if ((*(u8 **)(work + 8))[0x1e] & 1) {
                        (*(u8 **)data_02160244)[0x6c] = 1;
                        func_020d907c(actor);
                    }
                } else {
                    if (info[0] == 0) {
                        if (*(u32 *)(actor + 0x80) & 0x20000) {
                            *(u32 *)(actor + 0x80) &= ~0x20000;
                            *(u16 *)(*(u8 **)(actor + 0x118) + 0xbc) = 0;
                        }
                    }
                    *(u32 *)(work + 0x24) = 0x390;
                    *(u16 *)(work + 0x1c) = 0;
                }
                break;
            }
            case 0xa:
            case 0xb: {
                s32 elapsed = *(s32 *)(work + 0x14) + 1;
                *(s32 *)(work + 0x14) = elapsed;
                if (elapsed > *(s32 *)(work + 0x30)) {
                    func_020d4eb8(actor);
                }
                break;
            }
            case 0x388: {
                s32 elapsed = *(s32 *)(work + 0x14) + 1;
                *(s32 *)(work + 0x14) = elapsed;
                if (elapsed > *(s32 *)(work + 0x30)) {
                    func_020d612c(0, 0);
                    func_020d622c();
                    *(u32 *)(work + 0x24) = 0x12b;
                }
                break;
            }
            case 0xc:
                func_0205de08(actor);
                break;
            case 0x258:
                func_020d9da8(0x20);
                func_020d9ea8(8, 0x30);
                if (func_020da060(0x18) != 0) {
                    func_020d4eb8(actor);
                }
                break;
            case 0x259: {
                s32 count;
                s32 height = 0;
                u8 *node;
                count = 0;
                node = func_0205bad4(work);
                while (node != NULL) {
                    u8 *obj = *(u8 **)node;
                    node = *(u8 **)(node + 0x18);
                    if (obj != NULL) {
                        count++;
                        height += *(s32 *)(obj + 4);
                    }
                }
                if (count == 0) {
                    height = 0x18000;
                } else {
                    height /= count;
                }
                func_0202bcd4((u32 *)(work + 0x44), *(u32 *)(work + 0x30) & 0xff);
                *(s32 *)(work + 0x44) -= 0x11000;
                *(s32 *)(work + 0x48) = height;
                func_020d907c(work + 0x44);
                func_020d9090();
                if (count >= 2 || height >= 0x20000) {
                    if (func_020da060((s16)((u32)height >> 12)) != 0) {
                        func_020d4eb8(actor);
                    }
                } else {
                    if (func_020da060(0x18) != 0) {
                        func_020d4eb8(actor);
                    }
                }
                break;
            }
            case 0x64:
                func_0205d204(actor);
                break;
            case 0xfa:
                func_0205c520(actor);
                break;
            case 0x67:
                func_0205c490(actor);
                break;
            case 0x68:
                func_0205c404(actor);
                break;
            case 0x69:
                func_0205c39c(actor);
                break;
            case 0x6a:
                func_0205c320(actor);
                break;
            case 0x8c:
                func_0205c314(actor);
                break;
            case 0x96:
                break;
            case 0xbe:
                func_0205d644(actor, 0, 0);
                break;
            case 0x12b:
                func_0205bce4(actor);
                break;
            case 0x12c:
                func_0205bed4(actor);
                break;
            case 0x38a:
                func_0205c04c(actor);
                break;
            case 0x393:
                func_0205c21c(actor);
                break;
            case 0x38e:
            case 0x38f:
            case 0x390:
            case 0x391:
                func_0205c65c(work, (u16)state);
                break;
            case 0x46:
                func_0205c780(actor);
                break;
            case 0x47:
                func_0205ca14(actor);
                break;
            case 0x389:
                func_0205cafc(actor);
                break;
            case 0x190:
                func_0205cbc0(actor);
                break;
            case 0x191:
                func_0205cd64(actor);
                break;
            case 0x192:
                func_0205cfa8(actor);
                break;
            case 0x1f4:
                func_0205ee3c(actor, 0);
                break;
            case 0x1f5:
                func_0205f6cc(actor);
                break;
            case 0x1f6:
                func_0205fa44(actor);
                break;
            case 0x320: {
                u8 *node = func_0205bad4(work);
                while (node != NULL) {
                    u8 *obj = *(u8 **)node;
                    if (obj != NULL && *(u8 **)(obj + 0x118) != NULL) {
                        u8 *sub = *(u8 **)(obj + 0x124);
                        if (sub != NULL) {
                            sub[0x12] = 1;
                        }
                    }
                    node = *(u8 **)(node + 0x18);
                }
                *(u32 *)(work + 0x24) = 0x321;
                break;
            }
            case 0x321: {
                mgr[0x10c] = 1;
                if (*(void **)(work + 0x8c) == NULL) {
                    *(void **)(work + 0x8c) = func_02033150();
                    func_020df3f4(NULL, 3);
                    func_020df5dc(1);
                    ((u8 *)data_02160244)[0x15c] = 1;
                }
                switch (*(u16 *)(actor + 0x8c)) {
                case 1:
                    func_02036514(actor);
                    break;
                case 2:
                    func_020333b8(actor);
                    break;
                case 4:
                    func_0203909c(actor);
                    break;
                case 5:
                    func_02037d1c(actor);
                    break;
                case 3:
                    func_0203447c(actor);
                    break;
                case 8:
                    func_0203a3b0(actor);
                    break;
                case 7:
                    func_0203aae4(actor);
                    break;
                }
                if (*(u8 **)(work + 0x8c) != NULL && **(u16 **)(work + 0x8c) == 0x1a) {
                    u8 *node = func_0205bad4(work);
                    while (node != NULL) {
                        u8 *obj = *(u8 **)node;
                        if (obj != NULL && *(u8 **)(obj + 0x118) != NULL) {
                            u8 *sub;
                            obj[0x192] = 0;
                            *(u32 *)(obj + 0x64) = 0;
                            sub = *(u8 **)(obj + 0x124);
                            if (sub != NULL) {
                                sub[0x12] = 0;
                            }
                        }
                        node = *(u8 **)(node + 0x18);
                    }
                    ((u8 *)data_02160244)[0x10c] = 0;
                    ((u8 *)data_02160244)[0x10d] = 0;
                    func_0203319c(*(void **)(work + 0x8c));
                    *(u16 *)(work + 0x1e) |= 0x140;
                    *(u32 *)(work + 0x24) = 0x12b;
                    *(void **)(work + 0x8c) = NULL;
                    func_020df3f4(NULL, 0);
                    func_020df5dc(0);
                    ((u8 *)data_02160244)[0x15c] = 0;
                }
                break;
            }
            case 0x384:
                func_0205ebb0(actor);
                break;
            case 0x387:
                func_0205ec78(actor);
                break;
            case 0x385: {
                s32 elapsed;
                if (battle[0x3c] == 0) {
                    func_020d91bc(6);
                    func_020d9e7c();
                    func_020d9dc8(actor, *(u16 *)(actor + 0x90), 0x10, 0);
                    func_020d9090();
                    *(u32 *)(*(u8 **)data_02160244 + 0xc) = 0x15;
                    func_020ddfd0(actor, 1);
                }
                elapsed = *(s32 *)(work + 0x14) + 1;
                *(s32 *)(work + 0x14) = elapsed;
                if (elapsed > 8) {
                    *(s32 *)(work + 0x14) = 0;
                    *(u16 *)(work + 0x10) += 1;
                }
                if (*(volatile u16 *)(work + 0x10) == 2 && actor[0x104] != 7 &&
                    (*(u32 *)(work + 0x18) & 4) == 0) {
                    func_020ddfd0(actor, 1);
                }
                battle = *(u8 **)data_02160244;
                if (battle[0x3c] == 1 && *(u16 *)(work + 0x10) > 2) {
                    if (*(u32 *)(work + 0x18) & 4) {
                        *(u32 *)(battle + 0xc) = 0x16;
                        *(u32 *)(work + 0x24) = 0;
                    } else {
                        if (*(u32 *)(data_02160260 + 0x88) != 0) {
                            func_020d6048(7);
                        } else {
                            func_020d6048(6);
                        }
                        *(s32 *)(work + 0x14) = 0;
                        *(u32 *)(work + 0x24) = 0x392;
                    }
                }
                break;
            }
            case 0x392: {
                s32 elapsed = *(s32 *)(work + 0x14) + 1;
                *(s32 *)(work + 0x14) = elapsed;
                if (elapsed > 0x20) {
                    *(u32 *)(*(u8 **)data_02160244 + 0xc) = 0xc;
                    func_020ddfd0(actor, 0);
                    func_020de0a8(actor);
                    *(u16 *)(work + 0x1e) |= 0x100;
                    *(u32 *)(work + 0x24) = 0x12b;
                    *(s32 *)(work + 0x14) = 0;
                    *(u16 *)(work + 0x10) = 0;
                    (*(u8 **)data_02160244)[0x3c] = 0;
                }
                break;
            }
            default:
                break;
            }
            {
                u8 *parent = *(u8 **)(actor + 0x1a4);
                if (parent != NULL) {
                    *(s32 *)(actor + 0x1a8) = *(s32 *)(actor + 0) + *(s32 *)(parent + 0x18);
                    *(s32 *)(actor + 0x1ac) = *(s32 *)(actor + 4) + *(s32 *)(parent + 0x1c);
                    *(s32 *)(actor + 0x1b0) = *(s32 *)(actor + 8) + *(s32 *)(parent + 0x20);
                } else {
                    *(s32 *)(actor + 0x1a8) = *(s32 *)(actor + 0);
                    *(s32 *)(actor + 0x1ac) = *(s32 *)(actor + 4);
                    *(s32 *)(actor + 0x1b0) = *(s32 *)(actor + 8);
                }
            }
        }
        actor = next;
    }
    {
        u8 *battle;
        u8 *mgr;
        func_020da1c0();
        func_02061a20();
        battle = *(u8 **)data_02160244;
        if (battle[0x8d] != 0) {
            battle[0x8d]--;
            battle = *(u8 **)data_02160244;
            if (battle[0x8d] < 0x19) {
                battle[0x6c] = battle[0x6d];
                func_020d907c(*(u8 **)data_02160244 + 0x90);
                func_020d9090();
            }
        }
        mgr = (u8 *)data_02160244;
        if ((mgr[0x11a] & 1) != 0) {
            if (*(s16 *)(mgr + 0x11c) == 0) {
                s32 value = data_02162814 + 1;
                data_02162814 = value;
                if (value > 16) {
                    data_02162814 = 16;
                    *(s16 *)(mgr + 0x11c) = 1;
                }
            } else {
                s32 value = data_02162814 - 1;
                data_02162814 = value;
                if (value < 0) {
                    data_02162814 = 0;
                    *(s16 *)(mgr + 0x11c) = 0;
                    ((u8 *)data_02160244)[0x11a] &= 0xfe;
                }
            }
        }
    }
}

void func_020d4e54(u8 *arg0, void *arg1, void *arg2) {
    u8 *base = *(u8 **)(arg0 + 0x128);
    u8 *p = func_0210c594(0x14, data_02155c3c);
    *(void **)p = arg1;
    *(void **)(p + 0x8) = arg2;
    func_021167f0(base + 0x58, p);
}

void func_020d4e90(u8 *arg0, void *arg1) {
    func_021168f8(*(u8 **)(arg0 + 0x128) + 0x58, arg1);
    if (arg1 != NULL) {
        func_0210c5dc(arg1);
    }
}
