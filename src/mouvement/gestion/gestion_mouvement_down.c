/*
** EPITECH PROJECT, 2023
** gestion_mouvement_down.c
** File description:
** gestion_mouvement_down
*/
#include "rpg1.h"

void gestion_mouvement_down2(all_t *a)
{
    if (a->isindonjt == true && a->ischatting == false)
        donjt_down(a);
    if (a->isindjml == true && a->ischatting == false)
        djml_down(a);
    if (a->isindjtop == true && a->ischatting == false) {
        djmlpu_down(a);
    }
}

void gestion_mouvement_down(all_t *a)
{
    if (a->is_mlp_open == true && a->ischatting == false)
        moove_test_y_down(a);
    if (a->isinh1 == true && a->ischatting == false)
        h1_down(a);
    if (a->isinh2 == true && a->ischatting == false)
        h2_down(a);
    if (a->isinh3 == true && a->ischatting == false)
        h3_down(a);
    if (a->isinh4 == true && a->ischatting == false)
        h4_down(a);
    if (a->isinh5 == true && a->ischatting == false)
        h5_down(a);
    if (a->isintuto == true && a->ischatting == false)
        tuto_down(a);
    gestion_mouvement_down2(a);
}
