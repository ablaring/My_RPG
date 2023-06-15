/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** cond2.c
*/

#include <stdarg.h>
#include <unistd.h>
#include "../include/my.h"

int condxxx(va_list ap)
{
        int z = 0;
        char decinum[100];
        int decimalnbr = va_arg(ap, int);
        while (decimalnbr != 0) {
            int vtempo = 0;
            vtempo = decimalnbr % 16;
            if (vtempo < 10) {
                decinum[z] = vtempo + 48;
                z++;
            } else {
                decinum[z] = vtempo + 55;
                z++;
            }
            decimalnbr = decimalnbr / 16;
        }
        for (int j = z - 1; j >= 0;j--) {
            my_putchar(decinum[j]);
        }
    return 0;
}

int condxx(const char * format, int i, va_list ap)
{
    if (format[i + 1] == 'X') {
        condxxx(ap);
    }
    return 0;
}

int condx12(va_list ap)
{
    int k = 0;
    char decinum[100];
    int decimalnbr = va_arg(ap, int);
    while (decimalnbr != 0) {
        int vtempo = 0;
        vtempo = decimalnbr % 16;
        if (vtempo < 10) {
            decinum[k] = vtempo + 48;
            k++;
        } else {
            decinum[k] = vtempo + 87;
            k++;
        }
        decimalnbr = decimalnbr / 16;
    }
    for (int j = k - 1; j >= 0;j--) {
        my_putchar(decinum[j]);
    }
    return 0;
}

int condx(const char * format, int i, va_list ap)
{
    if (format[i + 1] == 'x') {
        condx12(ap);
    }
    return 0;
}

int cond2(const char * format, int i, va_list ap, int count)
{
    condo(format, i, ap, count);
    condb(format, i, ap, count);
    condxx(format, i, ap);
    condx(format, i, ap);
    condu(format, i, ap, count);
    condn(format, i, ap, count);
    return (0);
}
