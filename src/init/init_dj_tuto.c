/*
** EPITECH PROJECT, 2023
** init_dj_tuto
** File description:
** init_dj_tuto
*/
#include "rpg1.h"

void init_dj_tuto1(all_t *a)
{
    sfVector2f pos_mt = {945, 826};
    a->minotaur = my_gettext("Minotaur", "asset/Baxoe.ttf", pos_mt, 20);
    sfText_setColor(a->minotaur, sfWhite);
    a->x_ed = a->x_en_dj + 40; a->y_ed = a->y_en_dj + 50;
    sfVector2f pos_ed = {a->x_ed, a->y_ed}; sfVector2f sc_ed = {1.8, 1.8};
    a->enemey_dead = my_getsprite("asset/enemy_dead.png", pos_ed, sc_ed);
    a->ed_rect = (sfIntRect) {0, 0, 64, 65};
    sfSprite_setTextureRect(a->enemey_dead, a->ed_rect);
    a->clock_ed = sfClock_create();
}

void init_dj_tuto2(all_t *a)
{
    sfVector2f pos_edlife = {750, 856}; sfVector2f sz_edlife = {a->sx_led, 20};
    a->enemy_dj_life = my_getrect(pos_edlife, sz_edlife, sfRed);
    sfRectangleShape_setOutlineColor(a->enemy_dj_life, sfTransparent);
    init_dj_tuto1(a);
    a->x_ph_1 = 935; a->y_ph_1 = 330;
    sfVector2f sc_ph = {1.8, 1.8};
    sfVector2f pos_ph = {a->x_ph_1, a->y_ph_1};
    a->pp_hammer1 = my_getsprite("asset/pp_hammer.png", pos_ph, sc_ph);
    a->hammer_rect = (sfIntRect) {0, -3, 128, 124};
    sfSprite_setTextureRect(a->pp_hammer1, a->hammer_rect);
    float x_origin = 34; float y_origin = 45;
    sfVector2f origin = {x_origin, y_origin};
    sfSprite_setOrigin(a->pp_hammer1, origin);
    a->clock9 = sfClock_create();
}

void init_dj_tuto(all_t *a)
{
    a->x_dodjt = 812; a->y_dodjt = 236; sfVector2f sz_dodjt = {22, 161};
    sfVector2f pos_dodjt = {a->x_dodjt, a->y_dodjt};
    a->donjt_door = my_getrect(pos_dodjt, sz_dodjt, sfRed);
    a->x_en_dj = 1305; a->y_en_dj = 325; sfVector2f sc_enemy = {1.8, 1.8};
    sfVector2f pos_en_dt = {a->x_en_dj, a->y_en_dj};
    a->enemy_dj = my_getsprite("asset/enemy.png", pos_en_dt, sc_enemy);
    a->dj_rect.top = 126; a->dj_rect.left = 0;
    a->dj_rect.width = 128; a->dj_rect.height = 126;
    sfSprite_setTextureRect(a->enemy_dj, a->dj_rect);
    a->endj_hitbox = my_getcircle(a->x_en_dj, a->y_en_dj);
    init_forest(a);
    a->sx_led = 438.00;
    init_dj_tuto2(a);
}
