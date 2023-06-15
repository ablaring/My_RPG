/*
** EPITECH PROJECT, 2023
** init_menu.c
** File description:
** init_menu
*/
#include "rpg1.h"

void init_menu3(all_t *a)
{
    sfVector2f pos_opt = {1770, 50}; int sz_opt = 45;
    a->options = my_gettext("Options", "asset/Baxoe.ttf", pos_opt, sz_opt);
    sfVector2f pos_backgm = {0, 0}; sfVector2f sc_bkgm = {7, 6};
    a->back_gmenu = my_getsprite("asset/fond_gback.jpg", pos_backgm, sc_bkgm);
    sfVector2f pos_exitb = {1350, 405}; sfVector2f sc_exitb = {0.6, 0.6};
    a->exit_button = my_getsprite("asset/exit.png", pos_exitb, sc_exitb);
    sfVector2f pos_setb = {450, 405}; sfVector2f sc_setb = {0.6, 0.6};
    a->setting_button = my_getsprite("asset/settings.png", pos_setb, sc_setb);
}

void init_menu2(all_t *a)
{
    sfVector2f pos_75 = {915, 670}; int sz_75 = 60;
    a->tq = my_gettext("75", "asset/ancient.ttf", pos_75, sz_75);
    sfVector2f pos_50 = {915, 670}; int sz_50 = 60;
    a->dq = my_gettext("50", "asset/ancient.ttf", pos_50, sz_50);
    sfVector2f pos_25 = {915, 670}; int sz_25 = 60;
    a->uq = my_gettext("25", "asset/ancient.ttf", pos_25, sz_25);
    sfVector2f pos_0 = {935, 670}; int sz_0 = 60;
    a->zq = my_gettext("0", "asset/ancient.ttf", pos_0, sz_0);
    sfVector2f pos_au = {990, 650}; sfVector2f sc_au = {0.15, 0.15};
    a->au = my_getsprite("asset/arrow_up.png", pos_au, sc_au);
    sfVector2f pos_ad = {990, 710}; sfVector2f sc_ad = {0.15, 0.15};
    a->ad = my_getsprite("asset/arrow_down.png", pos_ad, sc_ad);
    sfVector2f pos_auw = {990, 650}; sfVector2f sc_auw = {0.15, 0.15};
    a->auw = my_getsprite("asset/arrow_upw.png", pos_auw, sc_auw);
    sfVector2f pos_adw = {990, 710}; sfVector2f sc_adw = {0.15, 0.15};
    a->adw = my_getsprite("asset/arrow_downw.png", pos_adw, sc_adw);
    sfVector2f pos_set = {1665, 20}; sfVector2f sc_set = {0.2, 0.2};
    a->setting = my_getsprite("asset/echap.png", pos_set, sc_set);
    init_menu3(a);
}

void init_menu1(all_t *a)
{
    sfVector2f pos_fleche = {76, 852}; sfVector2f sc_fleche = {0.7, 0.7};
    a->fleche = my_getsprite("asset/fleches.png", pos_fleche, sc_fleche);
    sfVector2f pos_s = {890, 272}; int sz_s = 75;
    a->size = my_gettext("SIZE", "asset/ancient.ttf", pos_s, sz_s);
    sfVector2f pos_ws = {850, 390}; int sz_ws = 60;
    a->window_size = my_gettext("window size", "asset/ancient.ttf", pos_ws,
                    sz_ws);
    sfVector2f pos_fs = {860, 390}; int sz_fs = 60;
    a->full_screen = my_gettext("Full-screen", "asset/ancient.ttf", pos_fs,
                    sz_fs);
    sfVector2f pos_sd = {860, 550}; int sz_sd = 75;
    a->sound = my_gettext("SOUND", "asset/ancient.ttf", pos_sd, sz_sd);
    sfVector2f pos_100 = {900, 670}; int sz_100 = 60;
    a->qq = my_gettext("100", "asset/ancient.ttf", pos_100, sz_100);
    init_menu2(a);
}

void init_menu(all_t *a)
{
    a->isws = true; a->isfullscreen = false;
    sfVector2f pos_back = {-420, 0}; sfVector2f sc_back = {1.2, 1.2};
    a->back_menu = my_getsprite("asset/fond_menu.jpg", pos_back, sc_back);
    sfVector2f pos_title = {210, 22}; int sz_title = 150;
    a->title = my_gettext("The Struggle Of The Sheep", "asset/ancient.ttf",
                pos_title, sz_title);
    sfVector2f pos_play = {900, 410}; int sz_play = 95;
    a->play = my_gettext("Play", "asset/ancient.ttf", pos_play, sz_play);
    sfVector2f pos_settings = {850, 655}; int sz_settings = 95;
    a->settings = my_gettext("Settings", "asset/ancient.ttf", pos_settings,
                sz_settings);
    sfVector2f pos_set = {750, 22}; int sz_set = 150;
    a->settings_title = my_gettext("Settings", "asset/ancient.ttf", pos_set,
                        sz_set);
    init_menu1(a);
}
