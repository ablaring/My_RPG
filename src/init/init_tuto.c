/*
** EPITECH PROJECT, 2023
** init_tuto.c
** File description:
** init_tuto
*/
#include "rpg1.h"

void init_tuto_text1(all_t *a, sfVector2f pos_chat)
{
    sfVector2f pos_fc = {1400, 735}; sfVector2f sc_fc = {0.18, 0.18};
    a->fc = my_getsprite("asset/flèches_clavier.png", pos_fc, sc_fc);
    a->chat_tuto[3] = my_gettext(a->str_chat[3], "asset/Baxoe.ttf", pos_chat,
                                a->size_chat);
    a->chat_tuto[4] = my_gettext(a->str_chat[4], "asset/Baxoe.ttf", pos_chat,
                                a->size_chat);
    a->chat_tuto[5] = my_gettext(a->str_chat[5], "asset/Baxoe.ttf", pos_chat,
                                a->size_chat);
}

void init_tuto_text(all_t *a)
{
    sfVector2f pos_ha = {-100, 620}; sfVector2f sc_ha = {10, 10};
    a->head_ancetre = my_getsprite("asset/ancetre_head.png", pos_ha, sc_ha);
    sfVector2f pos_parchemin = {0, 700}; sfVector2f sc_p = {4, 2};
    a->parchemin = my_getsprite("asset/parchemin.png", pos_parchemin, sc_p);
    a->chat_tuto = malloc(sizeof(sfText *) * 10 + 1);
    a->str_chat = malloc(sizeof(char *) * 10 + 1);
    init_chat1(a); init_chat2(a); init_chat3(a);
    a->x_chat = 515; a->y_chat = 763; a->size_chat = 35;
    sfVector2f pos_chat = {a->x_chat, a->y_chat};
    a->chat_tuto[0] = my_gettext(a->str_chat[0], "asset/Baxoe.ttf", pos_chat,
                                a->size_chat);
    a->chat_tuto[1] = my_gettext(a->str_chat[1], "asset/Baxoe.ttf", pos_chat,
                                a->size_chat);
    a->chat_tuto[2] = my_gettext(a->str_chat[2], "asset/Baxoe.ttf", pos_chat,
                                a->size_chat);
    init_tuto_text1(a, pos_chat);
}

void init_tuto1(all_t *a)
{
    a->x_ptuto = 900; a->y_ptuto = 1120;
    sfVector2f pos_ptuto = {a->x_ptuto, a->y_ptuto};
    sfVector2f sc_ptuto = {0.3, 0.3};
    a->portail_tuto = my_getsprite("asset/portail.png", pos_ptuto, sc_ptuto);
    a->pt_rect.top = 0; a->pt_rect.left = 0; a->pt_rect.height = 511;
    a->pt_rect.width = 250;
    sfSprite_setTextureRect(a->portail_tuto, a->pt_rect);
    a->clock_tuto = sfClock_create();
    a->x_pth = 850; a->y_pth = 1070;
    sfVector2f pos_pth = {a->x_pth, a->y_pth};
    sfVector2f sz_pth = {195, 260};
    a->pt_hitbox = my_getrect(pos_pth, sz_pth, sfTransparent);
    sfRectangleShape_setOutlineColor(a->pt_hitbox, sfTransparent);
    init_coffre(a);
}

void init_tuto(all_t *a)
{
    a->x_tuto = 600; a->y_tuto = 0; a->scx_tuto = 3; a->scy_tuto = 3;
    sfVector2f pos_tuto = {a->x_tuto, a->y_tuto};
    sfVector2f sc_tuto = {a->scx_tuto, a->scy_tuto};
    a->map_tuto = my_getsprite("asset/map_tuto.png", pos_tuto, sc_tuto);
    a->img_tuto = sfImage_createFromFile("asset/map_tuto_image.png");
    a->tuto_col = sfImage_getPixel(a->img_tuto, 0, 0);
    a->x_dt = 1376; a->y_dt = 974; sfVector2f size_dt = {23, 158};
    sfVector2f pos_dt = {a->x_dt, a->y_dt};
    a->door_tuto = my_getrect(pos_dt, size_dt, sfRed);
    a->x_donjt = 480; a->y_donjt = -510; a->scx_djt = 3; a->scy_djt = 3;
    sfVector2f pos_djt = {a->x_donjt, a->y_donjt};
    sfVector2f sc_donjt = {a->scx_djt, a->scy_djt};
    a->donjt = my_getsprite("asset/map_tuto_dj.png", pos_djt, sc_donjt);
    a->donjt_img = sfImage_createFromFile("asset/map_tuto_dj_img.png");
    a->donjt_col = sfImage_getPixel(a->donjt_img, 0, 0);
    a->clock3 = sfClock_create();
    init_dj_tuto(a);
    init_tuto_text(a);
    init_tuto1(a);
}
