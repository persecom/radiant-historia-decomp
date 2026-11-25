/* 13 functions from 0x0209B328 to 0x0209C2AC (main), found by ds-decomp. */
#include "common.h"
static inline s32 ge_0209b328(s32 a, s32 b) { return a >= b; }
typedef struct { u16 unk[10]; } Unk20;
typedef struct { s16 data[1080]; } Unk870;
extern const Unk20 data_0214209c;
extern const Unk20 data_021420c4;
extern const Unk20 data_021420d8;
extern const Unk870 data_02142344;
extern void func_021167f0(void *, void *);
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);

extern u32 data_02155c3c;
extern u8 *data_02160120;
extern void *func_0210c594(u32, u32);
extern void func_021167ac(void *, s32);
extern void func_0209b194(s32);
extern void func_0210d27c(s32);
extern u8 *func_0209ac14(void);
extern void *func_0209c14c(u16);
extern void func_0209acdc(void *, s32);

extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern u16 func_0209ac28(void *, u16);
extern void func_0210d448(void);
void func_0209b328(void) {
    u8 *r9 = data_02160120;
    u8 *r10 = func_0209ac14();

    while (r10 != NULL) {
        s16 lv = *(s16 *)(r10 + 0x10);
        if (lv > 50) {
            *(s32 *)(r10 + 0x14) += lv * 8;
        } else if (lv > 10) {
            *(s32 *)(r10 + 0x14) += lv * 4;
        } else {
            *(s32 *)(r10 + 0x14) += lv * 2;
        }

        if ((s32)*(u32 *)(r10 + 0x14) >= *(s32 *)(r10 + 8)) {
            *(u32 *)(r10 + 4) += *(volatile u32 *)(r10 + 8);
            *(s32 *)(r10 + 8) = 0;
            *(s32 *)(r10 + 0x14) = 0;
            if (*(s32 *)(r10 + 0xc) == 0) {
                *(s16 *)(r9 + 0x698) += 1;
            }
        }

        if (r10[0x2a] == 0) {
            r10[0x2a] |= 1;
        } else if (r10[0x2a] & 1) {
            *(s16 *)(r10 + 0x2c) += 5;
            if (*(s16 *)(r10 + 0x2c) > 17) {
                r10[0x2a] = 0;
                r10[0x2a] |= 2;
                *(s16 *)(r10 + 0x2c) = 31;
            }
        } else if (r10[0x2a] & 2) {
            *(s16 *)(r10 + 0x2c) -= 2;
            if (*(s16 *)(r10 + 0x2c) < 1) {
                *(s16 *)(r10 + 0x2c) = 0;
                *(s32 *)(r10 + 8) += *(s32 *)(r10 + 0xc);
                *(s32 *)(r10 + 0xc) = 0;
            }
        }

        {
            s16 lv2 = *(s16 *)(r10 + 0x10);
            if ((u32)(*(s32 *)(r10 + 4) + *(s32 *)(r10 + 0x14)) >= *(u32 *)(r9 + (r10[0] * 99 + lv2) * 4 + 0x64)) {
                if (lv2 < 99) {
                    u16 skill;
                    *(s16 *)(r10 + 0x10) = lv2 + 1;
                    *(u16 *)(r10 + 0x12) |= 1;
                    skill = func_0209ac28(r10, *(u16 *)(r10 + 0x10));
                    if (skill != 0) {
                        u16 *node = (u16 *)func_0210c594(0xc, data_02155c3c);
                        *node = skill;
                        func_021167f0(r10 + 0x3c, node);
                        *(u16 *)(r10 + 0x12) |= 2;
                    }
                }
            }
        }

        r10 = *(u8 **)(r10 + 0x38);
    }

    if (r9[0x694] == *(s16 *)(r9 + 0x698)) {
        s16 count = 0;
        u8 *r5 = func_0209ac14();
        func_0210d448();
        while (r5 != NULL) {
            if (*(u16 *)(r5 + 0x12) & 1) {
                u8 *p = (u8 *)func_0209c14c((u16)(r5[0] + 0x34));
                *(u16 *)(p + 2) |= 1;
                count++;
            }
            r5 = *(u8 **)(r5 + 0x38);
        }
        if (count != 0) {
            func_0209b194(4);
            func_0210d27c(0x9a);
        } else {
            func_0209b194(7);
        }
    }
    *(s16 *)(r9 + 0x698) = 0;
}

