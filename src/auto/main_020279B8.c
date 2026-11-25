/* 1 function from 0x020279B8 to 0x02028420 (main), found by ds-decomp. */
#include "common.h"
typedef struct { u8 cells[9]; } Grid_020279b8;
typedef struct {u32 seed, multiplier, increment;} RandomState_020279b8;
extern RandomState_020279b8 data_0216263c;
extern const Grid_020279b8 data_0213ee7c, data_0213ee70, data_0213ee64, data_0213ee88, data_0213ee58;
extern char data_0214615c[], data_02146160[];
extern char *func_020929f4(void *,s32);
extern s32 func_02092994(void *,s32);
extern s32 func_02026e9c(s32,char *,char *);
extern s16 func_02026f38(char *);
extern s32 func_0202b3b0(u8);
extern s32 func_0202e63c(void *,s32);
extern void func_0202b3d4(void *,u8);
extern u8 *func_0202c820(u8);
extern s32 func_0202c658(void *);
extern u8 *func_0202e548(u8);
static inline u16 Random_020279b8(u16 max) {
 RandomState_020279b8 *state=&data_0216263c;
 u32 value;
 state->seed=state->seed*state->multiplier+state->increment;
 value=state->seed>>16;
 if(max)value=(value*max)>>16;
 return value;
}

s32 func_020279b8(u8 *self,u8 *parser) { return 0; }
