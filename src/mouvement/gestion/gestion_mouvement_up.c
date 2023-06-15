/*
** EPITECH PROJECT, 2023
** gestion_mouvement_up.c
** File description:
** gestion_mouvement
*/
#include "rpg1.h"

void gestion_mouvement_up(all_t *a)
{
    if (a->is_mlp_open == true && a->ischatting == false)
        moove_test_y_up(a);
    if (a->isinh1 == true && a->ischatting == false)
        h1_up(a);
    if (a->isinh2 == true && a->ischatting == false)
        h2_up(a);
    if (a->isinh3 == true && a->ischatting == false)
        h3_up(a);
    if (a->isinh4 == true && a->ischatting == false)
        h4_up(a);
    if (a->isinh5 == true && a->ischatting == false)
        h5_up(a);
    if (a->isintuto == true && a->ischatting == false)
        tuto_up(a);
    if (a->isindonjt == true && a->ischatting == false)
        donjt_up(a);
    if (a->isindjml == true && a->ischatting == false)
        djml_up(a);
    if (a->isindjtop == true && a->ischatting == false)
        djmlpu_up(a);
}
