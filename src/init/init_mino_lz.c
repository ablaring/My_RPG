/*
** EPITECH PROJECT, 2022
** init_mino_lz.c
** File description:
** init_mino_lz.c
*/

#include"rpg1.h"

void init_mino1_lz(all_t *a)
{
    a->pos_mino1_lz = (sfVector2f) {-400, 1900};
    a->rect_mino1_lz = (sfIntRect) {0, 378, 128, 126};
    a->pos_circle_mino1_lz = (sfVector2f) {-435, 1875};
    sfVector2f scale = {1.8, 1.8};
    a->mino1_lz = my_getsprite("asset/enemy.png", a->pos_mino1_lz, scale);
    sfSprite_setTextureRect(a->mino1_lz, a->rect_mino1_lz);
    a->circle_mino1_lz = create_circle_shape(a->pos_circle_mino1_lz,
                                            150.0, 4.0);
    a->clock_mino1_lz = sfClock_create();
    a->life_mino1_lz = 50;
    a->life_max_mino1_lz = 50;
    a->is_fight_mino1_lz = false;
    a->mino1_dead_lz = false;
}

void init_mino2_lz(all_t *a)
{
    a->pos_mino2_lz = (sfVector2f) {2000, 500};
    a->rect_mino2_lz = (sfIntRect) {0, 126, 128, 126};
    a->pos_circle_mino2_lz = (sfVector2f) {1965, 475};
    sfVector2f scale = {1.8, 1.8};
    a->mino2_lz = my_getsprite("asset/enemy.png", a->pos_mino2_lz, scale);
    sfSprite_setTextureRect(a->mino2_lz, a->rect_mino2_lz);
    a->circle_mino2_lz = create_circle_shape(a->pos_circle_mino2_lz,
                                            150.0, 4.0);
    a->clock_mino2_lz = sfClock_create();
    a->life_mino2_lz = 80;
    a->life_max_mino2_lz = 80;
    a->is_fight_mino2_lz = false;
    a->mino2_dead_lz = false;
}

void init_mino3_lz(all_t *a)
{
    a->pos_mino3_lz = (sfVector2f) {1300, 3000};
    a->rect_mino3_lz = (sfIntRect) {0, 126, 128, 126};
    a->pos_circle_mino3_lz = (sfVector2f) {1265, 2975};
    sfVector2f scale = {1.8, 1.8};
    a->mino3_lz = my_getsprite("asset/enemy.png", a->pos_mino3_lz, scale);
    sfSprite_setTextureRect(a->mino3_lz, a->rect_mino3_lz);
    a->circle_mino3_lz = create_circle_shape(a->pos_circle_mino3_lz,
                                            150.0, 4.0);
    a->clock_mino3_lz = sfClock_create();
    a->life_mino3_lz = 70;
    a->life_max_mino3_lz = 70;
    a->is_fight_mino3_lz = false;
    a->mino3_dead_lz = false;
}
