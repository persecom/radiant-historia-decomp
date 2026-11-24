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
    data_0216010c->field_44 = func_0210c594(0x2c, data_02155c3c);
    if (data_0216010c->field_58 != NULL && *(void **)data_0216010c->field_58 != NULL) {
        func_020a9544(data_0216010c->field_58);
    }
    data_0216010c->field_58 = func_020a94b8(data_021485a8);
    if (data_0216010c->field_48 != NULL && *(void **)data_0216010c->field_48 != NULL) {
        func_020a9544(data_0216010c->field_48);
    }
    data_0216010c->field_48 = NULL;
    data_0216010c->field_48 = func_020a94b8(data_021485b0);
    if (data_0216010c->field_4c != NULL && *(void **)data_0216010c->field_4c != NULL) {
        func_020a9544(data_0216010c->field_4c);
    }
    data_0216010c->field_4c = NULL;
    data_0216010c->field_4c = func_020a94b8(data_021485bc);
}

