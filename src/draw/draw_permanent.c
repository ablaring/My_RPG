/*
** EPITECH PROJECT, 2023
** draw_permanent.c
** File description:
** draw_permanent
*/
#include "rpg1.h"


void display_permanent_suite(all_t *a)
{
        sfRenderWindow_drawRectangleShape(a->window, a->life_rect, NULL);
        sfRenderWindow_drawRectangleShape(a->window, a->life_ref, NULL);
        sfRenderWindow_drawRectangleShape(a->window, a->strength_rect, NULL);
        sfRenderWindow_drawRectangleShape(a->window, a->strength_ref, NULL);
    for (size_t i = 4; i <= 6 ; i++)
        sfRenderWindow_drawRectangleShape(a->window,
        a->rectangle[i].rect, NULL);
    for (size_t i = 0; i <= 3 ; i++)
        sfRenderWindow_drawSprite(a->window,
        a->utils_perso[i].sprite, NULL);
    if (a->chest_open[2] == true)
        sfRenderWindow_drawSprite(a->window, a->utils_perso[4].sprite, NULL);
    display_potion(a);
}

void display_perm_suite(all_t *a)
{
    if ((a->isfight1 == true && a->isedead1 == false) ||
        (a->isfight2 == true && a->isedead2 == false) ||
        (a->isfight3 == true && a->isedead3 == false) ||
        (a->isfight4 == true && a->isedead4 == false))
        sfRenderWindow_drawSprite(a->window, a->pp_hammer1, NULL);
    sfRenderWindow_drawSprite(a->window, IMG[0].sprite, NULL);
    sfRenderWindow_drawRectangleShape(a->window, IMG[0].rectangle, NULL);
    sfRenderWindow_drawSprite(a->window, a->life, NULL);
    sfRenderWindow_drawSprite(a->window, a->strength, NULL);
    display_permanent_suite(a);
}

void display_permanent(all_t *a)
{
    if (a->is_menu_open == false && a->is_setting_click == false &&
        a->isingm == false) {
        sfText_setColor(a->options, sfWhite);
        sfRenderWindow_drawSprite(a->window, a->setting, NULL);
        sfRenderWindow_drawText(a->window, a->options, NULL);
        if ((a->isfight_tuto == false && a->isfight1 == false &&
            a->isfight2 == false && a->isfight3 == false &&
            a->isfight4 == false) || (a->isfight1 == true &&
            a->isedead1 == true) || (a->isfight2 == true &&
            a->isedead2 == true) || (a->isfight3 == true &&
            a->isedead3 == true) || (a->isfight4 == true &&
            a->isedead4 == true) || (a->isfight_tuto == true &&
            a->iseddefeat == true))
            sfRenderWindow_drawSprite(a->window, a->pp, NULL);
        if (a->isfight_tuto == true && a->iseddefeat == false)
            sfRenderWindow_drawSprite(a->window, a->perso_hammer, NULL);
        display_perm_suite(a);
    }
}
