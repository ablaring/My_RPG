/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** condee.c
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

int flag_e2(double arg2, int arg, int i, int k)
{
    int arg3 = arg % (i / 10);
    my_put_nbr(arg3);
    my_put_float(arg2,3,1);
    my_putchar('e');
    my_putchar('+');
    if (k < 10) {
        my_put_nbr(0);
    }
    my_put_nbr(k);
    return 0;
}

int flag_e(va_list ap, int count)
{
    double ar = va_arg(ap, double);
    int arg = ar / 1;
    int arg3 = 0;
    int j = 0, i = 10, k = 0;
    double arg2 = (double)  ar - arg;
    for (; arg > 10; j++) {
        arg = arg / i;
        count++;
    }
    k = j;
    my_printf("%i", arg);
    my_putchar('.');
    arg = ar / 1;
    for (; arg3 != arg; j++) {
        i *= 10;
        arg3 = arg % i;
    }
    flag_e2(arg2, arg, i, k);
    return 0;
}

int cond3(const char * format, int i, va_list ap, int count)
{
    if (format[i + 1] == 'f') {
        double arg = va_arg(ap, double);
        my_put_float(arg, 6, 0);
        count++;
    }
    if (format[i + 1] == 'e') {
        flag_e(ap, count);
    }
    return (0);
}
