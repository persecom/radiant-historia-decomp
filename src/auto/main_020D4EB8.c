/* 2 functions from 0x020D4EB8 to 0x020D56D8 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160a74,*data_02160244,*data_02160080;
extern s32 func_02026ca4(void *);
extern void func_02026cac(void *),func_02026c94(void *);
extern u8 *func_02026c58(void *);
extern void func_020b52f4(s32),func_020a5ce4(void *),func_020a9544(void *);
extern void func_020e1ec8(void *,s32),func_020a8810(void *,s32);
extern void func_020e269c(void *,void *,s32);

extern void func_020d9e7c(void);
extern void func_020ddfd0(u8 *, s32);
extern void func_020dd810(void *, s32, s32);
void func_020d5648(u8 *,u8 *);
void func_020d4eb8(u8 *self) {
    u8 *state = *(u8 **)(self + 0x128);
    u8 *cmd;
    if (!*(void **)(self + 0x120)) return;
    if ((**(u8 **)(self + 0x118)) == 0) {
        if (!func_02026ca4(*(void **)(self + 0x120))) {
            u8 *actor = *(u8 **)(state + 8);
            if (actor) {
                switch (actor[20]) {
                case 1:
                case 2: {
                    u8 *ctx;
                    func_020b52f4(1);
                    if (actor[0] == 5) {
                        ctx = *(u8 **)(data_02160a74 + 0x94);
                        func_020a5ce4(ctx);
                        func_020a9544(*(void **)ctx);
                        func_020e1ec8(ctx, 1);
                        func_020a8810(*(void **)(ctx + 4), 22);
                        func_020e269c(ctx, actor, 0);
                    } else {
                        ctx = *(u8 **)(data_02160a74 + 0x94);
                        func_020a5ce4(ctx);
                        func_020a9544(*(void **)ctx);
                        func_020e1ec8(ctx, 0);
                        func_020a8810(*(void **)(ctx + 4), 22);
                        func_020e269c(ctx, actor, 0);
                    }
                } break;
                }
            }
        }
        if (func_02026ca4(*(void **)(self + 0x120))) func_02026cac(*(void **)(self + 0x120));
        cmd = func_02026c58(*(void **)(self + 0x120));
        state[0xa6] = 0;
        switch (*(u16 *)cmd) {
        case 1: *(s32 *)(state + 36) = 100; *(s32 *)(state + 48) = *(s32 *)(cmd + 4); *(s32 *)(state + 52) = *(s32 *)(cmd + 8); *(s32 *)(state + 56) = *(s32 *)(cmd + 12); *(s32 *)(state + 60) = *(s32 *)(cmd + 16); break;
        case 30: *(s32 *)(state + 36) = 250; *(s32 *)(state + 48) = *(s32 *)(cmd + 4); *(s32 *)(state + 52) = *(s32 *)(cmd + 8); break;
        case 2: *(s32 *)(state + 36) = 101; break;
        case 3: *(s32 *)(state + 36) = 11; *(s32 *)(state + 48) = *(s32 *)(cmd + 4); break;
        case 34: *(s32 *)(state + 36) = 904; *(s32 *)(state + 48) = *(s32 *)(cmd + 4); break;
        case 4: *(s32 *)(state + 36) = 190; *(s32 *)(state + 48) = *(s32 *)(cmd + 4); *(s32 *)(state + 52) = *(s32 *)(cmd + 8); *(u16 *)(state + 144) = *(s32 *)(cmd + 12); break;
        case 5: *(s32 *)(state + 36) = 299; break;
        case 22: *(s32 *)(state + 36) = 70; *(s32 *)(state + 48) = *(s32 *)(cmd + 4); *(s32 *)(state + 52) = *(s32 *)(cmd + 8); *(u16 *)(state + 144) = *(s32 *)(cmd + 12); break;
        case 25: *(s32 *)(state + 36) = 71; *(s32 *)(state + 48) = *(s32 *)(cmd + 4); *(s32 *)(state + 52) = *(s32 *)(cmd + 8); break;
        case 9: *(s32 *)(state + 36) = 12; *(s32 *)(state + 52) = *(s32 *)(cmd + 8); break;
        case 10: *(s32 *)(state + 36) = 600; break;
        case 35: *(s32 *)(state + 36) = 601; *(s32 *)(state + 48) = *(s32 *)(cmd + 4); break;
        case 12: *(s32 *)(state + 36) = *(s32 *)(cmd + 4); if (*(s32 *)(cmd + 8) > -1) { *(s32 *)(state + 48) = *(s32 *)(cmd + 8); } if (*(s32 *)(cmd + 12) > -1) { *(s32 *)(state + 52) = *(s32 *)(cmd + 12); } if (*(s32 *)(cmd + 16) > -1) { *(s32 *)(state + 56) = *(s32 *)(cmd + 16); } break;
        case 13: *(s32 *)(state + 36) = 500; *(s32 *)(state + 48) = *(s32 *)(cmd + 4); *(s32 *)(state + 52) = *(s32 *)(cmd + 8); *(u16 *)(state + 144) = *(s32 *)(cmd + 12); if (*(u32 *)(cmd + 20) & 8) *(u16 *)(state + 64) |= 2; break;
        case 14: *(s32 *)(state + 36) = 501; *(s32 *)(state + 48) = *(s32 *)(cmd + 4); *(s32 *)(state + 52) = *(s32 *)(cmd + 8); *(u16 *)(state + 144) = *(s32 *)(cmd + 12); if (*(u32 *)(cmd + 20) & 8) *(u16 *)(state + 64) |= 2; break;
        case 32: *(s32 *)(state + 36) = 502; *(s32 *)(state + 48) = *(s32 *)(cmd + 4); *(s32 *)(state + 52) = *(s32 *)(cmd + 8); *(s32 *)(state + 60) = *(s32 *)(cmd + 16); *(u16 *)(state + 144) = *(s32 *)(cmd + 12); if (*(u32 *)(cmd + 20) & 8) *(u16 *)(state + 64) |= 2; break;
        case 15: data_02160244[0x15c] = 1; *(s32 *)(state + 36) = 800; break;
        case 29: *(s32 *)(state + 36) = 600; *(u16 *)(state + 164) = *(s32 *)(cmd + 4); break;
        default: if (*(s32 *)(cmd + 4) > -1) { *(s32 *)(state + 36) = *(s32 *)(cmd + 4); } break;
        }
        func_020d5648(self, cmd);
        func_02026c94(*(void **)(self + 0x120));
    } else if ((**(u8 **)(self + 0x118)) == 1) {
        if (!func_02026ca4(*(void **)(self + 0x120))) {
            u8 *actor = *(u8 **)(state + 8);
            if (actor) {
                switch (actor[20]) {
                case 1:
                case 2: {
                    u8 *ctx;
                    if (actor[0] == 5) {
                        ctx = *(u8 **)(data_02160a74 + 0x94);
                        func_020b52f4(1);
                        func_020a5ce4(ctx);
                        func_020a9544(*(void **)ctx);
                        func_020e1ec8(ctx, 1);
                        func_020a8810(*(void **)(ctx + 4), 22);
                        func_020e269c(ctx, actor, 0);
                    } else if (*(u16 *)(data_02160080 + 0x16) == 0) {
                        ctx = *(u8 **)(data_02160a74 + 0x94);
                        func_020b52f4(1);
                        func_020a5ce4(ctx);
                        func_020a9544(*(void **)ctx);
                        func_020e1ec8(ctx, 0);
                        func_020a8810(*(void **)(ctx + 4), 22);
                        func_020e269c(ctx, actor, 0);
                    } else if (*(u16 *)(data_02160080 + 0x16) != 0) {
                        ctx = *(u8 **)(data_02160a74 + 0x94);
                        func_020b52f4(1);
                        func_020a5ce4(ctx);
                        func_020a9544(*(void **)ctx);
                        func_020e1ec8(ctx, 0);
                        func_020a8810(*(void **)(ctx + 4), 22);
                        func_020e269c(ctx, actor, *(u16 *)(data_02160080 + 0x42));
                    }
                } break;
                }
            }
        }
        if (func_02026ca4(*(void **)(self + 0x120))) func_02026cac(*(void **)(self + 0x120));
        cmd = func_02026c58(*(void **)(self + 0x120));
        if (!cmd) return;
        switch (*(u16 *)cmd) {
        case 1: *(s32 *)(state + 36) = 1020; *(s32 *)(state + 48) = *(s32 *)(cmd + 4); *(s32 *)(state + 52) = *(s32 *)(cmd + 8); *(s32 *)(state + 56) = *(s32 *)(cmd + 12); *(s32 *)(state + 60) = *(s32 *)(cmd + 16); break;
        case 4: *(s32 *)(state + 36) = 1030; *(s32 *)(state + 48) = *(s32 *)(cmd + 4); *(s32 *)(state + 52) = *(s32 *)(cmd + 8); *(u16 *)(state + 144) = *(s32 *)(cmd + 12); break;
        case 18: *(s32 *)(state + 36) = 1040; break;
        case 19: *(s32 *)(state + 36) = 1050; break;
        case 20: *(s32 *)(state + 36) = 1060; *(s32 *)(state + 48) = *(s32 *)(cmd + 4); *(s32 *)(state + 52) = *(s32 *)(cmd + 8); *(u16 *)(state + 144) = *(s32 *)(cmd + 12); break;
        case 21: *(s32 *)(state + 36) = 1070; break;
        case 22: *(s32 *)(state + 36) = 1031; *(s32 *)(state + 48) = *(s32 *)(cmd + 4); *(s32 *)(state + 52) = *(s32 *)(cmd + 8); *(u16 *)(state + 144) = *(s32 *)(cmd + 12); break;
        case 23: *(s32 *)(state + 36) = 1033; *(s32 *)(state + 48) = *(s32 *)(cmd + 4); *(s32 *)(state + 52) = *(s32 *)(cmd + 8); *(u16 *)(state + 144) = *(s32 *)(cmd + 12); break;
        case 25: *(s32 *)(state + 36) = 1032; *(s32 *)(state + 48) = *(s32 *)(cmd + 4); *(s32 *)(state + 52) = *(s32 *)(cmd + 8); break;
        case 13:
        case 14:
            if (*(u16 *)cmd == 13) {
                *(s32 *)(state + 36) = 1080;
            } else if (*(u16 *)cmd == 14) {
                *(s32 *)(state + 36) = 1081;
                *(u16 *)(state + 164) = 0;
            }
            *(s32 *)(state + 48) = *(s32 *)(cmd + 4);
            *(s32 *)(state + 52) = *(s32 *)(cmd + 8);
            *(u16 *)(state + 144) = *(s32 *)(cmd + 12);
            if (*(u32 *)(cmd + 20) & 8) *(u16 *)(state + 64) |= 2;
            break;
        case 16: *(s32 *)(state + 36) = 1401; *(s32 *)(state + 48) = *(s32 *)(cmd + 4); *(s32 *)(state + 52) = *(s32 *)(cmd + 8); break;
        case 17: *(s32 *)(state + 36) = 1603; *(s32 *)(state + 48) = *(s32 *)(cmd + 4); break;
        case 3: *(s32 *)(state + 36) = 1602; *(s32 *)(state + 48) = *(s32 *)(cmd + 4); break;
        case 11: *(s32 *)(state + 36) = 1604; break;
        case 26: *(s32 *)(state + 36) = 1602; *(s32 *)(state + 48) = 1; data_02160244[0x11a] |= 1; break;
        case 27: *(s32 *)(state + 36) = 1602; *(s32 *)(state + 48) = 1; (*(u8 **)data_02160244)[0x6c] = 3; break;
        case 28: *(s32 *)(state + 36) = 1602; *(s32 *)(state + 48) = 1; *(s32 *)(state + 152) = *(s32 *)(cmd + 4) << 12; *(s32 *)(state + 156) = *(s32 *)(cmd + 8) << 12; *(s32 *)(state + 160) = *(s32 *)(cmd + 12) << 12; break;
        case 29: *(s32 *)(state + 36) = 1603; *(s32 *)(state + 48) = 1; *(u16 *)(state + 164) = *(s32 *)(cmd + 4); break;
        case 33: *(s32 *)(state + 36) = 7001; *(s32 *)(state + 48) = 0; *(s32 *)(state + 52) = (s16)*(s32 *)(cmd + 4); *(s32 *)(state + 56) = (s16)*(s32 *)(cmd + 8); break;
        }
        func_020d5648(self, cmd);
        func_02026c94(*(void **)(self + 0x120));
    }
}

void func_020d5648(u8 *arg0, u8 *arg1) {
    u8 *p = *(u8 **)(arg0 + 0x128);
    s32 v;
    if (*(u32 *)(arg1 + 0x14) != 0) {
        if (*(u32 *)(arg1 + 0x14) & 1) {
            func_020d9e7c();
        }
        if (*(u32 *)(arg1 + 0x14) & 2) {
            func_020ddfd0(arg0, 1);
        }
        if (*(u32 *)(arg1 + 0x14) & 4) {
            *(u16 *)(p + 0x40) |= 1;
        }
    }
    v = *(s16 *)(arg1 + 0x18);
    if (v > -1) {
        if ((*(u32 *)(*(u8 **)(arg0 + 0x118) + 0x78) & 0x30) == 0) {
            func_020dd810(arg0, v & 0xff, 0);
        }
    }
    *(u16 *)(p + 0x1c) = 0;
    *(u32 *)(p + 0x14) = 0;
}
