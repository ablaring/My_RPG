/*
** EPITECH PROJECT, 2023
** bot.c
** File description:
** desc
*/

#include "rpg1.h"

void anim_time_right(all_t *a, int top, int nb_img)
{
    CLOCK.time = sfClock_getElapsedTime(CLOCK.clock);
    float seconds = CLOCK.time.microseconds / 1000000.0;
    if (seconds > 0 && seconds < 0.5) {
        IMG[nb_img].rect = (sfIntRect){190, top, 60, 70};
        sfSprite_setTextureRect(IMG[nb_img].sprite, IMG[nb_img].rect);
    }
    if (seconds > 0.5 && seconds < 1) {
        IMG[nb_img].rect = (sfIntRect){250, top, 60, 70};
        sfSprite_setTextureRect(IMG[nb_img].sprite, IMG[nb_img].rect);
    }
    if (seconds > 1 && seconds < 1.5) {
        IMG[nb_img].rect = (sfIntRect){310, top, 60, 70};
        sfSprite_setTextureRect(IMG[nb_img].sprite, IMG[nb_img].rect);
    }
    if (seconds > 1.5 && seconds < 2) {
        IMG[nb_img].rect = (sfIntRect){370, top, 60, 70};
        sfSprite_setTextureRect(IMG[nb_img].sprite, IMG[nb_img].rect);
    }
    if (seconds > 2)
        sfClock_restart(CLOCK.clock);
}

void move_rect_porc(all_t *a, int offset, int max_value, int nb_img)
{
    if (IMG[nb_img].rect.left >= max_value)
        IMG[nb_img].rect = (sfIntRect){250, 1800, 60, 70};
    else
        IMG[nb_img].rect.left += offset;
}

void anim_boss_porc(all_t *a, int nb_img)
{
    CLOCK.time = sfClock_getElapsedTime(CLOCK.clock);
    float second = CLOCK.time.microseconds / 1000000.0;
    if (second >= 0.15) {
        move_rect_porc(a, 192, 960, 1);
        sfSprite_setTextureRect(IMG[nb_img].sprite, IMG[nb_img].rect);
        sfClock_restart(CLOCK.clock);
    }
}
