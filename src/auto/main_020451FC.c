/* 6 functions from 0x020451FC to 0x02045E60 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160204;
extern u8 *data_021600b0;
extern void func_020a62d8(void *arg0);
extern void func_020a5ed4(void *arg0);
extern void func_020a0da8(void);
extern void func_020a0dc8(void *arg0);
extern void func_0210da14(void *arg0);
extern void func_0210dac8(void *arg0);
extern void func_0210dba0(void *arg0);
extern void func_0210dbe8(void *arg0);
extern void func_0210db10(void *arg0);
extern void func_0210db58(void *arg0);
extern void func_0209e85c(void);
extern void func_020a2898(void);
extern void func_020a2a50(void);
extern void func_0209df60(void *arg0);
extern u8 *data_021600ac;
extern void func_020a9544(void *arg0);
extern void func_020a994c(void *arg0);
extern void func_020a98a0(void *arg0);

void func_02045d84(void) {
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
    G **g = (G **)&data_021600ac;

    func_020a9544((*g)->field_9c);
    func_020a9544((*g)->field_a0);
    func_020a9544((*g)->field_a4);
    func_020a9544((*g)->field_a8);
    func_020a9544((*g)->field_ac);
    func_020a9544((*g)->field_b0);
    for (i = 0; i < 6; i++) {
        offset = i * 0x50;
        func_020a994c((*g)->field_b8 + offset);
        func_020a98a0((*g)->field_b8 + offset);
        obj = *(void **)((u8 *)*g + offset + 0xb4);
        fn = *(void (**)(void *))((u8 *)obj + 0xc);
        fn(obj);
    }
}

u32 func_02045e28(void) {
    u8 *p = data_02160204;
    return (p[0x7e] == 0 && *(u32 *)(data_021600ac + 0x10) == 0 && p[0x85] == 0) ? p[0x85] : p[0x7e];
}
