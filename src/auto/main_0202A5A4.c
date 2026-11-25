/* 9 functions from 0x0202A5A4 to 0x0202B4D8 (main), found by ds-decomp. */
#include "common.h"
extern char data_02146170[];
extern u16 *data_02160080;
extern u8 *data_02160a6c;

typedef struct {
    u8 pad[0x70];
    u32 field_70;
} Unk_02160244;

typedef struct {
    u8 pad[0x74];
    u8 field_74;
} Unk_0202B3D4_74;

typedef struct {
    u8 pad[0x128];
    Unk_0202B3D4_74 *ptr_128;
} Unk_0202B3D4;

extern Unk_02160244 *data_02160244;

extern u8 *func_0202e548(u8);
extern void func_02005e80(char *,const char *,...);
extern void *func_021092d8(char *);
extern u16 func_02092994(void *,int);
extern int func_0202bf4c(u16,u8);
extern int func_0202c658(void *);
extern int func_02109444(void *);
extern void func_021093b0(void *);
s32 func_0202a5a4(u32 arg0, s32 arg1, s32 arg2, u8 *arg3) {
    s32 flag = 0;
    u32 mask = 0;
    u8 *state = *(u8 **)(arg3 + 0x12c);
    u8 *p;

    switch (arg0) {
    case 1:
    case 2:
    case 8:
    case 9:
    case 10:
    case 11:
        if (arg1 == 0x20) {
            flag = 1;
        } else {
            mask |= 1 << arg1;
        }
        switch (arg0) {
        case 1:
            for (p = *(u8 **)(data_02160a6c + 0xb8); p != NULL; p = *(u8 **)(p + 0x174)) {
                u8 *stat = *(u8 **)(p + 0x118);
                if (*(s32 *)(stat + 0x70) != 0 && (*(u32 *)(stat + 0x78) & mask) != 0) {
                    *(u8 **)(state + 0x14) = p;
                    return 1;
                }
            }
            break;
        case 2:
            if (flag == 0) {
                for (p = *(u8 **)(data_02160a6c + 0xac); p != NULL; p = *(u8 **)(p + 0x16c)) {
                    u8 *stat = *(u8 **)(p + 0x118);
                    if (*(s32 *)(stat + 0x70) != 0 && (*(u32 *)(stat + 0x78) & mask) != 0) {
                        *(u8 **)(state + 0x14) = p;
                        return 1;
                    }
                }
            } else {
                for (p = *(u8 **)(data_02160a6c + 0xac); p != NULL; p = *(u8 **)(p + 0x16c)) {
                    if (*(s32 *)(*(u8 **)(p + 0x118) + 0x70) != 0 && (*(u32 *)(p + 0x80) & 0x20000) != 0) {
                        *(u8 **)(state + 0x14) = p;
                        return 1;
                    }
                }
            }
            break;
        case 8: {
            u8 *stat = *(u8 **)(arg3 + 0x118);
            if (*(s32 *)(stat + 0x70) != 0 && (*(u32 *)(stat + 0x78) & mask) != 0) {
                *(u8 **)(state + 0x14) = arg3;
                return 1;
            }
            break;
        }
        case 9:
            for (p = *(u8 **)(data_02160a6c + 0xb8); p != NULL; p = *(u8 **)(p + 0x174)) {
                u8 *stat = *(u8 **)(p + 0x118);
                if (*(s32 *)(stat + 0x70) != 0 && (*(u32 *)(stat + 0x78) & mask) == 0) {
                    *(u8 **)(state + 0x14) = p;
                    return 1;
                }
            }
            *(u8 **)(state + 0x14) = NULL;
            break;
        case 10:
            if (flag == 0) {
                for (p = *(u8 **)(data_02160a6c + 0xac); p != NULL; p = *(u8 **)(p + 0x16c)) {
                    u8 *stat = *(u8 **)(p + 0x118);
                    if (*(s32 *)(stat + 0x70) != 0 && (*(u32 *)(stat + 0x78) & mask) == 0) {
                        *(u8 **)(state + 0x14) = p;
                        return 1;
                    }
                }
            } else {
                for (p = *(u8 **)(data_02160a6c + 0xac); p != NULL; p = *(u8 **)(p + 0x16c)) {
                    if (*(s32 *)(*(u8 **)(p + 0x118) + 0x70) != 0 && (*(u32 *)(p + 0x80) & 0x20000) != 0) {
                        *(u8 **)(state + 0x14) = p;
                        return 1;
                    }
                }
            }
            break;
        case 11: {
            u8 *stat = *(u8 **)(arg3 + 0x118);
            if (*(s32 *)(stat + 0x70) != 0 && (*(u32 *)(stat + 0x78) & mask) == 0) {
                *(u8 **)(state + 0x14) = arg3;
                return 1;
            }
            break;
        }
        }
        break;
    case 3:
    case 4:
        if (arg0 == 3) {
            *(u8 **)(state + 0x14) = NULL;
            for (p = *(u8 **)(data_02160a6c + 0xb8); p != NULL; p = *(u8 **)(p + 0x174)) {
                u8 *stat = *(u8 **)(p + 0x118);
                if (*(s32 *)(stat + 0x70) != 0) {
                    s32 pct = (*(s32 *)(stat + 4) * 100) / *(s32 *)(stat + 8);
                    if (arg1 <= pct && pct <= arg2) {
                        *(u8 **)(state + 0x14) = p;
                        return 1;
                    }
                }
            }
        } else if (arg0 == 4) {
            for (p = *(u8 **)(data_02160a6c + 0xac); p != NULL; p = *(u8 **)(p + 0x16c)) {
            }
        } else if (arg0 == 12) {
            for (p = *(u8 **)(data_02160a6c + 0xac); p != NULL; p = *(u8 **)(p + 0x16c)) {
            }
        }
        break;
    case 5:
        for (p = *(u8 **)(data_02160a6c + 0xb8); p != NULL; p = *(u8 **)(p + 0x174)) {
            if (*(s32 *)(*(u8 **)(p + 0x118) + 0x70) != 0) {
                if (*(u16 *)(p + 0x8c) == arg1) {
                    return 0;
                }
            }
        }
        return 1;
    case 6: {
        u16 count = 0;
        for (p = *(u8 **)(data_02160a6c + 0xac); p != NULL; p = *(u8 **)(p + 0x16c)) {
            if (*(s32 *)(*(u8 **)(p + 0x118) + 0x70) == 0) {
                count++;
            }
        }
        if (count == arg1) {
            return 1;
        }
        break;
    }
    case 7: {
        u8 *stat = *(u8 **)(arg3 + 0x118);
        s32 pct = (*(s32 *)(stat + 4) * 100) / *(s32 *)(stat + 8);
        if (arg1 <= pct && pct <= arg2) {
            return 1;
        }
        break;
    }
    case 13:
        *(u8 **)(state + 0x14) = NULL;
        for (p = *(u8 **)(data_02160a6c + 0xac); p != NULL; p = *(u8 **)(p + 0x16c)) {
            u8 *stat = *(u8 **)(p + 0x118);
            if (*(s32 *)(stat + 0x70) != 0) {
                s32 pct = (*(s16 *)(stat + 0xc) * 100) / *(s16 *)(stat + 0xe);
                if (arg1 <= pct && pct <= arg2) {
                    *(u8 **)(state + 0x14) = p;
                    return 1;
                }
            }
        }
        break;
    case 14:
        for (p = *(u8 **)(data_02160a6c + 0xb8); p != NULL; p = *(u8 **)(p + 0x174)) {
            if (*(s32 *)(*(u8 **)(p + 0x118) + 0x70) != 0) {
                if (*(u16 *)(p + 0x8c) == arg1) {
                    return 1;
                }
            }
        }
        break;
    }
    return 0;
}

