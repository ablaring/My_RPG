/*
** EPITECH PROJECT, 2023
** col_donjon.c
** File description:
** col_donjon
*/
#include "rpg1.h"

void col_donjon_int1(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect stdu_rect = sfRectangleShape_getGlobalBounds(a->stare_up);
    if (sfFloatRect_contains(&stdu_rect, x, y) && a->isindjtop == true) {
        a->isindjtop = false; a->isindjml = true;
    }
}

void col_donjon_int(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect std_rect = sfRectangleShape_getGlobalBounds(a->stare_down);
    sfFloatRect door_rect = sfRectangleShape_getGlobalBounds(a->door_dj);
    if (sfFloatRect_contains(&std_rect, x, y) && a->isindjml == true) {
        a->isindjml = false; a->isindjtop = true;
    }
    if (sfFloatRect_contains(&door_rect, x, y) && a->isindjml == true) {
        a->isindjml = false; a->is_mlp_open = true;
    }
}

void col_donjon_mlp(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect dj_rect = sfRectangleShape_getGlobalBounds(a->door[3]);
    if (sfFloatRect_contains(&dj_rect, x, y) && a->is_mlp_open == true) {
        a->is_mlp_open = false; a->isindjml = true;
    }
}
