/*
** EPITECH PROJECT, 2023
** anim_enemy.c
** File description:
** anim_enemy
*/
#include "rpg1.h"

void def_life(all_t *a)
{
    if (a->iseddefeat == false && a->isetd == false)
        a->life_actu -= 8;
}

void anim_enemy_donj(all_t *a)
{
    a->time3 = sfClock_getElapsedTime(a->clock3);
    a->seconds3 = a->time3.microseconds / 1000000.0;
    if (a->seconds3 > 0.15) {
        if (a->dj_rect.left == 768 - 128) {
            a->dj_rect.left -= 768 - 128;
            def_life(a);
        } else {
            a->dj_rect.left += 128;
        }
        sfClock_restart(a->clock3);
    }
    sfSprite_setTextureRect(a->enemy_dj, a->dj_rect);
}
