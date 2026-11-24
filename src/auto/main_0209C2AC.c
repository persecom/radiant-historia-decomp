/* 16 functions from 0x0209C2AC to 0x0209D0F0 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160120;
extern u32 func_021136b0(void);
extern void func_0209c94c(void *);
typedef struct {
    u8 pad[0x3c];
    u32 flag;
} S_0209c920;

void *func_0209c888(u32 arg0, u32 arg1) {
    u8 *node = *(u8 **)(data_02160120 + 0x708);
    if (node != NULL) {
        do {
            if (arg0 == 0 && *(u16 *)(node + 2) == arg1) return node;
            if (arg0 == 1 && *(u16 *)(node + 0) == arg1) return node;
            node = *(u8 **)(node + 0xc);
        } while (node != NULL);
    }
    return NULL;
}

void *func_0209c8dc(u32 arg0) {
    u8 *node = *(u8 **)(data_02160120 + 0x708);
    u8 i = 0;
    if (node != NULL) {
        do {
            if (i == arg0) return node;
            node = *(u8 **)(node + 0xc);
            i++;
        } while (node != NULL);
    }
    return NULL;
}

void func_0209c920(u8 *arg0) {
    u32 *p = (u32 *)(arg0 + 0x3c);
    if (*p == 0) return;
    do {
        func_0209c94c(arg0);
    } while (*p != 0);
}

u32 func_0209cb98(void) {
    u32 v = func_021136b0();
    if ((v & 2) == 0) return 0;
    return v;
}
