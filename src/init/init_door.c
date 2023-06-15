/*
** EPITECH PROJECT, 2023
** init_door.c
** File description:
** init_door
*/
#include "rpg1.h"

void init_lp_door(all_t *a)
{
    a->door = malloc(sizeof(sfRectangleShape *) * (6 + 1));
    a->pos_dx = malloc(sizeof(int) * (6 + 1));
    a->pos_dy = malloc(sizeof(int) * (6 + 1));
    init_door1(a); init_door2(a); init_door3(a); init_door4(a);
    init_door5(a); init_door6(a); init_door7(a);
}

void init_door1(all_t *a)
{
    a->pos_dx[0] = 630; a->pos_dy[0] = 697;
    int sz_d1x = 17; int sz_d1y = 108;
    sfVector2f pos_d1 = {a->pos_dx[0], a->pos_dy[0]};
    sfVector2f sz_d1 = {sz_d1x, sz_d1y};
    a->door[0] = my_getrect(pos_d1, sz_d1, sfWhite);
}

void init_door2(all_t *a)
{
    a->pos_dx[1] = 1498; a->pos_dy[1] = 1006;
    int sz_d2x = 108; int sz_d2y = 17;
    sfVector2f pos_d2 = {a->pos_dx[1], a->pos_dy[1]};
    sfVector2f sz_d2 = {sz_d2x, sz_d2y};
    a->door[1] = my_getrect(pos_d2, sz_d2, sfWhite);
}

void init_door3(all_t *a)
{
    a->pos_dx[2] = -53; a->pos_dy[2] = 1636;
    int sz_d3x = 108; int sz_d3y = 17;
    sfVector2f pos_d3 = {a->pos_dx[2], a->pos_dy[2]};
    sfVector2f sz_d3 = {sz_d3x, sz_d3y};
    a->door[2] = my_getrect(pos_d3, sz_d3, sfWhite);
}

void init_door4(all_t *a)
{
    a->pos_dx[3] = 796; a->pos_dy[3] = 1500;
    int sz_d4x = 108; int sz_d4y = 17;
    sfVector2f pos_d4 = {a->pos_dx[3], a->pos_dy[3]};
    sfVector2f sz_d4 = {sz_d4x, sz_d4y};
    a->door[3] = my_getrect(pos_d4, sz_d4, sfWhite);
}
