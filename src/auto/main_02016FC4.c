/* 3 functions from 0x02016FC4 to 0x02017F74 (main), found by ds-decomp. */
#include "common.h"

extern f64 func_02016fc4(s32, void *, void *, s32 *, s32 *);
extern void func_02016c84(void);
extern void func_0201e014(f64);
extern s32 data_02160034;
f64 func_02016fc4(s32 arg0, void *arg1, void *arg2, s32 *arg3, s32 *arg4) {
    typedef s32 (*Reader)(void *, s32, s32);
    typedef struct {
        u8 sign;
        u8 pad;
        s16 exponent;
        u8 length;
        u8 digits[32];
    } Decimal;
    typedef struct { u8 bytes[9]; } Text9;
    typedef struct { u8 bytes[5]; } Text5;
    typedef union {
        u8 bytes[8];
        f64 value;
    } DoubleBits;
    typedef union {
        u8 payload[42];
        struct {
            u8 payload_prefix[32];
            Text9 inf_copy;
            u8 padding_4f;
        } parts;
    } Payload;
    extern const u8 data_0213ec44[9];
    extern const u8 data_0213ec3c[5];
    extern const u16 data_0213eb14[];
    extern const u8 data_0213ea94[];
    extern const f32 data_02145c28;
    extern const f64 data_02145c30;
    extern f64 func_02020604(f32, f32);
    extern f64 func_0201f800(f32);
    extern f64 func_02013618(const u8 *);
    extern f64 func_0201962c(void *);

    s32 hex_state = 0;
    s32 count = 0;
    s32 spaces = 0;
    s32 state = 1;
    Decimal dec = { 0 };
    s32 negative = 0;
    s32 exp_negative = 0;
    s32 exponent = 0;
    s32 adjustment = 0;
    s32 sign_count = 0;
    u8 *hex_ptr;
    s32 hex_exp = 0;
    s32 hex_exp_negative = 0;
    u32 hex_digits = 0;
    s32 max_digits = 14;
    Payload text;
    Text9 inf_word;
    u8 hex[8];
    Text5 nan_copy;
    DoubleBits result;
    Text5 nan_word;
    s32 n;
    s32 c;
    s32 ch;
    u8 hex_byte;
    f64 value;
    Reader read = (Reader)arg1;

    *arg4 = 0;
    ++count;
    c = read(arg2, 0, 0);
    inf_word = *(const Text9 *)data_0213ec44;
    nan_word = *(const Text5 *)data_0213ec3c;

    while (count <= arg0 && c != -1 && !(state & 0x1800)) {
        switch (state) {
        case 1:
            if ((u32)c >= 0x80 ? 0 : data_0213eb14[c] & 0x100) {
                c = read(arg2, 0, 0);
                ++spaces;
                break;
            }
            switch ((u32)c >= 0x80 ? c : data_0213ea94[c]) {
            case '-':
                negative = 1;
                /* fall through */
            case '+':
                ++count;
                c = read(arg2, 0, 0);
                sign_count = 1;
                break;
            case 'I':
                ++count;
                c = read(arg2, 0, 0);
                state = 0x4000;
                break;
            case 'N':
                ++count;
                c = read(arg2, 0, 0);
                state = 0x2000;
                break;
            default:
                state = 2;
                break;
            }
            break;

        case 0x4000:
            state = 1;
            text.parts.inf_copy = inf_word;
            while (state < 8 && ((const u8 *)text.parts.inf_copy.bytes)[state] ==
                   ((u32)c >= 0x80 ? c : data_0213ea94[c])) {
                ++state;
                ++count;
                c = read(arg2, 0, 0);
            }
            if (state == 3 || state == 8) {
                if (negative) {
                    value = func_02020604(0.0f, data_02145c28);
                } else {
                    value = func_0201f800(data_02145c28);
                }
                *arg3 = spaces + state + sign_count;
                return value;
            }
            state = 0x1000;
            break;

        case 0x2000: {
            nan_copy = nan_word;
            state = 1;
            n = 0;
            {
                u8 *p = text.payload;
                u32 remaining = 8;
                do {
                    p[0] = 0;
                    p[1] = 0;
                    p[2] = 0;
                    p[3] = 0;
                    p += 4;
                } while (--remaining != 0);
            }
            while (state < 4 && nan_copy.bytes[state] ==
                   ((u32)c >= 0x80 ? c : data_0213ea94[c])) {
                ++state;
                ++count;
                c = read(arg2, 0, 0);
            }
            if ((u32)(state - 3) > 1) {
                state = 0x1000;
                break;
            }
            if (state == 4) {
                while (n < 32 &&
                       (((u32)c >= 0x80 ? 0 : data_0213eb14[c] & 8) ||
                        ((u32)c >= 0x80 ? 0 : data_0213eb14[c] & 1) || c == '.')) {
                    text.payload[n] = (u8)c;
                    ++n;
                    ++count;
                    c = read(arg2, 0, 0);
                }
                if (c != ')') {
                    state = 0x1000;
                    break;
                }
                ++n;
            }
            hex_state = 0;
            text.payload[n] = 0;
            if (negative) {
                value = 0.0 - func_02013618(text.payload);
            } else {
                value = func_02013618(text.payload);
            }
            *arg3 = spaces + state + n + sign_count;
            return value;
        }

        case 2:
            if (c == '.') {
                state = 0x10;
                goto next_char;
            }
            if (!((u32)c >= 0x80 ? 0 : data_0213eb14[c] & 8)) {
                state = 0x1000;
                break;
            }
            if (c == '0') {
                ++count;
                c = read(arg2, 0, 0);
                if (c < 0) {
                    state = 8;
                } else {
                    ch = c;
                    if (ch < 0x80) ch = data_0213ea94[ch];
                    if (ch == 'X') {
                        state = 0x8000;
                        hex_state = 1;
                    } else {
                        state = 4;
                    }
                }
            } else {
                state = 8;
            }
            break;

        case 4:
            if (c != '0') {
                state = 8;
            } else {
                goto next_char;
            }
            break;

        case 8:
            if (!((u32)c >= 0x80 ? 0 : data_0213eb14[c] & 8)) {
                if (c != '.') {
                    state = 0x40;
                    break;
                }
                state = 0x20;
            } else {
                if (dec.length >= 20) {
                    ++adjustment;
                } else {
                    dec.digits[dec.length++] = (u8)c;
                }
            }
            goto next_char;

        case 0x10:
            if (!((u32)c >= 0x80 ? 0 : data_0213eb14[c] & 8)) {
                state = 0x1000;
            } else {
                state = 0x20;
            }
            break;

        case 0x20:
            if (!((u32)c >= 0x80 ? 0 : data_0213eb14[c] & 8)) {
                state = 0x40;
                break;
            }
            if (dec.length < 20) {
                if (c != '0' || dec.length != 0) {
                    dec.digits[dec.length++] = (u8)c;
                }
                --adjustment;
            }
            goto next_char;

        case 0x40:
            if (((u32)c >= 0x80 ? c : data_0213ea94[c]) != 'E') {
                state = 0x800;
                break;
            }
            state = 0x80;
            goto next_char;

        case 0x80:
            if (c == '+') {
                ++count;
                c = read(arg2, 0, 0);
            } else if (c == '-') {
                ++count;
                c = read(arg2, 0, 0);
                exp_negative = 1;
            }
            state = 0x100;
            break;

        case 0x100:
            if (!((u32)c >= 0x80 ? 0 : data_0213eb14[c] & 8)) {
                state = 0x1000;
                break;
            }
            if (c != '0') {
                state = 0x400;
                break;
            }
            state = 0x200;
            goto next_char;

        case 0x200:
            if (c != '0') {
                state = 0x400;
            } else {
                goto next_char;
            }
            break;

        case 0x400:
            if (!((u32)c >= 0x80 ? 0 : data_0213eb14[c] & 8)) {
                state = 0x800;
                break;
            }
            exponent = (s32)((u32)exponent * 10 + (u32)(c - '0'));
            if (exponent > 308) *arg4 = 1;
            goto next_char;

        case 0x8000:
            switch (hex_state) {
            case 1:
                hex_ptr = hex;
                hex_digits = 0;
                hex_ptr[0] = 0;
                hex_ptr[1] = 0;
                hex_ptr[2] = 0;
                hex_ptr[3] = 0;
                hex_ptr[4] = 0;
                hex_ptr[5] = 0;
                hex_ptr[6] = 0;
                hex_ptr[7] = 0;
                n = 0;
                hex_state = 2;
                goto next_char;

            case 2:
                if (c != '0') {
                    hex_state = 4;
                } else {
                    goto next_char;
                }
                break;

            case 4:
                if (!((u32)c >= 0x80 ? 0 : data_0213eb14[c] & 0x400)) {
                    if (c == '.') {
                        hex_state = 8;
                        goto next_char;
                    }
                    hex_state = 0x10;
                    break;
                }
                if (hex_digits < max_digits) {
                    ++hex_digits;
                    hex_byte = hex_ptr[n / 2];
                    if (c >= 0 && c < 0x80) c = data_0213ea94[c];
pack_digit:
                    if (c >= 'A') {
                        c -= 55;
                    } else {
                        c -= '0';
                    }
                    {
                        u8 digit = (u8)c;
                        if (n % 2 != 0) {
                            hex_byte = (u8)(hex_byte | digit);
                        } else {
                            hex_byte = (u8)(hex_byte | (u8)(digit << 4));
                        }
                    }
                    hex_ptr[n / 2] = hex_byte;
                    ++n;
                }
                goto next_char;

            case 8:
                if (!((u32)c >= 0x80 ? 0 : data_0213eb14[c] & 0x400)) {
                    hex_state = 0x10;
                    break;
                }
                if (hex_digits < max_digits) {
                    hex_byte = hex_ptr[n / 2];
                    if (c >= 0) {
                        if (c < 0x80) c = data_0213ea94[c];
                        goto pack_digit;
                    }
                }
                goto next_char;

            case 0x10:
                if (((u32)c >= 0x80 ? c : data_0213ea94[c]) != 'P') {
                    state = 0x800;
                    break;
                }
                hex_state = 0x20;
                goto next_char;

            case 0x20:
                if (c == '-') {
                    hex_exp_negative = 1;
                } else if (c != '+') {
                    read(arg2, c, 1);
                    --count;
                }
                hex_state = 0x40;
                goto next_char;

            case 0x40:
                if (!((u32)c >= 0x80 ? 0 : data_0213eb14[c] & 8)) {
                    state = 0x1000;
                    break;
                }
                if (c != '0') {
                    hex_state = 0x100;
                    break;
                }
                hex_state = 0x80;
                goto next_char;

            case 0x80:
                if (c != '0') {
                    hex_state = 0x100;
                } else {
                    goto next_char;
                }
                break;

            case 0x100:
                if (!((u32)c >= 0x80 ? 0 : data_0213eb14[c] & 8)) {
                    state = 0x800;
                    break;
                }
                hex_exp = (s32)((u32)hex_exp * 10 + (u32)(c - '0'));
                if (exponent > 0x7fff) *arg4 = 1;
                goto next_char;
            }
            break;
        }
        continue;

next_char:
        ++count;
        c = read(arg2, 0, 0);
    }

    if (state != 0x8000) {
        n = !(state & 0xe2c);
    } else {
        if (count - 1 > 2 && (hex_state & 0x18e)) {
            n = 0;
        } else {
            n = 1;
        }
    }
    if (n) {
        *arg3 = 0;
    } else {
        *arg3 = count - 1 + spaces;
    }
    read(arg2, c, 1);

    if (!hex_state) {
        u8 *end;
        if (exp_negative) exponent = -exponent;
        hex_state = 0;
        n = dec.length;
        end = dec.digits + n;
        while (n-- && *--end == '0') {
            ++adjustment;
        }
        dec.length = (u8)(n + 1);
        if (!dec.length) {
            dec.digits[dec.length++] = '0';
        }
        if (exponent < -308 || exponent > 308) {
            if (!*arg4 && dec.digits[0] == '0' && dec.digits[1] == 0) {
                return 0.0;
            }
            *arg4 = 1;
        }
        n = exponent + adjustment;
        if (*arg4) {
            if (exp_negative) return 0.0;
            if (!negative) return data_02145c30;
            return 0.0 - data_02145c30;
        }
        dec.exponent = (s16)n;
        value = func_0201962c(&dec);
        if (0.0 != value && value < 2.2250738585072014e-308) {
            *arg4 = 1;
        } else if (value > 1.7976931348623157e308) {
            *arg4 = 1;
            value = data_02145c30;
        }
        if (negative && (state & 0xe2c)) {
            value = 0.0 - value;
        }
        return value;
    } else {
        u8 *out = result.bytes;
        u8 carry;
        u8 byte;
        u32 bit;
        u32 offset;
        s32 shift;
        u32 leading;
        s32 i;
        u32 biased;

        if (hex_exp_negative) hex_exp = -hex_exp;
        hex_exp += (s32)(hex_digits << 2);
        byte = hex[0];
        for (leading = 0; leading < 4 && !(byte & (0x80 >> leading)); ++leading) {
            --hex_exp;
        }
        shift = leading + 1;
        --hex_exp;
        if (shift) {
            hex_ptr = hex + 7;
            carry = 0;
            while (hex_ptr >= hex) {
                byte = *hex_ptr;
                carry = (u8)(carry | (byte << shift));
                *hex_ptr-- = carry;
                carry = (u8)(byte >> (8 - shift));
            }
        }
        out[0] = 0;
        out[1] = 0;
        out[2] = 0;
        out[3] = 0;
        out[4] = 0;
        out[5] = 0;
        out[6] = 0;
        out[7] = 0;
        offset = 12;
        for (bit = 0; bit < 52; bit += 8) {
            byte = hex[bit >> 3];
            if (bit + 8 > 52) {
                byte &= (u8)(0xff << (52 - bit));
            }
            out[offset >> 3] |= (u8)(byte >> (offset & 7));
            byte = (u8)(byte << (8 - (offset & 7)));
            offset += 8;
            out[offset >> 3] |= byte;
        }
        biased = (u32)exponent + 0x3ff;
        biased += (u32)hex_exp;
        if (biased & 0xfffff800u) {
            *arg4 = 1;
            return 0.0;
        }
        biased <<= 21;
        {
            u8 high = (u8)(biased >> 25);
            u8 low = (u8)(biased >> 17);
            high = (u8)(out[0] | high);
            low = (u8)(out[1] | low);
            out[1] = low;
            out[0] = high;
        }
        if (negative) out[0] |= 0x80;
        for (i = 0; i < 4; ++i) {
            byte = out[i];
            out[i] = out[7 - i];
            out[7 - i] = byte;
        }
        return *(f64 *)out;
    }
}

f64 func_02017edc(const char *str, char **endptr) {
    f64 value;
    s32 chars_scanned;
    s32 overflow;
    struct {
        const char *p;
        s32 n;
    } isc;

    isc.p = str;
    isc.n = 0;
    value = func_02016fc4(0x7fffffff, (void *)func_02016c84, &isc, &chars_scanned, &overflow);
    if (endptr != NULL) {
        *endptr = (char *)str + chars_scanned;
    }
    func_0201e014(value);
    if (overflow) {
        data_02160034 = 0x22;
    }
    return value;
}

extern f64 func_02017edc(const char *, char **);
f64 func_02017f64(const char *str) {
    return func_02017edc(str, NULL);
}
