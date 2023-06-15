/*
** EPITECH PROJECT, 2023
** gestion_mouvement.c
** File description:
** gestion_mouvement
*/
#include "rpg1.h"

void gestion_mouvement_left2(all_t *a)
{
    if (a->isindonjt == true && a->ischatting == false)
        donjt_left(a);
    if (a->isindjml == true && a->ischatting == false)
        djml_left(a);
    if (a->isindjtop == true && a->ischatting == false)
        djmlpu_left(a);
}

void gestion_mouvement_left(all_t *a)
{
    if (a->is_mlp_open == true && a->ischatting == false)
        moove_test_x_right(a);
    if (a->isinh1 == true && a->ischatting == false)
        h1_left(a);
    if (a->isinh2 == true && a->ischatting == false)
        h2_left(a);
    if (a->isinh3 == true && a->ischatting == false)
        h3_left(a);
    if (a->isinh4 == true && a->ischatting == false)
        h4_left(a);
    if (a->isinh5 == true && a->ischatting == false)
        h5_left(a);
    if (a->isintuto == true && a->ischatting == false)
        tuto_left(a);
    gestion_mouvement_left2(a);
}
