/*
** EPITECH PROJECT, 2022
** move_rect_lz.c
** File description:
** move_rect_lz.c
*/

#include "rpg1.h"

void move_rect_lz(all_t *a, int offset, int max_value)
{
    if (a->rect_lz.left == max_value)
        a->rect_lz.left = 0;
    else
        a->rect_lz.left += offset;
}

void move_rectmino1_lz(all_t *a, int offset, int max_value)
{
    if (a->rect_mino1_lz.left == max_value) {
        a->rect_mino1_lz.left = 0;
        a->life_actu -= 8;
    } else
        a->rect_mino1_lz.left += offset;
}

void move_rectmino2_lz(all_t *a, int offset, int max_value)
{
    if (a->rect_mino2_lz.left == max_value) {
        a->rect_mino2_lz.left = 0;
        a->life_actu -= 8;
    } else
        a->rect_mino2_lz.left += offset;
}

void move_rectmino3_lz(all_t *a, int offset, int max_value)
{
    if (a->rect_mino3_lz.left == max_value) {
        a->rect_mino3_lz.left = 0;
        a->life_actu -= 8;
        if (a->life_actu <= 0)
            a->life_actu = 0;
    } else
        a->rect_mino3_lz.left += offset;
}

void anim_boss_lz(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect rect = sfCircleShape_getGlobalBounds(a->circle_lz_boss);
    a->time_lz = sfClock_getElapsedTime(a->clock_lz);
    float second = a->time_lz.microseconds / 1000000.0;
    if (sfFloatRect_contains(&rect, x, y)) {
        if (second > a->seconds_lz) {
            move_rect_lz(a, 192, 960);
            sfClock_restart(a->clock_lz);
        }
    } else
        a->rect_lz.left = 0;
    sfSprite_setTextureRect(a->lz_boss, a->rect_lz);
}
