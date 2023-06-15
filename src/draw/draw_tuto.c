/*
** EPITECH PROJECT, 2023
** draw_tuto.c
** File description:
** draw_tuto
*/
#include "rpg1.h"

void add_level1(all_t *a)
{
    if (a->levelup[0] == false) {
        a->lvl1 += 1;
        a->lvl2 += 1;
        a->levelup[0] = true;
    }
}

void display_tuto2(all_t *a)
{
    if (a->isindonjt == true) {
        sfRenderWindow_drawSprite(a->window, a->donjt, NULL);
        if (a->iseddefeat == false && a->isetd == false) {
            sfRenderWindow_drawSprite(a->window, a->enemy_dj, NULL);
            sfRenderWindow_drawCircleShape(a->window, a->endj_hitbox, NULL);
        }
        if (a->isetd == true) {
            sfRenderWindow_drawSprite(a->window, a->enemey_dead, NULL);
            add_level1(a);
        }
    }
}

void display_tuto(all_t *a)
{
    if (a->isintuto == true) {
        sfRenderWindow_drawSprite(a->window, a->map_tuto, NULL);
        for (int i = 0; i < 8; i++) {
            sfRenderWindow_drawSprite(a->window, a->foret[i], NULL);
        }
        if (a->iseddefeat == true) {
            sfRenderWindow_drawSprite(a->window, a->portail_tuto, NULL);
            sfRenderWindow_drawRectangleShape(a->window, a->pt_hitbox, NULL);
        }
        chest_colision_tuto(a);
    }
    display_tuto2(a);
}
