/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** PAINT.h
*/

#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/System/Clock.h>
#include <SFML/Audio.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdbool.h>
#include <fcntl.h>
#include <dirent.h>
#include <errno.h>
#include <time.h>
#include "my.h"
#define IMG a->pictures
#define CLOCK a->clock_ra
#define WINDOW a->window
#define RECT a->rectangle
#define COLI a->colision_object
#define POS_BACK a->x_back, a->y_back

typedef struct HORLOGE {
    sfClock *clock;
    sfTime time;
    float seconds;
} horloge_t;

typedef struct RECTANGLE {
    sfRectangleShape *rect;
    sfVector2f pos;
    sfVector2f size;
    sfBool is_true;
} rectangle_t;

typedef struct images{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f scale;
    sfIntRect rect;
    sfVector2f pos;
    sfVector2f size;
    sfVector2f origin;
    sfRectangleShape *rectangle;
    sfBool is_true;
    sfImage *img;
    int nb_potion;
} picture_t;

typedef struct CIRCLE_TOWER{
    sfCircleShape *circle;
    sfVector2f *position;
    int nb_tower;
    float radius;
} circle_t;

typedef struct GLOBAL {
    sfRenderWindow *window;
    sfSprite *portail;
    sfSprite *portail_porc;
    sfVector2f pos_portail_porc;
    picture_t *pictures;
    horloge_t clock_ra;
    sfSprite *pp;
    float pp_x;
    float pp_y;
    sfIntRect rect;
    sfIntRect rect2;
    sfClock *clock;
    sfTime time;
    float seconds;
    sfClock *clock2;
    sfTime time2;
    float seconds2;
    int x_port1;
    int y_port1;
    // include map lezard
    sfImage *lz_comp;
    int spawn_x;
    int spawn_y;
    int scale_x_lz;
    int scale_y_lz;
    int sc_hlz_x;
    int sc_hlz_y;
    sfSprite *map_lz;
    sfColor col_lz;
    sfColor col_h2_init; //premier pixel h2
    sfColor col_h1_lz;
    sfColor col_h2_lz;
    sfColor col_h3_lz;
    sfColor col_dj_lz;
    sfSprite *h1_lz;
    sfSprite *h2_lz;
    sfSprite *h3_lz;
    sfSprite *dj_lz;
    sfImage *h1_comp_lz;
    sfImage *h2_comp_lz;
    sfImage *h3_comp_lz;
    sfImage *donj_comp_lz;
    sfVector2f pos_h1_lz; //pos door exterieur
    sfVector2f pos_h2_lz;
    sfVector2f pos_h3_lz;
    sfVector2f pos_donj_lz;
    sfVector2f pos_inh1; //pos in house
    sfVector2f pos_inh2;
    sfVector2f pos_inh3;
    sfVector2f pos_indj_lz;
    sfVector2f pos_door_in1; //pos door interieur
    sfVector2f pos_door_in2;
    sfVector2f pos_door_in3;
    sfVector2f pos_door_indj_lz;
    sfRectangleShape *door1_lz; //rect door exterieur
    sfRectangleShape *door2_lz;
    sfRectangleShape *door3_lz;
    sfRectangleShape *door_dj_lz;
    sfRectangleShape *door_in_h1; //rect door interieur
    sfRectangleShape *door_in_h2;
    sfRectangleShape *door_in_h3;
    sfRectangleShape *door_indj_lz;
    bool is_mlz_open;
    bool isinh1_lz;
    bool isinh2_lz;
    bool isinh3_lz;
    bool isindonj_lz;
    sfSprite *lz_boss; //boss_lz and anim
    sfVector2f pos_boss_lz;
    sfVector2f scale_boss_lz;
    sfCircleShape *circle_lz_boss;
    sfVector2f pos_circle_lz;
    sfIntRect rect_lz;
    sfClock *clock_lz;
    sfTime time_lz;
    float seconds_lz;
    sfSprite *portail_lz; //init portail_lz
    sfClock *clock_port_lz;
    sfTime time_port_lz;
    sfIntRect rect_port_lz;
    sfVector2f pos_port_lz;
    int life_boss_lz; //life enemy
    int life_max_boss_lz;
    bool is_fight_bosslz;
    int life_mino1_lz;
    int life_max_mino1_lz;
    bool is_fight_mino1_lz;
    int life_mino2_lz;
    int life_max_mino2_lz;
    bool is_fight_mino2_lz;
    int life_mino3_lz;
    int life_max_mino3_lz;
    bool is_fight_mino3_lz;
    bool mino1_dead_lz;
    bool mino2_dead_lz;
    bool mino3_dead_lz;
    bool boss_dead_lz;
    sfRectangleShape *coffre_h2_lz;
    sfRectangleShape *coffre_h3_lz;
    sfRectangleShape *coffre_dj_lz;
    sfVector2f pos_h2_cof_lz;
    sfVector2f pos_h3_cof_lz;
    sfVector2f pos_dj_cof_lz;
    sfSprite *mino1_lz;
    sfSprite *mino2_lz;
    sfSprite *mino3_lz;
    sfVector2f pos_mino1_lz;
    sfVector2f pos_mino2_lz;
    sfVector2f pos_mino3_lz;
    sfIntRect rect_mino1_lz;
    sfIntRect rect_mino2_lz;
    sfIntRect rect_mino3_lz;
    sfCircleShape *circle_mino1_lz;
    sfCircleShape *circle_mino2_lz;
    sfCircleShape *circle_mino3_lz;
    sfVector2f pos_circle_mino1_lz;
    sfVector2f pos_circle_mino2_lz;
    sfVector2f pos_circle_mino3_lz;
    sfClock *clock_mino1_lz;
    sfClock *clock_mino2_lz;
    sfClock *clock_mino3_lz;
    sfTime time_mino1_lz;
    sfTime time_mino2_lz;
    sfTime time_mino3_lz;
    sfSprite *portail2_lz; //include portal 2(fin de map)
    sfClock *clock_port2_lz;
    sfTime time_port2_lz;
    sfIntRect rect_port2_lz;
    sfVector2f pos_port2_lz;
    sfRectangleShape *tp_in_mlp;
    sfVector2f pos_tp_in_mlp;
    // include map_loup
    bool is_menu_open;
    bool is_setting_click;
    bool is_mlp_open;
    bool isinh1;
    bool isinh2;
    bool isinh3;
    bool isinh4;
    bool isinh5;
    sfImage *im_comp;
    sfImage *im_h1;
    sfImage *im_h2;
    sfImage *im_h3;
    sfImage *im_h4;
    sfImage *im_h5;
    sfImage *im_h6;
    sfSprite *first_map;
    int x_back;
    int y_back;
    sfVector2f *pos;
    float scale_x;
    float scale_y;
    sfColor col_init;
    sfColor col_h1;
    sfColor col_h2;
    sfColor col_h3;
    sfColor col_h4;
    sfColor col_h5;
    sfColor col_h6;
    sfColor col;
    int lf_x;
    int lf_y;
    int st_x;
    int st_y;
    sfSprite *life;
    sfSprite *strength;
    sfSprite **house_lp;
    int *pos_house_x;
    int *pos_house_y;
    int sc_house_x;
    int sc_house_y;
    sfRectangleShape **door;
    int *pos_dx;
    int *pos_dy;
    int save_x;
    int save_y;
    sfRectangleShape **door_int;
    int *pos_dix;
    int *pos_diy;
    sfSprite *back_menu;
    sfText *title;
    sfText *play;
    sfText *settings;
    sfText *settings_title;
    sfSprite *fleche;
    sfMusic *menu_music;
    sfText *size;
    sfText *full_screen;
    sfText *window_size;
    int count;
    bool isfullscreen;
    bool isws;
    sfText *sound;
    sfText *qq;
    sfText *tq;
    sfText *dq;
    sfText *uq;
    sfText *zq;
    bool isqq;
    bool istq;
    bool isdq;
    bool isuq;
    bool iszq;
    sfSprite *au;
    sfSprite *auw;
    sfSprite *ad;
    sfSprite *adw;
    sfSprite *setting;
    int check;
    sfText *options;
    sfSprite *back_gmenu;
    bool isingm;
    sfSprite *exit_button;
    sfSprite *setting_button;
    bool isintuto;
    int x_tuto;
    int y_tuto;
    int scx_tuto;
    int scy_tuto;
    sfSprite *map_tuto;
    sfImage *img_tuto;
    sfColor tuto_col;
    sfRectangleShape *door_tuto;
    int x_dt;
    int y_dt;
    bool isindonjt;
    int x_donjt;
    int y_donjt;
    int scx_djt;
    int scy_djt;
    sfColor donjt_col;
    sfSprite *donjt;
    sfImage *donjt_img;
    int x_dodjt; int y_dodjt;
    sfRectangleShape *donjt_door;
    int x_en_dj;
    int y_en_dj;
    sfSprite *enemy_dj;
    int life_ed;
    int life_max_ed;
    sfRectangleShape *enemy_dj_life;
    sfText *minotaur;
    sfCircleShape *endj_hitbox;
    sfIntRect dj_rect;
    sfClock *clock3;
    sfTime time3;
    float seconds3;
    int compteur;
    bool isfight_tuto;
    int x_life;
    int y_life;
    int x_strength;
    int y_strength;
    float size_x_life;
    float size_x_strength;
    sfRectangleShape *life_rect;
    sfRectangleShape *strength_rect;
    sfRectangleShape *life_ref;
    sfRectangleShape *strength_ref;
    int life_max;
    int strength_max;
    int life_actu;
    int strength_actu;
    int x_ph;
    int y_ph;
    sfSprite *perso_hammer;
    sfIntRect ph_rect;
    sfClock *clock4;
    sfTime time4;
    float seconds4;
    sfEvent event;
    sfSprite **foret;
    int *pos_x_foret;
    int *pos_y_foret;
    sfSprite *parchemin;
    sfSprite *head_ancetre;
    sfText **chat_tuto;
    bool ischatting;
    int x_chat;
    int y_chat;
    int size_chat;
    sfSprite *fc;
    char **str_chat;
    int count_text;
    bool iskeypressed;
    float sx_led;
    bool iseddefeat;
    int x_ptuto;
    int y_ptuto;
    sfSprite *portail_tuto;
    sfIntRect pt_rect;
    sfClock *clock_tuto;
    sfTime time_tuto;
    float seconds_tuto;
    int x_pth; int y_pth;
    sfRectangleShape *pt_hitbox;
    int x_ed; int y_ed;
    sfSprite *enemey_dead;
    sfIntRect ed_rect;
    sfClock *clock_ed;
    sfTime time_ed;
    float seconds_ed;
    bool isetd;
    bool isindjml;
    int x_ml;
    int y_ml;
    sfSprite *dj_ml;
    int x_dml;
    int y_dml;
    sfRectangleShape *door_dj;
    sfImage *dj_ml_img;
    sfColor dj_ml_col;
    int scx_djml;
    int scy_djml;
    int x_std;
    int y_std;
    sfRectangleShape *stare_down;
    bool isindjtop;
    int x_mlu;
    int y_mlu;
    int scx_mlu;
    int scy_mlu;
    sfSprite *dj_mlu;
    sfImage *dj_mlu_img;
    sfColor dj_mlu_col;
    int x_stdu;
    int y_stdu;
    sfRectangleShape *stare_up;
    sfSprite **edmlp;
    sfVector2f *pos_edmlp;
    int *x_edmlp;
    int *y_edmlp;
    sfIntRect edmlp_rect;
    sfCircleShape **ed_ml_hb;
    sfClock *clock5;
    sfTime time5;
    float seconds5;
    sfClock *clock6;
    sfTime time6;
    float seconds6;
    sfClock *clock7;
    sfTime time7;
    float seconds7;
    sfClock *clock8;
    sfTime time8;
    float seconds8;
    bool isfight1;
    bool isfight2;
    bool isfight3;
    bool isfight4;
    bool isedefeated1;
    bool isedefeated2;
    bool isedefeated3;
    bool isedefeated4;
    bool isedead1;
    bool isedead2;
    bool isedead3;
    bool isedead4;
    int life_ed1;
    int life_ed2;
    int life_ed3;
    int life_ed4;
    int x_ph_1;
    int y_ph_1;
    sfSprite *pp_hammer1;
    sfIntRect hammer_rect;
    sfClock *clock9;
    sfTime time9;
    float seconds9;
    sfRectangleShape **eml_life;
    float szx_life;
    sfRectangleShape **eml_life_ref;
    //colision portail
    int nb_rect_port;
    sfBool map_porc_open;
    sfBool one_time;
    sfBool keyPressedE;
    sfBool keyProcessedE;
    rectangle_t *rectangle;
    picture_t *map_second;
    horloge_t timing_lvl;
    //potion
    picture_t *utils_perso;
    picture_t *potion;
    horloge_t timing_p;
    sfText* text;
    sfText* text_lvl1;
    sfText* text_lvl2;
    int lvl1;
    int lvl2;
    sfFont* font;
    sfMusic *potion_song;
    horloge_t horl_potion;
    sfVector2f before_pos;
    //bot
    rectangle_t *colision_object;
    sfCircleShape *circle;
    horloge_t timing_boss;
    bool isdead;
    int nb_bot;
    int nb_coli;
    sfVector2u windowSize;
    int size_lref;
    sfBool *chest_open;
    sfBool *levelup;
    char *data_save;
    //read file
    sfBool read_file;
    sfBool one_time_read;
    sfSprite *game_over;
    sfBool isfight5;
    //rect coffre mlp
    sfRectangleShape *coffre_tuto;
    sfVector2f pos_coffre_tuto;
    sfRectangleShape *coffre1_mlp;
    sfVector2f pos_coffre1_mlp;
    sfRectangleShape *coffre2_mlp;
    sfVector2f pos_coffre2_mlp;
    sfRectangleShape *coffre3_mlp;
    sfVector2f pos_coffre3_mlp;
    sfRectangleShape *coffre4_mlp;
    sfVector2f pos_coffre4_mlp;
    sfRectangleShape *coffre5_mlp;
    sfVector2f pos_coffre5_mlp;
    //pp hammer
    int x_ph2;
    int y_ph2;
    sfSprite *pp_hammer2;
    sfIntRect hammer2_rect;
    sfClock *clock10;
    sfTime time10;
    float seconds10;
} all_t;

