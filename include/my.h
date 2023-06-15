/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my.h
*/

#include <stdarg.h>

#ifndef MY_H
    #define MY_H

int power(int pow);
int int_at(int index, char *str);
int str_int(char *str, int size, int moins);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
void my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_put_float(float in, int coma ,int e);
int condo(const char * format, int i, va_list ap, int count);
int condb(const char * format, int i, va_list ap, int count);
int condxx(const char * format, int i, va_list ap);
int condx(const char * format, int i, va_list ap);
int condu(const char * format, int i, va_list ap, int count);
int condn(const char * format, int i, va_list ap, int count);
int cond3(const char * format, int i, va_list ap, int count);
int cond2(const char * format, int i, va_list ap, int count);
int flag_e2(double arg2, int arg, int i, int k);
int flag_e(va_list ap, int count);
int cond3(const char * format, int i, va_list ap, int count);
int cond(const char * format, int i, va_list ap, int count);
int my_printf(const char * format, ...);
char **my_str_to_word_array(char const *str, char sepa);
char *my_strdup(const char *src);
int my_isalnum(int c);
int isalpha(int c);
int my_str_isalnum(char *const str);

#endif
