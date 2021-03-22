##
## EPITECH PROJECT, 2019
## My rpg
## File description:
## Main Makefile
##

SRC=		src/lib/my_putchar.c 			\
			src/lib/my_revstr.c				\
			src/lib/my_putnbr.c 			\
			src/lib/my_nbr.c				\
			src/lib/my_putstr.c 			\
			src/lib/my_strlen.c 			\
			src/init/init_map.c 			\
			src/init/init_heros.c 			\
			src/start_all.c 				\
			src/texture_load.c 				\
			src/window.c 					\
			src/animation_manager.c 		\
			src/draw_manager.c 				\
			src/survival/day_know.c			\
			src/mouse.c 					\
			src/survival/survival_init_two.c\
			src/main_display.c 				\
			src/free.c 						\
			src/event.c 					\
			src/main.c						\
			src/menu/menu_manager.c			\
			src/survival/tree/tree_two.c	\
			src/survival/survival_manager.c	\
			src/survival/survival_destroy.c	\
			src/survival/survival_init.c	\
			src/survival/survival_mouse.c	\
			src/survival/survival_draw_map.c\
			src/survival/inv/inv.c			\
			src/survival/hero/survival_hero.c	\
			src/survival/survival_random.c	\
			src/survival/hero/survival_moverect.c	\
			src/survival/hero/survival_hero_one.c	\
			src/survival/hero/survival_hero_two.c	\
			src/survival/hero/survival_hero_three.c	\
			src/survival/hero/survival_hero_four.c	\
			src/survival/hero/survival_click_moving.c	\
			src/survival/hero/survival_click_hero.c		\
			src/survival/survival_anim.c			\
			src/survival/survival_pass_day.c		\
			src/survival/survival_stats.c			\
			src/survival/survival_rect_stats.c		\
			src/survival/tree/tree.c			\
			src/survival/tree/cape.c			\
			src/survival/tree/fist.c			\
			src/survival/tree/gloves.c			\
			src/survival/tree/helmet.c			\
			src/survival/tree/shoes.c			\
			src/survival/inv/items_print.c			\
			src/survival/inv/items_manager.c		\
			src/survival/inv/items_init.c			\
			src/survival/inv/item/paint.c			\
			src/survival/inv/item/card.c			\
			src/survival/inv/item/bear.c			\
			src/survival/inv/item/letter.c			\
			src/survival/inv/item/soupe.c			\
			src/survival/inv/item/bottle.c			\
			src/survival/inv/item/honey.c			\
			src/survival/survival_check.c			\
			src/survival/inv/item/smoothie.c		\
			src/survival/inv/item/apple.c			\
			src/survival/inv/item/hamburger.c		\
			src/survival/inv/item/chicken.c			\
			src/survival/inv/item/fish.c			\
			src/survival/inv/item/sushi.c			\
			src/survival/inv/item/potion.c			\
			src/survival/inv/item/sword_one.c		\
			src/survival/inv/item/sword_two.c		\
			src/survival/inv/item/sword_three.c		\
			src/survival/inv/item/bow_one.c			\
			src/survival/inv/item/bow_two.c			\
			src/survival/inv/item/diamond.c			\
			src/survival/inv/item/sword_ultimate.c		\
			src/survival/inv/item/key.c			\
			src/survival/inv/item/gift.c			\
			src/survival/inv/item/totem.c			\
			src/survival/inv/item/bonzai.c			\
			src/survival/inv/give/paint.c			\
			src/survival/inv/give/card.c			\
			src/survival/inv/give/bear.c			\
			src/survival/monster/attack_one.c		\
			src/survival/monster/attack_two.c		\
			src/survival/monster/attack_three.c		\
			src/survival/monster/attack_four.c		\
			src/survival/inv/give/letter.c			\
			src/survival/inv/give/soupe.c			\
			src/survival/inv/give/bottle.c			\
			src/survival/inv/give/honey.c			\
			src/survival/inv/give/smoothie.c		\
			src/survival/inv/give/apple.c			\
			src/survival/inv/give/hamburger.c		\
			src/survival/inv/give/chicken.c			\
			src/survival/inv/give/fish.c			\
			src/survival/inv/give/sushi.c			\
			src/survival/inv/give/potion.c			\
			src/survival/inv/give/sword_one.c		\
			src/survival/inv/give/sword_two.c		\
			src/survival/inv/give/sword_three.c		\
			src/survival/inv/give/bow_one.c			\
			src/survival/inv/give/bow_two.c			\
			src/survival/inv/give/diamond.c			\
			src/survival/inv/give/sword_ultimate.c		\
			src/survival/inv/give/key.c			\
			src/survival/inv/give/gift.c			\
			src/survival/inv/give/totem.c			\
			src/survival/monster/monster.c			\
			src/survival/inv/give/bonzai.c			\
			src/survival/inv/item_give.c			\
			src/survival/success/success_manager.c		\
			src/survival/event/event_manager.c		\
			src/survival/dead/dead_manager.c		\
			src/survival/inv/item_taken.c

OBJ		=	$(SRC:.c=.o)

CFLAGS		=	-Iinclude -W -Wextra -pedantic -Wall -g3
#CFLAGS		=	-Iinclude -g3

NAME		=	my_rpg

all		:	$(NAME)

$(NAME)		:	$(OBJ)
			gcc -lc_graph_prog -lm -o $(NAME) $(OBJ)
			rm -f $(OBJ)

clean		:
			rm -f $(OBJ)

fclean		:	clean
			rm -f $(NAME)
			rm -f $(OBJ)
			rm -f tests/*.gcno
			rm -f tests/*.gcda
			rm -f tests/*~
			rm -f src/*.gcno
			rm -f src/*.gcda
			rm -f src/*~
			rm -f src/lib/*.gcno
			rm -f src/lib/*.gcda
			rm -f src/lib/*~

re		:	fclean all
