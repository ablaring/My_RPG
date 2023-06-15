/*
** EPITECH PROJECT, 2023
** init_bot_suite.c
** File description:
** init
*/
#include "rpg1.h"

void init_house_porc(all_t *a)
{
    a->levelup = malloc(sizeof(bool) * 10);
    a->chest_open = malloc(sizeof(bool) * 10);
    for (size_t i = 0; i <= 3; i++)
        a->levelup[i] = false;
    for (size_t i = 0; i <= 7; i++)
        a->chest_open[0] = false;
    a->map_second[4].sprite = my_getsprite("asset/porc_h1.png",
    (sfVector2f){-800, -950}, (sfVector2f){2, 2});
    a->map_second[5].img = sfImage_createFromFile("asset/porc_h1_2.png");
}

void init_chest(all_t *a)
{
    a->colision_object = malloc(sizeof(rectangle_t) * 6);
    a->nb_coli = 3;
    a->colision_object[0].size = (sfVector2f){85, 75};
    a->colision_object[0].pos = (sfVector2f){-4320, 3180};
    a->colision_object[0].rect = create_rect_shape(a->colision_object[0].pos,
    a->colision_object[0].size , sfWhite, 4);
    a->colision_object[1].size = (sfVector2f){85, 75};
    a->colision_object[1].pos = (sfVector2f){-4560, 1880};
    a->colision_object[1].rect = create_rect_shape(a->colision_object[1].pos,
    a->colision_object[1].size , sfWhite, 4);
    a->colision_object[2].size = (sfVector2f){380, 35};
    a->colision_object[2].pos = (sfVector2f){760, 3530};
    a->colision_object[2].rect = create_rect_shape(a->colision_object[2].pos,
    a->colision_object[2].size , sfWhite, 4);
    a->colision_object[3].size = (sfVector2f){65, 65};
    a->colision_object[3].pos = (sfVector2f){-1895, -480};
    a->colision_object[3].rect = create_rect_shape(a->colision_object[3].pos,
    a->colision_object[3].size , sfWhite, 4);
    init_house_porc(a);
}

void init_bot_3(all_t *a)
{
    a->rectangle[7].pos = (sfVector2f){a->windowSize.x / 2 - 211,
    a->windowSize.y - 149};
    a->rectangle[7].size = (sfVector2f){450, 15};
    a->rectangle[7].rect = create_rect_shape(a->rectangle[7].pos,
    a->rectangle[7].size , sfBlack, 1);
    a->rectangle[8].size = (sfVector2f){35, 750};
    a->rectangle[8].pos = (sfVector2f){800, 0};
    a->rectangle[8].rect = create_rect_shape(a->rectangle[8].pos,
    a->rectangle[8].size , sfWhite, 4);
    a->rectangle[9].size = (sfVector2f){600, 35};
    a->rectangle[9].pos = (sfVector2f){600, 210};
    a->rectangle[9].rect = create_rect_shape(a->rectangle[9].pos,
    a->rectangle[9].size , sfWhite, 4);
    a->rectangle[10].size = (sfVector2f){75, 65};
    a->rectangle[10].pos = (sfVector2f){1440, 980};
    a->rectangle[10].rect = create_rect_shape(a->rectangle[10].pos,
    a->rectangle[10].size , sfWhite, 4);
    sfRectangleShape_setFillColor(a->rectangle[7].rect, sfRed);
    init_chest(a);
}

void init_utils2(all_t *a)
{
    a->isdead = false;
    a->utils_perso[4].scale = (sfVector2f){0.1, 0.1};
    a->utils_perso[4].pos = (sfVector2f){IMG[0].pos.x + 362, IMG[0].pos.y + 38};
    a->utils_perso[4].sprite = my_getsprite("asset/key_lezard.png",
    a->utils_perso[4].pos, a->utils_perso[4].scale);
    a->utils_perso[5].scale = (sfVector2f){0.1, 0.1};
    a->utils_perso[5].pos = (sfVector2f){IMG[0].pos.x + 417, IMG[0].pos.y + 38};
    a->utils_perso[5].sprite = my_getsprite("asset/key_loup.png",
    a->utils_perso[5].pos, a->utils_perso[5].scale);
    a->utils_perso[6].scale = (sfVector2f){0.1, 0.1};
    a->utils_perso[6].pos = (sfVector2f){IMG[0].pos.x + 417, IMG[0].pos.y + 38};
    a->utils_perso[6].sprite = my_getsprite("asset/key_porc.png",
    a->utils_perso[6].pos, a->utils_perso[6].scale);
}
