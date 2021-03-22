/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** mouse
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void print_info_hero(container_t *c, int i, int hero)
{
	if (i == 1) {
		sfSprite_setColor(c->survival->map_s,			\
				sfColor_fromRGBA(100, 100, 100, 255));
		c->survival->info = 1;
	} else if (hero == 1) {
		c->survival->info = 0;
	}
}

void check_hero_mouse(container_t *c)
{
	sfVector2f x_one = {c->survival->pos_one.x, c->survival->pos_one.y};
	sfVector2f y_one = {c->survival->pos_one.x + 40,	\
			c->survival->pos_one.y + 70};
	sfVector2f x_two = {c->survival->pos_two.x, c->survival->pos_two.y};
	sfVector2f y_two = {c->survival->pos_two.x + 40,	\
			c->survival->pos_two.y + 70};
	sfVector2f x_three = {c->survival->pos_three.x,		\
			c->survival->pos_three.y};
	sfVector2f y_three = {c->survival->pos_three.x + 40,	\
			c->survival->pos_three.y + 70};
	sfVector2f x_four = {c->survival->pos_four.x, c->survival->pos_four.y};
	sfVector2f y_four = {c->survival->pos_four.x + 40,	\
			c->survival->pos_four.y + 70};
	print_info_hero(c, mouse_check(c, x_one, y_one), 1);
	print_info_hero(c, mouse_check(c, x_two, y_two), 2);
	print_info_hero(c, mouse_check(c, x_three, y_three), 3);
	print_info_hero(c, mouse_check(c, x_four, y_four), 4);
}

int mouse_check(container_t *c, sfVector2f one, sfVector2f two)
{
	int i = 0;
	if (c->window->xMouse >= one.x && c->window->xMouse <= two.x)
		if (c->window->yMouse >= one.y && c->window->yMouse <= two.y)
			i = 1;
	if (i == 1 && c->window->click == 1)
		i = 2;
	return (i);
}
