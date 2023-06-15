##
## EPITECH PROJECT, 2022
## delivery
## File description:
## Makefile
##

SRC	=	src/main.c \
		src/utils.c \
		src/utils2.c \
		src/manage_menu.c \
		src/event.c \
		src/music.c \
		src/define_screen.c \
		src/define_sound.c \
		src/define_redirect.c \
		src/life/define_life.c \
		src/life/define_enemy_life.c \
		src/define_text.c \
		src/draw/draw.c \
		src/draw/draw_house.c \
		src/draw/draw_text.c \
		src/draw/draw_enemy.c \
		src/draw/draw_tuto.c \
		src/draw/draw_permanent.c \
		src/draw/draw_mapsecond.c \
		src/draw/display_potion.c \
		src/init/init.c \
		src/init/init_menu.c \
		src/init/init_house.c \
		src/init/init_door.c \
		src/init/init_door2.c \
		src/init/init_door_int.c \
		src/init/init_door_int2.c \
		src/init/init_img.c \
		src/init/init_tuto.c \
		src/init/init_perso_attack.c \
		src/init/init_chat.c \
		src/init/init_life_strength.c \
		src/init/init_bool_values.c \
		src/init/init_forest.c \
		src/init/init_dj_tuto.c \
		src/init/init_level.c \
		src/init/init_bot_suite.c \
		src/animation/anim_direction.c \
		src/animation/anim_enemy.c \
		src/animation/anim_attack.c \
		src/animation/anim_dead_enemy.c \
		src/mouvement/mouvement.c \
		src/mouvement/mv_mlp.c \
		src/mouvement/map_loup/mouvement_loup.c \
		src/mouvement/map_loup/mv_lp_left.c \
		src/mouvement/map_loup/mv_lp_right.c \
		src/mouvement/map_loup/mv_lp_down.c \
		src/mouvement/map_loup/mv_lp_up.c \
		src/mouvement/h1/h1_down.c \
		src/mouvement/h1/h1_left.c \
		src/mouvement/h1/h1_right.c \
		src/mouvement/h1/h1_up.c \
		src/mouvement/h2/h2_down.c \
		src/mouvement/h2/h2_left.c \
		src/mouvement/h2/h2_right.c \
		src/mouvement/h2/h2_up.c \
		src/mouvement/h3/h3_down.c \
		src/mouvement/h3/h3_left.c \
		src/mouvement/h3/h3_right.c \
		src/mouvement/h3/h3_up.c \
		src/mouvement/h4/h4_down.c \
		src/mouvement/h4/h4_left.c \
		src/mouvement/h4/h4_right.c \
		src/mouvement/h4/h4_up.c \
		src/mouvement/h5/h5_down.c \
		src/mouvement/h5/h5_left.c \
		src/mouvement/h5/h5_right.c \
		src/mouvement/h5/h5_up.c \
		src/mouvement/tuto/tuto_down.c \
		src/mouvement/tuto/tuto_left.c \
		src/mouvement/tuto/tuto_right.c \
		src/mouvement/tuto/tuto_up.c \
		src/mouvement/djt/djt_down.c \
		src/mouvement/djt/djt_left.c \
		src/mouvement/djt/djt_right.c \
		src/mouvement/djt/djt_u.c \
		src/mouvement/gestion/gestion_mouvement_left.c \
		src/mouvement/gestion/gestion_mouvement_right.c \
		src/mouvement/gestion/gestion_mouvement_up.c \
		src/mouvement/gestion/gestion_mouvement_down.c \
		src/mouvement/map_porc/mv_porc.c \
		src/mouvement/map_porc/mv_porc_suite.c \
		src/mouvement/map_porc/mv_gestion_porc.c \
		src/mouvement/handle_movement.c \
		src/inventory/inventory.c \
		src/inventory/text_potion.c \
		src/inventory/regen_potion.c \
		src/collision/check_col.c \
		src/collision/col_door_lp.c \
		src/collision/col_int_lp.c \
		src/collision/col_tuto.c \
		src/collision/check_fight.c \
		src/collision/col_port.c \
		src/collision/chest_colisiontuto.c \
		src/collision/chest_colision_lp.c \
		src/attack/attack.c \
		src/def_damage.c \
		src/combat/combat.c \
		src/collision/porc/house_coli_porc.c \
		src/init/init_second_map.c \
		src/collision/porc/global_bound.c \
		src/animation/bot/bot.c \
		src/animation/potion.c \
		src/switch_map.c \
		src/animation/anim_boss_lz.c \
		src/animation/move_rect_lz.c \
		src/collision/check_col_lz.c \
		src/draw/draw_map_lz.c \
		src/init/init_house_lz.c \
		src/init/init_map_lez.c \
		src/init/init_mino_lz.c \
		src/mouvement/map_lezard/h1_lz_left.c \
		src/mouvement/map_lezard/moove_lez.c \
		src/mouvement/map_lezard/mv_dj_lz.c \
		src/mouvement/map_lezard/mv_h2_lz.c \
		src/mouvement/map_lezard/mv_h3_lz.c \
		src/mouvement/map_lezard/mv_lz2.c \
		src/mouvement/mv_mlz.c \
		src/collision/col_int_lz.c \
		src/check_asset/check_img.c \
		src/check_asset/check_musci.c \
		src/animation/anim_enemy_ml.c \
		src/animation/def_deg_en.c \
		src/attack/attack_ml.c \
		src/collision/col_donjon.c \
		src/collision/col_fight.c \
		src/combat/combat_ml.c \
		src/init/init_donjon_mlp.c \
		src/mouvement/djmlp/djml_down.c \
		src/mouvement/djmlp/djml_left.c \
		src/mouvement/djmlp/djml_right.c \
		src/mouvement/djmlp/djml_up.c \
		src/mouvement/djmlpu/djmlpu_down.c \
		src/mouvement/djmlpu/djmlpu_left.c \
		src/mouvement/djmlpu/djmlpu_right.c \
		src/mouvement/djmlpu/djmlpu_up.c \
		src/draw/draw_djmlp.c \
		src/collision/chest_colision_lz.c \
		src/attack/attack_porc.c \
		src/init/init_coffre_mlp.c \
		src/destroy/destroy_all.c \
		src/destroy/destroy_all_suite.c \


OBJ = $(SRC:.c=.o)

NAME	= my_rpg

CC		= gcc

ERROR_FLAGS	= -Wall -Wextra

CSFML 		= 	-lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

CFLAGS	= -L lib/my/  -lmy -lm -I include/ $(ERROR_FLAGS) $(CSFML)

all: $(NAME)

$(NAME): $(OBJ)
		make -C lib/my/
		$(CC) $(SRC) -o $(NAME) $(CFLAGS)

debug:
		make -C lib/my/
		$(CC) -g $(SRC) -o $(NAME) $(CFLAGS)

clean:
	make -C lib/my fclean
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
	cd lib/my && make re
