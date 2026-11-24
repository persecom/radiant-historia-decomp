/* 13 functions from 0x02016018 to 0x02016FC4 (main), found by ds-decomp. */
#include "common.h"

extern void func_02016cfc(s32, const char *, char *);
void func_02016d50(s32 arg0, const char *arg1, ...) {
    char *vlist = (char *)((u32)&arg1 & ~3) + 4;
    func_02016cfc(arg0, arg1, vlist);
}

void func_02016da0(void) {
}

