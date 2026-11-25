/* 5 functions from 0x02087754 to 0x02087F70 (main), found by ds-decomp. */
#include "common.h"
extern u32 data_0216263c[3];
extern const u16 data_02140d10[10],data_02140cfc[10],data_02140ce8[10],data_02140d24[10];
extern void func_0210d27c(s32);
typedef struct {
    u8 pad[0x44];
    void *field_44;
    void *field_48;
    void *field_4c;
    u8 pad2[8];
    void *field_58;
} G_02085f50;

extern G_02085f50 *data_0216010c;
extern u32 func_02085110(u32);
extern void *func_02021f10(u32);

extern void func_02087f70(void);
s32 func_02087754(s32 arg) {
    G_02085f50 **gp = &data_0216010c;
    void *p = func_02021f10(func_02085110(*(u8 *)((u8 *)*gp + 0x50dc)));
    u8 *elem = (u8 *)*gp + (arg << 6);
    if (elem[0x487b] == 5) {
        s16 a = *(s16 *)(elem + 0x4890);
        u16 b = *(u16 *)((u8 *)p + 0x14);
        return a > b ? 2 : 0;
    }
    return 2;
}

s32 func_02087cf4(s32 arg, s16 input) {
 
 s32 zero = 0;
 s16 who = input;
 s32 all = 1;
 u8 *p = func_02021f10(func_02085110(((u8 *)data_0216010c)[0x50dc]));
 s16 kind = *(s16 *)((u8 *)data_0216010c + (arg << 6) + 0x4878);
 if (kind == 101) {
  if (who == -1) {
   for (who = 0; who < ((u8 *)data_0216010c)[0x614]; who++) {
    p = func_02021f10(func_02085110((u8)who));
    if (*(u16 *)(p+0x10) != *(u16 *)(p+0x12) + *(s16 *)(p+0x24)) all = zero;
   }
   if (all == 1) return 0; else return 1;
  }
  p = func_02021f10(func_02085110(((u8 *)data_0216010c)[0x50de]));
  if (*(u16 *)(p+0x10) == *(u16 *)(p+0x12) + *(s16 *)(p+0x24)) all = zero;
  return all;
 }
 if (kind == 102) {
  if (who == -1) {
   for (who = 0; who < ((u8 *)data_0216010c)[0x614]; who++) {
    p = func_02021f10(func_02085110((u8)who));
    if (*(u16 *)(p+0x14) != *(u16 *)(p+0x16) + *(s16 *)(p+0x26)) all = zero;
   }
   if (all == 1) return 0; else return 1;
  }
  p = func_02021f10(func_02085110(((u8 *)data_0216010c)[0x50de]));
  if (*(u16 *)(p+0x14) == *(u16 *)(p+0x16) + *(s16 *)(p+0x26)) all = zero;
  return all;
 }
 return zero;
}

void func_02087e84(void) {
    func_02087f70();
}

extern u32 data_02155c3c;
extern G_02085f50 *data_0216010c;
extern u8 data_021485cc[8];
extern u8 data_021485d4[12];
extern u8 data_021485e0[16];
extern void *func_0210c594(u32, u32);
extern void func_020a9544(void *);
extern void *func_020a94b8(void *);
void func_02087e90(void) {
    G_02085f50 **g;
    data_0216010c->field_44 = func_0210c594(0x2c, data_02155c3c);
    if (data_0216010c->field_58 != NULL && *(void **)data_0216010c->field_58 != NULL) {
        func_020a9544(data_0216010c->field_58);
    }
    data_0216010c->field_58 = func_020a94b8(data_021485cc);
    g = &data_0216010c;
    if ((*g)->field_48 != NULL && *(void **)(*g)->field_48 != NULL) {
        func_020a9544((*g)->field_48);
        (*g)->field_48 = NULL;
    }
    data_0216010c->field_48 = func_020a94b8(data_021485d4);
    g = &data_0216010c;
    if ((*g)->field_4c != NULL && *(void **)(*g)->field_4c != NULL) {
        func_020a9544((*g)->field_4c);
        (*g)->field_4c = NULL;
    }
    data_0216010c->field_4c = func_020a94b8(data_021485e0);
}

