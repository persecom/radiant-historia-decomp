/* 10 functions from 0x020D3160 to 0x020D413C (main), found by ds-decomp. */
#include "common.h"
typedef struct ObjectList_020d3fe8 { void *object; u8 pad[0x14]; struct ObjectList_020d3fe8 *next; } ObjectList_020d3fe8;
static inline s32 HasObject(u8 *entry, void *obj) {
while(entry) { if (*(void **)entry == obj) return 1; entry=*(u8 **)(entry+8); }
return 0;
}

typedef struct Node120_020d3160 {
    u8 unk_0;
    u8 pad_1[0xf];
    struct Node120_020d3160 *next;
} Node120_020d3160;

typedef struct Node12c_020d3160 {
    s16 unk_0;
    u8 pad_2[0x12];
    struct Node12c_020d3160 *next;
} Node12c_020d3160;

typedef struct Node_020d3fac {
    u8 pad_0[6];
    u8 unk_6;
    u8 pad_7[5];
    struct Node_020d3fac *next;
} Node_020d3fac;

typedef struct Mgr_020d3160 {
    u8 pad_00[4];
    void *unk_4;
    u8 pad_08[0xe4];
    s32 unk_ec;
    u8 pad_f0[0x30];
    Node120_020d3160 *unk_120;
    u8 pad_124[0x8];
    Node12c_020d3160 *unk_12c;
    u8 pad_130[0x14];
    u8 unk_144;
    u8 pad_145[0xb];
    Node_020d3fac *unk_150;
    u8 pad_154[0xc];
    void *unk_160;
    u32 unk_164;
    u16 unk_168;
} Mgr_020d3160;

extern Mgr_020d3160 *data_02160244;
extern u8 *data_02160a74;

void func_021168f8(void *, void *);
void func_0210c5dc(void *);

