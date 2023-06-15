/*
** EPITECH PROJECT, 2023
** h3_left.c
** File description:
** h3_left
*/
#include "rpg1.h"

void h3_left(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->house_lp[2]);
    int x = (mvp.x - map.x) / a->sc_house_x;
    int y = (mvp.y - map.y) / a->sc_house_y;
    a->col = sfImage_getPixel(a->im_h3, x - 8, y);
    if (comp(a->col, a->col_h3) == false) {
        a->pos_house_x[2] += 2;
        sfVector2f pos_h3 = {a->pos_house_x[2], a->pos_house_y[2]};
        sfSprite_setPosition(a->house_lp[2], pos_h3);
        a->pos_dix[2] += 2;
        sfVector2f pos_di3 = {a->pos_dix[2], a->pos_diy[2]};
        sfRectangleShape_setPosition(a->door_int[2], pos_di3);
        a->pos_coffre3_mlp.x += 2;
        sfRectangleShape_setPosition(a->coffre3_mlp, a->pos_coffre3_mlp);
    }
}
