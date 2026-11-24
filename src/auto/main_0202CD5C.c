/* 7 functions from 0x0202CD5C to 0x0202DD04 (main), found by ds-decomp. */
#include "common.h"

extern s8 func_0202c658(void *);
extern s32 func_0202c820(u8);
extern s32 func_0202c898(u8, s32, void *);
extern s32 func_02030808(u8);
extern s32 func_0202c850(u8);
extern void func_0202c328(void *, u8);
s32 func_0202cd5c(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *p54 = *(u8 **)(*(u8 **)(arg0 + 0x128) + 0x54);
    s8 origPos = func_0202c658(arg0);
    s8 pos = origPos;
    u32 dir = 0;
    s16 count;
    s8 prevPos;

    if (*(u32 *)(arg1 + 8) & 0x4) {
        dir |= 0x2;
    } else if (*(u32 *)(arg1 + 8) & 0x8) {
        dir |= 0x1;
    } else if (*(u32 *)(arg1 + 8) & 0x10) {
        dir |= 0x4;
    } else if (*(u32 *)(arg1 + 8) & 0x20) {
        dir |= 0x8;
    } else if (*(u32 *)(arg1 + 8) & 0x40) {
        switch (origPos) {
            case 0: dir |= 0x6; break;
            case 1: dir |= 0x2; break;
            case 2: dir |= 0xa; break;
            case 3: dir |= 0x4; break;
            case 4: break;
            case 5: dir |= 0x8; break;
            case 6: dir |= 0x5; break;
            case 7: dir |= 0x1; break;
            case 8: dir |= 0x9; break;
        }
    }
    if (*(u32 *)(arg1 + 8) & 0x80) {
        dir |= 0x80;
    }
    if (dir != 0) {
        count = 1;
        do {
            count--;
            prevPos = pos;
            switch ((s8)p54[1]) {
                case 0:
                    if (dir & 0x2) {
                        if (pos <= 5) pos += 3;
                    }
                    if (dir & 0x1) {
                        if (pos >= 3) pos -= 3;
                    }
                    if (dir & 0x4) {
                        if (pos % 3 <= 1) pos += 1;
                    }
                    if (dir & 0x8) {
                        if (pos % 3 >= 1) pos -= 1;
                    }
                    break;
                case 1:
                    if (dir & 0x2) {
                        if (pos <= 4) pos += 3;
                    }
                    if (dir & 0x1) {
                        if (pos >= 3) pos -= 3;
                    }
                    if (dir & 0x4) {
                        if (pos % 3 == 0) pos += 1;
                    }
                    if (dir & 0x8) {
                        if (pos % 3 == 1) pos -= 1;
                    }
                    break;
                case 2:
                    if (dir & 0x2) {
                        if (pos <= 5) pos += 3;
                    }
                    if (dir & 0x1) {
                        if (pos >= 6) pos -= 3;
                    }
                    if (dir & 0x4) {
                        if (pos % 3 <= 1) pos += 1;
                    }
                    if (dir & 0x8) {
                        if (pos % 3 >= 1) pos -= 1;
                    }
                    break;
                case 3:
                    if (dir & 0x2) {
                        if (pos <= 4) pos += 3;
                    }
                    if (dir & 0x1) {
                        if (pos >= 6) pos -= 3;
                    }
                    if (dir & 0x4) {
                        if (pos % 3 == 0) pos += 1;
                    }
                    if (dir & 0x8) {
                        if (pos % 3 == 1) pos -= 1;
                    }
                    break;
                case 4:
                    break;
            }
            if (*(u32 *)(arg1 + 8) & 0x40) {
                pos = 4;
            }
            if (prevPos == pos) {
                break;
            }
            if (!(dir & 0x80)) {
                if (func_0202c820((u8)pos) != 0) {
                    break;
                }
            } else {
                if (func_0202c898((u8)pos, arg2, arg0) != 0) {
                    break;
                }
            }
            if (func_02030808((u8)pos) != 0) {
                break;
            }
            if (func_0202c850((u8)pos) != 0) {
                break;
            }
            {
                u8 found = 0;
                switch ((s8)p54[1]) {
                    case 0:
                        break;
                    case 1:
                        if (!(dir & 0x80)) {
                            if (func_0202c820((u8)(pos + 1)) != 0) found++;
                        } else {
                            if (func_0202c898((u8)(pos + 1), arg2, arg0) != 0) found++;
                        }
                        if (func_02030808((u8)(pos + 1)) != 0) found++;
                        break;
                    case 2:
                        if (!(dir & 0x80)) {
                            if (func_0202c820((u8)(pos - 3)) != 0) found++;
                        } else {
                            if (func_0202c898((u8)(pos - 3), arg2, arg0) != 0) found++;
                        }
                        if (func_02030808((u8)(pos - 3)) != 0) found++;
                        break;
                    case 3:
                        if (!(dir & 0x80)) {
                            if (func_0202c820((u8)(pos + 1)) != 0) found++;
                        } else {
                            if (func_0202c898((u8)(pos + 1), arg2, arg0) != 0) found++;
                        }
                        if (func_02030808((u8)(pos + 1)) != 0) found++;
                        if (!(dir & 0x80)) {
                            if (func_0202c820((u8)(pos - 3)) != 0) found++;
                        } else {
                            if (func_0202c898((u8)(pos - 3), arg2, arg0) != 0) found++;
                        }
                        if (func_02030808((u8)(pos - 3)) != 0) found++;
                        if (!(dir & 0x80)) {
                            if (func_0202c820((u8)(pos - 2)) != 0) found++;
                        } else {
                            if (func_0202c898((u8)(pos - 2), arg2, arg0) != 0) found++;
                        }
                        if (func_02030808((u8)(pos - 2)) != 0) found++;
                        break;
                    case 4:
                        break;
                }
                if (found != 0) {
                    break;
                }
            }
        } while (count >= 0);

        if (dir & 0x2) {
            if (origPos != pos) {
                func_0202c328(arg0, (u8)pos);
                return 1;
            }
        } else if (dir & 0x1) {
            func_0202c328(arg0, (u8)pos);
            return 1;
        } else if (dir & 0x4) {
            if (origPos != pos) {
                func_0202c328(arg0, (u8)pos);
                return 1;
            }
        } else if (dir & 0x8) {
            if (origPos != pos) {
                func_0202c328(arg0, (u8)pos);
                return 1;
            }
        }
    }
    return 0;
}

