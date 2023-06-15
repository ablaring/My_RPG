/*
** EPITECH PROJECT, 2022
** mv_lz2.c
** File description:
** mv_lz2.c
*/

#include "rpg1.h"

void mv_up_lz2(all_t *a)
{
    a->pos_port_lz.y += 2;
    sfSprite_setPosition(a->portail_lz, a->pos_port_lz);
    a->pos_mino1_lz.y += 2;
    sfSprite_setPosition(a->mino1_lz, a->pos_mino1_lz);
    a->pos_circle_mino1_lz.y += 2;
    sfCircleShape_setPosition(a->circle_mino1_lz, a->pos_circle_mino1_lz);
    a->pos_circle_mino2_lz.y += 2;
    sfCircleShape_setPosition(a->circle_mino2_lz, a->pos_circle_mino2_lz);
    a->pos_mino2_lz.y += 2;
    sfSprite_setPosition(a->mino2_lz, a->pos_mino2_lz);
    a->pos_circle_mino3_lz.y += 2;
    sfCircleShape_setPosition(a->circle_mino3_lz, a->pos_circle_mino3_lz);
    a->pos_mino3_lz.y += 2;
    sfSprite_setPosition(a->mino3_lz, a->pos_mino3_lz);
    a->pos_port2_lz.y += 2;
    sfSprite_setPosition(a->portail2_lz, a->pos_port2_lz);
    a->pos_tp_in_mlp.y += 2;
    sfRectangleShape_setPosition(a->tp_in_mlp, a->pos_tp_in_mlp);
}

void mv_down_lz2(all_t *a)
{
    a->pos_port_lz.y -= 2;
    sfSprite_setPosition(a->portail_lz, a->pos_port_lz);
    a->pos_mino1_lz.y -= 2;
    sfSprite_setPosition(a->mino1_lz, a->pos_mino1_lz);
    a->pos_circle_mino1_lz.y -= 2;
    sfCircleShape_setPosition(a->circle_mino1_lz, a->pos_circle_mino1_lz);
    a->pos_circle_mino2_lz.y -= 2;
    sfCircleShape_setPosition(a->circle_mino2_lz, a->pos_circle_mino2_lz);
    a->pos_mino2_lz.y -= 2;
    sfSprite_setPosition(a->mino2_lz, a->pos_mino2_lz);
    a->pos_circle_mino3_lz.y -= 2;
    sfCircleShape_setPosition(a->circle_mino3_lz, a->pos_circle_mino3_lz);
    a->pos_mino3_lz.y -= 2;
    sfSprite_setPosition(a->mino3_lz, a->pos_mino3_lz);
    a->pos_port2_lz.y -= 2;
    sfSprite_setPosition(a->portail2_lz, a->pos_port2_lz);
    a->pos_tp_in_mlp.y -= 2;
    sfRectangleShape_setPosition(a->tp_in_mlp, a->pos_tp_in_mlp);
}

void mv_right_lz2(all_t *a)
{
    a->pos_port_lz.x -= 2;
    sfSprite_setPosition(a->portail_lz, a->pos_port_lz);
    a->pos_mino1_lz.x -= 2;
    sfSprite_setPosition(a->mino1_lz, a->pos_mino1_lz);
    a->pos_circle_mino1_lz.x -= 2;
    sfCircleShape_setPosition(a->circle_mino1_lz, a->pos_circle_mino1_lz);
    a->pos_circle_mino2_lz.x -= 2;
    sfCircleShape_setPosition(a->circle_mino2_lz, a->pos_circle_mino2_lz);
    a->pos_mino2_lz.x -= 2;
    sfSprite_setPosition(a->mino2_lz, a->pos_mino2_lz);
    a->pos_circle_mino3_lz.x -= 2;
    sfCircleShape_setPosition(a->circle_mino3_lz, a->pos_circle_mino3_lz);
    a->pos_mino3_lz.x -= 2;
    sfSprite_setPosition(a->mino3_lz, a->pos_mino3_lz);
    a->pos_port2_lz.x -= 2;
    sfSprite_setPosition(a->portail2_lz, a->pos_port2_lz);
    a->pos_tp_in_mlp.x -= 2;
    sfRectangleShape_setPosition(a->tp_in_mlp, a->pos_tp_in_mlp);
}

void mv_left_lz2(all_t *a)
{
    a->pos_port_lz.x += 2;
    sfSprite_setPosition(a->portail_lz, a->pos_port_lz);
    a->pos_mino1_lz.x += 2;
    sfSprite_setPosition(a->mino1_lz, a->pos_mino1_lz);
    a->pos_circle_mino1_lz.x += 2;
    sfCircleShape_setPosition(a->circle_mino1_lz, a->pos_circle_mino1_lz);
    a->pos_circle_mino2_lz.x += 2;
    sfCircleShape_setPosition(a->circle_mino2_lz, a->pos_circle_mino2_lz);
    a->pos_mino2_lz.x += 2;
    sfSprite_setPosition(a->mino2_lz, a->pos_mino2_lz);
    a->pos_circle_mino3_lz.x += 2;
    sfCircleShape_setPosition(a->circle_mino3_lz, a->pos_circle_mino3_lz);
    a->pos_mino3_lz.x += 2;
    sfSprite_setPosition(a->mino3_lz, a->pos_mino3_lz);
    a->pos_port2_lz.x += 2;
    sfSprite_setPosition(a->portail2_lz, a->pos_port2_lz);
    a->pos_tp_in_mlp.x += 2;
    sfRectangleShape_setPosition(a->tp_in_mlp, a->pos_tp_in_mlp);
}