sfSprite *my_getsprite(char *filepath, sfVector2f pos, sfVector2f scale);
sfRectangleShape *my_getrect(sfVector2f pos, sfVector2f size, sfColor col);
sfText *my_gettext(char *phrase, char *police, sfVector2f pos, int size);
sfRectangleShape *create_rect_shape(sfVector2f pos,
sfVector2f size, sfColor color, int outline);
sfCircleShape *my_getcircle(int x, int y);
void manage_mouse_click(all_t *a, sfEvent event);
void init_all(all_t *a);

void init_menu(all_t *a);
void manage_menu(all_t *a);
void manage_music(all_t *a);
void define_up(all_t *a);
void define_down(all_t *a);
void def_redirect(all_t *a);
void define_return(all_t *a);

void init_tuto(all_t *a);
void init_perso_attack(all_t *a);
void init_life_strength(all_t *a);
void init_values(all_t *a);
void init_bool(all_t *a);
void init_forest(all_t *a);
void init_dj_tuto(all_t *a);

void full_screen(all_t *a);
void ws_screen(all_t *a);

//draw
void display(all_t *a);
void draw_house(all_t *a);
void display_tuto(all_t *a);
void display_permanent(all_t *a);

void anim_time(all_t *a);
void moove_rect(all_t *a);
void moove_port(all_t *a);
void moove_port_tuto(all_t *a);
void moove(all_t *a);
void mv_right_left(all_t *a);
void mv_up_down(all_t *a);
void moove_test_x_left(all_t *a);
void mv_lp_left(all_t *a);
void mv_lp_left1(all_t *a);
void moove_test_x_right(all_t *a);
void mv_lp_right(all_t *a);
void mv_lp_right1(all_t *a);
void moove_test_y_down(all_t *a);
void mv_lp_down(all_t *a);
void mv_lp_down1(all_t *a);
void moove_test_y_up(all_t *a);
void mv_lp_up(all_t *a);
void mv_lp_up1(all_t *a);
void switch_rect_inventory(all_t *a);

