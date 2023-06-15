/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_put_nbr.c
*/

#include <unistd.h>

void my_putchar(char c);

long pow_10(int pow)
{
    long r = 1;
    for (long i = 0; i < pow; i++) {
        r *= 10;
    }
    return r;
}

void my_put_float2(float in, int coma, int e)
{
    char zero = '0', negativ = '-';
    long n = (long)(in * pow_10(coma));
    if (n < 0) {
        write(1, &negativ, 1);
        n = n * -1;
    }
    long r = 1, c = 0;
    for (; (n / r) != 0; c++) {
        r = r * 10;
    }
    if (n < pow_10(coma) && e == 0)
        write(1, &zero, 1);
    for (int i = 0; i < c; i++) {
        long number = 48 + (n % r / (r / 10));
        r = r / 10;
        if (i == c - coma && e == 0)
            my_putchar('.');
        write(1, &number, 1);
    }
}

void my_put_float3(int coma, int e)
{
    char zero = '0';
    char dot = '.';
    write(1, &zero, 1);
        if (coma != 0 && e == 0) {
            write(1, &dot, 1);
            for (int i = 0; i < coma; i++)
                write(1, &zero, 1);
        }
}

int my_put_float(float in, int coma ,int e)
{
    long n = (long)(in * pow_10(coma));
    if (n == 0) {
        my_put_float3(coma, e);
    } else {
        my_put_float2(in, coma, e);
    }
    return 0;
}
