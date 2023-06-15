/*
** EPITECH PROJECT, 2023
** h1_right.c
** File description:
** h1_right
*/
#include "rpg1.h"

void h1_right(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->house_lp[0]);
    int x = (mvp.x - map.x) / a->sc_house_x;
    int y = (mvp.y - map.y) / a->sc_house_y;
    a->col = sfImage_getPixel(a->im_h1, x + 8, y);
    if (comp(a->col, a->col_h1) == false) {
        a->pos_house_x[0] -= 2;
        sfVector2f pos_h1 = {a->pos_house_x[0], a->pos_house_y[0]};
        sfSprite_setPosition(a->house_lp[0], pos_h1);
        a->pos_dix[0] -= 2;
        sfVector2f pos_di1 = {a->pos_dix[0], a->pos_diy[0]};
        sfRectangleShape_setPosition(a->door_int[0], pos_di1);
        a->pos_coffre1_mlp.x -= 2;
        sfRectangleShape_setPosition(a->coffre1_mlp, a->pos_coffre1_mlp);
    }
}
