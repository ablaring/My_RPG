/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell1-cesar.zarcone
** File description:
** my_isalpha.c
*/

int isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
