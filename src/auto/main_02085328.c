/* 4 functions from 0x02085328 to 0x020860E4 (main), found by ds-decomp. */
#include "common.h"
extern int func_02085110(u8);
extern int func_02085128(u8);
extern int func_02084f80(u8);
extern int func_02084fa8(u8);
extern void func_020bd2fc(u8, int, u8, u8);
extern void func_0210c5dc(void *);
extern u16 data_02162908[4];
extern u16 data_021626a8, data_021626a6;
extern u8 *func_020bd438(u8);
extern u8 *func_02021f10(u8);

extern u32 data_02155c3c;

typedef struct {
    u8 pad[0x44];
    void *field_44;
    void *field_48;
    void *field_4c;
    u8 pad2[8];
    void *field_58;
} G_02085f50;
extern G_02085f50 *data_0216010c;
extern u8 data_021485a8[8];
extern u8 data_021485b0[12];
extern u8 data_021485bc[16];
extern void *func_0210c594(u32, u32);
extern void func_020a9544(void *);
extern void *func_020a94b8(void *);

extern void func_020860e4(void);
void func_02085328(void) {
    int i = 0, j;
    u8 *state = data_0216010c->field_44;
    int used = 0;
    switch (*state) {
    case 0:
        ++*state;
        for (; i < ((u8 *)data_0216010c)[0x614]; i=(s16)(i+1))
            func_020895a0((u16)i, 0xc000, (i * 19 + 26) << 12, 90, 4, (u16)(func_02085110((u8)i) + 1), 0, 0, 0);
        break;
    case 1:
        func_02080c68();
        if (data_02162908[2]) {
            if (func_02089ae4(232, 2, 20, 20) == 1) {
                *(s16 *)((u8 *)data_0216010c + 0x51ae) |= 2;
                used = 1;
            }
            *(s16 *)((u8 *)data_0216010c + 0x5382) &= ~2;
            if (!used && func_02089ae4(164,160,52,16)==1 && ((u8 *)data_0216010c)[0x50dc] && ((u8 *)data_0216010c)[0x614]>=3)
                *(s16 *)((u8 *)data_0216010c+0x5382)|=2;
            for(i=0;i<((u8 *)data_0216010c)[0x614];i=(s16)(i+1)) {
                if(func_02089ae4(8,(s16)(i*19+25),127,17)==1) {
                    if (((u8 *)data_0216010c)[0x50dc]==i) {
                        if (*(s16 *)((u8 *)data_0216010c+0x52e6)&2)
                            *(s16 *)((u8 *)data_0216010c+0x5382)|=2;
                    } else {
                        func_0210d27c(2);
                        ((u8 *)data_0216010c)[0x50dc]=i;
                        *(s16 *)((u8 *)data_0216010c+0x52e6)&=~2;
                        func_02080b58((u8)func_02085128(((u8 *)data_0216010c)[0x50dc]));
                    }
                }
            }
            return;
        }
        *(s16 *)((u8 *)data_0216010c+0x52e6)|=2;
        if (((u8 *)data_0216010c)[0x50e1]&2) {
            for(;i<2;i=(s16)(i+1)) {
                if(func_02089ae4(172,(s16)(i*44+69),79,42)==1 && ((u8 *)data_0216010c)[0x50e0]) {
                    int a=func_02085110(((u8 *)data_0216010c)[0x50e0]);
                    int b=func_02085128(((u8 *)data_0216010c)[0x50e0]);
                    int n=i+1;
                    int c=func_02084f80((u8)n);
                    int d=func_02084fa8((u8)n);
                    u8 *node, *next;
                    for(j=0;j<((u8 *)data_0216010c)[0x614];j=(s16)(j+1))
                        if(a==func_02084f80((u8)j) && b==func_02084fa8((u8)j))
                            func_020bd2fc((u8)j,1,(u8)c,(u8)d);
                    func_020bd2fc((u8)n,1,(u8)a,(u8)b);
                    func_020bd574();
                    node=*(u8 **)((u8 *)data_0216010c+0x608);
                    while(node) {
                        next=*(u8 **)(node+12);
                        func_021168f8((u8 *)data_0216010c+0x608,node);
                        if(node) func_0210c5dc(node);
                        node=next;
                    }
                    for(i=0;i<((u8 *)data_0216010c)[0x614];i=(s16)(i+1)) {
                        u8 *rec=func_020bd438((u8)i);
                        if(rec) {
                            u8 *info=func_02021f10(rec[2]);
                            if(*(u16 *)rec&1) {
                                u8 *p=func_0210c594(16,data_02155c3c);
                                p[0]=rec[2]; p[1]=info[0x42];
                                func_021167f0((u8 *)data_0216010c+0x608,p);
                            }
                        }
                    }
                    ((u8 *)data_0216010c)[0x50e1]&=0xfd;
                    ((u8 *)data_0216010c)[0x50e0]=0;
                    return;
                }
            }
        }
        ((u8 *)data_0216010c)[0x50e1]&=0xfd;
        ((u8 *)data_0216010c)[0x50e0]=0;
        if((data_021626a8&1)||(*(s16 *)((u8 *)data_0216010c+0x5382)&2)) {
            *(s16 *)((u8 *)data_0216010c+0x5382)&=~2;
            if(!((u8 *)data_0216010c)[0x50dc]) {func_0210d27c(7); return;}
            if(((u8 *)data_0216010c)[0x614]<=2) {func_0210d27c(7); return;}
            *(s16 *)((u8 *)data_0216010c+0x5382)|=4;
            ++*state;
            ((u8 *)data_0216010c)[0x50de]=0;
            func_0210d27c(11);
            return;
        }
        if((data_021626a8&2)||(*(s16 *)((u8 *)data_0216010c+0x51ae)&2)) {
            func_020852a0(); func_0210d27c(5);
            func_02092010(2,(u16)(((s8 *)data_0216010c)[0x50d2]+(((s8 *)data_0216010c)[0x50d1]<<1)));
            *(s16 *)((u8 *)data_0216010c+0x51ae)|=4;
            *(s16 *)((u8 *)data_0216010c+0x51ae)&=~2;
            return;
        }
        {
            u8 old=func_02085128(((u8 *)data_0216010c)[0x50dc]);
            if(data_021626a6&128) {
                ((u8 *)data_0216010c)[0x50dc]=func_020851bc(((u8 *)data_0216010c)[0x50dc],1,(s16)(((u8 *)data_0216010c)[0x614]-1),0,2);
                if(old!=func_02085128(((u8 *)data_0216010c)[0x50dc])) {
                    func_02080b58((u8)func_02085128(((u8 *)data_0216010c)[0x50dc])); func_0210d27c(2);
                }
            } else if(data_021626a6&64) {
                ((u8 *)data_0216010c)[0x50dc]=func_020851f8(((u8 *)data_0216010c)[0x50dc],1,0,(s16)(((u8 *)data_0216010c)[0x614]-1),2);
                if(old!=func_02085128(((u8 *)data_0216010c)[0x50dc])) {
                    func_02080b58((u8)func_02085128(((u8 *)data_0216010c)[0x50dc])); func_0210d27c(2);
                }
            }
        }
        break;
    case 2:
        func_02080c68();
        if(data_02162908[2]) {
            if(func_02089ae4(232,2,20,20)==1) {
                *(s16 *)((u8 *)data_0216010c+0x51ae)|=2; used=1;
            }
            *(s16 *)((u8 *)data_0216010c+0x5382)&=~2;
            if(!used && func_02089ae4(164,160,52,16)==1) {
                *(s16 *)((u8 *)data_0216010c+0x5382)|=2; used=1;
            }
            for(j=0;j<2;j=(s16)(j+1)) {
                if(!used && func_02089ae4(172,(s16)(j*44+69),79,42)==1) {
                    if(((s8 *)data_0216010c)[0x50de]==j) {
                        if(*(s16 *)((u8 *)data_0216010c+0x52e6)&2)
                            *(s16 *)((u8 *)data_0216010c+0x5382)|=2;
                    } else {
                        *(s16 *)((u8 *)data_0216010c+0x52e6)&=~2;
                        ((u8 *)data_0216010c)[0x50de]=j;
                        func_0210d27c(2);
                    }
                    used=1;
                }
            }
            if(used) return;
            for(i=0;i<((u8 *)data_0216010c)[0x614];i=(s16)(i+1)) {
                if(func_02089ae4(8,(s16)(i*19+25),127,17)==1) {
                    if(((u8 *)data_0216010c)[0x50dc]==i)
                        *(s16 *)((u8 *)data_0216010c+0x5382)|=2;
                    else { --*state; func_0210d27c(2); return; }
                }
            }
            return;
        }
        *(s16 *)((u8 *)data_0216010c+0x52e6)|=2;
        if((data_021626a6&128)||(data_021626a6&64)) {
            ((s8 *)data_0216010c)[0x50de]^=1;
            func_0210d27c(2); return;
        }
        if((data_021626a8&1)||(*(s16 *)((u8 *)data_0216010c+0x5382)&2)) {
                    int k;
                    int a=func_02085110(((u8 *)data_0216010c)[0x50dc]);
                    int b=func_02085128(((u8 *)data_0216010c)[0x50dc]);
                    
                    int c=func_02084f80((u8)(((s8 *)data_0216010c)[0x50de]+1));
                    int d=func_02084fa8((u8)(((s8 *)data_0216010c)[0x50de]+1));
                    u8 *node, *next;
                    for(k=0;k<((u8 *)data_0216010c)[0x614];k=(s16)(k+1))
                        if(a==func_02084f80((u8)k) && b==func_02084fa8((u8)k))
                            func_020bd2fc((u8)k,1,(u8)c,(u8)d);
                    func_020bd2fc((u8)(((s8 *)data_0216010c)[0x50de]+1),1,(u8)a,(u8)b);
                    func_020bd574();
                    node=*(u8 **)((u8 *)data_0216010c+0x608);
                    while(node) {
                        next=*(u8 **)(node+12);
                        func_021168f8((u8 *)data_0216010c+0x608,node);
                        if(node) func_0210c5dc(node);
                        node=next;
                    }
                    for(i=0;i<((u8 *)data_0216010c)[0x614];i=(s16)(i+1)) {
                        u8 *rec=func_020bd438((u8)i);
                        if(rec) {
                            u8 *info=func_02021f10(rec[2]);
                            if(*(u16 *)rec&1) {
                                u8 *p=func_0210c594(16,data_02155c3c);
                                p[0]=rec[2]; p[1]=info[0x42];
                                func_021167f0((u8 *)data_0216010c+0x608,p);
                            }
                        }
                    }

            func_0210d27c(11);
            *(s16 *)((u8 *)data_0216010c+0x5382)|=4;
            *(s16 *)((u8 *)data_0216010c+0x5382)&=~2;
            return;
        }
        if((data_021626a8&2)||(*(s16 *)((u8 *)data_0216010c+0x51ae)&2)) {
            --*state; func_0210d27c(5);
            *(s16 *)((u8 *)data_0216010c+0x51ae)|=4;
            *(s16 *)((u8 *)data_0216010c+0x51ae)&=~2;
        }
        break;
    }
}