void func_0209b570(void) {
    u8 *base = data_02160120;
    *(s8 *)(base + 0x69a) += 1;
    *(s8 *)(base + 0x69a) %= 4;
    *(s16 *)(base + 0x69c) += 0x20;
    if (*(s16 *)(base + 0x69c) > 0x64) {
        *(s16 *)(base + 0x69c) = 0x64;
        if (*(s16 *)(base + 0x5a) == 0) {
            *(s16 *)(base + 0x5a) = 1;
        }
    }
    *(s16 *)(base + 0x698) += 2;
    if (*(s16 *)(base + 0x698) > 0x3c) {
        func_0209b194(5);
    }
}

void func_0209b5fc(void) {
    u8 *base = data_02160120;
    u8 count;
    u8 *node;

    if ((*(u16 *)(base + 0x696) & 1) == 0) {
        *(u16 *)(base + 0x696) |= 1;
        *(u16 *)(base + 0x696) |= 2;
        node = func_0209ac14();
        while (node != NULL) {
            if (*(u16 *)(node + 0x12) & 1) {
                func_0209acdc(node, 0);
            }
            node = *(u8 **)(node + 0x38);
        }
    }
    *(s16 *)(base + 0x698) += 4;
    if (*(s16 *)(base + 0x698) <= 30) {
        return;
    }
    count = 0;
    node = func_0209ac14();
    while (node != NULL) {
        if (*(u16 *)(node + 0x12) & 2) {
            *(u16 *)((u8 *)func_0209c14c((u16)(node[0] + 0x37)) + 2) |= 1;
            *(u16 *)((u8 *)func_0209c14c((u16)(node[0] + 0x3a)) + 2) |= 1;
            *(u16 *)((u8 *)func_0209c14c((u16)(node[0] + 0x3d)) + 2) |= 1;
            *(u16 *)((u8 *)func_0209c14c((u16)(node[0] + 0x40)) + 2) |= 1;
            *(u16 *)((u8 *)func_0209c14c((u16)(node[0] + 0x2b)) + 2) &= ~1;
            *(u16 *)((u8 *)func_0209c14c((u16)(node[0] + 0x2e)) + 2) &= ~1;
            *(u16 *)((u8 *)func_0209c14c((u16)(node[0] + 0x34)) + 2) &= ~1;
            *(u16 *)((u8 *)func_0209c14c((u16)(node[0] + 0x31)) + 2) &= ~1;
            count++;
            *(u16 *)(node + 0x12) |= 8;
        }
        node = *(u8 **)(node + 0x38);
    }
    if (count != 0) {
        func_0209b194(6);
    } else {
        func_0209b194(7);
    }
}

extern u8 *func_0209ac14(void);
extern void *func_020bd490(s32, u8);
extern s32 func_02065884(void *, u16);
extern s32 func_02065958(void *, u16);
extern void func_0209ca18(void *, void *, s32, s32, s16, s32);
extern void *func_0209c14c(u16);
extern void func_0210d27c(s32);
extern void func_0209c94c(void *, void *);
void func_0209b7e4(void) {
    u8 *base = data_02160120;
    u8 *node;
    u8 *sub;
    u16 count = 0;

    node = func_0209ac14();
    while (node != NULL) {
        sub = *(u8 **)(node + 0x3c);
        if (sub != NULL) {
            if (*(s16 *)(sub + 2) == 0) {
                s32 val1 = func_02065884(func_020bd490(1, node[0]), *(u16 *)sub);
                s32 val2 = func_02065958(func_020bd490(1, node[0]), *(u16 *)sub);
                u8 *obj;
                func_0209ca18(*(void **)(node + 0x30), *(void **)(base + 0x6a0), val1, 0x94, (s16)(node[0] * 0x38 + 0x34), 100);
                obj = (u8 *)func_0209c14c((u16)(node[0] + 0x43));
                *(u16 *)(obj + 2) |= 1;
                if (val2 == 0) {
                    *(u16 *)(obj + 4) = 10;
                } else if (val2 == 1) {
                    *(u16 *)(obj + 4) = 11;
                } else if (val2 == 2) {
                    *(u16 *)(obj + 4) = 12;
                } else if (val2 == 3) {
                    *(u16 *)(obj + 4) = 13;
                }
                func_0210d27c(0x9a);
            }
            *(s16 *)(sub + 2) += 6;
            if (*(s16 *)(sub + 2) > 50) {
                *(s16 *)(sub + 2) = 50;
                func_0209c94c(node, sub);
            }
        } else {
            count++;
        }
        node = *(u8 **)(node + 0x38);
    }
    if (count != base[0x694]) {
        return;
    }
    *(s16 *)(base + 0x698) += 10;
    if (*(s16 *)(base + 0x698) <= 50) {
        return;
    }
    func_0209b194(7);
}

