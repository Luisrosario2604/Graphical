##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile for compilation
##

LIB_DIR	=	./lib/

LIB	=	libmy.a

SRC_DIR	=	./src/

SRC	=		$(SRC_DIR)check_shoots.c\
			$(SRC_DIR)duck_display.c\
			$(SRC_DIR)Main_game2.c\
			$(SRC_DIR)Move_Bullet.c\
			$(SRC_DIR)Move_Dog.c\
			$(SRC_DIR)Move_Duck.c\
			$(SRC_DIR)Move_Duck2.c\
			$(SRC_DIR)Move_Duck3.c\
			$(SRC_DIR)Move_Duck4.c\
			$(SRC_DIR)Starter.c\
			$(SRC_DIR)Window.c\

MAIN	=	$(SRC_DIR)Main_game.c

CFLAGS	=	-W -Wall -Wextra -pedantic -I./include/

LDFLAGS	=	-lcriterion -lgcov -coverage

OBJ	=	$(SRC:.c=.o) $(MAIN:.c=.o)

NAME	=	my_hunter

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
