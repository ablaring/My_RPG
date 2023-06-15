/*
** EPITECH PROJECT, 2023
** init_door_int2.c
** File description:
** init_door_int2
*/
#include "rpg1.h"

void init_doorint_5(all_t *a)
{
    a->pos_dix[4] = 859; a->pos_diy[4] = 270;
    int sz_d5x = 23; int sz_d5y = 88;
    sfVector2f pos_d5 = {a->pos_dix[4], a->pos_diy[4]};
    sfVector2f sz_d5 = {sz_d5x, sz_d5y};
    a->door_int[4] = my_getrect(pos_d5, sz_d5, sfWhite);
}
