/*
** EPITECH PROJECT, 2022
** CSFML
** File description:
** utils2.c
*/
#include "rpg1.h"

sfCircleShape *create_circle_shape(sfVector2f pos, float radius,
float outlineThickness)
{
    sfCircleShape *circle = sfCircleShape_create();
    if (!circle)
        return NULL;
    sfCircleShape_setPosition(circle, pos);
    sfCircleShape_setRadius(circle, radius);
    sfCircleShape_setFillColor(circle, sfTransparent);
    sfCircleShape_setOutlineColor(circle, sfRed);
    sfCircleShape_setOutlineThickness(circle, outlineThickness);
    return circle;
}

sfSprite *my_getsprite2(char *filepath)
{
    sfTexture *texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfFalse);
    return sprite;
}
