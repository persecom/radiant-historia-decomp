/* 4 functions from 0x02057AE4 to 0x02058A08 (main), found by ds-decomp. */
#include "common.h"
extern u8 *func_020bd438(u8);
extern u8 *func_02021f10(u8);
extern void func_02057a18(u16,u16,s32);
extern void *func_020f4d40(s32);
extern f32 func_0201f884(s32),func_0201f8cc(u32);
extern f32 func_020201f4(f32,f32),func_02020888(f32,f32),func_02020604(f32,f32);
extern s32 func_0201ff0c(f32);
void *func_0205817c(u32);


extern u8 *data_021600ac;
void *func_0205817c(u32 arg0) {
    u8 *root = data_021600ac;
    u8 *node = *(u8 **)(root + 0x8c4);
    while (node != NULL) {
        if (*(u32 *)(node + 0x48) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x3c);
    }
    return NULL;
}