extern u8 *data_02160244;
extern void func_021167f0(void *, void *);
extern void func_02116844(void *, void *);
extern void func_02116894(void *, void *, void *);
void func_0202d3ac(u8 *arg0) {
    u8 *cur = *(u8 **)(data_02160244 + 0x44);
    u8 *base;
    while (cur != NULL) {
        if ((s8)cur[3] > (s8)arg0[3]) {
            break;
        }
        cur = *(u8 **)(cur + 0xc);
    }
    if (cur == arg0) {
        return;
    }
    arg0[4] |= 2;
    base = data_02160244;
    if (cur == NULL) {
        func_021167f0(base + 0x44, arg0);
    } else if (cur == *(u8 **)(base + 0x44)) {
        func_02116844(base + 0x44, arg0);
    } else {
        func_02116894(base + 0x44, cur, arg0);
    }
}

s32 func_0202d890(s8 arg0, s16 arg1) {
    u8 *node = *(u8 **)(data_02160244 + 0x44);

    while (node != NULL) {
        if (*(s16 *)(node + 0x24) != arg1) {
            switch (*(s8 *)(node + 1)) {
                case 0:
                    if (*(s8 *)(node + 2) == arg0 && *(s8 *)(node + 3) != -1) {
                        return 1;
                    }
                    break;
                case 1:
                    if ((*(s8 *)(node + 2) == arg0 || *(s8 *)(node + 2) == arg0 - 1) && *(s8 *)(node + 3) != -1) {
                        return 1;
                    }
                    break;
                case 2:
                    if ((*(s8 *)(node + 2) == arg0 || *(s8 *)(node + 2) == arg0 + 3) && *(s8 *)(node + 3) != -1) {
                        return 1;
                    }
                    break;
                case 3:
                    if ((*(s8 *)(node + 2) == arg0 || *(s8 *)(node + 2) == arg0 - 1 || *(s8 *)(node + 2) == arg0 + 3 || *(s8 *)(node + 2) == arg0 + 2) && *(s8 *)(node + 3) != -1) {
                        return 1;
                    }
                    break;
            }
        }
        node = *(u8 **)(node + 0xc);
    }
    return 0;
}

