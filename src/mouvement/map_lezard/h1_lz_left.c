/*
** EPITECH PROJECT, 2022
** h1_lz_left.c
** File description:
** h1_lz_left.c
*/

#include "rpg1.h"

void h1_left_lz(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->h1_lz);
    int x = (mvp.x - map.x) / a->sc_hlz_x;
    int y = (mvp.y - map.y) / a->sc_hlz_y;
    a->col_h1_lz = sfImage_getPixel(a->h1_comp_lz, x - 8, y);
    if (comp(a->col_lz, a->col_h1_lz) == false) {
        a->pos_inh1.x += 2;
        sfSprite_setPosition(a->h1_lz, a->pos_inh1);
        a->pos_door_in1.x += 2;
        sfRectangleShape_setPosition(a->door_in_h1, a->pos_door_in1);
    }
}

void h1_right_lz(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->h1_lz);
    int x = (mvp.x - map.x) / a->sc_hlz_x;
    int y = (mvp.y - map.y) / a->sc_hlz_y;
    a->col_h1_lz = sfImage_getPixel(a->h1_comp_lz, x + 8, y);
    if (comp(a->col_lz, a->col_h1_lz) == false) {
        a->pos_inh1.x -= 2;
        sfSprite_setPosition(a->h1_lz, a->pos_inh1);
        a->pos_door_in1.x -= 2;
        sfRectangleShape_setPosition(a->door_in_h1, a->pos_door_in1);
    }
}

void h1_down_lz(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->h1_lz);
    int x = (mvp.x - map.x) / a->sc_hlz_x;
    int y = (mvp.y - map.y) / a->sc_hlz_y;
    a->col_h1_lz = sfImage_getPixel(a->h1_comp_lz, x, y + 8);
    if (comp(a->col_lz, a->col_h1_lz) == false) {
        a->pos_inh1.y -= 2;
        sfSprite_setPosition(a->h1_lz, a->pos_inh1);
        a->pos_door_in1.y -= 2;
        sfRectangleShape_setPosition(a->door_in_h1, a->pos_door_in1);
    }
}

void h1_up_lz(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->h1_lz);
    int x = (mvp.x - map.x) / a->sc_hlz_x;
    int y = (mvp.y - map.y) / a->sc_hlz_y;
    a->col_h1_lz = sfImage_getPixel(a->h1_comp_lz, x, y - 8);
    if (comp(a->col_lz, a->col_h1_lz) == false) {
        a->pos_inh1.y += 2;
        sfSprite_setPosition(a->h1_lz, a->pos_inh1);
        a->pos_door_in1.y += 2;
        sfRectangleShape_setPosition(a->door_in_h1, a->pos_door_in1);
    }
}
