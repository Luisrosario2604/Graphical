##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile for compilation
##

LIB_DIR	=	./lib/

LIB	=	libmy.a

SRC_DIR	=	./src/

SRC	=		$(SRC_DIR)background_grass.c\
			$(SRC_DIR)background_green.c\
			$(SRC_DIR)background.c\
			$(SRC_DIR)bird_two.c\
			$(SRC_DIR)bird.c\
			$(SRC_DIR)counter.c\
			$(SRC_DIR)dead.c\
			$(SRC_DIR)display_help.c\
			$(SRC_DIR)main_game.c\
			$(SRC_DIR)map_load.c\
			$(SRC_DIR)medal.c\
			$(SRC_DIR)my_putchar.c\
			$(SRC_DIR)my_putnbr.c\
			$(SRC_DIR)my_putstr.c\
			$(SRC_DIR)my_revstr.c\
			$(SRC_DIR)rotation.c\
			$(SRC_DIR)score.c\
			$(SRC_DIR)tunel_two.c\
			$(SRC_DIR)tunel.c\
			$(SRC_DIR)pause.c\
			$(SRC_DIR)window.c\
			$(SRC_DIR)starter.c\


MAIN	=	$(SRC_DIR)main.c

CFLAGS	=	-W -Wall -Wextra -pedantic -I./include/

LDFLAGS	=	-lcriterion -lgcov -coverage

OBJ	=	$(SRC:.c=.o) $(MAIN:.c=.o)

NAME	=	my_runner

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C $(LIB_DIR)
	gcc -o $(NAME) $(OBJ) -L$(LIB_DIR) -lmy -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio 

gdb:
	make -C $(LIB_DIR)
	gcc -o $(NAME) $(SRC) $(MAIN) $(CFLAGS) -L$(LIB_DIR) -lmy -g3 -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio 

clean:
	make clean -C $(LIB_DIR)
	rm -f ./include/*.gch
	rm -f $(OBJ) $(BONUS_OBJ) *.gc*
	rm -f $(LIB_DIR)*.o

fclean: 	clean
	make fclean -C $(LIB_DIR)
	rm -f $(NAME) $(BONUS_NAME) $(LIB_DIR)$(LIB) $(UT) a.out

re: 	fclean all
