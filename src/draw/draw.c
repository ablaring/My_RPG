/*
** EPITECH PROJECT, 2023
** draw.c
** File description:
** draw
*/
#include "rpg1.h"

void display_sound(all_t *a)
{
    if (a->isqq == true) {
        sfRenderWindow_drawText(a->window, a->qq, NULL);
    }
    if (a->istq == true) {
        sfRenderWindow_drawText(a->window, a->tq, NULL);
    }
    if (a->isdq == true) {
        sfRenderWindow_drawText(a->window, a->dq, NULL);
    }
    if (a->isuq == true) {
        sfRenderWindow_drawText(a->window, a->uq, NULL);
    }
    if (a->iszq == true) {
        sfRenderWindow_drawText(a->window, a->zq, NULL);
    }
}

void display_menu(all_t *a)
{
    if (a->is_menu_open == true) {
        sfRenderWindow_drawSprite(a->window, a->back_menu, NULL);
        sfRenderWindow_drawText(a->window, a->title, NULL);
        sfRenderWindow_drawText(a->window, a->play, NULL);
        sfRenderWindow_drawText(a->window, a->settings, NULL);
    }
}

void display_settings(all_t *a)
{
    if (a->is_setting_click == true) {
        sfRenderWindow_drawSprite(a->window, a->back_menu, NULL);
        sfRenderWindow_drawText(a->window, a->settings_title, NULL);
        sfRenderWindow_drawSprite(a->window, a->fleche, NULL);
        sfRenderWindow_drawText(a->window, a->size, NULL);
        sfRenderWindow_drawText(a->window, a->sound, NULL);
        sfRenderWindow_drawSprite(a->window, a->au, NULL);
        sfRenderWindow_drawSprite(a->window, a->ad, NULL);
        display_sound(a);
        if (a->isws == true)
            sfRenderWindow_drawText(a->window, a->window_size, NULL);
        if (a->isfullscreen == true)
            sfRenderWindow_drawText(a->window, a->full_screen, NULL);
    }
}

void display_second(all_t *a)
{
    if (a->isingm == true) {
        sfRenderWindow_drawSprite(a->window, a->back_gmenu, NULL);
        sfRenderWindow_drawSprite(a->window, a->exit_button, NULL);
        sfRenderWindow_drawSprite(a->window, a->setting_button, NULL);
    }
    draw_text(a);
    draw_enemy_life(a);
    if (a->life_actu <= 0)
        sfRenderWindow_drawSprite(a->window, a->game_over, NULL);
}

void display(all_t *a)
{
    display_menu(a);
    display_settings(a);
    if (a->is_mlp_open == true) {
        sfRenderWindow_drawSprite(a->window, a->first_map, NULL);
        sfRenderWindow_drawSprite(a->window, a->portail, NULL);
        sfRenderWindow_drawSprite(a->window, a->portail_porc, NULL);
    }
    display_maplz(a);
    draw_house(a);
    if (a->isindjml == true) {
        draw_djmlp(a);
    }
    if (a->isindjtop == true) {
        draw_djmlpu(a);
    }
    if (a->map_porc_open == true)
        draw_map_second(a);
    display_tuto(a);
    display_permanent(a);
    display_second(a);
}
