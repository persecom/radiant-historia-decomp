/* 12 functions from 0x02054E14 to 0x02055E14 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    void *f0;
    u32 f4[4];
} UnkEntry_02055c90;

typedef struct {
    UnkEntry_02055c90 entries[2];
} UnkData_02055c90;

extern u8 *data_021600ac;
extern u8 *data_021600c0;
extern u32 data_02155c3c;
extern const UnkData_02055c90 data_0213f31c;
extern char data_02146550[];

extern void func_02002128(void *, void *, void *);
extern s32 func_02002388(void *, void *);
extern void func_02002274(void *, void *);
extern void func_020020f8(void *, void *, void *);
extern void *func_0210c594(u32, u32);
extern void func_0210d9e4(void *);
extern void func_021167ac(void *, s32);
extern void func_02055994(void);
extern void func_02055bac(void);
extern void func_02055c90(s32);
extern void func_02055ebc(void);
extern void func_02005e80(void *, const char *, ...);
extern void func_02055d28(void *, u16);
extern void func_02124e68(void *);
extern void func_0212501c(void *);
