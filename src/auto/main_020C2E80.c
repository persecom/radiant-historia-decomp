/* 24 functions from 0x020C2E80 to 0x020C3DF4 (main), found by ds-decomp. */
#include "common.h"

extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern u8 *data_02160090;
void func_020c3020(void *arg0) {
    u8 *node = *(u8 **)(data_02160090 + 0x48);
    u8 *next;
    u8 *p;
    while (node != NULL) {
        next = *(u8 **)(node + 0x24);
        if (*(void **)(node + 4) == arg0 || *(void **)(node + 4) == NULL) {
            p = *(u8 **)(data_02160090 + 8);
            while (p != NULL) {
                if (*(void **)(p + 0x48) == node) {
                    *(void **)(p + 0x48) = NULL;
                }
                p = *(u8 **)(p + 0x1c);
            }
            func_021168f8((void **)(data_02160090 + 0x48), node);
            if (node != NULL) {
                func_0210c5dc(node);
            }
        }
        node = next;
    }
}

void *func_020c30b4(u8 arg0, u8 arg1) {
    u8 *node = *(u8 **)(data_02160090 + 0x48);
    while (node != NULL) {
        if (node[0] == arg0 && node[1] == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x24);
    }
    return NULL;
}

void func_020c30f8(void) {
    u8 *node = *(u8 **)(data_02160090 + 0x48);
    u8 i = 0;
    while (node != NULL) {
        i++;
        if (i > 9) {
            return;
        }
        node = *(u8 **)(node + 0x24);
    }
}

void func_020c3134(void *arg0) {
    u8 i;
    u8 *node;
    func_021168f8((void **)(data_02160090 + 0x48), arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
    i = 0;
    node = *(u8 **)(data_02160090 + 0x48);
    while (node != NULL) {
        i++;
        node = *(u8 **)(node + 0x24);
        if (i > 15) {
            return;
        }
    }
}

void func_020c33d4(void) {
}

void *func_020c3c78(void) {
    return func_0210c594(0x28, data_02155c3c);
}

void func_020c3c94(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

extern void func_021168f8(void *, void *);
void func_020c3cd4(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

