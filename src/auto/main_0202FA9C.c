/* 14 functions from 0x0202EC9C to 0x0202FB50 (main), found by ds-decomp. */
#include "common.h"

extern void *data_02160084;
extern void *data_02160088;
extern void *data_02155c3c;

void *func_020224cc(void);
void func_02022508(void *);
void func_02030574(void *);

typedef struct Struct_0202fad8 {
    u8 pad0[0x60];
    void *unk60;
    u8 pad64[0x3c];
    void *unkA0;
    u8 padA4[0x1c];
    void *unkC0;
} Struct_0202fad8;

typedef struct Node_0202f5fc {
    struct Node_0202f5fc *next;
    u8 pad4[4];
    s32 unk8;
    u8 unkc;
    u8 padD[3];
    void *unk10;
} Node_0202f5fc;

void *func_0210c594(u32, void *);
void func_0210c5dc(void *);
void func_021167ac(void *, u32);
void func_021167f0(void *, void *);
void func_021168f8(void *, void *);
void func_0202f4d8(void *);

void *func_0202fa9c(void) {
    u8 *ptr = NULL;
    while (ptr == NULL) {
        ptr = (u8 *)func_0210c594(0xcc, data_02155c3c);
        break;
    }
    *(void **)(ptr + 0x60) = func_020224cc();
    func_021167ac(ptr + 0xc0, 8);
    return ptr;
}

void func_0202fad8(u8 *arg0) {
    if (*(void **)(arg0 + 0x60) != NULL) {
        func_02022508(*(void **)(arg0 + 0x60));
    }
    *(u32 *)(arg0 + 0x60) = 0;
    func_02030574(*(void **)(arg0 + 0xa0));
    *(u32 *)(arg0 + 0xa0) = 0;
    while (*(void **)(arg0 + 0xc0) != NULL) {
        void *node = *(void **)(arg0 + 0xc0);
        func_021168f8(arg0 + 0xc0, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

