/* 73 functions from 0x02006C38 to 0x02007C2C (main), found by ds-decomp. */
#include "common.h"

extern void func_02006e48(void);
void func_02006d10(u8 *arg0, u8 *arg1) {
    u8 *tail = *(u8 **)(arg0 + 0x8c);
    if (tail == NULL) {
        *(u8 **)(arg0 + 0x88) = arg1;
    } else {
        *(u8 **)(tail + 0x10) = arg1;
    }
    *(u8 **)(arg1 + 0x14) = tail;
    *(u8 **)(arg1 + 0x10) = NULL;
    *(u8 **)(arg0 + 0x8c) = arg1;
}

void func_02006d34(u8 *arg0, u8 *arg1) {
    u8 *next = *(u8 **)(arg1 + 0x10);
    u8 *prev = *(u8 **)(arg1 + 0x14);
    if (next == NULL) {
        *(u8 **)(arg0 + 0x8c) = prev;
    } else {
        *(u8 **)(next + 0x14) = prev;
    }
    if (prev == NULL) {
        *(u8 **)(arg0 + 0x88) = next;
    } else {
        *(u8 **)(prev + 0x10) = next;
    }
}

void func_02006e1c(void) {
    volatile u8 *io = (volatile u8 *)0x04000000;
    u32 ime = *(volatile u32 *)(io + 0x208);
    *(volatile u32 *)(io + 0x208) = (u32)io;
    do {
    } while (*(volatile u16 *)(io + 0x6) != 0);
    *(volatile u32 *)(io + 0x208) = ime;
}

void func_02006e3c(void) {
    func_02006e48();
}

extern u32 data_0215d084[3];
u32 func_02007664(void) {
    return data_0215d084[2];
}

extern u16 data_0215d128;
u16 func_0200788c(void) {
    return data_0215d128;
}

extern u16 data_0215d138;
u16 func_02007a68(void) {
    return data_0215d138;
}

void func_02007a78(u32 *arg0) {
    arg0[0] = 0;
    arg0[2] = 0;
}

