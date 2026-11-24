/* 7 functions from 0x02096740 to 0x02097358 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u8 pad[0x14];
    u8 *unk14;
    u8 pad18[0x18];
    void *unk30;
    void *unk34;
} Unk_0206011c;

extern Unk_0206011c *data_0216011c;
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_0210c5dc(void *);

void func_020972cc(void) {
    Unk_0206011c **g = &data_0216011c;
    if (*g == NULL) {
        return;
    }
    func_0210da14(*g);
    func_0210dba0((u8 *)*g + 0x14);
    if ((*g)->unk30 != NULL) {
        func_0210c5dc((*g)->unk30);
        (*g)->unk30 = NULL;
    }
    g = &data_0216011c;
    if ((*g)->unk34 != NULL) {
        func_0210c5dc((*g)->unk34);
        (*g)->unk34 = NULL;
    }
    g = &data_0216011c;
    if (*g != NULL) {
        func_0210c5dc(*g);
        *g = NULL;
    }
}
