/* 5 functions from 0x0209D0F0 to 0x0209DFDC (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02155c3c;
extern u8 data_02148958[];
extern void *func_0210c594(u32, u32);
extern void func_0210c5dc(void *);
extern void *func_020a94b8(void *);
extern void *func_020a8604(s32, s32);
extern void func_020a8810(void *, u32);
extern void func_020a957c(void ***);

void *func_0209decc(void) {
    void **heap = (void **)&data_02155c3c;
    void **p = (void **)func_0210c594(0x94, data_02155c3c);
    u16 i;
    p[0] = func_020a94b8(data_02148958);
    for (i = 0; i < 7; i++) {
        p[i + 1] = func_0210c594(4, *heap);
        *(void **)p[i + 1] = func_020a8604(4, 1);
        func_020a8810(*(void **)p[i + 1], 7);
    }
    return p;
}

void func_0209df60(void **arr) {
    s16 i;
    for (i = 0; i < 7; i++) {
        void *obj = arr[i + 1];
        void **vt = *(void ***)obj;
        ((void (*)(void *))vt[3])(vt);
        obj = arr[i + 1];
        if (obj != NULL) func_0210c5dc(obj);
        arr[i + 1] = NULL;
    }
    if (arr[0] != NULL) func_020a957c((void ***)arr);
    if (arr != NULL) func_0210c5dc(arr);
}
