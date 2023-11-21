#include "../inc/libmx.h"

void mx_print_unicode(wchar_t character) {
    char unicode_str[5] = {0};

    const wchar_t U_80 = 0x80;
    const wchar_t U_800 = 0x0800;
    const wchar_t U_10000 = 0x010000;
    const wchar_t U_110000 = 0x110000;

    if (character < U_80) {
        unicode_str[0] = ((character >> 0) & 0x7F) | 0x00;
    } else if (character < U_800) {
        unicode_str[0] = ((character >> 6) & 0x1F) | 0xC0;
        unicode_str[1] = ((character >> 0) & 0x3F) | 0x80;
    } else if (character < U_10000) {
        unicode_str[0] = ((character >> 12) & 0x0F) | 0xE0;
        unicode_str[1] = ((character >> 6 ) & 0x3F) | 0x80;
        unicode_str[2] = ((character >> 0 ) & 0x3F) | 0x80;
    } else if (character < U_110000) {
        unicode_str[0] = ((character >> 18) & 0x07) | 0xF0;
        unicode_str[1] = ((character >> 12) & 0x3F) | 0x80;
        unicode_str[2] = ((character >> 6 ) & 0x3F) | 0x80;
        unicode_str[3] = ((character >> 0 ) & 0x3F) | 0x80;
    }

    write(1, unicode_str, 5);
}

	