// initialisation map_loup
void init_lp_map(all_t *a);
void init_lp_door(all_t *a);
void init_door1(all_t *a);
void init_door2(all_t *a);
void init_door3(all_t *a);
void init_door4(all_t *a);
void init_door5(all_t *a);
void init_door6(all_t *a);
void init_door7(all_t *a);
void init_house1(all_t *a);
void init_house2(all_t *a);
void init_house3(all_t *a);
void init_house4(all_t *a);
void init_house5(all_t *a);
void init_door_inte(all_t *a);
void init_doorint_1(all_t *a);
void init_doorint_2(all_t *a);
void init_doorint_3(all_t *a);
void init_doorint_4(all_t *a);
void init_doorint_5(all_t *a);

//collision door
void check_col(all_t *a);
void col_door1(all_t *a);
void col_int1(all_t *a);
void col_int2(all_t *a);
void col_int3(all_t *a);
void col_int4(all_t *a);
void col_int5(all_t *a);

//moove house
void h1_down(all_t *a);
void h1_left(all_t *a);
void h1_right(all_t *a);
void h1_up(all_t *a);
void h2_down(all_t *a);
void h2_left(all_t *a);
void h2_right(all_t *a);
void h2_up(all_t *a);
void h3_down(all_t *a);
void h3_left(all_t *a);
void h3_right(all_t *a);
void h3_up(all_t *a);
void h4_down(all_t *a);
void h4_left(all_t *a);
void h4_right(all_t *a);
void h4_up(all_t *a);
void h5_down(all_t *a);
void h5_left(all_t *a);
void h5_right(all_t *a);
void h5_up(all_t *a);
void init_imgh(all_t *a);

