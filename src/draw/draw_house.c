/*
** EPITECH PROJECT, 2023
** draw_house.c
** File description:
** draw_house
*/
#include "rpg1.h"

void draw_house_mlz(all_t *a)
{
    if (a->isinh1_lz == true)
        sfRenderWindow_drawSprite(a->window, a->h1_lz, NULL);
    if (a->isinh2_lz == true){
        sfRenderWindow_drawSprite(a->window, a->h2_lz, NULL);
        chest_colision_lz(a);
    }
    if (a->isinh3_lz == true){
        sfRenderWindow_drawSprite(a->window, a->h3_lz, NULL);
        chest_colision_lz3(a);
    }
    if (a->isindonj_lz == true) {
        sfRenderWindow_drawSprite(a->window, a->dj_lz, NULL);
        chest_colision_lz2(a);
        if (a->life_boss_lz > 0) {
            anim_boss_lz(a);
            sfRenderWindow_drawSprite(a->window, a->lz_boss, NULL);
            sfRenderWindow_drawCircleShape(a->window, a->circle_lz_boss, NULL);
        }
    }
}

void draw_house(all_t *a)
{
    if (a->isinh1 == true)
        sfRenderWindow_drawSprite(a->window, a->house_lp[0], NULL);
    if (a->isinh2 == true)
        sfRenderWindow_drawSprite(a->window, a->house_lp[1], NULL);
    if (a->isinh3 == true)
        sfRenderWindow_drawSprite(a->window, a->house_lp[2], NULL);
    if (a->isinh4 == true)
        sfRenderWindow_drawSprite(a->window, a->house_lp[3], NULL);
    if (a->isinh5 == true)
        sfRenderWindow_drawSprite(a->window, a->house_lp[4], NULL);
    draw_house_mlz(a);
}
