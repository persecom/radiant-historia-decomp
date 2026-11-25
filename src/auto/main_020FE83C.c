/* 1 function from 0x020FE83C to 0x021011A8 (main), found by ds-decomp. */
#include "common.h"

s32 func_020fe83c(void)
{
    typedef struct { s32 x, y, z; } VecFe83;
    extern void *data_021626e8[];
    extern u8 *data_02160204;
    extern u8 *data_021600bc;
    extern u8 *data_02160200;
    extern u8 *data_021600ac;
    extern u8 *data_02160078;
    extern u32 data_02155c3c;
    extern const char data_02155468[];
    extern const char data_02155470[];
    extern const char data_02155478[];
    extern const char data_02155480[];
    extern const char data_02155488[];
    extern const char data_02155490[];
    extern const char data_02155494[];
    extern const char data_0215549c[];
    extern const char data_021554a0[];
    extern const char data_021554a8[];
    extern const char data_021554ac[];
    extern const char data_021554b4[];
    extern const char data_021554b8[];
    extern const char data_021554c0[];
    extern const char data_021554c8[];
    extern const char data_021554cc[];
    extern const char data_021554d4[];
    extern const char data_021554d8[];
    extern const char data_021554e0[];
    extern const char data_021554e4[];
    extern const char data_021554ec[];
    extern const char data_021554f4[];
    extern const char data_021554fc[];
    extern const char data_02155504[];
    extern const char data_0215550c[];
    extern const char data_02155514[];
    extern const char data_0215551c[];
    extern const char data_02155524[];
    extern const char data_0215552c[];
    extern const char data_02155534[];
    extern const char data_02155550[];
    extern const char data_0215556c[];
    extern const char data_02155588[];
    extern const char data_02155590[];
    extern const char data_02155598[];
    extern const char data_0215559c[];
    extern const char data_021555a0[];
    extern const char data_021555a4[];
    extern const char data_021555ac[];
    extern const char data_021555b4[];
    extern const char data_021555b8[];
    extern const char data_021555c0[];
    extern s32 func_0210cc54(const char *);
    extern s32 func_0210ce5c(void);
    extern void *func_02046f90(u16, u16);
    extern void *func_020e9fe8(void *, u16);
    extern void func_02052240(u8 *);
    extern void func_020477dc(void *, s32, s32);
    extern void *func_02047820(u16);
    extern void func_021167f0(void *, void *);
    extern void func_0210cef8(void);
    extern s32 func_020ddc8c(void *, void *);
    extern s32 func_020f5948(void);
    extern void *func_02117630(u8 *, u32);
    extern s32 func_020f5704(s32);
    extern void func_02052844(u8 *, s32, s32);
    extern void func_021168f8(void *, void *);
    extern void func_02047490(void *);
    extern s32 func_0210c2f4(void *, void *);
    extern void func_0206e8f0(u32, void *, u8);
    extern u32 *func_020f0aa4(s32);
    extern void func_020f09d4(void *);
    extern void *func_0210c594(u32, u32);
    extern void func_021167ac(void *, s32);
    extern void *func_0204680c(const char *, u16);
    extern s32 func_021093f0(void *);
    extern void *func_0210957c(s32);
    extern s32 func_020f685c(u8 *, s32);
    extern s32 func_02109444(void *);
    extern void func_0210c970(void *);
    extern void *func_0204785c(u16, u16);
    extern void func_0210c5dc(void *);
    extern void *func_021092d8(void *);
    extern s32 func_0210cdfc(u8 *, s32);
    extern s32 func_020f6118(u8 *, s32);
    extern void func_021093b0(void *);
    extern void func_0207cbfc(u32, u32);
    extern void func_0205440c(u8 *, s32);
    extern s32 func_020bd490(s32, u8);
    extern u8 *func_02021f10(s32);
    u8 *script, *context;
    u32 blocked;
    s32 node_size, zero, one, two, three;
    script = data_021626e8[0];
    node_size = 0x18;
    context = (*(u8 **)(script + 0x10));
    blocked = (*(u32 *)(context + 0x18)) & 0x80000000U;
    two = 2;
    one = 1;
    zero = 0;
    three = 3;
    if (func_0210cc54(data_02155468)) {
        s32 id, instance;
        u8 *obj, *secondary;
        if ((*(u8 *)(data_02160204 + 0x7a)) == zero) {
            id = func_0210ce5c();
            instance = func_0210ce5c();
            obj = func_02046f90((u16)id, (u16)instance);
            secondary = func_020e9fe8((void *)6001, (u16)(instance + 3001));
            (*(s32 *)(secondary + 0x1c)) = zero;
            (*(s32 *)(secondary + 0x20)) = zero;
            (*(s32 *)(secondary + 0x24)) = 0x32000;
            (*(u32 *)(secondary + 0x18)) &= ~1U;
            (*(u16 *)((*(u8 **)(obj + 0xb0)) + 8)) = func_0210ce5c();
            (*(u16 *)((*(u8 **)(obj + 0xb0)) + 0xa)) = func_0210ce5c();
            (*(u16 *)(obj + 0x92)) = (*(u16 *)(context + 0x28));
            (*(s32 *)(obj + 0)) = (*(s32 *)(context + 0x1c));
            (*(s32 *)(obj + 8)) = (*(s32 *)(context + 0x24));
            func_02052240(obj);
            if ((*(u8 *)(data_02160204 + 0x7e)) == zero) (*(u8 **)(obj + 0xc4)) = context;
            if (func_0210ce5c() != zero) (*(u32 *)(obj + 0xac)) |= 0x200;
            (*(s32 *)(obj + 0x58)) = 0x1000;
            (*(s32 *)(obj + 0x78)) = 3;
            func_020477dc(obj,two,zero);
        }
        return one;
    }
    if (func_0210cc54(data_02155470)) {
        s32 id, mode;
        u8 *obj, *node;
        if (blocked == zero) {
            id = func_0210ce5c();
            mode = func_0210ce5c();
            obj = func_02047820((u16)id);
            if (obj != NULL) {
                (*(VecFe83 *)(obj + 0x24)) = (*(VecFe83 *)(context + 0x1c));
                (*(u32 *)(obj + 0xac)) |= 0xc;
                (*(u32 *)(context + 0x38)) |= 8;
                (*(u16 *)(context + 0x3c)) = id;
                if (mode == one) (*(u32 *)(obj + 0xac)) |= 0x20;
                else if ((*(u32 *)(obj + 0xac)) & 0x20) (*(u32 *)(obj + 0xac)) &= ~0x20U;
                (*(u32 *)(obj + 0xac)) = ((*(u32 *)(obj + 0xac)) & ~1U) | 0x1000000;
                (*(s32 *)((*(u8 **)((*(u8 **)(obj + 0x108)) + 0)) + 0x18)) = two;
                node = (*(u8 **)(data_021600bc + 0x40));
                if (node != NULL) {
                    do {
                        if (node == obj) break;
                        node = (*(u8 **)(node + 0x13c));
                    } while (node != NULL);
                }
                if (node == NULL) {
                    (*(u32 *)(obj + 0xac)) &= ~1U;
                    func_021167f0(data_021600bc + 0x40, obj);
                }
            }
            func_0210cef8();
        }
        return one;
    }
    if (func_0210cc54(data_02155478)) {
        s32 id, mode;
        u8 *obj, *node;
        if (blocked == zero) {
            id = func_0210ce5c();
            mode = func_0210ce5c();
            obj = func_02047820((u16)id);
            if ((*(u32 *)(data_02160200 + 0x160)) & 4) {
                if (obj != NULL) {
                    (*(u16 *)(obj + 0x92)) = func_020ddc8c(obj, context + 0x1c);
                    (*(s32 *)(obj + 0)) = (*(s32 *)(context + 0x1c));
                    (*(s32 *)(obj + 8)) = (*(s32 *)(context + 0x24));
                }
                return one;
            }
            if (obj != NULL) {
                (*(VecFe83 *)(obj + 0x24)) = (*(VecFe83 *)(context + 0x1c));
                (*(u32 *)(obj + 0xac)) |= 0xc;
                (*(u32 *)(context + 0x38)) |= 8;
                (*(u16 *)(context + 0x3c)) = id;
                if (mode == one) (*(u32 *)(obj + 0xac)) |= 0x20;
                else if ((*(u32 *)(obj + 0xac)) & 0x20) (*(u32 *)(obj + 0xac)) &= ~0x20U;
                (*(s32 *)((*(u8 **)((*(u8 **)(obj + 0x108)) + 0)) + 0x18)) = two;
                (*(u8 *)(obj + 0x9e)) = (*(s32 *)(obj + 0x78));
                (*(s32 *)(obj + 0x78)) = func_0210ce5c();
                (*(u32 *)(obj + 0xac)) = ((*(u32 *)(obj + 0xac)) & ~1U) | 0x1000000;
                node = (*(u8 **)(data_021600bc + 0x40));
                if (node != NULL) {
                    do {
                        if (node == obj) break;
                        node = (*(u8 **)(node + 0x13c));
                    } while (node != NULL);
                }
                if (node == NULL) {
                    (*(u32 *)(obj + 0xac)) &= ~1U;
                    func_021167f0(data_021600bc + 0x40, obj);
                }
            }
            func_0210cef8();
        }
        return one;
    }
    if (func_0210cc54(data_02155480)) {
        s32 id, mode;
        u8 *obj;
        if (blocked == zero) {
            id = func_0210ce5c();
            mode = func_0210ce5c();
            obj = func_02047820((u16)id);
            if (obj == NULL) goto fail_480;
            if ((*(u32 *)(data_02160200 + 0x160)) & 4) {
                (*(u16 *)(obj + 0x92)) = func_020ddc8c(obj, context + 0x1c);
                (*(s32 *)(obj + 0)) = (*(s32 *)(context + 0x1c));
                (*(s32 *)(obj + 8)) = (*(s32 *)(context + 0x24));
                return one;
            }
            (*(VecFe83 *)(obj + 0x24)) = (*(VecFe83 *)(context + 0x1c));
            (*(s32 *)(obj + 0x78)) = mode;
            (*(u32 *)(obj + 0xac)) = (((*(u32 *)(obj + 0xac)) | 0x1000) & ~1U) | 0x1000000;
            (*(u32 *)(context + 0x38)) |= 0x1000;
            (*(u16 *)(context + 0x3c)) = id;
            func_0210cef8();
        }
        return one;
    fail_480:
        return zero;
    }
    if (func_0210cc54(data_02155488)) {
        s32 id, mode, v, d;
        u8 *obj, *node;
        if (blocked == zero) {
            id = func_0210ce5c();
            mode = func_0210ce5c();
            obj = func_02047820((u16)id);
            if (obj != NULL) {
                (*(VecFe83 *)(obj + 0x24)) = (*(VecFe83 *)(context + 0x1c));
                (*(u32 *)(obj + 0xac)) |= 0x300004;
                (*(u32 *)(context + 0x38)) |= 8;
                (*(u16 *)(context + 0x3c)) = id;
                if (mode == one) (*(u32 *)(obj + 0xac)) |= 0x20;
                else if ((*(u32 *)(obj + 0xac)) & 0x20) (*(u32 *)(obj + 0xac)) &= ~0x20U;
                (*(s32 *)((*(u8 **)((*(u8 **)(obj + 0x108)) + 0)) + 0x18)) = two;
                d = (*(s32 *)(obj + 0x28)) - (*(s32 *)(obj + 4));
                if (d < zero) d = -d;
                (*(s32 *)(obj + 0x5c)) = d;
                (*(u32 *)(obj + 0xac)) |= 0x100000;
                (*(u8 *)(obj + 0x9f)) = func_0210ce5c();
                v = func_0210ce5c();
                (*(u8 *)(obj + 0xa0)) = v;
                if ((u8)v != zero) (*(s32 *)(obj + 0x60)) = ((*(s32 *)(obj + 0x5c)) * (*(u8 *)(obj + 0x9f))) / 100;
                node = (*(u8 **)(data_021600bc + 0x40));
                if (node != NULL) {
                    do {
                        if (node == obj) break;
                        node = (*(u8 **)(node + 0x13c));
                    } while (node != NULL);
                }
                if (node == NULL) {
                    (*(u32 *)(obj + 0xac)) &= ~1U;
                    func_021167f0(data_021600bc + 0x40, obj);
                }
            }
            func_0210cef8();
        }
        return one;
    }
    if (func_0210cc54(data_02155490)) {
        u8 *obj;
        obj = func_02047820((u16)func_0210ce5c());
        if (obj == NULL) goto fail_490;
        (*(VecFe83 *)(obj + 0)) = (*(VecFe83 *)(context + 0x1c));
        (*(u16 *)(obj + 0x92)) = (*(u16 *)(context + 0x28));
        (*(s32 *)(obj + 0x50)) = (*(s32 *)(context + 0x20));
        goto success_490;
    fail_490:
        return zero;
    success_490:
        return one;
    }
    if (func_0210cc54(data_02155494)) {
        u8 *obj;
        obj = func_02047820((u16)func_0210ce5c());
        if (obj == NULL) goto fail_494;
        if ((*(s8 *)(obj + 0x1a0)) == zero) {
            (*(VecFe83 *)(obj + 0)) = (*(VecFe83 *)(context + 0x1c));
            (*(u16 *)(obj + 0x92)) = (*(u16 *)(context + 0x28));
            (*(s32 *)(obj + 0x50)) = (*(s32 *)(context + 0x20));
            (*(u8 *)(obj + 0x1a0)) = one;
        }
        goto success_494;
    fail_494:
        return zero;
    success_494:
        return one;
    }
    if (func_0210cc54(data_0215549c)) {
        u8 *obj;
        obj = func_02047820((u16)func_0210ce5c());
        if (obj == NULL) goto fail_49c;
        (*(u16 *)(obj + 0x92)) = (*(u16 *)(context + 0x28));
        goto success_49c;
    fail_49c:
        return zero;
    success_49c:
        return one;
    }
    if (func_0210cc54(data_021554a0)) {
        s32 v, d;
        u8 *obj;
        obj = func_02047820((u16)func_0210ce5c());
        if (obj != NULL) {
        v = func_020f5948();
        d = v - (*(s32 *)(obj + 4));
        if (d < zero) d = -d;
        (*(s32 *)(obj + 0x5c)) = d;
        (*(s32 *)(obj + 0x28)) = v;
        (*(u32 *)(obj + 0xac)) |= 0x100000;
        (*(u8 *)(obj + 0x9f)) = func_0210ce5c();
        v = func_0210ce5c();
        (*(u8 *)(obj + 0xa0)) = v;
        if ((v & 0xff) != zero) (*(s32 *)(obj + 0x60)) = ((*(s32 *)(obj + 0x5c)) * (*(u8 *)(obj + 0x9f))) / 100;
            return one;
        }
        return zero;
    }
    if (func_0210cc54(data_021554a8)) {
        u8 *obj;
        u8 anim;
        obj = func_02047820((u16)func_0210ce5c());
        if (obj == NULL) goto fail_4a8;
        anim = (u8)func_0210ce5c();
        func_020477dc(obj,anim,one);
        (*(s32 *)((*(u8 **)((*(u8 **)(obj + 0x108)) + 0)) + 0x18)) = two;
        goto success_4a8;
    fail_4a8:
        return zero;
    success_4a8:
        return one;
    }
    if (func_0210cc54(data_021554ac)) {
        s32 id, v, count, sum, i, multiplier;
        u8 *obj, *node, *entry, *table, *records;
        obj = func_02047820((u16)func_0210ce5c());
        if (obj == NULL) return 0;
        id = func_0210ce5c();
        node = (*(u8 **)((*(u8 **)(obj + 0x108)) + 0));
        func_020477dc(obj,(u8)id,one);
        (*(s32 *)(node + 0x18)) = func_0210ce5c();
        multiplier = func_0210ce5c();
        if (multiplier != 0) {
            entry = (*(u8 **)((*(u8 **)(obj + 0x108)) + 0x10)) + id * 4;
            v = 0;
            obj = (u8 *)0;
            switch ((*(u8 *)(entry + 0))) {
                case 0: return 0;
            case 4:
                case 14: v = (*(u16 *)(entry + 2)) + two; break;
                case 15: v = (*(u16 *)(entry + 2)); break;
            }
            table = func_02117630((*(u8 **)((*(u8 **)(node + 0x58)) + 0xc)),(u16)v);
            count = (*(u16 *)(table + 0));
            i = 0;
            if (count > 0) {
                records = (*(u8 **)(table + 0xc));
                do {
                    obj = (u8 *)((u32)obj + (*(u16 *)(records + i * 8 + 4)));
                    i++;
                } while (i < count);
            }
            if ((*(u32 *)(data_02160200 + 0x160)) & 4) (*(s32 *)(context + 0x2c)) = one;
            else (*(s32 *)(context + 0x2c)) = (s32)(u32)obj * multiplier;
            func_0210cef8();
        }
        return one;
    }
    if (func_0210cc54(data_021554b4)) {
        s32 id, anim;
        u8 *obj;
        if ((*(u32 *)(data_02160200 + 0x160)) & 4) return one;
        if (func_0210cc54(data_021554b8)) {
            if (func_0210cc54(data_021554c0)) {
                id = func_020f5704(zero);
                if (id != zero - 1) {
                    obj = func_02047820((u16)id);
                    if (obj != NULL) {
                        anim = func_020f5704(one);
                    animation_shared:
                        func_02052844(obj,(u16)anim,(s8)func_0210ce5c());
                        goto animation_done;
                    }
                }
            }
        } else {
            obj = func_02047820((u16)func_0210ce5c());
            if (obj == NULL) return zero;
            anim = func_0210ce5c();
            goto animation_shared;
        }
    animation_done:
        return one;
    }
    if (func_0210cc54(data_021554c8)) {
        u8 *obj;
        if (func_0210cc54(data_021554cc)) {
            obj = func_02047820((u16)func_0210ce5c());
            if (obj != NULL) {
                if (func_0210ce5c() != zero) (*(u32 *)(obj + 0xac)) |= 1;
                else (*(u32 *)(obj + 0xac)) &= ~1U;
                return one;
            }
            return zero;
        }
        if (func_0210cc54(data_021554d4)) {
            obj = func_02047820((u16)func_0210ce5c());
            if (obj != NULL) {
                if (func_0210ce5c() != zero) (*(u32 *)(obj + 0xac)) &= ~0x1000000U;
                else (*(u32 *)(obj + 0xac)) |= 0x1000000;
                return one;
            }
        }
        return zero;
    }
    if (func_0210cc54(data_021554d8)) {
        u8 *obj;
        obj = func_02047820((u16)func_0210ce5c());
        if (obj != NULL) {
        if (func_0210ce5c() != zero) {
            (*(u32 *)(obj + 0x80)) = ((*(u32 *)(obj + 0x80)) | 2) & ~0x400U;
        } else {
            (*(u32 *)(obj + 0x80)) = ((*(u32 *)(obj + 0x80)) & ~2U) | 0x400;
        }
        (*(u8 *)(obj + 0xa3)) = zero;
        (*(u32 *)(obj + 0xac)) &= ~0x2000U;
            return one;
        }
        return zero;
    }
    if (func_0210cc54(data_021554e0)) {
        s32 id;
        u8 *manager, *node, *obj;
        obj = func_02047820((u16)func_0210ce5c());
        if (obj != NULL) {
            id = (*(u16 *)(obj + 0x8e));
            if ((u32)id > 5000U && (u32)id < 6000U) {
                manager = data_021600bc;
                node = (*(u8 **)(manager + 0x40));
                while (node != NULL) {
                    if (node == obj) {
                        func_021168f8(manager + 0x40, obj);
                        break;
                    }
                    node = (*(u8 **)(node + 0x13c));
                }
            }
            func_02047490(obj);
            return one;
        }
        return zero;
    }
    if (func_0210cc54(data_021554e4)) {
        s32 mode, id;
        u8 *player, *next, *node, *obj;
        u8 *player2, *next2, *node2;
        u32 event_id;
        mode = func_0210ce5c();
        if (mode == zero) goto delete_mode_zero;
        if (mode != one) goto delete_invalid_new;

        node = (*(u8 **)(data_02160204 + 0xe8));
        player = (*(u8 **)(data_021600ac + 0x68));
        if (node != NULL) {
            event_id = 0x11;
            do {
                id = (*(u16 *)(node + 0x8e));
                next = (*(u8 **)(node + 0x134));
                if ((u32)id > 100U && (u32)id < 700U) {
                    if (func_0210c2f4(player, node) < 0x40000) func_0206e8f0(event_id, node, two);
                    func_02047490(node);
                }
                node = next;
            } while (node != NULL);
        }
        goto delete_done_new;
    delete_mode_zero:

        node2 = (*(u8 **)(data_02160204 + 0xe8));
        player2 = (*(u8 **)(data_021600ac + 0x68));
        while (node2 != NULL) {
            id = (*(u16 *)(node2 + 0x90));
            next2 = (*(u8 **)(node2 + 0x134));
            obj = (u8 *)func_020f0aa4(id);
            if (node2 != player2) {
                func_02047490(node2);
                if (obj != NULL) func_020f09d4(obj);
            }
            node2 = next2;
        }
        goto delete_done_new;
    delete_invalid_new:
        return zero;
    delete_done_new:
        return one;
    }
    if (func_0210cc54(data_021554ec)) {
        s32 i, count, id;
        u8 *obj;
        if ((*(u8 *)(data_02160204 + 0x7a)) == zero && (*(u8 *)(data_02160204 + 0x7e)) == zero) {
            id = func_0210ce5c();
            count = func_0210ce5c();
            obj = func_02047820((u16)id);
            if (obj != NULL) {
                for (i = zero; i < count; i++) (*(u16 *)((*(u8 **)(obj + 0xb0)) + i * 2 + 0xe)) = func_0210ce5c();
            }
        }
        return one;
    }
    if (func_0210cc54(data_021554f4)) {
        u8 *obj;
        obj = func_02047820((u16)func_0210ce5c());
        if (obj != NULL) {
        if ((*(u8 **)(obj + 0xd0)) == NULL) return zero;
        if (!func_0210cc54(data_021554fc)) return one;
        (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x24)) = zero;
        (*(u8 *)((*(u8 **)(obj + 0xd0)) + 1)) = one;
            return one;
        }
        return zero;
    }
    if (func_0210cc54(data_02155504)) {
        u8 idx;
        s32 anim, v, instance, id;
        u8 *secondary, *node, *obj;
        if ((*(u8 *)(data_02160204 + 0x7a)) == zero && (*(u8 *)(data_02160204 + 0x7e)) == zero) {
            id = func_0210ce5c();
            instance = func_0210ce5c();
            obj = func_02046f90((u16)id, (u16)instance);
            if (id != 2000) {
                secondary = func_020e9fe8((void *)6001, (u16)(instance + 3001));
                (*(s32 *)(secondary + 0x1c)) = zero;
                (*(s32 *)(secondary + 0x20)) = zero;
                (*(s32 *)(secondary + 0x24)) = 0x32000;
                (*(u32 *)(secondary + 0x18)) &= ~1U;
            }
            (*(u16 *)(obj + 0x92)) = func_020f5948();
            v = func_020f5948();
            (*(s32 *)(obj + 0x0)) = v;
            (*(s32 *)(obj + 0x18)) = v;
            v = func_020f5948();
            (*(s32 *)(obj + 0x8)) = v;
            (*(s32 *)(obj + 0x20)) = v;
            (*(u16 *)((*(u8 **)(obj + 0xb0)) + 8)) = func_0210ce5c();
            (*(u16 *)((*(u8 **)(obj + 0xb0)) + 0xa)) = func_0210ce5c();
            func_02052240(obj);
            switch (func_0210ce5c()) {
            case 1:
                (*(u8 **)(obj + 0xd0)) = func_0210c594(0x3c, data_02155c3c);
                (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x19)) = three;
                (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x1a)) = 5;
                (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x1b)) = 30;
                (*(u16 *)((*(u8 **)(obj + 0xd0)) + 0x1c)) = 0x80;
                (*(u16 *)((*(u8 **)(obj + 0xd0)) + 0x26)) = 14;
                (*(u16 *)((*(u8 **)(obj + 0xd0)) + 0x1e)) = 80;
                (*(u16 *)((*(u8 **)(obj + 0xd0)) + 0x20)) = 90;
                goto spawn_finish;
            case 2:
                instance = one;
                (*(u8 **)(obj + 0xd0)) = func_0210c594(0x3c, data_02155c3c);
                func_021167ac((*(u8 **)(obj + 0xd0)) + 0x30, 0x10);
                node = func_0210c594(0x18, data_02155c3c);
                (*(s32 *)(node + 0x4)) = (*(s32 *)(obj + 0x0));
                (*(s32 *)(node + 0xc)) = (*(s32 *)(obj + 0x8));
                func_021167f0((*(u8 **)(obj + 0xd0)) + 0x30, node);
                (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x19)) = func_0210ce5c();
                (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x1b)) = func_0210ce5c();
            while ((v = func_020f5948()) != zero) {
                    node = func_0210c594(node_size, data_02155c3c);
                    (*(s32 *)(node + 0x4)) = v;
                    (*(s32 *)(node + 0xc)) = func_020f5948();
                    (*(u8 *)(node + 0x0)) = instance;
                    func_021167f0((*(u8 **)(obj + 0xd0)) + 0x30, node);
                    instance = (u8)(instance + 1);
                    
                }
            spawn_finish:
                (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x25)) = two;
                (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x1)) = one;
                (*(u32 *)(obj + 0xac)) |= 0x200;
                break;
            }
            (*(s32 *)(obj + 0x58)) = 0x1000;
            id = (*(u16 *)(obj + 0x8e));
            if (((u32)id > 1000U && (u32)id < 5000U) || (id != 0 && (u32)id < 700U)) {
                anim = two;
            } else {
                anim = zero;
            }
            func_020477dc(obj, anim, zero);
        }
        return one;
    }
    if (func_0210cc54(data_0215550c)) {
        s32 id, instance, v;
        u8 *obj, *secondary;
        if ((*(u8 *)(data_02160204 + 0x7a)) == zero && (*(u8 *)(data_02160204 + 0x7e)) == zero) {
            id = func_0210ce5c();
            instance = func_0210ce5c();
            obj = func_02046f90((u16)id,(u16)instance);
            if (id != 2000) {
                secondary = func_020e9fe8((void *)6001, (u16)(instance + 3001));
                (*(s32 *)(secondary + 0x1c)) = zero;
                (*(s32 *)(secondary + 0x20)) = zero;
                (*(s32 *)(secondary + 0x24)) = 0x32000;
                (*(u32 *)(secondary + 0x18)) &= ~1U;
            }
            (*(u16 *)(obj + 0x92)) = func_020f5948();
            v = func_020f5948();
            (*(s32 *)(obj + 0)) = v;
            v = func_020f5948();
            (*(s32 *)(obj + 8)) = v;
            (*(u16 *)((*(u8 **)(obj + 0xb0)) + 8)) = func_0210ce5c();
            (*(u8 *)((*(u8 **)(obj + 0xb0)) + 0xd)) = func_0210ce5c();
            func_02052240(obj);
            if ((*(u8 *)(data_02160204 + 0xd7)) != 3) {
                if (func_0210ce5c() != zero) (*(u32 *)(obj + 0xac)) |= 0x200;
                else (*(u16 *)(obj + 0xcc)) = func_0210ce5c();
                if ((*(u8 *)(data_02160204 + 0x7e)) == zero && (*(u16 *)(obj + 0xcc)) != zero) (*(u8 **)(obj + 0xc4)) = func_0204680c(data_02155514,(*(u16 *)(obj + 0xcc)));
            } else {
                func_021093f0((*(u8 **)(script + 0)));
                func_021093f0((*(u8 **)(script + 0)));
            }
            (*(s32 *)(obj + 0x58)) = 0x1000;
            (*(s32 *)(obj + 0x78)) = three;
            id = (*(u16 *)(obj + 0x8e));
            if (((u32)id > 1000U && (u32)id < 5000U) || ((u32)id > 100U && (u32)id < 700U)) {
                func_020477dc(obj, two, zero);
            }
        }
        return one;
    }
    if (func_0210cc54(data_0215551c)) {
        u8 idx;
        u16 id, instance, key;
        s32 v, anim;
        u8 *obj, *secondary, *node, *record, *file;
        if ((*(u8 *)(data_02160204 + 0x7a)) == zero) {
        file = func_0210c594(0x60,data_02155c3c);
        (*(u8 **)(file + 0)) = func_0210957c(2);
        if ((*(u8 **)(file + 0)) == NULL) return zero;
        id = (u16)func_0210ce5c();
        instance = (u16)func_0210ce5c();
        obj = func_02046f90((u16)id,(u16)instance);
        if (id != 2000) {
            secondary = func_020e9fe8((void *)6001, (u16)(instance + 3001));
            (*(s32 *)(secondary + 0x1c)) = zero;
            (*(s32 *)(secondary + 0x20)) = zero;
            (*(s32 *)(secondary + 0x24)) = 0x32000;
            (*(u32 *)(secondary + 0x18)) &= ~1U;
        }
        (*(u16 *)(obj + 0x92)) = func_020f5948();
        v = func_020f5948();
        (*(s32 *)(obj + 0)) = v;
        (*(s32 *)(obj + 0x18)) = v;
        v = func_020f5948();
        (*(s32 *)(obj + 8)) = v;
        (*(s32 *)(obj + 0x20)) = v;
        (*(u32 *)(obj + 0xac)) |= 0x200;
        func_02052240(obj);
        (*(s32 *)(obj + 0x58)) = 0x1000;
        (*(s32 *)(obj + 0x78)) = three;
        id = (*(u16 *)(obj + 0x8e));
        if (((u32)id > 1000U && (u32)id < 5000U) || ((u32)id > 0U && (u32)id < 700U)) anim = 2;
        else anim = zero;
        func_020477dc(obj, anim, zero);
        key = (u16)func_0210ce5c();
    file_5551c_compare:
        if (key != func_020f685c((*(u8 **)(file + 0)), zero)) goto file_5551c_advance;
        record = func_0210c594(0x3c, data_02155c3c);
        (*(u8 *)(record + 0x18)) = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u8 *)(record + 0x19)) = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u8 *)(record + 0x1a)) = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u8 *)(record + 0x1b)) = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u16 *)(record + 0x1c)) = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u16 *)(record + 0x1e)) = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u16 *)(record + 0x20)) = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u16 *)(record + 0x22)) = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u8 *)(record + 0x24)) = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u8 *)(record + 0x25)) = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u16 *)(record + 0x26)) = (u8)func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u8 *)(record + 0x28)) = func_020f685c((*(u8 **)(file + 0)), zero);
        v = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u8 *)(record + 0x29)) = v;
        (*(u8 *)(record + 0)) = (*(u8 *)(record + 0x1b));
        if ((v & 0xff) != zero) {
            (*(u8 *)(record + 0x2a)) = func_020f685c((*(u8 **)(file + 0)), zero);
            (*(u8 *)(record + 0x2b)) = func_020f685c((*(u8 **)(file + 0)), zero);
            (*(u8 *)(record + 0x2c)) = func_020f685c((*(u8 **)(file + 0)), zero);
            (*(u8 *)(record + 0x2d)) = func_020f685c((*(u8 **)(file + 0)), zero);
            (*(u8 *)(record + 1)) = one;
        }
        goto file_5551c_finish;
    file_5551c_advance:
        func_02109444((*(u8 **)(file + 0)));
        goto file_5551c_compare;
    file_5551c_finish:
        func_0210c970(file);
        (*(u8 **)(obj + 0xd0)) = record;
        v = func_0210ce5c();
        if (v <= 1000 - one) (*(u16 *)((*(u8 **)(obj + 0xb0)) + 8)) = v;
        else {
            (*(u16 *)((*(u8 **)(obj + 0xb0)) + 0xa)) = v / 1000;
            (*(u16 *)((*(u8 **)(obj + 0xb0)) + 8)) = v % 1000;
        }
        if (func_0210ce5c() == 2) {
            idx = one;
            func_021167ac((*(u8 **)(obj + 0xd0)) + 0x30, 0x10);
            node = func_0210c594(0x18, data_02155c3c);
            (*(s32 *)(node + 4)) = (*(s32 *)(obj + 0));
            (*(s32 *)(node + 0xc)) = (*(s32 *)(obj + 8));
            func_021167f0((*(u8 **)(obj + 0xd0)) + 0x30, node);
        waypoint_5551c:
            v = func_020f5948();
            if (v != zero) {
                node = func_0210c594(node_size, data_02155c3c);
                (*(s32 *)(node + 4)) = v;
                (*(s32 *)(node + 0xc)) = func_020f5948();
                (*(u8 *)(node + 0)) = idx;
                func_021167f0((*(u8 **)(obj + 0xd0)) + 0x30, node);
                idx++;
                goto waypoint_5551c;
            }
            (*(u8 *)((*(u8 **)(obj + 0xd0)) + 1)) = one;
            (*(u32 *)(obj + 0xac)) |= 0x200;
        }
        }
        return one;
    }
    if (func_0210cc54(data_02155524)) {
        u8 idx;
        u16 id, instance, key;
        s32 v, anim;
        u8 *obj, *secondary, *node, *record, *file;
        u8 *existing, *next;
        file = func_0210c594(0x60,data_02155c3c);
        (*(u8 **)(file + 0)) = func_0210957c(2);
        if ((*(u8 **)(file + 0)) == NULL) return zero;
        id = (u16)func_0210ce5c();
        instance = (u16)func_0210ce5c();
        existing = func_0204785c((u16)id,(u16)instance);
        if (existing != NULL) {
            if ((*(u8 **)(data_02160204 + 0x6c)) != NULL) {
                node = (*(u8 **)((*(u8 **)(data_02160204 + 0x6c)) + 0));
                while (node != NULL) {
                    next = (*(u8 **)(node + 0xc));
                    if ((*(u16 *)(node + 4)) == instance) {
                        func_021168f8((*(u8 **)(data_02160204 + 0x6c)),node);
                        if (node != NULL) func_0210c5dc(node);
                    }
                    node = next;
                }
            }
            func_02047490(existing);
        }
        obj = func_02046f90((u16)id,(u16)instance);
        (*(u32 *)(obj + 0x84)) = (*(u32 *)(obj + 0x80));
        if (id != 2000) {
            secondary = func_020e9fe8((void *)6001, (u16)(instance + 3001));
            (*(s32 *)(secondary + 0x1c)) = zero;
            (*(s32 *)(secondary + 0x20)) = zero;
            (*(s32 *)(secondary + 0x24)) = 0x32000;
            (*(u32 *)(secondary + 0x18)) &= ~1U;
        }
        (*(u16 *)(obj + 0x92)) = func_020f5948();
        v = func_020f5948();
        (*(s32 *)(obj + 0)) = v;
        (*(s32 *)(obj + 0x18)) = v;
        v = func_020f5948();
        (*(s32 *)(obj + 8)) = v;
        (*(s32 *)(obj + 0x20)) = v;
        (*(u32 *)(obj + 0xac)) |= 0x200;
        func_02052240(obj);
        (*(s32 *)(obj + 0x58)) = 0x1000;
        (*(s32 *)(obj + 0x78)) = three;
        id = (*(u16 *)(obj + 0x8e));
        if (((u32)id > 1000U && (u32)id < 5000U) || ((u32)id > 0U && (u32)id < 700U)) anim = 2;
        else anim = zero;
        func_020477dc(obj, anim, zero);
        key = (u16)func_0210ce5c();
    file_55524_compare:
        if (key != func_020f685c((*(u8 **)(file + 0)), zero)) goto file_55524_advance;
        record = func_0210c594(0x3c, data_02155c3c);
        (*(u8 *)(record + 0x18)) = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u8 *)(record + 0x19)) = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u8 *)(record + 0x1a)) = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u8 *)(record + 0x1b)) = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u16 *)(record + 0x1c)) = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u16 *)(record + 0x1e)) = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u16 *)(record + 0x20)) = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u16 *)(record + 0x22)) = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u8 *)(record + 0x24)) = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u8 *)(record + 0x25)) = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u16 *)(record + 0x26)) = (u8)func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u8 *)(record + 0x28)) = func_020f685c((*(u8 **)(file + 0)), zero);
        v = func_020f685c((*(u8 **)(file + 0)), zero);
        (*(u8 *)(record + 0x29)) = v;
        (*(u8 *)(record + 0)) = (*(u8 *)(record + 0x1b));
        if ((v & 0xff) != zero) {
            (*(u8 *)(record + 0x2a)) = func_020f685c((*(u8 **)(file + 0)), zero);
            (*(u8 *)(record + 0x2b)) = func_020f685c((*(u8 **)(file + 0)), zero);
            (*(u8 *)(record + 0x2c)) = func_020f685c((*(u8 **)(file + 0)), zero);
            (*(u8 *)(record + 0x2d)) = func_020f685c((*(u8 **)(file + 0)), zero);
            (*(u8 *)(record + 1)) = one;
        }
        goto file_55524_finish;
    file_55524_advance:
        func_02109444((*(u8 **)(file + 0)));
        goto file_55524_compare;
    file_55524_finish:
        func_0210c970(file);
        (*(u8 **)(obj + 0xd0)) = record;
        v = func_0210ce5c();
        if (v <= 1000 - one) (*(u16 *)((*(u8 **)(obj + 0xb0)) + 8)) = v;
        else {
            (*(u16 *)((*(u8 **)(obj + 0xb0)) + 0xa)) = v / 1000;
            (*(u16 *)((*(u8 **)(obj + 0xb0)) + 8)) = v % 1000;
        }
        if (func_0210ce5c() == 2) {
            idx = one;
            func_021167ac((*(u8 **)(obj + 0xd0)) + 0x30, 0x10);
            node = func_0210c594(0x18, data_02155c3c);
            (*(s32 *)(node + 4)) = (*(s32 *)(obj + 0));
            (*(s32 *)(node + 0xc)) = (*(s32 *)(obj + 8));
            func_021167f0((*(u8 **)(obj + 0xd0)) + 0x30, node);
        waypoint_55524:
            v = func_020f5948();
            if (v != zero) {
                node = func_0210c594(node_size, data_02155c3c);
                (*(s32 *)(node + 4)) = v;
                (*(s32 *)(node + 0xc)) = func_020f5948();
                (*(u8 *)(node + 0)) = idx;
                func_021167f0((*(u8 **)(obj + 0xd0)) + 0x30, node);
                idx++;
                goto waypoint_55524;
            }
            (*(u8 *)((*(u8 **)(obj + 0xd0)) + 1)) = one;
            (*(u32 *)(obj + 0xac)) |= 0x200;
        }
        return one;
    }
    if (func_0210cc54(data_0215552c)) {
        u8 idx;
        u16 group;
        u32 requested_id, requested_instance, id_a, instance_a;
        u16 id, instance, key;
        s32 v, anim, anim_arg;
        const char *filename;
        u8 *outer, *file, *obj, *secondary, *record, *node;
        requested_id = (u16)func_0210ce5c();
        requested_instance = (u16)func_0210ce5c();
        if ((*(u8 *)(data_02160204 + 0x7a)) != zero) return one;
        outer = func_0210c594(0x60,data_02155c3c);
        group = (u16)(((s32)(*(u16 *)(data_02160204 + 0x72)) - 1) / 20 + 1);
        if (group >= 1 && group < 11) filename = data_02155534;
        else if (group >= 11 && group < 21) filename = data_02155550;
        else filename = data_0215556c;
        (*(u8 **)(outer + 0)) = func_021092d8((void *)filename);
        if ((*(u8 **)(outer + 0)) == NULL) return zero;
        do {
            file = func_0210c594(0x60,data_02155c3c);
            (*(u8 **)(file + 0)) = func_0210957c(2);
            if ((*(u8 **)(file + 0)) == NULL) return zero;
            id_a = (u16)func_0210cdfc((*(u8 **)(outer + 0)),zero);
            instance_a = (u16)func_0210cdfc((*(u8 **)(outer + 0)),zero);
            if (id_a == requested_id && instance_a == requested_instance) {
                id = (u16)func_0210cdfc((*(u8 **)(outer + 0)),zero);
                instance = (u16)func_0210cdfc((*(u8 **)(outer + 0)),zero);
                obj = func_02046f90((u16)id,(u16)instance);
                if (id != 2000) {
                    secondary = func_020e9fe8((void *)6001, (u16)(instance + 3001));
                    (*(s32 *)(secondary + 0x1c)) = zero;
                    (*(s32 *)(secondary + 0x20)) = zero;
                    (*(s32 *)(secondary + 0x24)) = 0x32000;
                    (*(u32 *)(secondary + 0x18)) &= ~1U;
                }
                (*(u16 *)(obj + 0x92)) = func_020f6118((*(u8 **)(outer + 0)),zero);
                v = func_020f6118((*(u8 **)(outer + 0)),zero);
                (*(s32 *)(obj + 0)) = v;
                (*(s32 *)(obj + 0x18)) = v;
                v = func_020f6118((*(u8 **)(outer + 0)),zero);
                (*(s32 *)(obj + 8)) = v;
                (*(s32 *)(obj + 0x20)) = v;
                (*(u32 *)(obj + 0xac)) |= 0x200;
                func_02052240(obj);
                (*(s32 *)(obj + 0x58)) = 0x1000;
                (*(s32 *)(obj + 0x78)) = three;
                id = (*(u16 *)(obj + 0x8e));
                if ((u32)id > 1000U && (u32)id < 5000U) { anim = 2; anim_arg = zero; }
        else if (id != 0 && (u32)id < 700U) { anim = 2; anim_arg = 0; }
        else { anim = zero; anim_arg = anim; }
        func_020477dc(obj, anim, anim_arg);
                key = (u16)func_0210cdfc((*(u8 **)(outer + 0)),zero);
            file_stage_compare:
                if (key != func_020f685c((*(u8 **)(file + 0)), zero)) goto file_stage_advance;
                record = func_0210c594(0x3c, data_02155c3c);
                (*(u8 *)(record + 0x18)) = func_020f685c((*(u8 **)(file + 0)), zero);
                (*(u8 *)(record + 0x19)) = func_020f685c((*(u8 **)(file + 0)), zero);
                (*(u8 *)(record + 0x1a)) = func_020f685c((*(u8 **)(file + 0)), zero);
                (*(u8 *)(record + 0x1b)) = func_020f685c((*(u8 **)(file + 0)), zero);
                (*(u16 *)(record + 0x1c)) = func_020f685c((*(u8 **)(file + 0)), zero);
                (*(u16 *)(record + 0x1e)) = func_020f685c((*(u8 **)(file + 0)), zero);
                (*(u16 *)(record + 0x20)) = func_020f685c((*(u8 **)(file + 0)), zero);
                (*(u16 *)(record + 0x22)) = func_020f685c((*(u8 **)(file + 0)), zero);
                (*(u8 *)(record + 0x24)) = func_020f685c((*(u8 **)(file + 0)), zero);
                (*(u8 *)(record + 0x25)) = func_020f685c((*(u8 **)(file + 0)), zero);
                (*(u16 *)(record + 0x26)) = (u8)func_020f685c((*(u8 **)(file + 0)), zero);
                (*(u8 *)(record + 0x28)) = func_020f685c((*(u8 **)(file + 0)), zero);
                v = (u8)func_020f685c((*(u8 **)(file + 0)), zero);
                (*(u8 *)(record + 0x29)) = v;
                (*(u8 *)(record + 0)) = (*(u8 *)(record + 0x1b));
                if ((v & 0xff) != zero) {
                    (*(u8 *)(record + 0x2a)) = func_020f685c((*(u8 **)(file + 0)), zero);
                    (*(u8 *)(record + 0x2b)) = func_020f685c((*(u8 **)(file + 0)), zero);
                    (*(u8 *)(record + 0x2c)) = func_020f685c((*(u8 **)(file + 0)), zero);
                    (*(u8 *)(record + 0x2d)) = func_020f685c((*(u8 **)(file + 0)), zero);
                    (*(u8 *)(record + 1)) = one;
                }
                goto file_stage_finish;
            file_stage_advance:
                func_02109444((*(u8 **)(file + 0)));
                goto file_stage_compare;
            file_stage_finish:
                (*(u8 **)(obj + 0xd0)) = record;
                v = func_0210cdfc((*(u8 **)(outer + 0)),zero);
                if (v <= 1000 - one) (*(u16 *)((*(u8 **)(obj + 0xb0)) + 8)) = v;
                else {
                    (*(u16 *)((*(u8 **)(obj + 0xb0)) + 0xa)) = v / 1000;
                    (*(u16 *)((*(u8 **)(obj + 0xb0)) + 8)) = v % 1000;
                }
                if (func_0210cdfc((*(u8 **)(outer + 0)),zero) == 2) {
                    idx = one;
                    func_021167ac((*(u8 **)(obj + 0xd0)) + 0x30, 0x10);
                    node = func_0210c594(0x18, data_02155c3c);
                    (*(s32 *)(node + 4)) = (*(s32 *)(obj + 0));
                    (*(s32 *)(node + 0xc)) = (*(s32 *)(obj + 8));
                    func_021167f0((*(u8 **)(obj + 0xd0)) + 0x30, node);
                waypoint_stage:
                    v = func_020f5948();
                    if (v != zero) {
                        node = func_0210c594(0x18, data_02155c3c);
                        (*(s32 *)(node + 4)) = v;
                        (*(s32 *)(node + 0xc)) = func_020f5948();
                        (*(u8 *)(node + 0)) = idx;
                        func_021167f0((*(u8 **)(obj + 0xd0)) + 0x30, node);
                        idx++;
                        goto waypoint_stage;
                    }
                    (*(u8 *)((*(u8 **)(obj + 0xd0)) + 1)) = one;
                    (*(u32 *)(obj + 0xac)) |= 0x200;
                }
            }
            if (file != NULL) func_0210c5dc(file);
        } while (func_02109444((*(u8 **)(outer + 0))) != zero);
        func_021093b0((*(u8 **)(outer + 0)));
        if (outer != NULL) func_0210c5dc(outer);
        return one;
    }
    if (func_0210cc54(data_02155588)) {
        u8 idx;
        s32 flag, anim, v, instance, id;
        u8 *flags, *secondary, *node, *obj;
        if ((*(u8 *)(data_02160204 + 0x7a)) != zero) return one;
        id = func_0210ce5c();
        instance = func_0210ce5c();
        if (id == 5001 && data_02160200 != NULL) {
            flag = (*(s32 *)(data_02160200 + 0x168));
            if (((u32 *)data_02160200)[flag / 32] & (1U << (flag % 32))) return one;
        }
        obj = func_02046f90((u16)id, (u16)instance);
        if (id != 2000) {
            secondary = func_020e9fe8((void *)6001, (u16)(instance + 3001));
            (*(s32 *)(secondary + 0x1c)) = zero;
            (*(s32 *)(secondary + 0x20)) = zero;
            (*(s32 *)(secondary + 0x24)) = 0x32000;
            (*(u32 *)(secondary + 0x18)) &= ~1U;
        }
        (*(u16 *)(obj + 0x92)) = func_020f5948();
        v = func_020f5948();
        (*(s32 *)(obj + 0x0)) = v;
        (*(s32 *)(obj + 0x18)) = v;
        v = func_020f5948();
        (*(s32 *)(obj + 0x8)) = v;
        (*(s32 *)(obj + 0x20)) = v;
        (*(u16 *)((*(u8 **)(obj + 0xb0)) + 0xa)) = func_0210ce5c();
        func_02052240(obj);
        id = (*(u16 *)(obj + 0x8e));
        if (id != 2000 && id != 5081 && id != 501) {
            switch (func_0210ce5c()) {
            case 1:
                (*(u8 **)(obj + 0xd0)) = func_0210c594(0x3c, data_02155c3c);
                (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x19)) = func_0210ce5c();
                (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x1b)) = func_0210ce5c();
                (*(u16 *)((*(u8 **)(obj + 0xd0)) + 0x1c)) = func_0210ce5c();
                goto spawn2_finish;
            case 2:
                instance = one;
                (*(u8 **)(obj + 0xd0)) = func_0210c594(0x3c, data_02155c3c);
                func_021167ac((*(u8 **)(obj + 0xd0)) + 0x30, 0x10);
                node = func_0210c594(0x18, data_02155c3c);
                (*(s32 *)(node + 0x4)) = (*(s32 *)(obj + 0x0));
                (*(s32 *)(node + 0xc)) = (*(s32 *)(obj + 0x8));
                func_021167f0((*(u8 **)(obj + 0xd0)) + 0x30, node);
                (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x19)) = func_0210ce5c();
                (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x1b)) = func_0210ce5c();
            while ((v = func_020f5948()) != zero) {
                    node = func_0210c594(node_size, data_02155c3c);
                    (*(s32 *)(node + 0x4)) = v;
                    (*(s32 *)(node + 0xc)) = func_020f5948();
                    (*(u8 *)(node + 0x0)) = instance;
                    func_021167f0((*(u8 **)(obj + 0xd0)) + 0x30, node);
                    instance = (u8)(instance + 1);
                    
                }
            spawn2_finish:
                (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x25)) = two;
                (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x1)) = one;
                (*(u32 *)(obj + 0xac)) |= 0x200;
                break;
            }
            id = (*(u16 *)(obj + 0x8e));
            if ((u32)id > 5000U && (u32)id < 6000U) (*(u32 *)(obj + 0x80)) |= 0x402;
        } else if (id == 5081) {
            (*(u8 **)(obj + 0xd0)) = func_0210c594(0x3c, data_02155c3c);
            (*(u16 *)((*(u8 **)(obj + 0xd0)) + 4)) = func_0210ce5c();
        } else if (id == 501) {
            (*(u8 **)(obj + 0xd0)) = func_0210c594(0x3c, data_02155c3c);
            (*(u16 *)((*(u8 **)(obj + 0xd0)) + 0x26)) = 201;
            (*(u16 *)((*(u8 **)(obj + 0xd0)) + 0x1c)) = 90;
            (*(u16 *)((*(u8 **)(obj + 0xd0)) + 0x22)) = 90;
            (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x19)) = two;
            (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x1a)) = 4;
            (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x1b)) = 18;
            (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x28)) = one;
            (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x25)) = two;
            (*(u8 *)((*(u8 **)(obj + 0xd0)) + 1)) = one;
            (*(u32 *)(obj + 0xac)) |= 0x200;
        } else {
            switch (func_0210ce5c()) {
            default:
            case 0:
                func_0210ce5c();
                (*(u8 *)(obj + 0x9d)) = zero;
                (*(s32 *)((*(u8 **)(obj + 0xb0)) + 0)) = zero;
                break;
            case 1:
                (*(u8 *)(obj + 0x9d)) = func_0210ce5c();
                break;
            case 2:
                (*(s32 *)((*(u8 **)(obj + 0xb0)) + 0)) = func_0210ce5c() * 4096;
                break;
            }
            v = func_0210ce5c();
            (*(u8 *)(obj + 0xce)) = v;
            if ((v & 255) == 3) {
                func_0207cbfc(3, (u32)(*(u8 **)(obj + 0xb0)));
                flags = data_02160200;
                flag = (*(s32 *)(flags + 0x168));
                if (((u32 *)flags)[flag / 32] & (1U << (flag % 32))) {
                    func_02047490(obj);
                    return one;
                }
                (*(u32 *)(obj + 0xac)) |= 0x80000;
                if (data_02160200 != NULL) (*(u16 *)((*(u8 **)(obj + 0xb0)) + 0x22)) = (*(s32 *)(data_02160200 + 0x168));
            }
            (*(u8 *)(obj + 0xcf)) = func_0210ce5c();
        }
        if ((*(u16 *)(obj + 0x8e)) == 5001 && data_02160200 != NULL) (*(u16 *)((*(u8 **)(obj + 0xb0)) + 0x22)) = (*(s32 *)(data_02160200 + 0x168));
        if ((*(u16 *)(obj + 0x8e)) == 5555) func_0205440c(obj, zero);

        (*(s32 *)(obj + 0x58)) = 0x1000;
        id = (*(u16 *)(obj + 0x8e));
        if (((u32)id > 1000U && (u32)id < 5000U) || (id != 0 && (u32)id < 700U)) {
            anim = two;
        } else {
            anim = zero;
        }
        func_020477dc(obj, anim, zero);
        return one;
    }
    if (func_0210cc54(data_02155590)) {
        u16 j;
        u8 value, slot;
        s32 found, i, key, id;
        u8 *entry;
        if (func_0210cc54(data_02155598)) {
            found = zero;
            id = func_0210ce5c();
            key = func_0210ce5c();
            value = (u8)func_0210ce5c();
            for (slot = zero; slot < 3; slot++) {
                if (found == zero && func_020bd490(zero, slot) != zero && id == func_020bd490(one, slot)) {
                    entry = func_02021f10(func_020bd490(three, slot));
                    if (key <= 100) {
                        for (i = zero; i < 30; i++) if (entry[0x4e + i] == key) entry[0x4e + i] = value;
                    } else if (key >= 101) {
                        for (i = zero; i < 15; i++) if (entry[0x6c + i] == key) entry[0x6c + i] = value;
                    }
                    found = one;
                }
            }
            return found;
        }
        if (func_0210cc54(data_0215559c)) {
            id = func_0210ce5c();
            key = func_0210ce5c();
            entry = func_02021f10(id - 1);
            found = zero;
            if (entry != NULL) {
                if (key <= 100) {
                    for (i = zero; i < 30; i++) if (entry[0x4e + i] == key) found = one;
                    if (found == zero) {
                        for (i = zero; i < 30; i++) {
                            { u8 *slot_ptr = entry + i; if (slot_ptr[0x4e] == zero) { slot_ptr[0x4e] = key; break; } }
                        }
                    }
                } else if (key >= 101) {
                    for (i = zero; i < 15; i++) if (entry[0x6c + i] == key) found = one;
                    if (found == zero) {
                        for (i = zero; i < 15; i++) {
                            { u8 *slot_ptr = entry + i; if (slot_ptr[0x6c] == zero) { slot_ptr[0x6c] = key; break; } }
                        }
                    }
                }
                found = one;
            }
            return found;
        }
        if (func_0210cc54(data_021555a0)) {
            (*(u8 *)(data_02160204 + 0x11c)) = one;
            (*(u8 *)(data_02160078 + 0x36)) = one;
            found = zero;
            key = 101;
            for (i = zero; i <= 7; i++) {
                if (i == 5) continue;
                entry = func_02021f10(i);
                if (entry == NULL) continue;
                for (j = zero; j < 15; j++) if (entry[0x6c + j] == key) found = one;
                if (found == zero) {
                    for (j = zero; j < 15; j++) {
                        if (entry[0x6c + j] == zero) { entry[0x6c + j] = key; break; }
                    }
                }
            }
            return one;
        }
        if (func_0210cc54(data_021555a4)) {
            (*(u8 *)(data_02160204 + 0x11c)) = one;
            (*(u8 *)(data_02160078 + 0x36)) = one;
            found = zero;
            key = 102;
            for (i = zero; i <= 7; i++) {
                if (i == 5) continue;
                entry = func_02021f10(i);
                if (entry == NULL) continue;
                for (j = zero; j < 15; j++) if (entry[0x6c + j] == key) found = one;
                if (found == zero) {
                    for (j = zero; j < 15; j++) {
                        if (entry[0x6c + j] == zero) { entry[0x6c + j] = key; break; }
                    }
                }
            }
            return one;
        }
        if (func_0210cc54(data_021555ac)) {
            (*(u8 *)(data_02160204 + 0x11c)) = one;
            (*(u8 *)(data_02160078 + 0x36)) = one;
            found = zero;
            key = 103;
            for (i = zero; i <= 7; i++) {
                if (i == 5) continue;
                entry = func_02021f10(i);
                if (entry == NULL) continue;
                for (j = zero; j < 15; j++) if (entry[0x6c + j] == key) found = one;
                if (found == zero) {
                    for (j = zero; j < 15; j++) {
                        if (entry[0x6c + j] == zero) { entry[0x6c + j] = key; break; }
                    }
                }
            }
            return one;
        }
        func_0210cc54(data_021555b4);
        return zero;
    }
    if (func_0210cc54(data_021555b8)) {

        if ((*(s16 *)(data_02160204 + 0x74)) == zero && (*(s16 *)(data_02160204 + 0x76)) == zero) {
            (*(s16 *)(data_02160204 + 0x74)) = func_020f5948() >> 12;
            (*(s16 *)(data_02160204 + 0x76)) = func_020f5948() >> 12;
        }
        return one;
    }
    if (func_0210cc54(data_021555c0)) {
        u8 *obj;
        obj = func_02047820((u16)func_0210ce5c());
        if (obj != NULL) {
            (*(u8 *)((*(u8 **)((*(u8 **)(obj + 0x108)) + 0)) + 0x71)) = func_0210ce5c();
            return one;
        }
        return zero;
    }
    return zero;
}
