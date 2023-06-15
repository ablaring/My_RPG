/*
** EPITECH PROJECT, 2023
** define_screen.c
** File description:
** define_screen
*/
#include "rpg1.h"

void full_screen(all_t *a)
{
    sfRenderWindow_close(a->window);
    sfVideoMode mode = sfVideoMode_getDesktopMode();
    a->window = sfRenderWindow_create(mode, "my_rpg", sfResize | sfClose |
                sfFullscreen, NULL);
    sfRenderWindow_display(a->window);
}

void ws_screen(all_t *a)
{
    sfRenderWindow_close(a->window);
    sfVideoMode mode = {1920, 1080, 64};
    a->window = sfRenderWindow_create(mode, "my_rpg", sfResize | sfClose, NULL);
    sfRenderWindow_display(a->window);
}
