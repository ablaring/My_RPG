/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_put_nbr.c
*/

#include <unistd.h>

void my_putchar(char c);

static int base(int nb)
{
    if (nb == 0) {
        return 0;
    }
    base(nb / 10);
    my_putchar('0' + nb % 10);
    return 0;
}

int my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        my_putchar('-');
        write(1, "2147483648", 10);
        return 0;
    }
    if (nb < 0) {
        my_putchar('-');
        base(-nb);
        return 0;
    }
    if (nb == 0) {
        my_putchar('0');
        return 0;
    }
    base(nb);
    return 0;
}
