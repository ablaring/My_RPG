/*
** EPITECH PROJECT, 2023
** h2_left.c
** File description:
** h2_left
*/
#include "rpg1.h"

void h2_left(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->house_lp[1]);
    int x = (mvp.x - map.x) / a->sc_house_x;
    int y = (mvp.y - map.y) / a->sc_house_y;
    a->col = sfImage_getPixel(a->im_h2, x - 8, y);
    if (comp(a->col, a->col_h2) == false) {
        a->pos_house_x[1] += 2;
        sfVector2f pos_h2 = {a->pos_house_x[1], a->pos_house_y[1]};
        sfSprite_setPosition(a->house_lp[1], pos_h2);
        a->pos_dix[1] += 2;
        sfVector2f pos_di2 = {a->pos_dix[1], a->pos_diy[1]};
        sfRectangleShape_setPosition(a->door_int[1], pos_di2);
        a->pos_coffre2_mlp.x += 2;
        sfRectangleShape_setPosition(a->coffre2_mlp, a->pos_coffre2_mlp);
    }
}
