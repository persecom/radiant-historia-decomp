/* 5 functions from 0x020139A4 to 0x02014994 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u8 padding, sign, unk2, alternate, unk4, conversion;
    u16 unk6;
    s32 width, precision;
} FormatSpec;

u8 *func_02013eb0(s32 value, u8 *end, FormatSpec spec) {
    u32 base;
    u8 *p = end;
    s32 negative = 0;
    s32 count = 0;
    s32 precision = spec.precision;
    u32 width;
    s32 alternate = spec.alternate;
    s32 conversion = spec.conversion;
    s32 sign = spec.sign;
    width = spec.width;
    *--p = 0;
    if (value == 0 && precision == 0) {
        if (!alternate || conversion != 'o') return p;
    }
    switch (conversion) {
    case 'd': case 'i':
        base = 10;
        if (value < 0) {
            if ((s64)value != (-9223372036854775807LL - 1)) value = -value;
            negative = 1;
        }
        break;
    case 'o': base = 8; sign = 0; break;
    case 'u': base = 10; sign = 0; break;
    case 'x': case 'X': base = 16; sign = 0; break;
    }
    do {
        s32 digit = (u32)value % base;
        value = (u32)value / base;
        if (digit < 10) digit += '0';
        else if (conversion == 'x') digit += 'a' - 10;
        else digit += 'A' - 10;
        *--p = digit;
        count++;
    } while (value != 0);
    if (base == 8 && alternate && *p != '0') {
        *--p = '0'; count++;
    }
    if (spec.padding == 2) {
        precision = width;
        if (negative || sign) precision--;
        if (base == 16 && alternate) precision -= 2;
    }
    if (precision + (end - p) > 509) return 0;
    while (count < precision) { *--p = '0'; count++; }
    if (base == 16 && alternate) { *--p = conversion; *--p = '0'; }
    if (negative) *--p = '-';
    else if (sign == 1) *--p = '+';
    else if (sign == 2) *--p = ' ';
    return p;
}

u8 *func_02014100(s64 value, u8 *end, FormatSpec spec) {
    u64 base;
    u8 *p = end;
    s32 negative = 0;
    s32 count = 0;
    s32 precision = spec.precision;
    s32 sign;
    u32 width;
    s32 alternate;
    s32 conversion;
    alternate=spec.alternate;
    width = spec.width;
    sign=spec.sign;
    conversion=spec.conversion;
    *--p = 0;
    if (value == 0 && precision == 0) {
        if (!alternate || conversion != 'o') return p;
    }
    switch (conversion) {
    case 'd': case 'i':
        base = 10;
        if (value < 0) {
            if ((s64)value != (-9223372036854775807LL - 1)) value = -value;
            negative = 1;
        }
        break;
    case 'o': base = 8; sign = 0; break;
    case 'u': base = 10; sign = 0; break;
    case 'x': case 'X': base = 16; sign = 0; break;
    }
    do {
        s32 digit = (u64)value % base;
        value = (u64)value / base;
        if (digit < 10) digit += '0';
        else if (conversion == 'x') digit += 'a' - 10;
        else digit += 'A' - 10;
        *--p = digit;
        count++;
    } while (value != 0);
    if (base == 8 && alternate && *p != '0') {
        *--p = '0'; count++;
    }
    if (spec.padding == 2) {
        precision = width;
        if (negative || sign) precision--;
        if (base == 16 && alternate) precision -= 2;
    }
    if (precision + (end - p) > 509) return 0;
    while (count < precision) { *--p = '0'; count++; }
    if (base == 16 && alternate) { *--p = conversion; *--p = '0'; }
    if (negative) *--p = '-';
    else if (sign == 1) *--p = '+';
    else if (sign == 2) *--p = ' ';
    return p;
}

