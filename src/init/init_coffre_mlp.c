/*
** EPITECH PROJECT, 2022
** init_coffre_mlp.c
** File description:
** init_coffre_mlp.c
*/

#include "rpg1.h"

void init_coffre(all_t *a)
{
    a->pos_coffre_tuto = (sfVector2f) {1230, 140};
    sfVector2f size = {70, 70};
    a->coffre_tuto = my_getrect(a->pos_coffre_tuto, size, sfTransparent);
    a->pos_coffre1_mlp = (sfVector2f) {190, -140};
    a->pos_coffre2_mlp = (sfVector2f) {1200, 450};
    a->pos_coffre3_mlp = (sfVector2f) {1435, -60};
    a->pos_coffre5_mlp = (sfVector2f) {1210, -100};
    a->coffre1_mlp = my_getrect(a->pos_coffre1_mlp, size, sfTransparent);
    a->coffre2_mlp = my_getrect(a->pos_coffre2_mlp, size, sfTransparent);
    a->coffre3_mlp = my_getrect(a->pos_coffre3_mlp, size, sfTransparent);
    a->coffre5_mlp = my_getrect(a->pos_coffre5_mlp, size, sfTransparent);
}
