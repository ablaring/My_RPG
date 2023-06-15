/*
** EPITECH PROJECT, 2023
** music.c
** File description:
** music management
*/
#include "rpg1.h"

void manage_music(all_t *a)
{
    if (a->is_menu_open == true || a->is_setting_click == true
        || a->isintuto == true || a->isingm == true ||
        a->isindonjt == true) {
        sfMusic_play(a->menu_music);
    }
}
