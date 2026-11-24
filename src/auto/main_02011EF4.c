/* 14 functions from 0x02011EF4 to 0x02012E3C (main), found by ds-decomp. */
#include "common.h"

extern void func_02012634(s32, const char *, char *);
void func_02012590(s32 arg0, const char *arg1, ...) {
    char *vlist = (char *)((u32)&arg1 & ~3) + 4;
    func_02012634(arg0, arg1, vlist);
}
