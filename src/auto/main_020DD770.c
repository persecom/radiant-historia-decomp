/* 45 functions from 0x020DD770 to 0x020DE56C (main), found by ds-decomp. */
#include "common.h"

typedef struct UnkStruct_02160a68 {
    u8 unk00[4];
    u8 *unk04;
} UnkStruct_02160a68;

typedef struct UnkStruct_020dd770 {
    void *unk00;
    u8 unk04[0x1c];
    u16 unk20;
    u8 unk22[2];
    void *unk24;
} UnkStruct_020dd770;

extern UnkStruct_02160a68 data_02160a68;
extern void func_021168f8(void *, void *);
extern void func_020ec548(void *);
extern void func_0210c5dc(void *);

extern void func_0210c2f4(void);
void func_020dd770(UnkStruct_020dd770 *arg0) {
    if (arg0->unk00 != NULL) {
        func_020ec548(arg0->unk00);
    }
    if (arg0->unk20 != 0 && arg0->unk24 != NULL) {
        while (arg0->unk24 != NULL) {
            void *node = arg0->unk24;
            func_021168f8(&arg0->unk24, node);
            if (node != NULL) {
                func_0210c5dc(node);
            }
        }
    }
    func_021168f8(data_02160a68.unk04 + 0xf4, arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_020dd7f0(void) {
    return *(void **)(data_02160a68.unk04 + 0x70);
}

void func_020dd804(void) {
}

void func_020dd808(void) {
}

void func_020dd80c(void) {
}

void *func_020dd9b4(u8 *arg0, void **arg1) {
    u16 v;
    *arg1 = NULL;
    v = *(u16 *)(arg0 + 0x8e);
    if (v <= 99 || (v >= 5000 && v <= 5000 + 99)) {
        u8 *p = *(u8 **)(arg0 + 0x108);
        void *ret = *(void **)(p + 8);
        *arg1 = *(void **)(p + 0x20);
        return ret;
    } else if (v < 900 || v > 999) {
        u8 *p = *(u8 **)(arg0 + 0x108);
        void *ret = *(void **)(p + 0);
        *arg1 = *(void **)(p + 0x14);
        return ret;
    }
    return NULL;
}

void *func_020dda2c(u16 arg0) {
    u8 *node = *(u8 **)(data_02160a68.unk04 + 0x70);
    while (node != NULL) {
        if (*(void **)(*(u8 **)(node + 0x118) + 0x70) != NULL) {
            if (*(u16 *)(node + 0x90) == arg0) {
                return node;
            }
        }
        node = *(u8 **)(node + 0x13C);
    }
    return NULL;
}

void *func_020dda78(u16 arg0) {
    u8 *node = *(u8 **)(data_02160a68.unk04 + 0x70);
    while (node != NULL) {
        if (*(u16 *)(node + 0x90) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x13C);
    }
    return NULL;
}

void *func_020ddb54(u16 arg0) {
    u8 *node = *(u8 **)(data_02160a68.unk04 + 0x64);
    while (node != NULL) {
        if (*(u16 *)(node + 0x8e) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x134);
    }
    return NULL;
}

void *func_020ddc08(u16 arg0) {
    u8 *node = *(u8 **)(data_02160a68.unk04 + 0x64);
    while (node != NULL) {
        if (*(u16 *)(node + 0x8e) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x134);
    }
    return NULL;
}

void func_020dddf0(void) {
    func_0210c2f4();
}

extern void func_0210c5dc(void *);
void func_020de17c(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

extern void func_020de404(void);
void func_020de29c(void) {
    func_020de404();
}

void func_020de374(void *arg0, void *arg1) {
    func_021168f8(arg0, arg1);
    if (arg1 != NULL) {
        func_0210c5dc(arg1);
    }
}

