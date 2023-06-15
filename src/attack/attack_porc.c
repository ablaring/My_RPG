/*
** EPITECH PROJECT, 2023
** attack.c
** File description:
** attack
*/
#include "rpg1.h"

void attack_porc(all_t *a)
{
    int x = a->event.mouseButton.x;
    int y = a->event.mouseButton.y;
    sfFloatRect en_dj = sfSprite_getGlobalBounds(IMG[1].sprite);
    if (sfFloatRect_contains(&en_dj, x, y)) {
        anim_hammer1(a);
    }
}
