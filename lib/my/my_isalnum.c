/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell1-cesar.zarcone
** File description:
** my_isalnum.c
*/

int my_isalnum(int c)
{
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
    (c >= '0' && c <= '9');
}
