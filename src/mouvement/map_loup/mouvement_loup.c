/*
** EPITECH PROJECT, 2023
** mouvement_test.c
** File description:
** mouvement_test
*/
#include "rpg1.h"

bool comp(sfColor color, sfColor color2)
{
    if (color.r == color2.r && color.g == color2.g &&
        color.b == color2.b && color.a == color2.a) {
        return true;
    }
    return false;
}

void moove_test_x_left(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->first_map);
    int x = (mvp.x - map.x) / a->scale_x;
    int y = (mvp.y - map.y) / a->scale_y;
    a->col = sfImage_getPixel(a->im_comp, x + 8, y);
    if (comp(a->col, a->col_init) == false) {
        mv_lp_left(a);
        mv_lp_left1(a);
    }
}

void moove_test_x_right(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->first_map);
    int x = (mvp.x - map.x) / a->scale_x;
    int y = (mvp.y - map.y) / a->scale_y;
    a->col = sfImage_getPixel(a->im_comp, x - 8, y);
    if (comp(a->col, a->col_init) == false) {
        mv_lp_right(a);
        mv_lp_right1(a);
    }
}

void moove_test_y_down(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->first_map);
    int x = (mvp.x - map.x) / a->scale_x;
    int y = (mvp.y - map.y) / a->scale_y;
    a->col = sfImage_getPixel(a->im_comp, x, y + 8);
    if (comp(a->col, a->col_init) == false) {
        mv_lp_down(a);
        mv_lp_down1(a);
    }
}

void moove_test_y_up(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->first_map);
    int x = (mvp.x - map.x) / a->scale_x;
    int y = (mvp.y - map.y) / a->scale_y;
    a->col = sfImage_getPixel(a->im_comp, x, y - 8);
    if (comp(a->col, a->col_init) == false) {
        mv_lp_up(a);
        mv_lp_up1(a);
    }
}
