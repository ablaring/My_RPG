/*
** EPITECH PROJECT, 2023
** djt_up.c
** File description:
** djt_up
*/
#include "rpg1.h"

void donjt_up2(all_t *a)
{
    sfVector2f pos_endj1 = {a->x_en_dj + 40, a->y_en_dj + 50};
    sfSprite_setPosition(a->enemey_dead, pos_endj1);
    a->pos_coffre_tuto.y += 2;
    sfRectangleShape_setPosition(a->coffre_tuto, a->pos_coffre_tuto);
}

void donjt_up(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->donjt);
    int x = (mvp.x - map.x) / a->scx_djt;
    int y = (mvp.y - map.y) / a->scy_djt;
    a->col = sfImage_getPixel(a->donjt_img, x, y - 8);
    if (comp(a->col, a->donjt_col) == false) {
        a->y_donjt += 2;
        sfVector2f pos_donjt = {a->x_donjt, a->y_donjt};
        sfSprite_setPosition(a->donjt, pos_donjt);
        a->y_dodjt += 2;
        sfVector2f pos_dodjt = {a->x_dodjt, a->y_dodjt};
        sfRectangleShape_setPosition(a->donjt_door, pos_dodjt);
        a->y_en_dj += 2;
        sfVector2f pos_endj = {a->x_en_dj, a->y_en_dj};
        sfSprite_setPosition(a->enemy_dj, pos_endj);
        sfCircleShape_setPosition(a->endj_hitbox, pos_endj);
        donjt_up2(a);
    }
}