int func_0202aa68(int mode, int name, int unused, u8 *obj) {
    void *file;
    u16 parse;
    u16 i;
    s16 count;
    u16 row = 0;
    int found;
    char path[32];
    u16 values[11] = {0};
    u8 *state = *(u8 **)(obj + 0x12c);

    func_02005e80(path, data_02146170, name);
    file = func_021092d8(path);
    found = 0;
    do {
        count = 0;
        parse = 0;
        values[parse] = func_02092994(file, count); parse++;
        values[parse] = func_02092994(file, count); parse++;
        values[parse] = func_02092994(file, count); parse++;
        values[parse] = func_02092994(file, count); parse++;
        values[parse] = func_02092994(file, count); parse++;
        values[parse] = func_02092994(file, count); parse++;
        values[parse] = func_02092994(file, count); parse++;
        values[parse] = func_02092994(file, count); parse++;
        values[parse] = func_02092994(file, count); parse++;
        values[parse] = func_02092994(file, count); parse++;
        values[parse] = func_02092994(file, count);
        if (row % 2 == 0) {
            for (i = 0; i < 9; i++) {
                if (func_0202bf4c(values[i + 2], (u8)i)) {
                    count++;
                }
            }
            if (data_02160080[0] & 16) {
                for (i = 0; i < 9; i++) {
                    data_02160080[i + 18] = values[i + 2];
                }
                break;
            }
            if (count == values[1] && count != 0) {
                if (mode == 0) {
                    int slot = func_0202c658(obj);
                    u16 id = *(u16 *)(obj + 0x8c);
                    for (i = 0; i < 9; i++) {
                        if (id == values[i + 2] && slot == i) {
                            if (*(s16 *)((u8 *)data_02160244 + 0xf8) == 0 && *(u16 *)((u8 *)data_02160244 + 0xf6) == 0) {
                                *(u16 *)((u8 *)data_02160244 + 0xf6) = values[0];
                                *(s16 *)((u8 *)data_02160244 + 0xf8) = count - 1;
                                found = 1;
                            } else if (*(u16 *)((u8 *)data_02160244 + 0xf6) == values[0]) {
                                if (*(s16 *)((u8 *)data_02160244 + 0xf8) - 1 >= 0) {
                                    (*(s16 *)((u8 *)data_02160244 + 0xf8))--;
                                    found = 1;
                                }
                            }
                            break;
                        }
                    }
                } else {
                    found = 1;
                    break;
                }
            }
        } else if (row % 2 == 1 && found) {
            if (data_02160080[0] & 8) {
                for (i = 0; i < 9; i++) {
                    data_02160080[i + 1] = values[i + 2];
                }
            }
            break;
        }
        if (func_02109444(file) == 0) {
            break;
        }
        row++;
    } while (1);
    if (file) {
        func_021093b0(file);
    }
    switch (mode) {
    case 0:
        *(u32 *)(state + 16) &= ~2;
        if (found) {
            *(u32 *)(state + 16) |= 2;
            return 1;
        }
        break;
    case 1:
        *(u32 *)(state + 16) &= ~2;
        if (found) {
            *(u32 *)(state + 16) |= 2;
            return 1;
        }
        break;
    case 2:
        *(u32 *)(state + 16) &= ~2;
        if (found) {
            *(u32 *)(state + 16) |= 2;
            return 0;
        }
        return 1;
    case 3:
        return 0;
    }
    return 0;
}

