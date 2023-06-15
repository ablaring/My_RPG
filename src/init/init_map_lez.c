/*
** EPITECH PROJECT, 2022
** map_lez.c
** File description:
** RPG
*/

#include "rpg1.h"

void init_map_lizard(all_t *a)
{
    a->spawn_x = -1100;
    a->spawn_y = -160;
    a->scale_x_lz = 4;
    a->scale_y_lz = 4;
    a->pos_port_lz = (sfVector2f) {895, 120};
    a->map_lz = my_getsprite("asset/lezard_map.png",(sfVector2f)
        {a->spawn_x, a->spawn_y}, (sfVector2f) {a->scale_x, a->scale_y});
    a->lz_comp = sfImage_createFromFile("asset/map_lz_img.png");
    a->col_lz = sfImage_getPixel(a->lz_comp, 0, 0);
    a->pos_boss_lz = (sfVector2f) {560, -800};
    a->scale_boss_lz = (sfVector2f) {4, 4};
    a->lz_boss = my_getsprite("asset/mechant_atk.png",
                                a->pos_boss_lz, a->scale_boss_lz);
    a->portail_lz = my_getsprite("asset/portail.png",
                            a->pos_port_lz, (sfVector2f) {0.3, 0.3});
    a->rect_port_lz = (sfIntRect) {0, 0, 250, 511};
    sfSprite_setTextureRect(a->portail_lz, a->rect_port_lz);
    init_house_lz(a);
}

void init_house_lz(all_t *a)
{
    a->sc_hlz_x = 3;
    a->sc_hlz_y = 3;
    a->isinh1_lz = false;
    a->isinh2_lz = false;
    a->isinh3_lz = false;
    a->isindonj_lz = false;
    init_mino1_lz(a);
    init_mino2_lz(a);
    init_mino3_lz(a);
    init_h1_lz(a);
    init_h2_lz(a);
    init_h3_lz(a);
    init_donj_lz(a);
    init_circle_portail_lz(a);
}

void init_circle_portail_lz(all_t *a)
{
    a->clock_lz = sfClock_create();
    a->seconds_lz = 0.15;
    a->rect_lz = (sfIntRect) {0, 0, 192, 129};
    sfSprite_setTextureRect(a->lz_boss, a->rect_lz);
    a->clock_port_lz = sfClock_create();
    a->pos_circle_lz = (sfVector2f) {700, -750};
    a->circle_lz_boss = create_circle_shape(a->pos_circle_lz,
                                            250.0, 4.0);
    a->pos_tp_in_mlp = (sfVector2f) {1000, 3350};
    sfVector2f size = {75, 150};
    a->tp_in_mlp = my_getrect(a->pos_tp_in_mlp, size,sfTransparent);
}