//comp colors
bool comp(sfColor color, sfColor color2);

//moove tuto
void tuto_down(all_t *a);
void tuto_left(all_t *a);
void tuto_right(all_t *a);
void tuto_up(all_t *a);

//col tuto
void col_dt(all_t *a);
void col_djt(all_t *a);
void col_fight_tuto(all_t *a);
void collision_port_tuto(all_t *a);

//moove donjon tuto
void donjt_down(all_t *a);
void donjt_left(all_t *a);
void donjt_right(all_t *a);
void donjt_up(all_t *a);

//anim enemy
void anim_enemy_donj(all_t *a);
void anim_enemy_dead(all_t *a);

//def life strength
void define_life(all_t *a);

//anim attack
void anim_hammer(all_t *a);

//attack function
void attack(all_t *a);
void def_damage(all_t *a);

//combat
void combat(all_t *a);

//init_chat
void init_chat1(all_t *a);
void init_chat2(all_t *a);
void init_chat3(all_t *a);

//def text
void def_text(all_t *a);

//draw text
void draw_text(all_t *a);

//draw and def lifes enemy
void draw_enemy_life(all_t *a);
void def_enemy_life(all_t *a);

//gestion mouvement
void gestion_mouvement_left(all_t *a);
void gestion_mouvement_right(all_t *a);
void gestion_mouvement_up(all_t *a);
void gestion_mouvement_down(all_t *a);

