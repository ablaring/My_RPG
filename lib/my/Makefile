##
## EPITECH PROJECT, 2022
## delivery
## File description:
## Makefile
##

SRC	= my_isneg.c \
	my_put_nbr.c \
	my_swap.c \
	my_putstr.c \
	my_strlen.c \
	my_getnbr.c \
	my_sort_int_array.c \
	my_compute_power_rec.c \
	my_compute_square_root.c \
	my_is_prime.c \
	my_find_prime_sup.c \
	my_strcpy.c \
	my_strncpy.c \
	my_revstr.c \
	my_putchar.c \
	my_strstr.c \
	my_strcmp.c \
	my_strncmp.c \
	my_strupcase.c \
	my_strlowcase.c \
	my_strcapitalize.c \
	my_str_isalpha.c \
	my_str_isnum.c \
	my_str_islower.c \
	my_str_isupper.c \
	my_showstr.c \
	my_showmem.c \
	my_strcat.c \
	my_strncat.c \
	my_put_float.c \
	my_str_isprintable.c \
	my_printf/condee.c \
	my_printf/cond2.c \
	my_printf/cond.c \
	my_printf/printf.c \
	my_printf/modifier.c \
	my_str_to_word_array.c \
	my_strdup.c \
	my_isalnum.c \
	my_isalpha.c \
	my_str_isalnum.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
