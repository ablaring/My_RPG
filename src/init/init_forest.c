/*
** EPITECH PROJECT, 2023
** init_forest.c
** File description:
** init_forest
*/
#include "rpg1.h"

void init_forest1(all_t *a)
{
    a->pos_x_foret[4] = 600; a->pos_y_foret[4] = 1500;
    sfVector2f sc_foret4 = {3, 3};
    sfVector2f pos_foret4 = {a->pos_x_foret[4], a->pos_y_foret[4]};
    a->foret[4] = my_getsprite("asset/foret.png", pos_foret4, sc_foret4);
    a->pos_x_foret[5] = 2100; a->pos_y_foret[5] = 1500;
    sfVector2f sc_foret5 = {3, 3};
    sfVector2f pos_foret5 = {a->pos_x_foret[5], a->pos_y_foret[5]};
    a->foret[5] = my_getsprite("asset/foret.png", pos_foret5, sc_foret5);
    a->pos_x_foret[6] = -900; a->pos_y_foret[6] = 0;
    sfVector2f sc_foret6 = {3, 3};
    sfVector2f pos_foret6 = {a->pos_x_foret[6], a->pos_y_foret[6]};
    a->foret[6] = my_getsprite("asset/foret.png", pos_foret6, sc_foret6);
    a->pos_x_foret[7] = 2100; a->pos_y_foret[7] = 0;
    sfVector2f sc_foret7 = {3, 3};
    sfVector2f pos_foret7 = {a->pos_x_foret[7], a->pos_y_foret[7]};
    a->foret[7] = my_getsprite("asset/foret.png", pos_foret7, sc_foret7);
}

void init_forest(all_t *a)
{
    a->foret = malloc(sizeof(sfSprite *) * (8 + 1));
    a->pos_x_foret = malloc(sizeof(int) * (8 + 1));
    a->pos_y_foret = malloc(sizeof(int) * (8 + 1));
    a->pos_x_foret[0] = -900; a->pos_y_foret[0] = -1500;
    sfVector2f sc_foret0 = {3, 3};
    sfVector2f pos_foret0 = {a->pos_x_foret[0], a->pos_y_foret[0]};
    a->foret[0] = my_getsprite("asset/foret.png", pos_foret0, sc_foret0);
    a->pos_x_foret[1] = 600; a->pos_y_foret[1] = -1500;
    sfVector2f sc_foret1 = {3, 3};
    sfVector2f pos_foret1 = {a->pos_x_foret[1], a->pos_y_foret[1]};
    a->foret[1] = my_getsprite("asset/foret.png", pos_foret1, sc_foret1);
    a->pos_x_foret[2] = 2100; a->pos_y_foret[2] = -1500;
    sfVector2f sc_foret2 = {3, 3};
    sfVector2f pos_foret2 = {a->pos_x_foret[2], a->pos_y_foret[2]};
    a->foret[2] = my_getsprite("asset/foret.png", pos_foret2, sc_foret2);
    a->pos_x_foret[3] = -900; a->pos_y_foret[3] = 1500;
    sfVector2f sc_foret3 = {3, 3};
    sfVector2f pos_foret3 = {a->pos_x_foret[3], a->pos_y_foret[3]};
    a->foret[3] = my_getsprite("asset/foret.png", pos_foret3, sc_foret3);
    init_forest1(a);
}
