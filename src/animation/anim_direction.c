/*
** EPITECH PROJECT, 2023
** anim_direction.c
** File description:
** desc
*/

#include "rpg1.h"

void moove_rect(all_t *a)
{
    a->time = sfClock_getElapsedTime(a->clock);
    a->seconds = a->time.microseconds / 1000000.0;
    if (a->seconds > 0.09) {
        if (a->rect.left == 576 - 64) {
            a->rect.left -= 576 - 64;
        } else {
            a->rect.left += 64;
        }
        sfClock_restart(a->clock);
    }
}

void moove_port(all_t *a)
{
    a->time2 = sfClock_getElapsedTime(a->clock2);
    a->seconds2 = a->time2.microseconds / 1000000.0;
    if (a->seconds2 > 0.20) {
        if (a->rect2.left == 1000 - 250) {
            a->rect2.left -= 1000 - 250;
        } else {
            a->rect2.left += 250;
        }
        sfClock_restart(a->clock2);
    }
}

void moove_port_tuto(all_t *a)
{
    a->time_tuto = sfClock_getElapsedTime(a->clock_tuto);
    a->seconds_tuto = a->time_tuto.microseconds / 1000000.0;
    if (a->seconds_tuto > 0.20) {
        if (a->pt_rect.left == 1000 - 250) {
            a->pt_rect.left -= 1000 - 250;
        } else {
            a->pt_rect.left += 250;
        }
        sfClock_restart(a->clock_tuto);
    }
    sfSprite_setTextureRect(a->portail_tuto, a->pt_rect);
}
