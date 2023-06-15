/*
** EPITECH PROJECT, 2023
** col_door_lp.c
** File description:
** col_door_lp.c
*/
#include "rpg1.h"

void col_door2(all_t *a, int x, int y)
{
    sfFloatRect rect_b4 = sfRectangleShape_getGlobalBounds(a->door[5]);
    sfFloatRect rect_b5 = sfRectangleShape_getGlobalBounds(a->door[6]);
    if (sfFloatRect_contains(&rect_b4, x, y)) {
        a->is_mlp_open = false; a->isinh5 = true;
    }
    if (sfFloatRect_contains(&rect_b5, x, y)) {
        a->is_mlp_open = false; a->isinh4 = true;
    }
}

void col_door1(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect rect_b = sfRectangleShape_getGlobalBounds(a->door[0]);
    sfFloatRect rect_b1 = sfRectangleShape_getGlobalBounds(a->door[1]);
    sfFloatRect rect_b2 = sfRectangleShape_getGlobalBounds(a->door[2]);
    if (sfFloatRect_contains(&rect_b, x, y) && a->is_mlp_open == true) {
        a->isinh1 = true; a->is_mlp_open = false;
    }
    if (sfFloatRect_contains(&rect_b1, x, y)) {
        a->is_mlp_open = false; a->isinh2 = true;
    }
    if (sfFloatRect_contains(&rect_b2, x, y)) {
        a->is_mlp_open = false; a->isinh3 = true;
    }
    col_door2(a, x, y);
}
