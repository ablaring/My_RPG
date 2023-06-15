/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_str_to_word_array.c
*/

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int linec(const char *str, char sepa)
{
    int i = 0;
    int line = 1;
    for (; str[i] != '\0' ; i++) {
        if (str[i] == sepa)
            line++;
    }
    return line;
}

int coll(const char *str, char sepa)
{
    int nb_collone = 0;
    int max_collone = 0;
    for (int i = 0; str[i]; i++) {
        nb_collone = 0;
        for (int u = i + 1; str[u] != sepa && str[u] ;u++) {
            nb_collone++;
        }
        if (nb_collone > max_collone)
            max_collone = nb_collone;
    }
    return max_collone;
}

char **malloc_tab(const char *str, char sepa)
{
    char **tab = NULL;
    int x = linec(str, sepa);
    int y = coll(str, sepa);
    tab = malloc(sizeof(char *) * (x + 1));
    if (tab == NULL)
        return NULL;
    int k = 0;
    while (k < x) {
        tab[k] = malloc(sizeof(char) * (y + 2));
        if (tab[k] == NULL)
            return NULL;
        k++;
    }
    return tab;
}

char **my_str_to_word_array(const char *str, char sepa)
{
    char **tab = malloc_tab(str, sepa);
    if (tab == NULL)
        return NULL;
    int tx = 0;
    int ty = 0;
    for (int j = 0; str[j] != '\0';j++) {
        if (str[j] == sepa) {
            tab[ty][tx] = '\0';
            ty++;
            tx = 0;
        } else {
            tab[ty][tx] = str[j];
            tx++;
        }
    }
    tab[ty][tx] = '\0';
    tab[ty + 1] = NULL;
    return (tab);
}