//initialisation map_sec
void init_map_sec(all_t *a);
void rect_global_bound(all_t *a);
void init_map_golem(all_t *a);
void anim_time_right(all_t *a, int top, int nb_img);
void key_e(all_t *a, sfEvent event);
void init_suite_bot(all_t *a);
void init_bot(all_t *a);
void draw_map_second(all_t *a);
void mv_right_porc(all_t *a);
void mv_down_porc(all_t *a);
void mv_up_porc(all_t *a);
void mv_left_porc(all_t *a);
void anim_boss(all_t *a, int top, int nb_img);
void anim_time_right(all_t *a, int top, int nb_img);
void anim_mage(all_t *a, int top, int nb_img);
void switch_map_porc(all_t *a);
void switch_dungeon_porc(all_t *a);
void switch_map_lp(all_t *a);
void key_e(all_t *a, sfEvent event);
void rect_global_bound(all_t *a);
void colision_dongeon(all_t *a);
void init_text(all_t *a);
void init_level(all_t *a);
void init_bot_3(all_t *a);
void mv_right_porc_suite(all_t *a);
void mv_down_porc_suite(all_t *a);
void mv_up_porc_suite(all_t *a);
void mv_left_porc_suite(all_t *a);
void init_utils2(all_t *a);
void display_potion(all_t *a);
void chest_colision_porc(all_t *a);
void init_text(all_t *a);
int int_str_length(int value);
char *int_to_str(int value);
void set_int_to_text(sfText *text, int value);
void anim_potion(all_t *a, int nb);
void mv_right_porc_suite(all_t *a);
void mv_down_porc_suite(all_t *a);
void mv_up_porc_suite(all_t *a);
void mv_left_porc_suite(all_t *a);
void mv_right_porc(all_t *a);
void mv_down_porc(all_t *a);
void mv_up_porc(all_t *a);
void mv_left_porc(all_t *a);
void anim_potion_chest(all_t *a);
void move_rect_porc(all_t *a, int offset, int max_value, int nb_img);
void anim_boss_porc(all_t *a, int nb_img);
void anim_mage(all_t *a, int top, int nb_img);
void colision_dongeon_suite(all_t *a);
void switch_map_porc_before(all_t *a);
void init_potion_suite(all_t *a);
void chest_colision_porc_suite(all_t *a);
void moove_porc_left(all_t *a, sfSprite *name_map, sfImage *name_map2);
void moove_porc_right(all_t *a, sfSprite *name_map, sfImage *name_map2);
void moove_porc_down(all_t *a, sfSprite *name_map, sfImage *name_map2);
void moove_porc_up(all_t *a, sfSprite *name_map, sfImage *name_map2);
sfCircleShape *create_circle_shape(sfVector2f pos, float radius,
float outlineThickness);
void chest_colision_porc_house(all_t *a);
void inside_housse(all_t *a);
void house_colisporc(all_t *a);
sfSprite *my_getsprite2(char *filepath);
void handle_left_movement(all_t *a);
void handle_right_movement(all_t *a);
void handle_up_movement(all_t *a);
void handle_down_movement(all_t *a);
void attack_boss(all_t *a);

