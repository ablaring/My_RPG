/*
** EPITECH PROJECT, 2023
** draw_enemy.c
** File description:
** draw_enemy
*/
#include "rpg1.h"

void draw_enemy_life_suite(all_t *a)
{
    if (a->isfight3 == true && a->isedefeated3 == false &&
        a->isedead3 == false) {
        sfRenderWindow_drawRectangleShape(a->window, a->eml_life[2], NULL);
        sfRenderWindow_drawRectangleShape(a->window, a->eml_life_ref[2], NULL);
    }
    if (a->isfight4 == true && a->isedefeated4 == false &&
        a->isedead4 == false) {
        sfRenderWindow_drawRectangleShape(a->window, a->eml_life[3], NULL);
        sfRenderWindow_drawRectangleShape(a->window, a->eml_life_ref[3], NULL);
    }
    if (a->isfight_tuto == true && a->iseddefeat == false &&
        a->isetd == false) {
        sfRenderWindow_drawRectangleShape(a->window, a->enemy_dj_life, NULL);
    }
}

void draw_enemy_life(all_t *a)
{
    if ((a->isfight_tuto == true && a->iseddefeat == false &&
        a->isetd == false) || (a->isfight1 == true && a->isedefeated1 == false
        && a->isedead1 == false) || (a->isfight2 == true &&
        a->isedefeated2 == false && a->isedead2 == false) ||
        (a->isfight3 == true && a->isedefeated3 == false &&
        a->isedead3 == false) || (a->isfight4 == true && a->isedead4 == false
        && a->isedefeated4 == false)) {
        sfRenderWindow_drawText(a->window, a->minotaur, NULL);
    }
    if (a->isfight1 == true && a->isedefeated1 == false &&
        a->isedead1 == false) {
        sfRenderWindow_drawRectangleShape(a->window, a->eml_life[0], NULL);
        sfRenderWindow_drawRectangleShape(a->window, a->eml_life_ref[0], NULL);
    }
    if (a->isfight2 == true && a->isedefeated2 == false &&
        a->isedead2 == false) {
        sfRenderWindow_drawRectangleShape(a->window, a->eml_life[1], NULL);
        sfRenderWindow_drawRectangleShape(a->window, a->eml_life_ref[1], NULL);
    }
    draw_enemy_life_suite(a);
}
