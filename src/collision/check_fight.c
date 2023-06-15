/*
** EPITECH PROJECT, 2023
** check_fight.c
** File description:
** check_fight
*/
#include "rpg1.h"

void col_fight_tuto(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect hitbox_tuto = sfCircleShape_getGlobalBounds(a->endj_hitbox);
    if (sfFloatRect_contains(&hitbox_tuto, x, y) && a->isindonjt == true) {
        a->isfight_tuto = true;
    } else {
        a->isfight_tuto = false;
    }
}
