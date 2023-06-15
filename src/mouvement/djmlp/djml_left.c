/*
** EPITECH PROJECT, 2023
** djml_left.c
** File description:
** djml_left
*/
#include "rpg1.h"

void djml_left(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->dj_ml);
    int x = (mvp.x - map.x) / a->scx_djml;
    int y = (mvp.y - map.y) / a->scy_djml;
    a->col = sfImage_getPixel(a->dj_ml_img, x - 8, y);
    if (comp(a->col, a->dj_ml_col) == false) {
        a->x_ml += 2; a->x_dml += 2; a->x_std += 2;
        sfVector2f pos_djml = {a->x_ml, a->y_ml};
        sfSprite_setPosition(a->dj_ml, pos_djml);
        sfVector2f pos_djdml = {a->x_dml, a->y_dml};
        sfRectangleShape_setPosition(a->door_dj, pos_djdml);
        sfVector2f pos_std = {a->x_std, a->y_std};
        sfRectangleShape_setPosition(a->stare_down, pos_std);
        for (int i = 0; i < 4; i++) {
            a->x_edmlp[i] += 2;
            sfVector2f pos_edmlp = {a->x_edmlp[i], a->y_edmlp[i]};
            sfSprite_setPosition(a->edmlp[i], pos_edmlp);
            sfCircleShape_setPosition(a->ed_ml_hb[i], pos_edmlp);
        }
    }
}
