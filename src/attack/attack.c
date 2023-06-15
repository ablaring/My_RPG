/*
** EPITECH PROJECT, 2023
** attack.c
** File description:
** attack
*/
#include "rpg1.h"

void attack(all_t *a)
{
    int x = a->event.mouseButton.x;
    int y = a->event.mouseButton.y;
    sfFloatRect en_dj = sfSprite_getGlobalBounds(a->enemy_dj);
    if (sfFloatRect_contains(&en_dj, x, y) && a->iseddefeat == false &&
        a->isetd == false) {
        anim_hammer(a);
        if (a->nb_rect_port == 2)
            attack_boss(a);
    }
}

void attack_mino1_lz(all_t *a)
{
    int x = a->event.mouseButton.x; int y = a->event.mouseButton.y;
    sfFloatRect mino1 = sfSprite_getGlobalBounds(a->mino1_lz);
    if (sfFloatRect_contains(&mino1, x, y) && a->life_mino1_lz > 0 &&
        a->mino1_dead_lz == false) {
        anim_hammer2(a);
        if (a->nb_rect_port == 2)
            attack_boss(a);
    }
}
