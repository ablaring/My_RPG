/*
** EPITECH PROJECT, 2022
** mv_h2_lz.c
** File description:
** mv_h2_lz.c
*/

#include "rpg1.h"

void h2_left_lz(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->h2_lz);
    int x = (mvp.x - map.x) / a->sc_hlz_x;
    int y = (mvp.y - map.y) / a->sc_hlz_y;
    a->col_h2_lz = sfImage_getPixel(a->h2_comp_lz, x - 8, y);
    if (comp(a->col_h2_init, a->col_h2_lz) == false) {
        a->pos_inh2.x += 2;
        sfSprite_setPosition(a->h2_lz, a->pos_inh2);
        a->pos_door_in2.x += 2;
        sfRectangleShape_setPosition(a->door_in_h2, a->pos_door_in2);
        a->pos_h2_cof_lz.x += 2;
        sfRectangleShape_setPosition(a->coffre_h2_lz, a->pos_h2_cof_lz);
    }
}

void h2_right_lz(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->h2_lz);
    int x = (mvp.x - map.x) / a->sc_hlz_x;
    int y = (mvp.y - map.y) / a->sc_hlz_y;
    a->col_h2_lz = sfImage_getPixel(a->h2_comp_lz, x + 8, y);
    if (comp(a->col_h2_init, a->col_h2_lz) == false) {
        a->pos_inh2.x -= 2;
        sfSprite_setPosition(a->h2_lz, a->pos_inh2);
        a->pos_door_in2.x -= 2;
        sfRectangleShape_setPosition(a->door_in_h2, a->pos_door_in2);
        a->pos_h2_cof_lz.x -= 2;
        sfRectangleShape_setPosition(a->coffre_h2_lz, a->pos_h2_cof_lz);
    }
}

void h2_down_lz(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->h2_lz);
    int x = (mvp.x - map.x) / a->sc_hlz_x;
    int y = (mvp.y - map.y) / a->sc_hlz_y;
    a->col_h2_lz = sfImage_getPixel(a->h2_comp_lz, x, y + 8);
    if (comp(a->col_h2_init, a->col_h2_lz) == false) {
        a->pos_inh2.y -= 2;
        sfSprite_setPosition(a->h2_lz, a->pos_inh2);
        a->pos_door_in2.y -= 2;
        sfRectangleShape_setPosition(a->door_in_h2, a->pos_door_in2);
        a->pos_h2_cof_lz.y -= 2;
        sfRectangleShape_setPosition(a->coffre_h2_lz, a->pos_h2_cof_lz);
    }
}

void h2_up_lz(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->h2_lz);
    int x = (mvp.x - map.x) / a->sc_hlz_x;
    int y = (mvp.y - map.y) / a->sc_hlz_y;
    a->col_h2_lz = sfImage_getPixel(a->h2_comp_lz, x, y - 8);
    if (comp(a->col_h2_init, a->col_h2_lz) == false) {
        a->pos_inh2.y += 2;
        sfSprite_setPosition(a->h2_lz, a->pos_inh2);
        a->pos_door_in2.y += 2;
        sfRectangleShape_setPosition(a->door_in_h2, a->pos_door_in2);
        a->pos_h2_cof_lz.y += 2;
        sfRectangleShape_setPosition(a->coffre_h2_lz, a->pos_h2_cof_lz);
    }
}
