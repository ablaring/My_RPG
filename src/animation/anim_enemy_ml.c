/*
** EPITECH PROJECT, 2023
** anim_enemy_ml.c
** File description:
** anim_enemy_ml
*/
#include "rpg1.h"

void anim_enemy_ml1(all_t *a)
{
    a->time5 = sfClock_getElapsedTime(a->clock5);
    a->seconds5 = a->time5.microseconds / 1000000.0;
    if (a->seconds5 > 0.20) {
        if (a->edmlp_rect.left == 768 - 128) {
            a->edmlp_rect.left -= 768 - 128;
            def_life1(a);
        } else {
            a->edmlp_rect.left += 128;
        }
        sfClock_restart(a->clock5);
    }
    sfSprite_setTextureRect(a->edmlp[0], a->edmlp_rect);
}

void anim_enemy_ml2(all_t *a)
{
    a->time6 = sfClock_getElapsedTime(a->clock6);
    a->seconds6 = a->time6.microseconds / 1000000.0;
    if (a->seconds6 > 0.20) {
        if (a->edmlp_rect.left == 768 - 128) {
            a->edmlp_rect.left -= 768 - 128;
            def_life2(a);
        } else {
            a->edmlp_rect.left += 128;
        }
        sfClock_restart(a->clock6);
    }
    sfSprite_setTextureRect(a->edmlp[1], a->edmlp_rect);
}

void anim_enemy_ml3(all_t *a)
{
    a->time7 = sfClock_getElapsedTime(a->clock7);
    a->seconds7 = a->time7.microseconds / 1000000.0;
    if (a->seconds7 > 0.20) {
        if (a->edmlp_rect.left == 768 - 128) {
            a->edmlp_rect.left -= 768 - 128;
            def_life3(a);
        } else {
            a->edmlp_rect.left += 128;
        }
        sfClock_restart(a->clock7);
    }
    sfSprite_setTextureRect(a->edmlp[2], a->edmlp_rect);
}

void anim_enemy_ml4(all_t *a)
{
    a->time8 = sfClock_getElapsedTime(a->clock8);
    a->seconds8 = a->time8.microseconds / 1000000.0;
    if (a->seconds8 > 0.20) {
        if (a->edmlp_rect.left == 768 - 128) {
            a->edmlp_rect.left -= 768 - 128;
            def_life4(a);
        } else {
            a->edmlp_rect.left += 128;
        }
        sfClock_restart(a->clock8);
    }
    sfSprite_setTextureRect(a->edmlp[3], a->edmlp_rect);
}
