/* 16 functions from 0x02092CA0 to 0x020938B0 (main), found by ds-decomp. */
#include "common.h"

typedef struct List_02092cec {
    void *head;
    void *tail;
    u32 unk8;
} List_02092cec;

extern u8 *data_02160110;
extern s32 data_02155c3c;
void func_021168f8(void *, void *);
void func_0210c5dc(void *);

static inline void ClearList_02092cec(List_02092cec *list) {
    void *node;
    while ((node = list->head) != NULL) {
        func_021168f8(list, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}
void *func_02093658(u16);
void func_02093444(u16);
void *func_0210c594(s32, s32);
void func_021167ac(void *, s32);
void func_020f5114(void *, s32);
void func_02092ca0(void) {
    void *node;
    while ((node = *(void **)(data_02160110 + 0x90)) != NULL) {
        func_021168f8(data_02160110 + 0x90, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

extern u8 *data_02160a6c;
extern char data_02148754[];
extern char data_02148774[];
extern char data_02148794[];
extern char data_021487b8[];
extern char data_021487dc[];
extern char data_021487fc[];
extern char data_0214881c[];
extern char data_02148840[];
extern char data_02148864[];
extern s32 func_020bd490(s32, u8);
extern void func_020ddbcc(void);
extern void *func_020ddb90(u16);
extern void func_02005e80(void *, const char *, ...);
extern void *func_021092d8(void *);
extern s32 func_02092ab0(void *, u16);
extern void *func_0210cd20(void *, s32);
extern void func_021093b0(void *);
extern void func_021167f0(void *, void *);
extern void func_0210a4a0(void);
extern void func_020f4870(void);
extern void *func_0210a4cc(void);
extern s32 func_020f1ffc(void *, const char *, s32, void *);
extern void *func_0210a7b4(void);
extern s32 func_020f2104(void *, const char *, s32, void *);
extern void func_020f4860(void *);
s32 func_02092cec(void) {
    u16 count;
    List_02092cec list1, list2;
    char buf[0x40];
    u32 seen[3] = {0, 0, 0};
    u8 *node;
    void **res;

    func_021167ac(&list1, 0x114);
    func_021167ac(&list2, 0x114);

    {
        u16 i;
        for (i = 0; i < 3; i++) {
            if (func_020bd490(0, (u8)i) != 0) {
                u8 *a;
                u8 *b;
                u8 *c;
                u8 *chara;
                void *fp;

                func_020bd490(1, (u8)i);
                func_020ddbcc();
                chara = (u8 *)func_020ddb90((s32)i);
                a = (u8 *)func_0210c594(0x11c, data_02155c3c);
                b = (u8 *)func_0210c594(0x11c, data_02155c3c);
                c = (u8 *)func_0210c594(0x11c, data_02155c3c);

                func_02005e80(buf, data_02148754);
                ((void **)&data_02160110)[1] = NULL;
                ((void **)&data_02160110)[2] = NULL;
                fp = func_021092d8(buf);
                if (func_02092ab0(fp, *(u16 *)(*(u8 **)(chara + 0x118) + 0x56)) != -1) {
                    ((void **)&data_02160110)[1] = func_0210cd20(fp, 0);
                    ((void **)&data_02160110)[1] = func_0210cd20(fp, 0);
                    ((void **)&data_02160110)[2] = func_0210cd20(fp, 0);
                }
                if (((void **)&data_02160110)[1] != NULL && ((void **)&data_02160110)[2] != NULL) {
                    func_02005e80(a, data_02148774, ((void **)&data_02160110)[1]);
                    func_02005e80(b, data_02148794, ((void **)&data_02160110)[2]);
                    func_02005e80(c, data_021487b8, ((void **)&data_02160110)[2]);
                }
                if (fp != NULL) {
                    func_021093b0(fp);
                }

                chara[0x114] = i;
                *(u16 *)(a + 0x100) = 0;
                *(u16 *)(a + 0x102) = i * 2 + 6;
                *(u16 *)(a + 0x104) = 0;
                *(u16 *)(a + 0x106) = 0;
                *(u16 *)(a + 0x108) = 4;
                *(u16 *)(a + 0x10a) = 2;
                func_021167f0(&list1, a);

                *(u16 *)(b + 0x102) = i + 13;
                *(u16 *)(b + 0x106) = 0;
                func_021167f0(&list2, b);

                *(u16 *)(c + 0x102) = i + 6;
                *(u16 *)(c + 0x106) = 0;
                func_021167f0(&list2, c);
            }
        }
    }

    count = 0;
    node = *(u8 **)(data_02160a6c + 0xb8);
    while (node != NULL) {
        u16 id = *(u16 *)(*(u8 **)(node + 0x118) + 0x56);
        s32 isNew = 1;
        u16 j;
        for (j = 0; j < 3; j++) {
            if (id == seen[j]) {
                isNew = 0;
            }
        }
        if (isNew != 0) {
            u8 *a = (u8 *)func_0210c594(0x11c, data_02155c3c);
            u8 *b = (u8 *)func_0210c594(0x11c, data_02155c3c);
            void *fp;

            func_02005e80(buf, data_021487dc);
            ((void **)&data_02160110)[1] = NULL;
            ((void **)&data_02160110)[2] = NULL;
            fp = func_021092d8(buf);
            if (func_02092ab0(fp, *(u16 *)(*(u8 **)(node + 0x118) + 0x56)) != -1) {
                ((void **)&data_02160110)[1] = func_0210cd20(fp, 0);
                ((void **)&data_02160110)[1] = func_0210cd20(fp, 0);
                ((void **)&data_02160110)[2] = func_0210cd20(fp, 0);
            }
            if (((void **)&data_02160110)[1] != NULL && ((void **)&data_02160110)[2] != NULL) {
                func_02005e80(a, data_021487fc, ((void **)&data_02160110)[1]);
                func_02005e80(b, data_0214881c, ((void **)&data_02160110)[2]);
            }
            if (fp != NULL) {
                func_021093b0(fp);
            }

            node[0x114] = count + 3;
            if (count != 2) {
                *(u16 *)(a + 0x100) = 4;
                *(u16 *)(a + 0x102) = count * 2 + 8;
            } else {
                *(u16 *)(a + 0x100) = 0xc;
                *(u16 *)(a + 0x102) = 0xa;
            }
            *(u16 *)(a + 0x104) = 0;
            *(u16 *)(a + 0x106) = 0;
            *(u16 *)(a + 0x108) = 4;
            *(u16 *)(a + 0x10a) = 2;
            func_021167f0(&list1, a);

            *(u16 *)(b + 0x102) = count + 10;
            *(u16 *)(b + 0x106) = 0;
            func_021167f0(&list2, b);

            seen[count] = *(u16 *)(*(u8 **)(node + 0x118) + 0x56);
            count++;
        } else {
            for (j = 0; j < 3; j++) {
                if (id == seen[j]) {
                    node[0x114] = j + 3;
                    break;
                }
            }
        }
        node = *(u8 **)(node + 0x174);
    }

    res = (void **)func_0210c594(8, data_02155c3c);
    func_0210a4a0();
    func_020f4870();
    res[0] = func_0210a4cc();
    if (func_020f1ffc(res[0], data_02148840, 2, &list1) == 0) {
        return 0;
    }
    res[1] = func_0210a7b4();
    if (func_020f2104(res[1], data_02148864, 2, &list2) == 0) {
        return 0;
    }
    func_020f4860(res);

    {
        List_02092cec *pList = &list1;
        while ((node = (u8 *)pList->head) != NULL) {
            func_021168f8(pList, node);
            if (node != NULL) {
                func_0210c5dc(node);
            }
        }
    }
    {
        List_02092cec *pList = &list2;
        while ((node = (u8 *)pList->head) != NULL) {
            func_021168f8(pList, node);
            if (node != NULL) {
                func_0210c5dc(node);
            }
        }
    }
    return 1;
}

void func_02093224(s32 arg0) {
    u16 i;
    for (i = 0; i < 0xc; i++) {
        u16 id = (u16)(i + 10);
        u8 *ptr = (u8 *)func_02093658(id);
        if (ptr != NULL && *(s32 *)(ptr + 8) == arg0) {
            func_02093444(id);
        }
    }
}

void *func_02093278(void) {
    u8 *ptr = (u8 *)func_0210c594(0x2c, data_02155c3c);
    func_021167ac(ptr + 0x20, 0x4c);
    return ptr;
}

void func_020932a8(u16 id, s16 x, s16 y) {
    u8 *ptr = (u8 *)func_02093658(id);
    s16 oldX, oldY;
    u8 *node;
    if (ptr == NULL) {
        return;
    }
    oldX = *(s16 *)(ptr + 0xc);
    oldY = *(s16 *)(ptr + 0xe);
    *(s16 *)(ptr + 0xc) = x;
    *(s16 *)(ptr + 0xe) = y;
    node = *(u8 **)(ptr + 0x20);
    while (node != NULL) {
        s16 dx = (s16)(oldX - *(s32 *)(node + 8));
        s16 dy = (s16)(oldY - *(s32 *)(node + 0xc));
        *(s32 *)(node + 8) = x - dx;
        *(s32 *)(node + 0xc) = y - dy;
        if (x > -64 && x < 256 && y > -32 && y < 192) {
            func_020f5114(node, 1);
        } else {
            func_020f5114(node, 0);
        }
        node = *(u8 **)(node + 0x50);
    }
}

void func_02093358(u16 id, s16 x, s16 y) {
    u8 *ptr = (u8 *)func_02093658(id);
    u8 *node;
    if (ptr == NULL) {
        return;
    }
    *(s16 *)(ptr + 0xc) += x;
    *(s16 *)(ptr + 0xe) += y;
    node = *(u8 **)(ptr + 0x20);
    if (node == NULL) {
        return;
    }
    do {
        *(s32 *)(node + 8) += x;
        *(s32 *)(node + 0xc) += y;
        func_020f5114(node, 0);
        if (*(s32 *)(node + 8) + *(u16 *)(node + 0x40) > 0 && *(s32 *)(node + 8) < 256 &&
            *(s32 *)(node + 0xc) + *(u16 *)(node + 0x42) > 0 && *(s32 *)(node + 0xc) < 192) {
            func_020f5114(node, 1);
        } else {
            func_020f5114(node, 0);
        }
        node = *(u8 **)(node + 0x50);
    } while (node != NULL);
}

void func_020f4f04(void *);
void *func_020935ec(void *, s32);
void func_02093424(u8 *arg0, s32 arg1) {
    u8 *node = *(u8 **)(arg0 + 0x20);
    while (node != NULL) {
        *(s32 *)(node + 0x20) = arg1;
        node = *(u8 **)(node + 0x50);
    }
}

void func_02093444(u16 id) {
    u8 *ptr = (u8 *)func_02093658(id);
    if (ptr == NULL) {
        return;
    }
    while (*(void **)(ptr + 0x20) != NULL) {
        void *node = *(void **)(ptr + 0x20);
        func_021168f8(ptr + 0x20, node);
        func_020f4f04(node);
    }
    func_021168f8(data_02160110 + 0x90, ptr);
    if (ptr != NULL) {
        func_0210c5dc(ptr);
    }
}

void func_020934ac(u8 *ptr) {
    if (ptr == NULL) {
        return;
    }
    while (*(void **)(ptr + 0x20) != NULL) {
        void *node = *(void **)(ptr + 0x20);
        func_021168f8(ptr + 0x20, node);
        func_020f4f04(node);
    }
    func_021168f8(data_02160110 + 0x90, ptr);
    if (ptr != NULL) {
        func_0210c5dc(ptr);
    }
}

void func_02093510(u8 *arg0, s32 arg1) {
    void *node = func_020935ec(arg0, arg1);
    if (node != NULL) {
        func_021168f8(arg0 + 0x20, node);
        func_020f4f04(node);
    }
}

void func_0209353c(u16 id, s16 x, s16 y) {
    u8 *ptr = (u8 *)func_02093658(id);
    s16 oldX, oldY;
    u8 *node;
    if (ptr == NULL) {
        return;
    }
    oldX = *(s16 *)(ptr + 0xc);
    oldY = *(s16 *)(ptr + 0xe);
    *(s16 *)(ptr + 0xc) = x;
    *(s16 *)(ptr + 0xe) = y;
    node = *(u8 **)(ptr + 0x20);
    while (node != NULL) {
        s16 dx = (s16)(oldX - *(s32 *)(node + 8));
        s16 dy = (s16)(oldY - *(s32 *)(node + 0xc));
        *(s32 *)(node + 8) = x - dx;
        *(s32 *)(node + 0xc) = y - dy;
        if (x > -64 && x < 256 && y > -32 && y < 192) {
            func_020f5114(node, 1);
        } else {
            func_020f5114(node, 0);
        }
        node = *(u8 **)(node + 0x50);
    }
}

void *func_020935ec(void *arg0, s32 arg1) {
    u8 *node;
    if (arg0 == NULL) {
        return NULL;
    }
    node = *(u8 **)((u8 *)arg0 + 0x20);
    while (node != NULL) {
        if (*(s32 *)(node + 0x48) == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x50);
    }
    return NULL;
}

void *func_02092c1c(void);
void *func_02092c38(void);
u8 *func_02093624(s32 arg0) {
    u8 *node = (u8 *)func_02092c1c();
    while (node != NULL) {
        if (*(s32 *)(node + 0x14) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x40);
    }
    return NULL;
}

void *func_02093658(u16 arg0) {
    u8 *node = (u8 *)func_02092c38();
    while (node != NULL) {
        if (*(u16 *)node == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x1c);
    }
    return NULL;
}

void func_0209368c(u16 arg0, s32 arg1, s32 arg2) {
    u8 *ptr = (u8 *)func_02093658(arg0);
    u8 *node;
    if (ptr == NULL) {
        return;
    }
    node = *(u8 **)(ptr + 0x20);
    while (node != NULL) {
        if (*(s32 *)(node + 0x48) == arg2) {
            u8 *sub = *(u8 **)node;
            *(s32 *)(sub + 0x14) = arg1;
            *(u32 *)sub = (*(u32 *)(sub + 8) << 10) | (*(u32 *)sub & ~0xc00);
            *(u16 *)(sub + 4) = (*(u16 *)(sub + 4) & ~0xf000) | (arg1 << 12);
            return;
        }
        node = *(u8 **)(node + 0x50);
    }
}

extern void *func_020f4d40(void *);
extern void *func_020f4c2c(void *);
extern void *func_020f4ec4(void);
extern s32 func_020f50bc(void *,void *,void *);
extern void func_021167f0(void *,void *);
void *func_020936f8(s32 id,u16 key,s32 x,s32 y,u8 mode,s32 flags,u16 tag) {
 u8 *ptr;
 u8 *node=0;
 ptr=func_02093624(id);
 void *res=func_020f4d40(*(void **)(ptr+0x30));
 if (!res) res=func_020f4c2c(*(void **)(ptr+0x30));
 if(data_02160110[0xcc]==1) {
  *(s32 *)(ptr+0x1c)=1;
  data_02160110[0xcc]=0;
 }
 node=func_020f4ec4();
 *(s32 *)(node+8)=x;
 *(s32 *)(node+0xc)=y;
 *(s32 *)(node+0x48)=tag;
 if(mode>4) mode=0;
 *(u16 *)(node+0x44)=mode;
 *(u16 *)(node+0x40)=*(s32 *)(ptr+8);
 *(u16 *)(node+0x42)=*(s32 *)(ptr+0xc);
 node[0x10]=ptr[0x34];
 if(!func_020f50bc(node,ptr+0x1c,res)) return 0;
 if(x>-64 && x<256 && y>-32 && y<192) func_020f5114(node,1);
 else func_020f5114(node,0);
 ptr=func_02093658(key);
 if(ptr) {
  if(flags==2) *(u16 *)(ptr+4)=ptr[6];
  ptr[0x14]|=flags;
  ptr[6]++;
  func_021167f0(ptr+0x20,node);
  return ptr;
 }
 if(!ptr) {
  ptr=func_02093278();
  *(u16 *)(ptr+2)=id;
  *(u16 *)(ptr)=key;
  if(flags==2) {
   *(u16 *)(ptr+0xc)=x;
   *(u16 *)(ptr+0xe)=y;
  }
  ptr[0x14]|=flags;
  ptr[6]++;
  func_021167f0(ptr+0x20,node);
  func_021167f0(data_02160110+0x90,ptr);
  return ptr;
 }
 return 0;
}

