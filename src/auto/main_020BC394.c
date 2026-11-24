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
void func_020bc794(void) {
    data_021601f8.unk00 = func_0210c594(0x64, data_02155c3c);
    func_021167ac((u8 *)data_021601f8.unk00 + 4, 0xc);
    func_021167ac((u8 *)data_021601f8.unk00 + 0x10, 0x18);
    func_021167ac((u8 *)data_021601f8.unk00 + 0x1c, 0x38);
    func_021167ac((u8 *)data_021601f8.unk00 + 0x28, 0x14);
    func_021167ac((u8 *)data_021601f8.unk00 + 0x34, 0x38);
    func_021167ac((u8 *)data_021601f8.unk00 + 0x40, 0x38);
    func_021167ac((u8 *)data_021601f8.unk00 + 0x4c, 0x38);
    func_021167ac((u8 *)data_021601f8.unk00 + 0x58, 0x14);
    func_021091b4();
}

u32 func_020bc954(u32 arg0) {
    if (arg0 >= 1 && arg0 <= 0x33) return 0;
    if (arg0 >= 0x65 && arg0 <= 0xc8) return 1;
    if (arg0 >= 0xc9 && arg0 <= 0x10f) return 2;
    if (arg0 >= 0x12d && arg0 <= 0x1a9) return 3;
    if (arg0 >= 0x208 && arg0 <= 0x26c) return 4;
    if (arg0 >= 0x2bd && arg0 <= 0x31e) return 5;
    if (arg0 >= 0x321 && arg0 <= 0x384) return 6;
    return 0xff;
}

extern s32 func_02092994(void *, s32);
void func_020bca10(u8 *arg0, void *arg1) {
    s32 i;
    *(u16 *)(arg0 + 0x0) = func_02092994(arg1, 0);
    *(u16 *)(arg0 + 0x2) = func_02092994(arg1, 0);
    *(u16 *)(arg0 + 0x4) = func_02092994(arg1, 0);
    *(u16 *)(arg0 + 0x6) = func_02092994(arg1, 0);
    *(u16 *)(arg0 + 0x8) = func_02092994(arg1, 0);
    *(u16 *)(arg0 + 0xa) = func_02092994(arg1, 0);
    *(u16 *)(arg0 + 0xc) = func_02092994(arg1, 0);
    *(u16 *)(arg0 + 0xe) = func_02092994(arg1, 0);
    for (i = 0; i < 3; i++) {
        arg0[0x16 + i] = func_02092994(arg1, 0);
        if (arg0[0x16 + i] == 0) {
            return;
        }
        *(u16 *)(arg0 + 0x10 + i * 2) = func_02092994(arg1, 0);
    }
}

s32 func_020bd250(void) {
    u8 *p = (u8 *)&data_021601f8;
    volatile u32 buf;
    s32 ret = 0;
    if (*(void **)(p + 4) == NULL) {
        *(void **)(p + 4) = func_02109b14(data_021510fc, (void *)&buf);
        ret = 1;
    }
    return ret;
}

s32 func_020bd294(u32 arg0) {
    s32 ret = -1;
    u16 v;
    if (arg0 >= 0x385) goto done;
    v = *(u16 *)((u8 *)data_021601f8.unk04 + arg0 * 4);
    if (v == arg0) {
        ret = *(s16 *)((u8 *)data_021601f8.unk04 + arg0 * 4 + 2);
    }
done:
    return ret;
}

void func_020bd2cc(void) {
    if (data_021601f8.unk04 == NULL) {
        return;
    }
    if (data_021601f8.unk04 != NULL) {
        func_0210c5dc(data_021601f8.unk04);
    }
    data_021601f8.unk04 = NULL;
}

void func_020bd2fc(u32 arg0, u16 arg1, u8 arg2, u8 arg3)
{
  *((u16 *) ((data_02160078 + 0x14d0) + ((arg0 & 0xFFFFFFFFFFFFFFFFu) * 4))) = 0;
  *((u16 *) ((data_02160078 + 0x14d0) + (arg0 * 4))) |= arg1;
  *((u8 *) (((data_02160078 + 0x14d0) + (arg0 * 4)) + 2)) = arg2;
  *((u8 *) (((data_02160078 + 0x14d0) + (arg0 * 4)) + 3)) = arg3;
}

void func_020bd35c(u32 arg0, u16 arg1) {
    *(u16 *)(data_02160078 + 0x14d0 + arg0 * 4) &= (u16)~arg1;
}

