/* 5 functions from 0x02090D48 to 0x02091CD8 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u16 unk[10];
} Unk20;

extern const Unk20 data_02140f54;
extern const Unk20 data_02141120;

extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
void func_02091c54(u16 arg0, u16 arg1, u16 arg2) {
    Unk20 buf = data_02140f54;
    func_020a3bbc(0x4e);
    buf.unk[7] = arg2;
    buf.unk[5] = arg0;
    buf.unk[6] = arg1;
    func_021098ac(&buf);
    *(s16 *)&buf.unk[4] = -0x18;
    buf.unk[5] = arg0;
    buf.unk[6] = arg1 + 0x18;
    func_021098ac(&buf);
}
