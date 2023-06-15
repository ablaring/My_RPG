/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell1-cesar.zarcone
** File description:
** my_str_isalnum.c
*/

int my_str_isalnum(char *const str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') ||
        (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')))
            return 0;
    }
    return 1;
}
