/*
** EPITECH PROJECT, 2023
** combat.c
** File description:
** combat
*/
#include "rpg1.h"

void combat(all_t *a)
{
    if (a->isfight_tuto == true) {
        anim_enemy_donj(a);
        attack(a);
    }
    if (a->isfight_tuto == false) {
        a->dj_rect.top = 126; a->dj_rect.left = 0;
        a->dj_rect.width = 128; a->dj_rect.height = 126;
        sfSprite_setTextureRect(a->enemy_dj, a->dj_rect);
        a->ph_rect.left = 0;
        sfSprite_setTextureRect(a->perso_hammer, a->ph_rect);
    }
}
