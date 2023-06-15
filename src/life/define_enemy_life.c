/*
** EPITECH PROJECT, 2023
** define_enemy_life.c
** File description:
** define_enemy_life
*/
#include "rpg1.h"

void def_en4_life(all_t *a)
{
    a->szx_life = (a->life_ed4 * 438.00) / 50;
    sfVector2f size_life_ed = {a->szx_life, 20};
    sfRectangleShape_setSize(a->eml_life[3], size_life_ed);
}

void def_en3_life(all_t *a)
{
    a->szx_life = (a->life_ed3 * 438.00) / 70;
    sfVector2f size_life_ed = {a->szx_life, 20};
    sfRectangleShape_setSize(a->eml_life[2], size_life_ed);
}

void def_en2_life(all_t *a)
{
    a->szx_life = (a->life_ed2 * 438.00) / 40;
    sfVector2f size_life_ed = {a->szx_life, 20};
    sfRectangleShape_setSize(a->eml_life[1], size_life_ed);
}

void def_en1_life(all_t *a)
{
    a->szx_life = (a->life_ed1 * 438.00) / 50;
    sfVector2f size_life_ed = {a->szx_life, 20};
    sfRectangleShape_setSize(a->eml_life[0], size_life_ed);
}

void def_enemy_life(all_t *a)
{
    a->sx_led = (a->life_ed * 438.00) / a->life_max_ed;
    sfVector2f size_life_ed = {a->sx_led, 20};
    sfRectangleShape_setSize(a->enemy_dj_life, size_life_ed);
}
