/*
** EPITECH PROJECT, 2022
** minishell1
** File description:
** my_strdup.c
*/

#include <stdlib.h>

int my_strlentille(char const *str)
{
    int c = 0;
    while (str[c] != '\0')
        c++;
    return c;
}

char *my_strcopiage(char * dest ,char const * src)
{
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}

char *my_strdup(const char *src)
{
    int length = my_strlentille(src) + 1;
    char *dest = malloc(length);
    if (dest == NULL) {
        return NULL;
    }
    my_strcopiage(dest, src);
    return dest;
}