//map lezard
void moove_left_lz(all_t *a);
void moove_right_lz(all_t *a);
void moove_down_lz(all_t *a);
void moove_up_lz(all_t *a);
void init_map_lizard(all_t *a);
void init_house_lz(all_t *a);
void init_h1_lz(all_t *a);
void init_h2_lz(all_t *a);
void init_h3_lz(all_t *a);
void check_col_lz(all_t *a);
void h1_left_lz(all_t *a);
void h1_right_lz(all_t *a);
void h1_down_lz(all_t *a);
void h1_up_lz(all_t *a);
void h2_down_lz(all_t *a);
void h2_up_lz(all_t *a);
void h2_right_lz(all_t *a);
void h2_left_lz(all_t *a);
void h3_left_lz(all_t *a);
void h3_right_lz(all_t *a);
void h3_down_lz(all_t *a);
void h3_up_lz(all_t *a);
void init_donj_lz(all_t *a);
void dj_up_lz(all_t *a);
void dj_down_lz(all_t *a);
void dj_right_lz(all_t *a);
void dj_left_lz(all_t *a);
void anim_boss_lz(all_t *a);
void anim_port_lz(all_t *a);
void init_mino1_lz(all_t *a);
void anim_mino1_lz(all_t *a);
void init_mino2_lz(all_t *a);
void anim_mino2_lz(all_t *a);
void init_mino3_lz(all_t *a);
void anim_mino3_lz(all_t *a);
void anim_port2_lz(all_t *a);
void move_rect_lz(all_t *a, int offset, int max_value);
void move_rectmino1_lz(all_t *a, int offset, int max_value);
void move_rectmino2_lz(all_t *a, int offset, int max_value);
void move_rectmino3_lz(all_t *a, int offset, int max_value);
void col_door_lz(all_t *a);
void col_int1_lz(all_t *a);
void col_int2_lz(all_t *a);
void col_int3_lz(all_t *a);
void col_intdj_lz(all_t *a);
void init_circle_portail_lz(all_t *a);
void mv_left_lz2(all_t *a);
void mv_right_lz2(all_t *a);
void mv_down_lz2(all_t *a);
void mv_up_lz2(all_t *a);
void display_maplz(all_t *a);
void mv_lz_left(all_t *a);
void mv_lz_right(all_t *a);
void mv_lz_up(all_t *a);
void mv_lz_down(all_t *a);
int check_img(void);
int check_text(void);
int check_music(void);

