/* 1 function from 0x02037D1C to 0x0203909C (main), found by ds-decomp. */
#include "common.h"
typedef struct {s32 x,y,z;} Vec_02037D1C;
typedef struct {u16 state; s16 timer, timer2, timer3;u16 flags;u8 pad[14];Vec_02037D1C pos;u8 pad24[12];s16 timer30;} State_02037D1C;
typedef struct {Vec_02037D1C pos;u8 pad0c[0x6c];s32 speed;u32 pad7c,flags;u8 pad84[0x74];s32 visible;u8 padfc[8];u8 anim;u8 pad105[0x23];u8 *extra;u8 pad12c[0x66];u8 alpha;} Actor_02037D1C;
typedef struct {u8 *object;u8 pad04[0x14];s32 y;u32 pad1c;s32 sx,sy;u8 pad28[0x10];s32 flag38;} Effect_02037D1C;
typedef struct {Vec_02037D1C pos;u8 type;u8 pad0d;u16 a;u8 b;u8 pad11;u16 c;u8 d;} EffectParam_02037D1C;
extern u8 *data_02160a74,*data_02160244,*data_02160204;
extern Vec_02037D1C *data_02160258;
extern Vec_02037D1C func_020332e8(void);
extern Effect_02037D1C *func_020ec950(int);
extern Effect_02037D1C *func_020c1370(int,void *,int,int,int);
extern u8 *func_020f0a5c(int);


void func_02037d1c(u8 *actor){u8 *state=*(u8 **)(*(u8 **)(actor+0x128)+0x8c);switch(*(u16 *)state){case 1: ++*(s16 *)(state+2);break;}}
