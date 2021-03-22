##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile for compilation
##

LIB_DIR	=	./lib/my/

LIB	=	libmy.a

SRC_DIR	=	./src/

SRC	=		$(SRC_DIR)*.c

MAIN	=	$(SRC_DIR)main.c

CFLAGS	=	-W -Wall -Wextra -pedantic -I./include/

LDFLAGS	=	-lcriterion -lgcov -coverage

OBJ	=	$(SRC:.c=.o) $(MAIN:.c=.o)

NAME	=	my_runner

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C $(LIB_DIR)
	gcc -o $(NAME) $(OBJ) -L$(LIB_DIR) -lmy -l c_graph_prog

gdb:
	make -C $(LIB_DIR)
	gcc -o $(NAME) $(SRC) $(MAIN) $(CFLAGS) -L$(LIB_DIR) -lmy -g3 -l c_graph_prog

clean:
	make clean -C $(LIB_DIR)
	rm -f ./include/*.gch
	rm -f $(OBJ) $(BONUS_OBJ) *.gc*
	rm -f $(LIB_DIR)*.o

fclean: 	clean
	make fclean -C $(LIB_DIR)
	rm -f $(NAME) $(BONUS_NAME) $(LIB_DIR)$(LIB) $(UT) a.out

re: 	fclean all
