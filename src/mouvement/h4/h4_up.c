/*
** EPITECH PROJECT, 2023
** h4_up.c
** File description:
** h4_up
*/
#include "rpg1.h"

void h4_up(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->house_lp[3]);
    int x = (mvp.x - map.x) / a->sc_house_x;
    int y = (mvp.y - map.y) / a->sc_house_y;
    a->col = sfImage_getPixel(a->im_h4, x, y - 8);
    if (comp(a->col, a->col_h4) == false) {
        a->pos_house_y[3] += 2;
        sfVector2f pos_h4 = {a->pos_house_x[3], a->pos_house_y[3]};
        sfSprite_setPosition(a->house_lp[3], pos_h4);
        a->pos_diy[3] += 2;
        sfVector2f pos_di4 = {a->pos_dix[3], a->pos_diy[3]};
        sfRectangleShape_setPosition(a->door_int[3], pos_di4);
    }
}
