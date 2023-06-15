/*
** EPITECH PROJECT, 2023
** potion.c
** File description:
** desc
*/

#include "rpg1.h"

void anim_potion_chest(all_t *a)
{
    a->horl_potion.time = sfClock_getElapsedTime(a->horl_potion.clock);
    float seconds = a->horl_potion.time.microseconds / 1000000.0;
    if (seconds > 0 && seconds < 2)
        sfRenderWindow_drawSprite(a->window, a->potion[2].sprite, NULL);
    if (seconds > 2)
        sfClock_restart(a->horl_potion.clock);
}
