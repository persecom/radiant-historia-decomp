/* 1 function from 0x021011A8 to 0x02102E60 (main), found by ds-decomp. */
#include "common.h"

s32 func_021011a8(void)
{
    typedef struct { s32 x, y, z; } Vec11a8;
    extern void *data_021626e8[];
    extern u8 *data_02160204;
    extern u32 data_02155c3c;
    extern u8 *data_021600bc;
    extern u8 *data_021600ac;
    extern u8 *data_02160200;
    extern u8 *data_02160078;
    extern const char data_021555c8[];
    extern const char data_021555d0[];
    extern const char data_021555d8[];
    extern const char data_021555e0[];
    extern const char data_021555e8[];
    extern const char data_021555f0[];
    extern const char data_021555f4[];
    extern const char data_021555fc[];
    extern const char data_02155600[];
    extern const char data_02155608[];
    extern const char data_0215560c[];
    extern const char data_02155614[];
    extern const char data_02155618[];
    extern const char data_02155620[];
    extern const char data_02155628[];
    extern const char data_0215562c[];
    extern const char data_02155634[];
    extern const char data_02155638[];
    extern const char data_02155640[];
    extern const char data_02155644[];
    extern const char data_0215564c[];
    extern const char data_02155654[];
    extern const char data_0215565c[];
    extern const char data_02155664[];
    extern const char data_0215566c[];
    extern const char data_02155674[];
    extern const char data_0215567c[];
    extern const char data_02155684[];
    extern const char data_0215568c[];
    extern const char data_02155690[];
    extern const char data_02155694[];
    extern const char data_02155698[];
    extern const char data_021556a0[];
    extern const char data_021556a8[];
    extern const char data_021556b0[];
    extern s32 func_0210cc54(const char *);
    extern s32 func_0210cc88(const char *);
    extern s32 func_0210ce5c(void);
    extern s32 func_0210ce6c(void);
    extern void func_0210cef8(void);
    extern void *func_02046f90(u16, u16);
    extern void *func_020e9fe8(void *, u16);
    extern s32 func_020ef4c8(void *);
    extern void func_02052240(u8 *);
    extern void func_020477dc(void *, s32, s32);
    extern void *func_02047820(u16);
    extern s32 func_020ddc8c(void *, void *);
    extern void *func_02117630(u8 *, u32);
    extern s32 func_020f5704(s32);
    extern void func_02052844(u8 *, s32, s32);
    extern void func_021168f8(void *, void *);
    extern void func_02047490(void *);
    extern s32 func_0210c2f4(void *, void *);
    extern void func_0206e8f0(u32, void *, u8);
    extern u32 *func_020f0aa4(s32);
    extern void func_020f09d4(void *);
    extern s32 func_020f5948(void);
    extern void *func_0210c594(u32, u32);
    extern void func_021167ac(void *, s32);
    extern void func_021167f0(void *, void *);
    extern void *func_0210957c(s32);
    extern s32 func_020f685c(u8 *, s32);
    extern s32 func_02109444(void *);
    extern void func_0210c970(void *);
    extern void *func_0204785c(u16, u16);
    extern void func_0207cbfc(u32, u32);
    extern void func_0205440c(u8 *, s32);
    extern s32 func_020bd490(s32, u8);
    extern u8 *func_02021f10(s32);
    u8 *context;
    s32 node_size, zero, one, two;

    context = (*(u8 **)((u8 *)data_021626e8[0] + 0x10));
    node_size = 0x18;
    two = 2;
    zero = 0;
    one = 1;
    if (func_0210cc54(data_021555c8)) {
        s32 scale, v, instance, id;
        u8 *secondary, *obj;
        scale = 0x1000;
        id = func_0210ce5c();
        instance = func_0210ce5c();
        obj = func_02046f90((u16)id, (u16)instance);
        secondary = func_020e9fe8((void *)6001, (u16)(instance + 3001));
        (*(s32 *)(secondary + 0x1c)) = zero;
        (*(s32 *)(secondary + 0x20)) = zero;
        (*(s32 *)(secondary + 0x24)) = 0x32000;
        (*(u32 *)(secondary + 0x18)) &= ~1U;
        (*(u16 *)((*(u8 **)(obj + 0xb0)) + 0x8)) = func_0210ce5c();
        (*(u16 *)((*(u8 **)(obj + 0xb0)) + 0xa)) = func_0210ce5c();
        (*(u16 *)(obj + 0x92)) = (*(u16 *)(context + 0x28));
        (*(s32 *)(obj + 0)) = (*(s32 *)(context + 0x1c));
        (*(s32 *)(obj + 8)) = (*(s32 *)(context + 0x24));
        v = func_020ef4c8(context + 0x1c);
        (*(s32 *)(obj + 4)) = v;
        (*(s32 *)(obj + 0x50)) = v;
        func_02052240(obj);
        if ((*(u8 *)(data_02160204 + 0x7e)) == zero) (*(u8 **)(obj + 0xc4)) = context;
        if (func_0210ce6c() != zero) (*(u32 *)(obj + 0xac)) |= 0x200;
        (*(s32 *)(obj + 0x58)) = scale;
        (*(s32 *)(obj + 0x78)) = 3;
        func_020477dc(obj, two, zero);
        return one;
    }
    if (func_0210cc54(data_021555d0)) {
        s32 v, id;
        u8 *obj;
        id = func_0210ce5c();
        func_0210ce6c();
        obj = func_02047820((u16)id);
        if (obj != NULL) {
            (*(u16 *)(obj + 0x92)) = func_020ddc8c(obj, context + 0x1c);
            (*(s32 *)(obj + 0)) = (*(s32 *)(context + 0x1c));
            (*(s32 *)(obj + 8)) = (*(s32 *)(context + 0x24));
            v = func_020ef4c8(context + 0x1c);
            (*(s32 *)(obj + 4)) = v;
            (*(s32 *)(obj + 0x50)) = v;
        }
        return one;
    }
    if (func_0210cc54(data_021555d8)) {
        s32 v, id;
        u8 *obj;
        id = func_0210ce5c();
        func_0210ce6c();
        obj = func_02047820((u16)id);
        if (obj != NULL) {
            (*(u16 *)(obj + 0x92)) = func_020ddc8c(obj, context + 0x1c);
            (*(s32 *)(obj + 0)) = (*(s32 *)(context + 0x1c));
            (*(s32 *)(obj + 8)) = (*(s32 *)(context + 0x24));
            v = func_020ef4c8(context + 0x1c);
            (*(s32 *)(obj + 4)) = v;
            (*(s32 *)(obj + 0x50)) = v;
        }
        return one;
    }
    if (func_0210cc54(data_021555e0)) {
        s32 v, id;
        u8 *obj;
        id = func_0210ce5c();
        func_0210ce6c();
        obj = func_02047820((u16)id);
        if (obj != NULL) {
            (*(u16 *)(obj + 0x92)) = func_020ddc8c(obj, context + 0x1c);
            (*(s32 *)(obj + 0)) = (*(s32 *)(context + 0x1c));
            (*(s32 *)(obj + 8)) = (*(s32 *)(context + 0x24));
            v = func_020ef4c8(context + 0x1c);
            (*(s32 *)(obj + 4)) = v;
            (*(s32 *)(obj + 0x50)) = v;
        }
        return one;
    }
    if (func_0210cc54(data_021555e8)) {
        s32 v, id;
        u8 *obj;
        id = func_0210ce5c();
        func_0210ce6c();
        obj = func_02047820((u16)id);
        if (obj != NULL) {
            (*(u16 *)(obj + 0x92)) = func_020ddc8c(obj, context + 0x1c);
            (*(s32 *)(obj + 0)) = (*(s32 *)(context + 0x1c));
            (*(s32 *)(obj + 8)) = (*(s32 *)(context + 0x24));
            v = func_020ef4c8(context + 0x1c);
            (*(s32 *)(obj + 4)) = v;
            (*(s32 *)(obj + 0x50)) = v;
        }
        return one;
    }
    if (func_0210cc54(data_021555f0)) {
        u8 *obj;
        obj = func_02047820((u16)func_0210ce6c());
        if (obj != NULL) {
            *(Vec11a8 *)obj = *(Vec11a8 *)(context + 0x1c);
            (*(u16 *)(obj + 0x92)) = (*(u16 *)(context + 0x28));
            (*(s32 *)(obj + 0x50)) = (*(s32 *)(context + 0x20));
        }
        return one;
    }
    if (func_0210cc54(data_021555f4)) {
        u8 *obj;
        obj = func_02047820((u16)func_0210ce6c());
        if (obj != NULL && (*(s8 *)(obj + 0x1a0)) == zero) {
            *(Vec11a8 *)obj = *(Vec11a8 *)(context + 0x1c);
            (*(u16 *)(obj + 0x92)) = (*(u16 *)(context + 0x28));
            (*(s32 *)(obj + 0x50)) = (*(s32 *)(context + 0x20));
            (*(u8 *)(obj + 0x1a0)) = one;
        }
        return one;
    }
    if (func_0210cc54(data_021555fc)) {
        u8 *obj;
        obj = func_02047820((u16)func_0210ce6c());
        if (obj != NULL) (*(u16 *)(obj + 0x92)) = (*(u16 *)(context + 0x28));
        return one;
    }
    if (func_0210cc54(data_02155600)) {
        s32 d, v;
        u8 *obj;
        obj = func_02047820((u16)func_0210ce5c());
        if (obj == NULL) goto error_11a8;
        v = func_0210ce6c();
        d = v - (*(s32 *)(obj + 4));
        if (d < zero) d = -d;
        (*(s32 *)(obj + 0x5c)) = d;
        (*(s32 *)(obj + 4)) = v;
        return one;
    }
    if (func_0210cc54(data_02155608)) {
        u8 *obj;
        u8 anim;
        obj = func_02047820((u16)func_0210ce5c());
        if (obj != NULL) {
            anim = func_0210ce6c();
            func_020477dc(obj, anim, one);
            (*(s32 *)((*(u8 **)((*(u8 **)(obj + 0x108)) + 0)) + 0x18)) = two;
        }
        return one;
    }
    if (func_0210cc54(data_0215560c)) {
        s32 v, id;
        u8 *entry, *node, *obj;
        obj = func_02047820((u16)func_0210ce5c());
        id = func_0210ce5c();
        node = (*(u8 **)((*(u8 **)(obj + 0x108)) + 0));
        func_020477dc(obj, (u8)id, one);
        (*(s32 *)(node + 0x18)) = func_0210ce5c();
        if (func_0210ce6c() != zero) {
            entry = (*(u8 **)((*(u8 **)(obj + 0x108)) + 0x10)) + id * 4;
            v = zero;
            s32 kind=*(u8 *)entry;
            if(kind > 14) goto kind_high;
            if(kind >= 14) goto kind_plus;
            if(kind > 4) goto kind_done;
            if(kind < 0) goto kind_done;
            if(kind == 0) return zero;
            if(kind == 4) goto kind_plus;
            goto kind_done;
        kind_high:
            if(kind == 15) v=*(u16 *)(entry+2);
            goto kind_done;
        kind_plus:
            v=*(u16 *)(entry+2)+two;
        kind_done:
            func_02117630((*(u8 **)((*(u8 **)(node + 0x58)) + 0xc)), (u16)v);
            (*(s32 *)(context + 0x2c)) = one;
            func_0210cef8();
        }
        return one;
    }
    if (func_0210cc54(data_02155614)) {
        s32 id;
        u8 *obj;
        if (func_0210cc54(data_02155618)) {
            if (func_0210cc88(data_02155620)) {
                id = func_020f5704(zero);
                if (id != zero - 1) {
                    obj = func_02047820((u16)id);
                    if (obj != NULL) func_02052844(obj, zero, zero - 1);
                }
            }
        } else {
            obj = func_02047820((u16)func_0210ce6c());
            if (obj != NULL) {
                func_02052844(obj, zero, zero - 1);
            }
        }
        return one;
    }
    if (func_0210cc54(data_02155628)) {
        u8 *obj;
        if (func_0210cc54(data_0215562c)) {
            obj = func_02047820((u16)func_0210ce5c());
            if (obj != NULL) {
                if (func_0210ce6c() != zero) (*(u32 *)(obj + 0xac)) |= 1;
                else (*(u32 *)(obj + 0xac)) &= ~1U;
                return one;
            }
        }
        if (func_0210cc54(data_02155634)) {
            obj = func_02047820((u16)func_0210ce5c());
            if (obj != NULL) {
                if (func_0210ce6c() != zero) (*(u32 *)(obj + 0xac)) &= ~0x1000000U;
                else (*(u32 *)(obj + 0xac)) |= 0x1000000;
                return one;
            }
        }
        goto error_11a8;
    }
    if (func_0210cc54(data_02155638)) {
        u8 *obj;
        obj = func_02047820((u16)func_0210ce5c());
        if (obj == NULL) goto error_11a8;
        if (func_0210ce6c() != zero) {
            (*(u32 *)(obj + 0x80)) = ((*(u32 *)(obj + 0x80)) | 2) & ~0x400U;
        } else {
            (*(u32 *)(obj + 0x80)) = ((*(u32 *)(obj + 0x80)) & ~2U) | 0x400;
        }
        (*(u8 *)(obj + 0xa3)) = zero;
        (*(u32 *)(obj + 0xac)) &= ~0x2000U;
        return one;
    }
    if (func_0210cc54(data_02155640)) {
        s32 id;
        u8 *manager, *node, *obj;
        obj = func_02047820((u16)func_0210ce6c());
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
        }
        return one;
    }
    if (func_0210cc54(data_02155644)) {
        s32 mode, id;
        u8 *node, *player, *next, *obj;
        u8 *player2, *next2, *node2;
        u32 event_id;
        mode = func_0210ce6c();
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
    if (func_0210cc54(data_0215564c)) {
        u8 *obj;
        s32 i, id, count;
        if ((*(u8 *)(data_02160204 + 0x7a)) == zero && (*(u8 *)(data_02160204 + 0x7e)) == zero) {
            id = func_0210ce5c();
            count = func_0210ce5c();
            obj = func_02047820((u16)id);
            if (obj != NULL && count > 0) {
                i = zero;
                do {
                    (*(u16 *)((*(u8 **)(obj + 0xb0)) + i * 2 + 0xe)) = func_0210ce6c();
                } while (++i < count);
            }
        }
        return one;
    }
    if (func_0210cc54(data_02155654)) {
        u8 *obj;
        obj = func_02047820((u16)func_0210ce5c());
        if (obj != NULL && func_0210cc88(data_0215565c)) {
            (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x24)) = zero;
            (*(u8 *)((*(u8 **)(obj + 0xd0)) + 1)) = one;
            return one;
        }
        goto error_11a8;
    }
    if (func_0210cc54(data_02155664)) {
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
            switch (func_0210ce6c()) {
            case 0: break;
            case 1:
                (*(u8 **)(obj + 0xd0)) = func_0210c594(0x3c, data_02155c3c);
                (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x19)) = 3;
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
                waypoint_again_1:
                v = func_020f5948();
                if (v != zero) {
                    node = func_0210c594(node_size, data_02155c3c);
                    (*(s32 *)(node + 0x4)) = v;
                    (*(s32 *)(node + 0xc)) = func_020f5948();
                    (*(u8 *)(node + 0x0)) = instance;
                    func_021167f0((*(u8 **)(obj + 0xd0)) + 0x30, node);
                    instance = (u8)(instance + 1);
                    goto waypoint_again_1;
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
                func_020477dc(obj, two, zero);
            } else {
                func_020477dc(obj, zero, zero);
            }
        }
        return one;
    }
    if (func_0210cc54(data_0215566c)) {
        u8 idx;
        s32 anim, v;
        u16 id, instance;
        u8 *record, *file, *secondary, *node, *obj;
        if ((*(u8 *)(data_02160204 + 0x7a)) == zero) {
        file = func_0210c594(0x60, data_02155c3c);
        (*(u8 **)(file + 0)) = func_0210957c(two);
        if ((*(u8 **)(file + 0)) == NULL) return zero;
        id = (u16)func_0210ce5c();
        instance = (u16)func_0210ce5c();
        obj = func_02046f90(id, instance);
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
        (*(u32 *)(obj + 0xac)) |= 0x200;
        func_02052240(obj);
        (*(s32 *)(obj + 0x58)) = 0x1000;
        (*(s32 *)(obj + 0x78)) = 3;
        id = (*(u16 *)(obj + 0x8e));
        if (((u32)id > 1000U && (u32)id < 5000U) || (id != 0 && (u32)id < 700U)) {
            func_020477dc(obj, two, zero);
        } else {
            func_020477dc(obj, zero, zero);
        }
        id = (u16)func_0210ce5c();
        file_compare_final_0:
        if (id != func_020f685c((*(u8 **)(file + 0)), zero)) goto file_advance_final_0;
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
        if (v & 255) {
            (*(u8 *)(record + 0x2a)) = func_020f685c((*(u8 **)(file + 0)), zero);
            (*(u8 *)(record + 0x2b)) = func_020f685c((*(u8 **)(file + 0)), zero);
            (*(u8 *)(record + 0x2c)) = func_020f685c((*(u8 **)(file + 0)), zero);
            (*(u8 *)(record + 0x2d)) = func_020f685c((*(u8 **)(file + 0)), zero);
        }
        (*(u8 *)(record + 1)) = one;
        goto file_finish_final_0;
    file_advance_final_0:
        func_02109444((*(u8 **)(file + 0)));
        goto file_compare_final_0;
    file_finish_final_0:
        func_0210c970(file);
        (*(u8 **)(obj + 0xd0)) = record;
        v = func_0210ce5c();
        if (v <= 1000 - one) {
            (*(u16 *)((*(u8 **)(obj + 0xb0)) + 0x8)) = v;
        } else {
            (*(u16 *)((*(u8 **)(obj + 0xb0)) + 0xa)) = v / 1000;
            (*(u16 *)((*(u8 **)(obj + 0xb0)) + 0x8)) = v % 1000;
        }
        if (func_0210ce6c() == two) {
            idx = one;
            func_021167ac((*(u8 **)(obj + 0xd0)) + 0x30, 0x10);
            node = func_0210c594(0x18, data_02155c3c);
            (*(s32 *)(node + 0x4)) = (*(s32 *)(obj + 0x0));
            (*(s32 *)(node + 0xc)) = (*(s32 *)(obj + 0x8));
            func_021167f0((*(u8 **)(obj + 0xd0)) + 0x30, node);
            waypoint_again_2:
            v = func_020f5948();
            if (v != zero) {
                node = func_0210c594(node_size, data_02155c3c);
                (*(s32 *)(node + 0x4)) = v;
                (*(s32 *)(node + 0xc)) = func_020f5948();
                (*(u8 *)(node + 0x0)) = idx;
                func_021167f0((*(u8 **)(obj + 0xd0)) + 0x30, node);
                idx++;
                goto waypoint_again_2;
            }
            (*(u8 *)((*(u8 **)(obj + 0xd0)) + 1)) = one;
            (*(u32 *)(obj + 0xac)) |= 0x200;
        }
        }
        return one;
    }
    if (func_0210cc54(data_02155674)) {
        u8 idx;
        s32 anim, v, instance, id;
        u8 *record, *file, *secondary, *node, *obj;
        file = func_0210c594(0x60, data_02155c3c);
        (*(u8 **)(file + 0)) = func_0210957c(two);
        if ((*(u8 **)(file + 0)) == NULL) return zero;
        id = (u16)func_0210ce5c();
        instance = (u16)func_0210ce5c();
        if (func_0204785c((u16)id, (u16)instance) != NULL) goto already_exists_final;
        obj = func_02046f90((u16)id, (u16)instance);
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
        (*(s32 *)(obj + 0x0)) = v;
        (*(s32 *)(obj + 0x18)) = v;
        v = func_020f5948();
        (*(s32 *)(obj + 0x8)) = v;
        (*(s32 *)(obj + 0x20)) = v;
        (*(u32 *)(obj + 0xac)) |= 0x200;
        func_02052240(obj);
        (*(s32 *)(obj + 0x58)) = 0x1000;
        (*(s32 *)(obj + 0x78)) = 3;
        id = (*(u16 *)(obj + 0x8e));
        if (((u32)id > 1000U && (u32)id < 5000U) || (id != 0 && (u32)id < 700U)) {
            func_020477dc(obj, two, zero);
        } else {
            func_020477dc(obj, zero, zero);
        }
        id = (u16)func_0210ce5c();
        file_compare_final_1:
        if (id != func_020f685c((*(u8 **)(file + 0)), zero)) goto file_advance_final_1;
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
        if (v & 255) {
            (*(u8 *)(record + 0x2a)) = func_020f685c((*(u8 **)(file + 0)), zero);
            (*(u8 *)(record + 0x2b)) = func_020f685c((*(u8 **)(file + 0)), zero);
            (*(u8 *)(record + 0x2c)) = func_020f685c((*(u8 **)(file + 0)), zero);
            (*(u8 *)(record + 0x2d)) = func_020f685c((*(u8 **)(file + 0)), zero);
        }
        (*(u8 *)(record + 1)) = one;
        goto file_finish_final_1;
    file_advance_final_1:
        func_02109444((*(u8 **)(file + 0)));
        goto file_compare_final_1;
    file_finish_final_1:
        func_0210c970(file);
        goto attach_record_final;
    already_exists_final:
        func_0210c970(file);
        return one;
    attach_record_final:
        (*(u8 **)(obj + 0xd0)) = record;
        v = func_0210ce5c();
        if (v <= 1000 - one) {
            (*(u16 *)((*(u8 **)(obj + 0xb0)) + 0x8)) = v;
        } else {
            (*(u16 *)((*(u8 **)(obj + 0xb0)) + 0xa)) = v / 1000;
            (*(u16 *)((*(u8 **)(obj + 0xb0)) + 0x8)) = v % 1000;
        }
        if (func_0210ce6c() == two) {
            idx = one;
            func_021167ac((*(u8 **)(obj + 0xd0)) + 0x30, 0x10);
            node = func_0210c594(0x18, data_02155c3c);
            (*(s32 *)(node + 0x4)) = (*(s32 *)(obj + 0x0));
            (*(s32 *)(node + 0xc)) = (*(s32 *)(obj + 0x8));
            func_021167f0((*(u8 **)(obj + 0xd0)) + 0x30, node);
            waypoint_again_3:
            v = func_020f5948();
            if (v != zero) {
                node = func_0210c594(node_size, data_02155c3c);
                (*(s32 *)(node + 0x4)) = v;
                (*(s32 *)(node + 0xc)) = func_020f5948();
                (*(u8 *)(node + 0x0)) = idx;
                func_021167f0((*(u8 **)(obj + 0xd0)) + 0x30, node);
                idx++;
                goto waypoint_again_3;
            }
            (*(u8 *)((*(u8 **)(obj + 0xd0)) + 1)) = one;
            (*(u32 *)(obj + 0xac)) |= 0x200;
        }
        return one;
    }
    if (func_0210cc54(data_0215567c)) {
        u8 idx;
        s32 flag, anim, v, instance, id;
        u8 *flags, *secondary, *node, *obj;
        if ((*(u8 *)(data_02160204 + 0x7a)) == zero) {
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
            v = func_0210ce5c();
            if (v == 0) goto spawn_mode_done_1;
            if (v == 1) goto spawn_mode_one_1;
            if (v == 2) goto spawn_mode_two_1;
            goto spawn_mode_done_1;
            spawn_mode_one_1: {
                (*(u8 **)(obj + 0xd0)) = func_0210c594(0x3c, data_02155c3c);
                (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x19)) = func_0210ce5c();
                (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x1b)) = func_0210ce5c();
                (*(u16 *)((*(u8 **)(obj + 0xd0)) + 0x1c)) = func_0210ce6c();
                goto spawn2_finish;
            }
            spawn_mode_two_1: {
                instance = one;
                (*(u8 **)(obj + 0xd0)) = func_0210c594(0x3c, data_02155c3c);
                func_021167ac((*(u8 **)(obj + 0xd0)) + 0x30, 0x10);
                node = func_0210c594(0x18, data_02155c3c);
                (*(s32 *)(node + 0x4)) = (*(s32 *)(obj + 0x0));
                (*(s32 *)(node + 0xc)) = (*(s32 *)(obj + 0x8));
                func_021167f0((*(u8 **)(obj + 0xd0)) + 0x30, node);
                (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x19)) = func_0210ce5c();
                (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x1b)) = func_0210ce6c();
                waypoint_again_4:
                v = func_020f5948();
                if (v != zero) {
                    node = func_0210c594(node_size, data_02155c3c);
                    (*(s32 *)(node + 0x4)) = v;
                    (*(s32 *)(node + 0xc)) = func_020f5948();
                    (*(u8 *)(node + 0x0)) = instance;
                    func_021167f0((*(u8 **)(obj + 0xd0)) + 0x30, node);
                    instance = (u8)(instance + 1);
                    goto waypoint_again_4;
                }
            spawn2_finish:
                (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x25)) = two;
                (*(u8 *)((*(u8 **)(obj + 0xd0)) + 0x1)) = one;
                (*(u32 *)(obj + 0xac)) |= 0x200;
            }
            spawn_mode_done_1: ;
            id = (*(u16 *)(obj + 0x8e));
            if ((u32)id > 5000U && (u32)id < 6000U) { (*(u32 *)(obj + 0x80)) |= 0x400; (*(u32 *)(obj + 0x80)) |= 2; }
        } else if (id == 5081) {
            (*(u8 **)(obj + 0xd0)) = func_0210c594(0x3c, data_02155c3c);
            (*(u16 *)((*(u8 **)(obj + 0xd0)) + 4)) = func_0210ce6c();
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
            (*(u8 *)(obj + 0xcf)) = func_0210ce6c();
        }
        if ((*(u16 *)(obj + 0x8e)) == 5001 && data_02160200 != NULL) (*(u16 *)((*(u8 **)(obj + 0xb0)) + 0x22)) = (*(s32 *)(data_02160200 + 0x168));
        if ((*(u16 *)(obj + 0x8e)) == 5555) func_0205440c(obj, zero);

        (*(s32 *)(obj + 0x58)) = 0x1000;
        id = (*(u16 *)(obj + 0x8e));
        if (((u32)id > 1000U && (u32)id < 5000U) || (id != 0 && (u32)id < 700U)) {
            func_020477dc(obj, two, zero);
        } else {
            func_020477dc(obj, zero, zero);
        }
        }
        return one;
    }
    if (func_0210cc54(data_02155684)) {
        u16 j;
        u8 value, slot;
        s32 found, i, id, key;
        u8 *entry;
        if (func_0210cc54(data_0215568c)) {
            found = zero;
            id = func_0210ce5c();
            key = func_0210ce5c();
            value = (u8)func_0210ce6c();
            for (slot = zero; slot < 3; slot++) {
                if (found == zero && func_020bd490(zero, slot) != zero && id == func_020bd490(one, slot)) {
                    entry = func_02021f10(func_020bd490(3, slot));
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
        if (func_0210cc54(data_02155690)) {
            u8 *slot_ptr;
            s32 localKey;
            found = zero;
            id = func_0210ce5c();
            localKey = func_0210ce6c();
            entry = func_02021f10(id - 1);
            if (entry != NULL) {
                if (localKey <= 100) {
                    for (i = zero; i < 30; i++) if (entry[0x4e + i] == localKey) found = one;
                    if (found == zero) {
                        for (i = zero; i < 30; i++) {
                            slot_ptr = entry + i;
                            if (slot_ptr[0x4e] == 0) { slot_ptr[0x4e] = localKey; break; }
                        }
                    }
                } else if (localKey >= 101) {
                    for (i = zero; i < 15; i++) if (entry[0x6c + i] == localKey) found = one;
                    if (found == zero) {
                        for (i = zero; i < 15; i++) {
                            slot_ptr = entry + i;
                            if (slot_ptr[0x6c] == 0) { slot_ptr[0x6c] = localKey; break; }
                        }
                    }
                }
                found = one;
            }
            return found;
        }
        if (func_0210cc88(data_02155694)) {
            (*(u8 *)(data_02160204 + 0x11c)) = one;
            (*(u8 *)(data_02160078 + 0x36)) = one;
            i = zero;
            found = 0;
            key = 101;
            for (; i <= 7; i++) {
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
        if (func_0210cc88(data_02155698)) {
            (*(u8 *)(data_02160204 + 0x11c)) = one;
            (*(u8 *)(data_02160078 + 0x36)) = one;
            i = zero;
            found = 0;
            key = 102;
            for (; i <= 7; i++) {
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
        if (func_0210cc88(data_021556a0)) {
            (*(u8 *)(data_02160204 + 0x11c)) = one;
            (*(u8 *)(data_02160078 + 0x36)) = one;
            i = zero;
            found = 0;
            key = 103;
            for (; i <= 7; i++) {
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
        return zero;
    }
    if (func_0210cc54(data_021556a8)) {

        if ((*(s16 *)(data_02160204 + 0x74)) == zero && (*(s16 *)(data_02160204 + 0x76)) == zero) {
            (*(s16 *)(data_02160204 + 0x74)) = func_020f5948() >> 12;
            (*(s16 *)(data_02160204 + 0x76)) = func_020f5948() >> 12;
        }
        return one;
    }
    if (func_0210cc54(data_021556b0)) {
        u8 *obj;
        obj = func_02047820((u16)func_0210ce5c());
        if (obj != NULL) {
            (*(u8 *)((*(u8 **)((*(u8 **)(obj + 0x108)) + 0)) + 0x71)) = func_0210ce6c();
            return one;
        }
        goto error_11a8;
    }
error_11a8:
    return 0;
}
