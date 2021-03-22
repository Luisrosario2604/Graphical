##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

NAME	=	libmy.a

SRC	=	*.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -pedantic

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -c $(SRC) $(CFLAGS)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
