/*
** EPITECH PROJECT, 2022
** Task 07
** File description:
** task07
*/

#include <unistd.h>

int my_strlen(char const *str);

int my_putstr(char const *str)
{
    return write(1, str, my_strlen(str));
}
