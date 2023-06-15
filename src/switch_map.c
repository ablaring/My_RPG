/*
** EPITECH PROJECT, 2023
** switch_map.c
** File description:
** desc
*/
#include "rpg1.h"

void switch_map_porc(all_t *a)
{
    a->nb_rect_port = 1;
    a->x_back = -5400;
    a->y_back = -1900;
    a->scale_x = 2;
    a->scale_y = 2;
    a->is_mlp_open = false;
    a->map_porc_open = true;
    sfSprite_setPosition(a->map_second[0].sprite,
    (sfVector2f){a->x_back, a->y_back});
    sfSprite_setScale(a->map_second[0].sprite,
    (sfVector2f){a->scale_x, a->scale_y});
    a->col_init = sfImage_getPixel(a->im_comp, 0, 0);
}

void switch_dungeon_porc(all_t *a)
{
    a->nb_rect_port = 2;
    a->before_pos.x = a->x_back;
    a->before_pos.y = a->y_back;
    a->x_back = 800;
    a->y_back = -1950;
    a->scale_x = 2;
    a->scale_y = 2;
    a->is_mlp_open = false;
    a->one_time = true;
    a->map_porc_open = true;
    sfSprite_setPosition(a->map_second[2].sprite,
    (sfVector2f){a->x_back, a->y_back});
    sfSprite_setScale(a->map_second[2].sprite,
    (sfVector2f){a->scale_x, a->scale_y});
}

void switch_map_lp(all_t *a)
{
    a->nb_rect_port = 0;
    a->scale_x = 4;
    a->scale_y = 4;
    a->x_back = -1102;
    a->y_back = -3000;
    a->x_port1 = 895;
    a->y_port1 = 120 - 3000;
    a->pos_portail_porc.x = 895;
    a->pos_portail_porc.y = 3450 - 3000;
    a->map_porc_open = false;
    a->is_mlp_open = true;
    sfSprite_setPosition(a->portail_porc, a->pos_portail_porc);
    sfRectangleShape_setPosition(a->rectangle[0].rect, a->pos_portail_porc);
    sfSprite_setPosition(a->first_map,
    (sfVector2f){a->x_back, a->y_back});
    sfSprite_setScale(a->first_map,
    (sfVector2f){a->scale_x, a->scale_y});
}

void switch_map_porc_before(all_t *a)
{
    a->nb_rect_port = 1;
    a->x_back = a->before_pos.x;
    a->y_back = a->before_pos.y;
    a->scale_x = 2;
    a->scale_y = 2;
    sfSprite_setPosition(a->map_second[0].sprite,
    (sfVector2f){a->x_back, a->y_back});
    sfSprite_setScale(a->map_second[0].sprite,
    (sfVector2f){a->scale_x, a->scale_y});
}
