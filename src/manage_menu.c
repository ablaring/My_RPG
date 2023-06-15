/*
** EPITECH PROJECT, 2023
** manage_menu.c
** File description:
** manage_menu
*/
#include "rpg1.h"

void manage_menu2(all_t *a)
{
    int x = sfMouse_getPositionRenderWindow(a->window).x;
    int y = sfMouse_getPositionRenderWindow(a->window).y;
    sfFloatRect arrow_up = sfSprite_getGlobalBounds(a->au);
    sfFloatRect arrow_down = sfSprite_getGlobalBounds(a->ad);
    if (sfFloatRect_contains(&arrow_up, x, y) && a->is_setting_click == true) {
        sfRenderWindow_drawSprite(a->window, a->auw, NULL);
    }
    if (sfFloatRect_contains(&arrow_down, x, y) &&
        a->is_setting_click == true) {
        sfRenderWindow_drawSprite(a->window, a->adw, NULL);
    }
}

void manage_menu1(all_t *a)
{
    int x = sfMouse_getPositionRenderWindow(a->window).x;
    int y = sfMouse_getPositionRenderWindow(a->window).y;
    sfFloatRect text_ws = sfText_getGlobalBounds(a->window_size);
    sfFloatRect text_fs = sfText_getGlobalBounds(a->full_screen);
    if (sfFloatRect_contains(&text_ws, x, y)) {
        sfText_setColor(a->window_size, sfWhite);
    } else {
        sfText_setColor(a->window_size, sfBlack);
    }
    if (sfFloatRect_contains(&text_fs, x, y)) {
        sfText_setColor(a->full_screen, sfWhite);
    } else {
        sfText_setColor(a->full_screen, sfBlack);
    }
}

void manage_menu(all_t *a)
{
    int x = sfMouse_getPositionRenderWindow(a->window).x;
    int y = sfMouse_getPositionRenderWindow(a->window).y;
    sfFloatRect text_play = sfText_getGlobalBounds(a->play);
    sfFloatRect text_settings = sfText_getGlobalBounds(a->settings);
    if (sfFloatRect_contains(&text_play, x, y)) {
        sfText_setColor(a->play, sfWhite);
    } else {
        sfText_setColor(a->play, sfBlack);
    }
    if (sfFloatRect_contains(&text_settings, x, y)) {
        sfText_setColor(a->settings, sfWhite);
    } else {
        sfText_setColor(a->settings, sfBlack);
    }
    manage_menu1(a);
    manage_menu2(a);
}
