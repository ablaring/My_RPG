/*
** EPITECH PROJECT, 2023
** init_donjon_mlp.c
** File description:
** init_donjon_mlp
*/
#include "rpg1.h"

void init_edmlp2(all_t *a)
{
    a->x_edmlp[2] = 1257; a->y_edmlp[2] = 926;
    a->x_edmlp[3] = 365; a->y_edmlp[3] = 1043;
    sfVector2f sc_enemy = {1.8, 1.8};
    for (int i = 0; i < 4; i++) {
        sfVector2f pos_edmlp = {a->x_edmlp[i], a->y_edmlp[i]};
        a->edmlp[i] = my_getsprite("asset/enemy.png", pos_edmlp, sc_enemy);
        sfSprite_setTextureRect(a->edmlp[i], a->edmlp_rect);
        a->ed_ml_hb[i] = my_getcircle(a->x_edmlp[i], a->y_edmlp[i]);
    }
    a->clock5 = sfClock_create();
    a->clock6 = sfClock_create();
    a->clock7 = sfClock_create();
    a->clock8 = sfClock_create();
    a->life_ed1 = 50;
    a->life_ed2 = 40;
    a->life_ed3 = 70;
    a->life_ed4 = 50;
}

void init_edmlp(all_t *a)
{
    a->isfight1 = false;
    a->isfight2 = false;
    a->isfight3 = false;
    a->isfight4 = false;
    a->isedefeated1 = false;
    a->isedefeated2 = false;
    a->isedefeated3 = false;
    a->isedefeated4 = false;
    a->isedead1 = false;
    a->isedead2 = false;
    a->isedead3 = false;
    a->isedead4 = false;
    a->edmlp = malloc(sizeof(sfSprite *) * 4);
    a->x_edmlp = malloc(sizeof(int) * 4);
    a->y_edmlp = malloc(sizeof(int) * 4);
    a->ed_ml_hb = malloc(sizeof(sfCircleShape *) * 4);
    a->edmlp_rect = (sfIntRect) {0, 126, 128, 126};
    a->x_edmlp[0] = 373; a->y_edmlp[0] = 480;
    a->x_edmlp[1] = 1081; a->y_edmlp[1] = 535;
    init_edmlp2(a);
}

void init_donjon_mlp3(all_t *a)
{
    a->eml_life = malloc(sizeof(sfRectangleShape *) * 4);
    a->eml_life_ref = malloc(sizeof(sfRectangleShape *) * 4);
    a->szx_life = 438.00;
    for (int i = 0; i < 4; i++) {
        sfVector2f pos_eml_li = {750, 856};
        sfVector2f sz_eml_li = {a->szx_life, 20};
        a->eml_life[i] = my_getrect(pos_eml_li, sz_eml_li, sfRed);
        a->eml_life_ref[i] = my_getrect(pos_eml_li, sz_eml_li, sfTransparent);
        sfRectangleShape_setOutlineColor(a->eml_life_ref[i], sfBlack);
        sfRectangleShape_setOutlineColor(a->eml_life[i], sfTransparent);
    }
}

void init_donjon_mlp2(all_t *a)
{
    sfVector2f sz_std = {449, 71};
    sfVector2f pos_std = {a->x_std, a->y_std};
    a->stare_down = my_getrect(pos_std, sz_std, sfWhite);
    a->isindjtop = false;
    a->x_mlu = 180;
    a->y_mlu = -150;
    a->scx_mlu = 3;
    a->scy_mlu = 3;
    sfVector2f pos_mlu = {a->x_mlu, a->y_mlu};
    sfVector2f sc_mlu = {a->scx_mlu, a->scy_mlu};
    a->dj_mlu = my_getsprite("asset/donjon_loup_haut.png", pos_mlu, sc_mlu);
    a->dj_mlu_img = sfImage_createFromFile("asset/donjon_loup_haut_img.png");
    a->dj_mlu_col = sfImage_getPixel(a->dj_mlu_img, 0, 0);
    a->x_stdu = 825;
    a->y_stdu = 54;
    sfVector2f pos_stdu = {a->x_stdu, a->y_stdu};
    sfVector2f sz_stdu = {212, 39};
    a->stare_up = my_getrect(pos_stdu, sz_stdu, sfWhite);
    init_donjon_mlp3(a);
    init_edmlp(a);
}

void init_donjon_mlp(all_t *a)
{
    a->isindjml = false;
    a->scx_djml = 3;
    a->scy_djml = 3;
    a->x_ml = 180;
    a->y_ml = 85;
    sfVector2f sc_dj_ml = {a->scx_djml, a->scy_djml};
    sfVector2f pos_dj_ml = {a->x_ml, a->y_ml};
    a->dj_ml = my_getsprite("asset/donjon_loup.png", pos_dj_ml, sc_dj_ml);
    a->x_dml = 851;
    a->y_dml = 210;
    sfVector2f sz_dml = {160, 23};
    sfVector2f pos_dml = {a->x_dml, a->y_dml};
    a->door_dj = my_getrect(pos_dml, sz_dml, sfWhite);
    a->dj_ml_img = sfImage_createFromFile("asset/donjon_loup_img.png");
    a->dj_ml_col = sfImage_getPixel(a->dj_ml_img, 0, 0);
    a->x_std = 710;
    a->y_std = 1395;
    init_donjon_mlp2(a);
}
