/* 7 functions from 0x020A033C to 0x020A1234 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 data[10]; } Unk14;
typedef struct { s16 data[18]; } Unk24;
extern const Unk14 data_02142c04, data_02142c2c;
extern const Unk24 data_02142d30;
extern s8 *data_021600b0;
void func_020a3bbc(s32);
void func_021098ac(void *);

extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern s16 *func_02116984(void *, u16);

extern void *func_021092d8(const char *);
extern void func_02109444(void *);
extern s32 func_0210cd20(void *, s32);
extern s32 func_0210cdfc(void *, s32);
extern u8 *data_02160200;
extern u8 *data_02160204;
extern const char data_021489f8[28];
extern const u8 data_02148a14[4];
#pragma optimization_level 0

#pragma optimization_level 4
void func_020a033c(s32 id)
{
    extern void *func_020a0dac(void);
    extern s32 func_020a0e5c(const char *);
    extern u32 func_020a1734(u32);
    extern s32 func_020123f0(const char *, const char *);
    extern void func_021093b0(u32);
    extern void func_02108ffc(void);
    extern void func_021167f0(void *, void *);
    s32 col = 0;
    s32 row = col - 2;
    s32 matched = col;
    s32 special_count = col;
    s32 slot = col;
    s8 *g = data_021600b0;
    void *fp = func_021092d8(data_021489f8);
    const char *kind;
    const char *alt_kind;
    s16 entry_id;
    s16 entry_col;
    s16 entry_row;
    s16 links[3];
    s16 requirement;
    s16 entry_group;
    s16 entry_value;
    s32 alt_requirement;
    s16 entry_extra;
    s16 item_base;
    s16 item_arg;
    s16 item_req[5];
    s16 item_args[5];
    u32 unlocked[10];
    u16 special_slots[40];
    s32 volatile entry_value_unsigned;
    s32 id_bit;
    s32 id_word;
    s32 req_word;
    s32 req_bit;
    s32 alt_word;
    s32 alt_bit;
    s32 volatile group_byte;
    s32 volatile base_arg;
    s32 volatile row_byte;
    s32 i;

    if (fp == NULL) {
        return;
    }
    func_02109444(fp);
    for (i = col; i < 10; ++i) {
        unlocked[i] = 0;
    }
    *(u16 *)(g + 0x1ec) = 1;
    *(u16 *)(g + 0x1ee) = 0;
    g[0x238] = 8;

next_record:
    i = 0;
    kind = (const char *)func_0210cd20(fp, i);
    if (func_020123f0(data_02148a14, kind) == 0) {
        goto finish_file;
    }
    entry_id = (s16)(u16)func_0210cdfc(fp, i);
    entry_col = (s16)func_0210cdfc(fp, i);
    entry_row = (s16)func_0210cdfc(fp, i);
    links[0] = (s16)func_0210cdfc(fp, i);
    links[1] = (s16)func_0210cdfc(fp, i);
    links[2] = (s16)func_0210cdfc(fp, i);
    requirement = (s16)(u16)func_0210cdfc(fp, i);
    entry_group = (s16)(u16)func_0210cdfc(fp, i);
    entry_value = (s16)(u16)func_0210cdfc(fp, i);
    alt_requirement = (s16)func_0210cdfc(fp, i);
    alt_kind = (const char *)func_0210cd20(fp, i);
    entry_extra = (s16)(u16)func_0210cdfc(fp, i);
    item_base = (s16)(u16)func_0210cdfc(fp, i);
    item_arg = (s16)(u16)func_0210cdfc(fp, i);
    {
        s32 zero = i;
        for (; i < 5; ++i) {
            item_req[i] = (s16)func_0210cdfc(fp, zero);
            item_args[i] = (s16)func_0210cdfc(fp, zero);
        }
    }
    entry_value_unsigned = (u16)entry_value;
    id_bit = entry_id % 32;
    id_word = entry_id / 32;
    req_word = requirement / 32;
    req_bit = requirement % 32;
    alt_word = alt_requirement / 32;
    alt_bit = alt_requirement % 32;
    group_byte = entry_group & 0xff;
    base_arg = (s8)item_arg;
    row_byte = (s8)entry_row;

fill_slot:
    {
        s8 *entry = g + slot * 40;
        s8 *fields = entry + 0x200;
        *(s16 *)(fields + 0x4e) = 0;
        if (entry_col == col && entry_row == row) {
            s16 *node = (s16 *)func_020a0dac();
            s8 *record = g + slot * 40;
            s32 type = func_020a0e5c(kind);
            record[0x23a] = (s8)type;
            if (func_020a1734((u8)type) == 1) {
                s8 *rf = record + 0x200;
                *(s16 *)(rf + 0x3c) = (s16)entry_col;
                record[0x23e] = (s8)row_byte;
                *(s16 *)(rf + 0x46) = (s16)entry_id;
                record[0x248] = (s8)group_byte;
                *(s16 *)(rf + 0x4a) = (s16)entry_value_unsigned;
                *(s16 *)(rf + 0x4c) = (s16)entry_extra;
                if (*(u32 *)(data_02160200 + 0x160) & 0x40) {
                    s32 j;
                    s16 *flags = (s16 *)(entry + 0x24e);
                    for (j = 0; j < 3; ++j) {
                        s32 link = links[j];
                        *(s16 *)(entry + 0x240 + j * 2) = (s16)link;
                        if (link != -1) {
                            *flags |= (s16)(1 << j);
                            *flags |= (s16)(1 << (j + 3));
                        }
                    }
                    *(s16 *)(fields + 0x4e) |= 0x40;
                    unlocked[id_word] |= 1U << id_bit;
                    goto count_unlocked;
                }
                if (((u32 *)data_02160200)[req_word] & (1U << req_bit)) {
                    s32 j;
                    s16 *flags = (s16 *)(entry + 0x24e);
                    unlocked[id_word] |= 1U << id_bit;
                    for (j = 0; j < 3; ++j) {
                        s32 link = links[j];
                        *(s16 *)(entry + 0x240 + j * 2) = (s16)link;
                        if (link != -1) {
                            *flags |= (s16)(1 << j);
                        }
                    }
                    *(s16 *)(fields + 0x4e) |= 0x40;
                    if (alt_requirement == -1) goto count_unlocked;
                    if (((u32 *)data_02160200)[alt_word] & (1U << alt_bit)) {
                        ++*(u8 *)(g + 0x1f2);
                    }
                    goto item_data;
count_unlocked:
                    ++*(u8 *)(g + 0x1f2);
                }
item_data:
                *(s16 *)(record + 0x250) = (s16)item_base;
                record[0x25c] = (s8)base_arg;
                {
                    s32 j;
                    s32 count = 1;
                    s16 expected = 1;
                    for (j = 1; j < 6; ++j) {
                        s32 req;
                        *(s16 *)(entry + 0x250 + j * 2) = 0;
                        req = item_req[j - 1];
                        if (req == -1) {
                            continue;
                        }
                        if ((*(u32 *)(data_02160200 + 0x160) & 0x40) ||
                            (((u32 *)data_02160200)[req / 32] & (1U << (req % 32)))) {
                            *(s16 *)(entry + 0x250 + count * 2) = (s16)(item_base + j);
                            entry[0x25c + count] = (s8)item_args[j - 1];
                            ++count;
                        }
                        ++expected;
                    }
                    if (count == expected) {
                        *(s16 *)(fields + 0x4e) |= 0x80;
                    }
                }
                if (alt_requirement != -1 &&
                    (((u32 *)data_02160200)[alt_word] & (1U << alt_bit))) {
                    entry[0x23a] = (s8)func_020a0e5c(alt_kind);
                }
                ++*(s16 *)(g + 0x1f0);
                if (*(u16 *)(data_02160204 + 0x148) == entry_id) {
                    *(s16 *)(g + 0x1ea) = (s16)entry_id;
                    *(s16 *)(g + 0x1ec) = (s16)entry_col;
                    *(s16 *)(g + 0x1ee) = (s16)entry_row;
                }
            } else {
                s32 j;
                s8 *rf = record + 0x200;
                *(s16 *)(rf + 0x3c) = (s16)entry_col;
                record[0x23e] = (s8)row_byte;
                *(s16 *)(rf + 0x46) = (s16)entry_id;
                record[0x248] = 1;
                *(s16 *)(rf + 0x4a) = 1;
                *(s16 *)(rf + 0x4c) = (s16)entry_extra;
                for (j = 0; j < 3; ++j) {
                    *(s16 *)(entry + 0x240 + j * 2) = links[j];
                }
                special_slots[special_count] = (u16)slot;
                special_count = (u8)(special_count + 1);
            }
            node[0] = (s16)entry_id;
            node[1] = (s16)slot;
            func_021167f0((void *)id, node);
            matched = 1;
        } else {
            s8 *empty = g + slot * 40;
            *(s16 *)(empty + 0x246) = -1;
            empty[0x23e] = (s8)*(s16 *)(empty + 0x246);
            *(s16 *)(empty + 0x23c) = empty[0x23e];
            empty[0x23a] = 0;
        }
    }
    ++row;
    if (row >= 3) {
        ++col;
        row = -2;
    }
    ++slot;
    if (slot % 8 == 0) {
        func_02108ffc();
    }
    if (matched != 1) {
        goto fill_slot;
    }
    matched = 0;
    if (((s32 (*)(void *))(void (*)(void))func_02109444)(fp) != 0) {
        goto next_record;
    }

finish_file:
    func_021093b0((u32)fp);
    func_02108ffc();
    {
        s32 j;
        for (j = special_count - 1; j > -1; --j) {
            s8 *fields = g + special_slots[j] * 40 + 0x200;
            s32 link;
            switch (fields[0x3a]) {
            case 10:
                link = *(s16 *)(fields + 0x40);
                if (unlocked[link / 32] & (1U << (link % 32))) {
                    *(s16 *)(fields + 0x4e) |= 0x49;
                    link = *(s16 *)(fields + 0x46);
                    unlocked[link / 32] |= 1U << (link % 32);
                }
                break;
            case 9:
            case 12:
            case 13:
                link = *(s16 *)(fields + 0x42);
                if (unlocked[link / 32] & (1U << (link % 32))) {
                    *(s16 *)(fields + 0x4e) |= 0x52;
                    link = *(s16 *)(fields + 0x46);
                    unlocked[link / 32] |= 1U << (link % 32);
                }
                break;
            case 11:
                link = *(s16 *)(fields + 0x44);
                if (unlocked[link / 32] & (1U << (link % 32))) {
                    *(s16 *)(fields + 0x4e) |= 0x64;
                    link = *(s16 *)(fields + 0x46);
                    unlocked[link / 32] |= 1U << (link % 32);
                }
                break;
            }
            if (j % 8 == 0) {
                func_02108ffc();
            }
        }
    }
    func_02108ffc();
    *(s16 *)(g + 0x1f8) = 0;
    i = 0;
    {
    s16 *node = func_02116984(data_021600b0 + 0x1d4, (u16)i);
    do {
        s32 key = node[0];
        if (unlocked[key / 32] & (1U << (key % 32))) {
            s32 j;
            s8 *fields = g + node[1] * 40 + 0x200;
            s16 x = *(s16 *)(fields + 0x3c);
            if (*(s16 *)(g + 0x1f8) < x) {
                *(s16 *)(g + 0x1f8) = x;
            }
            for (j = 0; j < 3; ++j) {
                s8 *entry = g + node[1] * 40;
                s32 link = *(s16 *)(entry + 0x240 + j * 2);
                if (link != -1) {
                    *(s16 *)(entry + 0x24e) |= (s16)(1 << j);
                    if (unlocked[link / 32] & (1U << (link % 32))) {
                        *(s16 *)(g + node[1] * 40 + 0x24e) |= (s16)(1 << (j + 3));
                    }
                }
            }
        }
        ++i;
        if (i % 8 == 0) {
            func_02108ffc();
        }
        node = func_02116984(data_021600b0 + 0x1d4, (u16)i);
    } while (node != NULL);
    }
}
#pragma optimization_level 0

#pragma optimization_level 4
void func_020a0da8(void) {
}

void *func_020a0dac(void) {
    return func_0210c594(0xc, data_02155c3c);
}

void func_020a0dc8(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
}

s32 func_020a0e08(void *arg0,s32 arg1) {
s32 i=0;
do {
s16 *ptr=func_02116984(arg0,(u16)i);
if(ptr[0]==arg1) return ptr[1];
i++;
} while(func_02116984(arg0,(u16)i)!=NULL);
return 0;
}

extern s32 func_020123f0(const char *, const char *);
extern char data_02148a18[];
extern char data_02148a24[];
extern char data_02148a2c[];
extern char data_02148a34[];
extern char data_02148a40[];
extern char data_02148a48[];
extern char data_02148a54[];
extern char data_02148a60[];
extern char data_02148a6c[];
extern char data_02148a78[];
extern char data_02148a84[];
extern char data_02148a90[];
extern char data_02148a9c[];
s32 func_020a0e5c(const char *arg0) {
    if (func_020123f0(data_02148a18, arg0) == 0) {
        return 1;
    }
    if (func_020123f0(data_02148a24, arg0) == 0) {
        return 2;
    }
    if (func_020123f0(data_02148a2c, arg0) == 0) {
        return 3;
    }
    if (func_020123f0(data_02148a34, arg0) == 0) {
        return 4;
    }
    if (func_020123f0(data_02148a40, arg0) == 0) {
        return 5;
    }
    if (func_020123f0(data_02148a48, arg0) == 0) {
        return 6;
    }
    if (func_020123f0(data_02148a54, arg0) == 0) {
        return 7;
    }
    if (func_020123f0(data_02148a60, arg0) == 0) {
        return 8;
    }
    if (func_020123f0(data_02148a6c, arg0) == 0) {
        return 9;
    }
    if (func_020123f0(data_02148a78, arg0) == 0) {
        return 10;
    }
    if (func_020123f0(data_02148a84, arg0) == 0) {
        return 11;
    }
    if (func_020123f0(data_02148a90, arg0) == 0) {
        return 12;
    }
    if (func_020123f0(data_02148a9c, arg0) != 0) {
        return 0;
    }
    return 13;
}

void func_020a0fd4(s32 x,s32 y) {
Unk14 a=data_02142c04;
s8 *p=data_021600b0;
if(!(*(s16 *)(p+*(s16 *)(p+0x1e8)*40+0x24e)&0x40))return;
*(volatile u32 *)0x40004a4=0x1f00c0;
func_020a3bbc(21);
a.data[1]=0;a.data[2]=0;a.data[3]=128;a.data[4]=18;a.data[5]=64;a.data[6]=8;a.data[8]=128;a.data[9]=18;
func_021098ac(&a);
*(volatile u32 *)0x40004a4=0x1f00c0;
switch(*(s8 *)(p+*(s16 *)(p+0x1e8)*40+0x23a)) {
case 1:func_020a3bbc(36);break;
case 2:func_020a3bbc(36);break;
case 3:func_020a3bbc(5);break;
case 4:func_020a3bbc(35);break;
case 5:func_020a3bbc(34);break;
case 6:func_020a3bbc(36);break;
case 7:func_020a3bbc(36);break;
case 8:func_020a3bbc(34);break;
}
{
Unk24 table=data_02142d30;
u16 i;
for(i=0;i<2;i++) {
u16 k=i*9;
a.data[1]=table.data[k];a.data[2]=table.data[k+1];
a.data[3]=table.data[k+2];a.data[4]=table.data[k+3];
a.data[5]=x+table.data[k+4];a.data[6]=y+table.data[k+5];
a.data[7]=table.data[k+6];a.data[8]=table.data[k+7];a.data[9]=table.data[k+8];
func_021098ac(&a);
}
}
{
Unk14 b=data_02142c2c;
if((*(s16 *)(p+*(s16 *)(p+0x1e8)*40+0x24e)&0x80) && *(s8 *)(p+*(s16 *)(p+0x1e8)*40+0x23a)==8) {
func_020a3bbc(29);func_021098ac(&b);
}
}
}

