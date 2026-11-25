/* 3 functions from 0x020F0AEC to 0x020F1A1C (main), found by ds-decomp. */
#include "common.h"

typedef struct Flags_020f0aec {
    u16 unk0 : 3;
    u16 b3 : 1;
    u16 b4 : 1;
    u16 b5 : 1;
    u16 b6 : 1;
} Flags_020f0aec;

extern u8 data_02160b10[0x100];
extern u8 data_02151d4c[0x14];
extern u8 data_02151d60[0x14];
extern u8 data_02151d74[0x14];
extern u8 data_02151d88[0x14];
extern void func_02008e68(u8, void *, u32);
extern void func_02005e80(void *, void *, ...);
extern s32 func_02109cf0(void *);
extern void *func_02109b14(void *, s32);
extern void func_0210b0c8(void *, void *);
extern void func_0210b130(void *, void *);
extern u8 *data_02160af0;
extern u32 data_0216281c;
extern u8 data_02170248[0x70];
extern void func_0210bcc8(void *);
extern void func_021205ec(s32, void *, s32);
extern void func_0211e078(void *);
extern void func_0211d7a4(void);
extern void func_021204a8(void);
extern s32 data_02170204[];
extern void func_02002028(s32);
extern s64 func_02001fd0(void);
extern void func_0210d27c(s32);
void func_020f0aec(void) {
    u8 *mgr = data_02160af0;
    u8 *node;
    u8 *obj;

    if (mgr == NULL) {
        return;
    }

    node = *(u8 **)(mgr + 0x64);
    while (node != NULL) {
        u32 id = *(u32 *)(node + 0x10);
        if (id < 10000 && id != 0 && (obj = *(u8 **)(node + 0)) != NULL) {
            if (*(u32 *)(node + 0x14) & 1) {
                u32 param;
                if (*(u32 *)(obj + 0xf4) != 0) {
                    func_0210bcc8(obj);
                }
                func_021205ec(0x17, data_02170248, 0xc);
                func_021205ec(0x19, obj + 0xa0, 0xc);
                param = 0x11f0080;
                func_021205ec(0x29, &param, 1);
                func_0211e078(obj);

                if (*(u32 *)(node + 0x10) == 0x3e5) {
                    if (obj != NULL) {
                        {
                            s32 *p = *(s32 **)(obj + 0xfc);
                            if (p != NULL) {
                                u32 i;
                                for (i = 0; i < data_0216281c; i++) {
                                    *p += 0x1000;
                                }
                                if (*p >= 0xc80000) {
                                    *p = 0;
                                }
                            }
                        }
                        {
                            s32 *p = *(s32 **)(obj + 0x100);
                            if (p != NULL) {
                                u32 i;
                                for (i = 0; i < data_0216281c; i++) {
                                    *p += 0x1000;
                                }
                                if (*p >= 0xc80000) {
                                    *p = 0;
                                }
                            }
                        }
                        *(s32 *)(node + 0x18) = 0;
                        *(s32 *)(node + 0x1c) = 0;
                    }
                } else if (*(u32 *)(node + 0x10) == 0x3e4) {
                    if (obj != NULL) {
                        *(s32 *)(node + 0x18) = 0;
                        if (node[0x45] == 0) {
                            s32 *p = *(s32 **)(obj + 0xfc);
                            if (p != NULL) {
                                u32 i;
                                for (i = 0; i < data_0216281c; i++) {
                                    *p += 0x800;
                                }
                                if (*p >= 0x4b0000) {
                                    *p = 0x320000;
                                }
                                if (*p < 0x320000) {
                                    *p = 0x320000;
                                }
                            }
                        } else if (node[0x45] == 1) {
                            s32 *p = *(s32 **)(obj + 0xfc);
                            if (p != NULL) {
                                u32 i;
                                for (i = 0; i < data_0216281c; i++) {
                                    *p += 0x800;
                                }
                                if (*p >= 0x320000) {
                                    node[0x45] = 0;
                                    *p = 0x320000;
                                }
                            }
                        } else if (node[0x45] == 2) {
                            s32 *p = *(s32 **)(obj + 0xfc);
                            if (p != NULL) {
                                *p = 0;
                            }
                        }

                        *(s32 *)(node + 0x1c) = 0;
                        if (node[0x45] == 0) {
                            s32 *p = *(s32 **)(obj + 0x100);
                            if (p != NULL) {
                                u32 i;
                                for (i = 0; i < data_0216281c; i++) {
                                    *p += 0x800;
                                }
                                if (*p >= 0x4b0000) {
                                    *p = 0x320000;
                                }
                                if (*p < 0x320000) {
                                    *p = 0x320000;
                                }
                            }
                        } else if (node[0x45] == 1) {
                            s32 *p = *(s32 **)(obj + 0x100);
                            if (p != NULL) {
                                u32 i;
                                for (i = 0; i < data_0216281c; i++) {
                                    *p += 0x800;
                                }
                                if (*p >= 0x320000) {
                                    node[0x45] = 0;
                                    *p = 0x320000;
                                }
                            }
                        } else if (node[0x45] == 2) {
                            s32 *p = *(s32 **)(obj + 0x100);
                            if (p != NULL) {
                                *p = 0;
                            }
                        }
                    }
                }
            }

            if (*(s32 *)(node + 0x18) != 0) {
                u8 *anim = *(u8 **)(obj + 0xfc);
                if (((Flags_020f0aec *)(obj + 0x1a4))->b3 && anim != NULL) {
                    if (*(void (**)(void *))(obj + 0x1b0) != NULL) {
                        (*(void (**)(void *))(obj + 0x1b0))(obj);
                        *(void **)(obj + 0x1b0) = NULL;
                    }
                    if (anim != NULL) {
                        s8 j;
                        s32 limit;
                        for (j = 0; j < (s32)data_0216281c; j++) {
                            *(s32 *)anim += 0x1000;
                        }
                        limit = *(u16 *)(*(u8 **)(anim + 8) + 4) << 12;
                        if (*(s32 *)anim >= limit) {
                            if (((Flags_020f0aec *)(obj + 0x1a4))->b5) {
                                *(s32 *)anim = 0;
                            } else {
                                ((Flags_020f0aec *)(obj + 0x1a4))->b3 = 0;
                                *(s32 *)anim = limit - 1;
                                if (*(void (**)(void *))(obj + 0x1b4) != NULL) {
                                    (*(void (**)(void *))(obj + 0x1b4))(*(void **)(obj + 0x1ac));
                                    *(void **)(obj + 0x1b4) = NULL;
                                }
                            }
                        }
                    }
                }
            }

            if (*(s32 *)(node + 0x1c) != 0) {
                u8 *anim = *(u8 **)(obj + 0x100);
                if (((Flags_020f0aec *)(obj + 0x1a4))->b4 && anim != NULL) {
                    s32 step = *(s32 *)(obj + 0x104);
                    if (*(void (**)(void *))(obj + 0x1b0) != NULL) {
                        (*(void (**)(void *))(obj + 0x1b0))(obj);
                        *(void **)(obj + 0x1b0) = NULL;
                    }
                    if (anim != NULL) {
                        s8 j;
                        s32 limit;
                        for (j = 0; j < (s32)data_0216281c; j++) {
                            *(s32 *)anim += step;
                        }
                        limit = *(u16 *)(*(u8 **)(anim + 8) + 4) << 12;
                        if (*(s32 *)anim >= limit) {
                            if (((Flags_020f0aec *)(obj + 0x1a4))->b6) {
                                *(s32 *)anim = 0;
                            } else {
                                ((Flags_020f0aec *)(obj + 0x1a4))->b4 = 0;
                                *(s32 *)anim = limit - 1;
                                if (*(void (**)(void *))(obj + 0x1b4) != NULL) {
                                    (*(void (**)(void *))(obj + 0x1b4))(*(void **)(obj + 0x1ac));
                                    *(void **)(obj + 0x1b4) = NULL;
                                }
                            }
                        }
                    }
                }
            }
        }
        node = *(u8 **)(node + 0x4c);
    }

    func_0211d7a4();
    func_021204a8();
}

void func_020f18ec(void *arg0, s32 arg1) {
    u16 i;

    for (i = 1; i < 0x19; i++) {
        func_02008e68(0, data_02160b10, 0x100);
        func_02005e80(data_02160b10, data_02151d4c, arg1, i);
        if (func_02109cf0(data_02160b10) != 0) {
            func_02008e68(0, data_02160b10, 0x100);
            func_02005e80(data_02160b10, data_02151d60, arg1, i);
            func_0210b0c8(arg0, func_02109b14(data_02160b10, 0));
        }
        func_02008e68(0, data_02160b10, 0x100);
        func_02005e80(data_02160b10, data_02151d74, arg1, i);
        if (func_02109cf0(data_02160b10) != 0) {
            func_02008e68(0, data_02160b10, 0x100);
            func_02005e80(data_02160b10, data_02151d88, arg1, i);
            func_0210b130(arg0, func_02109b14(data_02160b10, 0));
        }
    }
}
