/*
** EPITECH PROJECT, 2023
** anim_attack.c
** File description:
** anim_attack
*/
#include "rpg1.h"

void anim_lvl(all_t *a)
{
    a->timing_lvl.time = sfClock_getElapsedTime(a->timing_lvl.clock);
    float seconds = a->timing_lvl.time.microseconds / 1000000.0;
    if (seconds > 0.2)
        sfRectangleShape_setFillColor(a->rectangle[5].rect, sfGreen);
    if (seconds > 0.4) {
        sfRectangleShape_setFillColor(a->rectangle[5].rect, sfBlack);
        sfClock_restart(a->timing_lvl.clock);
    }
}
