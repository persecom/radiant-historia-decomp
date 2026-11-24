/* 13 functions from 0x0211DDAC to 0x0211EA84 (main), found by ds-decomp. */
#include "common.h"

extern void (*data_02156070[])(void *, u32);
extern void (*data_02155f80[])(void *);
extern void (*data_02155f90[])(void *);
s32 func_0211ddac(u32 *arg0, u8 *arg1, u32 arg2) {
    s32 ret = 0;
    *arg0 = 0;
    do {
        if (arg2 < *(u8 *)(arg1 + 0x19)) {
            u16 val = *(u16 *)(arg1 + 0x1A + arg2 * 2);
            if ((val & 0x300) == 0x100) {
                void (*fn)(u32 *, u8 *, u32) = *(void (**)(u32 *, u8 *, u32))(arg1 + 0xC);
                if (fn != NULL) {
                    u32 tmp;
                    fn(&tmp, arg1, val & 0xFF);
                    *arg0 |= tmp;
                    ret = 1;
                }
            }
        }
        arg1 = *(u8 **)(arg1 + 0x10);
    } while (arg1 != NULL);
    return ret;
}

void func_0211de34(u8 *arg0) {
    do {
        u8 cmd;
        *(u32 *)(arg0 + 8) &= ~0x40;
        cmd = **(u8 **)arg0;
        data_02156070[cmd & 0x1F](arg0, cmd & 0xE0);
    } while ((*(u32 *)(arg0 + 8) & 0x20) == 0);
}

void func_0211e014(u32 *arg0, u8 *arg1) {
    while (arg1 != NULL) {
        s32 i;
        for (i = 0; i < *(u8 *)(arg1 + 0x19); i++) {
            if (*(u16 *)(arg1 + 0x1A + i * 2) & 0x100) {
                arg0[i >> 5] |= 1 << (i & 0x1F);
            }
        }
        arg1 = *(u8 **)(arg1 + 0x10);
    }
}

void func_0211e158(u8 *arg0) {
    void (*fn)(void *) = *(void (**)(void *))(arg0 + 0xC);
    if (fn != NULL) {
        fn(arg0);
    }
    *(u8 **)arg0 += 1;
}

void func_0211e180(u8 *arg0)
{
  void (*fn)(void *) = *((void (**)(void *)) (arg0 + 0x10));
  if (fn != NULL)
  {
    fn(arg0);
  }
  *((u32 *) (arg0 + 8)) |= 0x20;
}

void func_0211e860(u8 *arg0) {
    u32 flags = *(u32 *)(arg0 + 8);
    u8 *p;
    u8 idx;
    u8 *tbl;
    u16 cmd;
    if (flags & 0x200) goto advance;
    p = *(u8 **)arg0;
    idx = p[1];
    if (flags & 1) goto parse;
    if (!(flags & 8)) goto parse;
    if (idx == *(u8 *)(arg0 + 0xad)) goto advance;
parse:
    tbl = *(u8 **)(arg0 + 0xd8);
    if (tbl == NULL) goto advance;
    if (idx >= tbl[5]) goto advance;
    {
        u16 off = *(u16 *)(tbl + 0xa);
        u16 size = *(u16 *)(tbl + 4 + off);
        u32 *ptr = (u32 *)(tbl + 8 + off + size * idx);
        cmd = *(u16 *)(tbl + *ptr);
        data_02155f80[cmd](arg0);
    }
advance:
    *(u8 **)arg0 += 2;
}

void func_0211e9e4(u8 *arg0) {
    u32 flags = *(u32 *)(arg0 + 8);
    u8 *p;
    u8 idx;
    u8 *tbl;
    u16 cmd;
    if (flags & 0x200) goto advance;
    if (!(flags & 1)) goto advance;
    if (flags & 2) goto advance;
    p = *(u8 **)arg0;
    idx = p[1];
    tbl = *(u8 **)(arg0 + 0xdc);
    if (tbl == NULL) goto advance;
    if (idx >= tbl[1]) goto advance;
    {
        u16 off = *(u16 *)(tbl + 6);
        u16 size = *(u16 *)(tbl + 4 + off);
        u32 *ptr = (u32 *)(tbl + 8 + off + size * idx);
        cmd = *(u16 *)(tbl + *ptr);
        data_02155f90[cmd](arg0);
    }
advance:
    *(u8 **)arg0 += 2;
}

