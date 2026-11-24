/* 3 functions from 0x020AEDC0 to 0x020AF2DC (main), found by ds-decomp. */
#include "common.h"

extern u8 *func_020adda8(void);

extern u8 *func_020ade60(s32);
extern void func_02076380(void *);
extern void func_020ae004(s16, s16, s16, s16, s16, s16, s16, s16, s16);
extern void func_020adfe8(u16, u8);
void func_020aedc0(u8 *p,u8 *assets) {
func_02076380(*(void **)(assets+4));
func_020ae004(100,0,21,256,192,0,0,256,192);
func_02076380(*(void **)(assets+120));
func_020ae004(106,1,1,1,1,0,0,256,12);
func_02076380(*(void **)(assets+8));
func_020ae004(106,0,0,32,17,41,12,8,17);
func_020ae004(106,8,0,1,17,49,12,207,17);
func_02076380(*(void **)(assets+12));
func_020ae004(106,0,0,8,4,52,30,8,4);
func_020ae004(106,8,0,1,4,60,30,196,4);
func_02076380(*(void **)(assets+16));
func_020ae004(107,1,1,42,42,0,0,42,42);
func_02076380(*(void **)(assets+24));
if(*(s32 *)(p+0x3434)<3) func_020ae004(107,0,0,53,19,198,13,53,19);
else if(*(s32 *)(p+0x3438)==0) func_020ae004(107,0,19,43,19,198,13,43,19);
else if(*(s32 *)(p+0x3438)==1) func_020ae004(107,0,38,43,16,198,13,43,16);
func_02076380(*(void **)(assets+156));
func_020ae004(106,0,0,12,16,116,36,12,16);
func_020ae004(106,13,0,1,16,128,36,128,16);
if(p[0x3440]==1) {
func_02076380(*(void **)(assets+168));
func_020ae004(108,0,0,32,32,4,3,32,32);
func_02076380(*(void **)(assets+152));
func_020ae004(108,0,15,40,14,53,14,40,14);
} else {
func_02076380(*(void **)(assets+172));
func_020ae004(108,0,0,32,32,4,3,32,32);
func_02076380(*(void **)(assets+152));
func_020ae004(108,0,0,40,14,53,14,40,14);
}
func_020adfe8(31,0);
}

void func_020af170(u8 *arg0) {
    u8 *p = func_020ade60(1);
    s16 y = *(s32 *)(p + 4) + 0x87;

    func_02076380(*(void **)(arg0 + 0x14));
    func_020ae004(0x6a, 0, 0, 4, 0xe, 9, y, 4, 0xe);
    func_020ae004(0x6a, 4, 0, 1, 0xe, 0xd, y, 0xe6, 0xe);
    func_020ae004(0x6a, 0x1c, 0, 4, 0xe, 0xf3, y, 4, 0xe);
    func_020ae004(0x6a, 0, 0xf, 4, 0x23, 9, y + 0xe, 4, 0x23);
    func_020ae004(0x6a, 4, 0xf, 1, 0x23, 0xd, y + 0xe, 0xe6, 0x23);
    func_020ae004(0x6a, 0x1c, 0xf, 4, 0x23, 0xf3, y + 0xe, 4, 0x23);
    func_020adfe8(0x1f, 0);
}

void func_020af2c8(void *arg0) {
    u8 *p = func_020adda8();
    *(void **)(p + 0x6c8) = arg0;
}