s32 func_020d3160(s32 cmd, s32 a1, s32 a2, s32 a3) {
    typedef struct Node {
        s16 kind;
        u8 phase;
        u8 pad03;
        s16 x;
        s16 y;
        s16 z;
        s16 value;
        s8 size;
        u8 flags;
        u8 effect;
        s8 timer;
        struct Node *prev;
        struct Node *next;
    } Node;
    typedef struct {
        u16 field00;
        u16 field02;
        u16 field04;
        s16 tick;
        u16 saved00;
        u16 saved02;
        u8 paused;
        u8 pad0d;
        u16 field0e;
        u16 saved0e;
        u8 count;
        u8 lastId;
        s32 lastValue;
    } State;
    extern void *func_0210c594(s32, void *);
    extern void *data_02155c3c;
    extern u8 *data_02160204;
    extern void func_021167f0(void *, void *);
    extern void func_02116844(void *, void *);
    extern void func_02116894(void *, void *, void *);
    extern void *func_020d3cb0(s32);
    extern void *func_020d3e60(u32);
    extern s32 func_020bf508(u32, s32, s32, s32, s16);
    extern void func_020c0660(u32, s16, s16, s16, u32, s16);
    extern void func_02098248(s32);
    register s32 effect = a3;
    register Mgr_020d3160 **mgr = &data_02160244;
    register s32 id = a1;
    register Mgr_020d3160 *initial = *mgr;
    register State *work = (State *)initial->unk_4;
    register s32 one = 1;
    register s32 zero = 0;
    register Node *node;
    register Node *next;
    register s32 three;

    switch (cmd) {
    case 0:
        work->count = zero;
        work->field02 = zero;
        work->field04 = zero;
        work->tick = zero;
        work->field0e = zero;
        work->lastValue = zero;
        node = (Node *)(*mgr)->unk_12c;
        three = 3;
        while (node != NULL) {
            s16 kind = node->kind;
            next = node->next;
            if (kind == 0 || kind == 3 || kind == 8) {
                func_021168f8(&(*mgr)->unk_12c, node);
                if (node != NULL) {
                    func_0210c5dc(node);
                }
            }
            node = next;
        }
        func_020bf508(zero, three, zero, 0x2a, 0x2d0);
        func_020bf508(1, three, zero, 0x2a, 0x2d0);
        func_020bf508(2, three, zero, 0x2a, 0x2d0);
        break;

    case 1: {
        u8 count = work->count;
        three = 3;
        if (count == 0) {
            void **heap = &data_02155c3c;
            s32 bytes = 0x18;
            s32 initialX = 0x100;
            work->count = one;
            work->lastId = (u8)id;
            work->lastValue = a2;
            node = func_0210c594(bytes, *heap);
            node->kind = zero;
            node->phase = zero;
            node->x = initialX;
            node->y = 5;
            node->value = zero;
            node->z = zero;
            node->size = zero;
            func_021167f0(&(*mgr)->unk_12c, node);

            node = func_0210c594(bytes, *heap);
            node->kind = three;
            node->phase = zero;
            node->x = initialX;
            node->y = three;
            node->value = one;
            node->z = zero;
            {
                Mgr_020d3160 *m = *mgr;
                Node12c_020d3160 *head = m->unk_12c;
                if (head == NULL) {
                    func_021167f0(&m->unk_12c, node);
                } else if (head == *(Node12c_020d3160 * volatile *)&m->unk_12c) {
                    func_02116844(&m->unk_12c, node);
                } else {
                    func_02116894(&m->unk_12c, head, node);
                }
            }
        } else if (work->lastValue != a2) {
            u8 previous;
            s32 initialX = 0x100;
            work->lastValue = a2;
            previous = work->lastId;
            work->count++;
            work->lastId = (u8)id;
            if (previous != (u8)id) {
                node = func_0210c594(0x18, data_02155c3c);
                node->kind = three;
                node->phase = zero;
                node->x = initialX;
                node->y = three;
                node->value = work->count;
                node->size = zero;
                node->z = work->count;
                {
                    Mgr_020d3160 *m = *mgr;
                    Node12c_020d3160 *head = m->unk_12c;
                    if (head == NULL) {
                        func_021167f0(&m->unk_12c, node);
                    } else if (head == *(Node12c_020d3160 * volatile *)&m->unk_12c) {
                        func_02116844(&m->unk_12c, node);
                    } else {
                        func_02116894(&m->unk_12c, head, node);
                    }
                }
                work->count++;
                work->lastId = (u8)id;
                node = func_0210c594(0x18, data_02155c3c);
                node->kind = three;
                node->phase = zero;
                node->x = 0x13c;
                node->y = three;
                node->value = work->count;
                node->size = zero;
                node->z = work->count;
                {
                    Mgr_020d3160 *m = *mgr;
                    Node12c_020d3160 *head = m->unk_12c;
                    if (head == NULL) {
                        func_021167f0(&m->unk_12c, node);
                    } else if (head == *(Node12c_020d3160 * volatile *)&m->unk_12c) {
                        func_02116844(&m->unk_12c, node);
                    } else {
                        func_02116894(&m->unk_12c, head, node);
                    }
                }
                if (((u8 *)(*mgr))[0x10c] == 0) {
                    node = func_0210c594(0x18, data_02155c3c);
                    node->kind = 8;
                    node->phase = zero;
                    node->x = initialX;
                    node->y = 0x12;
                    node->value = zero;
                    node->size = zero;
                    node->z = zero;
                    node->effect = (u8)effect;
                    {
                        Mgr_020d3160 *m = *mgr;
                        Node12c_020d3160 *head = m->unk_12c;
                        if (head == NULL) {
                            func_021167f0(&m->unk_12c, node);
                        } else if (head == *(Node12c_020d3160 * volatile *)&m->unk_12c) {
                            func_02116844(&m->unk_12c, node);
                        } else {
                            func_02116894(&m->unk_12c, head, node);
                        }
                    }
                    func_020bf508(effect, 1, 0, 0, 0);
                }
            } else {
                node = func_0210c594(0x18, data_02155c3c);
                node->kind = three;
                node->phase = zero;
                node->x = 0x100;
                node->y = three;
                node->value = work->count;
                node->size = zero;
                node->z = work->count;
                {
                    Mgr_020d3160 *m = *mgr;
                    Node12c_020d3160 *head = m->unk_12c;
                    if (head == NULL) {
                        func_021167f0(&m->unk_12c, node);
                    } else if (head == *(Node12c_020d3160 * volatile *)&m->unk_12c) {
                        func_02116844(&m->unk_12c, node);
                    } else {
                        func_02116894(&m->unk_12c, head, node);
                    }
                }
            }
        } else {
            work->count++;
            work->lastId = (u8)id;
            node = func_0210c594(0x18, data_02155c3c);
            node->kind = three;
            node->phase = zero;
            node->x = 0x100;
            node->y = three;
            node->value = work->count;
            node->size = zero;
            node->z = work->count;
            {
                Mgr_020d3160 *m = *mgr;
                Node12c_020d3160 *head = m->unk_12c;
                if (head == NULL) {
                    func_021167f0(&m->unk_12c, node);
                } else if (head == *(Node12c_020d3160 * volatile *)&m->unk_12c) {
                    func_02116844(&m->unk_12c, node);
                } else {
                    func_02116894(&m->unk_12c, head, node);
                }
            }
        }
        break;
    }
    case 2: {
        u8 *entry;
        if (work->paused == 0) {
            u8 *data = data_02160204;
            if (work->count > data[0x140]) {
                data[0x140] = work->count;
            }
        }
        entry = func_020d3e60(work->count);
        if (entry == NULL) {
            work->count = one;
            return 1000;
        }
        return *(s16 *)(entry + 2);
    }
    case 8:
        return work->count;

    case 7: {
        s32 x = 0x100;
        s32 bytes = 0x18;
        void **heap = &data_02155c3c;
        three = 3;
        if (work->count > three) {
            if (func_020d3cb0(6) == NULL) {
                node = func_0210c594(bytes, *heap);
                node->kind = 6;
                node->phase = zero;
                node->x = x;
                node->y = bytes;
                node->value = work->count;
                node->z = 0x15;
                node->timer = 0x20;
                func_021167f0(&(*mgr)->unk_12c, node);
                node = func_0210c594(bytes, *heap);
                node->kind = one;
                node->phase = zero;
                node->x = 0xc3;
                node->y = 5;
                node->value = work->count;
                node->timer = 0x20;
                func_021167f0(&(*mgr)->unk_12c, node);
                node = func_0210c594(bytes, *heap);
                node->kind = 4;
init_finish_node:
                node->phase = zero;
                node->x = 0xe6;
                node->y = three;
                node->value = work->count;
                node->size = zero;
                node->z = work->count;
                node->timer = 0x20;
                func_021167f0(&(*mgr)->unk_12c, node);
            } else if (func_020d3cb0(7) == NULL) {
                node = func_0210c594(bytes, *heap);
                node->kind = 7;
                node->phase = zero;
                node->x = x;
                node->y = bytes;
                node->value = work->count;
                node->z = 0x15;
                node->timer = 0x20;
                func_021167f0(&(*mgr)->unk_12c, node);
                node = func_0210c594(bytes, *heap);
                node->kind = 2;
                node->phase = zero;
                node->x = 0xc3;
                node->y = 5;
                node->value = work->count;
                node->timer = 0x20;
                func_021167f0(&(*mgr)->unk_12c, node);
                node = func_0210c594(bytes, *heap);
                node->kind = 5;
                goto init_finish_node;
            }
            break;
        }
        return one;
    }
    case 3:
        if (work->paused == 0) {
            node = (Node *)initial->unk_12c;
            if (node != NULL) {
                s32 endX = -0x114;
                s32 startX = endX + 0x100;
                s32 limitX = startX;
                do {
                    switch (node->kind) {
                    case 0:
                        node->x -= 0xc;
                        if (*(volatile s16 *)&node->x < 0xc3) {
                            node->x = 0xc3;
                        }
                        if (work->count - node->value == 2 && node->value % 6 != 0) {
                            node->size++;
                            if (*(volatile s8 *)&node->size > 10) {
                                node->size = zero;
                                node->value = work->count;
                            }
                        } else {
                            node->value = work->count;
                        }
                        break;
                    case 3:
                        node->x -= 8;
                        if (*(volatile s16 *)&node->x < 0xe6) {
                            node->x = 0xe6;
                            if (node->phase == 0) {
                                node->size += 2;
                                if (*(volatile s8 *)&node->size > 5) {
                                    node->size = 5;
                                    node->phase = one;
                                }
                            } else if (node->phase == 1) {
                                node->size -= 2;
                                if (*(volatile s8 *)&node->size < 0) {
                                    node->size = zero;
                                    node->phase = 2;
                                }
                            } else if (node->phase == 2) {
                                if (work->count > node->value) {
                                    node->flags |= 1;
                                }
                            }
                        }
                        break;
                    case 6:
                    case 7:
                        node->x -= 0x18;
                        if (node->value <= 6) {
                            goto clamp_first;
                        }
                        if (node->value <= 0xc) {
clamp_first:
                            if (*(volatile s16 *)&node->x < 0xc5) {
                                node->x = 0xc5;
                            }
                        } else if (node->value <= 0x12) {
                            if (*(volatile s16 *)&node->x < 0x90) {
                                node->x = 0x90;
                            }
                        } else if (node->value <= 0x18) {
                            goto clamp_last;
                        } else {
clamp_last:
                            if (*(volatile s16 *)&node->x < 0x82) {
                                node->x = 0x82;
                            }
                        }
                        goto update_timer;
                    case 8:
                        if (node->size < 10) {
                            node->x -= 0x24;
                            if (*(volatile s16 *)&node->x < limitX) {
                                node->x = (s16)startX;
                                node->size++;
                            }
                        } else {
                            node->size++;
                            node->x -= 0x40;
                            if (*(volatile s16 *)&node->x < endX) {
                                node->x = (s16)endX;
                            }
                        }
                        if (node->size < 20) {
                            if (func_020bf508(node->effect, 4, zero, zero, zero) == 0) {
                                func_020bf508(node->effect, one, zero, zero, zero);
                            } else {
                                func_020bf508(node->effect, 2, (s16)(node->x + 0x88), 0x2a, 0x2d0);
                            }
                        } else {
                            node->flags |= 1;
                        }
                        break;
                    case 1:
                    case 2:
                    case 4:
                    case 5:
update_timer:
                        node->timer--;
                        if (*(volatile s8 *)&node->timer < 0) {
                            node->timer = zero;
                            node->flags |= 1;
                        }
                        break;
                    }
                    if (func_020d3cb0(6) != NULL || func_020d3cb0(7) != NULL) {
                        s16 kind = node->kind;
                        if (kind == 6 || kind == 1 || kind == 4 || kind == 7 || kind == 2 || kind == 5) {
                            func_020c0660((u8)kind, node->x, node->y, node->z, node->value, node->size);
                        }
                    } else {
                        func_020c0660((u8)node->kind, node->x, node->y, node->z, node->value, node->size);
                    }
                    node = node->next;
                } while (node != NULL);
            }
        }
        {
            Mgr_020d3160 **cleanupMgr = &data_02160244;
            node = (Node *)(*cleanupMgr)->unk_12c;
            three = 3;
            while (node != NULL) {
                next = node->next;
                if (node->flags & 1) {
                    func_020bf508(node->effect, three, zero, 0x2a, 0x2d0);
                    func_021168f8(&(*cleanupMgr)->unk_12c, node);
                    if (node != NULL) {
                        func_0210c5dc(node);
                    }
                }
                node = next;
            }
        }
        break;
    case 4:
        work->saved00 = work->field00;
        work->saved02 = work->field02;
        work->saved0e = work->field0e;
        break;
    case 5:
        work->field00 = work->saved00;
        work->field02 = work->saved02;
        work->field0e = work->saved0e;
        break;
    case 6:
        work->paused = (u8)id;
        break;
    }
    if (work->tick != 0) {
        work->tick++;
        if (*(volatile s16 *)&work->tick > 4) {
            work->tick = zero;
        }
    }
    if (work->field02 >= 2) {
        func_02098248(one);
    }
    return zero;
}

