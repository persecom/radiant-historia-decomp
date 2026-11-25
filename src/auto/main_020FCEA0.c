/* 4 functions from 0x020FCEA0 to 0x020FDC0C (main), found by ds-decomp. */
#include "common.h"
extern u8 data_02152ae0[];
extern u8 data_02152ae8[];
extern u8 data_02152af0[];
extern u8 data_02152af8[];
extern u8 data_02152b00[];
extern u8 data_02152b08[];
extern u8 data_02152b10[];
extern u8 data_02152b18[];
extern u8 data_02152b28[];
extern u8 data_02152b44[];
extern u8 *data_02160c74[2];

extern u8 *data_02160200;
extern u8 *data_021600bc;
extern void func_02009008(void *, void *, u32);
extern void func_02008f74(void *, s32, u32);
extern void func_02052240(void *);
extern void func_020a8810(void *,s32);
extern void func_020a9830(void *,void *,s32,s32,s32,s32);
extern void func_020a9610(void *,void *,s32,void *,s32,s32);
extern void func_020c83f4(void *,void *,s32,s32);
extern void func_020c738c(void *,s32,s32);
extern void func_020c85bc(void *,s32);
extern s32 func_020a96f0(void *);
extern s32 func_020fd8bc(s32, void *, s32, s32, s8);
extern void func_020fd9f4(s32, u32);
extern void func_020a9544(void *);
extern void func_020a994c(void *);
extern void func_020a98a0(void *);
extern void func_020a899c(void *);
void func_020fcea0(void) {
    s8 digits[6];
    s32 i;
    s32 ndigits;
    s32 x;
    if (data_02160c74[1] == NULL) {
        return;
    }
    switch (*(s8 *)(data_02160c74[1] + 0x2f0)) {
    case 0:
        break;
    case 1:
        switch (*(s32 *)(data_02160c74[1] + 0x2f4)) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 5: {
            if (*(s32 *)(data_02160c74[1] + 0x2f4) == 5) {
                s32 v = *(s32 *)(data_02160c74[1] + 0x2fc);
                if (v > 0 && v <= 100) {
                    func_020fd9f4(0, 0);
                } else if (v > 200 && v <= 300) {
                    func_020fd9f4(0, 9);
                } else if (v > 300 && v <= 500) {
                    func_020fd9f4(0, 1);
                } else if (v > 500 && v <= 700) {
                    func_020fd9f4(0, 2);
                } else if (v > 700 && v <= 800) {
                    func_020fd9f4(0, 3);
                }
            } else {
                func_020fd9f4(0, *(s32 *)(data_02160c74[1] + 0x2f4));
            }
            func_020fd9f4(1, 4);
            if (*(s8 *)(data_02160c74[1] + 0x301) == 1) {
                x = func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x2c), 4, 0, 0);
            } else {
                x = func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x2c), 1, 0, 0);
            }
            x = func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x28), *(s32 *)(data_02160c74[1] + 0x2fc), x, 0);
            if (data_02160c74[1][0x2f8] <= 1) {
                func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x2c), 7, x, 0);
            } else if (data_02160c74[1][0x2f8] > 1) {
                u8 cnt;
                x = func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x2c), 0x12, x, 0);
                cnt = data_02160c74[1][0x2f8];
                if (cnt >= 100) {
                    digits[0] = cnt / 100;
                    digits[1] = (cnt - digits[0] * 100) / 10;
                    digits[2] = (cnt - digits[0] * 100) - digits[1] * 10;
                    ndigits = 3;
                } else if (cnt >= 10) {
                    s8 d = cnt / 10;
                    digits[0] = d;
                    digits[1] = cnt - d * 10;
                    ndigits = 2;
                } else {
                    digits[0] = cnt;
                    ndigits = 1;
                }
                for (i = 0; i < ndigits; i++) {
                    x = func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x2c), digits[i] + 8, x, 0);
                }
                func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x2c), 7, x, 0);
            }
            break;
        }
        case 4: {
            s32 val = *(s32 *)(data_02160c74[1] + 0x2fc);
            if (val >= 100000) {
                digits[0] = val / 100000;
                digits[1] = (val - digits[0] * 100000) / 10000;
                digits[2] = ((val - digits[0] * 100000) - digits[1] * 10000) / 1000;
                digits[3] = (((val - digits[0] * 100000) - digits[1] * 10000) - digits[2] * 1000) / 100;
                digits[4] = ((((val - digits[0] * 100000) - digits[1] * 10000) - digits[2] * 1000) - digits[3] * 100) / 10;
                digits[5] = ((((val - digits[0] * 100000) - digits[1] * 10000) - digits[2] * 1000) - digits[3] * 100) - digits[4] * 10;
                ndigits = 6;
            } else if (val >= 10000) {
                digits[0] = val / 10000;
                digits[1] = (val - digits[0] * 10000) / 1000;
                digits[2] = ((val - digits[0] * 10000) - digits[1] * 1000) / 100;
                digits[3] = (((val - digits[0] * 10000) - digits[1] * 1000) - digits[2] * 100) / 10;
                digits[4] = (((val - digits[0] * 10000) - digits[1] * 1000) - digits[2] * 100) - digits[3] * 10;
                ndigits = 5;
            } else if (val >= 1000) {
                digits[0] = val / 1000;
                digits[1] = (val - digits[0] * 1000) / 100;
                digits[2] = ((val - digits[0] * 1000) - digits[1] * 100) / 10;
                digits[3] = ((val - digits[0] * 1000) - digits[1] * 100) - digits[2] * 10;
                ndigits = 4;
            } else if (val >= 100) {
                digits[0] = val / 100;
                digits[1] = (val - digits[0] * 100) / 10;
                digits[2] = (val - digits[0] * 100) - digits[1] * 10;
                ndigits = 3;
            } else if (val >= 10) {
                s8 d = val / 10;
                digits[0] = d;
                digits[1] = val - d * 10;
                ndigits = 2;
            } else {
                digits[0] = val;
                ndigits = 1;
            }
            func_020fd9f4(0, 4);
            if (*(s8 *)(data_02160c74[1] + 0x301) == 0) {
                x = func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x28), 3, 0, 0);
            } else {
                x = func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x28), 6, 0, 0);
            }
            for (i = 0; i < ndigits; i++) {
                x = func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x28), digits[i] + 8, x, 0);
            }
            x = func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x28), 0x1b, x, 0);
            func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x28), 7, x, 0);
            break;
        }
        case 6: {
            func_020fd9f4(0, 6);
            func_020fd9f4(1, 4);
            x = func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x28), *(s32 *)(data_02160c74[1] + 0x2fc), 0, 0);
            func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x2c), *(s8 *)(data_02160c74[1] + 0x301) + 0x13, x, 0);
            func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x2c), 0x15, 0, 1);
            break;
        }
        case 7:
            func_020fd9f4(0, 6);
            func_020fd9f4(1, 4);
            func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x2c), 0x1d, 0, 0);
            break;
        case 8: {
            func_020fd9f4(0, 4);
            func_020fd9f4(1, 8);
            if (*(s8 *)(data_02160c74[1] + 0x301) == 0) {
                func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x2c), *(s32 *)(data_02160c74[1] + 0x2fc), 0, 0);
                x = func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x28), 0x17, 0, 1);
                func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x28), 0x1e, x, 1);
            } else {
                x = func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x28), 0x1c, 0, 0);
                func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x2c), *(s32 *)(data_02160c74[1] + 0x2fc), x, 0);
                func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x28), 0x18, 0, 1);
            }
            break;
        }
        case 9: {
            func_020fd9f4(0, 4);
            func_020fd9f4(1, 7);
            func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x2c), *(s32 *)(data_02160c74[1] + 0x2fc), 0, 0);
            x = func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x28), 0x17, 0, 1);
            func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x28), 0x19, x, 1);
            break;
        }
        case 10: {
            func_020fd9f4(0, 4);
            x = func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x28), 0x1f, 0, 0);
            func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x28), 0x20, x, 0);
            break;
        }
        case 11: {
            func_020fd9f4(0, 4);
            x = func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x28), 0x21, 0, 0);
            func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x28), 0x22, x, 0);
            break;
        }
        case 12: {
            func_020fd9f4(0, 4);
            x = func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x28), 0x23, 0, 0);
            func_020fd8bc(*(s8 *)(data_02160c74[1] + 0x300), *(void **)(data_02160c74[1] + 0x28), 0x24, x, 0);
            break;
        }
        }
        (*(s8 *)(data_02160c74[1] + 0x2f0))++;
        break;
    case 2:
        for (i = 0; i < *(s8 *)(data_02160c74[1] + 0x300); i++) {
            void *obj = *(void **)(data_02160c74[1] + 0x2c8 + i * 4);
            ((void (*)(void *))(*(void **)((u8 *)obj + 8)))(obj);
        }
        break;
    case 3:
        for (i = 0; i < 8; i++) {
            if (*(void **)(data_02160c74[1] + 0x28 + i * 4) != NULL) {
                func_020a9544(*(void **)(data_02160c74[1] + 0x28 + i * 4));
                *(void **)(data_02160c74[1] + 0x28 + i * 4) = NULL;
            }
        }
        for (i = 0; i < *(s8 *)(data_02160c74[1] + 0x300); i++) {
            func_020a994c(data_02160c74[1] + 0x4c + i * 0x50);
            func_020a98a0(data_02160c74[1] + 0x4c + i * 0x50);
            {
                void *obj = *(void **)(data_02160c74[1] + 0x48 + i * 0x50);
                ((void (*)(void *))(*(void **)((u8 *)obj + 4)))(obj);
            }
            func_020a899c(*(void **)(data_02160c74[1] + 0x48 + i * 0x50));
        }
        (*(s8 *)(data_02160c74[1] + 0x2f0))++;
        break;
    }
}

