/* 8 functions from 0x020EE098 to 0x020EEEA4 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160aec;
extern u8 data_02151c8c[20];
extern void func_0210eb80(u8 *);
extern void func_021168f8(u8 *, u8 *);
extern void func_0210c5dc(u8 *);
extern void func_020e9620(u8 *);
extern void func_020eed30(s32);
extern void func_020f1e2c(void);
extern void func_0210dae0(u8 *);
extern void func_0210db10(u8 *);
extern void func_020eeea4(void);

u8 *func_020ee52c(u16 arg0) {
    u8 *p = data_02160aec;
    u8 *node = NULL;
    while ((node = (node == NULL) ? *(u8 **)p : *(u8 **)(node + *(u16 *)(p + 0xa) + 4)) != NULL) {
        if (*(u16 *)(node + 0x24) == arg0) {
            return node;
        }
    }
    return NULL;
}

void func_020eec70(void) {
    u8 **pp = &data_02160aec;
    if (*pp != NULL) {
        if (*(u16 *)(*pp + 0xc) != 0) {
            u8 *node;
            func_0210eb80(*pp + 0x58be4);
            node = *(u8 **)*pp;
            while (node != NULL) {
                func_021168f8(*pp, node);
                func_0210eb80(node + 8);
                if (node != NULL) {
                    func_0210c5dc(node);
                }
                node = *(u8 **)*pp;
            }
            func_0210eb80(*pp + 0x58be4);
            func_020e9620(*pp + 0x58be4 + 0x10);
            func_020eed30(0);
        }
        if (data_02160aec != NULL) {
            func_0210c5dc(data_02160aec);
            data_02160aec = NULL;
        }
    }
    func_020f1e2c();
}

void func_020eed30(s32 arg0) {
    u8 **pp = &data_02160aec;
    if (*pp == NULL || *(u16 *)(*pp + 0xc) == 0) {
        return;
    }
    if (arg0 != 0) {
        if (*(void **)data_02151c8c != NULL) {
            return;
        }
        *(void **)data_02151c8c = func_020eeea4;
        func_0210dae0(data_02151c8c);
        *(u32 *)(*pp + 0x58bdc) = 1;
    } else {
        void **qq = (void **)data_02151c8c;
        if (*qq == NULL) {
            return;
        }
        func_0210db10(data_02151c8c);
        *qq = NULL;
        *(u32 *)(*pp + 0x58bdc) = 0;
    }
}

void func_020eedc8(void) {
}
