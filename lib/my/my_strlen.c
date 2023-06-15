/*
** EPITECH PROJECT, 2022
** task 07
** File description:
** task07
*/

int my_strlen(char const *str)
{
    int c = 0;
    while (str[c] != '\0')
        c++;
    return c;
}
