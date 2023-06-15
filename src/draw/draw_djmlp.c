/*
** EPITECH PROJECT, 2023
** draw_djmlp.c
** File description:
** draw_djmlp
*/
#include "rpg1.h"

void draw_enemy(all_t *a)
{
    if (a->isedefeated1 == false && a->isedead1 == false) {
        sfRenderWindow_drawSprite(a->window, a->edmlp[0], NULL);
        sfRenderWindow_drawCircleShape(a->window, a->ed_ml_hb[0], NULL);
    }
    if (a->isedefeated2 == false && a->isedead2 == false) {
        sfRenderWindow_drawSprite(a->window, a->edmlp[1], NULL);
        sfRenderWindow_drawCircleShape(a->window, a->ed_ml_hb[1], NULL);
    }
    if (a->isedefeated3 == false && a->isedead3 == false) {
        sfRenderWindow_drawSprite(a->window, a->edmlp[2], NULL);
        sfRenderWindow_drawCircleShape(a->window, a->ed_ml_hb[2], NULL);
    }
    if (a->isedefeated4 == false && a->isedead4 == false) {
        sfRenderWindow_drawSprite(a->window, a->edmlp[3], NULL);
        sfRenderWindow_drawCircleShape(a->window, a->ed_ml_hb[3], NULL);
    }
}

void draw_djmlp(all_t *a)
{
    sfRenderWindow_drawSprite(a->window, a->dj_ml, NULL);
    draw_enemy(a);
}

void draw_djmlpu(all_t *a)
{
    sfRenderWindow_drawSprite(a->window, a->dj_mlu, NULL);
}
