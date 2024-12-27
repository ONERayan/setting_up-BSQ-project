##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## task01
##

SRC	=	my_putchar.c	\
		my_isneg.c	\
		my_put_nbr.c	\
		my_swap.c	\
		my_putstr.c	\
		my_strlen.c	\
		my_getnbr.c	\
		my_sort_int_array.c	\
		my_compute_power_rec.c	\
		my_compute_square_root.c	\
		my_is_prime.c	\
		my_find_prime_sup.c	\
		my_strcpy.c	\
		my_strncpy.c	\
		my_revstr.c	\
		my_strstr.c	\
		my_strcmp.c	\
		my_strncmp.c	\
		my_strupcase.c	\
		my_strlowcase.c	\
		my_strcapitalize.c	\
		my_str_isalpha.c	\
		my_str_isnum.c	\
		my_str_islower.c	\
		my_str_isupper.c	\
		my_str_isprintable.c	\
		my_showstr.c 	\
		my_showmem.c 	\
		my_strcat.c	\
		my_strncat.c	\
		init_func.c     \
		init_specifier.c	\
		my_put_float_without.c	\
		print_character.c	\
		conv_ptr.c	\
		my_is_nbr.c	\
		my_put_nbr.c	\
		print_diff_base.c	\
		conv_to_hex.c	\
		is_special.c	\
		mini_printf.c	\
		my_putchar.c	\
		my_putstr.c	\
		my_scient_write.c	\
		my_strlowcase.c	\
		print_float_nbr.c	\
		conv_to_octal.c	\
		my_floatscient.c	\
		my_put_float.c	\
		my_put_unsigned_nbr.c	\
		my_scient_write_upper.c	\
		print_basics.c	\
		print_plus.c	\


OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

NAME_H	=	my.h

CFLAGS	=	-Wall -Wextra -Werror


$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		cp $(NAME) ../../
		cp $(NAME_H) ../../include/

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
