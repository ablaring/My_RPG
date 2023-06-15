/*
** EPITECH PROJECT, 2023
** init.c
** File description:
** init
*/
#include "rpg1.h"

void init_lp_map(all_t *a)
{
    a->x_back = -1102; a->y_back = -52; a->x_port1 = 895, a->y_port1 = 120;
    sfVector2f pos_fmap = {a->x_back, a->y_back}; a->scale_x = 4;
    a->scale_y = 4; sfVector2f scale_fmap = {4, 4};
    a->first_map = my_getsprite("asset/map_loup.png", pos_fmap, scale_fmap);
    sfVector2f pos_port = {a->x_port1, a->y_port1};
    a->pos_portail_porc.x = 895; a->pos_portail_porc.y = 3450;
    sfVector2f sc_port = {0.3, 0.3};
    a->portail = my_getsprite("asset/portail.png", pos_port, sc_port);
    a->portail_porc = my_getsprite("asset/portail_porc.png",
    a->pos_portail_porc,sc_port);
    a->rect2.top = 0; a->rect2.left = 0; a->rect2.height = 511;
    sfSprite_setTextureRect(a->portail, a->rect2);
    a->clock2 = sfClock_create();
    a->pos = malloc(sizeof(sfVector2f) * 100 + 1);
    a->rect2.width = 250;
    a->im_comp = sfImage_createFromFile("asset/map_loup_image.png");
    a->col_init = sfImage_getPixel(a->im_comp, 0, 0);
}

void init_lp_house(all_t *a)
{
    a->house_lp = malloc(sizeof(sfSprite *) * (6 + 1));
    a->pos_house_x = malloc(sizeof(int) * (6 + 1));
    a->pos_house_y = malloc(sizeof(int) * (6 + 1));
    a->sc_house_x = 3;
    a->sc_house_y = 3;
    init_house1(a); init_house2(a); init_house3(a); init_house4(a);
    init_house5(a);
}

void init_sprite(all_t *a)
{
    a->windowSize = sfRenderWindow_getSize(WINDOW);
    IMG = malloc(sizeof(picture_t) * 100);
    IMG[0].pos = (sfVector2f){a->windowSize.x / 2 - 411, a->windowSize.y - 109};
    IMG[0].scale = (sfVector2f){1, 1};
    IMG[0].sprite = my_getsprite("asset/inventory.png",
    IMG[0].pos, IMG[0].scale);
    IMG[0].rectangle = create_rect_shape(IMG[0].pos,
    (sfVector2f){55, 55}, sfWhite, 3);
    sfRectangleShape_setPosition(IMG[0].rectangle,
    (sfVector2f){IMG[0].pos.x + 122, IMG[0].pos.y + 43});
    a->rectangle = malloc(sizeof(sfRectangleShape *) * 100);
    a->rectangle[0].pos = a->pos_portail_porc;
    a->rectangle[0].rect = create_rect_shape(a->pos_portail_porc,
    (sfVector2f){100, 150}, sfWhite, 3);
    a->rectangle[1].pos = (sfVector2f){-1980, 1800};
    a->rectangle[1].rect = create_rect_shape((a->rectangle[1].pos),
    (sfVector2f){70, 400}, sfWhite, 3);
}

void init_all(all_t *a)
{
    init_bool(a);
    init_values(a);
    init_bool(a);
    a->menu_music = sfMusic_createFromFile("asset/menu_music.ogg");
    sfMusic_setLoop(a->menu_music, sfTrue);
    sfVector2f pos_pp = {935, 330}; sfVector2f sc_pp = {1.8, 1.8};
    a->pp = my_getsprite("asset/mouvement_pp.png", pos_pp, sc_pp);
    a->rect = (sfIntRect) {0, 130, 64, 65};
    sfSprite_setTextureRect(a->pp, a->rect);
    float x_origin = 34; float y_origin = 45;
    sfVector2f origin = {x_origin, y_origin};
    sfSprite_setOrigin(a->pp, origin); a->clock = sfClock_create();
    init_lp_map(a); init_lp_house(a); init_life_strength(a);
    init_lp_door(a); init_imgh(a); init_door_inte(a); init_menu(a);
    init_tuto(a); init_perso_attack(a); init_sprite(a); init_map_sec(a);
    init_map_lizard(a); init_donjon_mlp(a);
}
