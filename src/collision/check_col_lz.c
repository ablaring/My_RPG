/*
** EPITECH PROJECT, 2023
** check_col_lz.c
** File description:
** check_col_lz.c
*/

#include "rpg1.h"

void col_door_lz2(all_t *a, int x, int y)
{
    sfFloatRect rect3 = sfRectangleShape_getGlobalBounds(a->door3_lz);
    sfFloatRect rect4 = sfRectangleShape_getGlobalBounds(a->door_dj_lz);
    if (sfFloatRect_contains(&rect3, x, y)) {
        a->is_mlz_open = false;
        a->isinh3_lz = true;
    }
    if (sfFloatRect_contains(&rect4, x, y) && a->chest_open[2] == true) {
        a->is_mlz_open = false;
        a->isindonj_lz = true;
    }
}

void col_door_lz(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect rect = sfRectangleShape_getGlobalBounds(a->door1_lz);
    sfFloatRect rect2 = sfRectangleShape_getGlobalBounds(a->door2_lz);
    if (sfFloatRect_contains(&rect, x, y)) {
        a->isinh1_lz = true;
        a->is_mlz_open = false;
    }
    if (sfFloatRect_contains(&rect2, x, y)) {
        a->is_mlz_open = false;
        a->isinh2_lz = true;
    }
    col_door_lz2(a, x, y);
}

void check_col_lz(all_t *a)
{
    if (a->is_mlz_open == true) {
        col_door_lz(a);
        return;
    }
    if (a->isinh1_lz == true) {
        col_int1_lz(a);
        return;
    }
    if (a->isinh2_lz == true) {
        col_int2_lz(a);
        return;
    }
    if (a->isinh3_lz == true) {
        col_int3_lz(a);
        return;
    }
    if (a->isindonj_lz == true) {
        col_intdj_lz(a);
        return;
    }
}
