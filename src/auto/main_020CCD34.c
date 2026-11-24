/* 7 functions from 0x020CCD34 to 0x020CDCE8 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160238;

void func_020cd0ac(void) {
}

void *func_020cda08(u32 mode, u16 arg1) {
    u8 *node;
    if (mode == 1) {
        node = *(u8 **)(data_02160238 + 0x740);
    } else if (mode == 2) {
        node = *(u8 **)(data_02160238 + 0x74c);
    } else {
        return NULL;
    }
    while (node != NULL) {
        if (*(u16 *)node == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x30);
    }
    return NULL;
}

extern void func_020a994c(void *);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
extern void func_0203bc34(void *, void *, void *, int, int, int);
extern void func_020a9610(void *, void *, void *, void *, int, int);
void func_020cda64(int index, int x, int y, int z, u8 slot, void *arg, u8 mode, int a, int b) {
u32 off = index * 0x50;
func_020a994c(data_02160238 + 0x64 + off);
if (!arg) return;
*(int *)(*(u8 **)(data_02160238 + off + 0x60) + 0x4c) = (z + 101) << 12;
*(int *)(*(u8 **)(data_02160238 + off + 0x60) + 0x44) = x;
*(int *)(*(u8 **)(data_02160238 + off + 0x60) + 0x48) = y;
switch(mode) {
case 2: func_0203bc34(*(void **)(data_02160238+0x40+slot*4), *(void **)(data_02160238+off+0x60),arg,a,b,2); break;
case 1: func_0203bc34(*(void **)(data_02160238+0x40+slot*4), *(void **)(data_02160238+off+0x60),arg,a,b,1); break;
default:
func_020a9610(data_02160238+0x98+off,*(void **)(data_02160238+0x40+slot*4),arg,*(void **)(data_02160238+off+0x60),0,0);
func_020a98ac(data_02160238+0x64+off);
func_020a98f4(data_02160238+0x64+off);
}
}

extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_021167f0(void *, void *);
u8 *func_020cdbc4(u16 arg0, u32 arg1, u16 arg2, u16 arg3, s16 arg4, s8 arg5, u16 arg6, u8 arg7, u8 mode) {
    u8 *node = func_0210c594(0x28, data_02155c3c);
    node[2] = 1;
    *(u16 *)(node + 0) = arg0;
    *(u32 *)(node + 4) = arg1;
    *(u16 *)(node + 8) = arg2;
    *(u16 *)(node + 0xa) = arg3;
    *(s16 *)(node + 0xc) = arg4;
    node[0xe] = arg5;
    *(u16 *)(node + 0x1c) = arg6;
    node[0x1e] = arg7;
    *(u32 *)(node + 0x10) = 0;
    *(u32 *)(node + 0x14) = 0;
    *(u32 *)(node + 0x18) = 0;
    node[3] = 0x1f;
    if (mode == 1) {
        func_021167f0((u8 *)data_02160238 + 0x358, node);
    } else if (mode == 2) {
        func_021167f0((u8 *)data_02160238 + 0x764, node);
    }
    return node;
}

void *func_020cdc8c(u16 arg0, u32 mode) {
    u8 *node = NULL;
    switch (mode) {
    case 1:
        node = *(u8 **)(data_02160238 + 0x758);
        break;
    case 2:
        node = *(u8 **)(data_02160238 + 0x764);
        break;
    }
    while (node != NULL) {
        if (*(u16 *)node == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x24);
    }
    return NULL;
}

