/*
** EPITECH PROJECT, 2023
** mv_porc.c
** File description:
** desc
*/

#include "rpg1.h"

void moove_porc_left(all_t *a, sfSprite *name_map, sfImage *name_map2)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(name_map);
    int x = (mvp.x - map.x) / a->scale_x;
    int y = (mvp.y - map.y) / a->scale_y;
    a->col = sfImage_getPixel(name_map2, x + 8, y);
    if (comp(a->col, a->col_init) == false && a->is_mlp_open == true) {
        mv_lp_left(a);
        mv_lp_left1(a);
    }
    if (comp(a->col, a->col_init) == false && a->map_porc_open == true)
        mv_right_porc(a);
}

void moove_porc_right(all_t *a, sfSprite *name_map, sfImage *name_map2)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(name_map);
    int x = (mvp.x - map.x) / a->scale_x;
    int y = (mvp.y - map.y) / a->scale_y;
    a->col = sfImage_getPixel(name_map2, x - 8, y);
    if (comp(a->col, a->col_init) == false && a->is_mlp_open == true) {
        mv_lp_right(a);
        mv_lp_right1(a);
    }
    if (comp(a->col, a->col_init) == false && a->map_porc_open == true)
        mv_left_porc(a);
}

void moove_porc_down(all_t *a, sfSprite *name_map, sfImage *name_map2)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(name_map);
    int x = (mvp.x - map.x) / a->scale_x;
    int y = (mvp.y - map.y) / a->scale_y;
    a->col = sfImage_getPixel(name_map2, x, y + 8);
    if (comp(a->col, a->col_init) == false && a->is_mlp_open == true) {
        mv_lp_down(a);
        mv_lp_down1(a);
    }
    if (comp(a->col, a->col_init) == false && a->map_porc_open == true)
        mv_down_porc(a);
}

void moove_porc_up(all_t *a, sfSprite *name_map, sfImage *name_map2)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(name_map);
    int x = (mvp.x - map.x) / a->scale_x;
    int y = (mvp.y - map.y) / a->scale_y;
    a->col = sfImage_getPixel(name_map2, x, y - 8);
    if (comp(a->col, a->col_init) == false && a->is_mlp_open == true) {
        mv_lp_up(a);
        mv_lp_up1(a);
    }
    if (comp(a->col, a->col_init) == false && a->map_porc_open == true)
        mv_up_porc(a);
}
