/*
** EPITECH PROJECT, 2023
** jam2
** File description:
** main.c
*/
#include "rpg1.h"

void analyse_events(all_t *a, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed) {
        manage_mouse_click(a, event);
    }
}

int close_one(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(window);
        return 2;
    }
    return 0;
}

void start_suite(all_t *a)
{
    combat_ml2(a);
    combat_ml3(a);
    combat_ml4(a);
    if (a->isetd == true)
        anim_enemy_dead(a);
    define_life(a); def_text(a); def_enemy_life(a);
    def_en1_life(a);
    def_en2_life(a);
    def_en3_life(a);
    def_en4_life(a);
    colision_dongeon(a);
    switch_rect_inventory(a);
    sfSprite_setTextureRect(a->portail, a->rect2);
    sfSprite_setTextureRect(a->portail_porc, a->rect2);
    rect_global_bound(a);
    sfRenderWindow_display(a->window);
}

void start(all_t *a)
{
    srand(time(NULL)); short test;
    sfRenderWindow_setFramerateLimit(a->window, 144);
    init_all(a);
    while (sfRenderWindow_isOpen(a->window)) {
        while (sfRenderWindow_pollEvent(a->window, &a->event) &&
        (test = close_one(a->window, a->event)) == 0) {
            key_e(a, a->event);
            analyse_events(a, a->event);
        }
        a->pp_x = sfSprite_getPosition(a->pp).x;
        a->pp_y = sfSprite_getPosition(a->pp).y;
        sfRenderWindow_clear(a->window, sfBlack); manage_music(a);
        display(a); manage_menu(a); check_col(a); moove(a);
        moove_port(a); moove_port_tuto(a);
        combat(a);
        combat_ml1(a);
        start_suite(a);
    }
}

int main(int ac, char **av)
{
    all_t *a = malloc(sizeof(all_t));
    (void)ac; (void)av;
    sfVideoMode mode = {1920, 1080, 64};
    a->window = sfRenderWindow_create(mode, "my_rpg", sfResize | sfClose, NULL);
    if (check_img() == 84)
        return 84;
    start(a);
    destroy_all(a);
    return 0;
}
