/* 14 functions from 0x020BC394 to 0x020BD38C (main), found by ds-decomp. */
#include "common.h"
typedef struct UnkStruct_02160134 {
    void *unk00;
    void *unk04;
} UnkStruct_02160134;


extern UnkStruct_02160134 data_021601f8;
extern void func_0210c5dc(void *);
extern u8 *data_02160078;
extern u32 data_02155c3c;
extern u8 data_021510fc[];
extern void *func_0210c594(u32, u32);
extern void func_021167ac(void *, u32);
extern void func_021091b4(void);
extern void *func_02109b14(void *, void *);
void func_020bd2cc(void) {
    if (data_021601f8.unk04 == NULL) {
        return;
    }
    if (data_021601f8.unk04 != NULL) {
        func_0210c5dc(data_021601f8.unk04);
    }
    data_021601f8.unk04 = NULL;
}

void func_020bd35c(u32 arg0, u16 arg1) {
    *(u16 *)(data_02160078 + 0x14d0 + arg0 * 4) &= (u16)~arg1;
}

