/*
** EPITECH PROJECT, 2023
** event.c
** File description:
** event
*/
#include "rpg1.h"

void manage_mouse_click3(all_t *a, sfEvent event)
{
    int x = event.mouseButton.x; int y = event.mouseButton.y;
    sfFloatRect gm_set = sfSprite_getGlobalBounds(a->setting_button);
    sfFloatRect gm_exit = sfSprite_getGlobalBounds(a->exit_button);
    if (a->isingm == true && sfFloatRect_contains(&gm_set, x, y)) {
        a->is_setting_click = true; a->isingm = false;
        return;
    }
    if (a->isingm == true && sfFloatRect_contains(&gm_exit, x, y)) {
        define_return(a);
    }
}

void manage_mouse_click2(all_t *a, sfEvent event)
{
    int x = event.mouseButton.x; int y = event.mouseButton.y;
    sfFloatRect t_au = sfSprite_getGlobalBounds(a->au);
    sfFloatRect t_ad = sfSprite_getGlobalBounds(a->ad);
    if (sfFloatRect_contains(&t_au, x, y)) {
        define_up(a);
        return;
    }
    if (sfFloatRect_contains(&t_ad, x, y)) {
        define_down(a);
        return;
    }
}

void manage_mouse_click1(all_t *a, sfEvent event)
{
    int x = event.mouseButton.x; int y = event.mouseButton.y;
    sfFloatRect t_ws = sfText_getGlobalBounds(a->window_size);
    sfFloatRect t_fs = sfText_getGlobalBounds(a->full_screen);
    if (sfFloatRect_contains(&t_ws, x, y) && a->isws == true) {
        a->isws = false; a->isfullscreen = true;
        full_screen(a);
        return;
    }
    if (sfFloatRect_contains(&t_fs, x, y) && a->isfullscreen == true) {
        a->isws = true; a->isfullscreen = false;
        ws_screen(a);
        return;
    }
}

void manage_mouse_click(all_t *a, sfEvent event)
{
    int x = event.mouseButton.x; int y = event.mouseButton.y;
    sfFloatRect t_play = sfText_getGlobalBounds(a->play);
    sfFloatRect t_settings = sfText_getGlobalBounds(a->settings);
    sfFloatRect t_fleche = sfSprite_getGlobalBounds(a->fleche);
    if (a->is_menu_open == true) {
        if (sfFloatRect_contains(&t_play, x, y)) {
            a->is_menu_open = false; a->isintuto = true;
            a->is_setting_click = false; a->ischatting = true;
        }
        if (sfFloatRect_contains(&t_settings, x, y)) {
            a->is_menu_open = false; a->is_setting_click = true;
            a->is_mlp_open = false; a->check = 0;
        }
    }
    if (a->is_setting_click == true) {
        if (sfFloatRect_contains(&t_fleche, x, y))
            def_redirect(a);
        manage_mouse_click1(a, event); manage_mouse_click2(a, event);
    }
    manage_mouse_click3(a, event);
}
