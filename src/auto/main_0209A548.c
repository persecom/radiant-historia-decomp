/* 10 functions from 0x0209A548 to 0x0209B328 (main), found by ds-decomp. */
#include "common.h"
typedef struct Draw20 { s16 v[10]; } Draw20;
typedef struct Draw14 { s16 v[7]; } Draw14;
extern const Draw20 data_02142074;
extern const Draw14 data_02142054;
u8 *func_0209c8dc(u8);
void func_0209ca84(u16, s16, s16, s32);
void func_0209bfa0(u16, s16, s16, s32, u8);
void func_0209beb8(s16, s16, s16, s32);
void func_0209bca0(s16, s16, s16, void *, s32, s32);
s32 func_0209cb14(s32, s32);
void func_020a3c54(u16);
void func_020a3bbc(u16);
void func_021098ac(void *);
void func_021099f8(void *);

typedef struct Node_0209b108 {
    u8 unk_0;
    u8 pad_1;
    u16 unk_2;
    u8 pad_4[4];
    struct Node_0209b108 *next;
} Node_0209b108;

typedef struct Mgr_0209a548 {
    u8 pad_00[0x60];
    u16 unk_60;
    u8 pad_62[0x636];
    s16 unk_698;
    u8 unk_69a;
    u8 pad_69b;
    u16 unk_69c;
    u8 pad_69e[0x36];
    void *unk_6d4;
    u8 pad_6d8[0x14];
    Node_0209b108 *unk_6ec;
} Mgr_0209a548;

extern Mgr_0209a548 *data_02160120;
extern const char data_021488e0[];
extern s32 data_02155c3c;

s32 func_020bd490(s32, u8);
void func_02005e80(char *, const char *, ...);
void *func_021092d8(char *);
s32 func_02092ab0(void *, s32);
s32 func_02092994(void *, s32);
void func_021093b0(void *);
Node_0209b108 *func_0210c594(s32, s32);
void func_021167f0(Node_0209b108 **, Node_0209b108 *);

void func_0209a8d0(void) {
u8 *n; u16 i; s16 j; s32 y; u8 *mgr=(u8 *)data_02160120;
Draw20 a=data_02142074;
Draw14 b=data_02142054;
n=**(u8 ***)(mgr+0x704);
while(n) {
 if((*(u16 *)(n+2)&0x10)&&(*(u16 *)(n+2)&1)) {
 *(volatile u32 *)0x40004a4=(*(s8 *)(n+0x20)<<16)|0x80;
 if(!(*(u16 *)(n+2)&4)) {
 if(*(u16 *)(n+2)&2) func_020a3c54(*(u16 *)(n+4)); else func_020a3bbc(*(u16 *)(n+4));
 a.v[1]=*(s16 *)(n+6); a.v[2]=*(s16 *)(n+8); a.v[3]=*(s16 *)(n+10); a.v[4]=*(s16 *)(n+12);
 a.v[5]=*(s32 *)(n+16); a.v[6]=*(s32 *)(n+20); a.v[7]=*(s32 *)(n+24); a.v[8]=*(s16 *)(n+28); a.v[9]=*(s16 *)(n+30);
 func_021098ac(&a);
 } else {
 b.v[1]=*(s32 *)(n+16); b.v[2]=*(s32 *)(n+20); b.v[3]=*(s32 *)(n+24); b.v[4]=*(s16 *)(n+28); b.v[5]=*(s16 *)(n+30); b.v[6]=*(u16 *)(n+4);
 func_021099f8(&b);
 }
 }
 n=*(u8 **)(n+40);
}
for(i=*(u16 *)(mgr+0x734),j=0;i<*(u16 *)(mgr+0x714);i++) {
 u8 *p=func_0209c8dc((u8)i);
 if(p) {
 y=j*19;
 func_0209ca84(*(u16 *)(p+2),33,(s16)(y+32),16);
 if(*(u16 *)(p+4)>=99) func_0209bfa0(99,196,(s16)(y+40),16,p[6]); else func_0209bfa0(*(u16 *)(p+4),196,(s16)(y+40),16,p[6]);
 if(++j>=7) break;
 }
}
if(*(u16 *)(mgr+0x714)<=7) func_0209beb8(208,49,95,23);
else if(func_0209cb14(3,16)) func_0209beb8(208,(s16)(*(s16 *)(mgr+0x73c)+49),*(s16 *)(mgr+0x73e),24);
else func_0209beb8(208,(s16)(*(s16 *)(mgr+0x73c)+49),*(s16 *)(mgr+0x73e),23);
func_0209bca0(205,16,16,*(void **)(mgr+0x780),0,31);
if(!*(void **)(mgr+0x784)) return;
if(mgr[0x788]&1) func_0209bca0((s16)(256-*(s16 *)(mgr+0x78a)),16,32,*(void **)(mgr+0x784),1,31);
else if(mgr[0x788]&2) func_0209bca0(205,16,32,*(void **)(mgr+0x784),1,*(s16 *)(mgr+0x78a)&255);
}

