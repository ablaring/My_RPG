/*
** EPITECH PROJECT, 2023
** anim_dead_enemy.c
** File description:
** anim_enemy_dead
*/
#include "rpg1.h"

void anim_enemy_dead(all_t *a)
{
    a->time_ed = sfClock_getElapsedTime(a->clock_ed);
    a->seconds_ed = a->time_ed.microseconds / 1000000.0;
    if (a->seconds_ed > 0.25) {
        if (a->ed_rect.left == 384 - 64) {
            a->ed_rect.left -= 384 - 64;
            a->iseddefeat = true; a->isetd = false;
        } else {
            a->ed_rect.left += 64;
        }
        sfClock_restart(a->clock_ed);
    }
    sfSprite_setTextureRect(a->enemey_dead, a->ed_rect);
}
