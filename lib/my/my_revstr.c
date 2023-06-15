/*
** EPITECH PROJECT, 2022
** Task01
** File description:
** days 07
*/

char *my_revstr(char *str)
{
    int fin = 0;
    int deb = 0;
    char trans = 0;
    while (str[fin] != '\0') {
        fin += 1;
    }
    while (deb < fin / 2) {
        trans = str[fin - deb - 1];
        str[fin - deb - 1] = str[deb];
        str[deb] = trans;
        deb = deb + 1;
    }
    return str;
}