void *func_0209ac14(void) {
    return data_02160120->unk_6d4;
}

u16 func_0209ac28(u8 *arg0, s32 arg1) {
    char buf[0x20];
    void *r5;
    u16 ret;

    func_02005e80(buf, data_021488e0, func_020bd490(1, *arg0));
    r5 = func_021092d8(buf);
    if (r5 == NULL) {
        return 0;
    }

    ret = 0;
    if (func_02092ab0(r5, arg1) != -1) {
        u16 i;
        for (i = 0; i < 8; i++) {
            func_02092994(r5, 0);
        }
        ret = func_02092994(r5, 0);
    }

    if (r5 != NULL) {
        func_021093b0(r5);
    }
    return ret;
}

extern const char data_02148910[];
void func_0209b03c(void) {
    char buf[0x20];
    void *r5;
    u16 i, j;
    func_02005e80(buf, data_02148910);
    r5 = func_021092d8(buf);
    if (r5 == NULL) {
        return;
    }
    for (i = 0; i < 30; i++) {
        *(u16 *)((u8 *)data_02160120 + 0x742 + i * 2) = 0;
    }
    for (j = 0; j < 11; j++) {
        func_02092994(r5, 0);
        *(u16 *)((u8 *)data_02160120 + 0x742 + j * 2) = func_02092994(r5, 0);
        func_02109444(r5);
    }
    if (r5 != NULL) {
        func_021093b0(r5);
    }
}

void func_0209b108(u8 arg0, u16 arg1) {
    Node_0209b108 *cur = data_02160120->unk_6ec;
    s32 found = 0;

    while (cur != NULL) {
        if (cur->unk_0 == arg0 && cur->unk_2 == arg1) {
            found = 1;
            break;
        }
        cur = cur->next;
    }

    if (found == 0) {
        Node_0209b108 *node = func_0210c594(0xc, data_02155c3c);
        node->unk_0 = arg0;
        node->unk_2 = arg1;
        func_021167f0(&data_02160120->unk_6ec, node);
    }
}

void func_0209b194(u16 arg0) {
    Mgr_0209a548 *mgr = data_02160120;
    if (mgr->unk_60 != arg0) {
        mgr->unk_698 = 0;
        mgr->unk_69a = 0;
        mgr->unk_69c = 0;
    }
    mgr->unk_60 = arg0;
}

extern u8 *data_02160a6c;
void func_020dd810(void *, s32, s32);
void func_0209b1c4(void) {
    Mgr_0209a548 *mgr = data_02160120;
    u8 *node = *(u8 **)(data_02160a6c + 0xac);

    while (node != NULL) {
        *(s32 *)node -= 10;
        if (*(s32 *)node < 50) {
            *(s32 *)node = 50;
            *(s32 *)(node + 0x64) = *(u16 *)(node + 0x90) * 40 + 500;
            if (*(u8 *)(node + 0x104) == 1) {
                func_020dd810(node, 8, 0);
            }
            if (*(u8 *)(node + 0x104) != 8) {
                func_020dd810(node, 12, 0);
            }
        }
        *(s32 *)(node + 4) = *(u16 *)(node + 0x90) * 56 + 68;
        node = *(u8 **)(node + 0x16c);
    }

    mgr->unk_698++;
    if (mgr->unk_698 > 50) {
        func_0209b194(1);
    }
}

void func_0209b2b4(void) {
    Mgr_0209a548 *mgr = data_02160120;
    mgr->unk_698++;
    if (mgr->unk_698 > 30) {
        s32 found = 0;
        u8 *node = func_0209ac14();
        while (node != NULL) {
            if (*(s32 *)(node + 8) > 0) {
                found = 1;
            }
            node = *(u8 **)(node + 0x38);
        }
        if (found != 0) {
            func_0210d27c(0x99);
        }
        func_0209b194(2);
    }
}

