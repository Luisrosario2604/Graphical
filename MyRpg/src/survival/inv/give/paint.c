/*
** EPITECH PROJECT, 2018
** my_world
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void give_paint_two(container_t *c)
{
	switch (c->survival->player_select) {
	case (4) :
		c->survival->food_four += 0;
		c->survival->thirst_four += 0;
		c->survival->moral_four += 20;
		break;
	}
}

void give_paint(container_t *c)
{
	c->inv->paint -= 1;
	switch (c->survival->player_select) {
	case (1) :
		c->survival->thirst_one += 0;
		c->survival->moral_one += 20;
		break;
	case (2) :
		c->survival->food_two += 0;
		c->survival->thirst_two += 0;
		c->survival->moral_two += 20;
		break;
	case (3) :
		c->survival->food_three += 0;
		c->survival->thirst_three += 0;
		c->survival->moral_three += 20;
		break;
	default :
		give_paint_two(c);
		break;
	}
}
