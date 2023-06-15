/*
** EPITECH PROJECT, 2023
** init.c
** File description:
** init
*/
#include "rpg1.h"

void init_utils(all_t *a)
{
    a->utils_perso = malloc(sizeof(picture_t) * 6);
    a->utils_perso[0].scale = (sfVector2f){2.9, 2.9};
    a->utils_perso[0].pos = (sfVector2f){IMG[0].pos.x + 247, IMG[0].pos.y + 43};
    a->utils_perso[0].sprite = my_getsprite("asset/potion_life.png",
    a->utils_perso[0].pos, a->utils_perso[0].scale);
    a->utils_perso[1].scale = (sfVector2f){2.9, 2.9};
    a->utils_perso[1].pos = (sfVector2f){IMG[0].pos.x + 302, IMG[0].pos.y + 43};
    a->utils_perso[1].sprite = my_getsprite("asset/potion_strenght.png",
    a->utils_perso[1].pos, a->utils_perso[1].scale);
    a->utils_perso[2].scale = (sfVector2f){0.07, 0.07};
    a->utils_perso[2].pos = (sfVector2f){IMG[0].pos.x + 122, IMG[0].pos.y + 43};
    a->utils_perso[2].sprite = my_getsprite("asset/tools.png",
    a->utils_perso[2].pos, a->utils_perso[2].scale);
    a->utils_perso[3].scale = (sfVector2f){0.58, 0.58};
    a->utils_perso[3].pos = (sfVector2f){IMG[0].pos.x + 182, IMG[0].pos.y + 43};
    a->utils_perso[3].sprite = my_getsprite("asset/hammer.png",
    a->utils_perso[3].pos, a->utils_perso[3].scale);
    init_utils2(a);
}

void init_potion(all_t *a)
{
    a->timing_p.clock = sfClock_create();
    a->potion = malloc(sizeof(picture_t) * 3);
    a->potion[0].scale = (sfVector2f){5, 5};
    a->potion[0].pos = (sfVector2f){1800, 50};
    a->potion[0].sprite = my_getsprite("asset/potion_life.png",
    a->potion[0].pos, a->potion[0].scale);
    a->potion[1].scale = (sfVector2f){5, 5};
    a->potion[1].pos = (sfVector2f){1800, 50};
    a->potion[1].sprite = my_getsprite("asset/potion_strenght.png",
    a->potion[1].pos, a->potion[1].scale);
    a->potion[0].nb_potion = 0;
    a->potion[1].nb_potion = 0;
    init_potion_suite(a);
}

void init_bot(all_t *a)
{
    a->nb_bot = 6;
    IMG[4].pos = (sfVector2f){860, 630};
    IMG[5].pos = (sfVector2f){-1500, 130};
    IMG[6].pos = (sfVector2f){-1500, 130};
    IMG[7].pos = (sfVector2f){-1500, 580};
    IMG[8].pos = (sfVector2f){-2540, 475};
    for (int i = 0; i < a->nb_bot; i++){
        IMG[i + 4].scale = (sfVector2f){2, 2};
        IMG[i + 4].sprite = my_getsprite("asset/pig_pnj.png",
        IMG[i + 4].pos, IMG[i + 4].scale);
        IMG[i + 4].rect = (sfIntRect){0, 150, 65, 50};
        sfSprite_setTextureRect(IMG[i + 4].sprite, IMG[i + 4].rect);
    }
    IMG[3].pos = (sfVector2f){960, 170};
    IMG[3].scale = (sfVector2f){2, 2};
    IMG[3].sprite = my_getsprite("asset/pig_mage.png",
    IMG[3].pos, IMG[3].scale);
    IMG[3].rect = (sfIntRect){250, 1800, 60, 70};
    sfSprite_setTextureRect(IMG[3].sprite, IMG[3].rect);
    init_suite_bot(a);
}

void init_suite_bot(all_t *a)
{
    a->timing_boss.clock = sfClock_create();
    a->potion_song = sfMusic_createFromFile("asset/minecraft_potion.ogg");
    a->circle = create_circle_shape((sfVector2f){2900, 1075}, 250, 4);
    a->rectangle[2].size = (sfVector2f){150, 20};
    a->rectangle[2].rect = create_rect_shape((sfVector2f){70, 40},
    a->rectangle[2].size , sfBlack, 1);
    sfRectangleShape_setFillColor(a->rectangle[2].rect, sfRed);
    a->rectangle[3].size = (sfVector2f){150, 20};
    a->rectangle[3].rect = create_rect_shape((sfVector2f){70, 85},
    a->rectangle[3].size, sfBlack, 1);
    sfRectangleShape_setFillColor(a->rectangle[3].rect,
    sfColor_fromRGB(251,163,0));
    init_utils(a);
    init_potion(a);
    init_text(a);
    init_level(a);
    init_bot_3(a);
}

void init_map_sec(all_t *a)
{
    a->nb_rect_port = 0;
    a->one_time = false;
    a->map_second = malloc(sizeof(picture_t) * 8);
    IMG[1].pos = (sfVector2f){2800, -1000};
    IMG[1].scale = (sfVector2f){4, 4};
    IMG[1].rect = (sfIntRect){250, 1800, 60, 70};
    IMG[1].sprite = my_getsprite("asset/pig_boss.png",IMG[1].pos, IMG[1].scale);
    sfSprite_setTextureRect(IMG[1].sprite, IMG[1].rect);
    IMG[2].pos = (sfVector2f){1030, 230};
    IMG[2].scale = (sfVector2f){2, 2};
    IMG[2].sprite = my_getsprite("asset/key_e.png", IMG[2].pos, IMG[2].scale);
    a->map_second[0].sprite = my_getsprite("asset/map_rtnew.png",
    (sfVector2f){a->x_back,a->y_back}, (sfVector2f){2, 2});
    a->map_second[1].img = sfImage_createFromFile("asset/map_rt2.png");
    a->map_second[2].sprite = my_getsprite("asset/map_donjeon.png",
    (sfVector2f){800, 1950}, (sfVector2f){2, 2});
    a->map_second[3].img =
    sfImage_createFromFile("asset/map_donjeon_colision.png");
    CLOCK.clock = sfClock_create();
    init_bot(a);
}
