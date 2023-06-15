/*
** EPITECH PROJECT, 2023
** mv_lp_house_down.c
** File description:
** mv_lp_house_down
*/
#include "rpg1.h"

void mv_lp_down(all_t *a)
{
    a->y_back -= 2;
    a->pos[0] = (sfVector2f) {a->x_back, a->y_back};
    sfSprite_setPosition(a->first_map, a->pos[0]);
    a->y_port1 -= 2;
    a->pos[1] = (sfVector2f) {a->x_port1, a->y_port1};
    sfSprite_setPosition(a->portail, a->pos[1]);
    a->pos_dy[0] -= 2;
    a->pos[2] = (sfVector2f) {a->pos_dx[0], a->pos_dy[0]};
    sfRectangleShape_setPosition(a->door[0], a->pos[2]);
    a->pos_dy[1] -= 2;
    a->pos[3] = (sfVector2f) {a->pos_dx[1], a->pos_dy[1]};
    sfRectangleShape_setPosition(a->door[1], a->pos[3]);
    a->pos_dy[2] -= 2;
    a->pos[4] = (sfVector2f) {a->pos_dx[2], a->pos_dy[2]};
    sfRectangleShape_setPosition(a->door[2], a->pos[4]);
    a->pos_dy[3] -= 2;
    a->pos[5] = (sfVector2f) {a->pos_dx[3], a->pos_dy[3]};
    sfRectangleShape_setPosition(a->door[3], a->pos[5]);
}

void mv_lp_down1(all_t *a)
{
    a->pos_dy[4] -= 2;
    a->pos[6] = (sfVector2f) {a->pos_dx[4], a->pos_dy[4]};
    sfRectangleShape_setPosition(a->door[4], a->pos[6]);
    a->pos_dy[5] -= 2;
    a->pos[7] = (sfVector2f) {a->pos_dx[5], a->pos_dy[5]};
    sfRectangleShape_setPosition(a->door[5], a->pos[7]);
    a->pos_dy[6] -= 2;
    a->pos[8] = (sfVector2f) {a->pos_dx[6], a->pos_dy[6]};
    sfRectangleShape_setPosition(a->door[6], a->pos[8]);
    a->pos_portail_porc.y -= 2;
    sfRectangleShape_setPosition(a->rectangle[0].rect, a->pos_portail_porc);
    sfSprite_setPosition(a->portail_porc, a->pos_portail_porc);

}
