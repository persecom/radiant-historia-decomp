/* 3 functions from 0x020C11F4 to 0x020C1FEC (main), found by ds-decomp. */
#include "common.h"
typedef struct { s32 a,b; } Unk_020c11f4;
extern const Unk_020c11f4 data_02143e44;
extern u32 data_02155c3c;
typedef struct Entry_020c11f4 { u16 id; u16 pad; struct Entry_020c11f4 *prev,*next; } Entry_020c11f4;
typedef struct { u32 count; Entry_020c11f4 *head,*tail; u32 offset; } List_020c11f4;
extern List_020c11f4 *data_02160218[2];
extern u8 *data_02160a6c;
extern void *func_0210c594(u32,u32);
extern void func_021167ac(void *,int);
extern void func_021167f0(void *,void *);
extern void func_020c0d98(void);
extern void func_020c0e08(void);
extern void func_0210c5dc(void *);

void func_020c11f4(void) {
Unk_020c11f4 buf=data_02143e44;
u8 *node;
data_02160218[1]=func_0210c594(16,data_02155c3c);
func_021167ac(&data_02160218[1]->head,4);
data_02160a6c[0x121]=0;
data_02160218[1]->count=0;
node=*(u8 **)(data_02160a6c+0x70);
if(node) { u32 kind=buf.a; do {
if(*(u16 *)(node+0x8e)==kind) {
Entry_020c11f4 *entry;
if(data_02160218[1]->count==0) {
entry=func_0210c594(12,data_02155c3c);
entry->id=*(volatile u32 *)&buf.b;
func_021167f0(&data_02160218[1]->head,entry);
++data_02160218[1]->count;
} else {
Entry_020c11f4 *cur=data_02160218[1]->head;
int absent=1;
for(;cur;cur=cur->next) {
if(cur->id==buf.b) absent=0;
}
if(absent) {
entry=func_0210c594(12,data_02155c3c);
entry->id=*(volatile u32 *)&buf.b;
func_021167f0(&data_02160218[1]->head,entry);
++data_02160218[1]->count;
}
}
}
node=*(u8 **)(node+0x13c);
} while(node); }
data_02160a6c[0x121]=data_02160218[1]->count;
func_020c0d98();
func_020c0e08();
if(data_02160218[1]) {
func_0210c5dc(data_02160218[1]);
data_02160218[1]=0;
}
}

extern u32 *func_020ec294(int, int, int, int);
extern void func_020ec88c(void *, int, int);
extern u8 *func_020dce1c(s32, s32, s32);
extern void func_020dd810(u8 *, s32, s32);
extern void func_020ddd5c(u8 *);
extern u8 *func_020c0924(void);
extern void func_020dde88(u8 *);
typedef struct { u32 x, mul, add; } RandCtx_020c17bc;
extern RandCtx_020c17bc data_0216263c;
extern s16 data_0213c394[];
u32 *func_020c1370(int a, u32 *pos, int id, int variant, int arg) {
int size;
u32 *p;
switch(id) {
case 0x822: size=0x1800; break;
case 0x823: size=0x940; break;
case 0x824: size=0xcc0; break;
case 0x7d2: case 0x7d4: case 0x7e8: case 0x7fc: case 0x825: size=0x3000; break;
case 2003: switch(variant) {
case 0: size=3776; break;
case 1: size=3968; break;
case 2: size=128; break;
case 3: size=384; break;
case 4: size=384; break;
case 5: size=256; break;
case 6: size=384; break;
case 7: size=384; break;
case 8: size=384; break;
case 9: size=4096; break;
} break;
case 2033: switch(variant) {
case 0: size=896; break;
case 1: size=3456; break;
case 2: size=128; break;
case 3: size=384; break;
case 4: size=256; break;
case 5: size=256; break;
case 6: size=256; break;
case 7: size=1024; break;
case 8: size=1024; break;
case 9: size=1664; break;
case 10: size=2432; break;
case 11: size=3072; break;
case 12: size=3072; break;
} break;
case 2043: switch(variant) {
case 0: size=640; break;
case 1: size=384; break;
case 2: size=256; break;
case 3: size=128; break;
case 4: size=2688; break;
case 5: size=640; break;
case 6: size=640; break;
case 7: size=640; break;
case 8: size=2944; break;
case 9: size=512; break;
case 10: size=384; break;
case 11: size=2176; break;
case 12: size=128; break;
case 13: size=768; break;
case 14: size=768; break;
case 15: size=768; break;
case 16: size=1920; break;
case 17: size=384; break;
case 18: size=1920; break;
case 19: size=512; break;
case 20: size=640; break;
case 21: size=640; break;
case 22: size=1024; break;
case 23: size=1024; break;
case 24: size=256; break;
} break;
case 2023: switch(variant) {
case 0: size=2304; break;
case 1: size=512; break;
case 2: size=320; break;
case 3: size=320; break;
case 4: size=320; break;
case 5: size=3520; break;
case 6: size=384; break;
case 7: size=192; break;
case 8: size=2816; break;
} break;
case 0: switch(variant) {
case 0: size=2048; break;
case 1: size=2048; break;
case 2: size=128; break;
case 3: size=384; break;
} break;
case 2093: switch(variant) {
case 0: size=256; break;
case 1: size=256; break;
case 2: size=128; break;
case 3: size=384; break;
case 4: size=384; break;
case 5: size=4736; break;
case 6: size=4736; break;
} break;
}
p=func_020ec294(id,a,size,arg);
p[5]=pos[0]; p[6]=pos[1]; p[7]=pos[2]; p[8]=0x1000; p[9]=0x1000; p[1]|=1;
func_020ec88c(p,variant,0); return p;
}