s32 func_0202aec4(s32 arg0, s32 arg1, s32 arg2, u8 *arg3) {
    u8 *p = *(u8 **)(arg3 + 0x12c);
    u8 *r1 = *(u8 **)(p + 0x18);
    switch (arg0) {
    case 1:
        if (r1 != NULL) {
            return 1;
        }
        break;
    case 2:
        if (r1 != NULL && r1[0] == 1) {
            return 1;
        }
        break;
    case 3:
        if (r1 != NULL && r1[0] == 7) {
            return 1;
        }
        break;
    case 4:
        if (r1 != NULL && r1[0] == 8) {
            return 1;
        }
        break;
    case 5:
        if (r1 != NULL && r1[7] == 8) {
            u8 *info = func_0202e548(*(u8 *)(*(u8 **)(p + 0x1c) + 0x43));
            if (info[0x1c] == 0) {
                return 1;
            }
        }
        break;
    }
    return 0;
}

s32 func_0202af90(s32 arg0, s32 arg1, s32 arg2, u8 *arg3) {
    u8 *p = *(u8 **)(arg3 + 0x12c);
    u8 *node, *obj, *info, *q;
    s16 count;
    s32 found;

    switch (arg0) {
    case 3:
        node = *(u8 **)(p + 0x1c);
        count = 0;
        if (node != NULL) node = *(u8 **)(node + 0x18);
        while (node != NULL) {
            obj = *(u8 **)(node + 0);
            info = *(u8 **)(obj + 0x118);
            if (info[0] != 1) break;
            if (obj == arg3) break;
            count++;
            node = *(u8 **)(node + 0x18);
        }
        if (arg1 > count) break;
        return 1;
    case 4:
        node = *(u8 **)(p + 0x1c);
        count = 0;
        if (node != NULL) node = *(u8 **)(node + 0x18);
        while (node != NULL) {
            obj = *(u8 **)(node + 0);
            info = *(u8 **)(obj + 0x118);
            if (info[0] != 1) break;
            count++;
            node = *(u8 **)(node + 0x18);
        }
        if (arg1 > count) break;
        return 1;
    case 5:
        node = *(u8 **)(p + 0x1c);
        count = 0;
        found = 0;
        if (node != NULL) node = *(u8 **)(node + 0x1c);
        while (node != NULL) {
            obj = *(u8 **)(node + 0);
            info = *(u8 **)(obj + 0x118);
            if (info[0] == 0) {
                count++;
                found = 1;
            } else if (found == 1) {
                break;
            }
            node = *(u8 **)(node + 0x1c);
        }
        if (arg1 > count) break;
        return 1;
    case 8:
        node = *(u8 **)(p + 0x1c);
        count = 0;
        if (node != NULL) node = *(u8 **)(node + 0x1c);
        while (node != NULL) {
            obj = *(u8 **)(node + 0);
            info = *(u8 **)(obj + 0x118);
            if (info[0] != 1) break;
            if (obj == arg3) break;
            count++;
            node = *(u8 **)(node + 0x1c);
        }
        if (arg1 > count) break;
        return 1;
    case 9:
        node = *(u8 **)(*(u8 **)(p + 0x1c) + 0x1c);
        count = 0;
        while (node != NULL) {
            obj = *(u8 **)(node + 0);
            info = *(u8 **)(obj + 0x118);
            if (info[0] != 1) break;
            count++;
            node = *(u8 **)(node + 0x1c);
        }
        if (arg1 > count) break;
        return 1;
    case 19:
        q = *(u8 **)(p + 0x1c);
        if (q == NULL) break;
        q = *(u8 **)(q + 0x18);
        if (q == NULL) return 1;
        obj = *(u8 **)(q + 0);
        if (*(u8 *)(*(u8 **)(obj + 0x118)) != 0) break;
        return 1;
    case 20:
        q = *(u8 **)(p + 0x1c);
        if (q == NULL) break;
        q = *(u8 **)(q + 0x1c);
        if (q == NULL) return 1;
        obj = *(u8 **)(q + 0);
        if (*(u8 *)(*(u8 **)(obj + 0x118)) != 0) break;
        return 1;
    case 21:
        if ((*(u16 *)(p + 0x20) + 1) % arg1 != 0) break;
        return 1;
    case 22:
        if (*(u16 *)(p + 0x20) + 1 == arg1) return 1;
        break;
    case 23:
        q = *(u8 **)(p + 0x1c);
        if (q == NULL) break;
        node = *(u8 **)(q + 0x1c);
        if (node == NULL) return 0;
        while (node != NULL) {
            obj = *(u8 **)(node + 0);
            if (obj == arg3) return 1;
            info = *(u8 **)(obj + 0x118);
            if (info[0] == 0) break;
            node = *(u8 **)(node + 0x1c);
        }
        return 0;
    case 24:
        q = *(u8 **)(p + 0x1c);
        if (q == NULL) break;
        node = *(u8 **)(q + 0x1c);
        if (node == NULL) return 1;
        while (node != NULL) {
            obj = *(u8 **)(node + 0);
            if (obj == arg3) return 0;
            info = *(u8 **)(obj + 0x118);
            if (info[0] == 0) break;
            node = *(u8 **)(node + 0x1c);
        }
        return 1;
    case 25:
        if (((u8 *)data_02160080)[0x40] == 1) return 1;
        break;
    case 26:
        if (((u8 *)data_02160080)[0x40] == 0) return 1;
        break;
    case 27:
        if (*(u16 *)(p + 0x24) + 1 == arg1) return 1;
        break;
    case 28:
        if (*(u16 *)(p + 0x24) + 1 >= arg1) return 1;
        break;
    }
    return 0;
}

