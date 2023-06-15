/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** cond.c
*/

#include <stdarg.h>
#include <unistd.h>
#include "../include/my.h"

int condo(const char * format, int i, va_list ap, int count)
{
    if (format[i + 1] == 'o') {
        int octalnbr = 0;
        int k = 1;
        int decimalnbr = va_arg(ap, int);
        while (decimalnbr != 0) {
            octalnbr += (decimalnbr % 8) * k;
            decimalnbr = decimalnbr / 8;
            k *= 10;
        }
    my_put_nbr(octalnbr);
    }
    count++;
    return 0;
}

int condb(const char * format, int i, va_list ap, int count)
{
    if (format[i + 1] == 'b') {
        int binarynbr = 0;
        int k = 1;
        int decimalnbr = va_arg(ap, int);
        while (decimalnbr != 0) {
            binarynbr = (decimalnbr % 2) * k;
            decimalnbr = decimalnbr / 2;
            k *= 10;
        }
        my_put_nbr(binarynbr);
    }
    count++;
    return 0;
}

int condu(const char * format, int i, va_list ap, int count)
{
    if (format[i + 1] == 'u') {
        unsigned int decimallnbr = va_arg(ap, int);
        if (decimallnbr <= 0) {
            my_put_nbr(decimallnbr + 4294967296);
        } else {
            my_put_nbr(decimallnbr / 10);
        }
        my_putchar('0' + decimallnbr % 10);
    }
    count++;
    return 0;
}

int condn(const char * format, int i, va_list ap, int count)
{
    if (format[i + 1] == 'n') {
        int count = 0;
        int *var;
        for (int z = 0;format[z] != '%';z++)
            count++;
        var = va_arg(ap, int *);
        *var = count;
    }
    count++;
    return 0;
}
