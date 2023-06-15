/*
** EPITECH PROJECT, 2022
** draw_map_lz.c
** File description:
** draw_map_lz.c
*/

#include "rpg1.h"

void display_mino2(all_t *a)
{
    if (a->life_mino3_lz > 0) {
        anim_mino3_lz(a);
        sfRenderWindow_drawSprite(a->window, a->mino3_lz, NULL);
        sfRenderWindow_drawCircleShape(a->window, a->circle_mino3_lz, NULL);
    } else {
        a->mino3_dead_lz = false;
        a->is_fight_mino3_lz = false;
    }
    if (a->is_fight_mino1_lz == true) {
        sfRenderWindow_drawText(a->window, a->minotaur, NULL);
    }
    if (a->is_fight_mino2_lz == true) {
        sfRenderWindow_drawText(a->window, a->minotaur, NULL);
    }
    if (a->is_fight_mino3_lz == true) {
        sfRenderWindow_drawText(a->window, a->minotaur, NULL);
    }
}

void display_mino_lz(all_t *a)
{
    if (a->life_mino1_lz > 0) {
        anim_mino1_lz(a);
        sfRenderWindow_drawSprite(a->window, a->mino1_lz, NULL);
        sfRenderWindow_drawCircleShape(a->window, a->circle_mino1_lz, NULL);
    } else {
        a->mino1_dead_lz = true;
        a->is_fight_mino1_lz = false;
    }
    if (a->life_mino2_lz > 0) {
        anim_mino2_lz(a);
        sfRenderWindow_drawSprite(a->window, a->mino2_lz, NULL);
        sfRenderWindow_drawCircleShape(a->window, a->circle_mino2_lz, NULL);
    } else {
        a->mino2_dead_lz = true;
        a->is_fight_mino2_lz = false;
    }
    display_mino2(a);
}

void display_maplz(all_t *a)
{
    if (a->is_mlz_open == true) {
        sfRenderWindow_drawSprite(a->window, a->map_lz, NULL);
        anim_port_lz(a);
        sfRenderWindow_drawSprite(a->window, a->portail_lz, NULL);
        display_mino_lz(a);
        anim_port2_lz(a);
        sfRenderWindow_drawSprite(a->window, a->portail2_lz, NULL);
        int x = sfSprite_getPosition(a->pp).x;
        int y = sfSprite_getPosition(a->pp).y;
        sfFloatRect rect_tp_inmlp =
                    sfRectangleShape_getGlobalBounds(a->tp_in_mlp);
        if (sfKeyboard_isKeyPressed(sfKeyE) &&
            sfFloatRect_contains(&rect_tp_inmlp, x, y)) {
            a->is_mlz_open = false;
            a->is_mlp_open = true;
        }
    }
}