void func_020d3c98(s32 arg0) {
    Mgr_020d3160 *mgr = data_02160244;
    if (mgr != NULL) {
        mgr->unk_ec = arg0;
    }
}

void *func_020d3cb0(s32 arg0) {
    Node12c_020d3160 *node = data_02160244->unk_12c;
    while (node != NULL) {
        if (node->unk_0 == arg0) {
            return node;
        }
        node = node->next;
    }
    return NULL;
}

extern void func_02005e80(void *, void *);
extern void *func_021092d8(void *);
extern void *func_0210c594(s32, void *);
extern s32 func_02092994(void *, s32);
extern void func_021167f0(void *, void *);
extern s32 func_02109444(void *);
extern void func_021093b0(void *);
extern u8 data_02151390[];
extern void *data_02155c3c;
void func_020d3cec(void) {
    u8 buf[0x40];
    void *file;

    func_02005e80(buf, data_02151390);
    file = func_021092d8(buf);
    do {
        u8 *entry = func_0210c594(0x14, data_02155c3c);
        *(u8 *)(entry + 0x0) = func_02092994(file, 0);
        *(u16 *)(entry + 0x2) = func_02092994(file, 0);
        *(u16 *)(entry + 0x4) = func_02092994(file, 0);
        *(u16 *)(entry + 0x6) = func_02092994(file, 0);
        *(u16 *)(entry + 0x8) = func_02092994(file, 0);
        *(u16 *)(entry + 0xa) = func_02092994(file, 0);
        func_021167f0(&data_02160244->unk_120, entry);
    } while (func_02109444(file) != 0);
    if (file != NULL) {
        func_021093b0(file);
    }
}