s32 func_020fd8bc(s32 index,void *arg1,s32 arg2,s32 x,s8 y) {
s32 offset=index*0x50;
u8 *obj;
func_020a8810(*(void **)(data_02160c74[1]+offset+0x48),7);
func_020a9830(data_02160c74[1]+0x4c+offset,data_02160c74[1]+0x80+offset,240,16,0,0);
func_020a9610(data_02160c74[1]+0x80+offset,arg1,arg2,*(void **)(data_02160c74[1]+offset+0x48),0,0);
obj=*(u8 **)(data_02160c74[1]+index*4+0x2c8);
func_020c83f4(obj,arg1,arg2,0);
func_020c738c(obj,0,1);
((void (*)(void *,s16))*(void **)(obj+0x10))(obj,x+24);
((void (*)(void *,s16))*(void **)(obj+0x14))(obj,y*14+82);
func_020c85bc(obj,0x26c);
x+=func_020a96f0(*(void **)(data_02160c74[1]+offset+0x90));
++*(s8 *)(data_02160c74[1]+0x300);
return x;
}

extern void *func_020a94b8(void *);
void func_020fd9f4(s32 index,u32 type) {
if(*(void **)(data_02160c74[1]+index*4+0x28)) return;
switch(type) {
case 0: *(void **)(data_02160c74[1]+index*4+0x28)=func_020a94b8(data_02152ae0); break;
case 1: *(void **)(data_02160c74[1]+index*4+0x28)=func_020a94b8(data_02152ae8); break;
case 2: *(void **)(data_02160c74[1]+index*4+0x28)=func_020a94b8(data_02152af0); break;
case 3: *(void **)(data_02160c74[1]+index*4+0x28)=func_020a94b8(data_02152af8); break;
case 4: *(void **)(data_02160c74[1]+index*4+0x28)=func_020a94b8(data_02152b00); break;
case 5: *(void **)(data_02160c74[1]+index*4+0x28)=func_020a94b8(data_02152b08); break;
case 6: *(void **)(data_02160c74[1]+index*4+0x28)=func_020a94b8(data_02152b10); break;
case 7: *(void **)(data_02160c74[1]+index*4+0x28)=func_020a94b8(data_02152b18); break;
case 8: *(void **)(data_02160c74[1]+index*4+0x28)=func_020a94b8(data_02152b28); break;
case 9: *(void **)(data_02160c74[1]+index*4+0x28)=func_020a94b8(data_02152b44); break;
}
}

void func_020fdb64(void) {
    u8 *node;
    if (*(u32 *)(data_02160200 + 0x15c) & 0x2000000) {
        return;
    }
    node = *(u8 **)(data_021600bc + 0x70);
    while (node != NULL) {
        if (*(u16 *)(node + 0x8e) == 0x1483) {
            func_02009008(node + 0x18, node, 0xc);
            func_02009008(node + 0x18, node + 0xc, 0xc);
            func_02009008(node + 0x18, node + 0x24, 0xc);
            func_02008f74(node + 0x30, 0, 0xc);
            func_02052240(node);
        }
        node = *(u8 **)(node + 0x17c);
    }
}
