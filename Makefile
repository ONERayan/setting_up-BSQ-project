##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## rt makefile
##

SRC =	setting_up.c		\
		gen_map.c	\

OBJ =	$(SRC:.c=.o)

NAME =	setting_up

CC = gcc

CFLAGS = -Wall -Wextra

all: $(NAME)

libmy:
	make -C lib/my

$(NAME):	$(OBJ)	libmy
		$(CC) -o $(NAME) $(OBJ)	$(CFLAGS) -Iinclude/ -L. -lmy
clean:
	rm $(OBJ)

fclean:	clean
		make fclean -C lib/my
		rm $(NAME)

re : all fclean

.PHONY: all clean fclean re