void anim_hammer1(all_t *a);

//donjon mlp
void col_donjon_mlp(all_t *a);
void col_donjon_int(all_t *a);
void col_donjon_int1(all_t *a);
void init_donjon_mlp(all_t *a);
void draw_djmlp(all_t *a);
void djml_down(all_t *a);
void djml_left(all_t *a);
void djml_right(all_t *a);
void djml_up(all_t *a);
void draw_djmlpu(all_t *a);
void djmlpu_down(all_t *a);
void djmlpu_left(all_t *a);
void djmlpu_right(all_t *a);
void djmlpu_up(all_t *a);
void anim_enemy_ml1(all_t *a);
void anim_enemy_ml2(all_t *a);
void anim_enemy_ml3(all_t *a);
void anim_enemy_ml4(all_t *a);
void col_fight_ml(all_t *a);
void combat_ml1(all_t *a);
void combat_ml2(all_t *a);
void combat_ml3(all_t *a);
void combat_ml4(all_t *a);
void def_life1(all_t *a);
void def_life2(all_t *a);
void def_life3(all_t *a);
void def_life4(all_t *a);
void attack_ml1(all_t *a);
void attack_ml2(all_t *a);
void attack_ml3(all_t *a);
void attack_ml4(all_t *a);
void def_en1_life(all_t *a);
void def_en2_life(all_t *a);
void def_en3_life(all_t *a);
void def_en4_life(all_t *a);
//new
int check_img(void);
int check_text(void);
int check_music(void);
void attack_porc(all_t *a);
void chest_colision_lz(all_t *a);
void chest_colision_lz2(all_t *a);
void chest_colision_lz3(all_t *a);
void save_game(all_t *a);
void add_level1(all_t *a);
int lire_fichier(all_t *a);
void change_save(all_t *a, int nb, char *ligne);
void help(void);
void chest_colision_lp(all_t *a);
void chest_colision_lp2(all_t *a);
void chest_colision_lp3(all_t *a);
void chest_colision_lp4(all_t *a);
void chest_colision_lp5(all_t *a);
void chest_colision_tuto(all_t *a);
void init_coffre(all_t *a);
void anim_hammer2(all_t *a);
void combat_ml5(all_t *a);
void destroy_all(all_t *a);
void destroy_house_lz(all_t *a);
