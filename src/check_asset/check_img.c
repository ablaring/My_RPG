/*
** EPITECH PROJECT, 2023
** check_img.c
** File description:
** desc
*/

#include "rpg1.h"

char *assets[] = {
    "asset/map_loup.png", "asset/portail.png", "asset/portail_porc.png",
    "asset/inventory.png", "asset/mouvement_pp.png", "asset/map_loup_image.png",
    "asset/flèches_clavier.png", "asset/ancetre_head.png", "asset/map_tuto.png",
    "asset/map_tuto_image.png", "asset/map_tuto_dj.png",
    "asset/parchemin.png", "asset/potion_life.png", "asset/potion_strenght.png",
    "asset/tools.png", "asset/hammer.png", "asset/pig_pnj.png",
    "asset/pp_hammer.png", "asset/coeur.png", "asset/house_1_image.png",
    "asset/house2_image.png", "asset/house3_image.png",
    "asset/house5_image.png", "asset/house_1.png", "asset/house2.png",
    "asset/house3.png", "asset/house4.png", "asset/house5.png",
    "asset/enemy_dead.png", "asset/enemy.png", "asset/porc_h1.png",
    "asset/porc_h1_2.png", "asset/fond_menu.jpg", "asset/fleches.png",
    "asset/arrow_up.png", "asset/arrow_down.png", "asset/arrow_upw.png",
    "asset/arrow_downw.png", "asset/echap.png", "asset/fond_gback.jpg",
    "asset/exit.png", "asset/settings.png", "asset/pig_mage.png",
    "asset/foret.png", "asset/house4_image.png", "asset/map_tuto_dj_img.png",
    "asset/boss_loup_combat.png", "asset/game-over.jpeg",
    "asset/donjon_loup_haut_img.png", "asset/donjon_loup_haut_img.png",
    "asset/donjon_loup_img.png", "asset/donjon_loup.png", NULL};

int my_getsprite_checked(char *filepath) {
    sfTexture *texture = sfTexture_createFromFile(filepath, NULL);
    if (!texture){
        return 84;
    }
    sfTexture_destroy(texture);
    return 0;
}

int check_img_suite(char *assets[])
{
    for (int i = 0; assets[i] != NULL; ++i){
        if (my_getsprite_checked(assets[i]) == 84)
            return 84;
    }
    return 0;
}

int check_img(void)
{
    if (check_img_suite(assets) == 84)
        return 84;
    return 0;
}
