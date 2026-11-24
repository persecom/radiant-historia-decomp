/* 54 functions from 0x02116350 to 0x02117304 (main), found by ds-decomp. */
#include "common.h"

extern void func_02116ad8();
typedef struct {
    u8 *start;
    u8 *end;
} Region;
extern u32 data_0216e21c;
extern u8 data_0216e220[12];
extern void *func_021169cc(void *, const void *);
extern void func_021167ac(void *, u16);
extern u8 data_0216cb1c[12];
extern u8 data_0216e1f8[24];
extern u8 data_0216e210[12];
extern u8 *data_0216cb10[3];
extern s32 data_02155dc4[54];
extern void *func_02116958(void *, void *);
void func_0211645c(u8 *arg0);
void func_021164e0(u8 *arg0);
void func_02116578(u8 *arg0);
void func_021165e0(u8 *arg0);
void func_02116604(void *arg0, void *arg1);
void func_02116674(void *arg0);
void func_02116720(s32 *arg0, s32 arg1, s32 arg2);
s32 func_02116748(s32 *arg0);
extern void func_021167f0(void *, void *);
extern void func_021168f8(void *, void *);
extern s32 func_02008128(void);
extern void func_0200813c(s32);

void func_02116720(s32 *arg0, s32 arg1, s32 arg2) {
    arg0[0] = func_02116748(arg0);
    arg0[1] = arg1;
    arg0[3] = arg2;
    arg0[2] = 0;
}

s32 func_02116748(s32 *arg0) {
    if (arg0[2] >= arg0[3]) {
        return arg0[1];
    }
    return arg0[0] + (arg0[2] * (arg0[1] - arg0[0])) / arg0[3];
}

void func_0211677c(s32 *arg0) {
    if (arg0[2] < arg0[3]) {
        arg0[2]++;
    }
}

s32 func_02116794(s32 *arg0) {
    return arg0[2] >= arg0[3];
}

void func_021167ac(void *arg0, u16 arg1) {
    u8 *p = (u8 *)arg0;
    *(u32 *)(p + 0x0) = 0;
    *(u32 *)(p + 0x4) = 0;
    *(u16 *)(p + 0x8) = 0;
    *(u16 *)(p + 0xa) = arg1;
}

void func_021167c4(void *list, void *object) {
    u8 *l = (u8 *)list;
    u8 *link = (u8 *)object + *(u16 *)(l + 0xa);
    u16 n;
    *(void **)(link + 4) = NULL;
    *(void **)(link + 0) = NULL;
    n = *(u16 *)(l + 8);
    *(void **)(l + 0) = object;
    *(void **)(l + 4) = object;
    *(u16 *)(l + 8) = n + 1;
}

void func_021167f0(void *list, void *object) {
    u8 *l = (u8 *)list;
    if (*(void **)(l + 0) == NULL) {
        func_021167c4(list, object);
    } else {
        u8 *link = (u8 *)object + *(u16 *)(l + 0xa);
        u16 n;
        *(void **)(link + 0) = *(void **)(l + 4);
        *(void **)(link + 4) = NULL;
        *(void **)((u8 *)*(void **)(l + 4) + *(u16 *)(l + 0xa) + 4) = object;
        n = *(u16 *)(l + 8);
        *(void **)(l + 4) = object;
        *(u16 *)(l + 8) = n + 1;
    }
}

void func_02116844(void *list, void *object) {
    u8 *l = (u8 *)list;
    if (*(void **)(l + 0) == NULL) {
        func_021167c4(list, object);
    } else {
        u8 *link = (u8 *)object + *(u16 *)(l + 0xa);
        u16 n;
        *(void **)(link + 0) = NULL;
        *(void **)(link + 4) = *(void **)(l + 0);
        *(void **)((u8 *)*(void **)(l + 0) + *(u16 *)(l + 0xa) + 0) = object;
        n = *(u16 *)(l + 8);
        *(void **)(l + 0) = object;
        *(u16 *)(l + 8) = n + 1;
    }
}

void func_02116894(void *list, void *target, void *object) {
    u8 *l = (u8 *)list;
    if (target == NULL) {
        func_021167f0(list, object);
    } else if (target == *(void **)(l + 0)) {
        func_02116844(list, object);
    } else {
        u16 offset = *(u16 *)(l + 0xa);
        u8 *objLink = (u8 *)object + offset;
        void *prevObj = *(void **)((u8 *)target + offset);
        *(void **)(objLink + 0) = prevObj;
        *(void **)(objLink + 4) = target;
        *(void **)((u8 *)prevObj + offset + 4) = object;
        *(void **)((u8 *)target + *(u16 *)(l + 0xa) + 0) = object;
        *(u16 *)(l + 8) += 1;
    }
}

