/*
** EPITECH PROJECT, 2023
** djmlpu_down.c
** File description:
** djmlpu_down
*/
#include "rpg1.h"

void djmlpu_down(all_t *a)
{
    sfVector2f mvp = sfSprite_getPosition(a->pp);
    sfVector2f map = sfSprite_getPosition(a->dj_mlu);
    int x = (mvp.x - map.x) / a->scx_mlu;
    int y = (mvp.y - map.y) / a->scy_mlu;
    a->col = sfImage_getPixel(a->dj_mlu_img, x, y + 8);
    if (comp(a->col, a->dj_mlu_col) == false) {
        a->y_mlu -= 2;
        sfVector2f pos_djmlu = {a->x_mlu, a->y_mlu};
        sfSprite_setPosition(a->dj_mlu, pos_djmlu);
        a->y_stdu -= 2;
        sfVector2f pos_stdu = {a->x_stdu, a->y_stdu};
        sfRectangleShape_setPosition(a->stare_up, pos_stdu);
    }
}
