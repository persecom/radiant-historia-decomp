/* functions from 0x0208B110 to 0x0208B398 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600b0;
extern void func_0208c420(s32, s32);
void func_0208b198(void);
void func_0208b298(void);

typedef struct {
    u16 x;
    u16 y;
    u16 z;
} UnkVec3_0208b144;

extern void func_0208b398(UnkVec3_0208b144, s16);

typedef struct {
    s16 data[10];
} UnkBuf10_0208b198;

typedef struct {
    s16 data[27];
} UnkBuf27_0208b198;

extern UnkBuf10_0208b198 data_02140d4c;
extern UnkBuf27_0208b198 data_02140ec0;
extern UnkBuf10_0208b198 data_02140e50;
extern UnkBuf27_0208b198 data_02140e88;

extern void func_020a3bbc(u16);
extern void func_021098ac(void *);
