/* 7 functions from 0x0211F518 to 0x02120518 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_02173164[12];
extern void func_02120500(void);

typedef struct {
    s32 m0;
    s32 m4;
    s32 m8;
} DataStruct;
extern void func_021205ec(s32, void *, s32);
extern void func_02008e50(void *, u32, u32);

void func_0211fd3c(u8 *arg0, s32 arg1) {
    s32 flags = *(s32 *)(arg0 + 8);
    s32 arr[3];
    s32 val;

    if (flags & 0x100) goto end;
    if (flags & 0x200) goto end;

    val = arg1 == 0 ? *(s32 *)(arg0 + 0xe0) : *(s32 *)(arg0 + 0xe4);
    arr[0] = val;
    arr[1] = val;
    arr[2] = val;
    func_021205ec(0x1b, arr, 3);
    *(s32 *)arg0 += 1;
end:
    ;
}

void func_021204a8(void) {
    DataStruct *p;

    if (((DataStruct *)data_02173164)->m4 != 0) {
        func_02120500();
    }
    p = (DataStruct *)((DataStruct *)data_02173164)->m0;
    if (p == 0 || p->m0 == 0) return;
    func_02008e50(&p->m4, (void *)0x4000400, p->m0 * 4);
    p->m0 = 0;
}

void func_02120500(void) {
    while (((volatile DataStruct *)data_02173164)->m4 != 0) {
    }
}