s32 func_0201fd28(s32,s32);
void func_021099f8(void *);
void func_0209b974(s32 x,s32 y,s32 a,s32 b,u16 *p,u8 flag) {
u16 value;
*(volatile u32 *)0x40004a4=0x1f0080;
value=func_0201fd28(a*83,b);
if(flag==0){
p[4]=value; p[5]=4; p[6]=0x33f7; p[1]=x+1; p[2]=y+1; p[3]=24;
func_021099f8(p);
} else if(*(s8 *)(data_02160120+0x69a)<2){
p[4]=value; p[5]=4; p[6]=0x33f7; p[1]=x+1; p[2]=y+1; p[3]=24;
func_021099f8(p);
}
}

void func_0209ba4c(u16 arg0, u16 arg1, u16 arg2, s32 arg3, s32 arg4, u8 arg5) {
 Unk20 s = data_021420c4;
 s32 nine=9;
 s16 width;
 *(volatile u32 *)0x040004a4 = (arg5 << 16) | 0x80;
 func_020a3bbc(nine);
 s.unk[7] = arg2;
 width = 0;
 if(arg4==0) {
 s.unk[1]=width; s.unk[2]=width; width=12; s.unk[3]=width; s.unk[4]=17; s.unk[8]=width; s.unk[9]=17; 
 } else if(arg4==1) {
 s.unk[1]=width; s.unk[2]=17; width=7; s.unk[3]=width; s.unk[4]=nine; s.unk[8]=width; s.unk[9]=nine;
 } else if(arg4==2) {
 func_020a3bbc(26);
 s.unk[1]=width; s.unk[2]=17; width=7; s.unk[3]=width; s.unk[4]=nine; s.unk[8]=width; s.unk[9]=nine;
 }
 if(arg4==0) {
 s.unk[5]=arg0-width*2; s.unk[6]=arg1; s.unk[1]=width*(s16)((arg3/10)%10); func_021098ac(&s);
 s.unk[5]=arg0-width; s.unk[6]=arg1; s.unk[1]=width*(s16)(arg3%10); func_021098ac(&s);
 } else {
 s16 div=1;
 s16 i=0;
 do {
 s.unk[5]=arg0-(i+1)*width; s.unk[6]=arg1; s.unk[1]=(s16)((arg3/div)%10)*width; func_021098ac(&s);
 div*=10; i++;
 }while((s16)(arg3/div)!=0);
 if(arg4==2) {
 s.unk[1]=70; s.unk[2]=18; s.unk[3]=7; s.unk[4]=7; s.unk[8]=7; s.unk[9]=7; s.unk[5]=arg0-(i*7+6); s.unk[6]=arg1+1; func_021098ac(&s);
 }
 }
}

extern const Unk20 data_021420b0;
void func_0209bca0(u16 arg0, u16 arg1, u16 arg2, s32 arg3, u8 arg4, u8 arg5) {
    Unk20 s = data_021420b0;
    *(volatile u32 *)0x040004a4 = (arg5 << 16) | 0x80;
    func_020a3bbc(0x14);
    s.unk[7] = arg2;
    if (arg4 == 0) {
        s32 div;
        s32 i;
        s.unk[1] = 0;
        s.unk[2] = 1;
        s.unk[3] = 8;
        s.unk[4] = 9;
        s.unk[8] = 8;
        s.unk[9] = 9;
        i = 0;
        div = 1;
        do {
            s.unk[5] = arg0 - (i + 1) * 8;
            s.unk[6] = arg1;
            s.unk[1] = ((arg3 / div) % 10) * 8;
            func_021098ac(&s);
            div *= 10;
            i++;
            if (arg3 < div) {
                return;
            }
        } while (div < 1000000);
    } else if (arg4 == 1) {
        s32 div;
        s32 i;
        func_020a3bbc(0x1a);
        s.unk[1] = 0;
        s.unk[2] = 0x11;
        s.unk[3] = 7;
        s.unk[4] = 9;
        s.unk[8] = 7;
        s.unk[9] = 9;
        i = 0;
        div = 1;
        do {
            s.unk[5] = arg0 - (i + 1) * 7;
            s.unk[6] = arg1;
            s.unk[1] = ((arg3 / div) % 10) * 7;
            func_021098ac(&s);
            div *= 10;
            i++;
            if (arg3 < div) {
                break;
            }
        } while (div < 1000000);
        s.unk[1] = 0x46;
        s.unk[2] = 0x12;
        s.unk[3] = 7;
        s.unk[4] = 7;
        s.unk[8] = 7;
        s.unk[9] = 7;
        s.unk[5] = arg0 - (i * 7 + 6);
        s.unk[6] = arg1 + 1;
        func_021098ac(&s);
    }
}

