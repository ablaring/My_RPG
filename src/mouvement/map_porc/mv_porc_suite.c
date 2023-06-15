/*
** EPITECH PROJECT, 2023
** mv_porc.c
** File description:
** desc
*/

#include "rpg1.h"

void mv_right_porc_suite(all_t *a)
{
    if (a->nb_rect_port == 1) {
        for (int i = 0; i <= a->nb_coli; i++){
            a->colision_object[i].pos.x -= 2;
            sfRectangleShape_setPosition(a->colision_object[i].rect,
            a->colision_object[i].pos);
        }
    }
    if (a->nb_rect_port == 3) {
        RECT[9].pos.x -= 2;
        sfRectangleShape_setPosition(RECT[9].rect, RECT[9].pos);
        RECT[10].pos.x -= 2;
        sfRectangleShape_setPosition(RECT[10].rect, RECT[10].pos);
        sfSprite_setPosition(a->map_second[4].sprite,
        (sfVector2f){a->x_back, a->y_back});
    }
}

void mv_down_porc_suite(all_t *a)
{
    if (a->nb_rect_port == 1) {
        for (int i = 0; i <= a->nb_coli; i++){
            a->colision_object[i].pos.y -= 2;
            sfRectangleShape_setPosition(a->colision_object[i].rect,
            a->colision_object[i].pos);
        }
    }
    if (a->nb_rect_port == 3) {
        RECT[9].pos.y -= 2;
        sfSprite_setPosition(a->map_second[4].sprite,
        (sfVector2f){a->x_back, a->y_back});
        sfRectangleShape_setPosition(RECT[9].rect, RECT[9].pos);
        RECT[10].pos.y -= 2;
        sfRectangleShape_setPosition(RECT[10].rect, RECT[10].pos);
    }
}

void mv_up_porc_suite(all_t *a)
{
    if (a->nb_rect_port == 1) {
        for (int i = 0; i <= a->nb_coli; i++){
            a->colision_object[i].pos.y += 2;
            sfRectangleShape_setPosition(a->colision_object[i].rect,
            a->colision_object[i].pos);
        }
    }
    if (a->nb_rect_port == 3) {
        RECT[9].pos.y += 2;
        sfSprite_setPosition(a->map_second[4].sprite,
        (sfVector2f){a->x_back, a->y_back});
        sfRectangleShape_setPosition(RECT[9].rect, RECT[9].pos);
        RECT[10].pos.y += 2;
        sfRectangleShape_setPosition(RECT[10].rect, RECT[10].pos);
    }
}

void mv_left_porc_suite(all_t *a)
{
    if (a->nb_rect_port == 1) {
        for (int i = 0; i <= a->nb_coli; i++){
            a->colision_object[i].pos.x += 2;
            sfRectangleShape_setPosition(a->colision_object[i].rect,
            a->colision_object[i].pos);
        }
    }
    if (a->nb_rect_port == 3) {
        RECT[9].pos.x += 2;
        sfSprite_setPosition(a->map_second[4].sprite,
        (sfVector2f){a->x_back, a->y_back});
        sfRectangleShape_setPosition(RECT[9].rect, RECT[9].pos);
        RECT[10].pos.x += 2;
        sfRectangleShape_setPosition(RECT[10].rect, RECT[10].pos);
    }
}