void func_021168f8(void *list, void *object) {
    u8 *l = (u8 *)list;
    u8 *link = (u8 *)object + *(u16 *)(l + 0xa);
    if (*(void **)(link + 0) == NULL) {
        *(void **)(l + 0) = *(void **)(link + 4);
    } else {
        *(void **)((u8 *)*(void **)(link + 0) + *(u16 *)(l + 0xa) + 4) = *(void **)(link + 4);
    }
    if (*(void **)(link + 4) == NULL) {
        *(void **)(l + 4) = *(void **)(link + 0);
    } else {
        *(void **)((u8 *)*(void **)(link + 4) + *(u16 *)(l + 0xa) + 0) = *(void **)(link + 0);
    }
    *(void **)(link + 0) = NULL;
    *(void **)(link + 4) = NULL;
    *(u16 *)(l + 8) -= 1;
}

void *func_02116958(void *list, void *object) {
    u8 *l = (u8 *)list;
    if (object == NULL) {
        return *(void **)(l + 0);
    }
    return *(void **)((u8 *)object + *(u16 *)(l + 0xa) + 4);
}

void *func_02116970(void *list, void *object) {
    u8 *l = (u8 *)list;
    if (object == NULL) {
        return *(void **)(l + 4);
    }
    return *(void **)((u8 *)object + *(u16 *)(l + 0xa));
}

void *func_02116984(void *list, u16 index) {
    s32 count = 0;
    void *object = NULL;
    while ((object = func_02116958(list, object)) != NULL) {
        if (count == index) {
            return object;
        }
        count++;
    }
    return NULL;
}

void *func_021169cc(void *list, const void *memBlock) {
    void *heap = NULL;
    while ((heap = func_02116958(list, heap)) != NULL) {
        u8 *h = (u8 *)heap;
        if (*(void **)(h + 0x18) <= memBlock && memBlock < *(void **)(h + 0x1c)) {
            void *child = func_021169cc(h + 0xc, memBlock);
            if (child != NULL) {
                return child;
            }
            return heap;
        }
    }
    return NULL;
}

void *func_02116a34(void *memBlock) {
    void *heap = data_0216e220;
    void *p = func_021169cc(heap, memBlock);
    if (p != NULL) {
        heap = (u8 *)p + 0xc;
    }
    return heap;
}

void func_02116a5c(void *heap, u32 signature, void *start, void *end, u16 opt) {
    typedef struct {
        u32 opt : 8;
        u32 : 24;
    } Bits;
    typedef union {
        Bits bits;
        u32 raw;
    } Attr;
    u8 *p = (u8 *)heap;
    u32 *flag = &data_0216e21c;
    u16 n = 4;
    Attr a;
    a.raw = 0;
    a.bits.opt = opt;
    *(u32 *)(p + 0) = signature;
    *(void **)(p + 0x18) = start;
    *(void **)(p + 0x1c) = end;
    *(u32 *)(p + 0x20) = a.raw;
    func_021167ac(p + 0xc, n);
    if (*flag == 0) {
        func_021167ac(data_0216e220, n);
        *flag = 1;
    }
    func_021167f0(func_02116a34(heap), heap);
}

void func_02116ad8(void *heap) {
    func_021168f8(func_02116a34(heap), heap);
}

void func_02116af0(void *region, void *block) {
    u8 *b = (u8 *)block;
    u16 offset = (*(u16 *)(b + 2) >> 8) & 0x7f;
    u32 size;
    *(u8 **)region = b - offset;
    size = *(u32 *)(b + 4);
    size += (u32)(b + 0x10);
    *(u8 **)((u8 *)region + 4) = (u8 *)size;
}

void *func_02116b1c(void *list, void *block) {
    u8 *l = (u8 *)list;
    u8 *b = (u8 *)block;
    u8 *prev = *(u8 **)(b + 8);
    u8 *next = *(u8 **)(b + 0xc);
    if (prev != NULL) {
        *(u8 **)(prev + 0xc) = next;
    } else {
        *(u8 **)(l + 0) = next;
    }
    if (next != NULL) {
        *(u8 **)(next + 8) = prev;
    } else {
        *(u8 **)(l + 4) = prev;
    }
    return prev;
}

