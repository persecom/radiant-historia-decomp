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

