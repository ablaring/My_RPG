/*
** EPITECH PROJECT, 2023
** init_door2
** File description:
** init door2
*/
#include "rpg1.h"

void init_door5(all_t *a)
{
    a->pos_dx[4] = -467; a->pos_dy[4] = 2548;
    int sz_d5x = 17; int sz_d5y = 108;
    sfVector2f pos_d5 = {a->pos_dx[4], a->pos_dy[4]};
    sfVector2f sz_d5 = {sz_d5x, sz_d5y};
    a->door[4] = my_getrect(pos_d5, sz_d5, sfWhite);
}

void init_door6(all_t *a)
{
    a->pos_dx[5] = 953; a->pos_dy[5] = 2650;
    int sz_d6x = 17; int sz_d6y = 108;
    sfVector2f pos_d6 = {a->pos_dx[5], a->pos_dy[5]};
    sfVector2f sz_d6 = {sz_d6x, sz_d6y};
    a->door[5] = my_getrect(pos_d6, sz_d6, sfWhite);
}

void init_door7(all_t *a)
{
    a->pos_dx[6] = 2153; a->pos_dy[6] = 1351;
    int sz_d7x = 17; int sz_d7y = 108;
    sfVector2f pos_d7 = {a->pos_dx[6], a->pos_dy[6]};
    sfVector2f sz_d7 = {sz_d7x, sz_d7y};
    a->door[6] = my_getrect(pos_d7, sz_d7, sfWhite);
}
