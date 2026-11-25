/* 27 functions from 0x02020C58 to 0x02021C48 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160204;
typedef struct { u8 value:1; u8 rest:7; } SaveFlag_02021ac4;

extern void func_021072d0(u32, u32, u32);
extern u32 func_02107294(void);
extern void func_02107334(u32, u32, u32);
extern void func_020106a0(void);
extern u32 func_0200f984(void);
extern void func_0210d220(void);
s32 func_02021284(void);
void func_02021618(void);

extern void (*ARM9_CTOR_START[])(void);
extern u32 *data_02162730;
extern u32 func_021155c8(u32);
extern void func_0210d85c(s32);
extern u32 func_021154a4(u32);
extern void func_021154f4(u32, u32);
extern void func_021156bc(s32, u32);
extern void func_021160c0(void *, s32, s32);
extern void func_0210d114(u32, void *);
extern void func_0211568c(s32, u32);
extern u8 data_02145fc8[];
extern void *data_02155c80;
extern s32 data_02160050;
extern u32 data_02160054[];
extern u8 data_02160064[];
extern u32 *data_02160078;
extern u32 *data_021626f0;
extern void func_020213c4(void *, s32, u32);
extern void func_0210d9e4(u8 *);
extern void func_0210da14(void *);
void func_020211f0(void *arg0, s32 arg1);
void func_0202147c(s32 arg0);
void func_02021514(void);
void func_02021bd0(s32);

extern s32 func_0210723c(void);
extern void func_0210d9e4(u8 *);
#pragma optimization_level 3

s32 func_02021428(u16 *arg) {
    data_02160054[4] = (u32)arg;
    data_02160054[5] = 1000;
    func_0210d9e4(data_02160064);
    data_02160054[3] = 1;
    data_02160054[1] = 0;
    {
        u32 **pp = &data_021626f0;
        u32 *p = *pp;
        if (p != NULL) {
            u32 v = *p;
            data_02160054[0] = v;
            *p = 0;
            return (s32)v;
        }
        return (s32)pp;
    }
}
#pragma optimization_level reset
