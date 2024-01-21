##
## EPITECH PROJECT, 2023
## MAKEFILE
## File description:
## FILEMAKE
##

CC = gcc

SRC 	=	src/my_putchar.c	\
			src/my_putstr.c		\
			src/my_put_nbr.c	\
			src/check_flag.c	\
			src/my_printf.c		\

NAME	=	libmy.a

CFLAGS = -Wall -Wextra -I./include

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

debug: CFLAGS += -g3
debug: re

erase: fclean
	clear
redo: re
	clear
	clean
mem:
	valgrind ./$(NAME)
compil:
	gcc $(CFLAGS) main.c -o my_printf -L -lmy
exe:
	./$(NAME)
