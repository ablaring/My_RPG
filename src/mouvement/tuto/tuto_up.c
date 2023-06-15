/*
** EPITECH PROJECT, 2023
** tuto_right.c
** File description:
** tuto_right
*/
#include "rpg1.h"

void foret_up1(all_t *a)
{
    a->pos_y_foret[6] += 2;
    sfVector2f pos_f6 = {a->pos_x_foret[6], a->pos_y_foret[6]};
    sfSprite_setPosition(a->foret[6], pos_f6);
    a->pos_y_foret[7] += 2;
    sfVector2f pos_f7 = {a->pos_x_foret[7], a->pos_y_foret[7]};
    sfSprite_setPosition(a->foret[7], pos_f7);
}

void foret_up(all_t *a)
{
    a->pos_y_foret[0] += 2;
    sfVector2f pos_f0 = {a->pos_x_foret[0], a->pos_y_foret[0]};
    sfSprite_setPosition(a->foret[0], pos_f0);
    a->pos_y_foret[1] += 2;
    sfVector2f pos_f1 = {a->pos_x_foret[1], a->pos_y_foret[1]};
    sfSprite_setPosition(a->foret[1], pos_f1);
    a->pos_y_foret[2] += 2;
    sfVector2f pos_f2 = {a->pos_x_foret[2], a->pos_y_foret[2]};
    sfSprite_setPosition(a->foret[2], pos_f2);
    a->pos_y_foret[3] += 2;
    sfVector2f pos_f3 = {a->pos_x_foret[3], a->pos_y_foret[3]};
    sfSprite_setPosition(a->foret[3], pos_f3);
    a->pos_y_foret[4] += 2;
    sfVector2f pos_f4 = {a->pos_x_foret[4], a->pos_y_foret[4]};
    sfSprite_setPosition(a->foret[4], pos_f4);
    a->pos_y_foret[5] += 2;
    sfVector2f pos_f5 = {a->pos_x_foret[5], a->pos_y_foret[5]};
    sfSprite_setPosition(a->foret[5], pos_f5);
    foret_up1(a);
}

void tuto_up(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->map_tuto);
    int x = (mvp.x - map.x) / a->scx_tuto;
    int y = (mvp.y - map.y) / a->scy_tuto;
    a->col = sfImage_getPixel(a->img_tuto, x, y - 8);
    if (comp(a->col, a->tuto_col) == false) {
        a->y_tuto += 2;
        sfVector2f pos_tuto = {a->x_tuto, a->y_tuto};
        sfSprite_setPosition(a->map_tuto, pos_tuto);
        a->y_dt += 2;
        sfVector2f pos_dt = {a->x_dt, a->y_dt};
        sfRectangleShape_setPosition(a->door_tuto, pos_dt);
        a->y_ptuto += 2;
        sfVector2f pos_ptuto = {a->x_ptuto, a->y_ptuto};
        sfSprite_setPosition(a->portail_tuto, pos_ptuto);
        a->y_pth += 2;
        sfVector2f pos_pth = {a->x_pth, a->y_pth};
        sfRectangleShape_setPosition(a->pt_hitbox, pos_pth);
        foret_up(a);
    }
}
