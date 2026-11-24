/* 45 functions from 0x020DD770 to 0x020DE56C (main), found by ds-decomp. */
#include "common.h"

typedef struct UnkStruct_02160a68 {
    u8 unk00[4];
    u8 *unk04;
} UnkStruct_02160a68;

typedef struct UnkStruct_020dd770 {
    void *unk00;
    u8 unk04[0x1c];
    u16 unk20;
    u8 unk22[2];
    void *unk24;
} UnkStruct_020dd770;

extern UnkStruct_02160a68 data_02160a68;
extern void func_021168f8(void *, void *);
extern void func_020ec548(void *);

extern void func_0210c2f4(void);
void func_020dddf0(void) {
    func_0210c2f4();
}

extern void func_0210c5dc(void *);
void func_020de17c(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

extern void func_020de404(void);
void func_020de29c(void) {
    func_020de404();
}

