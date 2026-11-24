/* 24 functions from 0x020A56CC to 0x020A66B8 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s32 x, y; } Vec2s32_020A56CC;
static inline void LinePosition(s32 *out,u8 *point,s32 scale,s32 *offset) {
 out[0]=offset[0]+(*(s16 *)(point+6)*scale)/0x1000-32;
 out[1]=offset[1]+(*(s16 *)(point+8)*scale)/0x1000+8;
 out[0]<<=12;
 out[1]<<=12;
}
extern void *func_021092d8(const char *);
extern void func_02005e80(char *, const char *, ...);
extern s32 func_02092994(void *, s32);
extern s32 func_02109444(void *);
extern void func_021167f0(void *, void *);
extern void func_021093b0(void *);
extern char data_0214feb0[], data_0214fed0[], data_0214fef0[], data_0214fef4[], data_0214fef8[], data_0214fefc[];

extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern void func_020a994c(void *);
extern void func_020a98a0(void *);
extern void func_020a9544(void *);
extern void func_0203bc34(void *, void *, void *, s32, s32, s32);
extern void func_020a899c(void *);
extern void func_020a9610(void *, void *, void *, void *, s32, s32);
extern u32 func_020a96f0(void *);
extern u8 **data_021600e4;
extern void *func_020a6360(void *, u8);
extern void func_021167ac(void *, s32);
extern void func_020a6320(void **);

typedef struct { u16 unk[10]; } Unk20;
extern const Unk20 data_0214357c;
extern const Unk20 data_021433b0;
extern u8 *data_02160134[2];
extern s32 func_020851bc(s32, s32, s32, s32, s32);
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3s32_020A56CC;
void func_020a56cc(void) {
Unk20 box=data_021433b0;
u8 *p;
func_020a3bbc(0x27);
p=data_02160134[1];
if(!(*(s16 *)(p+10)&8)) {
if(p[5]>=20) {
p[5]=0;
data_02160134[1][4]=func_020851bc(data_02160134[1][4],1,2,0,2);
} else data_02160134[1][5]=func_020851bc(p[5],1,20,0,1);
} else if(*(s16 *)(p+10)&16) {
*(s16 *)(p+6)=260+(*(s16 *)(p+12)*-80)/4;
p=data_02160134[1];
if(*(s16 *)(p+12)>=4){
*(s16 *)(p+10)&=~8;
*(s16 *)(data_02160134[1]+12)=0;
p=data_02160134[1];
*(s16 *)(p+8)=*(s16 *)(p+6);
} else *(s16 *)(data_02160134[1]+12)=func_020851bc(*(s16 *)(p+12),1,4,0,1);
}
box.unk[1]=0;
box.unk[2]=(s16)data_02160134[1][4]*18;
box.unk[3]=box.unk[8]=64;
box.unk[4]=box.unk[9]=18;
box.unk[5]=*(s16 *)(data_02160134[1]+6);
box.unk[6]=164;
func_021098ac(&box);
}

void *func_020a583c(void) {
    return func_0210c594(0x80, data_02155c3c);
}

void func_020a5858(u8 *arg0) {
    if (arg0 == NULL) {
        return;
    }
    if (*(u16 *)(arg0 + 0x5c) & 1) {
        func_020a994c(arg0 + 0xc);
        func_020a98a0(arg0 + 0xc);
    }
    func_020a9544(*(void **)(arg0 + 0));
    *(void **)(arg0 + 0) = NULL;
    if (*(u8 **)(arg0 + 4) != NULL) {
        (*(void (**)(void *))(*(u8 **)(arg0 + 4) + 0xc))(*(void **)(arg0 + 4));
        *(void **)(arg0 + 4) = NULL;
    }
    if (*(u8 **)(arg0 + 8) != NULL) {
        (*(void (**)(void *))(*(u8 **)(arg0 + 8) + 0xc))(*(void **)(arg0 + 8));
        *(void **)(arg0 + 8) = NULL;
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020a5bf4(u8 *arg0, void *arg1) {
    (*(void (**)(void *))(*(u8 **)(arg0 + 4) + 4))(*(void **)(arg0 + 4));
    if (arg1 != NULL) {
        func_0203bc34(*(void **)(arg0 + 0), *(void **)(arg0 + 4), arg1, 0, 0, 0);
    }
    func_020a899c(*(void **)(arg0 + 4));
}

void func_020a5c40(u8 *arg0, void *arg1) {
    func_020a9610(arg0 + 0x40, *(void **)(arg0 + 0), arg1, *(void **)(arg0 + 4), 0, 0);
    func_020a5bf4(arg0, arg1);
    *(u32 *)(arg0 + 0x78) = func_020a96f0(*(void **)(arg0 + 0x50));
    *(s32 *)(*(u8 **)(arg0 + 4) + 0x44) = 0x5000;
    *(s32 *)(*(u8 **)(arg0 + 4) + 0x48) = 0x4000;
    *(s32 *)(*(u8 **)(arg0 + 4) + 0x4c) = 0x2bc000;
    *(Vec3s32_020A56CC *)(arg0 + 0x60) = *(Vec3s32_020A56CC *)(*(u8 **)(arg0 + 4) + 0x44);
    *(s32 *)(arg0 + 0x6c) = -0x96000;
    *(s32 *)(arg0 + 0x70) = 0;
    *(s32 *)(arg0 + 0x74) = 0;
}

void func_020a5cd4(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0x6c) = -0x5000;
}

void func_020a5ce4(void *arg0) {
    if (*(void **)((u8 *)arg0 + 4) == NULL) {
        return;
    }
    ((void (*)(void *))*(void **)((u8 *)*(void **)((u8 *)arg0 + 4) + 4))(*(void **)((u8 *)arg0 + 4));
    func_020a899c(*(void **)((u8 *)arg0 + 4));
}

void func_020a5d0c(void *arg0) {
    *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 4) + 0x44) = *(s32 *)((u8 *)arg0 + 0x60) + *(s32 *)((u8 *)arg0 + 0x6c);
    *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 4) + 0x48) = *(s32 *)((u8 *)arg0 + 0x64) + *(s32 *)((u8 *)arg0 + 0x70);
    *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 4) + 0x4c) = *(s32 *)((u8 *)arg0 + 0x68) + *(s32 *)((u8 *)arg0 + 0x74);
}

void *func_020a5d4c(void) {
    return func_0210c594(0xb4, data_02155c3c);
}

extern char *func_02092a40(void *,char *);
void func_020a5d68(void *out,s32 type) {
char buf[32];
u8 *entry;
void *file;
u16 i=0;
if(type==0)func_02005e80(buf,data_0214feb0);
else if(type==1)func_02005e80(buf,data_0214fed0);
file=func_021092d8(buf);
if(!file)return;
do {
entry=func_020a5d4c();
*(u16 *)(entry)=func_02092994(file,0);
*(u16 *)(entry+2)=i;
*(u16 *)(entry+6)=func_02092994(file,0);
*(u16 *)(entry+8)=func_02092994(file,0);
entry[0x18]=func_02092994(file,0);
entry[0x19]=func_02092994(file,0);
entry[0x1a]=func_02092994(file,0);
entry[0x1b]=func_02092994(file,0);
func_02005e80(entry+0x1c,data_0214fef4,func_02092a40(file,data_0214fef0));
func_02005e80(entry+0x5c,data_0214fefc,func_02092a40(file,data_0214fef8));
func_021167f0(out,entry);
i++;
}while(func_02109444(file));
if(file)func_021093b0(file);
}

void func_020a5ed4(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
}

void *func_020a5f14(u8 **arg0, u16 arg1) {
    u8 *node = *arg0;
    while (node != NULL) {
        if (*(u16 *)(node + 0) == arg1) return node;
        node = *(u8 **)(node + 0xa4);
    }
    return NULL;
}

void *func_020a5f40(u8 **arg0, u16 arg1) {
    u8 *node = *arg0;
    while (node != NULL) {
        if (*(u16 *)(node + 2) == arg1) return node;
        node = *(u8 **)(node + 0xa4);
    }
    return NULL;
}

s32 func_020a5f6c(u8 *arg0, u8 *arg1, u16 arg2, u16 arg3) {
    u8 *g;
    u16 v0 = *(u16 *)(arg1 + 0);
    s32 i;
    g = *data_021600e4;
    if (v0 == arg2) {
        for (i = 0; i < 4; i++) {
            u8 v;
            void *p;
            void *a, *b;
            switch (i) {
            case 0: v = arg1[0x18]; break;
            case 1: v = arg1[0x1b]; break;
            case 2: v = arg1[0x19]; break;
            case 3: v = arg1[0x1a]; break;
            }
            p = func_020a6360(g + 0x118, v);
            if (p != NULL) {
                a = *(void **)((u8 *)p + 4);
                b = *(void **)((u8 *)p + 8);
                if (*(u16 *)((u8 *)a + 4) == arg3) return (s8)i;
                if (*(u16 *)((u8 *)b + 4) == arg3) return (s8)i;
            }
        }
    }
    return -1;
}

void func_020a6020(void) {
    Unk20 buf = data_0214357c;
    u8 *node;

    *(volatile u32 *)0x40004a4 = 0x1f0080;
    *(volatile u32 *)0x4000480 = 0x7fff;
    buf.unk[1] = 0;
    buf.unk[2] = 0;
    buf.unk[3] = 0x10;
    buf.unk[4] = 0x10;
    buf.unk[8] = 0x10;
    buf.unk[9] = 0x10;
    func_020a3bbc(4);

    node = *(u8 **)((u8 *)data_021600e4 + 0x124);
    while (node != NULL) {
        u8 *base = (u8 *)data_021600e4;
        s32 x = *(s16 *)(node + 6);
        s32 y = *(s16 *)(node + 8);
        x = (x * *(s32 *)(base + 0x6c)) / 0x1000 - 0x20;
        y = (y * *(s32 *)(base + 0x6c)) / 0x1000 + 8;
        if (x > 0 && y > 0) {
            buf.unk[5] = *(s32 *)(base + 0x44) + x - 8;
            buf.unk[6] = *(s32 *)(base + 0x48) + y - 8;
            func_021098ac(&buf);
        }
        node = *(u8 **)(node + 0xa4);
    }
}

void *func_020a6138(void) {
    u8 *ptr = (u8 *)func_0210c594(0x24, data_02155c3c);
    func_021167ac(ptr + 4, 0xc);
    return ptr;
}

void *func_020a6168(void) {
    return func_0210c594(0x14, data_02155c3c);
}

extern char data_0214ff00[32];
extern char data_0214ff20[32];
extern void func_02005e80(char *, const char *, ...);
extern void *func_021092d8(const char *);
extern s32 func_02092994(void *, s32);
extern void *func_020a6168(void);
extern s32 func_02109444(void *);
extern void func_021167f0(void *, void *);
extern void func_021093b0(void *);
void func_020a6184(void *arg0, s32 arg1) {
    char buf[32];
    void *fp;
    u8 *entry;
    u8 *node;
    u16 i;
    s32 last;
    u16 count;
    u16 id;

    if (arg1 == 0) {
        func_02005e80(buf, data_0214ff00);
    } else if (arg1 == 1) {
        func_02005e80(buf, data_0214ff20);
    }

    fp = func_021092d8(buf);
    if (fp == NULL) {
        return;
    }

    do {
        id = func_02092994(fp, 0);
        if (id == 0) {
            break;
        }
        entry = (u8 *)func_020a6138();
        *(u16 *)(entry + 0) = id;
        *(u32 *)(entry + 0x18) = 0;
        count = func_02092994(fp, 0);
        if (count != 0) {
            last = count - 1;
            i = 0;
            do {
                node = (u8 *)func_020a6168();
                func_02109444(fp);
                *(u16 *)(node + 0) = func_02092994(fp, 0);
                *(u16 *)(node + 6) = func_02092994(fp, 0);
                *(u16 *)(node + 8) = func_02092994(fp, 0);
                if (i == 0 || i == last) {
                    *(u16 *)(node + 4) = func_02092994(fp, 0);
                }
                func_021167f0(entry + 4, node);
                i++;
            } while (i < count);
        }
        func_021167f0(arg0, entry);
    } while (func_02109444(fp));

    if (fp != NULL) {
        func_021093b0(fp);
    }
}

void func_020a62d8(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_020a6320((void **)((u8 *)ptr + 4));
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
}

void func_020a6320(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
}

void *func_020a6360(void *arg0, u8 arg1) {
    u8 *node = *(u8 **)arg0;
    if (node != NULL) {
        do {
            if (*(u16 *)node == arg1) {
                return node;
            }
            node = *(u8 **)(node + 0x14);
        } while (node != NULL);
    }
    return NULL;
}

extern s32 func_020a66b8(s32 *,s32 *,s32 *,s32 *,s32,s32,s32,s32);
#pragma optimization_level 3
void func_020a638c(u8 **list,s32 scale,s32 *offset,s32 arg) {
 u8 *next;
 u8 *line=*list;
 Vec2s32_020A56CC a,b,first,last;
 s32 unit;
 if(!line)return;
 do {
 u8 *point=*(u8 **)(line+4);
 unit=0x1000;
 if(point) {
 first.x=offset[0]+(*(s16 *)(point+6)*scale)/0x1000-32;
 first.y=offset[1]+(*(s16 *)(point+8)*scale)/0x1000+8;
 first.x<<=12;first.y<<=12;
 }
 next=*(u8 **)(line+8);
 if(next) {
 last.x=offset[0]+(*(s16 *)(next+6)*scale)/0x1000-32;
 last.y=offset[1]+(*(s16 *)(next+8)*scale)/0x1000+8;
 last.x<<=12;last.y<<=12;
 }
 while(point) {
 next=*(u8 **)(point+0x10);
 if(next) {
 a.x=offset[0]+(*(s16 *)(point+6)*scale)/0x1000-32;
 a.y=offset[1]+(*(s16 *)(point+8)*scale)/0x1000+8;
 a.x<<=12;a.y<<=12;
 b.x=offset[0]+(*(s16 *)(next+6)*scale)/0x1000-32;
 b.y=offset[1]+(*(s16 *)(next+8)*scale)/0x1000+8;
 b.x<<=12;b.y<<=12;
 unit=func_020a66b8((s32 *)&a,(s32 *)&b,(s32 *)&first,(s32 *)&last,0x8000,unit,arg,*(s32 *)(line+0x18));
 }
 point=next;
 }
 line=*(u8 **)(line+0x14);
 }while(line);
}
#pragma optimization_level 4
extern const s16 data_0213a394[];
void func_020a655c(s32 *a,s32 *b,s32 angle,s32 color,s32 z) {
s32 y,x;
x=data_0213a394[(angle>>4)*2];
y=data_0213a394[(angle>>4)*2+1];
*(volatile u32 *)0x04000444=0;
*(volatile u32 *)0x040004a8=0;
*(volatile u32 *)0x040004a4=0x1f20c0;
*(volatile u32 *)0x0400046c=0x1000000;
*(volatile u32 *)0x0400046c=0x1000000;
*(volatile u32 *)0x0400046c=0x1000;
if(color==0) *(volatile u32 *)0x04000480=0x4694;
else *(volatile u32 *)0x04000480=0x1f;
*(volatile u32 *)0x04000500=3;
*(volatile s32 *)0x04000470=a[0]+(x>>12);
*(volatile s32 *)0x04000470=a[1]+(y>>12);
*(volatile s32 *)0x04000470=z;
*(volatile u32 *)0x04000490=0;
*(volatile s32 *)0x04000470=(a[0]-(x>>12))-(a[0]+(x>>12));
*(volatile s32 *)0x04000470=(a[1]-(y>>12))-(a[1]+(y>>12));
*(volatile s32 *)0x04000470=z;
*(volatile u32 *)0x04000490=0;
*(volatile s32 *)0x04000470=(b[0]+(x>>12))-(a[0]-(x>>12));
*(volatile s32 *)0x04000470=(b[1]+(y>>12))-(a[1]-(y>>12));
*(volatile s32 *)0x04000470=z;
*(volatile u32 *)0x04000490=0;
*(volatile s32 *)0x04000470=(b[0]-(x>>12))-(b[0]+(x>>12));
*(volatile s32 *)0x04000470=(b[1]-(y>>12))-(b[1]+(y>>12));
*(volatile s32 *)0x04000470=z;
*(volatile u32 *)0x04000490=0;
*(volatile u32 *)0x04000504=0;
*(volatile u32 *)0x04000448=1;
}

