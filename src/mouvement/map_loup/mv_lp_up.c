/*
** EPITECH PROJECT, 2023
** mv_lp_house_up.c
** File description:
** mv_lp_house_up
*/
#include "rpg1.h"

void mv_lp_up(all_t *a)
{
    a->y_back += 2;
    a->pos[75] = (sfVector2f) {a->x_back, a->y_back};
    sfSprite_setPosition(a->first_map, a->pos[75]);
    a->y_port1 += 2;
    a->pos[76] = (sfVector2f) {a->x_port1, a->y_port1};
    sfSprite_setPosition(a->portail, a->pos[76]);
    a->pos_dy[0] += 2;
    a->pos[77] = (sfVector2f) {a->pos_dx[0], a->pos_dy[0]};
    sfRectangleShape_setPosition(a->door[0], a->pos[77]);
    a->pos_dy[1] += 2;
    a->pos[78] = (sfVector2f) {a->pos_dx[1], a->pos_dy[1]};
    sfRectangleShape_setPosition(a->door[1], a->pos[78]);
    a->pos_dy[2] += 2;
    a->pos[79] = (sfVector2f) {a->pos_dx[2], a->pos_dy[2]};
    sfRectangleShape_setPosition(a->door[2], a->pos[79]);
    a->pos_dy[3] += 2;
    a->pos[80] = (sfVector2f) {a->pos_dx[3], a->pos_dy[3]};
    sfRectangleShape_setPosition(a->door[3], a->pos[80]);
}

void mv_lp_up1(all_t *a)
{
    a->pos_dy[4] += 2;
    a->pos[81] = (sfVector2f) {a->pos_dx[4], a->pos_dy[4]};
    sfRectangleShape_setPosition(a->door[4], a->pos[81]);
    a->pos_dy[5] += 2;
    a->pos[82] = (sfVector2f) {a->pos_dx[5], a->pos_dy[5]};
    sfRectangleShape_setPosition(a->door[5], a->pos[82]);
    a->pos_dy[6] += 2;
    a->pos[83] = (sfVector2f) {a->pos_dx[6], a->pos_dy[6]};
    sfRectangleShape_setPosition(a->door[6], a->pos[83]);
    a->pos_portail_porc.y += 2;
    sfRectangleShape_setPosition(a->rectangle[0].rect, a->pos_portail_porc);
    sfSprite_setPosition(a->portail_porc, a->pos_portail_porc);
}
