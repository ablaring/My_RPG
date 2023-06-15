/*
** EPITECH PROJECT, 2023
** init_house.c
** File description:
** init house lp map
*/
#include "rpg1.h"

void init_house1(all_t *a)
{
    a->pos_house_x[0] = -384; a->pos_house_y[0] = -449;
    sfVector2f pos_h1 = {a->pos_house_x[0], a->pos_house_y[0]};
    sfVector2f sc_h1 = {a->sc_house_x, a->sc_house_y};
    a->house_lp[0] = my_getsprite("asset/house_1.png", pos_h1, sc_h1);
}

void init_house2(all_t *a)
{
    a->pos_house_x[1] = 221; a->pos_house_y[1] = -161;
    sfVector2f pos_h2 = {a->pos_house_x[1], a->pos_house_y[1]};
    sfVector2f sc_h2 = {a->sc_house_x, a->sc_house_y};
    a->house_lp[1] = my_getsprite("asset/house2.png", pos_h2, sc_h2);
}

void init_house3(all_t *a)
{
    a->pos_house_x[2] = 226; a->pos_house_y[2] = -918;
    sfVector2f pos_h3 = {a->pos_house_x[2], a->pos_house_y[2]};
    sfVector2f sc_h3 = {a->sc_house_x, a->sc_house_y};
    a->house_lp[2] = my_getsprite("asset/house3.png", pos_h3, sc_h3);
}

void init_house4(all_t *a)
{
    a->pos_house_x[3] = 599; a->pos_house_y[3] = -400;
    sfVector2f pos_h4 = {a->pos_house_x[3], a->pos_house_y[3]};
    sfVector2f sc_h4 = {a->sc_house_x, a->sc_house_y};
    a->house_lp[3] = my_getsprite("asset/house4.png", pos_h4, sc_h4);
}

void init_house5(all_t *a)
{
    a->pos_house_x[4] = 600; a->pos_house_y[4] = -473;
    sfVector2f pos_h5 = {a->pos_house_x[4], a->pos_house_y[4]};
    sfVector2f sc_h5 = {a->sc_house_x, a->sc_house_y};
    a->house_lp[4] = my_getsprite("asset/house5.png", pos_h5, sc_h5);
}
