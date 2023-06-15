/*
** EPITECH PROJECT, 2023
** mv_mlp.c
** File description:
** mv_mlp
*/
#include "rpg1.h"

void mv_left(all_t *a)
{
    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        if (a->ischatting == false) {
            a->rect.top = 65;
            moove_rect(a);
            sfSprite_setTextureRect(a->pp, a->rect);
            a->ph_rect.top = 124;
            sfSprite_setTextureRect(a->perso_hammer, a->ph_rect);
            a->hammer_rect.top = 124;
            sfSprite_setTextureRect(a->perso_hammer, a->hammer_rect);
        }
        gestion_mouvement_left(a);
        handle_left_movement(a);
        mv_lz_left(a);
        return;
    }
}

void mv_right_left(all_t *a)
{
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        if (a->ischatting == false) {
            a->rect.top = 195;
            moove_rect(a);
            sfSprite_setTextureRect(a->pp, a->rect);
            a->ph_rect.top = 380;
            sfSprite_setTextureRect(a->perso_hammer, a->ph_rect);
            a->hammer_rect.top = 380;
            sfSprite_setTextureRect(a->perso_hammer, a->hammer_rect);
        }
        gestion_mouvement_right(a);
        handle_right_movement(a);
        mv_lz_right(a);
        return;
    }
    mv_left(a);
}

void mv_up(all_t *a)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        if (a->ischatting == false) {
            a->rect.top = 0;
            moove_rect(a);
            sfSprite_setTextureRect(a->pp, a->rect);
            a->ph_rect.top = -3;
            sfSprite_setTextureRect(a->perso_hammer, a->ph_rect);
            a->hammer_rect.top = -3;
            sfSprite_setTextureRect(a->perso_hammer, a->hammer_rect);
        }
        gestion_mouvement_up(a);
        handle_up_movement(a);
        mv_lz_up(a);
        return;
    }
}

void mv_up_down(all_t *a)
{
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        if (a->ischatting == false) {
            a->rect.top = 130;
            moove_rect(a);
            sfSprite_setTextureRect(a->pp, a->rect);
            a->ph_rect.top = 251;
            sfSprite_setTextureRect(a->perso_hammer, a->ph_rect);
            a->hammer_rect.top = 251;
            sfSprite_setTextureRect(a->perso_hammer, a->hammer_rect);
        }
        gestion_mouvement_down(a);
        handle_down_movement(a);
        mv_lz_down(a);
        return;
    }
    mv_up(a);
}
