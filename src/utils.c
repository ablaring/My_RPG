/*
** EPITECH PROJECT, 2022
** CSFML
** File description:
** utils.c
*/
#include "rpg1.h"

sfSprite *my_getsprite(char *filepath, sfVector2f pos, sfVector2f scale)
{
    sfTexture *texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfFalse);
    return sprite;
}

sfRectangleShape *my_getrect(sfVector2f pos, sfVector2f size, sfColor col)
{
    sfRectangleShape *rectangle = sfRectangleShape_create();
    sfRectangleShape_setSize(rectangle, size);
    sfRectangleShape_setPosition(rectangle, pos);
    sfRectangleShape_setFillColor(rectangle, col);
    sfRectangleShape_setOutlineThickness(rectangle, 3);
    sfRectangleShape_setOutlineColor(rectangle, sfWhite);
    return rectangle;
}

sfText *my_gettext(char *phrase, char *police, sfVector2f pos, int size)
{
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile(police);
    sfText_setPosition(text, pos);
    sfText_setString(text, phrase);
    sfText_setFont(text, font);
    sfText_setColor(text, sfBlack);
    sfText_setCharacterSize(text, size);
    return text;
}

sfCircleShape *my_getcircle(int x, int y)
{
    sfCircleShape *circle = sfCircleShape_create();
    int radius = 150;
    int x_origin = radius - 115;
    int y_origin = radius - 125;
    sfVector2f origin = {x_origin, y_origin};
    sfCircleShape_setRadius(circle, radius);
    sfCircleShape_setFillColor(circle, sfTransparent);
    sfCircleShape_setOutlineThickness(circle, 2);
    sfCircleShape_setOutlineColor(circle, sfRed);
    sfCircleShape_setPosition(circle, (sfVector2f) {x, y});
    sfCircleShape_setOrigin(circle, origin);
    return circle;
}

sfRectangleShape *create_rect_shape(sfVector2f pos,
sfVector2f size, sfColor color, int outline)
{
    sfRectangleShape *rect = sfRectangleShape_create();

    sfRectangleShape_setFillColor(rect, sfTransparent);
    sfRectangleShape_setPosition(rect, pos);
    sfRectangleShape_setSize(rect, size);
    sfRectangleShape_setOutlineColor(rect, color);
    sfRectangleShape_setOutlineThickness(rect, outline);

    return (rect);
}
