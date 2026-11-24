/* 4 functions from 0x02085328 to 0x020860E4 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02155c3c;

typedef struct {
    u8 pad[0x44];
    void *field_44;
    void *field_48;
    void *field_4c;
    u8 pad2[8];
    void *field_58;
} G_02085f50;
extern G_02085f50 *data_0216010c;
extern u8 data_021485a8[8];
extern u8 data_021485b0[12];
extern u8 data_021485bc[16];
extern void *func_0210c594(u32, u32);
extern void func_020a9544(void *);
extern void *func_020a94b8(void *);

extern void func_020860e4(void);
void func_02085f44(void) {
    func_020860e4();
}

void func_02085f50(void) {
    G_02085f50 **g;
    data_0216010c->field_44 = func_0210c594(0x2c, data_02155c3c);
    if (data_0216010c->field_58 != NULL && *(void **)data_0216010c->field_58 != NULL) {
        func_020a9544(data_0216010c->field_58);
    }
    data_0216010c->field_58 = func_020a94b8(data_021485a8);
    g = &data_0216010c;
    if ((*g)->field_48 != NULL && *(void **)(*g)->field_48 != NULL) {
        func_020a9544((*g)->field_48);
        (*g)->field_48 = NULL;
    }
    data_0216010c->field_48 = func_020a94b8(data_021485b0);
    g = &data_0216010c;
    if ((*g)->field_4c != NULL && *(void **)(*g)->field_4c != NULL) {
        func_020a9544((*g)->field_4c);
        (*g)->field_4c = NULL;
    }
    data_0216010c->field_4c = func_020a94b8(data_021485bc);
}

extern void func_02080d30(void);
extern void func_0210c5dc(void *);
extern void func_02089a98(void);
void func_02086030(void) {
    u16 i;
    void *z = NULL;
    G_02085f50 **p;
    func_02080d30();
    p = &data_0216010c;
    if ((*p)->field_58 != NULL && *(void **)(*p)->field_58 != NULL) {
        func_020a9544((*p)->field_58);
        (*p)->field_58 = z;
    }
    for (i = 0; i < 2; i++) {
        void **v = *(void ***)((u8 *)(*p) + 0x48 + i * 4);
        if (v != NULL && *v != NULL) {
            func_020a9544(v);
            *(void **)((u8 *)(*p) + 0x48 + i * 4) = z;
        }
    }
    if ((*p)->field_44 != NULL) {
        if ((*p)->field_44 != NULL) {
            func_0210c5dc((*p)->field_44);
            (*p)->field_44 = z;
        }
        (*p)->field_44 = z;
    }
    (*p)->pad[0x3f] = (u8)(u32)z;
    func_02089a98();
}

