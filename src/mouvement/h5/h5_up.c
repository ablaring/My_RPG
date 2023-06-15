/*
** EPITECH PROJECT, 2023
** h5_up.c
** File description:
** h5_up
*/
#include "rpg1.h"

void h5_up(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->house_lp[4]);
    int x = (mvp.x - map.x) / a->sc_house_x;
    int y = (mvp.y - map.y) / a->sc_house_y;
    a->col = sfImage_getPixel(a->im_h5, x, y - 8);
    if (comp(a->col, a->col_h5) == false) {
        a->pos_house_y[4] += 2;
        sfVector2f pos_h5 = {a->pos_house_x[4], a->pos_house_y[4]};
        sfSprite_setPosition(a->house_lp[4], pos_h5);
        a->pos_diy[4] += 2;
        sfVector2f pos_di5 = {a->pos_dix[4], a->pos_diy[4]};
        sfRectangleShape_setPosition(a->door_int[4], pos_di5);
        a->pos_coffre5_mlp.y += 2;
        sfRectangleShape_setPosition(a->coffre5_mlp, a->pos_coffre5_mlp);
    }
}
