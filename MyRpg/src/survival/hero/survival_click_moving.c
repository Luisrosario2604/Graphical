/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void click_move_four(container_t *c, int i)
{
	int a = c->survival->replace_one;
	int b = c->survival->replace_two;
	int e = c->survival->replace_three;
	if (c->survival->not_moving_four == 0 && i	\
	== 2 && a == 0 && b == 0 && e == 0) {
		if (c->survival->replace_four == 0)
			save_pos(c, 4);
		c->survival->pos_four.x = c->window->xMouse - 20;
		c->survival->pos_four.y = c->window->yMouse - 25;
		c->survival->replace_four = 1;
	} else if ((i == 0 || i == 1) && c->survival->replace_four == 1) {
		c->survival->replace_four = 0;
		c->survival->pos_four.x = c->survival->x_save_four;
		c->survival->pos_four.y = c->survival->y_save_four;
	}
}

void click_move_three(container_t *c, int i)
{
	int a = c->survival->replace_one;
	int b = c->survival->replace_two;
	int d = c->survival->replace_four;
	if (c->survival->not_moving_three == 0 &&	\
	i == 2 && a == 0 && b == 0 && d == 0) {
		if (c->survival->replace_three == 0)
			save_pos(c, 3);
		c->survival->pos_three.x = c->window->xMouse - 20;
		c->survival->pos_three.y = c->window->yMouse - 25;
		c->survival->replace_three = 1;
	} else if ((i == 0 || i == 1) && c->survival->replace_three == 1) {
		c->survival->replace_three = 0;
		c->survival->pos_three.x = c->survival->x_save_three;
		c->survival->pos_three.y = c->survival->y_save_three;
	}
}

void click_move_two(container_t *c, int i)
{
	int a = c->survival->replace_one;
	int e = c->survival->replace_three;
	int d = c->survival->replace_four;
	if (c->survival->not_moving_two == 0 && i	\
	== 2 && a == 0 && e == 0 && d == 0) {
		if (c->survival->replace_two == 0)
			save_pos(c, 2);
		c->survival->pos_two.x = c->window->xMouse - 20;
		c->survival->pos_two.y = c->window->yMouse - 25;
		c->survival->replace_two = 1;
	} else if ((i == 0 || i == 1) && c->survival->replace_two == 1) {
		c->survival->replace_two = 0;
		c->survival->pos_two.x = c->survival->x_save_two;
		c->survival->pos_two.y = c->survival->y_save_two;
	}
}

void click_move_one(container_t *c, int i)
{
	int b = c->survival->replace_two;
	int e = c->survival->replace_three;
	int d = c->survival->replace_four;
	if (c->survival->not_moving_one == 0 &&	\
	i == 2 && b == 0 && e == 0 && d == 0) {
		if (c->survival->replace_one == 0)
			save_pos(c, 1);
		c->survival->pos_one.x = c->window->xMouse - 20;
		c->survival->pos_one.y = c->window->yMouse - 25;
		c->survival->replace_one = 1;
	} else if ((i == 0 || i == 1) && c->survival->replace_one == 1) {
		c->survival->replace_one = 0;
		c->survival->pos_one.x = c->survival->x_save_one;
		c->survival->pos_one.y = c->survival->y_save_one;
	}
}