u8 *func_020c17bc(s32 *pos, s32 id, u16 arg2, u8 arg3, s16 arg4) {
    u8 *p;
    s32 flag = 0;
    s16 val = 0;

    if (id == 0xbbf) {
        return NULL;
    }

    p = func_020dce1c(id, 0, 0);
    *(u16 *)(p + 0x90) = arg2;
    if (pos != NULL) {
        *(s32 *)(p + 0) = pos[0];
        *(s32 *)(p + 4) = pos[1];
        *(s32 *)(p + 8) = pos[2];
    }

    func_020dd810(p, arg3, 0);
    if (arg3 <= 8) {
        *(s32 *)(p + 0x64) = 0x21c;
    }

    switch (id) {
    case 1091:
        *(s32 *)(p + 0x64) = 0x21c;
        break;
    case 3002:
    case 3003:
    case 3004:
    case 3005:
    case 3006:
    case 3011:
    case 3012:
    case 3013:
        *(u8 *)(p + 0xa1) |= 1;
        *(s32 *)(p + 0x64) = 0x21c;
        break;
    case 3009:
    case 3010:
        *(u8 *)(p + 0xa1) |= 1;
        *(s32 *)(p + 0x64) = 0x21c;
        break;
    case 1021:
        *(s32 *)(p + 0x78) = 0x800;
        func_020ddd5c(p);
        val = 0x48;
        flag = 1;
        break;
    case 1031:
        if (arg3 == 0x12) {
            *(s32 *)(p + 0x64) = 0x42;
        } else if (arg3 == 0 || arg3 == 3 || arg3 == 6) {
            *(s32 *)(p + 0x64) = 0x21c;
        } else if (arg3 == 19 || arg3 == 20 || arg3 == 21) {
            *(s32 *)(p + 0x64) = 0x21c;
            *(s32 *)(p + 4) += 0x14000;
        } else if (arg3 == 12 || arg3 == 13 || arg3 == 14) {
            *(u8 *)(p + 0xa1) |= 4;
            *(s32 *)(p + 0x6c) = 0x1f4;
            *(s32 *)(p + 0x64) = 0;
            *(s32 *)(p + 0x78) = 0x800;
            func_020ddd5c(p);
            flag = 1;
        }
        break;
    case 1081:
        if (arg3 == 19 || arg3 == 20 || arg3 == 21) {
            *(s32 *)(p + 0x64) = 0x21c;
            *(s32 *)(p + 4) += 0x28000;
        } else if (arg3 == 12 || arg3 == 13 || arg3 == 14) {
            *(u8 *)(p + 0xa1) |= 4;
            *(s32 *)(p + 0x6c) = 0x1f4;
            *(s32 *)(p + 0x64) = 0;
            *(s32 *)(p + 0x78) = 0x800;
            func_020ddd5c(p);
            flag = 1;
        }
        break;
    case 1092:
        val = 0x79;
        flag = 1;
        if (arg3 == 12 || arg3 == 13 || arg3 == 14) {
            *(u8 *)(p + 0xa1) |= 4;
            *(s32 *)(p + 0x6c) = 0x1f4;
            *(s32 *)(p + 0x64) = 0;
            *(s32 *)(p + 0x78) = 0x800;
            func_020ddd5c(p);
        } else {
            *(s32 *)(p + 0x78) = 0x800;
        }
        break;
    case 4082:
        *(u8 *)(p + 0xa1) |= 1;
        *(s32 *)(p + 0x64) = 0x21c;
        *(s32 *)(p + 0x54) = 0x1000;
        if (arg3 == 2) {
            u32 r;
            *(s32 *)(p + 0x78) = 0x14;
            data_0216263c.x = data_0216263c.mul * data_0216263c.x + data_0216263c.add;
            r = (u16)(((data_0216263c.x >> 16) * 0xf0) >> 16);
            *(s32 *)(p + 0) = r + 10;
            data_0216263c.x = data_0216263c.mul * data_0216263c.x + data_0216263c.add;
            r = (u16)(((data_0216263c.x >> 16) * 0xc8) >> 16);
            *(s32 *)(p + 4) = -(s32)(r + 10);
            break;
        }
        if (arg3 == 5 || arg3 == 6) {
            *(s32 *)(p + 0) = 0x80;
            *(s32 *)(p + 4) = 0x46;
            break;
        }
        if (arg3 == 7) {
            *(s32 *)(p + 0) = 0x80;
            *(s32 *)(p + 4) = 0x60;
            *(s32 *)(p + 0x64) = 0x32;
        }
        break;
    case 1121:
        if (arg3 == 0x12) {
            *(s32 *)(p + 0x64) = 0x42;
        } else if (arg3 == 19 || arg3 == 20 || arg3 == 21) {
            *(u8 *)(*(u8 **)*(void **)(p + 0x108) + 0x70) |= 2;
            *(s32 *)(p + 0x64) = 0x21c;
            *(s32 *)(p + 4) += 0x14000;
        }
        break;
    case 1131:
    case 1161:
    case 1201:
        val = 0x60;
        *(s32 *)(p + 0) += data_0213c394[1] * 10;
        *(s32 *)(p + 4) += 0xa000;
        *(s32 *)(p + 0x78) = 0x800;
        flag = 1;
        break;
    case 1901:
        val = 0x60;
        *(s32 *)(p + 0) -= 0x30000;
        *(s32 *)(p + 4) += 0x28000;
        *(s32 *)(p + 0x78) = 0x800;
        flag = 1;
        break;
    case 1241:
        val = 0x90;
        *(s32 *)(p + 0) += data_0213c394[1] * 10;
        *(s32 *)(p + 4) += 0xa000;
        *(s32 *)(p + 0x78) = 0x800;
        flag = 1;
        break;
    case 1321:
        flag = 1;
        *(s32 *)(p + 0x78) = 0x800;
        break;
    case 1331:
        flag = 1;
        *(s32 *)(p + 0) -= 0x22000;
        *(s32 *)(p + 4) += 0x10000;
        *(s32 *)(p + 8) -= 0xf000;
        *(s32 *)(p + 0x78) = 0x800;
        break;
    case 1301:
        *(s32 *)(p + 0x78) = 0x800;
        flag = 1;
        break;
    case 1001:
    case 1011:
    case 1041:
    case 1061:
    case 1071:
    case 1181:
    case 1191:
    case 1351:
    case 1352:
    case 1353:
    case 1354:
    case 1355:
    case 1371:
    case 1381:
    case 1401:
    case 1402:
    case 1403:
    case 1404:
    case 1405:
    case 1411:
    case 1421:
    case 1503:
    case 1601:
    case 1611:
    case 1621:
    case 1631:
    case 1641:
    case 1642:
    case 1651:
    case 1801:
    case 1911:
    case 1912:
    case 1921:
    case 1931:
        *(s32 *)(p + 0x78) = 0x800;
        flag = 1;
        break;
    }

    if (flag == 1 && *(void **)(p + 0x19c) == NULL) {
        u8 *q;
        func_020ddd5c(p);
        *(s32 *)(p + 0x64) = 0x21c;
        q = func_020c0924();
        *(u16 *)(q + 2) |= 1;
        *(s16 *)(q + 0xc) = arg4;
        *(s16 *)(q + 0xe) = val;
        *(u8 **)(p + 0x19c) = q;
    }

    func_020dde88(p);
    return p;
}

