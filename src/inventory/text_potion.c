/*
** EPITECH PROJECT, 2023
** text_potion.c
** File description:
** desc
*/

#include "rpg1.h"

void init_text(all_t *a)
{
    a->font = sfFont_createFromFile("asset/Baxoe.ttf");
    a->text = sfText_create();
    a->text_lvl1 = sfText_create();
    a->text_lvl2 = sfText_create();
    sfText_setFont(a->text_lvl1, a->font);
    sfText_setFont(a->text_lvl2, a->font);
    sfText_setFont(a->text, a->font);
    sfText_setCharacterSize(a->text, 45);
    sfText_setCharacterSize(a->text_lvl2, 45);
    sfText_setCharacterSize(a->text_lvl1, 45);
    sfText_setColor(a->text_lvl2, sfWhite);
    sfText_setColor(a->text_lvl1, sfWhite);
    sfText_setColor(a->text, sfWhite);
    sfText_setPosition(a->text_lvl2, (sfVector2f){1190, 15});
    sfText_setPosition(a->text_lvl1, (sfVector2f){715, 15});
    sfText_setPosition(a->text, (sfVector2f){1878, 110});
}

int int_str_length(int value)
{
    int length = 0;
    bool is_negative = value < 0;
    if (is_negative) {
        value = -value;
        length++;
    }
    do {
        length++;
        value /= 10;
    } while (value > 0);
    return length;
}

char *int_to_str(int value)
{
    int length = int_str_length(value);
    char *str = (char *)malloc((length + 1) * sizeof(char));
    if (str == NULL) {
        return NULL;
    }
    int index = length - 1;
    int is_negative = value < 0;
    if (is_negative) {
        value = -value;
    }
    do {
        str[index--] = '0' + (value % 10);
        value /= 10;
    } while (value > 0);

    if (is_negative) {
        str[index] = '-';
    }
    str[length] = '\0';
    return str;
}

void set_int_to_text(sfText *text, int value)
{
    char *buffer = int_to_str(value);
    if (buffer == NULL) {
        return;
    }
    sfText_setString(text, buffer);
    free(buffer);
}
