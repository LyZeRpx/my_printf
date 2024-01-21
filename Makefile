##
## EPITECH PROJECT, 2023
## MAKEFILE
## File description:
## FILEMAKE
##

CC = gcc

SRC 	=	src/check_flag.c			\
			src/check_mid_flags			\
			src/check_hard_flags.c		\
			src/my_put_nbr_base.c		\
			src/my_put_nbr.c			\
			src/my_putstr.c				\
			src/my_putchar.c			\
			src/my_putfloat.c			\
			src/my_printf.c				\

NAME	=	libmy.a

VPATH = ./include

CFLAGS = -Wall -Wextra -I$(VPATH)

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
debug: compil

erase: fclean
	clear
redo: re
	clear
	clean
mem:
	valgrind ./$(NAME)
compil:
	gcc $(CFLAGS) -L. main.c -o my_printf -lmy
exe:
	./$(NAME)