void func_0202b398(void) {
    data_02160244->field_70 = 0;
}

s32 func_0202b3b0(s32 arg0) {
    if (data_02160244->field_70 & (1 << arg0)) {
        return 0;
    }
    return 1;
}

void func_0202b3d4(Unk_0202B3D4 *arg0, u8 arg1) {
    arg0->ptr_128->field_74 = arg1;
    data_02160244->field_70 |= 1 << arg1;
}

void func_0202b3fc(u8 arg0) {
    data_02160244->field_70 |= 1 << arg0;
}

extern u8 *func_0202c7d8(s32);
extern u8 *data_02160a6c;
void func_0202b41c(void) {
    s32 i;
    if (data_02160a6c == NULL) {
        return;
    }
    for (i = 0; i < 9; i++) {
        u8 *res = func_0202c7d8((s8)(u8)i);
        if (res != NULL) {
            switch (*(u8 *)(*(u8 **)(res + 0x118) + 0x54)) {
            case 0:
                func_0202b3fc(i);
                break;
            case 1:
                func_0202b3fc(i);
                func_0202b3fc(i + 1);
                break;
            case 2:
                func_0202b3fc(i);
                func_0202b3fc(i - 3);
                break;
            case 3:
                func_0202b3fc(i);
                func_0202b3fc(i - 3);
                func_0202b3fc(i + 1);
                func_0202b3fc(i - 2);
                break;
            }
        }
    }
}

