/* 5 functions from 0x020407FC to 0x020416D4 (main), found by ds-decomp. */
#include "common.h"

extern void *data_021600a8[];
extern u8 *data_02160204;
extern void func_0207b214(void);
extern void func_02046bcc(void);
extern void func_02046600(void);
extern void func_0210c5dc(void *);
void func_020414b0(void) {
    func_0207b214();
    func_02046bcc();
    func_02046600();
    if (data_021600a8[1] != NULL) {
        func_0210c5dc(data_021600a8[1]);
        data_021600a8[1] = NULL;
    }
    data_02160204[0x7a] = 0;
}

extern void func_020a957c(void *);
extern void func_020a994c(void *);
extern void func_020a98a0(void *);
void func_020414f8(void) {
    typedef struct G {
        u8 pad0[0x9c];
        void *field_9c;
        void *field_a0;
        void *field_a4;
        void *field_a8;
        void *field_ac;
        void *field_b0;
        void *field_b4;
        u8 field_b8[1];
    } G;
    s32 i;
    s32 offset;
    void *obj;
    void (*fn)(void *);

    func_020a957c((u8 *)data_021600a8[1] + 0x9c);
    func_020a957c((u8 *)data_021600a8[1] + 0xa0);
    func_020a957c((u8 *)data_021600a8[1] + 0xa4);
    func_020a957c((u8 *)data_021600a8[1] + 0xa8);
    func_020a957c((u8 *)data_021600a8[1] + 0xac);
    func_020a957c((u8 *)data_021600a8[1] + 0xb0);
    for (i = 0; i < 6; i++) {
        offset = i * 0x50;
        func_020a994c(((G *)data_021600a8[1])->field_b8 + offset);
        func_020a98a0(((G *)data_021600a8[1])->field_b8 + offset);
        obj = *(void **)((u8 *)data_021600a8[1] + offset + 0xb4);
        fn = *(void (**)(void *))((u8 *)obj + 0xc);
        fn(obj);
    }
    func_020a994c((u8 *)data_021600a8[1] + 0x300);
    func_020a98a0((u8 *)data_021600a8[1] + 0x300);
    obj = *(void **)((u8 *)data_021600a8[1] + 0x2e4);
    if (obj == NULL) {
        return;
    }
    fn = *(void (**)(void *))((u8 *)obj + 0xc);
    fn(obj);
}

