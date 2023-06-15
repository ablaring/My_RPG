/*
** EPITECH PROJECT, 2022
** mv_dj_lz.c
** File description:
** mv_dj_lz.c
*/

#include "rpg1.h"

void dj_left_lz(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->dj_lz);
    int x = (mvp.x - map.x) / a->sc_hlz_x;
    int y = (mvp.y - map.y) / a->sc_hlz_y;
    a->col_dj_lz = sfImage_getPixel(a->donj_comp_lz, x - 8, y);
    if (comp(a->col_lz, a->col_dj_lz) == false) {
        a->pos_indj_lz.x += 2;
        sfSprite_setPosition(a->dj_lz, a->pos_indj_lz);
        a->pos_boss_lz.x += 2;
        sfSprite_setPosition(a->lz_boss, a->pos_boss_lz);
        a->pos_door_indj_lz.x += 2;
        sfRectangleShape_setPosition(a->door_indj_lz, a->pos_door_indj_lz);
        a->pos_circle_lz.x += 2;
        sfCircleShape_setPosition(a->circle_lz_boss, a->pos_circle_lz);
        a->pos_dj_cof_lz.x += 2;
        sfRectangleShape_setPosition(a->coffre_dj_lz, a->pos_dj_cof_lz);
    }
}

void dj_right_lz(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->dj_lz);
    int x = (mvp.x - map.x) / a->sc_hlz_x;
    int y = (mvp.y - map.y) / a->sc_hlz_y;
    a->col_dj_lz = sfImage_getPixel(a->donj_comp_lz, x + 8, y);
    if (comp(a->col_lz, a->col_dj_lz) == false) {
        a->pos_indj_lz.x -= 2;
        sfSprite_setPosition(a->dj_lz, a->pos_indj_lz);
        a->pos_boss_lz.x -= 2;
        sfSprite_setPosition(a->lz_boss, a->pos_boss_lz);
        a->pos_door_indj_lz.x -= 2;
        sfRectangleShape_setPosition(a->door_indj_lz, a->pos_door_indj_lz);
        a->pos_circle_lz.x -= 2;
        sfCircleShape_setPosition(a->circle_lz_boss, a->pos_circle_lz);
        a->pos_dj_cof_lz.x -= 2;
        sfRectangleShape_setPosition(a->coffre_dj_lz, a->pos_dj_cof_lz);
    }
}

void dj_down_lz(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->dj_lz);
    int x = (mvp.x - map.x) / a->sc_hlz_x;
    int y = (mvp.y - map.y) / a->sc_hlz_y;
    a->col_dj_lz = sfImage_getPixel(a->donj_comp_lz, x, y + 8);
    if (comp(a->col_lz, a->col_dj_lz) == false) {
        a->pos_indj_lz.y -= 2;
        sfSprite_setPosition(a->dj_lz, a->pos_indj_lz);
        a->pos_boss_lz.y -= 2;
        sfSprite_setPosition(a->lz_boss, a->pos_boss_lz);
        a->pos_door_indj_lz.y -= 2;
        sfRectangleShape_setPosition(a->door_indj_lz, a->pos_door_indj_lz);
        sfCircleShape_setPosition(a->circle_lz_boss, a->pos_boss_lz);
        a->pos_circle_lz.y -= 2;
        sfCircleShape_setPosition(a->circle_lz_boss, a->pos_circle_lz);
        a->pos_dj_cof_lz.y -= 2;
        sfRectangleShape_setPosition(a->coffre_dj_lz, a->pos_dj_cof_lz);
    }
}

void dj_up_lz(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->dj_lz);
    int x = (mvp.x - map.x) / a->sc_hlz_x;
    int y = (mvp.y - map.y) / a->sc_hlz_y;
    a->col_dj_lz = sfImage_getPixel(a->donj_comp_lz, x, y - 8);
    if (comp(a->col_lz, a->col_dj_lz) == false) {
        a->pos_indj_lz.y += 2;
        sfSprite_setPosition(a->dj_lz, a->pos_indj_lz);
        a->pos_boss_lz.y += 2;
        sfSprite_setPosition(a->lz_boss, a->pos_boss_lz);
        a->pos_door_indj_lz.y += 2;
        sfRectangleShape_setPosition(a->door_indj_lz, a->pos_door_indj_lz);
        a->pos_circle_lz.y += 2;
        sfCircleShape_setPosition(a->circle_lz_boss, a->pos_circle_lz);
        a->pos_dj_cof_lz.y += 2;
        sfRectangleShape_setPosition(a->coffre_dj_lz, a->pos_dj_cof_lz);
    }
}
