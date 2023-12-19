##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile of 104neutrinos
##

SRC     =	104neutrinos.c				\

OBJ     =   $(SRC:.c=.o)

CFLAGS	+=	-g -I./include/ -I./shell -Wextra -Werror -Wall

NAME 	=	104neutrinos

all:	$(NAME)

$(NAME):	$(OBJ)
		make -C lib/my/
		gcc -o $(NAME) $(OBJ) -L -lm 

clean:
		rm -f $(OBJ)

fclean: 	clean
		rm -f $(NAME)

re:		fclean all
