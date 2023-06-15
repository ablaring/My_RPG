/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** miniprintf.c
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "../include/my.h"

int my_printf(const char * format, ...)
{
    va_list ap;
    va_start(ap, format);
    int count = 0;
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            cond(format, i, ap, count);
            cond3(format, i, ap, count);
            i++;
        } else {
            my_putchar(format[i]);
            count++;
        }
    }
    va_end(ap);
    return count;
}

int cond(const char * format, int i, va_list ap, int count)
{
    if (format[i + 1] == 'd' || format[i + 1] == 'i') {
        my_put_nbr(va_arg(ap, int));
        count++;
    }
    if (format[i + 1] == 's') {
        my_putstr(va_arg(ap, char*));
        count++;
    }
    if (format[i + 1] == 'c') {
        my_putchar(va_arg(ap, int));
        count++;
    }
    if (format[i + 1] == '%') {
        my_putchar('%');
        count++;
    }
    cond2(format, i, ap, count);
    return (0);
}
