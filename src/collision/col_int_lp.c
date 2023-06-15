/*
** EPITECH PROJECT, 2023
** col_int_lp
** File description:
** col_int_lp
*/
#include "rpg1.h"

void col_int1(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect rect_b = sfRectangleShape_getGlobalBounds(a->door_int[0]);
    if (sfFloatRect_contains(&rect_b, x, y) && a->isinh1 == true) {
        a->isinh1 = false;
        a->is_mlp_open = true;
        sfVector2f res_pos = {-862.00, -454.00};
        sfSprite_setPosition(a->first_map, res_pos);
    }
}

void col_int2(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect rect_b = sfRectangleShape_getGlobalBounds(a->door_int[1]);
    if (sfFloatRect_contains(&rect_b, x, y)) {
        a->isinh2 = false;
        a->is_mlp_open = true;
        sfVector2f res_pos = {-1710.00, -676.00};
        sfSprite_setPosition(a->first_map, res_pos);
    }
}

void col_int3(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect rect_b = sfRectangleShape_getGlobalBounds(a->door_int[2]);
    if (sfFloatRect_contains(&rect_b, x, y)) {
        a->isinh3 = false;
        a->is_mlp_open = true;
        sfVector2f res_pos = {-164.00, -1418.00};
        sfSprite_setPosition(a->first_map, res_pos);
    }
}

void col_int4(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect rect_b = sfRectangleShape_getGlobalBounds(a->door_int[3]);
    if (sfFloatRect_contains(&rect_b, x, y)) {
        a->isinh4 = false;
        a->is_mlp_open = true;
        sfVector2f res_pos = {-2266.00, -1136.00};
        sfSprite_setPosition(a->first_map, res_pos);
    }
}

void col_int5(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect rect_b = sfRectangleShape_getGlobalBounds(a->door_int[4]);
    if (sfFloatRect_contains(&rect_b, x, y)) {
        a->isinh5 = false;
        a->is_mlp_open = true;
        sfVector2f res_pos = {-1068.00, -2414.00};
        sfSprite_setPosition(a->first_map, res_pos);
    }
}
