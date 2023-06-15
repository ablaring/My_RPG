/*
** EPITECH PROJECT, 2022
** Task 01
** File description:
** day 07
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlens(char const *str)
{
    int i = 0;
    if (str == NULL) {
        return 0;
    }
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

char *my_strcat(char *dest, char const *src)
{
    int dest_len = my_strlens(dest);
    int src_len = my_strlens(src);

    char *str = malloc(sizeof(char) * (dest_len + src_len + 1));
    if (str == NULL) {
        return NULL;
    }

    int in = 0;
    for (int i = 0; i < dest_len; i++, in++) {
        str[in] = dest[i];
    }
    for (int i = 0; i < src_len; i++, in++) {
        str[in] = src[i];
    }
    str[in] = '\0';
    return str;
}