void *func_02116b44(void *list, void *target, void *prev) {
    u8 *l = (u8 *)list;
    u8 *t = (u8 *)target;
    u8 *p = (u8 *)prev;
    u8 *next;
    *(u8 **)(t + 8) = p;
    if (p != NULL) {
        next = *(u8 **)(p + 0xc);
        *(u8 **)(p + 0xc) = t;
    } else {
        next = *(u8 **)(l + 0);
        *(u8 **)(l + 0) = t;
    }
    *(u8 **)(t + 0xc) = next;
    if (next != NULL) {
        *(u8 **)(next + 8) = t;
    } else {
        *(u8 **)(l + 4) = t;
    }
    return t;
}

void *func_02116b74(void *region, u16 signature) {
    u8 *r = (u8 *)region;
    u8 *block = *(u8 **)(r + 0);
    u8 *end = *(u8 **)(r + 4);
    *(u16 *)(block + 0) = signature;
    *(u16 *)(block + 2) = 0;
    *(u32 *)(block + 4) = (u32)(end - (block + 0x10));
    *(void **)(block + 8) = NULL;
    *(void **)(block + 0xc) = NULL;
    return block;
}

extern void func_02116a5c(void *, u32, void *, void *, u16);
void *func_02116ba0(void *start, void *end, u16 opt) {
    typedef struct {
        u8 *start;
        u8 *end;
    } Region;
    u8 *p = (u8 *)start;
    Region region;
    void *block;
    void *ret;
    func_02116a5c(p, 0x45585048, p + 0x38, end, opt);
    *(u16 *)(p + 0x34) = 0;
    *(u16 *)(p + 0x36) = *(u16 *)(p + 0x34) & ~1;
    region.start = *(void **)(p + 0x18);
    region.end = *(void **)(p + 0x1c);
    block = func_02116b74(&region, 0x4652);
    *(void **)(p + 0x24) = block;
    *(void **)(p + 0x28) = block;
    ret = p;
    *(u32 *)(p + 0x2c) = 0;
    *(u32 *)(p + 0x30) = 0;
    return ret;
}

void* func_02116d7c(void* heap, u32 size, s32 alignment)
{
    typedef struct Block {
        u16 signature;
        u16 attribute;
        u32 blockSize;
        struct Block* prev;
        struct Block* next;
    } Block;

    u8* expHeap = (u8*)heap + 0x24;
    const BOOL allocFirst = (u16)(*(u16*)(expHeap + 0x12) & 1) == 0;

    Block* block = NULL;
    Block* found = NULL;
    u32 foundSize = 0xFFFFFFFF;
    void* foundMem = NULL;

    alignment -= 1;

    for (block = *(Block**)expHeap; block != NULL; block = block->next) {
        void* const mem = (void*)(block + 1);
        void* const aligned = (void*)((alignment + (u32)mem) & ~alignment);
        const u32 offset = (u32)aligned - (u32)mem;

        if (block->blockSize >= size + offset && foundSize > block->blockSize) {
            found = block;
            foundSize = block->blockSize;
            foundMem = aligned;

            if (allocFirst || foundSize == size) {
                break;
            }
        }
    }

    if (found == NULL) {
        return NULL;
    }

    return func_02116c10(expHeap, found, foundMem, size, 0);
}

void *func_02116e30(void *heap, u32 size, s32 alignment)
{
  typedef struct Block
  {
    u16 signature;
    u16 attribute;
    u32 blockSize;
    struct Block *prev;
    struct Block *next;
  } Block;
  u8 *expHeap = ((u8 *) heap) + 0x24;
  const BOOL allocFirst = ((u16) ((*((u16 *) (expHeap + 0x12))) & 1)) == 0;
  Block *block = *((Block **) (expHeap + 4));
  Block *found = NULL;
  u32 foundSize = 0xFFFFFFFF;
  void *foundMem = NULL;
  if (block != NULL)
  {
    alignment -= 1;
    alignment = ~alignment;
    do
    {
      int blockSize = block->blockSize;
      void * const mem = (void *) (block + 1);
      void * const aligned = (void *) (((blockSize + ((u32) mem)) - size) & alignment);
      const s32 offset = (s32) (((u32) aligned) - ((u32) mem));
      if ((offset >= 0) && (foundSize > blockSize))
      {
        found = block;
        foundSize = blockSize;
        foundMem = aligned;
        if (allocFirst || (foundSize == size))
        {
          break;
        }
      }
      block = block->prev;
    }
    while (block != NULL);
  }
  if (found == NULL)
  {
    return NULL;
  }
  return func_02116c10(expHeap, found, foundMem, size, 1);
}