void func_020d3dd8(void) {
    while (data_02160244->unk_120 != NULL) {
        Node120_020d3160 *node = data_02160244->unk_120;
        func_021168f8(&data_02160244->unk_120, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
    while (data_02160244->unk_12c != NULL) {
        Node12c_020d3160 *node = data_02160244->unk_12c;
        func_021168f8(&data_02160244->unk_12c, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

void *func_020d3e60(u32 arg0) {
    Node120_020d3160 *node = data_02160244->unk_120;
    while (node != NULL) {
        if (node->unk_0 == arg0) {
            return node;
        }
        node = node->next;
    }
    return NULL;
}

void func_020d3e9c(s32 arg0, u32 arg1) {
    s32 one = 1;
    void *p = *(void **)(data_02160a74 + 0x94);
    if (arg0 == 0) {
        func_020b52f4(one);
        func_020a5ce4(p);
        func_020a9544(*(void **)p);
        func_020e1ec8(p, 0xe);
        func_020a8810(*(void **)((u8 *)p + 4), 0x10);
        func_020e24bc(p, 0, 8, arg1, one);
    } else if (arg0 == 1) {
        func_020b52f4(0);
        func_020a5ce4(p);
    }
}

void func_020d3f38(u8 arg0) {
    Mgr_020d3160 *mgr = data_02160244;
    if (mgr->unk_144 != 4 && arg0 == 4 && *(u8 *)(mgr->unk_4 + 0x12) == 0) {
        u32 zero;
        func_020d0884();
        zero = 0;
        func_020d3160(7, zero, zero, zero);
        func_020d3160(zero, zero, zero, zero);
    }
    data_02160244->unk_144 = arg0;
}

void *func_020d3fac(u8 arg0) {
    Node_020d3fac *node = data_02160244->unk_150;
    while (node != NULL) {
        if (node->unk_6 == arg0) {
            return node;
        }
        node = node->next;
    }
    return NULL;
}

void func_020d3fe8(u8 *p,u8 *list,u8 *arg2) {
s32 found=0;
ObjectList_020d3fe8 *node=(ObjectList_020d3fe8 *)list;
Mgr_020d3160 *mgr;
u16 count;
func_020d3160(6,**(u8 **)(p+0x118),0,*(u16 *)(p+0x90)&255);
mgr=data_02160244;
count=mgr->unk_168;
while(node) {
void *obj=node->object;
if(obj) {
u8 *entry=mgr->unk_160;
while(entry) {
if(*(void **)entry==obj) {found=1;break;}
entry=*(u8 **)(entry+8);
}
}
if(found) break;
node=node->next;
}
if(arg2[7]!=8) {
func_020d0884();
while(list) {
void *obj=*(void **)list;
if(obj) {
u8 *entry=func_0210c594(12,data_02155c3c);
*(void **)entry=obj;
func_021167f0((u8 *)data_02160244+0x160,entry);
}
list=*(u8 **)(list+0x18);
}
}
mgr=data_02160244;
if(mgr->unk_144==4 && count==0) found=1;
if(found) mgr->unk_144=*(s16 *)(arg2+0x16);
else {
s32 value=*(s16 *)(arg2+0x16);
s32 zero=0;
mgr->unk_144=value;
func_020d3160(7,zero,zero,zero);
func_020d3160(zero,zero,zero,zero);
}
}

