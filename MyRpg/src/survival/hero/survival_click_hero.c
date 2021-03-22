/*
** EPITECH PROJECT, 2018
** my_world
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void save_pos(container_t *c, int hero)
{
	if (c->survival->save_pos <= 5)
		c->survival->save_pos += 1;
	switch (hero) {
		case (1) :
			c->survival->x_save_one = c->survival->pos_one.x;
			c->survival->y_save_one = c->survival->pos_one.y;
			break;
		case (2) :
			c->survival->x_save_two = c->survival->pos_two.x;
			c->survival->y_save_two = c->survival->pos_two.y;
			break;
		case (3) :
			c->survival->x_save_three = c->survival->pos_three.x;
			c->survival->y_save_three = c->survival->pos_three.y;
			break;
		case (4) :
			c->survival->x_save_four = c->survival->pos_four.x;
			c->survival->y_save_four = c->survival->pos_four.y;
			break;
	}
}

void click_move_tw(container_t *c, int i, int hero)
{
	switch (hero) {
	case (2) :
		if (i == 1)
			c->survival->player_select = 2;
		click_move_two(c, i);
		break;
	case (3) :
		if (i == 1)
			c->survival->player_select = 3;
		click_move_three(c, i);
		break;
	case (4) :
		if (i == 1)
			c->survival->player_select = 4;
		click_move_four(c, i);
		break;
	}
}

void click_move(container_t *c, int i, int hero)
{
	int j =  c->survival->save_pos;
	if (j == 1 || j == 2 || j == 3 || j == 4)
		save_pos(c, hero);
	switch (hero) {
	case (1) :
		if (i == 1)
			c->survival->player_select = 1;
		click_move_one(c, i);
		break;
	default :
		click_move_tw(c, i, hero);
		break;
	}
}

void click_hero(container_t *c)
{
	sfVector2f x_one = {c->survival->pos_one.x, c->survival->pos_one.y};
	sfVector2f y_one = {c->survival->pos_one.x + 40,	\
			c->survival->pos_one.y + 70};
	sfVector2f x_two = {c->survival->pos_two.x, c->survival->pos_two.y};
	sfVector2f y_two = {c->survival->pos_two.x + 40,	\
			c->survival->pos_two.y + 70};
	sfVector2f x_three = {c->survival->pos_three.x,		\
			c->survival->pos_three.y};
	sfVector2f y_three = {c->survival->pos_three.x +		\
			40, c->survival->pos_three.y + 70};
	sfVector2f x_four = {c->survival->pos_four.x, c->survival->pos_four.y};
	sfVector2f y_four = {c->survival->pos_four.x + 40,	\
			c->survival->pos_four.y + 70};
	click_move(c, mouse_check(c, x_one, y_one), 1);
	click_move(c, mouse_check(c, x_two, y_two), 2);
	click_move(c, mouse_check(c, x_three, y_three), 3);
	click_move(c, mouse_check(c, x_four, y_four), 4);
}
