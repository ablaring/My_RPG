/*
** EPITECH PROJECT, 2023
** col_int_lz.c
** File description:
** col_int_lz.c
*/

#include "rpg1.h"

void col_int1_lz(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect rect = sfRectangleShape_getGlobalBounds(a->door_in_h1);
    if (sfFloatRect_contains(&rect, x, y) && a->isinh1_lz == true) {
        a->isinh1_lz = false;
        a->is_mlz_open = true;
    }
}

void col_int2_lz(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect rect = sfRectangleShape_getGlobalBounds(a->door_in_h2);
    if (sfFloatRect_contains(&rect, x, y) && a->isinh2_lz == true) {
        a->isinh2_lz = false;
        a->is_mlz_open = true;
    }
}

void col_int3_lz(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect rect = sfRectangleShape_getGlobalBounds(a->door_in_h3);
    if (sfFloatRect_contains(&rect, x, y) && a->isinh3_lz == true) {
        a->isinh3_lz = false;
        a->is_mlz_open = true;
    }
}

void col_intdj_lz(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect rect = sfRectangleShape_getGlobalBounds(a->door_indj_lz);
    if (sfFloatRect_contains(&rect, x, y) && a->isindonj_lz == true) {
        a->isindonj_lz = false;
        a->is_mlz_open = true;
    }
}
