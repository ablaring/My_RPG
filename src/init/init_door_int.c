/*
** EPITECH PROJECT, 2023
** init_door_int.c
** File description:
** init_door_inte
*/
#include "rpg1.h"

void init_door_inte(all_t *a)
{
    a->door_int = malloc(sizeof(sfRectangleShape *) * (6 + 1));
    a->pos_dix = malloc(sizeof(int) * (6 + 1));
    a->pos_diy = malloc(sizeof(int) * (6 + 1));
    init_doorint_1(a); init_doorint_2(a); init_doorint_3(a);
    init_doorint_4(a); init_doorint_5(a);
}

void init_doorint_1(all_t *a)
{
    a->pos_dix[0] = 999; a->pos_diy[0] = 294;
    int sz_d1x = 24; int sz_d1y = 87;
    sfVector2f pos_d1 = {a->pos_dix[0], a->pos_diy[0]};
    sfVector2f sz_d1 = {sz_d1x, sz_d1y};
    a->door_int[0] = my_getrect(pos_d1, sz_d1, sfWhite);
}

void init_doorint_2(all_t *a)
{
    a->pos_dix[1] = 888; a->pos_diy[1] = 244;
    int sz_d2x = 91; int sz_d2y = 24;
    sfVector2f pos_d2 = {a->pos_dix[1], a->pos_diy[1]};
    sfVector2f sz_d2 = {sz_d2x, sz_d2y};
    a->door_int[1] = my_getrect(pos_d2, sz_d2, sfWhite);
}

void init_doorint_3(all_t *a)
{
    a->pos_dix[2] = 894; a->pos_diy[2] = 390;
    int sz_d3x = 88; int sz_d3y = 20;
    sfVector2f pos_d3 = {a->pos_dix[2], a->pos_diy[2]};
    sfVector2f sz_d3 = {sz_d3x, sz_d3y};
    a->door_int[2] = my_getrect(pos_d3, sz_d3, sfWhite);
}

void init_doorint_4(all_t *a)
{
    a->pos_dix[3] = 859; a->pos_diy[3] = 268;
    int sz_d4x = 23; int sz_d4y = 89;
    sfVector2f pos_d4 = {a->pos_dix[3], a->pos_diy[3]};
    sfVector2f sz_d4 = {sz_d4x, sz_d4y};
    a->door_int[3] = my_getrect(pos_d4, sz_d4, sfWhite);
}
