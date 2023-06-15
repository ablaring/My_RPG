/*
** EPITECH PROJECT, 2023
** inventory.c
** File description:
** desc
*/

#include "rpg1.h"

void switch_rect_inventory3(all_t *a)
{
    if (sfKeyboard_isKeyPressed(sfKeyNum9)){
        sfRectangleShape_setPosition(IMG[0].rectangle,
        (sfVector2f){IMG[0].pos.x + 602, IMG[0].pos.y + 43});
    }
    if (sfKeyboard_isKeyPressed(sfKeyNum0)){
        sfRectangleShape_setPosition(IMG[0].rectangle,
        (sfVector2f){IMG[0].pos.x + 663, IMG[0].pos.y + 43});
    }
}

void switch_rect_inventory2(all_t *a)
{
    if (sfKeyboard_isKeyPressed(sfKeyNum5)){
        sfRectangleShape_setPosition(IMG[0].rectangle,
        (sfVector2f){IMG[0].pos.x + 362, IMG[0].pos.y + 43});
    }
    if (sfKeyboard_isKeyPressed(sfKeyNum6)){
        sfRectangleShape_setPosition(IMG[0].rectangle,
        (sfVector2f){IMG[0].pos.x + 417, IMG[0].pos.y + 43});
    }
    if (sfKeyboard_isKeyPressed(sfKeyNum7)){
        sfRectangleShape_setPosition(IMG[0].rectangle,
        (sfVector2f){IMG[0].pos.x + 482, IMG[0].pos.y + 43});
    }
    if (sfKeyboard_isKeyPressed(sfKeyNum8)){
        sfRectangleShape_setPosition(IMG[0].rectangle,
        (sfVector2f){IMG[0].pos.x + 544, IMG[0].pos.y + 43});
    }
    switch_rect_inventory3(a);
}

void switch_rect_inventory_suite(all_t *a)
{
    if (sfKeyboard_isKeyPressed(sfKeyNum3)){
        a->potion[0].is_true = true;
        a->potion[1].is_true = false;
        sfRectangleShape_setPosition(IMG[0].rectangle,
        (sfVector2f){IMG[0].pos.x + 242, IMG[0].pos.y + 43});
    }
    if (sfKeyboard_isKeyPressed(sfKeyNum4)){
        a->potion[1].is_true = true;
        a->potion[0].is_true = false;
        sfRectangleShape_setPosition(IMG[0].rectangle,
        (sfVector2f){IMG[0].pos.x + 297, IMG[0].pos.y + 43});
    }
}

void switch_rect_inventory(all_t *a)
{
    if (sfKeyboard_isKeyPressed(sfKeyNum1)){
        a->potion[0].is_true = false;
        a->potion[1].is_true = false;
        sfRectangleShape_setPosition(IMG[0].rectangle,
        (sfVector2f){IMG[0].pos.x + 122, IMG[0].pos.y + 43});
    }
    if (sfKeyboard_isKeyPressed(sfKeyNum2)){
        a->potion[0].is_true = false;
        a->potion[1].is_true = false;
        sfRectangleShape_setPosition(IMG[0].rectangle,
        (sfVector2f){IMG[0].pos.x + 182, IMG[0].pos.y + 43});
    }
    switch_rect_inventory_suite(a);
    switch_rect_inventory2(a);
}