void func_0202d998(void *arg0, void *arg1, u16 arg2) {
    struct {
        u8 pad[0x38];
        s8 grid[9];
    } *s0 = arg0;
    u8 *p1 = (u8 *)arg1;

    if (s0->grid[arg2] != -1) {
        return;
    }
    switch (*(s8 *)(p1 + 1)) {
        case 0:
            s0->grid[arg2] = 1;
            *(s8 *)(p1 + 2) = arg2;
            *(s8 *)(p1 + 3) = -1;
            break;
        case 1:
            if (arg2 == 2 || arg2 == 5 || arg2 == 8) {
                return;
            }
            if (s0->grid[arg2 + 1] != -1) {
                return;
            }
            s0->grid[arg2 + 1] = 1;
            s0->grid[arg2] = 1;
            *(s8 *)(p1 + 2) = arg2;
            *(s8 *)(p1 + 3) = -1;
            break;
        case 2:
            if (arg2 < 3 || arg2 > 8) {
                return;
            }
            if (s0->grid[arg2 - 3] != -1) {
                return;
            }
            s0->grid[arg2 - 3] = 1;
            s0->grid[arg2] = 1;
            *(s8 *)(p1 + 2) = arg2;
            *(s8 *)(p1 + 3) = -1;
            break;
        case 3:
            if (arg2 == 3 || arg2 == 4 || arg2 == 6 || arg2 == 7) {
                if (s0->grid[arg2 + 1] != -1 ||
                    s0->grid[arg2 - 3] != -1 ||
                    s0->grid[arg2 - 2] != -1) {
                    return;
                }
                s0->grid[arg2 - 3] = 1;
                s0->grid[arg2 - 2] = 1;
                s0->grid[arg2 + 1] = 1;
                s0->grid[arg2] = 1;
                *(s8 *)(p1 + 2) = arg2;
                *(s8 *)(p1 + 3) = -1;
            }
            break;
        case 4:
            break;
    }
}

extern void func_0202d998(void *, void *, u16);
void func_0202dacc(void *arg0, u8 *arg1, u16 arg2, s32 *arg3) {
    s32 col;
    s32 row;
    if ((s8)arg1[3] == -1) {
        return;
    }
    if (arg2 > 8) {
        return;
    }
    if (arg3[arg2] != 0) {
        return;
    }
    func_0202d998(arg0, arg1, arg2);
    col = arg2 % 3;
    arg3[arg2] = 1;
    if (col < 2) {
        func_0202dacc(arg0, arg1, arg2 + 1, arg3);
    }
    if (col > 0) {
        func_0202dacc(arg0, arg1, arg2 - 1, arg3);
    }
    row = arg2 / 3;
    if (row > 0) {
        func_0202dacc(arg0, arg1, arg2 - 3, arg3);
    }
    if (row < 2) {
        func_0202dacc(arg0, arg1, arg2 + 3, arg3);
    }
}

void func_0202dbc8(void *arg0,u8 *arg1,u16 arg2) {
s32 col=(s8)arg1[0]%3;
s32 row;
s32 visited[9];
s32 i;
if(col==(s8)arg1[2]%3){
func_0202d998(arg0,arg1,(u16)col);
func_0202d998(arg0,arg1,(u16)(col+3));
func_0202d998(arg0,arg1,(u16)(col+6));
}
row=(s8)arg1[0]/3;
if(row==(s8)arg1[2]/3) {
s32 pos=row*3;
func_0202d998(arg0,arg1,(u16)pos);
func_0202d998(arg0,arg1,(u16)(pos+1));
func_0202d998(arg0,arg1,(u16)(pos+2));
}
if((s8)arg1[3]==-1) return;
for(i=0;i<9;i++) visited[i]=0;
func_0202dacc(arg0,arg1,arg2,visited);
}

