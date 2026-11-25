/* 20 functions from 0x0200A980 to 0x0200B8FC (main), found by ds-decomp. */
#include "common.h"
typedef struct CmdPair_0200a980 { u32 a,b; } CmdPair_0200a980;
typedef struct CmdTriple_0200a980 { u32 a,b,c; } CmdTriple_0200a980;
extern s32 func_0200a85c(s32);
extern s32 func_0200a928(void *, s32);

void func_0200b888(u32 *arg0);
u8 *func_0200b6b8(u8 *arg0);
extern s32 func_0200a980(void *, s32);
extern u32 func_02008128(void);
extern void func_02006560(void *);
extern void func_0200813c(u32);
extern void func_0200a884();
extern s32 func_0200ad00(void *, s32);
extern void func_0200aeac();
extern void func_02008f74(void *, s32, s32);
extern s32 func_020124a8(s32, u8 *, s8 *);
extern u8 *data_0215ed68;
extern char data_02145c00[];
s32 func_0200b810(const char *str, s32 pos);
s32 func_0200b844(char *str);
extern s8 data_0215ed78[0x100];
extern s32 func_02012348(const char *);
s32 func_0200b77c(const char *str, s32 pos);

#pragma opt_propagation off

#pragma opt_propagation reset

extern s8 data_0215ee78[0x104];
extern u8 *func_0200b2ac(const char *, u32 *, u8 *);
extern void func_02012244(void *, void *, s32);
extern s32 func_0200afb4(void *, s32, s32);

s32 func_0200b24c(char *dst, s32 dst_len, const char *src, s32 src_len, s32 *truncated);
u8 *func_0200b0ec(u8 *arg0, s8 *arg1);

#pragma optimization_level 4

s32 func_0200b5b8(u8 *arg0, s8 *arg1, u32 arg2) {
    s32 ret = 0;
    u32 lock = func_02008128();
    if (func_0200b0ec(arg1, arg2) == NULL) {
        volatile u8 *cur = data_0215ed68;
        volatile u8 **slot = &data_0215ed68;
        while (cur != NULL) {
            slot = (volatile u8 **)(cur + 4);
            cur = *(u8 **)(cur + 4);
        }
        *slot = arg0;
        if (arg2 <= 3) {
            *(u32 *)arg0 = 0;
            func_02012244(arg0, arg1, arg2 + 1);
        } else if (arg2 <= 0xf) {
            s32 i;
            for (i = 0; ; i++) {
                if (i >= 0x10) {
                    func_02008414();
                } else if (((s8 (*)[16])data_0215ed78)[i][0] == 0) {
                    func_02012244(((s8 (*)[16])data_0215ed78)[i], arg1, arg2 + 1);
                    *(void **)arg0 = ((s8 (*)[16])data_0215ed78)[i];
                    break;
                }
            }
        } else {
            func_02008414();
        }
        *(u32 *)(arg0 + 0x14) |= 1;
        ret = 1;
    }
    func_0200813c(lock);
    return ret;
}
u8 *func_0200b6b8(u8 *arg0) {
    if (*(s8 *)(arg0 + 3) != 0) {
        return *(u8 **)(arg0 + 0);
    }
    return arg0;
}
