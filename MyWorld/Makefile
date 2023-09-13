##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile for compilation
##

LIB_DIR	=	./lib/

LIB	=	libmy.a

SRC_DIR	=	./src/

SRC	=		$(SRC_DIR)camera.c\
			$(SRC_DIR)check_set.c\
			$(SRC_DIR)choose_map.c\
			$(SRC_DIR)create_map.c\
			$(SRC_DIR)display_wireframe.c\
			$(SRC_DIR)gamma.c\
			$(SRC_DIR)getfile.c\
			$(SRC_DIR)main_display.c\
			$(SRC_DIR)map_mouse.c\
			$(SRC_DIR)menu.c\
			$(SRC_DIR)mouse_set_check.c\
			$(SRC_DIR)mouse.c\
			$(SRC_DIR)my_putchar.c\
			$(SRC_DIR)my_putnbr.c\
			$(SRC_DIR)my_strlen.c\
			$(SRC_DIR)save_map.c\
			$(SRC_DIR)settings.c\
			$(SRC_DIR)start_all.c\
			$(SRC_DIR)textures_sprites.c\
			$(SRC_DIR)window.c\
			$(SRC_DIR)wireframe_square.c\
			$(SRC_DIR)wireframe.c\

MAIN	=	$(SRC_DIR)main.c

CFLAGS	=	-W -Wall -Wextra -pedantic -I./include/

LDFLAGS	=	-lcriterion -lgcov -coverage

OBJ	=	$(SRC:.c=.o) $(MAIN:.c=.o)

NAME	=	my_world

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C $(LIB_DIR)
	gcc -o $(NAME) $(OBJ) -L$(LIB_DIR) -lmy -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -lm
gdb:
	make -C $(LIB_DIR)
	gcc -o $(NAME) $(SRC) $(MAIN) $(CFLAGS) -L$(LIB_DIR) -lmy -g3 -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -lm

clean:
	make clean -C $(LIB_DIR)
	rm -f ./include/*.gch
	rm -f $(OBJ) $(BONUS_OBJ) *.gc*
	rm -f $(LIB_DIR)*.o

fclean: 	clean
	make fclean -C $(LIB_DIR)
	rm -f $(NAME) $(BONUS_NAME) $(LIB_DIR)$(LIB) $(UT) a.out

re: 	fclean all
