/* 10 functions from 0x02102E60 to 0x02103DC8 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160c74;

extern char data_021556b8[];
extern u8 *data_02160200;
extern void func_02005e80(char *, char *);
extern void *func_021092d8(char *);
extern s32 func_021093f0(void *);
extern s32 func_02092994(void *, s32);
extern s32 func_02109444(void *);
extern void func_021093b0(void *);

s32 func_02102e60(void)
{
    typedef struct {
        s8 anim_mode;
        u8 pad01[3];
        s32 anim_id;
        u8 anim_value;
        u8 pad09;
        s16 scene;
        s16 angle;
        u16 pad0e;
        s32 x;
        s32 z;
        s8 kind;
        u8 pad19[3];
        s32 required;
        s32 excluded;
        s32 param;
        s32 alternate;
        s8 mode;
        s8 value;
        s8 field2e;
        s8 field2f;
        u32 field30;
    } Entry;
    extern u8 *data_02160204;
    extern u8 *data_02160200;
    extern u8 data_02154018[];
    extern u8 data_0215493c[];
    extern u8 data_02153860[];
    extern void *func_02046f90(u16, u16);
    extern void *func_020e9fe8(void *, u16);
    extern s32 func_020f62f4(s32, s32);
    extern void func_02052240(u8 *);
    extern void func_0205440c(u8 *, s32);
    extern void func_020477dc(void *, s32, s32);
    s32 no_flag;
    u32 one;
    Entry *entry;
    s16 i;
    s32 group;
    s16 count;
    u8 *obj;
    s32 object_id;
    s32 instance;
    s32 scene;
    s32 first_id;
    s32 other_id;
    s32 small_id;
    s32 lower;
    s32 hide_id;
    s32 upper;
    s32 special;
    s32 flag, v, anim;
    u32 mask, type;
    u8 *state;
    u8 *secondary;
    Entry *table;
    i = 0;
    scene = *(u16 *)(data_02160204 + 0x72);
    count = i;
    one = 1;
    group = (scene - 1) / 20 + 1;
    if (group >= 1 && group < 11) {
        entry = (Entry *)data_02154018;
    } else if (group >= 11 && group < 21) {
        entry = (Entry *)data_0215493c;
    } else {
        entry = (Entry *)data_02153860;
    }
    special = 5301;
    no_flag = -1;
    first_id = special - 300;
    small_id = 500 - no_flag;
    other_id = special - 220;
    hide_id = special + 254;
    lower = 6000 - 1000;
    upper = 6000 - 1000;
    do {
        if (scene != entry->scene || data_02160204[0x7a] != 0) {
            goto next_record;
        }
        if (entry->kind == 0) {
            object_id = first_id;
            instance = count + 0x5dd;
        } else if (entry->kind == 1) {
            object_id = special;
            instance = count + 0x672;
        }
        count++;
        *(s32 *)(data_02160200 + 0x168) = entry->param;
        flag = entry->required;
        if (flag != no_flag) {
            mask = one << (flag % 32);
            if ((((u32 *)data_02160200)[flag / 32] & mask) == 0) {
                goto next_record;
            }
        }
        flag = entry->excluded;
        if (flag != no_flag) {
            mask = one << (flag % 32);
            if (((u32 *)data_02160200)[flag / 32] & mask) {
                goto next_record;
            }
        }
        obj = func_02046f90((u16)object_id, (u16)instance);
        if (object_id != 2000) {
            secondary = func_020e9fe8((void *)(special + 700), (u16)(instance + 0xbb9));
            *(s32 *)(secondary + 0x1c) = 0;
            *(s32 *)(secondary + 0x20) = 0;
            *(s32 *)(secondary + 0x24) = 0x32000;
            *(u32 *)(secondary + 0x18) &= ~1U;
        }
        *(u16 *)(obj + 0x92) = (u16)func_020f62f4(entry->angle, one);
        v = func_020f62f4(entry->x, 0);
        *(s32 *)(obj + 0) = v;
        *(s32 *)(obj + 0x18) = v;
        v = func_020f62f4(entry->z, 0);
        *(s32 *)(obj + 8) = v;
        *(s32 *)(obj + 0x20) = v;
        if (entry->anim_mode == 0) {
            anim = entry->anim_id;
            if (anim > 0 && anim <= 100) {
                *(u16 *)(*(u8 **)(obj + 0xb0) + 0xe) = 0;
            } else if (anim > 200 && anim <= 300) {
                *(u16 *)(*(u8 **)(obj + 0xb0) + 0xe) = 5;
            } else if (anim > 300 && anim <= 500) {
                *(u16 *)(*(u8 **)(obj + 0xb0) + 0xe) = one;
            } else if (anim > 500 && anim <= 700) {
                *(u16 *)(*(u8 **)(obj + 0xb0) + 0xe) = 2;
            } else if (anim > 700 && anim <= 800) {
                *(u16 *)(*(u8 **)(obj + 0xb0) + 0xe) = 3;
            } else {
                *(u16 *)(*(u8 **)(obj + 0xb0) + 0xe) = 0;
            }
            *(u16 *)(*(u8 **)(obj + 0xb0) + 0x10) = (u16)entry->anim_id;
            *(u16 *)(*(u8 **)(obj + 0xb0) + 0x12) = entry->anim_value;
        } else if (entry->anim_mode == 1) {
            *(u16 *)(*(u8 **)(obj + 0xb0) + 0xe) = 4;
            *(u16 *)(*(u8 **)(obj + 0xb0) + 0x10) = (u16)entry->anim_id;
            *(u16 *)(*(u8 **)(obj + 0xb0) + 0x12) = one;
        } else {
            *(u16 *)(*(u8 **)(obj + 0xb0) + 0xe) = 5;
            *(u16 *)(*(u8 **)(obj + 0xb0) + 0x10) = (u16)entry->anim_id;
            *(u16 *)(*(u8 **)(obj + 0xb0) + 0x12) = entry->anim_value;
        }
    anim_done:
        *(u16 *)(*(u8 **)(obj + 0xb0) + 0xa) = one;
        func_02052240(obj);
        type = *(u16 *)(obj + 0x8e);
        if (type != special && type != 2000 && type != other_id && type != small_id) {
            object_id = 0;
            if (type > (u32)lower && type < 6000) {
                v = *(u32 *)(obj + 0x80) | 0x400;
                *(u32 *)(obj + 0x80) = v | 2;
            }
        } else {
            switch (entry->mode) {
            default:
            case 0:
                obj[0x9d] = 0;
                *(s32 *)*(u8 **)(obj + 0xb0) = 0;
                break;
            case 1:
                obj[0x9d] = entry->value;
                break;
            case 2:
                *(s32 *)*(u8 **)(obj + 0xb0) = (s32)entry->value * 4096;
                break;
            }
            v = entry->field2e;
            obj[0xce] = (u8)v;
            if ((v & 0xff) == 3) {
                *(u16 *)(*(u8 **)(obj + 0xb0) + 0x14) = (u16)entry->alternate;
                state = data_02160200;
                flag = *(s32 *)(state + 0x168);
                mask = one << (flag % 32);
                if (((u32 *)state)[flag / 32] & mask) {
                    func_0205440c(obj, one);
                } else {
                    flag = entry->alternate;
                    if (flag != no_flag) {
                        mask = one << (flag % 32);
                        if (((u32 *)state)[flag / 32] & mask) {
                            func_0205440c(obj, one);
                        } else {
                            *(u32 *)(obj + 0xac) |= 0x80000;
                            func_0205440c(obj, 0);
                        }
                    }
                    if (data_02160200 != NULL) {
                        *(u16 *)(*(u8 **)(obj + 0xb0) + 0x22) = (u16)*(s32 *)(data_02160200 + 0x168);
                    }
                }
            }
            obj[0xcf] = entry->field2f;
        }
        if (data_02160200 != NULL) {
            *(u16 *)(*(u8 **)(obj + 0xb0) + 0x22) = (u16)*(s32 *)(data_02160200 + 0x168);
        }
        if (*(u16 *)(obj + 0x8e) == hide_id) {
            func_0205440c(obj, 0);
        }
        *(u32 *)(obj + 0x58) = 0x1000;
        type = *(u16 *)(obj + 0x8e);
        if (type > 1000 && type < (u32)upper) {
            func_020477dc(obj, 2, 0);
        } else if (type != 0 && type < 700) {
            func_020477dc(obj, 2, 0);
        } else {
            func_020477dc(obj, 0, 0);
        }
        flag = entry->param;
        mask = one << (flag % 32);
        if (((u32 *)data_02160200)[flag / 32] & mask) {
            func_020477dc(obj, 2, 0);
        }
    next_record:
        i++;
        if (group >= 1 && group < 11) {
            entry = (Entry *)(data_02154018 + (s32)i * 0x34);
        } else if (group >= 11 && group < 21) {
            entry = (Entry *)(data_0215493c + (s32)i * 0x34);
        } else {
            entry = (Entry *)(data_02153860 + (s32)i * 0x34);
        }
    } while (entry->anim_id != no_flag);
    return 1;
}

s32 func_0210344c(void)
{
    typedef struct {
        s32 id;
        s16 scene;
        s16 angle;
        s32 x;
        s32 z;
        s32 required;
        s32 excluded;
        s32 param;
        s32 alternate;
        s8 mode;
        s8 value;
        s8 field22;
        s8 field23;
        s16 field24;
        s16 field26;
    } Entry;
    extern u8 *data_02160204;
    extern u8 *data_02160200;
    extern u8 data_02152fa0[];
    extern u8 data_02153388[];
    extern u8 data_02152d48[];
    extern void *func_02046f90(u16, u16);
    extern void *func_020e9fe8(void *, u16);
    extern s32 func_020f62f4(s32, s32);
    extern void func_02052240(u8 *);
    extern void func_0205440c(u8 *, s32);
    extern void func_020477dc(void *, s32, s32);
    s32 no_flag;
    u32 one;
    s32 instance;
    Entry *entry;
    s16 i;
    s32 group;
    u8 *obj;
    s32 zero;
    s16 count;
    s32 scene;
    s32 special, alternate_id, id, flag, v;
    u32 mask;
    u8 *state;
    u8 *secondary;
    u8 *config;
    Entry *table;
    i = 0;
    config = data_02160204;
    scene = *(u16 *)(config + 0x72);
    zero = i;
    group = (scene - 1) / 20 + 1;
    count = i;
    one = 1;
    if (config[0x7a] == 1) {
        return 1;
    }
    if (group >= 1 && group < 11) {
        entry = (Entry *)data_02152fa0;
    } else if (group >= 11 && group < 21) {
        entry = (Entry *)data_02153388;
    } else {
        entry = (Entry *)data_02152d48;
    }
    special = 0x14d3;
    no_flag = -1;
    alternate_id = special - 10;
    do {
        if (scene != entry->scene || data_02160204[0x7a] != 0) {
            goto next_record;
        }
        id = entry->id;
        instance = count + 0x68b;
        count++;
        *(s32 *)(data_02160200 + 0x168) = entry->param;
        flag = entry->required;
        if (flag != no_flag) {
            mask = one << (flag % 32);
            if ((((u32 *)data_02160200)[flag / 32] & mask) == 0) {
                goto next_record;
            }
        }
        flag = entry->excluded;
        if (flag != no_flag) {
            mask = one << (flag % 32);
            if (((u32 *)data_02160200)[flag / 32] & mask) {
                goto next_record;
            }
        }
        if (entry->id == special) {
            obj = func_02046f90((u16)id, (u16)(instance + 0xbb9));
        } else {
            obj = func_02046f90((u16)id, (u16)instance);
        }
        secondary = func_020e9fe8((void *)0x1771, (u16)(instance + 0xbb9));
        *(s32 *)(secondary + 0x1c) = zero;
        *(s32 *)(secondary + 0x20) = zero;
        *(s32 *)(secondary + 0x24) = 0x32000;
        *(u32 *)(secondary + 0x18) &= ~1U;
        *(u16 *)(obj + 0x92) = (u16)func_020f62f4(entry->angle, one);
        v = func_020f62f4(entry->x, zero);
        *(s32 *)(obj + 0) = v;
        *(s32 *)(obj + 0x18) = v;
        v = func_020f62f4(entry->z, zero);
        *(s32 *)(obj + 8) = v;
        *(s32 *)(obj + 0x20) = v;
        if (entry->id == alternate_id) {
            *(u16 *)(*(u8 **)(obj + 0xb0) + 0xa) = (u16)entry->field24;
        }
        func_02052240(obj);
        switch (entry->mode) {
        default:
        case 0:
            obj[0x9d] = zero;
            *(s32 *)*(u8 **)(obj + 0xb0) = zero;
            break;
        case 1:
            obj[0x9d] = entry->value;
            break;
        case 2:
            *(s32 *)*(u8 **)(obj + 0xb0) = (s32)entry->value * 4096;
            break;
        }
        v = entry->field22;
        obj[0xce] = (u8)v;
        if ((v & 0xff) == 3) {
            *(u16 *)(*(u8 **)(obj + 0xb0) + 0x14) = (u16)entry->alternate;
            *(u16 *)(*(u8 **)(obj + 0xb0) + 0x16) = (u16)entry->required;
            *(u16 *)(*(u8 **)(obj + 0xb0) + 0x18) = (u16)entry->excluded;
            state = data_02160200;
            flag = *(s32 *)(state + 0x168);
            mask = one << (flag % 32);
            if (((u32 *)state)[flag / 32] & mask) {
                func_0205440c(obj, one);
            } else {
                flag = entry->alternate;
                if (flag != no_flag) {
                    mask = one << (flag % 32);
                    if (((u32 *)state)[flag / 32] & mask) {
                        func_0205440c(obj, one);
                    } else {
                        *(u32 *)(obj + 0xac) |= 0x80000;
                        func_0205440c(obj, zero);
                    }
                }
                if (data_02160200 != NULL) {
                    *(u16 *)(*(u8 **)(obj + 0xb0) + 0x22) = (u16)*(s32 *)(data_02160200 + 0x168);
                }
            }
        }
        obj[0xcf] = entry->field23;
        *(u32 *)(obj + 0x58) = 0x1000;
        func_020477dc(obj, zero, zero);
        if (entry->id == special) {
            *(u16 *)(obj + 0x96) = one;
        }
    next_record:
        i++;
        if (group >= 1 && group < 11) {
            entry = (Entry *)(data_02152fa0 + (s32)i * 0x28);
        } else if (group >= 11 && group < 21) {
            entry = (Entry *)(data_02153388 + (s32)i * 0x28);
        } else {
            entry = (Entry *)(data_02152d48 + (s32)i * 0x28);
        }
    } while (entry->id != no_flag);
    return 1;
}

s32 func_02103848(void) {
    typedef struct {
        s32 id;
        s16 scene;
        s16 angle;
        s32 x;
        s32 z;
        s32 param;
        s8 mode;
        s8 value;
        s8 field16;
        s8 field17;
        u32 field18;
    } Entry;
    extern u8 *data_02160204;
    extern u8 *data_02160200;
    extern u8 data_02152b50[];
    extern void *func_02046f90(u16, u16);
    extern void *func_020e9fe8(void *, u16);
    extern s32 func_020f62f4(s32, s32);
    extern void func_02052240(u8 *);
    extern void func_0205440c(u8 *, s32);
    extern void func_020477dc(void *, s32, s32);
    s32 idB;
    u8 *obj;
    s32 instance;
    Entry *entry;
    s16 i;
    u32 scene;
    s16 count;
    s32 idA;
    s32 upper, terminator, id, v;
    u32 type;
    u8 *secondary;
    Entry *table;
    i = 0;
    entry = (Entry *)data_02152b50;
    scene = *(u16 *)(data_02160204 + 0x72);
    count = i;

    if (data_02160204[0x7a] == 1) return 1;
    table = entry;
    idA = 6001 - 0x398;
    idB = 501 + 0x12c0;
    upper = 6001 - 1;
    terminator = 500 - 501;
    do {
        if (scene == entry->scene && data_02160204[0x7a] == 0) {
            instance = count + 0x654;
            count++;
            id = entry->id;
            *(s32 *)(data_02160200 + 0x168) = entry->param;
            obj = func_02046f90((u16)id, (u16)instance);
            if (id != 2000) {
                secondary = func_020e9fe8((void *)6001, (u16)(instance + 0xbb9));
                *(s32 *)(secondary + 0x1c) = 0;
                *(s32 *)(secondary + 0x20) = 0;
                *(s32 *)(secondary + 0x24) = 0x32000;
                *(u32 *)(secondary + 0x18) &= ~1U;
            }
            *(u16 *)(obj + 0x92) = (u16)func_020f62f4(entry->angle, 1);
            v = func_020f62f4(entry->x, 0);
            *(s32 *)(obj + 0) = v;
            *(s32 *)(obj + 0x18) = v;
            v = func_020f62f4(entry->z, 0);
            *(s32 *)(obj + 8) = v;
            *(s32 *)(obj + 0x20) = v;
            *(u16 *)(*(u8 **)(obj + 0xb0) + 0xe) = (u16)entry->param;
            *(u16 *)(*(u8 **)(obj + 0xb0) + 0xa) = 1;
            func_02052240(obj);
            type = *(u16 *)(obj + 0x8e);
            if (type != idB && type != 2000 && type != idA && type != 501) {
                if (type > 5000 && type < (u32)upper) {
                    v = *(u32 *)(obj + 0x80) | 0x400;
                    *(u32 *)(obj + 0x80) = v | 2;
                }
            } else {
                switch (entry->mode) {
                default:
                case 0:
                    obj[0x9d] = 0;
                    *(s32 *)*(u8 **)(obj + 0xb0) = 0;
                    break;
                case 1:
                    obj[0x9d] = entry->value;
                    break;
                case 2:
                    *(s32 *)*(u8 **)(obj + 0xb0) = (s32)entry->value * 4096;
                    break;
                }
                obj[0xce] = entry->field16;
                obj[0xcf] = entry->field17;
            }
            if (data_02160200 != NULL) {
                *(u16 *)(*(u8 **)(obj + 0xb0) + 0x22) = (u16)*(u32 *)(data_02160200 + 0x168);
            }
            func_0205440c(obj, 1);
            *(u32 *)(obj + 0x58) = 0x1000;
            type = *(u16 *)(obj + 0x8e);
            if (type > 1000 && type < 5000) {
                func_020477dc(obj, 2, 0);
            } else if (type != 0 && type < 700) {
                func_020477dc(obj, 2, 0);
            } else {
                func_020477dc(obj, 0, 0);
            }
        }
        i++;
        entry = (Entry *)(data_02152b50 + (s32)i * 0x1c);
    } while (entry->id != terminator);
    return 1;
}

s32 func_02103b04(s32 arg0, void *arg1)
{
    s32 result;
    void *p;
    const char *key;

    if (arg0 == 0)
        return -4;

    p = (void *)func_021092d8(arg1);

    if (p == NULL)
        return -1;

    result = 0;

retry:
    key = (const char *)func_02092a40(p, (void *)result);

    if (key == NULL)
        return -3;

    if (func_020123f0((void *)arg0, (const void *)key) != 0)
        goto advance;

    result = (u16)func_02092994(p, result);
    goto done;

advance:
    if (func_02109444(p) != 0)
        goto retry;

    result = -2;

done:
    func_021093b0(p);
    return result;
}

s32 func_02103b90(void *p, s32 arg1, s32 arg2) {
    s32 result = 0;
    s32 r;
    func_0210950c();
    if (arg2 == 0) {
        return -4;
    }
    if (arg1 != 1) {
        goto tail;
    }
    func_021093f0(p);
    r = func_02092a40(p, result);
    if (r == 0) {
        goto cleanup;
    }
    if (arg1 != 0) {
        goto other;
    }
    func_021093f0(p);
    if (func_020123f0(arg2, r) != 0) {
        goto cleanup;
    }
    return (u16)func_02092994(p, 0);
other:
    r = func_02109444(p);
    if (r == 0) {
        return -2;
    }
    return r;
cleanup:
    func_021093b0(p);
    return result;
tail:
    return -2;
}

s32 func_02103c2c(s32 arg0, s32 arg1, void *arg2) {
    void *p = func_021092d8(arg2);
    s32 result;
    if (p == NULL) {
        return -1;
    }
    result = func_02103b90(p, arg0, arg1);
    func_021093b0(p);
    return result;
}

void *func_02103c6c(void *arg0, s32 arg1) {
    char buf[0x50];
    char *p = buf;
    void *node;
    u8 wanted;
    if (arg1 < 0) {
        return NULL;
    }
    func_02005e80(p, data_021556b8);
    node = func_021092d8(p);
    if (node == NULL) {
        return NULL;
    }
    wanted = *(u8 *)(data_02160200 + 0x16c);
    for (;;) {
        u16 v;
        func_021093f0(node);
        v = (u16)func_02092994(node, 0);
        if (v == wanted) {
            *(u16 *)((u8 *)arg0 + 2) = v;
            *(u16 *)arg0 = (u16)func_02092994(node, 0);
            break;
        }
        if (func_02109444(node) == 0) {
            break;
        }
    }
    if (node != NULL) {
        func_021093b0(node);
    }
    return arg0;
}

s32 func_02103d30(void) {
    u8 *p = data_02160c74;
    if (p == NULL) {
        return 2;
    }
    if (*(s32 *)(p + 0x28) != 0) {
        return 1;
    }
    *(s32 *)(p + 0x28) = 0x4a1;
    *(s32 *)(data_02160c74 + 0x2c) = 0x80;
    return 0;
}

s32 func_02103d78(s32 arg0)
{
  int new_var;
  u8 *new_var2;
  new_var = (arg0 - (*((s32 *) (data_02160c74 + 0x2c)))) + (*((s32 *) (new_var2 = data_02160c74 + 0x28)));
  return new_var;
}

extern s32 func_020bdba0(u16);
extern void func_020aa6bc(s32);
s32 func_02103d98(s32 arg0) {
    if (func_020bdba0((u16)arg0) != 0) {
        return 0;
    }
    func_020aa6bc(arg0);
    return 1;
}

