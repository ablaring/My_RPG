/*
** EPITECH PROJECT, 2023
** mv_porc.c
** File description:
** desc
*/

#include "rpg1.h"

void mv_right_porc(all_t *a)
{
    a->x_back -= 2;
    if (a->nb_rect_port == 1) {
        a->pos_portail_porc.x -= 2;
        sfSprite_setPosition(a->map_second[0].sprite, (sfVector2f){POS_BACK});
        sfSprite_setPosition(a->portail_porc, a->pos_portail_porc);
        sfRectangleShape_setPosition(a->rectangle[0].rect, a->pos_portail_porc);
        a->rectangle[1].pos.x -= 2;
        sfRectangleShape_setPosition(a->rectangle[1].rect, a->rectangle[1].pos);
    }
    if (a->nb_rect_port == 2) {
        a->rectangle[8].pos.x -= 2;
        sfRectangleShape_setPosition(a->rectangle[8].rect, a->rectangle[8].pos);
        sfSprite_setPosition(a->map_second[2].sprite, (sfVector2f){POS_BACK});
        IMG[1].pos.x -= 2;
        sfCircleShape_setPosition(a->circle, (sfVector2f){IMG[1].pos.x - 100,
        IMG[1].pos.y - 75});
        sfSprite_setPosition(IMG[1].sprite, IMG[1].pos);
    }
    mv_right_porc_suite(a);
}

void mv_down_porc(all_t *a)
{
    a->y_back -= 2;
    if (a->nb_rect_port == 1) {
        a->pos_portail_porc.y -= 2;
        sfSprite_setPosition(a->map_second[0].sprite, (sfVector2f){POS_BACK});
        sfSprite_setPosition(a->portail_porc, a->pos_portail_porc);
        sfRectangleShape_setPosition(a->rectangle[0].rect, a->pos_portail_porc);
        a->rectangle[1].pos.y -= 2;
        sfRectangleShape_setPosition(a->rectangle[1].rect, a->rectangle[1].pos);
    }
    if (a->nb_rect_port == 2){
        a->rectangle[8].pos.y -= 2;
        sfRectangleShape_setPosition(a->rectangle[8].rect, a->rectangle[8].pos);
        sfSprite_setPosition(a->map_second[2].sprite, (sfVector2f){POS_BACK});
        IMG[1].pos.y -= 2;
        sfCircleShape_setPosition(a->circle, (sfVector2f){IMG[1].pos.x - 100,
        IMG[1].pos.y - 75});
        sfSprite_setPosition(IMG[1].sprite, IMG[1].pos);
    }
    mv_down_porc_suite(a);
}

void mv_up_porc(all_t *a)
{
    a->y_back += 2;
    if (a->nb_rect_port == 1) {
        a->pos_portail_porc.y += 2;
        sfSprite_setPosition(a->map_second[0].sprite, (sfVector2f){POS_BACK});
        sfSprite_setPosition(a->portail_porc, a->pos_portail_porc);
        sfRectangleShape_setPosition(a->rectangle[0].rect, a->pos_portail_porc);
        a->rectangle[1].pos.y += 2;
        sfRectangleShape_setPosition(a->rectangle[1].rect, a->rectangle[1].pos);
    }
    if (a->nb_rect_port == 2){
        a->rectangle[8].pos.y += 2;
        sfRectangleShape_setPosition(a->rectangle[8].rect, a->rectangle[8].pos);
        sfSprite_setPosition(a->map_second[2].sprite, (sfVector2f){POS_BACK});
        IMG[1].pos.y += 2;
        sfCircleShape_setPosition(a->circle, (sfVector2f){IMG[1].pos.x - 100,
        IMG[1].pos.y - 75});
        sfSprite_setPosition(IMG[1].sprite, IMG[1].pos);
    }
    mv_up_porc_suite(a);
}

void mv_left_porc(all_t *a)
{
    a->x_back += 2;
    if (a->nb_rect_port == 1) {
        a->pos_portail_porc.x += 2;
        sfSprite_setPosition(a->map_second[0].sprite, (sfVector2f){POS_BACK});
        sfSprite_setPosition(a->portail_porc, a->pos_portail_porc);
        sfRectangleShape_setPosition(a->rectangle[0].rect, a->pos_portail_porc);
        a->rectangle[1].pos.x += 2;
        sfRectangleShape_setPosition(a->rectangle[1].rect, a->rectangle[1].pos);
    }
    if (a->nb_rect_port == 2){
        a->rectangle[8].pos.x += 2;
        sfRectangleShape_setPosition(a->rectangle[8].rect, a->rectangle[8].pos);
        sfSprite_setPosition(a->map_second[2].sprite, (sfVector2f){POS_BACK});
        IMG[1].pos.x += 2;
        sfCircleShape_setPosition(a->circle, (sfVector2f){IMG[1].pos.x - 100,
        IMG[1].pos.y - 75});
        sfSprite_setPosition(IMG[1].sprite, IMG[1].pos);
    }
    mv_left_porc_suite(a);
}
