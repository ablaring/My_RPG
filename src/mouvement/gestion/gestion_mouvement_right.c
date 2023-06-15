/*
** EPITECH PROJECT, 2023
** gestion_mouvement_right
** File description:
** gestion_mouvement_right
*/
#include "rpg1.h"

void gestion_mouvement_right(all_t *a)
{
    if (a->is_mlp_open == true && a->ischatting == false)
        moove_test_x_left(a);
    if (a->isinh1 == true && a->ischatting == false)
        h1_right(a);
    if (a->isinh2 == true && a->ischatting == false)
        h2_right(a);
    if (a->isinh3 == true && a->ischatting == false)
        h3_right(a);
    if (a->isinh4 == true && a->ischatting == false)
        h4_right(a);
    if (a->isinh5 == true && a->ischatting == false)
        h5_right(a);
    if (a->isintuto == true && a->ischatting == false)
        tuto_right(a);
    if (a->isindonjt == true && a->ischatting == false)
        donjt_right(a);
    if (a->isindjml == true && a->ischatting == false)
        djml_right(a);
    if (a->isindjtop == true && a->ischatting == false)
        djmlpu_right(a);
}