void func_02085f44(void) {
    func_020860e4();
}

void func_02085f50(void) {
    G_02085f50 **g;
    data_0216010c->field_44 = func_0210c594(0x2c, data_02155c3c);
    if (data_0216010c->field_58 != NULL && *(void **)data_0216010c->field_58 != NULL) {
        func_020a9544(data_0216010c->field_58);
    }
    data_0216010c->field_58 = func_020a94b8(data_021485a8);
    g = &data_0216010c;
    if ((*g)->field_48 != NULL && *(void **)(*g)->field_48 != NULL) {
        func_020a9544((*g)->field_48);
        (*g)->field_48 = NULL;
    }
    data_0216010c->field_48 = func_020a94b8(data_021485b0);
    g = &data_0216010c;
    if ((*g)->field_4c != NULL && *(void **)(*g)->field_4c != NULL) {
        func_020a9544((*g)->field_4c);
        (*g)->field_4c = NULL;
    }
    data_0216010c->field_4c = func_020a94b8(data_021485bc);
}

extern void func_02080d30(void);
extern void func_0210c5dc(void *);
extern void func_02089a98(void);
void func_02086030(void) {
    u16 i;
    void *z = NULL;
    G_02085f50 **p;
    func_02080d30();
    p = &data_0216010c;
    if ((*p)->field_58 != NULL && *(void **)(*p)->field_58 != NULL) {
        func_020a9544((*p)->field_58);
        (*p)->field_58 = z;
    }
    for (i = 0; i < 2; i++) {
        void **v = *(void ***)((u8 *)(*p) + 0x48 + i * 4);
        if (v != NULL && *v != NULL) {
            func_020a9544(v);
            *(void **)((u8 *)(*p) + 0x48 + i * 4) = z;
        }
    }
    if ((*p)->field_44 != NULL) {
        if ((*p)->field_44 != NULL) {
            func_0210c5dc((*p)->field_44);
            (*p)->field_44 = z;
        }
        (*p)->field_44 = z;
    }
    (*p)->pad[0x3f] = (u8)(u32)z;
    func_02089a98();
}

