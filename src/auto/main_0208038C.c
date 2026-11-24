/* 8 functions from 0x0208038C to 0x02080E00 (main), found by ds-decomp. */
#include "common.h"

extern void func_02080e00(void);
extern void *data_02155c3c;
extern u8 *data_0216010c;
extern void *func_0210c594(u32, void *);
extern void func_020ec548(void *);
void func_02080db8(void) {
    func_02080e00();
}

void func_02080dc4(void) {
    *(void **)(data_0216010c + 0x44) = func_0210c594(0x38, data_02155c3c);
    *(u8 *)(*(void **)(data_0216010c + 0x44) + 2) = 0;
}

