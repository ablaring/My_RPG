/*
** EPITECH PROJECT, 2023
** anim_attack.c
** File description:
** anim_attack
*/
#include "rpg1.h"

void anim_hammer(all_t *a)
{
    a->time4 = sfClock_getElapsedTime(a->clock4);
    a->seconds4 = a->time4.microseconds / 1000000.0;
    if (a->seconds4 > 0.12) {
        if (a->ph_rect.left == 768 - 128) {
            a->ph_rect.left -= 768 - 128;
            def_damage(a);
        } else {
            a->ph_rect.left += 128;
        }
        sfClock_restart(a->clock4);
    }
    sfSprite_setTextureRect(a->perso_hammer, a->ph_rect);
}

void anim_hammer1(all_t *a)
{
    a->time9 = sfClock_getElapsedTime(a->clock9);
    a->seconds9 = a->time9.microseconds / 1000000.0;
    if (a->seconds9 > 0.12) {
        if (a->hammer_rect.left == 768 - 128) {
            a->hammer_rect.left -= 768 - 128;
            def_damage(a);
        } else {
            a->hammer_rect.left += 128;
        }
        sfClock_restart(a->clock9);
    }
    sfSprite_setTextureRect(a->pp_hammer1, a->hammer_rect);
}

void anim_hammer2(all_t *a)
{
    a->time10 = sfClock_getElapsedTime(a->clock10);
    a->seconds10 = a->time10.microseconds / 1000000.0;
    if (a->seconds10 > 0.12) {
        if (a->hammer2_rect.left == 768 - 128) {
            a->hammer2_rect.left -= 768 - 128;
            def_damage(a);
        } else {
            a->hammer2_rect.left += 128;
        }
        sfClock_restart(a->clock10);
    }
    sfSprite_setTextureRect(a->pp_hammer2, a->hammer2_rect);
}
