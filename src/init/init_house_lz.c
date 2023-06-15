/*
** EPITECH PROJECT, 2022
** init_house_lz.c
** File description:
** init_house_lz.c
*/

#include "rpg1.h"

void init_h1_lz(all_t *a)
{
    sfVector2f sc_h1_lz = {a->sc_hlz_x, a->sc_hlz_y};
    a->pos_h1_lz = (sfVector2f) {-175, 940};
    sfVector2f size = {16, 150};
    a->pos_inh1 = (sfVector2f) {-400, -90};
    a->pos_door_in1 = (sfVector2f) {966, 280};
    a->door_in_h1 = my_getrect(a->pos_door_in1, size, sfTransparent);
    a->h1_comp_lz = sfImage_createFromFile("asset/h1_lz_img.png");
    a->door1_lz = my_getrect(a->pos_h1_lz, size, sfTransparent);
    a->h1_lz = my_getsprite("asset/h1_lz.png", a->pos_inh1 , sc_h1_lz);

    a->pos_port2_lz = (sfVector2f) {1000, 3350};
    a->portail2_lz = my_getsprite("asset/portail.png",
                            a->pos_port2_lz, (sfVector2f) {0.3, 0.3});
    a->clock_port2_lz = sfClock_create();
    a->rect_port2_lz = (sfIntRect) {0, 0, 250, 511};
    sfSprite_setTextureRect(a->portail2_lz, a->rect_port2_lz);
}

void init_h2_lz(all_t *a)
{
    sfVector2f sc_h2_lz = {a->sc_hlz_x, a->sc_hlz_y};
    a->pos_h2_lz = (sfVector2f) {10, 3040};
    sfVector2f size = {16, 103};
    sfVector2f size_door = {20, 150};
    a->pos_inh2 = (sfVector2f) {680, 20};
    a->pos_door_in2 = (sfVector2f) {870, 240};
    a->door_in_h2 = my_getrect(a->pos_door_in2, size_door, sfTransparent);
    a->door2_lz = my_getrect(a->pos_h2_lz, size, sfTransparent);
    a->h2_comp_lz = sfImage_createFromFile("asset/h2_lz_img.png");
    a->h2_lz = my_getsprite("asset/h2_lz.png", a->pos_inh2 , sc_h2_lz);
    a->col_h2_init = sfImage_getPixel(a->h2_comp_lz, 0, 0);
    a->pos_h2_cof_lz = (sfVector2f) {1970, 240};
    sfVector2f size_c = {70, 70};
    a->coffre_h2_lz = my_getrect(a->pos_h2_cof_lz,size_c, sfTransparent);
}

void init_h3_lz(all_t *a)
{
    sfVector2f sc_h3_lz = {a->sc_hlz_x, a->sc_hlz_y};
    a->pos_h3_lz = (sfVector2f) {2048, 2800};
    sfVector2f size = {150, 16};
    a->pos_inh3 = (sfVector2f) {200, 150};
    a->pos_door_in3 = (sfVector2f) {870, 270};
    a->door_in_h3 = my_getrect(a->pos_door_in3, size, sfTransparent);
    a->door3_lz = my_getrect(a->pos_h3_lz, size, sfTransparent);
    a->h3_comp_lz = sfImage_createFromFile("asset/h3_lz_img.png");
    a->h3_lz = my_getsprite("asset/h3_lz.png", a->pos_inh3 , sc_h3_lz);
    a->pos_h3_cof_lz = (sfVector2f) {1475, 300};
    sfVector2f size_c = {70, 70};
    a->coffre_h3_lz = my_getrect(a->pos_h3_cof_lz,size_c, sfTransparent);
}

void init_donj_lz(all_t *a)
{
    sfVector2f sc_h3_lz = {a->sc_hlz_x, a->sc_hlz_y};
    a->pos_donj_lz = (sfVector2f) {850, 2420};
    sfVector2f size = {200, 16};
    a->pos_indj_lz = (sfVector2f) {200, -1050};
    a->pos_door_indj_lz = (sfVector2f) {850, 400};
    a->door_dj_lz = my_getrect(a->pos_donj_lz, size, sfTransparent);
    a->door_indj_lz = my_getrect(a->pos_door_indj_lz, size, sfTransparent);
    a->donj_comp_lz = sfImage_createFromFile("asset/dj_lz_img.png");
    a->dj_lz = my_getsprite("asset/dj_lz.png", a->pos_indj_lz, sc_h3_lz);
    a->pos_dj_cof_lz = (sfVector2f) {900, -990};
    sfVector2f size_c = {75, 75};
    a->coffre_dj_lz = my_getrect(a->pos_dj_cof_lz,size_c, sfTransparent);
}
