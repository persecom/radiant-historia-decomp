/* 15 functions from 0x02052328 to 0x0205317C (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s32 x;
    s32 y;
} Vec2_02052844;

extern u8 *data_02160a80;
static inline u8 *find_node_02052844(u16 id) {
    u8 *node = *(u8 **)(data_02160a80 + 0x3c);
    while (node != NULL) {
        if (*(u32 *)(node + 8) == id) {
            return node;
        }
        node = *(u8 **)(node + 0x38);
    }
    return NULL;
}

extern s32 func_020dd9b4(void *, s32 *);
extern s32 func_02117d80();
extern u32 *data_02155984;
extern u8 *data_02160a80;
extern u8 *data_021600bc;
extern void func_020526f0();
extern void func_020477dc(void *, s32, s32);
extern void *func_02047820(s32);
extern s32 func_020ddc8c(void *, s32);

extern void func_02053824(void *);
extern void func_02052d30(void *);
static void func_02053038(void *);
extern void func_0205317c(void *);
extern void func_0205366c(void *);
extern void func_02053d90(void *);
extern void func_02053f6c(void *);
extern void func_02053f94(void *);


