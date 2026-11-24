/* 54 functions from 0x02116350 to 0x02117304 (main), found by ds-decomp. */
#include "common.h"

extern void func_02116ad8();
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

extern void func_02116a5c(void *, u32, void *, void *, u16);

void *func_0211709c(void *heap, void *end, u16 opt)
{
  u8 *new_var2;
  u8 *new_var4;
  void **new_var3;
  u8 *start;
  u8 *new_var;
  start = heap;
  new_var = (0, (u8 *) start);
  new_var = new_var + 0x30;
  func_02116a5c(heap, 0x46524D48, new_var, end, opt);
  heap = (u8 *) heap;
  if (1)
  {
    if (heap)
    {
    }
    start = *((u8 **) (heap + 0x18));
    new_var3 = (void **) (heap + 0x2C);
    new_var4 = (new_var2 = (u8 *) heap);
    *((u8 **) (new_var2 + 0x28)) = (heap = *((u8 **) (((u8 *) heap) + 0x1C)));
    *((u8 **) (new_var4 + 0x24)) = start;
  }
  *new_var3 = NULL;
  return heap;
}

void* func_021170e4(void* heap, u32 size, s32 alignment)
{
    u8* frame = (u8*)heap;
    u32 head = *(u32*)(frame + 0x0);
    u32 aligned;
    u32 newHead;
    u32 flags;
    u32 clearSize;

    alignment -= 1;

    aligned = ~alignment & (alignment + head);
    newHead = size + aligned;

    if (newHead > *(u32*)(frame + 0x4)) {
        return NULL;
    }

    flags = *(u32*)(frame - 0x4);
    clearSize = newHead - head;

    if ((u8)flags & 1) {
        func_02008e24(0, (void*)head, clearSize);
    }

    *(u32*)(frame + 0x0) = newHead;

    return (void*)aligned;
}

void* func_02117140(void* heap, u32 size, s32 alignment)
{
    u8* frame = (u8*)heap;
    u32 tail = *(u32*)(frame + 0x4);
    u32 aligned;
    u32 flags;
    u32 clearSize;

    alignment -= 1;

    aligned = ~alignment & (tail - size);

    if (aligned < *(u32*)(frame + 0x0)) {
        return NULL;
    }

    flags = *(u32*)(frame - 0x4);
    clearSize = tail - aligned;

    if ((u8)flags & 1) {
        func_02008e24(0, (void*)aligned, clearSize);
    }

    *(u32*)(frame + 0x4) = aligned;

    return (void*)aligned;
}

void func_02117198(void* heap)
{
    u8* start = *(u8**)((u8*)heap + 0x18);

    *(u8**)((u8*)heap + 0x24) = start;
    *(void**)((u8*)heap + 0x2C) = NULL;
}

void func_021171ac(void* heap)
{
    u8* state = *(u8**)((u8*)heap + 0x2C);

    while (state != NULL) {
        *(u8**)(state + 0x8) = *(u8**)((u8*)heap + 0x1C);
        state = *(u8**)(state + 0xC);
    }

    *(u8**)((u8*)heap + 0x28) = *(u8**)((u8*)heap + 0x1C);
}

void* func_021171d8(void* start, u32 size, u16 opt)
{
    u32 end = (size + (u32)start) & ~3;
    start = (void*)(((u32)start + 3) & ~3);

    if ((u32)start > end || end - (u32)start < 0x30) {
        return NULL;
    }

    return func_0211709c(start, (void*)end, opt);
}

void func_02117210(void) {
    func_02116ad8();
}

void* func_0211721c(void* heap, u32 size, s32 alignment)
{
    if (size == 0) {
        size = 1;
    }

    size = (size + 3) & ~3;

    if (alignment >= 0) {
        return func_021170e4((u8*)heap + 0x24, size, alignment);
    } else {
        return func_02117140((u8*)heap + 0x24, size, -alignment);
    }
}

void func_02117250(void* heap, u32 mode)
{
    if (mode & 1) {
        func_02117198(heap);
    }

    if (mode & 2) {
        func_021171ac(heap);
    }
}

u32 func_0211727c(void *heap, s32 alignment)
{
  u32 head;
  u32 tail;
  u32 aligned;
  alignment = func_02013630(alignment);
  alignment -= 1;
  if (alignment)
  {
  }
  head = *((u32 *) (((u8 *) heap) + 0x24));
  aligned = (~alignment) & (alignment + head);
  tail = *((u32 *) (((u8 *) heap) + 0x28));
  if (aligned > tail)
  {
    return 0;
  }
  return tail - ((~alignment) & (alignment + head));
}

BOOL func_021172b4(void* heap, u32 tag)
{
    typedef struct State {
        u32 tag;
        u8* head;
        u8* tail;
        struct State* next;
    } State;

    u8* head = *(u8**)((u8*)heap + 0x24);
    State* state;

    state = (State*)func_021170e4((u8*)heap + 0x24, 0x10, 4);

    if (state == NULL) {
        return 0;
    }

    state->tag = tag;
    state->head = head;
    state->tail = *(u8**)((u8*)heap + 0x28);
    state->next = *(State**)((u8*)heap + 0x2C);

    *(State**)((u8*)heap + 0x2C) = state;

    return 1;
}

