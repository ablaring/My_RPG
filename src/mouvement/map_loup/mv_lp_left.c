/*
** EPITECH PROJECT, 2023
** mv_lp_hous.c
** File description:
** mv_lp_house
*/
#include "rpg1.h"

void mv_lp_left(all_t *a)
{
    a->x_back -= 2;
    a->pos[25] = (sfVector2f) {a->x_back, a->y_back};
    sfSprite_setPosition(a->first_map, a->pos[25]);
    a->x_port1 -= 2;
    a->pos[26] = (sfVector2f) {a->x_port1, a->y_port1};
    sfSprite_setPosition(a->portail, a->pos[26]);
    a->pos_dx[0] -= 2;
    a->pos[27] = (sfVector2f) {a->pos_dx[0], a->pos_dy[0]};
    sfRectangleShape_setPosition(a->door[0], a->pos[27]);
    a->pos_dx[1] -= 2;
    a->pos[28] = (sfVector2f) {a->pos_dx[1], a->pos_dy[1]};
    sfRectangleShape_setPosition(a->door[1], a->pos[28]);
    a->pos_dx[2] -= 2;
    a->pos[29] = (sfVector2f) {a->pos_dx[2], a->pos_dy[2]};
    sfRectangleShape_setPosition(a->door[2], a->pos[29]);
    a->pos_dx[3] -= 2;
    a->pos[30] = (sfVector2f) {a->pos_dx[3], a->pos_dy[3]};
    sfRectangleShape_setPosition(a->door[3], a->pos[30]);
}

void mv_lp_left1(all_t *a)
{
    a->pos_dx[4] -= 2;
    a->pos[31] = (sfVector2f) {a->pos_dx[4], a->pos_dy[4]};
    sfRectangleShape_setPosition(a->door[4], a->pos[31]);
    a->pos_dx[5] -= 2;
    a->pos[32] = (sfVector2f) {a->pos_dx[5], a->pos_dy[5]};
    sfRectangleShape_setPosition(a->door[5], a->pos[32]);
    a->pos_dx[6] -= 2;
    a->pos[33] = (sfVector2f) {a->pos_dx[6], a->pos_dy[6]};
    sfRectangleShape_setPosition(a->door[6], a->pos[33]);
    a->pos_portail_porc.x -= 2;
    sfRectangleShape_setPosition(a->rectangle[0].rect, a->pos_portail_porc);
    sfSprite_setPosition(a->portail_porc, a->pos_portail_porc);
}
