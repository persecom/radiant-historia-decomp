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
