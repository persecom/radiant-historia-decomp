/* 10 functions from 0x02102E60 to 0x02103DC8 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160c74;

s32 func_02103b04(s32 arg0, void *arg1) {
    s32 result;
    void *p;
    if (arg0 == 0) {
        return -4;
    }
    p = func_021092d8(arg1);
    if (p == NULL) {
        return -1;
    }
    result = 0;
    if (func_02092a40(p, result) == 0) {
        return -3;
    }
    if (func_020123f0(arg0) != 0) {
        goto other;
    }
    result = (u16)func_02092994(p, 0);
    goto done;
other:
    if (func_02109444(p) == 0) {
        result = -2;
    }
done:
    func_021093b0(p);
    return result;
}

s32 func_02103b90(void *p, s32 arg1, s32 arg2) {
    s32 result = 0;
    s32 r;
    func_0210950c();
    if (arg2 == 0) {
        return -4;
    }
    if (arg1 != 1) {
        goto tail;
    }
    func_021093f0(p);
    r = func_02092a40(p, result);
    if (r == 0) {
        goto cleanup;
    }
    if (arg1 != 0) {
        goto other;
    }
    func_021093f0(p);
    if (func_020123f0(arg2, r) != 0) {
        goto cleanup;
    }
    return (u16)func_02092994(p, 0);
other:
    r = func_02109444(p);
    if (r == 0) {
        return -2;
    }
    return r;
cleanup:
    func_021093b0(p);
    return result;
tail:
    return -2;
}

s32 func_02103c2c(s32 arg0, s32 arg1, void *arg2) {
    void *p = func_021092d8(arg2);
    s32 result;
    if (p == NULL) {
        return -1;
    }
    result = func_02103b90(p, arg0, arg1);
    func_021093b0(p);
    return result;
}

s32 func_02103d78(s32 arg0)
{
  int new_var;
  u8 *new_var2;
  new_var = (arg0 - (*((s32 *) (data_02160c74 + 0x2c)))) + (*((s32 *) (new_var2 = data_02160c74 + 0x28)));
  return new_var;
}
