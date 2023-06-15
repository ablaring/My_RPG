/*
** EPITECH PROJECT, 2022
** anim_boss_lz.c
** File description:
** anim_boss_lz.c
*/

#include "rpg1.h"

void anim_port_lz(all_t *a)
{
    a->time_port_lz = sfClock_getElapsedTime(a->clock_port_lz);
    float second = a->time_port_lz.microseconds / 1000000.0;
    if (second > 0.20) {
        if (a->rect_port_lz.left == 1000 - 250)
            a->rect_port_lz.left -= 1000 - 250;
        else
            a->rect_port_lz.left += 250;
        sfSprite_setTextureRect(a->portail_lz, a->rect_port_lz);
        sfClock_restart(a->clock_port_lz);
    }
}

void anim_port2_lz(all_t *a)
{
    a->time_port2_lz = sfClock_getElapsedTime(a->clock_port2_lz);
    float second = a->time_port2_lz.microseconds / 1000000.0;
    if (second > 0.20) {
        if (a->rect_port2_lz.left == 1000 - 250)
            a->rect_port2_lz.left -= 1000 - 250;
        else
            a->rect_port2_lz.left += 250;
        sfSprite_setTextureRect(a->portail2_lz, a->rect_port2_lz);
        sfClock_restart(a->clock_port2_lz);
    }
}

void anim_mino1_lz(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect rect = sfCircleShape_getGlobalBounds(a->circle_mino1_lz);
    a->time_mino1_lz = sfClock_getElapsedTime(a->clock_mino1_lz);
    float s = a->time_mino1_lz.microseconds / 1000000.0;
    if (sfFloatRect_contains(&rect, x, y)) {
        if (s > 0.15) {
            move_rectmino1_lz(a, 128, 640);
            sfClock_restart(a->clock_mino1_lz);
        }
    } else
        a->rect_mino1_lz.left = 0;
    sfSprite_setTextureRect(a->mino1_lz, a->rect_mino1_lz);
}

void anim_mino2_lz(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect rect = sfCircleShape_getGlobalBounds(a->circle_mino2_lz);
    a->time_mino2_lz = sfClock_getElapsedTime(a->clock_mino2_lz);
    float s = a->time_mino2_lz.microseconds / 1000000.0;
    if (sfFloatRect_contains(&rect, x, y)) {
        if (s > 0.15) {
            move_rectmino2_lz(a, 128, 640);
            sfClock_restart(a->clock_mino2_lz);
        }
    } else
        a->rect_mino2_lz.left = 0;
    sfSprite_setTextureRect(a->mino2_lz, a->rect_mino2_lz);
}

void anim_mino3_lz(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect rect = sfCircleShape_getGlobalBounds(a->circle_mino3_lz);
    a->time_mino3_lz = sfClock_getElapsedTime(a->clock_mino3_lz);
    float s = a->time_mino3_lz.microseconds / 1000000.0;
    if (sfFloatRect_contains(&rect, x, y)) {
        if (s > 0.15) {
            move_rectmino3_lz(a, 128, 640);
            sfClock_restart(a->clock_mino3_lz);
        }
    } else
        a->rect_mino3_lz.left = 0;
    sfSprite_setTextureRect(a->mino3_lz, a->rect_mino3_lz);
}
