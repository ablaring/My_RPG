/*
** EPITECH PROJECT, 2023
** mv_lp_house_right.c
** File description:
** mv_lp_house_right
*/
#include "rpg1.h"

void mv_lp_right(all_t *a)
{
    a->x_back += 2;
    a->pos[50] = (sfVector2f) {a->x_back, a->y_back};
    sfSprite_setPosition(a->first_map, a->pos[50]);
    a->x_port1 += 2;
    a->pos[51] = (sfVector2f) {a->x_port1, a->y_port1};
    sfSprite_setPosition(a->portail, a->pos[51]);
    a->pos_dx[0] += 2;
    a->pos[52] = (sfVector2f) {a->pos_dx[0], a->pos_dy[0]};
    sfRectangleShape_setPosition(a->door[0], a->pos[52]);
    a->pos_dx[1] += 2;
    a->pos[53] = (sfVector2f) {a->pos_dx[1], a->pos_dy[1]};
    sfRectangleShape_setPosition(a->door[1], a->pos[53]);
    a->pos_dx[2] += 2;
    a->pos[54] = (sfVector2f) {a->pos_dx[2], a->pos_dy[2]};
    sfRectangleShape_setPosition(a->door[2], a->pos[54]);
    a->pos_dx[3] += 2;
    a->pos[55] = (sfVector2f) {a->pos_dx[3], a->pos_dy[3]};
    sfRectangleShape_setPosition(a->door[3], a->pos[55]);
}

void mv_lp_right1(all_t *a)
{
    a->pos_dx[4] += 2;
    a->pos[56] = (sfVector2f) {a->pos_dx[4], a->pos_dy[4]};
    sfRectangleShape_setPosition(a->door[4], a->pos[56]);
    a->pos_dx[5] += 2;
    a->pos[57] = (sfVector2f) {a->pos_dx[5], a->pos_dy[5]};
    sfRectangleShape_setPosition(a->door[5], a->pos[57]);
    a->pos_dx[6] += 2;
    a->pos[58] = (sfVector2f) {a->pos_dx[6], a->pos_dy[6]};
    sfRectangleShape_setPosition(a->door[6], a->pos[58]);
    a->pos_portail_porc.x += 2;
    sfRectangleShape_setPosition(a->rectangle[0].rect, a->pos_portail_porc);
    sfSprite_setPosition(a->portail_porc, a->pos_portail_porc);
}
