/*
** EPITECH PROJECT, 2023
** col_tuto.c
** File description:
** col tuto
*/
#include "rpg1.h"

void col_djt(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect rect_djt = sfRectangleShape_getGlobalBounds(a->donjt_door);
    if (sfFloatRect_contains(&rect_djt, x, y) && a->isindonjt == true) {
        a->isindonjt = false;
        a->isintuto = true;
        sfVector2f pos_tuto = {220, -718};
        sfSprite_setPosition(a->map_tuto, pos_tuto);
    }
}

void col_dt(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect rect_dt = sfRectangleShape_getGlobalBounds(a->door_tuto);
    if (sfFloatRect_contains(&rect_dt, x, y) && a->isintuto == true) {
        a->isintuto = false;
        a->isindonjt = true;
        if (a->count_text <= 5)
            a->ischatting = true;
    }
}
