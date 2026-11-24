/* 9 functions from 0x0203C998 to 0x0203D970 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160098[2];
extern u32 data_02155c3c;

extern void *func_0210c594(u32, u32);
extern void func_021167ac(void *, s32);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void func_020020f8(void *, void *, void *);
extern void func_020f4668(void *);

extern u8 *data_02160a74;
extern u8 *data_02160110;
extern u8 *data_02160258;
extern BOOL func_020df03c(s32);
extern void func_020a5ce4(void *);
extern void func_020df38c(s32, s32);
extern void func_020de078(void);
extern void func_020df3f4(s32, s32);
extern void func_020e25fc(s32, s32, s32);
extern void func_020e26f0(s32, s32, s32);
extern void func_020d91bc(s32);
extern void func_020da0c8(s32);
extern void func_020e86c0(s32);
extern void func_020df0c0(void);

void func_0203d1d4(void) {
    u8 **ctx = &data_02160a74;
    void *p = *(void **)(*ctx + 0x94);
    if (func_020df03c(1) != 0) {
        func_020a5ce4(p);
        p = NULL;
        func_020df38c((s32)p, (s32)p);
        func_020de078();
        *(u32 *)(*ctx + 0x58) &= ~0x80000;
        *(u32 *)(*ctx + 0x58) &= ~0x2000;
        func_020df3f4((s32)p, (s32)p);
        (*ctx)[0x1c2] &= 0xfb;
        data_02160110[0xdc] |= 4;
        *(u32 *)(*ctx + 0x58) &= ~0x100000;
        func_020e25fc(8, (s32)p, (s32)p);
        func_020e26f0(7, (s32)p, 999);
        *(u32 *)(*ctx + 0x58) &= ~4;
        func_020d91bc(3);
        func_020da0c8(*(u16 *)(data_02160258 + 0x90));
        func_020e86c0(2);
        func_020df0c0();
    }
}
