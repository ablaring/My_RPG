/*
** EPITECH PROJECT, 2023
** drawmap
** File description:
** desc
*/

#include "rpg1.h"

void draw_map_second_suite(all_t *a)
{
    if (a->nb_rect_port == 2){
        sfRenderWindow_drawSprite(a->window, a->map_second[2].sprite, NULL);
        sfRenderWindow_drawCircleShape(a->window, a->circle, NULL);
        sfRenderWindow_drawRectangleShape(a->window,
        a->rectangle[7].rect, NULL);
        sfRenderWindow_drawSprite(a->window, IMG[1].sprite, NULL);
    }
    if (a->nb_rect_port == 3){
        sfRenderWindow_drawSprite(a->window, a->map_second[4].sprite, NULL);
        chest_colision_porc_house(a);
        inside_housse(a);
    }
}

void draw_map_second(all_t *a)
{
    if (a->nb_rect_port == 1){
        sfRenderWindow_drawSprite(a->window, a->map_second[0].sprite, NULL);
        sfRenderWindow_drawSprite(a->window, a->portail_porc, NULL);
        chest_colision_porc(a);
        house_colisporc(a);
    }
    draw_map_second_suite(a);
}
