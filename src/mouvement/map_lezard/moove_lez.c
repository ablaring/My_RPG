/*
** EPITECH PROJECT, 2022
** moove_lez.c
** File description:
** moove_left_lz.c
*/

#include "rpg1.h"

void moove_left_lz(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->map_lz);
    int x = (mvp.x - map.x) / a->scale_x_lz;
    int y = (mvp.y - map.y) / a->scale_y_lz;
    a->col = sfImage_getPixel(a->lz_comp, x - 8, y);
    if (comp(a->col, a->col_lz) == false) {
        a->spawn_x += 2;
        sfVector2f pos_lz = {a->spawn_x, a->spawn_y};
        sfSprite_setPosition(a->map_lz, pos_lz);
        a->pos_h1_lz.x += 2;
        sfRectangleShape_setPosition(a->door1_lz, a->pos_h1_lz);
        a->pos_h2_lz.x += 2;
        sfRectangleShape_setPosition(a->door2_lz, a->pos_h2_lz);
        a->pos_h3_lz.x += 2;
        sfRectangleShape_setPosition(a->door3_lz, a->pos_h3_lz);
        a->pos_donj_lz.x += 2;
        sfRectangleShape_setPosition(a->door_dj_lz, a->pos_donj_lz);
        mv_left_lz2(a);
    }
}

void moove_right_lz(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->map_lz);
    int x = (mvp.x - map.x) / a->scale_x_lz;
    int y = (mvp.y - map.y) / a->scale_y_lz;
    a->col = sfImage_getPixel(a->lz_comp, x + 8, y);
    if (comp(a->col, a->col_lz) == false) {
        a->spawn_x -= 2;
        sfVector2f pos_lz = {a->spawn_x, a->spawn_y};
        sfSprite_setPosition(a->map_lz, pos_lz);
        a->pos_h1_lz.x -= 2;
        sfRectangleShape_setPosition(a->door1_lz, a->pos_h1_lz);
        a->pos_h2_lz.x -= 2;
        sfRectangleShape_setPosition(a->door2_lz, a->pos_h2_lz);
        a->pos_h3_lz.x -= 2;
        sfRectangleShape_setPosition(a->door3_lz, a->pos_h3_lz);
        a->pos_donj_lz.x -= 2;
        sfRectangleShape_setPosition(a->door_dj_lz, a->pos_donj_lz);
        mv_right_lz2(a);
    }
}

void moove_down_lz(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->map_lz);
    int x = (mvp.x - map.x) / a->scale_x_lz;
    int y = (mvp.y - map.y) / a->scale_y_lz;
    a->col = sfImage_getPixel(a->lz_comp, x, y + 8);
    if (comp(a->col, a->col_lz) == false) {
        a->spawn_y -= 2;
        sfVector2f pos_lz = {a->spawn_x, a->spawn_y};
        sfSprite_setPosition(a->map_lz, pos_lz);
        a->pos_h1_lz.y -= 2;
        sfRectangleShape_setPosition(a->door1_lz, a->pos_h1_lz);
        a->pos_h2_lz.y -= 2;
        sfRectangleShape_setPosition(a->door2_lz, a->pos_h2_lz);
        a->pos_h3_lz.y -= 2;
        sfRectangleShape_setPosition(a->door3_lz, a->pos_h3_lz);
        a->pos_donj_lz.y -= 2;
        sfRectangleShape_setPosition(a->door_dj_lz, a->pos_donj_lz);
        mv_down_lz2(a);
    }
}

void moove_up_lz(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->map_lz);
    int x = (mvp.x - map.x) / a->scale_x_lz;
    int y = (mvp.y - map.y) / a->scale_y_lz;
    a->col = sfImage_getPixel(a->lz_comp, x, y - 8);
    if (comp(a->col, a->col_lz) == false) {
        a->spawn_y += 2;
        sfVector2f pos_lz = {a->spawn_x, a->spawn_y};
        sfSprite_setPosition(a->map_lz, pos_lz);
        a->pos_h1_lz.y += 2;
        sfRectangleShape_setPosition(a->door1_lz, a->pos_h1_lz);
        a->pos_h2_lz.y += 2;
        sfRectangleShape_setPosition(a->door2_lz, a->pos_h2_lz);
        a->pos_h3_lz.y += 2;
        sfRectangleShape_setPosition(a->door3_lz, a->pos_h3_lz);
        a->pos_donj_lz.y += 2;
        sfRectangleShape_setPosition(a->door_dj_lz, a->pos_donj_lz);
        mv_up_lz2(a);
    }
}