void func_0209beb8(s32 x,s32 y,s32 h,s32 arg3) {
Unk20 buf=data_0214209c;
*(volatile u32 *)0x40004a4=0x1f0080;
func_020a3bbc(arg3);
buf.unk[1]=0; buf.unk[2]=0; buf.unk[3]=14; buf.unk[4]=3;
buf.unk[8]=14; buf.unk[9]=3; buf.unk[5]=x; buf.unk[6]=y;
func_021098ac(&buf);
buf.unk[1]=0; buf.unk[2]=2; buf.unk[4]=1; buf.unk[9]=h; buf.unk[6]=y+3;
func_021098ac(&buf);
buf.unk[1]=0; buf.unk[2]=13; buf.unk[4]=3; buf.unk[9]=3; buf.unk[6]=y+h+3;
func_021098ac(&buf);
}

#pragma opt_propagation off
void func_0209bfa0(s32 val,s32 x,s32 y,s32 arg3,u8 flag) {
Unk20 buf=data_021420d8;
*(volatile u32 *)0x40004a4=0x1f0080;
if(flag==0) func_020a3bbc(0x19); else func_020a3bbc(0x1b);

buf.unk[5]=x-14;
buf.unk[3]=7;
buf.unk[4]=8;
buf.unk[7]=arg3;
*(volatile s16 *)&buf.unk[2]=0;
buf.unk[8]=7;
buf.unk[9]=8;
buf.unk[6]=y;
buf.unk[1]=(s16)((val/10)%10)*7;
func_021098ac(&buf);
buf.unk[5]=x-7; buf.unk[6]=y; buf.unk[1]=(s16)(val%10)*7;
func_021098ac(&buf); func_021098ac(&buf);
}
#pragma opt_propagation on
void *func_0209c0d0(void) {
    void *ptr = func_0210c594(0xc, data_02155c3c);
    func_021167ac(ptr, 0x24);
    return ptr;
}

void func_0209c0fc(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_0209c14c(u16 arg0) {
    u8 *node;
    if (data_02160120 == NULL) {
        return NULL;
    }
    node = **(u8 ***)(data_02160120 + 0x704);
    while (node != NULL) {
        if (*(u16 *)node == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x28);
    }
    return NULL;
}

void func_0209c198(void) {
    Unk870 buf = data_02142344;
    u8 *base = data_02160120;
    void *list;
    u16 i;

    if (base == NULL) {
        return;
    }

    list = *(void **)(base + 0x704);
    for (i = 0; i < 0x5d; i++) {
        u16 idx = i * 12;
        u8 *p = (u8 *)func_0210c594(0x2c, data_02155c3c);
        *(s16 *)(p + 0x06) = buf.data[idx + 0];
        *(s16 *)(p + 0x08) = buf.data[idx + 1];
        *(s16 *)(p + 0x0a) = buf.data[idx + 2];
        *(s16 *)(p + 0x0c) = buf.data[idx + 3];
        *(s32 *)(p + 0x10) = buf.data[idx + 4];
        *(s32 *)(p + 0x14) = buf.data[idx + 5];
        *(s32 *)(p + 0x18) = buf.data[idx + 6];
        *(s16 *)(p + 0x1c) = buf.data[idx + 7];
        *(s16 *)(p + 0x1e) = buf.data[idx + 8];
        *(s16 *)(p + 0x04) = buf.data[idx + 9];
        *(s16 *)(p + 0x00) = buf.data[idx + 10];
        *(s16 *)(p + 0x02) = buf.data[idx + 11];
        p[0x20] = 0x1f;
        func_021167f0(list, p);
    }
}

