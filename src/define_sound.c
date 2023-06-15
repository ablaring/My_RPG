/*
** EPITECH PROJECT, 2023
** define_sound.c
** File description:
** define_sound
*/

#include "rpg1.h"

void define_up(all_t *a)
{
    if (a->istq == true) {
        a->isqq = true; a->istq = false;
        sfMusic_setVolume(a->menu_music, 100.0f); return;
    }
    if (a->isdq == true) {
        a->istq = true, a->isdq = false;
        sfMusic_setVolume(a->menu_music, 75.0f); return;
    }
    if (a->isuq == true) {
        a->isdq = true; a->isuq = false;
        sfMusic_setVolume(a->menu_music, 50.0f); return;
    }
    if (a->iszq == true) {
        a->isuq = true; a->iszq = false;
        sfMusic_setVolume(a->menu_music, 25.0f); return;
    }
}

void define_down(all_t *a)
{
    if (a->isqq == true) {
        a->istq = true; a->isqq = false;
        sfMusic_setVolume(a->menu_music, 75.0f); return;
    }
    if (a->istq == true) {
        a->isdq = true; a->istq = false;
        sfMusic_setVolume(a->menu_music, 50.0f); return;
    }
    if (a->isdq == true) {
        a->isuq = true; a->isdq = false;
        sfMusic_setVolume(a->menu_music, 25.0f); return;
    }
    if (a->isuq == true) {
        a->iszq = true; a->isuq = false;
        sfMusic_setVolume(a->menu_music, 0.0f); return;
    }
}
