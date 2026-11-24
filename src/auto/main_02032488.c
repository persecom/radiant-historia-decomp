/* 38 functions from 0x02032488 to 0x020333B8 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160090;
extern u8 *data_02160110;
extern void func_021168f8(void *, void *);
extern void func_021167f0(void *, void *);
extern void *func_0203222c(void);

extern void func_020c2e80(void);
void func_020328fc(void) {
    u8 *node = *(u8 **)(data_02160090 + 0x14);
    s32 count;
    while (node != NULL) {
        u8 *next = *(u8 **)(node + 0x24);
        func_021168f8(data_02160090 + 0x14, node);
        node = next;
    }
    count = 0;
    node = func_0203222c();
    while (node != NULL) {
        if (*(s8 *)(data_02160110 + 0xc4) != **(u8 **)(*(u8 **)node + 0x118)) {
            break;
        }
        if (count >= 10) {
            break;
        }
        node[0xc] = 1;
        func_021167f0(data_02160090 + 0x14, node);
        node = *(u8 **)(node + 0x1c);
        count++;
    }
}

void func_02032ff8(void) {
    data_02160090[0x7e] = 1;
}

void func_0203305c(void) {
}

void func_0203312c(void) {
    func_020c2e80();
}

extern void func_020c3134(void);
void func_02033138(void) {
    func_020c3134();
}

extern void func_020c319c(void);
void func_02033144(void) {
    func_020c319c();
}

extern void func_0210c5dc(void *);
void func_0203319c(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

