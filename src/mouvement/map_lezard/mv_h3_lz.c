/*
** EPITECH PROJECT, 2022
** mv_h3_lz.c
** File description:
** mv_h3_lz.c
*/

#include "rpg1.h"

void h3_left_lz(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->h3_lz);
    int x = (mvp.x - map.x) / a->sc_hlz_x;
    int y = (mvp.y - map.y) / a->sc_hlz_y;
    a->col_h3_lz = sfImage_getPixel(a->h3_comp_lz, x - 8, y);
    if (comp(a->col_lz, a->col_h3_lz) == false) {
        a->pos_inh3.x += 2;
        sfSprite_setPosition(a->h3_lz, a->pos_inh3);
        a->pos_door_in3.x += 2;
        sfRectangleShape_setPosition(a->door_in_h3, a->pos_door_in3);
        a->pos_h3_cof_lz.x += 2;
        sfRectangleShape_setPosition(a->coffre_h3_lz, a->pos_h3_cof_lz);
    }
}

void h3_right_lz(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->h3_lz);
    int x = (mvp.x - map.x) / a->sc_hlz_x;
    int y = (mvp.y - map.y) / a->sc_hlz_y;
    a->col_h3_lz = sfImage_getPixel(a->h3_comp_lz, x + 8, y);
    if (comp(a->col_lz, a->col_h3_lz) == false) {
        a->pos_inh3.x -= 2;
        sfSprite_setPosition(a->h3_lz, a->pos_inh3);
        a->pos_door_in3.x -= 2;
        sfRectangleShape_setPosition(a->door_in_h3, a->pos_door_in3);
        a->pos_h3_cof_lz.x -= 2;
        sfRectangleShape_setPosition(a->coffre_h3_lz, a->pos_h3_cof_lz);
    }
}

void h3_down_lz(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->h3_lz);
    int x = (mvp.x - map.x) / a->sc_hlz_x;
    int y = (mvp.y - map.y) / a->sc_hlz_y;
    a->col_h3_lz = sfImage_getPixel(a->h3_comp_lz, x, y + 8);
    if (comp(a->col_lz, a->col_h3_lz) == false) {
        a->pos_inh3.y -= 2;
        sfSprite_setPosition(a->h3_lz, a->pos_inh3);
        a->pos_door_in3.y -= 2;
        sfRectangleShape_setPosition(a->door_in_h3, a->pos_door_in3);
        a->pos_h3_cof_lz.y -= 2;
        sfRectangleShape_setPosition(a->coffre_h3_lz, a->pos_h3_cof_lz);
    }
}

void h3_up_lz(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->h3_lz);
    int x = (mvp.x - map.x) / a->sc_hlz_x;
    int y = (mvp.y - map.y) / a->sc_hlz_y;
    a->col_h3_lz = sfImage_getPixel(a->h3_comp_lz, x, y - 8);
    if (comp(a->col_lz, a->col_h3_lz) == false) {
        a->pos_inh3.y += 2;
        sfSprite_setPosition(a->h3_lz, a->pos_inh3);
        a->pos_door_in3.y += 2;
        sfRectangleShape_setPosition(a->door_in_h3, a->pos_door_in3);
        a->pos_h3_cof_lz.y += 2;
        sfRectangleShape_setPosition(a->coffre_h3_lz, a->pos_h3_cof_lz);
    }
}
