/* 5 functions from 0x02087754 to 0x02087F70 (main), found by ds-decomp. */
#include "common.h"
typedef struct {
    u8 pad[0x44];
    void *field_44;
    void *field_48;
    void *field_4c;
    u8 pad2[8];
    void *field_58;
} G_02085f50;


extern void func_02087f70(void);
void func_02087e84(void) {
    func_02087f70();
}

extern u32 data_02155c3c;
extern G_02085f50 *data_0216010c;
extern u8 data_021485cc[8];
extern u8 data_021485d4[12];
extern u8 data_021485e0[16];
extern void *func_0210c594(u32, u32);
extern void func_020a9544(void *);
extern void *func_020a94b8(void *);
void func_02087e90(void) {
    G_02085f50 **g;
    data_0216010c->field_44 = func_0210c594(0x2c, data_02155c3c);
    if (data_0216010c->field_58 != NULL && *(void **)data_0216010c->field_58 != NULL) {
        func_020a9544(data_0216010c->field_58);
    }
    data_0216010c->field_58 = func_020a94b8(data_021485cc);
    g = &data_0216010c;
    if ((*g)->field_48 != NULL && *(void **)(*g)->field_48 != NULL) {
        func_020a9544((*g)->field_48);
        (*g)->field_48 = NULL;
    }
    data_0216010c->field_48 = func_020a94b8(data_021485d4);
    g = &data_0216010c;
    if ((*g)->field_4c != NULL && *(void **)(*g)->field_4c != NULL) {
        func_020a9544((*g)->field_4c);
        (*g)->field_4c = NULL;
    }
    data_0216010c->field_4c = func_020a94b8(data_021485e0);
}

